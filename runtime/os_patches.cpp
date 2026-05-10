#include "recomp.h"
#include "ultramodern/ultra64.h"
#include <cstdio>

extern "C" void osCreateThread(RDRAM_ARG PTR(OSThread) t_, OSId id, PTR(thread_func_t) entrypoint, PTR(void) arg, PTR(void) sp, OSPri pri);
extern "C" void osStartThread(RDRAM_ARG PTR(OSThread) t_);

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
