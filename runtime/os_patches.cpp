#include "recomp.h"
#include "ultramodern/ultra64.h"
#include <cstdio>

extern "C" void osCreateThread(RDRAM_ARG PTR(OSThread) t_, OSId id, PTR(thread_func_t) entrypoint, PTR(void) arg, PTR(void) sp, OSPri pri);
extern "C" void osStartThread(RDRAM_ARG PTR(OSThread) t_);

extern "C" void func_8022B780(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_8022B460(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_80231CC4(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_802C9B90(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_8023E6B0(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_80230FF8(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_8023E840(uint8_t* rdram, recomp_context* ctx);

extern "C" RECOMP_FUNC void func_80237210(uint8_t* rdram, recomp_context* ctx) {
    int32_t t_      = (int32_t)ctx->r4;
    int32_t id      = (int32_t)ctx->r5;
    int32_t entry   = (int32_t)ctx->r6;
    int32_t arg     = (int32_t)ctx->r7;
    int32_t sp      = MEM_W(0x10, ctx->r29);
    int32_t pri     = MEM_W(0x14, ctx->r29);
    fprintf(stderr, "[OS] osCreateThread t=%08X id=%d entry=%08X arg=%08X sp=%08X pri=%d\n",
            (uint32_t)t_, id, (uint32_t)entry, (uint32_t)arg, (uint32_t)sp, pri);
    fflush(stderr);
    osCreateThread(rdram, t_, id, entry, arg, sp, pri);
}

extern "C" RECOMP_FUNC void func_80237360(uint8_t* rdram, recomp_context* ctx) {
    int32_t t_ = (int32_t)ctx->r4;
    fprintf(stderr, "[OS] osStartThread t=%08X\n", (uint32_t)t_);
    fflush(stderr);
    osStartThread(rdram, t_);
}

extern "C" RECOMP_FUNC void func_80231584(uint8_t* rdram, recomp_context* ctx) {
    fprintf(stderr, "[PATCH] func_80231584: idle thread - creating mesg queue\n");
    fflush(stderr);

    const int32_t q_addr   = (int32_t)0x80280C70;
    const int32_t buf_addr = (int32_t)0x80280C88;
    osCreateMesgQueue(rdram, q_addr, buf_addr, 1);

    fprintf(stderr, "[PATCH] func_80231584: idle thread - blocking on osRecvMesg (yields to boot thread)\n");
    fflush(stderr);

    while (true) {
        osRecvMesg(rdram, q_addr, NULLPTR, OS_MESG_BLOCK);
    }
}

extern "C" RECOMP_FUNC void func_80231630(uint8_t* rdram, recomp_context* ctx) {
    fprintf(stderr, "[PATCH] func_80231630: main game thread entry\n");
    fflush(stderr);

    ctx->r29 = ADD32(ctx->r29, -0x18);
    MEM_W(0x18, ctx->r29) = ctx->r4;
    MEM_W(0x14, ctx->r29) = ctx->r31;

    ctx->r4 = S32(0x803233C0);
    ctx->r5 = 0;
    ctx->r6 = ADD32(0, 0x116F0);
    fprintf(stderr, "[PATCH] func_80231630: calling func_8022B780 (bzero BSS)\n");
    fflush(stderr);
    func_8022B780(rdram, ctx);

    ctx->r4 = S32(0x80287430);
    ctx->r5 = ADD32(0, 0x57D20);
    ctx->r6 = ADD32(0, 0xC0F70);
    fprintf(stderr, "[PATCH] func_80231630: calling func_8022B460 (ROM DMA)\n");
    fflush(stderr);
    func_8022B460(rdram, ctx);

    MEM_B(0x0C0A, S32(0x80280000)) = 0;
    fprintf(stderr, "[PATCH] func_80231630: calling func_80231CC4 (game state init)\n");
    fflush(stderr);
    func_80231CC4(rdram, ctx);

    ctx->r4 = MEM_W(0x18, ctx->r29);
    fprintf(stderr, "[PATCH] func_80231630: calling func_802C9B90 (main game loop)\n");
    fflush(stderr);
    func_802C9B90(rdram, ctx);

    ctx->r31 = MEM_W(0x14, ctx->r29);
    ctx->r29 = ADD32(ctx->r29, 0x18);
}

extern "C" RECOMP_FUNC void func_8023169C(uint8_t* rdram, recomp_context* ctx) {
    fprintf(stderr, "[PATCH] func_8023169C: boot thread entry\n");
    fflush(stderr);

    ctx->r29 = ADD32(ctx->r29, -0x20);
    MEM_W(0x1C, ctx->r29) = ctx->r31;
    MEM_W(0x20, ctx->r29) = ctx->r4;

    ctx->r4 = ADD32(0, 0x96);
    ctx->r5 = ADD32(S32(0x8028 << 16), 0xCB0);
    ctx->r6 = ADD32(S32(0x8028 << 16), 0xC90);
    ctx->r7 = ADD32(0, 0x8);
    func_8023E6B0(rdram, ctx);

    osCreateMesgQueue(rdram, S32(0x80280C30), S32(0x80280C28), 1);

    ctx->r15 = ADD32(0, 0xFA);
    MEM_W(0x14, ctx->r29) = ctx->r15;
    ctx->r14 = ADD32(S32(0x8028 << 16), -0x54A0);
    MEM_W(0x10, ctx->r29) = ctx->r14;
    ctx->r4 = ADD32(S32(0x8028 << 16), 0xEB8);
    ctx->r5 = 0;
    ctx->r6 = ADD32(S32(0x8023 << 16), 0x1584);
    ctx->r7 = 0;
    func_80237210(rdram, ctx);

    ctx->r4 = ADD32(S32(0x8028 << 16), 0xEB8);
    func_80237360(rdram, ctx);

    func_80230FF8(rdram, ctx);

    ctx->r25 = ADD32(0, 0xA);
    MEM_W(0x14, ctx->r29) = ctx->r25;
    ctx->r24 = ADD32(S32(0x8028 << 16), 0xB60);
    MEM_W(0x10, ctx->r29) = ctx->r24;
    ctx->r4 = ADD32(S32(0x8028 << 16), 0xD08);
    ctx->r5 = ADD32(0, 0x6);
    ctx->r6 = ADD32(S32(0x8023 << 16), 0x1630);
    ctx->r7 = MEM_W(ctx->r29, 0x20);
    func_80237210(rdram, ctx);

    if (MEM_W(S32(0x8028 << 16), 0xC0C) == 0) {
        ctx->r4 = ADD32(S32(0x8028 << 16), 0xD08);
        func_80237360(rdram, ctx);
    }

    ctx->r4 = 0; ctx->r5 = 0;
    func_8023E840(rdram, ctx);

    fprintf(stderr, "[PATCH] func_8023169C: blocking on osRecvMesg (yields to main game thread)\n");
    fflush(stderr);

    while (true) {
        osRecvMesg(rdram, S32(0x80280C30), NULLPTR, OS_MESG_BLOCK);
    }
}
