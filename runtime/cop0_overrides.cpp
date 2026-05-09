#include "recomp.h"

extern "C" void cop0_status_write(recomp_context* ctx, gpr value) {
    uint32_t old_sr = ctx->status_reg;
    uint32_t new_sr = (uint32_t)value;
    uint32_t changed = old_sr ^ new_sr;

    constexpr uint32_t FR  = 0x04000000;

    if (changed & FR) {
        if (new_sr & FR) {
            ctx->f_odd = &ctx->f1.u32l;
            ctx->mips3_float_mode = true;
        } else {
            ctx->f_odd = &ctx->f0.u32h;
            ctx->mips3_float_mode = false;
        }
        changed &= ~FR;
    }

    ctx->status_reg = new_sr;
}

extern "C" gpr cop0_status_read(recomp_context* ctx) {
    return (gpr)(int32_t)ctx->status_reg;
}
