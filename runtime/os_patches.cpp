#include "recomp.h"
#include "ultramodern/ultra64.h"
#include <cstdio>

extern "C" void osCreateThread(RDRAM_ARG PTR(OSThread) t_, OSId id, PTR(thread_func_t) entrypoint, PTR(void) arg, PTR(void) sp, OSPri pri);
extern "C" void osStartThread(RDRAM_ARG PTR(OSThread) t_);

extern "C" void func_8022B780(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_8022B460(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_80231CC4(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_802C9B90(uint8_t* rdram, recomp_context* ctx);

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
