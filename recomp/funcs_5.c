#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8022B948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B948: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8022B94C: lw          $t6, 0x5F7C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5F7C);
    // 0x8022B950: lui         $t1, 0x8027
    ctx->r9 = S32(0X8027 << 16);
    // 0x8022B954: lw          $t1, 0x5F88($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5F88);
    // 0x8022B958: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B95C: addiu       $t9, $a1, -0x1
    ctx->r25 = ADD32(ctx->r5, -0X1);
    // 0x8022B960: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8022B964: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B968: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8022B96C: nor         $t0, $t9, $zero
    ctx->r8 = ~(ctx->r25 | 0);
    // 0x8022B970: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8022B974: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022B978: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8022B97C: beq         $t1, $zero, L_8022B994
    if (ctx->r9 == 0) {
        // 0x8022B980: and         $a3, $t8, $t0
        ctx->r7 = ctx->r24 & ctx->r8;
            goto L_8022B994;
    }
    // 0x8022B980: and         $a3, $t8, $t0
    ctx->r7 = ctx->r24 & ctx->r8;
    // 0x8022B984: jal         0x8022B80C
    // 0x8022B988: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8022B80C(rdram, ctx);
        goto after_0;
    // 0x8022B988: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x8022B98C: b           L_8022BA48
    // 0x8022B990: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8022BA48;
    // 0x8022B990: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8022B994:
    // 0x8022B994: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8022B998: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8022B99C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x8022B9A0: jal         0x8022B2F4
    // 0x8022B9A4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8022B2F4(rdram, ctx);
        goto after_1;
    // 0x8022B9A4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x8022B9A8: bne         $v0, $zero, L_8022B9CC
    if (ctx->r2 != 0) {
        // 0x8022B9AC: lw          $a2, 0x2C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X2C);
            goto L_8022B9CC;
    }
    // 0x8022B9AC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B9B0: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8022B9B4: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x8022B9B8: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x8022B9BC: addu        $a3, $a3, $s0
    ctx->r7 = ADD32(ctx->r7, ctx->r16);
    // 0x8022B9C0: jal         0x8022B374
    // 0x8022B9C4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8022B374(rdram, ctx);
        goto after_2;
    // 0x8022B9C4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_2:
    // 0x8022B9C8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
L_8022B9CC:
    // 0x8022B9CC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8022B9D0: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8022B9D4: addiu       $v0, $v0, 0x5F7C
    ctx->r2 = ADD32(ctx->r2, 0X5F7C);
    // 0x8022B9D8: addu        $t2, $a3, $s0
    ctx->r10 = ADD32(ctx->r7, ctx->r16);
    // 0x8022B9DC: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x8022B9E0: lui         $t4, 0x8027
    ctx->r12 = S32(0X8027 << 16);
    // 0x8022B9E4: lw          $t4, 0x5F80($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5F80);
    // 0x8022B9E8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022B9EC: addiu       $a0, $a0, 0x40D0
    ctx->r4 = ADD32(ctx->r4, 0X40D0);
    // 0x8022B9F0: sltu        $at, $t2, $t4
    ctx->r1 = ctx->r10 < ctx->r12 ? 1 : 0;
    // 0x8022B9F4: bne         $at, $zero, L_8022BA44
    if (ctx->r1 != 0) {
        // 0x8022B9F8: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_8022BA44;
    }
    // 0x8022B9F8: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x8022B9FC: jal         0x80231A24
    // 0x8022BA00: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x8022BA00: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_3:
    // 0x8022BA04: lui         $t5, 0x8027
    ctx->r13 = S32(0X8027 << 16);
    // 0x8022BA08: lw          $t5, 0x5ED0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5ED0);
    // 0x8022BA0C: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8022BA10: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022BA14: addiu       $v0, $v0, 0x5F88
    ctx->r2 = ADD32(ctx->r2, 0X5F88);
    // 0x8022BA18: sw          $t5, 0x5F7C($at)
    MEM_W(0X5F7C, ctx->r1) = ctx->r13;
    // 0x8022BA1C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8022BA20: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022BA24: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8022BA28: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8022BA2C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8022BA30: sw          $zero, 0x5E78($at)
    MEM_W(0X5E78, ctx->r1) = 0;
    // 0x8022BA34: jal         0x8022B80C
    // 0x8022BA38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022B80C(rdram, ctx);
        goto after_4;
    // 0x8022BA38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8022BA3C: b           L_8022BA48
    // 0x8022BA40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8022BA48;
    // 0x8022BA40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8022BA44:
    // 0x8022BA44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8022BA48:
    // 0x8022BA48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022BA4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8022BA50: jr          $ra
    // 0x8022BA54: nop

    return;
    // 0x8022BA54: nop

;}
RECOMP_FUNC void func_80247490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247490: bne         $a0, $zero, L_802474A0
    if (ctx->r4 != 0) {
        // 0x80247494: nop
    
            goto L_802474A0;
    }
    // 0x80247494: nop

    // 0x80247498: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8024749C: lw          $a0, 0x16E0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X16E0);
L_802474A0:
    // 0x802474A0: jr          $ra
    // 0x802474A4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    return;
    // 0x802474A4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
;}
RECOMP_FUNC void func_80226790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80226790: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80226794: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226798: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x8022679C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802267A0: addiu       $a0, $sp, 0x52
    ctx->r4 = ADD32(ctx->r29, 0X52);
    // 0x802267A4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802267A8: jal         0x80225424
    // 0x802267AC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_0;
    // 0x802267AC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x802267B0: lhu         $a1, 0x52($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X52);
    // 0x802267B4: slti        $at, $a1, 0x1001
    ctx->r1 = SIGNED(ctx->r5) < 0X1001 ? 1 : 0;
    // 0x802267B8: bne         $at, $zero, L_802267D0
    if (ctx->r1 != 0) {
        // 0x802267BC: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_802267D0;
    }
    // 0x802267BC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802267C0: jal         0x80231A24
    // 0x802267C4: addiu       $a0, $a0, 0x3BE4
    ctx->r4 = ADD32(ctx->r4, 0X3BE4);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x802267C4: addiu       $a0, $a0, 0x3BE4
    ctx->r4 = ADD32(ctx->r4, 0X3BE4);
    after_1:
    // 0x802267C8: addiu       $t6, $zero, 0x1000
    ctx->r14 = ADD32(0, 0X1000);
    // 0x802267CC: sh          $t6, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r14;
L_802267D0:
    // 0x802267D0: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x802267D4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802267D8: jal         0x80225424
    // 0x802267DC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_2;
    // 0x802267DC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x802267E0: addiu       $s0, $sp, 0x44
    ctx->r16 = ADD32(ctx->r29, 0X44);
    // 0x802267E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802267E8: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802267EC: jal         0x80225424
    // 0x802267F0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_3;
    // 0x802267F0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x802267F4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x802267F8: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802267FC: jal         0x80225424
    // 0x80226800: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_4;
    // 0x80226800: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x80226804: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80226808: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8022680C: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x80226810: nop

    // 0x80226814: bc1fl       L_80226830
    if (!c1cs) {
        // 0x80226818: addiu       $a0, $zero, 0x1C
        ctx->r4 = ADD32(0, 0X1C);
            goto L_80226830;
    }
    goto skip_0;
    // 0x80226818: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    skip_0:
    // 0x8022681C: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80226820: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x80226824: nop

    // 0x80226828: bc1t        L_80226878
    if (c1cs) {
        // 0x8022682C: addiu       $a0, $zero, 0x1C
        ctx->r4 = ADD32(0, 0X1C);
            goto L_80226878;
    }
    // 0x8022682C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
L_80226830:
    // 0x80226830: jal         0x8022B948
    // 0x80226834: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_5;
    // 0x80226834: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x80226838: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022683C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80226840: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80226844: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x80226848: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x8022684C: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80226850: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80226854: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80226858: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8022685C: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    // 0x80226860: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80226864: sb          $t7, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r15;
    // 0x80226868: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x8022686C: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x80226870: b           L_8022687C
    // 0x80226874: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
        goto L_8022687C;
    // 0x80226874: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
L_80226878:
    // 0x80226878: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
L_8022687C:
    // 0x8022687C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80226880: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226884: jal         0x80225424
    // 0x80226888: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_6;
    // 0x80226888: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_6:
    // 0x8022688C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80226890: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226894: jal         0x80225424
    // 0x80226898: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_7;
    // 0x80226898: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_7:
    // 0x8022689C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802268A0: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802268A4: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x802268A8: nop

    // 0x802268AC: bc1fl       L_802268C8
    if (!c1cs) {
        // 0x802268B0: addiu       $a0, $zero, 0x1C
        ctx->r4 = ADD32(0, 0X1C);
            goto L_802268C8;
    }
    goto skip_1;
    // 0x802268B0: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    skip_1:
    // 0x802268B4: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802268B8: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x802268BC: nop

    // 0x802268C0: bc1t        L_8022690C
    if (c1cs) {
        // 0x802268C4: addiu       $a0, $zero, 0x1C
        ctx->r4 = ADD32(0, 0X1C);
            goto L_8022690C;
    }
    // 0x802268C4: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
L_802268C8:
    // 0x802268C8: jal         0x8022B948
    // 0x802268CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_8;
    // 0x802268CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_8:
    // 0x802268D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802268D4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802268D8: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x802268DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802268E0: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x802268E4: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x802268E8: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802268EC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802268F0: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x802268F4: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802268F8: sb          $t8, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r24;
    // 0x802268FC: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x80226900: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x80226904: b           L_80226910
    // 0x80226908: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
        goto L_80226910;
    // 0x80226908: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
L_8022690C:
    // 0x8022690C: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
L_80226910:
    // 0x80226910: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x80226914: lhu         $t4, 0x52($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X52);
    // 0x80226918: lhu         $a0, 0x54($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X54);
    // 0x8022691C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80226920: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x80226924: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80226928: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
    // 0x8022692C: jal         0x8022B948
    // 0x80226930: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022B948(rdram, ctx);
        goto after_9;
    // 0x80226930: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_9:
    // 0x80226934: lhu         $a2, 0x54($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X54);
    // 0x80226938: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8022693C: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226940: sll         $t7, $a2, 3
    ctx->r15 = S32(ctx->r6 << 3);
    // 0x80226944: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80226948: jal         0x80225424
    // 0x8022694C: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    func_80225424(rdram, ctx);
        goto after_10;
    // 0x8022694C: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    after_10:
    // 0x80226950: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    // 0x80226954: jal         0x8022B948
    // 0x80226958: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_11;
    // 0x80226958: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_11:
    // 0x8022695C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80226960: addiu       $a0, $v0, 0xA
    ctx->r4 = ADD32(ctx->r2, 0XA);
    // 0x80226964: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226968: jal         0x80225424
    // 0x8022696C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_12;
    // 0x8022696C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_12:
    // 0x80226970: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x80226974: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226978: jal         0x80225424
    // 0x8022697C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_13;
    // 0x8022697C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_13:
    // 0x80226980: addiu       $a0, $s0, 0xE
    ctx->r4 = ADD32(ctx->r16, 0XE);
    // 0x80226984: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226988: jal         0x80225424
    // 0x8022698C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_14;
    // 0x8022698C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x80226990: addiu       $a0, $s0, 0xF
    ctx->r4 = ADD32(ctx->r16, 0XF);
    // 0x80226994: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226998: jal         0x80225424
    // 0x8022699C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_15;
    // 0x8022699C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x802269A0: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    // 0x802269A4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802269A8: jal         0x80225424
    // 0x802269AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_16;
    // 0x802269AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_16:
    // 0x802269B0: addiu       $a0, $s0, 0x12
    ctx->r4 = ADD32(ctx->r16, 0X12);
    // 0x802269B4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802269B8: jal         0x80225424
    // 0x802269BC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_17;
    // 0x802269BC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_17:
    // 0x802269C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802269C4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802269C8: jal         0x80225424
    // 0x802269CC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_18;
    // 0x802269CC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_18:
    // 0x802269D0: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    // 0x802269D4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802269D8: jal         0x80225424
    // 0x802269DC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_19;
    // 0x802269DC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_19:
    // 0x802269E0: addiu       $a0, $s0, 0x22
    ctx->r4 = ADD32(ctx->r16, 0X22);
    // 0x802269E4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802269E8: jal         0x80225424
    // 0x802269EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_20;
    // 0x802269EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_20:
    // 0x802269F0: addiu       $a0, $s0, 0x23
    ctx->r4 = ADD32(ctx->r16, 0X23);
    // 0x802269F4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802269F8: jal         0x80225424
    // 0x802269FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_21;
    // 0x802269FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_21:
    // 0x80226A00: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x80226A04: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226A08: jal         0x80225424
    // 0x80226A0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_22;
    // 0x80226A0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_22:
    // 0x80226A10: addiu       $a0, $s0, 0x25
    ctx->r4 = ADD32(ctx->r16, 0X25);
    // 0x80226A14: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226A18: jal         0x80225424
    // 0x80226A1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_23;
    // 0x80226A1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_23:
    // 0x80226A20: addiu       $a0, $s0, 0x26
    ctx->r4 = ADD32(ctx->r16, 0X26);
    // 0x80226A24: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226A28: jal         0x80225424
    // 0x80226A2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_24;
    // 0x80226A2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_24:
    // 0x80226A30: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    // 0x80226A34: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226A38: jal         0x80225424
    // 0x80226A3C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_25;
    // 0x80226A3C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_25:
    // 0x80226A40: addiu       $a0, $s0, 0x27
    ctx->r4 = ADD32(ctx->r16, 0X27);
    // 0x80226A44: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226A48: jal         0x80225424
    // 0x80226A4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_26;
    // 0x80226A4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_26:
    // 0x80226A50: lhu         $t8, 0x52($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X52);
    // 0x80226A54: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x80226A58: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80226A5C: sh          $t8, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r24;
    // 0x80226A60: lw          $a2, 0x51E0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X51E0);
    // 0x80226A64: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x80226A68: lui         $t1, 0x8027
    ctx->r9 = S32(0X8027 << 16);
    // 0x80226A6C: beq         $a2, $zero, L_80226AB8
    if (ctx->r6 == 0) {
        // 0x80226A70: andi        $a1, $t2, 0xFFF
        ctx->r5 = ctx->r10 & 0XFFF;
            goto L_80226AB8;
    }
    // 0x80226A70: andi        $a1, $t2, 0xFFF
    ctx->r5 = ctx->r10 & 0XFFF;
    // 0x80226A74: lhu         $a0, 0x0($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X0);
    // 0x80226A78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80226A7C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80226A80: blez        $a0, L_80226AB8
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80226A84: nop
    
            goto L_80226AB8;
    }
    // 0x80226A84: nop

    // 0x80226A88: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
L_80226A8C:
    // 0x80226A8C: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x80226A90: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80226A94: slt         $at, $a3, $a0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80226A98: bne         $a1, $t9, L_80226AB0
    if (ctx->r5 != ctx->r25) {
        // 0x80226A9C: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_80226AB0;
    }
    // 0x80226A9C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80226AA0: lw          $t4, 0x4($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X4);
    // 0x80226AA4: addu        $t5, $t4, $v1
    ctx->r13 = ADD32(ctx->r12, ctx->r3);
    // 0x80226AA8: b           L_80226AB8
    // 0x80226AAC: lhu         $a1, 0x0($t5)
    ctx->r5 = MEM_HU(ctx->r13, 0X0);
        goto L_80226AB8;
    // 0x80226AAC: lhu         $a1, 0x0($t5)
    ctx->r5 = MEM_HU(ctx->r13, 0X0);
L_80226AB0:
    // 0x80226AB0: bne         $at, $zero, L_80226A8C
    if (ctx->r1 != 0) {
        // 0x80226AB4: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_80226A8C;
    }
    // 0x80226AB4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_80226AB8:
    // 0x80226AB8: addiu       $t1, $t1, 0x524C
    ctx->r9 = ADD32(ctx->r9, 0X524C);
    // 0x80226ABC: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x80226AC0: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80226AC4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80226AC8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80226ACC: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x80226AD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80226AD4: addiu       $a0, $a0, 0x3C20
    ctx->r4 = ADD32(ctx->r4, 0X3C20);
    // 0x80226AD8: bne         $t0, $zero, L_80226B04
    if (ctx->r8 != 0) {
        // 0x80226ADC: or          $a2, $t2, $zero
        ctx->r6 = ctx->r10 | 0;
            goto L_80226B04;
    }
    // 0x80226ADC: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x80226AE0: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x80226AE4: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x80226AE8: jal         0x80231A24
    // 0x80226AEC: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    func_80231A24(rdram, ctx);
        goto after_27;
    // 0x80226AEC: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    after_27:
    // 0x80226AF0: lui         $t1, 0x8027
    ctx->r9 = S32(0X8027 << 16);
    // 0x80226AF4: addiu       $t1, $t1, 0x524C
    ctx->r9 = ADD32(ctx->r9, 0X524C);
    // 0x80226AF8: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x80226AFC: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80226B00: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
L_80226B04:
    // 0x80226B04: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x80226B08: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x80226B0C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80226B10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80226B14: sw          $t9, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r25;
    // 0x80226B18: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x80226B1C: sw          $t4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r12;
    // 0x80226B20: lhu         $a2, 0x54($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X54);
    // 0x80226B24: blez        $a2, L_80226C34
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80226B28: andi        $v0, $a2, 0x1
        ctx->r2 = ctx->r6 & 0X1;
            goto L_80226C34;
    }
    // 0x80226B28: andi        $v0, $a2, 0x1
    ctx->r2 = ctx->r6 & 0X1;
    // 0x80226B2C: beql        $v0, $zero, L_80226B6C
    if (ctx->r2 == 0) {
        // 0x80226B30: lui         $a1, 0x8000
        ctx->r5 = S32(0X8000 << 16);
            goto L_80226B6C;
    }
    goto skip_2;
    // 0x80226B30: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    skip_2:
    // 0x80226B34: lbu         $v0, 0x0($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X0);
    // 0x80226B38: addiu       $t2, $zero, 0xFD
    ctx->r10 = ADD32(0, 0XFD);
    // 0x80226B3C: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x80226B40: bne         $t2, $v0, L_80226B64
    if (ctx->r10 != ctx->r2) {
        // 0x80226B44: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_80226B64;
    }
    // 0x80226B44: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80226B48: lw          $t5, 0x4($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X4);
    // 0x80226B4C: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80226B50: addu        $t6, $t0, $a1
    ctx->r14 = ADD32(ctx->r8, ctx->r5);
    // 0x80226B54: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x80226B58: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80226B5C: lhu         $a2, 0x54($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X54);
    // 0x80226B60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80226B64:
    // 0x80226B64: beq         $a3, $a2, L_80226C34
    if (ctx->r7 == ctx->r6) {
        // 0x80226B68: lui         $a1, 0x8000
        ctx->r5 = S32(0X8000 << 16);
            goto L_80226C34;
    }
    // 0x80226B68: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
L_80226B6C:
    // 0x80226B6C: addiu       $t2, $zero, 0xFD
    ctx->r10 = ADD32(0, 0XFD);
    // 0x80226B70: sll         $t8, $a3, 3
    ctx->r24 = S32(ctx->r7 << 3);
L_80226B74:
    // 0x80226B74: addu        $v1, $t8, $t3
    ctx->r3 = ADD32(ctx->r24, ctx->r11);
    // 0x80226B78: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226B7C: bnel        $t2, $v0, L_80226BCC
    if (ctx->r10 != ctx->r2) {
        // 0x80226B80: addiu       $t8, $a3, 0x1
        ctx->r24 = ADD32(ctx->r7, 0X1);
            goto L_80226BCC;
    }
    goto skip_3;
    // 0x80226B80: addiu       $t8, $a3, 0x1
    ctx->r24 = ADD32(ctx->r7, 0X1);
    skip_3:
    // 0x80226B84: bnel        $a0, $zero, L_80226BA4
    if (ctx->r4 != 0) {
        // 0x80226B88: lhu         $t7, 0x14($s0)
        ctx->r15 = MEM_HU(ctx->r16, 0X14);
            goto L_80226BA4;
    }
    goto skip_4;
    // 0x80226B88: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
    skip_4:
    // 0x80226B8C: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x80226B90: addu        $t4, $t0, $a1
    ctx->r12 = ADD32(ctx->r8, ctx->r5);
    // 0x80226B94: or          $t5, $t9, $t4
    ctx->r13 = ctx->r25 | ctx->r12;
    // 0x80226B98: b           L_80226BC4
    // 0x80226B9C: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
        goto L_80226BC4;
    // 0x80226B9C: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x80226BA0: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
L_80226BA4:
    // 0x80226BA4: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x80226BA8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80226BAC: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80226BB0: lw          $t4, 0x0($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X0);
    // 0x80226BB4: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x80226BB8: addu        $t5, $t4, $a1
    ctx->r13 = ADD32(ctx->r12, ctx->r5);
    // 0x80226BBC: or          $t6, $t7, $t5
    ctx->r14 = ctx->r15 | ctx->r13;
    // 0x80226BC0: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
L_80226BC4:
    // 0x80226BC4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80226BC8: addiu       $t8, $a3, 0x1
    ctx->r24 = ADD32(ctx->r7, 0X1);
L_80226BCC:
    // 0x80226BCC: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80226BD0: addu        $v1, $t9, $t3
    ctx->r3 = ADD32(ctx->r25, ctx->r11);
    // 0x80226BD4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226BD8: bnel        $t2, $v0, L_80226C28
    if (ctx->r10 != ctx->r2) {
        // 0x80226BDC: lhu         $t9, 0x54($sp)
        ctx->r25 = MEM_HU(ctx->r29, 0X54);
            goto L_80226C28;
    }
    goto skip_5;
    // 0x80226BDC: lhu         $t9, 0x54($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X54);
    skip_5:
    // 0x80226BE0: bnel        $a0, $zero, L_80226C00
    if (ctx->r4 != 0) {
        // 0x80226BE4: lhu         $t8, 0x14($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X14);
            goto L_80226C00;
    }
    goto skip_6;
    // 0x80226BE4: lhu         $t8, 0x14($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X14);
    skip_6:
    // 0x80226BE8: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x80226BEC: addu        $t7, $t0, $a1
    ctx->r15 = ADD32(ctx->r8, ctx->r5);
    // 0x80226BF0: or          $t5, $t4, $t7
    ctx->r13 = ctx->r12 | ctx->r15;
    // 0x80226BF4: b           L_80226C20
    // 0x80226BF8: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
        goto L_80226C20;
    // 0x80226BF8: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x80226BFC: lhu         $t8, 0x14($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X14);
L_80226C00:
    // 0x80226C00: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x80226C04: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80226C08: addu        $t4, $t6, $t9
    ctx->r12 = ADD32(ctx->r14, ctx->r25);
    // 0x80226C0C: lw          $t7, 0x0($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X0);
    // 0x80226C10: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x80226C14: addu        $t5, $t7, $a1
    ctx->r13 = ADD32(ctx->r15, ctx->r5);
    // 0x80226C18: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x80226C1C: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
L_80226C20:
    // 0x80226C20: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80226C24: lhu         $t9, 0x54($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X54);
L_80226C28:
    // 0x80226C28: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80226C2C: bnel        $a3, $t9, L_80226B74
    if (ctx->r7 != ctx->r25) {
        // 0x80226C30: sll         $t8, $a3, 3
        ctx->r24 = S32(ctx->r7 << 3);
            goto L_80226B74;
    }
    goto skip_7;
    // 0x80226C30: sll         $t8, $a3, 3
    ctx->r24 = S32(ctx->r7 << 3);
    skip_7:
L_80226C34:
    // 0x80226C34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226C38: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80226C3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226C40: jr          $ra
    // 0x80226C44: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x80226C44: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80223468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223468: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8022346C: lw          $t6, 0x4348($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4348);
    // 0x80223470: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80223474: addiu       $at, $zero, -0x1000
    ctx->r1 = ADD32(0, -0X1000);
    // 0x80223478: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8022347C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80223480: or          $t8, $t7, $a0
    ctx->r24 = ctx->r15 | ctx->r4;
    // 0x80223484: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80223488: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8022348C: jal         0x80220C44
    // 0x80223490: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_80220C44(rdram, ctx);
        goto after_0;
    // 0x80223490: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80223494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80223498: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8022349C: jr          $ra
    // 0x802234A0: nop

    return;
    // 0x802234A0: nop

;}
RECOMP_FUNC void func_80221F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80221F44: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80221F48: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80221F4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80221F50: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x80221F54: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80221F58: addiu       $t2, $t2, 0x3B90
    ctx->r10 = ADD32(ctx->r10, 0X3B90);
    // 0x80221F5C: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80221F60: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80221F64: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80221F68: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80221F6C: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x80221F70: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80221F74: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x80221F78: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x80221F7C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80221F80: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80221F84: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80221F88: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x80221F8C: nop

    // 0x80221F90: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x80221F94: beql        $a0, $zero, L_80221FE4
    if (ctx->r4 == 0) {
        // 0x80221F98: mfc1        $a0, $f6
        ctx->r4 = (int32_t)ctx->f6.u32l;
            goto L_80221FE4;
    }
    goto skip_0;
    // 0x80221F98: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x80221F9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80221FA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80221FA4: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80221FA8: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x80221FAC: nop

    // 0x80221FB0: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80221FB4: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x80221FB8: nop

    // 0x80221FBC: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x80221FC0: bne         $a0, $zero, L_80221FD8
    if (ctx->r4 != 0) {
        // 0x80221FC4: nop
    
            goto L_80221FD8;
    }
    // 0x80221FC4: nop

    // 0x80221FC8: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80221FCC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80221FD0: b           L_80221FF0
    // 0x80221FD4: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_80221FF0;
    // 0x80221FD4: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_80221FD8:
    // 0x80221FD8: b           L_80221FF0
    // 0x80221FDC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_80221FF0;
    // 0x80221FDC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80221FE0: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
L_80221FE4:
    // 0x80221FE4: nop

    // 0x80221FE8: bltz        $a0, L_80221FD8
    if (SIGNED(ctx->r4) < 0) {
        // 0x80221FEC: nop
    
            goto L_80221FD8;
    }
    // 0x80221FEC: nop

L_80221FF0:
    // 0x80221FF0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80221FF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80221FF8: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x80221FFC: mul.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80222000: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80222004: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80222008: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8022200C: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x80222010: nop

    // 0x80222014: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80222018: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x8022201C: nop

    // 0x80222020: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x80222024: beql        $a1, $zero, L_80222074
    if (ctx->r5 == 0) {
        // 0x80222028: mfc1        $a1, $f10
        ctx->r5 = (int32_t)ctx->f10.u32l;
            goto L_80222074;
    }
    goto skip_1;
    // 0x80222028: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x8022202C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80222030: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80222034: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80222038: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x8022203C: nop

    // 0x80222040: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80222044: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x80222048: nop

    // 0x8022204C: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x80222050: bne         $a1, $zero, L_80222068
    if (ctx->r5 != 0) {
        // 0x80222054: nop
    
            goto L_80222068;
    }
    // 0x80222054: nop

    // 0x80222058: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8022205C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80222060: b           L_80222080
    // 0x80222064: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_80222080;
    // 0x80222064: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_80222068:
    // 0x80222068: b           L_80222080
    // 0x8022206C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_80222080;
    // 0x8022206C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80222070: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
L_80222074:
    // 0x80222074: nop

    // 0x80222078: bltz        $a1, L_80222068
    if (SIGNED(ctx->r5) < 0) {
        // 0x8022207C: nop
    
            goto L_80222068;
    }
    // 0x8022207C: nop

L_80222080:
    // 0x80222080: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80222084: lwc1        $f16, 0x8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80222088: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022208C: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x80222090: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80222094: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x80222098: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x8022209C: sll         $t3, $a0, 24
    ctx->r11 = S32(ctx->r4 << 24);
    // 0x802220A0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802220A4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802220A8: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x802220AC: nop

    // 0x802220B0: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x802220B4: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x802220B8: nop

    // 0x802220BC: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x802220C0: beql        $a2, $zero, L_80222110
    if (ctx->r6 == 0) {
        // 0x802220C4: mfc1        $a2, $f4
        ctx->r6 = (int32_t)ctx->f4.u32l;
            goto L_80222110;
    }
    goto skip_2;
    // 0x802220C4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    skip_2:
    // 0x802220C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802220CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802220D0: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802220D4: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x802220D8: nop

    // 0x802220DC: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802220E0: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x802220E4: nop

    // 0x802220E8: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x802220EC: bne         $a2, $zero, L_80222104
    if (ctx->r6 != 0) {
        // 0x802220F0: nop
    
            goto L_80222104;
    }
    // 0x802220F0: nop

    // 0x802220F4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802220F8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802220FC: b           L_8022211C
    // 0x80222100: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_8022211C;
    // 0x80222100: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_80222104:
    // 0x80222104: b           L_8022211C
    // 0x80222108: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_8022211C;
    // 0x80222108: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022210C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
L_80222110:
    // 0x80222110: nop

    // 0x80222114: bltz        $a2, L_80222104
    if (SIGNED(ctx->r6) < 0) {
        // 0x80222118: nop
    
            goto L_80222104;
    }
    // 0x80222118: nop

L_8022211C:
    // 0x8022211C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80222120: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80222124: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80222128: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x8022212C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80222130: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80222134: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x80222138: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x8022213C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80222140: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80222144: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x80222148: nop

    // 0x8022214C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80222150: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x80222154: nop

    // 0x80222158: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x8022215C: beql        $a3, $zero, L_802221AC
    if (ctx->r7 == 0) {
        // 0x80222160: mfc1        $a3, $f10
        ctx->r7 = (int32_t)ctx->f10.u32l;
            goto L_802221AC;
    }
    goto skip_3;
    // 0x80222160: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    skip_3:
    // 0x80222164: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80222168: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8022216C: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80222170: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x80222174: nop

    // 0x80222178: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8022217C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x80222180: nop

    // 0x80222184: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x80222188: bne         $a3, $zero, L_802221A0
    if (ctx->r7 != 0) {
        // 0x8022218C: nop
    
            goto L_802221A0;
    }
    // 0x8022218C: nop

    // 0x80222190: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80222194: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80222198: b           L_802221B8
    // 0x8022219C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_802221B8;
    // 0x8022219C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_802221A0:
    // 0x802221A0: b           L_802221B8
    // 0x802221A4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_802221B8;
    // 0x802221A4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802221A8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
L_802221AC:
    // 0x802221AC: nop

    // 0x802221B0: bltz        $a3, L_802221A0
    if (SIGNED(ctx->r7) < 0) {
        // 0x802221B4: nop
    
            goto L_802221A0;
    }
    // 0x802221B4: nop

L_802221B8:
    // 0x802221B8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802221BC: or          $t8, $a3, $zero
    ctx->r24 = ctx->r7 | 0;
    // 0x802221C0: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x802221C4: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x802221C8: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x802221CC: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x802221D0: andi        $t4, $a3, 0xFF
    ctx->r12 = ctx->r7 & 0XFF;
    // 0x802221D4: or          $t3, $t9, $t4
    ctx->r11 = ctx->r25 | ctx->r12;
    // 0x802221D8: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x802221DC: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x802221E0: sll         $t9, $a1, 3
    ctx->r25 = S32(ctx->r5 << 3);
    // 0x802221E4: sll         $t6, $a0, 8
    ctx->r14 = S32(ctx->r4 << 8);
    // 0x802221E8: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x802221EC: sw          $t5, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r13;
    // 0x802221F0: lui         $t7, 0xF700
    ctx->r15 = S32(0XF700 << 16);
    // 0x802221F4: sra         $t5, $a2, 2
    ctx->r13 = S32(SIGNED(ctx->r6) >> 2);
    // 0x802221F8: andi        $t8, $t6, 0xF800
    ctx->r24 = ctx->r14 & 0XF800;
    // 0x802221FC: andi        $t4, $t9, 0x7C0
    ctx->r12 = ctx->r25 & 0X7C0;
    // 0x80222200: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80222204: andi        $t7, $t5, 0x3E
    ctx->r15 = ctx->r13 & 0X3E;
    // 0x80222208: or          $t3, $t8, $t4
    ctx->r11 = ctx->r24 | ctx->r12;
    // 0x8022220C: or          $t6, $t3, $t7
    ctx->r14 = ctx->r11 | ctx->r15;
    // 0x80222210: andi        $t9, $a3, 0x1
    ctx->r25 = ctx->r7 & 0X1;
    // 0x80222214: or          $t1, $t6, $t9
    ctx->r9 = ctx->r14 | ctx->r25;
    // 0x80222218: sll         $t8, $t1, 16
    ctx->r24 = S32(ctx->r9 << 16);
    // 0x8022221C: or          $t4, $t8, $t1
    ctx->r12 = ctx->r24 | ctx->r9;
    // 0x80222220: jr          $ra
    // 0x80222224: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    return;
    // 0x80222224: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
;}
RECOMP_FUNC void func_80237E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237E10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80237E14: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80237E18: lw          $t6, 0x16A0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X16A0);
    // 0x80237E1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80237E20: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80237E24: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80237E28: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80237E2C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80237E30: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80237E34: bne         $t6, $zero, L_80237E44
    if (ctx->r14 != 0) {
        // 0x80237E38: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_80237E44;
    }
    // 0x80237E38: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80237E3C: b           L_80237F08
    // 0x80237E40: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80237F08;
    // 0x80237E40: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80237E44:
    // 0x80237E44: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80237E48: bne         $t7, $zero, L_80237E60
    if (ctx->r15 != 0) {
        // 0x80237E4C: nop
    
            goto L_80237E60;
    }
    // 0x80237E4C: nop

    // 0x80237E50: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80237E54: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x80237E58: b           L_80237E6C
    // 0x80237E5C: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
        goto L_80237E6C;
    // 0x80237E5C: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
L_80237E60:
    // 0x80237E60: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80237E64: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x80237E68: sh          $t0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r8;
L_80237E6C:
    // 0x80237E6C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80237E70: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80237E74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80237E78: sb          $t2, 0x2($t3)
    MEM_B(0X2, ctx->r11) = ctx->r10;
    // 0x80237E7C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80237E80: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80237E84: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80237E88: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80237E8C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80237E90: sw          $t6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r14;
    // 0x80237E94: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80237E98: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80237E9C: sw          $t8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r24;
    // 0x80237EA0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80237EA4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80237EA8: sw          $t0, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r8;
    // 0x80237EAC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80237EB0: sw          $zero, 0x14($t2)
    MEM_W(0X14, ctx->r10) = 0;
    // 0x80237EB4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80237EB8: bne         $t3, $at, L_80237EE4
    if (ctx->r11 != ctx->r1) {
        // 0x80237EBC: nop
    
            goto L_80237EE4;
    }
    // 0x80237EBC: nop

    // 0x80237EC0: jal         0x80244A90
    // 0x80237EC4: nop

    func_80244A90(rdram, ctx);
        goto after_0;
    // 0x80237EC4: nop

    after_0:
    // 0x80237EC8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80237ECC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80237ED0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80237ED4: jal         0x80244940
    // 0x80237ED8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80244940(rdram, ctx);
        goto after_1;
    // 0x80237ED8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80237EDC: b           L_80237F04
    // 0x80237EE0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_80237F04;
    // 0x80237EE0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80237EE4:
    // 0x80237EE4: jal         0x80244A90
    // 0x80237EE8: nop

    func_80244A90(rdram, ctx);
        goto after_2;
    // 0x80237EE8: nop

    after_2:
    // 0x80237EEC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80237EF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80237EF4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80237EF8: jal         0x80236B80
    // 0x80237EFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80236B80(rdram, ctx);
        goto after_3;
    // 0x80237EFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80237F00: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80237F04:
    // 0x80237F04: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80237F08:
    // 0x80237F08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80237F0C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80237F10: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80237F14: jr          $ra
    // 0x80237F18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80237F18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80242BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80242BA0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80242BA4: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80242BA8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80242BAC: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80242BB0: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80242BB4: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80242BB8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80242BBC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80242BC0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80242BC4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80242BC8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80242BCC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80242BD0: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80242BD4: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x80242BD8: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x80242BDC: lui         $t7, 0x200
    ctx->r15 = S32(0X200 << 16);
    // 0x80242BE0: ori         $t6, $t6, 0x440
    ctx->r14 = ctx->r14 | 0X440;
    // 0x80242BE4: ori         $t7, $t7, 0x580
    ctx->r15 = ctx->r15 | 0X580;
    // 0x80242BE8: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80242BEC: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x80242BF0: sw          $t7, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r15;
    // 0x80242BF4: sw          $v0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r2;
    // 0x80242BF8: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x80242BFC: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x80242C00: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x80242C04: or          $fp, $a3, $zero
    ctx->r30 = ctx->r7 | 0;
    // 0x80242C08: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80242C0C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80242C10: blez        $t8, L_80242C8C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80242C14: addiu       $s3, $t0, 0x10
        ctx->r19 = ADD32(ctx->r8, 0X10);
            goto L_80242C8C;
    }
    // 0x80242C14: addiu       $s3, $t0, 0x10
    ctx->r19 = ADD32(ctx->r8, 0X10);
    // 0x80242C18: lui         $s2, 0xC00
    ctx->r18 = S32(0XC00 << 16);
    // 0x80242C1C: ori         $s2, $s2, 0x7FFF
    ctx->r18 = ctx->r18 | 0X7FFF;
    // 0x80242C20: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x80242C24: andi        $s6, $v0, 0xFFFF
    ctx->r22 = ctx->r2 & 0XFFFF;
L_80242C28:
    // 0x80242C28: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80242C2C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x80242C30: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80242C34: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x80242C38: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80242C3C: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x80242C40: jalr        $t9
    // 0x80242C44: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80242C44: nop

    after_0:
    // 0x80242C48: lui         $t2, 0x6C0
    ctx->r10 = S32(0X6C0 << 16);
    // 0x80242C4C: lui         $t3, 0x800
    ctx->r11 = S32(0X800 << 16);
    // 0x80242C50: lui         $t1, 0x800
    ctx->r9 = S32(0X800 << 16);
    // 0x80242C54: ori         $t2, $t2, 0x440
    ctx->r10 = ctx->r10 | 0X440;
    // 0x80242C58: ori         $t3, $t3, 0x580
    ctx->r11 = ctx->r11 | 0X580;
    // 0x80242C5C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x80242C60: sw          $s6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r22;
    // 0x80242C64: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x80242C68: sw          $s2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r18;
    // 0x80242C6C: sw          $t3, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r11;
    // 0x80242C70: sw          $s2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r18;
    // 0x80242C74: lw          $t4, 0x14($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X14);
    // 0x80242C78: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80242C7C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80242C80: slt         $at, $s0, $t4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80242C84: bne         $at, $zero, L_80242C28
    if (ctx->r1 != 0) {
        // 0x80242C88: addiu       $s3, $v0, 0x18
        ctx->r19 = ADD32(ctx->r2, 0X18);
            goto L_80242C28;
    }
    // 0x80242C88: addiu       $s3, $v0, 0x18
    ctx->r19 = ADD32(ctx->r2, 0X18);
L_80242C8C:
    // 0x80242C8C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80242C90: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x80242C94: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80242C98: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80242C9C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80242CA0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80242CA4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80242CA8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80242CAC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80242CB0: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80242CB4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80242CB8: jr          $ra
    // 0x80242CBC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80242CBC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8024920C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024920C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80249210: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x80249214: lh          $t7, 0xC($a1)
    ctx->r15 = MEM_H(ctx->r5, 0XC);
    // 0x80249218: sh          $t7, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r15;
    // 0x8024921C: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x80249220: jr          $ra
    // 0x80249224: sw          $t8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r24;
    return;
    // 0x80249224: sw          $t8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_80238F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238F10: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80238F14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80238F18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80238F1C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80238F20: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x80238F24: jal         0x80245AD0
    // 0x80238F28: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    func_80245AD0(rdram, ctx);
        goto after_0;
    // 0x80238F28: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    after_0:
    // 0x80238F2C: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80238F30: lw          $a1, 0x90($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X90);
    // 0x80238F34: jal         0x80238E34
    // 0x80238F38: nop

    func_80238E34(rdram, ctx);
        goto after_1;
    // 0x80238F38: nop

    after_1:
    // 0x80238F3C: jal         0x80245B14
    // 0x80238F40: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    func_80245B14(rdram, ctx);
        goto after_2;
    // 0x80238F40: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    after_2:
    // 0x80238F44: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x80238F48: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x80238F4C: beq         $v1, $zero, L_80238F5C
    if (ctx->r3 == 0) {
        // 0x80238F50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80238F5C;
    }
    // 0x80238F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80238F54: b           L_80239104
    // 0x80238F58: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80239104;
    // 0x80238F58: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80238F5C:
    // 0x80238F5C: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x80238F60: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x80238F64: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80238F68: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x80238F6C: jal         0x802456A0
    // 0x80238F70: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    func_802456A0(rdram, ctx);
        goto after_3;
    // 0x80238F70: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    after_3:
    // 0x80238F74: beq         $v0, $zero, L_80238F84
    if (ctx->r2 == 0) {
        // 0x80238F78: addiu       $a0, $sp, 0x5C
        ctx->r4 = ADD32(ctx->r29, 0X5C);
            goto L_80238F84;
    }
    // 0x80238F78: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x80238F7C: b           L_80239108
    // 0x80238F80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80239108;
    // 0x80238F80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80238F84:
    // 0x80238F84: addiu       $a1, $sp, 0x7E
    ctx->r5 = ADD32(ctx->r29, 0X7E);
    // 0x80238F88: jal         0x80244B3C
    // 0x80238F8C: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    func_80244B3C(rdram, ctx);
        goto after_4;
    // 0x80238F8C: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    after_4:
    // 0x80238F90: lhu         $t8, 0x7E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X7E);
    // 0x80238F94: lhu         $t9, 0x78($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X78);
    // 0x80238F98: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80238F9C: bne         $t8, $t9, L_80238FB4
    if (ctx->r24 != ctx->r25) {
        // 0x80238FA0: or          $t1, $a1, $zero
        ctx->r9 = ctx->r5 | 0;
            goto L_80238FB4;
    }
    // 0x80238FA0: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x80238FA4: lhu         $t2, 0x7C($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X7C);
    // 0x80238FA8: lhu         $t3, 0x7A($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X7A);
    // 0x80238FAC: nop

    // 0x80238FB0: beq         $t2, $t3, L_80238FE4
    if (ctx->r10 == ctx->r11) {
        // 0x80238FB4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80238FE4;
    }
L_80238FB4:
    // 0x80238FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80238FB8: jal         0x80244F84
    // 0x80238FBC: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    func_80244F84(rdram, ctx);
        goto after_5;
    // 0x80238FBC: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    after_5:
    // 0x80238FC0: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80238FC4: beq         $v0, $zero, L_80238FD4
    if (ctx->r2 == 0) {
        // 0x80238FC8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80238FD4;
    }
    // 0x80238FC8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80238FCC: b           L_80239104
    // 0x80238FD0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80239104;
    // 0x80238FD0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80238FD4:
    // 0x80238FD4: beq         $v0, $zero, L_80238FE8
    if (ctx->r2 == 0) {
        // 0x80238FD8: lhu         $t4, 0x74($sp)
        ctx->r12 = MEM_HU(ctx->r29, 0X74);
            goto L_80238FE8;
    }
    // 0x80238FD8: lhu         $t4, 0x74($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X74);
    // 0x80238FDC: b           L_80239104
    // 0x80238FE0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80239104;
    // 0x80238FE0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80238FE4:
    // 0x80238FE4: lhu         $t4, 0x74($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X74);
L_80238FE8:
    // 0x80238FE8: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80238FEC: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80238FF0: bne         $t5, $zero, L_8023902C
    if (ctx->r13 != 0) {
        // 0x80238FF4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8023902C;
    }
    // 0x80238FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80238FF8: jal         0x80244C38
    // 0x80238FFC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80244C38(rdram, ctx);
        goto after_6;
    // 0x80238FFC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_6:
    // 0x80239000: beq         $v0, $zero, L_80239014
    if (ctx->r2 == 0) {
        // 0x80239004: lhu         $t6, 0x50($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0X50);
            goto L_80239014;
    }
    // 0x80239004: lhu         $t6, 0x50($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X50);
    // 0x80239008: b           L_80239108
    // 0x8023900C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80239108;
    // 0x8023900C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80239010: lhu         $t6, 0x50($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X50);
L_80239014:
    // 0x80239014: addiu       $t1, $sp, 0x38
    ctx->r9 = ADD32(ctx->r29, 0X38);
    // 0x80239018: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8023901C: bne         $t7, $zero, L_80239030
    if (ctx->r15 != 0) {
        // 0x80239020: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80239030;
    }
    // 0x80239020: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80239024: b           L_80239104
    // 0x80239028: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_80239104;
    // 0x80239028: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_8023902C:
    // 0x8023902C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80239030:
    // 0x80239030: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80239034: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x80239038: addiu       $a1, $t1, 0x1
    ctx->r5 = ADD32(ctx->r9, 0X1);
    // 0x8023903C: addiu       $a2, $t1, 0x2
    ctx->r6 = ADD32(ctx->r9, 0X2);
    // 0x80239040: addiu       $a3, $t1, 0x3
    ctx->r7 = ADD32(ctx->r9, 0X3);
    // 0x80239044: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
L_80239048:
    // 0x80239048: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x8023904C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80239050: sb          $t8, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r24;
    // 0x80239054: lbu         $t9, 0x0($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X0);
    // 0x80239058: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8023905C: sb          $t9, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r25;
    // 0x80239060: lbu         $t2, 0x0($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X0);
    // 0x80239064: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80239068: sb          $t2, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r10;
    // 0x8023906C: lbu         $t3, 0x0($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X0);
    // 0x80239070: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80239074: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80239078: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x8023907C: bne         $a0, $t0, L_80239048
    if (ctx->r4 != ctx->r8) {
        // 0x80239080: sb          $t3, 0xB($v0)
        MEM_B(0XB, ctx->r2) = ctx->r11;
            goto L_80239048;
    }
    // 0x80239080: sb          $t3, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r11;
    // 0x80239084: lbu         $t4, 0x1B($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X1B);
    // 0x80239088: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x8023908C: sw          $t4, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r12;
    // 0x80239090: lbu         $t5, 0x1A($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0X1A);
    // 0x80239094: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x80239098: andi        $v0, $t5, 0xFF
    ctx->r2 = ctx->r13 & 0XFF;
    // 0x8023909C: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x802390A0: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x802390A4: addiu       $t0, $v1, 0x8
    ctx->r8 = ADD32(ctx->r3, 0X8);
    // 0x802390A8: addiu       $t7, $t6, 0x3
    ctx->r15 = ADD32(ctx->r14, 0X3);
    // 0x802390AC: addu        $t2, $t0, $v1
    ctx->r10 = ADD32(ctx->r8, ctx->r3);
    // 0x802390B0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802390B4: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x802390B8: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x802390BC: sw          $t8, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r24;
    // 0x802390C0: sw          $t9, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r25;
    // 0x802390C4: sw          $t0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r8;
    // 0x802390C8: sw          $t2, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r10;
    // 0x802390CC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802390D0: addiu       $a3, $s0, 0x2C
    ctx->r7 = ADD32(ctx->r16, 0X2C);
    // 0x802390D4: jal         0x80245710
    // 0x802390D8: sb          $t5, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r13;
    func_80245710(rdram, ctx);
        goto after_7;
    // 0x802390D8: sb          $t5, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r13;
    after_7:
    // 0x802390DC: beq         $v0, $zero, L_802390EC
    if (ctx->r2 == 0) {
        // 0x802390E0: nop
    
            goto L_802390EC;
    }
    // 0x802390E0: nop

    // 0x802390E4: b           L_80239108
    // 0x802390E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80239108;
    // 0x802390E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802390EC:
    // 0x802390EC: jal         0x80245B40
    // 0x802390F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80245B40(rdram, ctx);
        goto after_8;
    // 0x802390F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x802390F4: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x802390F8: nop

    // 0x802390FC: ori         $t4, $t3, 0x1
    ctx->r12 = ctx->r11 | 0X1;
    // 0x80239100: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_80239104:
    // 0x80239104: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80239108:
    // 0x80239108: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023910C: jr          $ra
    // 0x80239110: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80239110: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80246C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246C44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80246C48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80246C4C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80246C50: addiu       $a0, $a0, 0x5F28
    ctx->r4 = ADD32(ctx->r4, 0X5F28);
    // 0x80246C54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80246C58: jal         0x80236B80
    // 0x80246C5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80236B80(rdram, ctx);
        goto after_0;
    // 0x80246C5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80246C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80246C64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80246C68: jr          $ra
    // 0x80246C6C: nop

    return;
    // 0x80246C6C: nop

;}
RECOMP_FUNC void func_80237870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237870: jr          $ra
    // 0x80237874: nop

    return;
    // 0x80237874: nop

;}
RECOMP_FUNC void func_80201CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80201CE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201CE4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80201CE8: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80201CEC: lhu         $v1, 0xBFA($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XBFA);
    // 0x80201CF0: lbu         $v0, 0x23($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X23);
    // 0x80201CF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201CF8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80201CFC: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80201D00: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80201D04: bne         $at, $zero, L_80201D30
    if (ctx->r1 != 0) {
        // 0x80201D08: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_80201D30;
    }
    // 0x80201D08: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80201D0C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201D10: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80201D14: addiu       $a1, $a1, 0x1F3C
    ctx->r5 = ADD32(ctx->r5, 0X1F3C);
    // 0x80201D18: addiu       $a0, $a0, 0x1F24
    ctx->r4 = ADD32(ctx->r4, 0X1F24);
    // 0x80201D1C: jal         0x80231C9C
    // 0x80201D20: addiu       $a2, $zero, 0x1D5
    ctx->r6 = ADD32(0, 0X1D5);
    func_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80201D20: addiu       $a2, $zero, 0x1D5
    ctx->r6 = ADD32(0, 0X1D5);
    after_0:
    // 0x80201D24: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80201D28: lhu         $v1, 0xBFA($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XBFA);
    // 0x80201D2C: lbu         $v0, 0x23($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X23);
L_80201D30:
    // 0x80201D30: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80201D34: beq         $at, $zero, L_80201F04
    if (ctx->r1 == 0) {
        // 0x80201D38: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_80201F04;
    }
    // 0x80201D38: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80201D3C: beq         $v0, $at, L_80201F04
    if (ctx->r2 == ctx->r1) {
        // 0x80201D40: lbu         $t6, 0x23($sp)
        ctx->r14 = MEM_BU(ctx->r29, 0X23);
            goto L_80201F04;
    }
    // 0x80201D40: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x80201D44: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80201D48: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80201D4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80201D50: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80201D54: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x80201D58: lw          $t8, 0x6DE4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6DE4);
    // 0x80201D5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80201D60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80201D64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80201D68: addiu       $v0, $sp, 0x24
    ctx->r2 = ADD32(ctx->r29, 0X24);
    // 0x80201D6C: addiu       $t0, $zero, -0x4
    ctx->r8 = ADD32(0, -0X4);
    // 0x80201D70: addiu       $a3, $zero, -0x8
    ctx->r7 = ADD32(0, -0X8);
    // 0x80201D74: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
L_80201D78:
    // 0x80201D78: addiu       $t9, $v0, 0x3
    ctx->r25 = ADD32(ctx->r2, 0X3);
    // 0x80201D7C: and         $v0, $t9, $t0
    ctx->r2 = ctx->r25 & ctx->r8;
    // 0x80201D80: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x80201D84: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80201D88: sltiu       $at, $a1, 0x6
    ctx->r1 = ctx->r5 < 0X6 ? 1 : 0;
    // 0x80201D8C: beq         $at, $zero, L_80201EF8
    if (ctx->r1 == 0) {
        // 0x80201D90: sll         $t1, $a1, 2
        ctx->r9 = S32(ctx->r5 << 2);
            goto L_80201EF8;
    }
    // 0x80201D90: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x80201D94: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80201D98: addu        $at, $at, $t1
    gpr jr_addend_80201DA0 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80201D9C: lw          $t1, 0x269C($at)
    ctx->r9 = ADD32(ctx->r1, 0X269C);
    // 0x80201DA0: jr          $t1
    // 0x80201DA4: nop

    switch (jr_addend_80201DA0 >> 2) {
        case 0: goto L_80201F04; break;
        case 1: goto L_80201DA8; break;
        case 2: goto L_80201DF8; break;
        case 3: goto L_80201E94; break;
        case 4: goto L_80201E48; break;
        case 5: goto L_80201EE0; break;
        default: switch_error(__func__, 0x80201DA0, 0x8025269C);
    }
    // 0x80201DA4: nop

L_80201DA8:
    // 0x80201DA8: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x80201DAC: beq         $t2, $zero, L_80201DC0
    if (ctx->r10 == 0) {
        // 0x80201DB0: andi        $t3, $v0, 0x2
        ctx->r11 = ctx->r2 & 0X2;
            goto L_80201DC0;
    }
    // 0x80201DB0: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
    // 0x80201DB4: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80201DB8: b           L_80201DE4
    // 0x80201DBC: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
        goto L_80201DE4;
    // 0x80201DBC: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
L_80201DC0:
    // 0x80201DC0: beq         $t3, $zero, L_80201DD4
    if (ctx->r11 == 0) {
        // 0x80201DC4: addiu       $t4, $v0, 0x7
        ctx->r12 = ADD32(ctx->r2, 0X7);
            goto L_80201DD4;
    }
    // 0x80201DC4: addiu       $t4, $v0, 0x7
    ctx->r12 = ADD32(ctx->r2, 0X7);
    // 0x80201DC8: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80201DCC: b           L_80201DE0
    // 0x80201DD0: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
        goto L_80201DE0;
    // 0x80201DD0: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
L_80201DD4:
    // 0x80201DD4: and         $v0, $t4, $a3
    ctx->r2 = ctx->r12 & ctx->r7;
    // 0x80201DD8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80201DDC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80201DE0:
    // 0x80201DE0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80201DE4:
    // 0x80201DE4: ldc1        $f4, -0x8($v1)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r3, -0X8);
    // 0x80201DE8: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x80201DEC: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80201DF0: b           L_80201D78
    // 0x80201DF4: swc1        $f6, 0x90($a2)
    MEM_W(0X90, ctx->r6) = ctx->f6.u32l;
        goto L_80201D78;
    // 0x80201DF4: swc1        $f6, 0x90($a2)
    MEM_W(0X90, ctx->r6) = ctx->f6.u32l;
L_80201DF8:
    // 0x80201DF8: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x80201DFC: beq         $t5, $zero, L_80201E10
    if (ctx->r13 == 0) {
        // 0x80201E00: andi        $t6, $v0, 0x2
        ctx->r14 = ctx->r2 & 0X2;
            goto L_80201E10;
    }
    // 0x80201E00: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x80201E04: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80201E08: b           L_80201E34
    // 0x80201E0C: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
        goto L_80201E34;
    // 0x80201E0C: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
L_80201E10:
    // 0x80201E10: beq         $t6, $zero, L_80201E24
    if (ctx->r14 == 0) {
        // 0x80201E14: addiu       $t7, $v0, 0x7
        ctx->r15 = ADD32(ctx->r2, 0X7);
            goto L_80201E24;
    }
    // 0x80201E14: addiu       $t7, $v0, 0x7
    ctx->r15 = ADD32(ctx->r2, 0X7);
    // 0x80201E18: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80201E1C: b           L_80201E30
    // 0x80201E20: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
        goto L_80201E30;
    // 0x80201E20: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
L_80201E24:
    // 0x80201E24: and         $v0, $t7, $a3
    ctx->r2 = ctx->r15 & ctx->r7;
    // 0x80201E28: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80201E2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80201E30:
    // 0x80201E30: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80201E34:
    // 0x80201E34: ldc1        $f8, -0x8($v1)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r3, -0X8);
    // 0x80201E38: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x80201E3C: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80201E40: b           L_80201D78
    // 0x80201E44: swc1        $f10, 0x94($a2)
    MEM_W(0X94, ctx->r6) = ctx->f10.u32l;
        goto L_80201D78;
    // 0x80201E44: swc1        $f10, 0x94($a2)
    MEM_W(0X94, ctx->r6) = ctx->f10.u32l;
L_80201E48:
    // 0x80201E48: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x80201E4C: beq         $t8, $zero, L_80201E60
    if (ctx->r24 == 0) {
        // 0x80201E50: andi        $t9, $v0, 0x2
        ctx->r25 = ctx->r2 & 0X2;
            goto L_80201E60;
    }
    // 0x80201E50: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x80201E54: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80201E58: b           L_80201E84
    // 0x80201E5C: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
        goto L_80201E84;
    // 0x80201E5C: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
L_80201E60:
    // 0x80201E60: beq         $t9, $zero, L_80201E74
    if (ctx->r25 == 0) {
        // 0x80201E64: addiu       $t1, $v0, 0x7
        ctx->r9 = ADD32(ctx->r2, 0X7);
            goto L_80201E74;
    }
    // 0x80201E64: addiu       $t1, $v0, 0x7
    ctx->r9 = ADD32(ctx->r2, 0X7);
    // 0x80201E68: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80201E6C: b           L_80201E80
    // 0x80201E70: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
        goto L_80201E80;
    // 0x80201E70: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
L_80201E74:
    // 0x80201E74: and         $v0, $t1, $a3
    ctx->r2 = ctx->r9 & ctx->r7;
    // 0x80201E78: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80201E7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80201E80:
    // 0x80201E80: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80201E84:
    // 0x80201E84: ldc1        $f16, -0x8($v1)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r3, -0X8);
    // 0x80201E88: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80201E8C: b           L_80201D78
    // 0x80201E90: swc1        $f18, 0x84($a2)
    MEM_W(0X84, ctx->r6) = ctx->f18.u32l;
        goto L_80201D78;
    // 0x80201E90: swc1        $f18, 0x84($a2)
    MEM_W(0X84, ctx->r6) = ctx->f18.u32l;
L_80201E94:
    // 0x80201E94: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x80201E98: beq         $t2, $zero, L_80201EAC
    if (ctx->r10 == 0) {
        // 0x80201E9C: andi        $t3, $v0, 0x2
        ctx->r11 = ctx->r2 & 0X2;
            goto L_80201EAC;
    }
    // 0x80201E9C: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
    // 0x80201EA0: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80201EA4: b           L_80201ED0
    // 0x80201EA8: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
        goto L_80201ED0;
    // 0x80201EA8: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
L_80201EAC:
    // 0x80201EAC: beq         $t3, $zero, L_80201EC0
    if (ctx->r11 == 0) {
        // 0x80201EB0: addiu       $t4, $v0, 0x7
        ctx->r12 = ADD32(ctx->r2, 0X7);
            goto L_80201EC0;
    }
    // 0x80201EB0: addiu       $t4, $v0, 0x7
    ctx->r12 = ADD32(ctx->r2, 0X7);
    // 0x80201EB4: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80201EB8: b           L_80201ECC
    // 0x80201EBC: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
        goto L_80201ECC;
    // 0x80201EBC: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
L_80201EC0:
    // 0x80201EC0: and         $v0, $t4, $a3
    ctx->r2 = ctx->r12 & ctx->r7;
    // 0x80201EC4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80201EC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80201ECC:
    // 0x80201ECC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80201ED0:
    // 0x80201ED0: ldc1        $f4, -0x8($v1)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r3, -0X8);
    // 0x80201ED4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80201ED8: b           L_80201D78
    // 0x80201EDC: swc1        $f6, 0x80($a2)
    MEM_W(0X80, ctx->r6) = ctx->f6.u32l;
        goto L_80201D78;
    // 0x80201EDC: swc1        $f6, 0x80($a2)
    MEM_W(0X80, ctx->r6) = ctx->f6.u32l;
L_80201EE0:
    // 0x80201EE0: addiu       $t5, $v0, 0x3
    ctx->r13 = ADD32(ctx->r2, 0X3);
    // 0x80201EE4: and         $v0, $t5, $t0
    ctx->r2 = ctx->r13 & ctx->r8;
    // 0x80201EE8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80201EEC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80201EF0: b           L_80201D78
    // 0x80201EF4: sw          $t6, 0x98($a2)
    MEM_W(0X98, ctx->r6) = ctx->r14;
        goto L_80201D78;
    // 0x80201EF4: sw          $t6, 0x98($a2)
    MEM_W(0X98, ctx->r6) = ctx->r14;
L_80201EF8:
    // 0x80201EF8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201EFC: jal         0x802011D0
    // 0x80201F00: addiu       $a0, $a0, 0x1F44
    ctx->r4 = ADD32(ctx->r4, 0X1F44);
    func_802011D0(rdram, ctx);
        goto after_1;
    // 0x80201F00: addiu       $a0, $a0, 0x1F44
    ctx->r4 = ADD32(ctx->r4, 0X1F44);
    after_1:
L_80201F04:
    // 0x80201F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201F08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80201F0C: jr          $ra
    // 0x80201F10: nop

    return;
    // 0x80201F10: nop

;}
RECOMP_FUNC void func_80228004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228004: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80228008: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8022800C: lw          $t6, 0x5224($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5224);
    // 0x80228010: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228014: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80228018: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022801C: jal         0x80223840
    // 0x80228020: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80228020: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80228024: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80228028: lui         $a3, 0x434F
    ctx->r7 = S32(0X434F << 16);
    // 0x8022802C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80228030: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80228034: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80228038: ori         $a3, $a3, 0x4D4D
    ctx->r7 = ctx->r7 | 0X4D4D;
    // 0x8022803C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80228040: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80228044: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80228048: jal         0x80223B30
    // 0x8022804C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80223B30(rdram, ctx);
        goto after_1;
    // 0x8022804C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x80228050: beq         $v0, $zero, L_80228064
    if (ctx->r2 == 0) {
        // 0x80228054: nop
    
            goto L_80228064;
    }
    // 0x80228054: nop

    // 0x80228058: jal         0x80225624
    // 0x8022805C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_80225624(rdram, ctx);
        goto after_2;
    // 0x8022805C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80228060: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_80228064:
    // 0x80228064: jal         0x802238F0
    // 0x80228068: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_802238F0(rdram, ctx);
        goto after_3;
    // 0x80228068: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x8022806C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228070: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80228074: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80228078: jr          $ra
    // 0x8022807C: nop

    return;
    // 0x8022807C: nop

;}
RECOMP_FUNC void func_80225EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80225EFC: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x80225F00: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80225F04: addiu       $s3, $sp, 0xF8
    ctx->r19 = ADD32(ctx->r29, 0XF8);
    // 0x80225F08: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80225F0C: sw          $a0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r4;
    // 0x80225F10: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80225F14: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80225F18: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80225F1C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80225F20: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80225F24: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80225F28: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80225F2C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80225F30: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80225F34: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    // 0x80225F38: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225F3C: jal         0x80225424
    // 0x80225F40: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_0;
    // 0x80225F40: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x80225F44: addiu       $a0, $sp, 0xCE
    ctx->r4 = ADD32(ctx->r29, 0XCE);
    // 0x80225F48: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225F4C: jal         0x80225424
    // 0x80225F50: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_1;
    // 0x80225F50: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x80225F54: addiu       $a0, $sp, 0xCA
    ctx->r4 = ADD32(ctx->r29, 0XCA);
    // 0x80225F58: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225F5C: jal         0x80225424
    // 0x80225F60: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_2;
    // 0x80225F60: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x80225F64: addiu       $a0, $sp, 0xCC
    ctx->r4 = ADD32(ctx->r29, 0XCC);
    // 0x80225F68: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225F6C: jal         0x80225424
    // 0x80225F70: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_3;
    // 0x80225F70: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x80225F74: lhu         $a0, 0xBC($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XBC);
    // 0x80225F78: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80225F7C: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80225F80: jal         0x8022B948
    // 0x80225F84: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022B948(rdram, ctx);
        goto after_4;
    // 0x80225F84: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_4:
    // 0x80225F88: lhu         $a2, 0xBC($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XBC);
    // 0x80225F8C: sw          $v0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r2;
    // 0x80225F90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80225F94: sll         $t7, $a2, 4
    ctx->r15 = S32(ctx->r6 << 4);
    // 0x80225F98: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80225F9C: jal         0x8022B460
    // 0x80225FA0: lw          $a1, 0xF8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XF8);
    func_8022B460(rdram, ctx);
        goto after_5;
    // 0x80225FA0: lw          $a1, 0xF8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XF8);
    after_5:
    // 0x80225FA4: lhu         $t9, 0xBC($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0XBC);
    // 0x80225FA8: lw          $t8, 0xF8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF8);
    // 0x80225FAC: lhu         $a0, 0xCE($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XCE);
    // 0x80225FB0: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x80225FB4: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80225FB8: sll         $t2, $a0, 3
    ctx->r10 = S32(ctx->r4 << 3);
    // 0x80225FBC: sw          $t1, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r9;
    // 0x80225FC0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80225FC4: jal         0x8022B948
    // 0x80225FC8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_6;
    // 0x80225FC8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x80225FCC: lhu         $a2, 0xCE($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XCE);
    // 0x80225FD0: sw          $v0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r2;
    // 0x80225FD4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80225FD8: sll         $t3, $a2, 3
    ctx->r11 = S32(ctx->r6 << 3);
    // 0x80225FDC: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x80225FE0: jal         0x8022B460
    // 0x80225FE4: lw          $a1, 0xF8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XF8);
    func_8022B460(rdram, ctx);
        goto after_7;
    // 0x80225FE4: lw          $a1, 0xF8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XF8);
    after_7:
    // 0x80225FE8: lhu         $t5, 0xCE($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0XCE);
    // 0x80225FEC: lw          $t4, 0xF8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XF8);
    // 0x80225FF0: lhu         $a0, 0xCA($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XCA);
    // 0x80225FF4: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80225FF8: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x80225FFC: sll         $t9, $a0, 5
    ctx->r25 = S32(ctx->r4 << 5);
    // 0x80226000: sw          $t7, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r15;
    // 0x80226004: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80226008: jal         0x8022B948
    // 0x8022600C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_8;
    // 0x8022600C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_8:
    // 0x80226010: lhu         $t8, 0xCA($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0XCA);
    // 0x80226014: sw          $v0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r2;
    // 0x80226018: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
    // 0x8022601C: blez        $t8, L_80226180
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80226020: addiu       $s5, $zero, -0x2
        ctx->r21 = ADD32(0, -0X2);
            goto L_80226180;
    }
    // 0x80226020: addiu       $s5, $zero, -0x2
    ctx->r21 = ADD32(0, -0X2);
    // 0x80226024: lui         $s4, 0x8025
    ctx->r20 = S32(0X8025 << 16);
    // 0x80226028: addiu       $s4, $s4, -0x18F0
    ctx->r20 = ADD32(ctx->r20, -0X18F0);
    // 0x8022602C: addiu       $s2, $sp, 0xBF
    ctx->r18 = ADD32(ctx->r29, 0XBF);
L_80226030:
    // 0x80226030: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80226034: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226038: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022603C: jal         0x80225424
    // 0x80226040: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_80225424(rdram, ctx);
        goto after_9;
    // 0x80226040: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_9:
    // 0x80226044: lbu         $a0, 0xBF($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XBF);
    // 0x80226048: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022604C: sll         $t0, $a0, 6
    ctx->r8 = S32(ctx->r4 << 6);
    // 0x80226050: jal         0x8022B948
    // 0x80226054: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8022B948(rdram, ctx);
        goto after_10;
    // 0x80226054: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_10:
    // 0x80226058: lw          $t1, 0xC4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC4);
    // 0x8022605C: lw          $t3, 0xE0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE0);
    // 0x80226060: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80226064: sll         $t2, $t1, 5
    ctx->r10 = S32(ctx->r9 << 5);
    // 0x80226068: addu        $s1, $t2, $t3
    ctx->r17 = ADD32(ctx->r10, ctx->r11);
    // 0x8022606C: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x80226070: lbu         $a2, 0xBF($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XBF);
    // 0x80226074: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226078: sll         $t5, $a2, 6
    ctx->r13 = S32(ctx->r6 << 6);
    // 0x8022607C: jal         0x80225424
    // 0x80226080: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    func_80225424(rdram, ctx);
        goto after_11;
    // 0x80226080: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    after_11:
    // 0x80226084: lbu         $a0, 0xBF($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XBF);
    // 0x80226088: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022608C: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x80226090: jal         0x8022B948
    // 0x80226094: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_8022B948(rdram, ctx);
        goto after_12;
    // 0x80226094: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_12:
    // 0x80226098: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x8022609C: lbu         $t6, 0xBF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XBF);
    // 0x802260A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802260A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802260A8: blez        $t6, L_802260D4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x802260AC: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_802260D4;
    }
    // 0x802260AC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802260B0: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
L_802260B4:
    // 0x802260B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802260B8: addu        $t9, $t7, $v0
    ctx->r25 = ADD32(ctx->r15, ctx->r2);
    // 0x802260BC: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x802260C0: lbu         $t8, 0xBF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XBF);
    // 0x802260C4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802260C8: slt         $at, $s0, $t8
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802260CC: bnel        $at, $zero, L_802260B4
    if (ctx->r1 != 0) {
        // 0x802260D0: lw          $t7, 0x8($s1)
        ctx->r15 = MEM_W(ctx->r17, 0X8);
            goto L_802260B4;
    }
    goto skip_0;
    // 0x802260D0: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    skip_0:
L_802260D4:
    // 0x802260D4: jal         0x80225424
    // 0x802260D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_13;
    // 0x802260D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_13:
    // 0x802260DC: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x802260E0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802260E4: jal         0x80225424
    // 0x802260E8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_14;
    // 0x802260E8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_14:
    // 0x802260EC: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
    // 0x802260F0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802260F4: jal         0x80225424
    // 0x802260F8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_15;
    // 0x802260F8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_15:
    // 0x802260FC: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80226100: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226104: jal         0x80225424
    // 0x80226108: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_16;
    // 0x80226108: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_16:
    // 0x8022610C: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    // 0x80226110: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226114: jal         0x80225424
    // 0x80226118: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_17;
    // 0x80226118: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_17:
    // 0x8022611C: addiu       $a0, $s1, 0x1A
    ctx->r4 = ADD32(ctx->r17, 0X1A);
    // 0x80226120: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226124: jal         0x80225424
    // 0x80226128: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_18;
    // 0x80226128: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_18:
    // 0x8022612C: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x80226130: lw          $t0, 0x0($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X0);
    // 0x80226134: lhu         $t2, 0x0($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X0);
    // 0x80226138: lw          $t1, 0x1C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X1C);
    // 0x8022613C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80226140: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x80226144: lw          $v0, 0x0($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X0);
    // 0x80226148: beql        $v0, $zero, L_80226168
    if (ctx->r2 == 0) {
        // 0x8022614C: lw          $v0, 0xC4($sp)
        ctx->r2 = MEM_W(ctx->r29, 0XC4);
            goto L_80226168;
    }
    goto skip_1;
    // 0x8022614C: lw          $v0, 0xC4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC4);
    skip_1:
    // 0x80226150: lbu         $t4, 0x11($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X11);
    // 0x80226154: andi        $t6, $t4, 0x8
    ctx->r14 = ctx->r12 & 0X8;
    // 0x80226158: beql        $t6, $zero, L_80226168
    if (ctx->r14 == 0) {
        // 0x8022615C: lw          $v0, 0xC4($sp)
        ctx->r2 = MEM_W(ctx->r29, 0XC4);
            goto L_80226168;
    }
    goto skip_2;
    // 0x8022615C: lw          $v0, 0xC4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC4);
    skip_2:
    // 0x80226160: sw          $s5, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r21;
    // 0x80226164: lw          $v0, 0xC4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC4);
L_80226168:
    // 0x80226168: lhu         $t7, 0xCA($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0XCA);
    // 0x8022616C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226170: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80226174: bne         $at, $zero, L_80226030
    if (ctx->r1 != 0) {
        // 0x80226178: sw          $v0, 0xC4($sp)
        MEM_W(0XC4, ctx->r29) = ctx->r2;
            goto L_80226030;
    }
    // 0x80226178: sw          $v0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r2;
    // 0x8022617C: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
L_80226180:
    // 0x80226180: lhu         $a0, 0xCC($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XCC);
    // 0x80226184: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80226188: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8022618C: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x80226190: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80226194: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x80226198: jal         0x8022B948
    // 0x8022619C: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    func_8022B948(rdram, ctx);
        goto after_19;
    // 0x8022619C: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    after_19:
    // 0x802261A0: lhu         $t8, 0xCC($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0XCC);
    // 0x802261A4: sw          $v0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r2;
    // 0x802261A8: addiu       $t0, $v0, 0x28
    ctx->r8 = ADD32(ctx->r2, 0X28);
    // 0x802261AC: blez        $t8, L_802266B8
    if (SIGNED(ctx->r24) <= 0) {
        // 0x802261B0: addiu       $t2, $v0, 0x24
        ctx->r10 = ADD32(ctx->r2, 0X24);
            goto L_802266B8;
    }
    // 0x802261B0: addiu       $t2, $v0, 0x24
    ctx->r10 = ADD32(ctx->r2, 0X24);
    // 0x802261B4: addiu       $t1, $v0, 0x20
    ctx->r9 = ADD32(ctx->r2, 0X20);
    // 0x802261B8: addiu       $t3, $v0, 0x1C
    ctx->r11 = ADD32(ctx->r2, 0X1C);
    // 0x802261BC: addiu       $t5, $v0, 0x18
    ctx->r13 = ADD32(ctx->r2, 0X18);
    // 0x802261C0: addiu       $t4, $v0, 0x16
    ctx->r12 = ADD32(ctx->r2, 0X16);
    // 0x802261C4: addiu       $t6, $v0, 0x6
    ctx->r14 = ADD32(ctx->r2, 0X6);
    // 0x802261C8: addiu       $t7, $v0, 0x4
    ctx->r15 = ADD32(ctx->r2, 0X4);
    // 0x802261CC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802261D0: lwc1        $f20, 0x3D3C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X3D3C);
    // 0x802261D4: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x802261D8: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x802261DC: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    // 0x802261E0: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x802261E4: sw          $t3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r11;
    // 0x802261E8: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x802261EC: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    // 0x802261F0: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x802261F4: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x802261F8: lui         $fp, 0x8000
    ctx->r30 = S32(0X8000 << 16);
    // 0x802261FC: lui         $s7, 0x400
    ctx->r23 = S32(0X400 << 16);
    // 0x80226200: addiu       $s6, $sp, 0xBE
    ctx->r22 = ADD32(ctx->r29, 0XBE);
    // 0x80226204: lui         $s5, 0xBF00
    ctx->r21 = S32(0XBF00 << 16);
    // 0x80226208: addiu       $s4, $sp, 0xB8
    ctx->r20 = ADD32(ctx->r29, 0XB8);
    // 0x8022620C: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
L_80226210:
    // 0x80226210: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x80226214: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226218: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8022621C: jal         0x80225424
    // 0x80226220: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_80225424(rdram, ctx);
        goto after_20;
    // 0x80226220: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_20:
    // 0x80226224: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80226228: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022622C: jal         0x80225424
    // 0x80226230: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_21;
    // 0x80226230: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_21:
    // 0x80226234: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80226238: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022623C: jal         0x80225424
    // 0x80226240: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_22;
    // 0x80226240: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_22:
    // 0x80226244: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x80226248: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022624C: jal         0x80225424
    // 0x80226250: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_23;
    // 0x80226250: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_23:
    // 0x80226254: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    // 0x80226258: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022625C: jal         0x80225424
    // 0x80226260: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_24;
    // 0x80226260: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_24:
    // 0x80226264: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x80226268: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022626C: jal         0x80225424
    // 0x80226270: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_25;
    // 0x80226270: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_25:
    // 0x80226274: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x80226278: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8022627C: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x80226280: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x80226284: sll         $t0, $t8, 13
    ctx->r8 = S32(ctx->r24 << 13);
    // 0x80226288: bgezl       $t0, L_80226444
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8022628C: ori         $t3, $zero, 0xFFFF
        ctx->r11 = 0 | 0XFFFF;
            goto L_80226444;
    }
    goto skip_3;
    // 0x8022628C: ori         $t3, $zero, 0xFFFF
    ctx->r11 = 0 | 0XFFFF;
    skip_3:
    // 0x80226290: lw          $a1, 0x5A2C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5A2C);
    // 0x80226294: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x80226298: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8022629C: blez        $a1, L_802262E4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x802262A0: sll         $t4, $a1, 2
        ctx->r12 = S32(ctx->r5 << 2);
            goto L_802262E4;
    }
    // 0x802262A0: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x802262A4: lw          $v0, 0x5A28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5A28);
L_802262A8:
    // 0x802262A8: lw          $v1, 0x2C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X2C);
    // 0x802262AC: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x802262B0: lw          $t1, 0xB0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB0);
    // 0x802262B4: bnel        $t2, $v1, L_802262D8
    if (ctx->r10 != ctx->r3) {
        // 0x802262B8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_802262D8;
    }
    goto skip_4;
    // 0x802262B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_4:
    // 0x802262BC: lw          $t3, 0x28($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X28);
    // 0x802262C0: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x802262C4: bnel        $t1, $t3, L_802262D8
    if (ctx->r9 != ctx->r11) {
        // 0x802262C8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_802262D8;
    }
    goto skip_5;
    // 0x802262C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_5:
    // 0x802262CC: beq         $t5, $v1, L_802262E4
    if (ctx->r13 == ctx->r3) {
        // 0x802262D0: nop
    
            goto L_802262E4;
    }
    // 0x802262D0: nop

    // 0x802262D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802262D8:
    // 0x802262D8: slt         $at, $s0, $a1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802262DC: bne         $at, $zero, L_802262A8
    if (ctx->r1 != 0) {
        // 0x802262E0: addiu       $v0, $v0, 0x30
        ctx->r2 = ADD32(ctx->r2, 0X30);
            goto L_802262A8;
    }
    // 0x802262E0: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
L_802262E4:
    // 0x802262E4: bne         $s0, $a1, L_80226430
    if (ctx->r16 != ctx->r5) {
        // 0x802262E8: subu        $t4, $t4, $a1
        ctx->r12 = SUB32(ctx->r12, ctx->r5);
            goto L_80226430;
    }
    // 0x802262E8: subu        $t4, $t4, $a1
    ctx->r12 = SUB32(ctx->r12, ctx->r5);
    // 0x802262EC: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x802262F0: lw          $t6, 0x5A28($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5A28);
    // 0x802262F4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x802262F8: sra         $t0, $t7, 24
    ctx->r8 = S32(SIGNED(ctx->r15) >> 24);
    // 0x802262FC: andi        $t2, $t0, 0xFF
    ctx->r10 = ctx->r8 & 0XFF;
    // 0x80226300: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80226304: sra         $t1, $t7, 16
    ctx->r9 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80226308: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x8022630C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80226310: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80226314: addu        $v0, $t4, $t6
    ctx->r2 = ADD32(ctx->r12, ctx->r14);
    // 0x80226318: sw          $t7, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r15;
    // 0x8022631C: sra         $t5, $t7, 8
    ctx->r13 = S32(SIGNED(ctx->r15) >> 8);
    // 0x80226320: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80226324: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x80226328: andi        $t4, $t5, 0xFF
    ctx->r12 = ctx->r13 & 0XFF;
    // 0x8022632C: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80226330: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80226334: sw          $a0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r4;
    // 0x80226338: sra         $t6, $a0, 24
    ctx->r14 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8022633C: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x80226340: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80226344: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80226348: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x8022634C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80226350: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80226354: sw          $t8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r24;
    // 0x80226358: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
    // 0x8022635C: andi        $t8, $t9, 0xFF
    ctx->r24 = ctx->r25 & 0XFF;
    // 0x80226360: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80226364: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80226368: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8022636C: sra         $t0, $a0, 8
    ctx->r8 = S32(SIGNED(ctx->r4) >> 8);
    // 0x80226370: lw          $a3, 0x24($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X24);
    // 0x80226374: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x80226378: andi        $t2, $t0, 0xFF
    ctx->r10 = ctx->r8 & 0XFF;
    // 0x8022637C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80226380: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80226384: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x80226388: sra         $t1, $a3, 24
    ctx->r9 = S32(SIGNED(ctx->r7) >> 24);
    // 0x8022638C: swc1        $f8, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f8.u32l;
    // 0x80226390: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x80226394: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80226398: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8022639C: sra         $t5, $a3, 16
    ctx->r13 = S32(SIGNED(ctx->r7) >> 16);
    // 0x802263A0: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x802263A4: andi        $t4, $t5, 0xFF
    ctx->r12 = ctx->r13 & 0XFF;
    // 0x802263A8: sra         $t6, $a3, 8
    ctx->r14 = S32(SIGNED(ctx->r7) >> 8);
    // 0x802263AC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802263B0: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x802263B4: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x802263B8: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x802263BC: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x802263C0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802263C4: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x802263C8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x802263CC: addiu       $v1, $v1, 0x5A2C
    ctx->r3 = ADD32(ctx->r3, 0X5A2C);
    // 0x802263D0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802263D4: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x802263D8: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x802263DC: addiu       $a2, $a2, 0xC04
    ctx->r6 = ADD32(ctx->r6, 0XC04);
    // 0x802263E0: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
    // 0x802263E4: addiu       $a1, $a1, 0x3BD8
    ctx->r5 = ADD32(ctx->r5, 0X3BD8);
    // 0x802263E8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802263EC: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x802263F0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802263F4: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x802263F8: nop

    // 0x802263FC: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80226400: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x80226404: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x80226408: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8022640C: addiu       $a0, $t9, 0x1
    ctx->r4 = ADD32(ctx->r25, 0X1);
    // 0x80226410: jal         0x80231C58
    // 0x80226414: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    func_80231C58(rdram, ctx);
        goto after_26;
    // 0x80226414: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    after_26:
    // 0x80226418: beq         $v0, $zero, L_80226430
    if (ctx->r2 == 0) {
        // 0x8022641C: lui         $t0, 0x8027
        ctx->r8 = S32(0X8027 << 16);
            goto L_80226430;
    }
    // 0x8022641C: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80226420: lw          $t0, 0x5A2C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5A2C);
    // 0x80226424: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80226428: addiu       $t2, $t0, -0x1
    ctx->r10 = ADD32(ctx->r8, -0X1);
    // 0x8022642C: sw          $t2, 0x5A2C($at)
    MEM_W(0X5A2C, ctx->r1) = ctx->r10;
L_80226430:
    // 0x80226430: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x80226434: sh          $s0, 0x8($t1)
    MEM_H(0X8, ctx->r9) = ctx->r16;
    // 0x80226438: b           L_80226448
    // 0x8022643C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80226448;
    // 0x8022643C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80226440: ori         $t3, $zero, 0xFFFF
    ctx->r11 = 0 | 0XFFFF;
L_80226444:
    // 0x80226444: sh          $t3, 0x8($t5)
    MEM_H(0X8, ctx->r13) = ctx->r11;
L_80226448:
    // 0x80226448: addiu       $a0, $sp, 0xBA
    ctx->r4 = ADD32(ctx->r29, 0XBA);
    // 0x8022644C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226450: jal         0x80225424
    // 0x80226454: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_27;
    // 0x80226454: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_27:
    // 0x80226458: lhu         $a0, 0xBA($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XBA);
    // 0x8022645C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80226460: sll         $t4, $a0, 3
    ctx->r12 = S32(ctx->r4 << 3);
    // 0x80226464: jal         0x8022B948
    // 0x80226468: addiu       $a0, $t4, 0x8
    ctx->r4 = ADD32(ctx->r12, 0X8);
    func_8022B948(rdram, ctx);
        goto after_28;
    // 0x80226468: addiu       $a0, $t4, 0x8
    ctx->r4 = ADD32(ctx->r12, 0X8);
    after_28:
    // 0x8022646C: lhu         $t6, 0xBA($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XBA);
    // 0x80226470: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80226474: blez        $t6, L_80226574
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80226478: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_80226574;
    }
    // 0x80226478: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_8022647C:
    // 0x8022647C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226480: jal         0x80225424
    // 0x80226484: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_29;
    // 0x80226484: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_29:
    // 0x80226488: lhu         $t7, 0xB8($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0XB8);
    // 0x8022648C: sll         $t8, $s0, 3
    ctx->r24 = S32(ctx->r16 << 3);
    // 0x80226490: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80226494: andi        $t9, $t7, 0x4000
    ctx->r25 = ctx->r15 & 0X4000;
    // 0x80226498: beq         $t9, $zero, L_802264FC
    if (ctx->r25 == 0) {
        // 0x8022649C: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_802264FC;
    }
    // 0x8022649C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802264A0: addu        $v1, $t8, $s1
    ctx->r3 = ADD32(ctx->r24, ctx->r17);
    // 0x802264A4: sw          $s5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r21;
    // 0x802264A8: lhu         $v0, 0xB8($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XB8);
    // 0x802264AC: andi        $t0, $v0, 0xF00
    ctx->r8 = ctx->r2 & 0XF00;
    // 0x802264B0: sra         $t2, $t0, 8
    ctx->r10 = S32(SIGNED(ctx->r8) >> 8);
    // 0x802264B4: multu       $t2, $s2
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802264B8: andi        $t4, $v0, 0xF0
    ctx->r12 = ctx->r2 & 0XF0;
    // 0x802264BC: sra         $t6, $t4, 4
    ctx->r14 = S32(SIGNED(ctx->r12) >> 4);
    // 0x802264C0: andi        $t2, $v0, 0xF
    ctx->r10 = ctx->r2 & 0XF;
    // 0x802264C4: mflo        $t1
    ctx->r9 = lo;
    // 0x802264C8: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x802264CC: sll         $t5, $t3, 16
    ctx->r13 = S32(ctx->r11 << 16);
    // 0x802264D0: multu       $t6, $s2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802264D4: mflo        $t7
    ctx->r15 = lo;
    // 0x802264D8: andi        $t9, $t7, 0xFF
    ctx->r25 = ctx->r15 & 0XFF;
    // 0x802264DC: sll         $t8, $t9, 8
    ctx->r24 = S32(ctx->r25 << 8);
    // 0x802264E0: multu       $t2, $s2
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802264E4: or          $t0, $t5, $t8
    ctx->r8 = ctx->r13 | ctx->r24;
    // 0x802264E8: mflo        $t1
    ctx->r9 = lo;
    // 0x802264EC: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x802264F0: or          $t4, $t0, $t3
    ctx->r12 = ctx->r8 | ctx->r11;
    // 0x802264F4: b           L_80226560
    // 0x802264F8: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
        goto L_80226560;
    // 0x802264F8: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
L_802264FC:
    // 0x802264FC: jal         0x80225424
    // 0x80226500: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_30;
    // 0x80226500: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_30:
    // 0x80226504: lbu         $v0, 0xBE($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XBE);
    // 0x80226508: lhu         $t6, 0xB8($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XB8);
    // 0x8022650C: lw          $t5, 0xF4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XF4);
    // 0x80226510: andi        $a0, $v0, 0xF0
    ctx->r4 = ctx->r2 & 0XF0;
    // 0x80226514: sra         $t2, $a0, 4
    ctx->r10 = S32(SIGNED(ctx->r4) >> 4);
    // 0x80226518: andi        $t7, $t6, 0x3FFF
    ctx->r15 = ctx->r14 & 0X3FFF;
    // 0x8022651C: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x80226520: sll         $t1, $t2, 4
    ctx->r9 = S32(ctx->r10 << 4);
    // 0x80226524: andi        $t0, $v0, 0xF
    ctx->r8 = ctx->r2 & 0XF;
    // 0x80226528: or          $t3, $t1, $t0
    ctx->r11 = ctx->r9 | ctx->r8;
    // 0x8022652C: addu        $a1, $t9, $t5
    ctx->r5 = ADD32(ctx->r25, ctx->r13);
    // 0x80226530: sll         $t9, $t2, 4
    ctx->r25 = S32(ctx->r10 << 4);
    // 0x80226534: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x80226538: sll         $t8, $s0, 3
    ctx->r24 = S32(ctx->r16 << 3);
    // 0x8022653C: addu        $v1, $t8, $s1
    ctx->r3 = ADD32(ctx->r24, ctx->r17);
    // 0x80226540: sll         $t6, $t4, 16
    ctx->r14 = S32(ctx->r12 << 16);
    // 0x80226544: addiu       $t5, $t9, 0x10
    ctx->r13 = ADD32(ctx->r25, 0X10);
    // 0x80226548: andi        $t8, $t5, 0xFFFF
    ctx->r24 = ctx->r13 & 0XFFFF;
    // 0x8022654C: or          $t7, $t6, $s7
    ctx->r15 = ctx->r14 | ctx->r23;
    // 0x80226550: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x80226554: addu        $t1, $a1, $fp
    ctx->r9 = ADD32(ctx->r5, ctx->r30);
    // 0x80226558: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x8022655C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_80226560:
    // 0x80226560: lhu         $t0, 0xBA($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0XBA);
    // 0x80226564: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80226568: slt         $at, $s0, $t0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8022656C: bnel        $at, $zero, L_8022647C
    if (ctx->r1 != 0) {
        // 0x80226570: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_8022647C;
    }
    goto skip_6;
    // 0x80226570: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    skip_6:
L_80226574:
    // 0x80226574: sll         $t3, $s0, 3
    ctx->r11 = S32(ctx->r16 << 3);
    // 0x80226578: addu        $v1, $t3, $s1
    ctx->r3 = ADD32(ctx->r11, ctx->r17);
    // 0x8022657C: lui         $t4, 0xB800
    ctx->r12 = S32(0XB800 << 16);
    // 0x80226580: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80226584: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80226588: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x8022658C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80226590: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226594: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80226598: jal         0x80225424
    // 0x8022659C: sw          $s1, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r17;
    func_80225424(rdram, ctx);
        goto after_31;
    // 0x8022659C: sw          $s1, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r17;
    after_31:
    // 0x802265A0: lhu         $t9, 0xB8($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0XB8);
    // 0x802265A4: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x802265A8: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x802265AC: sll         $t5, $t9, 3
    ctx->r13 = S32(ctx->r25 << 3);
    // 0x802265B0: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x802265B4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802265B8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802265BC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802265C0: jal         0x80225424
    // 0x802265C4: sw          $t8, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r24;
    func_80225424(rdram, ctx);
        goto after_32;
    // 0x802265C4: sw          $t8, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r24;
    after_32:
    // 0x802265C8: lhu         $t1, 0xB8($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0XB8);
    // 0x802265CC: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x802265D0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802265D4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802265D8: sh          $t1, 0x14($t0)
    MEM_H(0X14, ctx->r8) = ctx->r9;
    // 0x802265DC: jal         0x80225424
    // 0x802265E0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_80225424(rdram, ctx);
        goto after_33;
    // 0x802265E0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_33:
    // 0x802265E4: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x802265E8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802265EC: jal         0x80225424
    // 0x802265F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_34;
    // 0x802265F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_34:
    // 0x802265F4: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x802265F8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802265FC: jal         0x80225424
    // 0x80226600: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_35;
    // 0x80226600: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_35:
    // 0x80226604: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80226608: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022660C: jal         0x80225424
    // 0x80226610: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_36;
    // 0x80226610: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_36:
    // 0x80226614: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80226618: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022661C: jal         0x80225424
    // 0x80226620: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_37;
    // 0x80226620: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_37:
    // 0x80226624: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x80226628: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022662C: jal         0x80225424
    // 0x80226630: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_38;
    // 0x80226630: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_38:
    // 0x80226634: lw          $t3, 0xC4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC4);
    // 0x80226638: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x8022663C: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x80226640: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80226644: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x80226648: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8022664C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80226650: addiu       $t9, $t6, 0x2C
    ctx->r25 = ADD32(ctx->r14, 0X2C);
    // 0x80226654: addiu       $t7, $t5, 0x2C
    ctx->r15 = ADD32(ctx->r13, 0X2C);
    // 0x80226658: addiu       $t6, $t3, 0x2C
    ctx->r14 = ADD32(ctx->r11, 0X2C);
    // 0x8022665C: addiu       $t2, $t8, 0x2C
    ctx->r10 = ADD32(ctx->r24, 0X2C);
    // 0x80226660: addiu       $t0, $t1, 0x2C
    ctx->r8 = ADD32(ctx->r9, 0X2C);
    // 0x80226664: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x80226668: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x8022666C: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x80226670: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
    // 0x80226674: sw          $t9, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r25;
    // 0x80226678: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8022667C: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80226680: lhu         $t6, 0xCC($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XCC);
    // 0x80226684: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80226688: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8022668C: addiu       $t5, $t9, 0x2C
    ctx->r13 = ADD32(ctx->r25, 0X2C);
    // 0x80226690: addiu       $t8, $t7, 0x2C
    ctx->r24 = ADD32(ctx->r15, 0X2C);
    // 0x80226694: slt         $at, $t4, $t6
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80226698: addiu       $t1, $t2, 0x2C
    ctx->r9 = ADD32(ctx->r10, 0X2C);
    // 0x8022669C: addiu       $t3, $t0, 0x2C
    ctx->r11 = ADD32(ctx->r8, 0X2C);
    // 0x802266A0: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x802266A4: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x802266A8: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x802266AC: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x802266B0: bne         $at, $zero, L_80226210
    if (ctx->r1 != 0) {
        // 0x802266B4: sw          $t4, 0xC4($sp)
        MEM_W(0XC4, ctx->r29) = ctx->r12;
            goto L_80226210;
    }
    // 0x802266B4: sw          $t4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r12;
L_802266B8:
    // 0x802266B8: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x802266BC: jal         0x8022B948
    // 0x802266C0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_39;
    // 0x802266C0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_39:
    // 0x802266C4: lw          $t9, 0xF4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF4);
    // 0x802266C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802266CC: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x802266D0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802266D4: lhu         $t5, 0xBC($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0XBC);
    // 0x802266D8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802266DC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x802266E0: sh          $t5, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r13;
    // 0x802266E4: lw          $t7, 0xE8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE8);
    // 0x802266E8: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x802266EC: lhu         $t8, 0xCC($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0XCC);
    // 0x802266F0: sh          $t8, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r24;
    // 0x802266F4: lw          $t2, 0xE0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE0);
    // 0x802266F8: sw          $t2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r10;
    // 0x802266FC: lhu         $t1, 0xCA($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0XCA);
    // 0x80226700: jal         0x80225424
    // 0x80226704: sh          $t1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r9;
    func_80225424(rdram, ctx);
        goto after_40;
    // 0x80226704: sh          $t1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r9;
    after_40:
    // 0x80226708: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022670C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226710: jal         0x80225424
    // 0x80226714: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_41;
    // 0x80226714: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_41:
    // 0x80226718: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    // 0x8022671C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226720: jal         0x80225424
    // 0x80226724: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_42;
    // 0x80226724: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_42:
    // 0x80226728: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x8022672C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226730: jal         0x80225424
    // 0x80226734: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_43;
    // 0x80226734: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_43:
    // 0x80226738: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    // 0x8022673C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226740: jal         0x80225424
    // 0x80226744: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_44;
    // 0x80226744: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_44:
    // 0x80226748: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022674C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226750: jal         0x80225424
    // 0x80226754: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_45;
    // 0x80226754: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_45:
    // 0x80226758: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022675C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80226760: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80226764: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80226768: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022676C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80226770: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80226774: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80226778: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8022677C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80226780: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80226784: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80226788: jr          $ra
    // 0x8022678C: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x8022678C: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_80203FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80203FC4: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x80203FC8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80203FCC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80203FD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80203FD4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80203FD8: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80203FDC: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x80203FE0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80203FE4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80203FE8: beq         $a0, $zero, L_80204008
    if (ctx->r4 == 0) {
        // 0x80203FEC: sw          $s1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r17;
            goto L_80204008;
    }
    // 0x80203FEC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80203FF0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203FF4: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80203FF8: addiu       $a1, $a1, 0x2770
    ctx->r5 = ADD32(ctx->r5, 0X2770);
    // 0x80203FFC: addiu       $a0, $a0, 0x2758
    ctx->r4 = ADD32(ctx->r4, 0X2758);
    // 0x80204000: jal         0x80231C9C
    // 0x80204004: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80204004: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_0:
L_80204008:
    // 0x80204008: beq         $s0, $zero, L_80204024
    if (ctx->r16 == 0) {
        // 0x8020400C: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80204024;
    }
    // 0x8020400C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80204010: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80204014: addiu       $a1, $a1, 0x2788
    ctx->r5 = ADD32(ctx->r5, 0X2788);
    // 0x80204018: addiu       $a0, $a0, 0x277C
    ctx->r4 = ADD32(ctx->r4, 0X277C);
    // 0x8020401C: jal         0x80231C9C
    // 0x80204020: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    func_80231C9C(rdram, ctx);
        goto after_1;
    // 0x80204020: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    after_1:
L_80204024:
    // 0x80204024: beq         $s4, $zero, L_80204040
    if (ctx->r20 == 0) {
        // 0x80204028: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80204040;
    }
    // 0x80204028: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8020402C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80204030: addiu       $a1, $a1, 0x27A4
    ctx->r5 = ADD32(ctx->r5, 0X27A4);
    // 0x80204034: addiu       $a0, $a0, 0x2794
    ctx->r4 = ADD32(ctx->r4, 0X2794);
    // 0x80204038: jal         0x80231C9C
    // 0x8020403C: addiu       $a2, $zero, 0x101
    ctx->r6 = ADD32(0, 0X101);
    func_80231C9C(rdram, ctx);
        goto after_2;
    // 0x8020403C: addiu       $a2, $zero, 0x101
    ctx->r6 = ADD32(0, 0X101);
    after_2:
L_80204040:
    // 0x80204040: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x80204044: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x80204048: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8020404C: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x80204050: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80204054: addiu       $t7, $t7, 0x7390
    ctx->r15 = ADD32(ctx->r15, 0X7390);
    // 0x80204058: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8020405C: addu        $t3, $t6, $t7
    ctx->r11 = ADD32(ctx->r14, ctx->r15);
    // 0x80204060: lw          $s2, 0x50($t3)
    ctx->r18 = MEM_W(ctx->r11, 0X50);
    // 0x80204064: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80204068: blez        $s2, L_80204148
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8020406C: andi        $a0, $s2, 0x3
        ctx->r4 = ctx->r18 & 0X3;
            goto L_80204148;
    }
    // 0x8020406C: andi        $a0, $s2, 0x3
    ctx->r4 = ctx->r18 & 0X3;
    // 0x80204070: beq         $a0, $zero, L_802040AC
    if (ctx->r4 == 0) {
        // 0x80204074: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_802040AC;
    }
    // 0x80204074: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80204078: sll         $t2, $zero, 3
    ctx->r10 = S32(0 << 3);
    // 0x8020407C: addiu       $t8, $sp, 0x64
    ctx->r24 = ADD32(ctx->r29, 0X64);
    // 0x80204080: addu        $s0, $t2, $t8
    ctx->r16 = ADD32(ctx->r10, ctx->r24);
    // 0x80204084: addu        $v0, $t3, $t2
    ctx->r2 = ADD32(ctx->r11, ctx->r10);
L_80204088:
    // 0x80204088: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x8020408C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80204090: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80204094: sw          $at, -0x8($s0)
    MEM_W(-0X8, ctx->r16) = ctx->r1;
    // 0x80204098: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x8020409C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802040A0: bne         $v1, $s1, L_80204088
    if (ctx->r3 != ctx->r17) {
        // 0x802040A4: sw          $t4, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r12;
            goto L_80204088;
    }
    // 0x802040A4: sw          $t4, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r12;
    // 0x802040A8: beq         $s1, $s2, L_80204144
    if (ctx->r17 == ctx->r18) {
        // 0x802040AC: sll         $t2, $s1, 3
        ctx->r10 = S32(ctx->r17 << 3);
            goto L_80204144;
    }
L_802040AC:
    // 0x802040AC: sll         $t2, $s1, 3
    ctx->r10 = S32(ctx->r17 << 3);
    // 0x802040B0: addiu       $t5, $sp, 0x64
    ctx->r13 = ADD32(ctx->r29, 0X64);
    // 0x802040B4: addu        $s0, $t2, $t5
    ctx->r16 = ADD32(ctx->r10, ctx->r13);
    // 0x802040B8: addu        $v0, $t3, $t2
    ctx->r2 = ADD32(ctx->r11, ctx->r10);
    // 0x802040BC: sll         $t6, $s2, 3
    ctx->r14 = S32(ctx->r18 << 3);
    // 0x802040C0: addiu       $t7, $sp, 0x7C
    ctx->r15 = ADD32(ctx->r29, 0X7C);
    // 0x802040C4: addu        $t1, $t6, $t7
    ctx->r9 = ADD32(ctx->r14, ctx->r15);
    // 0x802040C8: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x802040CC: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    // 0x802040D0: addiu       $t0, $v0, 0x18
    ctx->r8 = ADD32(ctx->r2, 0X18);
    // 0x802040D4: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x802040D8: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x802040DC: addiu       $v1, $s0, 0x18
    ctx->r3 = ADD32(ctx->r16, 0X18);
L_802040E0:
    // 0x802040E0: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x802040E4: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x802040E8: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x802040EC: sw          $at, -0x20($s0)
    MEM_W(-0X20, ctx->r16) = ctx->r1;
    // 0x802040F0: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x802040F4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x802040F8: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x802040FC: sw          $t9, -0x1C($s0)
    MEM_W(-0X1C, ctx->r16) = ctx->r25;
    // 0x80204100: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x80204104: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80204108: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    // 0x8020410C: sw          $at, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = ctx->r1;
    // 0x80204110: lw          $t5, -0x1C($a2)
    ctx->r13 = MEM_W(ctx->r6, -0X1C);
    // 0x80204114: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x80204118: addiu       $t0, $t0, 0x20
    ctx->r8 = ADD32(ctx->r8, 0X20);
    // 0x8020411C: sw          $t5, -0x1C($a0)
    MEM_W(-0X1C, ctx->r4) = ctx->r13;
    // 0x80204120: lw          $at, -0x20($a3)
    ctx->r1 = MEM_W(ctx->r7, -0X20);
    // 0x80204124: sw          $at, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->r1;
    // 0x80204128: lw          $t7, -0x1C($a3)
    ctx->r15 = MEM_W(ctx->r7, -0X1C);
    // 0x8020412C: sw          $t7, -0x1C($a1)
    MEM_W(-0X1C, ctx->r5) = ctx->r15;
    // 0x80204130: lw          $at, -0x20($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X20);
    // 0x80204134: sw          $at, -0x20($v1)
    MEM_W(-0X20, ctx->r3) = ctx->r1;
    // 0x80204138: lw          $t9, -0x1C($t0)
    ctx->r25 = MEM_W(ctx->r8, -0X1C);
    // 0x8020413C: bne         $v1, $t1, L_802040E0
    if (ctx->r3 != ctx->r9) {
        // 0x80204140: sw          $t9, -0x1C($v1)
        MEM_W(-0X1C, ctx->r3) = ctx->r25;
            goto L_802040E0;
    }
    // 0x80204140: sw          $t9, -0x1C($v1)
    MEM_W(-0X1C, ctx->r3) = ctx->r25;
L_80204144:
    // 0x80204144: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80204148:
    // 0x80204148: blez        $s2, L_80204170
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8020414C: addiu       $s0, $sp, 0x64
        ctx->r16 = ADD32(ctx->r29, 0X64);
            goto L_80204170;
    }
    // 0x8020414C: addiu       $s0, $sp, 0x64
    ctx->r16 = ADD32(ctx->r29, 0X64);
L_80204150:
    // 0x80204150: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80204154: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80204158: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x8020415C: jalr        $t9
    // 0x80204160: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80204160: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_3:
    // 0x80204164: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80204168: bne         $s1, $s2, L_80204150
    if (ctx->r17 != ctx->r18) {
        // 0x8020416C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_80204150;
    }
    // 0x8020416C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80204170:
    // 0x80204170: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80204174: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80204178: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8020417C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80204180: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80204184: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80204188: jr          $ra
    // 0x8020418C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x8020418C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_802456A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802456A0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802456A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802456A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802456AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802456B0: addiu       $v0, $sp, 0x38
    ctx->r2 = ADD32(ctx->r29, 0X38);
    // 0x802456B4: addiu       $v1, $sp, 0x58
    ctx->r3 = ADD32(ctx->r29, 0X58);
L_802456B8:
    // 0x802456B8: lbu         $t6, 0x65($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X65);
    // 0x802456BC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802456C0: sb          $t6, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r14;
    // 0x802456C4: lbu         $t7, 0x65($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X65);
    // 0x802456C8: nop

    // 0x802456CC: sb          $t7, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r15;
    // 0x802456D0: lbu         $t8, 0x65($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X65);
    // 0x802456D4: nop

    // 0x802456D8: sb          $t8, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r24;
    // 0x802456DC: lbu         $t9, 0x65($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X65);
    // 0x802456E0: bne         $v0, $v1, L_802456B8
    if (ctx->r2 != ctx->r3) {
        // 0x802456E4: sb          $t9, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r25;
            goto L_802456B8;
    }
    // 0x802456E4: sb          $t9, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r25;
    // 0x802456E8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802456EC: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x802456F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802456F4: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x802456F8: jal         0x80246660
    // 0x802456FC: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    func_80246660(rdram, ctx);
        goto after_0;
    // 0x802456FC: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x80245700: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80245704: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80245708: jr          $ra
    // 0x8024570C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8024570C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8023F4A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F4A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023F4A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023F4A8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8023F4AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023F4B0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8023F4B4: jal         0x8023FC40
    // 0x8023F4B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8023FC40(rdram, ctx);
        goto after_0;
    // 0x8023F4B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8023F4BC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8023F4C0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8023F4C4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8023F4C8: lw          $s0, 0x8($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X8);
    // 0x8023F4CC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8023F4D0: beql        $s0, $zero, L_8023F508
    if (ctx->r16 == 0) {
        // 0x8023F4D4: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_8023F508;
    }
    goto skip_0;
    // 0x8023F4D4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    skip_0:
    // 0x8023F4D8: jal         0x80237120
    // 0x8023F4DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80237120(rdram, ctx);
        goto after_1;
    // 0x8023F4DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8023F4E0: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x8023F4E4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8023F4E8: jal         0x80249170
    // 0x8023F4EC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80249170(rdram, ctx);
        goto after_2;
    // 0x8023F4EC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8023F4F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023F4F4: jal         0x80237150
    // 0x8023F4F8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_80237150(rdram, ctx);
        goto after_3;
    // 0x8023F4F8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_3:
    // 0x8023F4FC: b           L_8023F50C
    // 0x8023F500: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
        goto L_8023F50C;
    // 0x8023F500: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x8023F504: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_8023F508:
    // 0x8023F508: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
L_8023F50C:
    // 0x8023F50C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8023F510: jal         0x8023FC40
    // 0x8023F514: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_8023FC40(rdram, ctx);
        goto after_4;
    // 0x8023F514: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_4:
    // 0x8023F518: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F51C: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8023F520: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023F524: jr          $ra
    // 0x8023F528: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8023F528: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80239C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80239C40: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80239C44: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80239C48: lbu         $t6, 0x5B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X5B);
    // 0x80239C4C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80239C50: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80239C54: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80239C58: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80239C5C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80239C60: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80239C64: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80239C68: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80239C6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80239C70: addu        $v1, $a1, $t7
    ctx->r3 = ADD32(ctx->r5, ctx->r15);
    // 0x80239C74: lhu         $at, 0x0($v1)
    ctx->r1 = MEM_HU(ctx->r3, 0X0);
    // 0x80239C78: addiu       $s4, $sp, 0x4C
    ctx->r20 = ADD32(ctx->r29, 0X4C);
    // 0x80239C7C: sh          $at, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r1;
    // 0x80239C80: lhu         $t1, 0x4C($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X4C);
    // 0x80239C84: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80239C88: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80239C8C: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x80239C90: beq         $s0, $t1, L_80239CC0
    if (ctx->r16 == ctx->r9) {
        // 0x80239C94: or          $s6, $a3, $zero
        ctx->r22 = ctx->r7 | 0;
            goto L_80239CC0;
    }
    // 0x80239C94: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x80239C98: lbu         $t2, 0x4C($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X4C);
    // 0x80239C9C: lbu         $s1, 0x63($sp)
    ctx->r17 = MEM_BU(ctx->r29, 0X63);
    // 0x80239CA0: blez        $t2, L_80239CB0
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80239CA4: nop
    
            goto L_80239CB0;
    }
    // 0x80239CA4: nop

    // 0x80239CA8: b           L_80239CB8
    // 0x80239CAC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_80239CB8;
    // 0x80239CAC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80239CB0:
    // 0x80239CB0: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x80239CB4: nop

L_80239CB8:
    // 0x80239CB8: b           L_80239CE4
    // 0x80239CBC: lbu         $t3, 0x4D($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X4D);
        goto L_80239CE4;
    // 0x80239CBC: lbu         $t3, 0x4D($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X4D);
L_80239CC0:
    // 0x80239CC0: lbu         $s1, 0x63($sp)
    ctx->r17 = MEM_BU(ctx->r29, 0X63);
    // 0x80239CC4: nop

    // 0x80239CC8: blez        $s1, L_80239CD8
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80239CCC: nop
    
            goto L_80239CD8;
    }
    // 0x80239CCC: nop

    // 0x80239CD0: b           L_80239CE0
    // 0x80239CD4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_80239CE0;
    // 0x80239CD4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80239CD8:
    // 0x80239CD8: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x80239CDC: nop

L_80239CE0:
    // 0x80239CE0: lbu         $t3, 0x4D($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X4D);
L_80239CE4:
    // 0x80239CE4: lhu         $t4, 0x4C($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X4C);
    // 0x80239CE8: slt         $at, $t3, $v0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80239CEC: beq         $at, $zero, L_80239D04
    if (ctx->r1 == 0) {
        // 0x80239CF0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80239D04;
    }
    // 0x80239CF0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80239CF4: beq         $s0, $t4, L_80239D08
    if (ctx->r16 == ctx->r12) {
        // 0x80239CF8: lw          $t5, 0x64($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X64);
            goto L_80239D08;
    }
    // 0x80239CF8: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x80239CFC: b           L_80239E1C
    // 0x80239D00: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80239E1C;
    // 0x80239D00: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80239D04:
    // 0x80239D04: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
L_80239D08:
    // 0x80239D08: lhu         $at, 0x0($s4)
    ctx->r1 = MEM_HU(ctx->r20, 0X0);
    // 0x80239D0C: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x80239D10: sh          $at, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r1;
    // 0x80239D14: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x80239D18: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80239D1C: bne         $t9, $s0, L_80239D28
    if (ctx->r25 != ctx->r16) {
        // 0x80239D20: andi        $a3, $s1, 0xFF
        ctx->r7 = ctx->r17 & 0XFF;
            goto L_80239D28;
    }
    // 0x80239D20: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    // 0x80239D24: sh          $s5, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r21;
L_80239D28:
    // 0x80239D28: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    // 0x80239D2C: jal         0x80239E44
    // 0x80239D30: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    func_80239E44(rdram, ctx);
        goto after_0;
    // 0x80239D30: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    after_0:
    // 0x80239D34: beq         $v0, $zero, L_80239D48
    if (ctx->r2 == 0) {
        // 0x80239D38: lhu         $t8, 0x4C($sp)
        ctx->r24 = MEM_HU(ctx->r29, 0X4C);
            goto L_80239D48;
    }
    // 0x80239D38: lhu         $t8, 0x4C($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X4C);
    // 0x80239D3C: b           L_80239E20
    // 0x80239D40: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80239E20;
    // 0x80239D40: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80239D44: lhu         $t8, 0x4C($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X4C);
L_80239D48:
    // 0x80239D48: lhu         $t0, 0x4C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X4C);
    // 0x80239D4C: bne         $s0, $t8, L_80239D5C
    if (ctx->r16 != ctx->r24) {
        // 0x80239D50: nop
    
            goto L_80239D5C;
    }
    // 0x80239D50: nop

    // 0x80239D54: b           L_80239E1C
    // 0x80239D58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80239E1C;
    // 0x80239D58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80239D5C:
    // 0x80239D5C: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x80239D60: addiu       $s0, $sp, 0x48
    ctx->r16 = ADD32(ctx->r29, 0X48);
    // 0x80239D64: slt         $at, $t0, $v0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80239D68: bne         $at, $zero, L_80239DF4
    if (ctx->r1 != 0) {
        // 0x80239D6C: lhu         $t3, 0x4C($sp)
        ctx->r11 = MEM_HU(ctx->r29, 0X4C);
            goto L_80239DF4;
    }
    // 0x80239D6C: lhu         $t3, 0x4C($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X4C);
L_80239D70:
    // 0x80239D70: lhu         $at, 0x0($s4)
    ctx->r1 = MEM_HU(ctx->r20, 0X0);
    // 0x80239D74: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80239D78: sh          $at, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r1;
    // 0x80239D7C: lbu         $t3, 0x4D($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X4D);
    // 0x80239D80: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80239D84: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80239D88: addu        $t6, $s3, $t4
    ctx->r14 = ADD32(ctx->r19, ctx->r12);
    // 0x80239D8C: lhu         $at, 0x0($t6)
    ctx->r1 = MEM_HU(ctx->r14, 0X0);
    // 0x80239D90: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    // 0x80239D94: sh          $at, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r1;
    // 0x80239D98: lbu         $a1, 0x49($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X49);
    // 0x80239D9C: nop

    // 0x80239DA0: sll         $t8, $a1, 1
    ctx->r24 = S32(ctx->r5 << 1);
    // 0x80239DA4: addu        $t0, $s3, $t8
    ctx->r8 = ADD32(ctx->r19, ctx->r24);
    // 0x80239DA8: jal         0x80239E44
    // 0x80239DAC: sh          $s5, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r21;
    func_80239E44(rdram, ctx);
        goto after_1;
    // 0x80239DAC: sh          $s5, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r21;
    after_1:
    // 0x80239DB0: beq         $v0, $zero, L_80239DC4
    if (ctx->r2 == 0) {
        // 0x80239DB4: lbu         $t1, 0x4C($sp)
        ctx->r9 = MEM_BU(ctx->r29, 0X4C);
            goto L_80239DC4;
    }
    // 0x80239DB4: lbu         $t1, 0x4C($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4C);
    // 0x80239DB8: b           L_80239E20
    // 0x80239DBC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80239E20;
    // 0x80239DBC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80239DC0: lbu         $t1, 0x4C($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4C);
L_80239DC4:
    // 0x80239DC4: lhu         $t2, 0x4C($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X4C);
    // 0x80239DC8: beq         $s1, $t1, L_80239DDC
    if (ctx->r17 == ctx->r9) {
        // 0x80239DCC: nop
    
            goto L_80239DDC;
    }
    // 0x80239DCC: nop

    // 0x80239DD0: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x80239DD4: b           L_80239DF4
    // 0x80239DD8: lhu         $t3, 0x4C($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X4C);
        goto L_80239DF4;
    // 0x80239DD8: lhu         $t3, 0x4C($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X4C);
L_80239DDC:
    // 0x80239DDC: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x80239DE0: nop

    // 0x80239DE4: slt         $at, $t2, $v0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80239DE8: beq         $at, $zero, L_80239D70
    if (ctx->r1 == 0) {
        // 0x80239DEC: nop
    
            goto L_80239D70;
    }
    // 0x80239DEC: nop

    // 0x80239DF0: lhu         $t3, 0x4C($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X4C);
L_80239DF4:
    // 0x80239DF4: lbu         $t4, 0x4D($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X4D);
    // 0x80239DF8: slt         $at, $t3, $v0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80239DFC: bne         $at, $zero, L_80239E0C
    if (ctx->r1 != 0) {
        // 0x80239E00: sll         $t5, $t4, 1
        ctx->r13 = S32(ctx->r12 << 1);
            goto L_80239E0C;
    }
    // 0x80239E00: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80239E04: addu        $t6, $s3, $t5
    ctx->r14 = ADD32(ctx->r19, ctx->r13);
    // 0x80239E08: sh          $s5, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r21;
L_80239E0C:
    // 0x80239E0C: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x80239E10: lhu         $at, 0x0($s4)
    ctx->r1 = MEM_HU(ctx->r20, 0X0);
    // 0x80239E14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80239E18: sh          $at, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r1;
L_80239E1C:
    // 0x80239E1C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80239E20:
    // 0x80239E20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80239E24: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80239E28: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80239E2C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80239E30: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80239E34: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80239E38: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80239E3C: jr          $ra
    // 0x80239E40: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80239E40: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_802374B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802374B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802374B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802374B8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802374BC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802374C0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802374C4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802374C8: jal         0x80241760
    // 0x802374CC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x802374CC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x802374D0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x802374D4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802374D8: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x802374DC: bne         $t7, $zero, L_80237528
    if (ctx->r15 != 0) {
        // 0x802374E0: nop
    
            goto L_80237528;
    }
    // 0x802374E0: nop

L_802374E4:
    // 0x802374E4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x802374E8: bne         $t8, $zero, L_80237500
    if (ctx->r24 != 0) {
        // 0x802374EC: nop
    
            goto L_80237500;
    }
    // 0x802374EC: nop

    // 0x802374F0: jal         0x80241780
    // 0x802374F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80241780(rdram, ctx);
        goto after_1;
    // 0x802374F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802374F8: b           L_802375D4
    // 0x802374FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_802375D4;
    // 0x802374FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80237500:
    // 0x80237500: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x80237504: lw          $t0, 0x16E0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X16E0);
    // 0x80237508: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x8023750C: sh          $t9, 0x10($t0)
    MEM_H(0X10, ctx->r8) = ctx->r25;
    // 0x80237510: jal         0x80241DFC
    // 0x80237514: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80241DFC(rdram, ctx);
        goto after_2;
    // 0x80237514: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x80237518: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8023751C: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x80237520: beq         $t2, $zero, L_802374E4
    if (ctx->r10 == 0) {
        // 0x80237524: nop
    
            goto L_802374E4;
    }
    // 0x80237524: nop

L_80237528:
    // 0x80237528: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8023752C: beq         $t3, $zero, L_80237550
    if (ctx->r11 == 0) {
        // 0x80237530: nop
    
            goto L_80237550;
    }
    // 0x80237530: nop

    // 0x80237534: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80237538: lw          $t6, 0xC($t4)
    ctx->r14 = MEM_W(ctx->r12, 0XC);
    // 0x8023753C: lw          $t5, 0x14($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X14);
    // 0x80237540: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80237544: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80237548: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8023754C: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
L_80237550:
    // 0x80237550: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80237554: lw          $t1, 0xC($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC);
    // 0x80237558: lw          $t4, 0x10($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X10);
    // 0x8023755C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80237560: div         $zero, $t2, $t4
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r12)));
    // 0x80237564: mfhi        $t6
    ctx->r14 = hi;
    // 0x80237568: sw          $t6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r14;
    // 0x8023756C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80237570: bne         $t4, $zero, L_8023757C
    if (ctx->r12 != 0) {
        // 0x80237574: nop
    
            goto L_8023757C;
    }
    // 0x80237574: nop

    // 0x80237578: break       7
    do_break(2149807480);
L_8023757C:
    // 0x8023757C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80237580: bne         $t4, $at, L_80237594
    if (ctx->r12 != ctx->r1) {
        // 0x80237584: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80237594;
    }
    // 0x80237584: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80237588: bne         $t2, $at, L_80237594
    if (ctx->r10 != ctx->r1) {
        // 0x8023758C: nop
    
            goto L_80237594;
    }
    // 0x8023758C: nop

    // 0x80237590: break       6
    do_break(2149807504);
L_80237594:
    // 0x80237594: lw          $t7, 0x8($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X8);
    // 0x80237598: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8023759C: sw          $t8, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r24;
    // 0x802375A0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x802375A4: lw          $t3, 0x4($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X4);
    // 0x802375A8: lw          $t1, 0x0($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X0);
    // 0x802375AC: beq         $t1, $zero, L_802375C8
    if (ctx->r9 == 0) {
        // 0x802375B0: nop
    
            goto L_802375C8;
    }
    // 0x802375B0: nop

    // 0x802375B4: jal         0x80241F44
    // 0x802375B8: addiu       $a0, $t9, 0x4
    ctx->r4 = ADD32(ctx->r25, 0X4);
    func_80241F44(rdram, ctx);
        goto after_3;
    // 0x802375B8: addiu       $a0, $t9, 0x4
    ctx->r4 = ADD32(ctx->r25, 0X4);
    after_3:
    // 0x802375BC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x802375C0: jal         0x80237360
    // 0x802375C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80237360(rdram, ctx);
        goto after_4;
    // 0x802375C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
L_802375C8:
    // 0x802375C8: jal         0x80241780
    // 0x802375CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80241780(rdram, ctx);
        goto after_5;
    // 0x802375CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x802375D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802375D4:
    // 0x802375D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802375D8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802375DC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802375E0: jr          $ra
    // 0x802375E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802375E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023D604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D604: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023D608: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8023D60C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8023D610: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023D614: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8023D618: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8023D61C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8023D620: sb          $t6, 0x5EB0($at)
    MEM_B(0X5EB0, ctx->r1) = ctx->r14;
    // 0x8023D624: addiu       $v0, $v0, 0x39B0
    ctx->r2 = ADD32(ctx->r2, 0X39B0);
    // 0x8023D628: addiu       $v1, $v1, 0x3970
    ctx->r3 = ADD32(ctx->r3, 0X3970);
L_8023D62C:
    // 0x8023D62C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8023D630: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8023D634: bne         $at, $zero, L_8023D62C
    if (ctx->r1 != 0) {
        // 0x8023D638: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_8023D62C;
    }
    // 0x8023D638: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x8023D63C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8023D640: addiu       $v1, $a1, 0x3970
    ctx->r3 = ADD32(ctx->r5, 0X3970);
    // 0x8023D644: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8023D648: sw          $t7, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r15;
    // 0x8023D64C: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8023D650: addiu       $a2, $a2, 0x5EB1
    ctx->r6 = ADD32(ctx->r6, 0X5EB1);
    // 0x8023D654: lbu         $t5, 0x0($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X0);
    // 0x8023D658: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8023D65C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8023D660: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8023D664: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8023D668: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8023D66C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8023D670: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8023D674: sb          $t8, 0xC($sp)
    MEM_B(0XC, ctx->r29) = ctx->r24;
    // 0x8023D678: sb          $t9, 0xD($sp)
    MEM_B(0XD, ctx->r29) = ctx->r25;
    // 0x8023D67C: sb          $t0, 0xE($sp)
    MEM_B(0XE, ctx->r29) = ctx->r8;
    // 0x8023D680: sb          $a0, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r4;
    // 0x8023D684: sb          $t1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r9;
    // 0x8023D688: sb          $t2, 0x11($sp)
    MEM_B(0X11, ctx->r29) = ctx->r10;
    // 0x8023D68C: sb          $t3, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r11;
    // 0x8023D690: sb          $t4, 0x13($sp)
    MEM_B(0X13, ctx->r29) = ctx->r12;
    // 0x8023D694: blez        $t5, L_8023D6D4
    if (SIGNED(ctx->r13) <= 0) {
        // 0x8023D698: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8023D6D4;
    }
    // 0x8023D698: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8023D69C: addiu       $a0, $sp, 0xC
    ctx->r4 = ADD32(ctx->r29, 0XC);
L_8023D6A0:
    // 0x8023D6A0: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x8023D6A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D6A8: swl         $at, 0x0($v1)
    do_swl(rdram, 0X0, ctx->r3, ctx->r1);
    // 0x8023D6AC: swr         $at, 0x3($v1)
    do_swr(rdram, 0X3, ctx->r3, ctx->r1);
    // 0x8023D6B0: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8023D6B4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8023D6B8: swl         $t7, -0x4($v1)
    do_swl(rdram, -0X4, ctx->r3, ctx->r15);
    // 0x8023D6BC: swr         $t7, -0x1($v1)
    do_swr(rdram, -0X1, ctx->r3, ctx->r15);
    // 0x8023D6C0: lbu         $t8, 0x0($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X0);
    // 0x8023D6C4: nop

    // 0x8023D6C8: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8023D6CC: bne         $at, $zero, L_8023D6A0
    if (ctx->r1 != 0) {
        // 0x8023D6D0: nop
    
            goto L_8023D6A0;
    }
    // 0x8023D6D0: nop

L_8023D6D4:
    // 0x8023D6D4: addiu       $t9, $zero, 0xFE
    ctx->r25 = ADD32(0, 0XFE);
    // 0x8023D6D8: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
    // 0x8023D6DC: jr          $ra
    // 0x8023D6E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8023D6E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8020178C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020178C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201790: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80201794: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80201798: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x8020179C: lbu         $v1, 0x23($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X23);
    // 0x802017A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802017A4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802017A8: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802017AC: bne         $at, $zero, L_802017D8
    if (ctx->r1 != 0) {
        // 0x802017B0: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_802017D8;
    }
    // 0x802017B0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802017B4: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802017B8: addiu       $a1, $a1, 0x1D8C
    ctx->r5 = ADD32(ctx->r5, 0X1D8C);
    // 0x802017BC: addiu       $a0, $a0, 0x1D74
    ctx->r4 = ADD32(ctx->r4, 0X1D74);
    // 0x802017C0: addiu       $a2, $zero, 0x176
    ctx->r6 = ADD32(0, 0X176);
    // 0x802017C4: jal         0x80231C9C
    // 0x802017C8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80231C9C(rdram, ctx);
        goto after_0;
    // 0x802017C8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x802017CC: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x802017D0: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x802017D4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_802017D8:
    // 0x802017D8: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802017DC: beq         $at, $zero, L_80201870
    if (ctx->r1 == 0) {
        // 0x802017E0: lwc1        $f4, 0x24($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
            goto L_80201870;
    }
    // 0x802017E0: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802017E4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802017E8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802017EC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802017F0: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x802017F4: addiu       $a1, $a1, 0x1DA4
    ctx->r5 = ADD32(ctx->r5, 0X1DA4);
    // 0x802017F8: addiu       $a0, $a0, 0x1D94
    ctx->r4 = ADD32(ctx->r4, 0X1D94);
    // 0x802017FC: bc1tl       L_80201810
    if (c1cs) {
        // 0x80201800: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80201810;
    }
    goto skip_0;
    // 0x80201800: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x80201804: jal         0x80231C9C
    // 0x80201808: addiu       $a2, $zero, 0x178
    ctx->r6 = ADD32(0, 0X178);
    func_80231C9C(rdram, ctx);
        goto after_1;
    // 0x80201808: addiu       $a2, $zero, 0x178
    ctx->r6 = ADD32(0, 0X178);
    after_1:
    // 0x8020180C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_80201810:
    // 0x80201810: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80201814: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80201818: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8020181C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80201820: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80201824: addiu       $a1, $a1, 0x1DBC
    ctx->r5 = ADD32(ctx->r5, 0X1DBC);
    // 0x80201828: addiu       $a0, $a0, 0x1DAC
    ctx->r4 = ADD32(ctx->r4, 0X1DAC);
    // 0x8020182C: bc1tl       L_80201840
    if (c1cs) {
        // 0x80201830: lbu         $t7, 0x23($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X23);
            goto L_80201840;
    }
    goto skip_1;
    // 0x80201830: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    skip_1:
    // 0x80201834: jal         0x80231C9C
    // 0x80201838: addiu       $a2, $zero, 0x179
    ctx->r6 = ADD32(0, 0X179);
    func_80231C9C(rdram, ctx);
        goto after_2;
    // 0x80201838: addiu       $a2, $zero, 0x179
    ctx->r6 = ADD32(0, 0X179);
    after_2:
    // 0x8020183C: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
L_80201840:
    // 0x80201840: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80201844: lw          $t6, 0x6DE4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6DE4);
    // 0x80201848: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8020184C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80201850: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80201854: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80201858: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8020185C: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80201860: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80201864: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80201868: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8020186C: swc1        $f16, 0x70($t9)
    MEM_W(0X70, ctx->r25) = ctx->f16.u32l;
L_80201870:
    // 0x80201870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80201878: jr          $ra
    // 0x8020187C: nop

    return;
    // 0x8020187C: nop

;}
RECOMP_FUNC void func_80227F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227F50: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80227F54: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80227F58: lw          $t6, 0x5234($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5234);
    // 0x80227F5C: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80227F60: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80227F64: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80227F68: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80227F6C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80227F70: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80227F74: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80227F78: jal         0x80223840
    // 0x80227F7C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227F7C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_0:
    // 0x80227F80: addiu       $s2, $sp, 0x34
    ctx->r18 = ADD32(ctx->r29, 0X34);
    // 0x80227F84: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
    // 0x80227F88: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80227F8C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80227F90: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80227F94: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227F98: jal         0x8022393C
    // 0x80227F9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8022393C(rdram, ctx);
        goto after_1;
    // 0x80227F9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x80227FA0: beq         $v0, $zero, L_80227FDC
    if (ctx->r2 == 0) {
        // 0x80227FA4: lui         $s0, 0x434F
        ctx->r16 = S32(0X434F << 16);
            goto L_80227FDC;
    }
    // 0x80227FA4: lui         $s0, 0x434F
    ctx->r16 = S32(0X434F << 16);
    // 0x80227FA8: ori         $s0, $s0, 0x4D4D
    ctx->r16 = ctx->r16 | 0X4D4D;
L_80227FAC:
    // 0x80227FAC: bnel        $v0, $s0, L_80227FC4
    if (ctx->r2 != ctx->r16) {
        // 0x80227FB0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80227FC4;
    }
    goto skip_0;
    // 0x80227FB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x80227FB4: jal         0x80227458
    // 0x80227FB8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_80227458(rdram, ctx);
        goto after_2;
    // 0x80227FB8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_2:
    // 0x80227FBC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80227FC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80227FC4:
    // 0x80227FC4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80227FC8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80227FCC: jal         0x8022393C
    // 0x80227FD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8022393C(rdram, ctx);
        goto after_3;
    // 0x80227FD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x80227FD4: bne         $v0, $zero, L_80227FAC
    if (ctx->r2 != 0) {
        // 0x80227FD8: nop
    
            goto L_80227FAC;
    }
    // 0x80227FD8: nop

L_80227FDC:
    // 0x80227FDC: jal         0x802238F0
    // 0x80227FE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_802238F0(rdram, ctx);
        goto after_4;
    // 0x80227FE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80227FE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80227FE8: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x80227FEC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80227FF0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80227FF4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80227FF8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80227FFC: jr          $ra
    // 0x80228000: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80228000: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80234C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234C14: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80234C18: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x80234C1C: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80234C20: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x80234C24: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80234C28: jr          $ra
    // 0x80234C2C: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x80234C2C: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80205748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205748: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020574C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80205750: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80205754: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x80205758: jal         0x80237F60
    // 0x8020575C: lw          $a0, -0x1A50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A50);
    func_80237F60(rdram, ctx);
        goto after_0;
    // 0x8020575C: lw          $a0, -0x1A50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A50);
    after_0:
    // 0x80205760: beq         $v0, $zero, L_80205790
    if (ctx->r2 == 0) {
        // 0x80205764: lwc1        $f6, 0x18($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
            goto L_80205790;
    }
    // 0x80205764: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80205768: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8020576C: ldc1        $f4, 0x2978($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X2978);
    // 0x80205770: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80205774: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80205778: div.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x8020577C: lw          $a0, -0x1A50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A50);
    // 0x80205780: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x80205784: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80205788: jal         0x80238AA0
    // 0x8020578C: nop

    func_80238AA0(rdram, ctx);
        goto after_1;
    // 0x8020578C: nop

    after_1:
L_80205790:
    // 0x80205790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80205794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80205798: jr          $ra
    // 0x8020579C: nop

    return;
    // 0x8020579C: nop

;}
RECOMP_FUNC void func_8021DDE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021DDE4: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8021DDE8: lhu         $v0, 0xBF6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBF6);
    // 0x8021DDEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8021DDF0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021DDF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8021DDF8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021DDFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021DE00: blez        $v0, L_8021DE48
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8021DE04: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8021DE48;
    }
    // 0x8021DE04: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8021DE08: lui         $s2, 0x8026
    ctx->r18 = S32(0X8026 << 16);
    // 0x8021DE0C: addiu       $s2, $s2, -0x3A00
    ctx->r18 = ADD32(ctx->r18, -0X3A00);
    // 0x8021DE10: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8021DE14:
    // 0x8021DE14: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8021DE18: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8021DE1C: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x8021DE20: beql        $t8, $zero, L_8021DE3C
    if (ctx->r24 == 0) {
        // 0x8021DE24: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8021DE3C;
    }
    goto skip_0;
    // 0x8021DE24: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x8021DE28: jal         0x8021E1BC
    // 0x8021DE2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8021E1BC(rdram, ctx);
        goto after_0;
    // 0x8021DE2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8021DE30: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8021DE34: lhu         $v0, 0xBF6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBF6);
    // 0x8021DE38: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8021DE3C:
    // 0x8021DE3C: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021DE40: bne         $at, $zero, L_8021DE14
    if (ctx->r1 != 0) {
        // 0x8021DE44: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_8021DE14;
    }
    // 0x8021DE44: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
L_8021DE48:
    // 0x8021DE48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8021DE4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021DE50: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021DE54: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021DE58: jr          $ra
    // 0x8021DE5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8021DE5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80244940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80244940: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80244944: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80244948: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8024494C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80244950: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80244954: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80244958: jal         0x80241760
    // 0x8024495C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x8024495C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80244960: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80244964: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80244968: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8024496C: lw          $t8, 0x10($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X10);
    // 0x80244970: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80244974: bne         $at, $zero, L_802449D8
    if (ctx->r1 != 0) {
        // 0x80244978: nop
    
            goto L_802449D8;
    }
    // 0x80244978: nop

L_8024497C:
    // 0x8024497C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80244980: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80244984: bne         $t9, $at, L_802449B0
    if (ctx->r25 != ctx->r1) {
        // 0x80244988: nop
    
            goto L_802449B0;
    }
    // 0x80244988: nop

    // 0x8024498C: lui         $t1, 0x8025
    ctx->r9 = S32(0X8025 << 16);
    // 0x80244990: lw          $t1, 0x16E0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X16E0);
    // 0x80244994: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x80244998: sh          $t0, 0x10($t1)
    MEM_H(0X10, ctx->r9) = ctx->r8;
    // 0x8024499C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802449A0: jal         0x80241DFC
    // 0x802449A4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_80241DFC(rdram, ctx);
        goto after_1;
    // 0x802449A4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x802449A8: b           L_802449C0
    // 0x802449AC: nop

        goto L_802449C0;
    // 0x802449AC: nop

L_802449B0:
    // 0x802449B0: jal         0x80241780
    // 0x802449B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80241780(rdram, ctx);
        goto after_2;
    // 0x802449B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802449B8: b           L_80244A7C
    // 0x802449BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80244A7C;
    // 0x802449BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_802449C0:
    // 0x802449C0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x802449C4: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x802449C8: lw          $t4, 0x10($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X10);
    // 0x802449CC: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x802449D0: beq         $at, $zero, L_8024497C
    if (ctx->r1 == 0) {
        // 0x802449D4: nop
    
            goto L_8024497C;
    }
    // 0x802449D4: nop

L_802449D8:
    // 0x802449D8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x802449DC: lw          $t6, 0xC($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC);
    // 0x802449E0: lw          $t7, 0x10($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X10);
    // 0x802449E4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x802449E8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x802449EC: div         $zero, $t9, $t7
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r15))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r15)));
    // 0x802449F0: mfhi        $t0
    ctx->r8 = hi;
    // 0x802449F4: sw          $t0, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r8;
    // 0x802449F8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x802449FC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80244A00: bne         $t7, $zero, L_80244A0C
    if (ctx->r15 != 0) {
        // 0x80244A04: nop
    
            goto L_80244A0C;
    }
    // 0x80244A04: nop

    // 0x80244A08: break       7
    do_break(2149861896);
L_80244A0C:
    // 0x80244A0C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80244A10: bne         $t7, $at, L_80244A24
    if (ctx->r15 != ctx->r1) {
        // 0x80244A14: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80244A24;
    }
    // 0x80244A14: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80244A18: bne         $t9, $at, L_80244A24
    if (ctx->r25 != ctx->r1) {
        // 0x80244A1C: nop
    
            goto L_80244A24;
    }
    // 0x80244A1C: nop

    // 0x80244A20: break       6
    do_break(2149861920);
L_80244A24:
    // 0x80244A24: lw          $t4, 0xC($t2)
    ctx->r12 = MEM_W(ctx->r10, 0XC);
    // 0x80244A28: lw          $t3, 0x14($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X14);
    // 0x80244A2C: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80244A30: addu        $t8, $t3, $t6
    ctx->r24 = ADD32(ctx->r11, ctx->r14);
    // 0x80244A34: sw          $t1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r9;
    // 0x80244A38: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80244A3C: lw          $t7, 0x8($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X8);
    // 0x80244A40: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x80244A44: sw          $t0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r8;
    // 0x80244A48: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80244A4C: lw          $t2, 0x0($t5)
    ctx->r10 = MEM_W(ctx->r13, 0X0);
    // 0x80244A50: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x80244A54: beq         $t4, $zero, L_80244A70
    if (ctx->r12 == 0) {
        // 0x80244A58: nop
    
            goto L_80244A70;
    }
    // 0x80244A58: nop

    // 0x80244A5C: jal         0x80241F44
    // 0x80244A60: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_80241F44(rdram, ctx);
        goto after_3;
    // 0x80244A60: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_3:
    // 0x80244A64: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80244A68: jal         0x80237360
    // 0x80244A6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80237360(rdram, ctx);
        goto after_4;
    // 0x80244A6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
L_80244A70:
    // 0x80244A70: jal         0x80241780
    // 0x80244A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80241780(rdram, ctx);
        goto after_5;
    // 0x80244A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80244A78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80244A7C:
    // 0x80244A7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80244A80: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80244A84: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80244A88: jr          $ra
    // 0x80244A8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80244A8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023D258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D258: lh          $t7, 0x12($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X12);
    // 0x8023D25C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023D260: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023D264: ld          $t6, 0x8($sp)
    ctx->r14 = LD(ctx->r29, 0X8);
    // 0x8023D268: or          $t8, $t7, $zero
    ctx->r24 = ctx->r15 | 0;
    // 0x8023D26C: or          $t9, $t8, $zero
    ctx->r25 = ctx->r24 | 0;
    // 0x8023D270: ddivu       $zero, $t6, $t9
    DDIVU(U64(ctx->r14), U64(ctx->r25), &lo, &hi);
    // 0x8023D274: bne         $t9, $zero, L_8023D280
    if (ctx->r25 != 0) {
        // 0x8023D278: nop
    
            goto L_8023D280;
    }
    // 0x8023D278: nop

    // 0x8023D27C: break       7
    do_break(2149831292);
L_8023D280:
    // 0x8023D280: mflo        $t0
    ctx->r8 = lo;
    // 0x8023D284: sd          $t0, 0x0($a0)
    SD(ctx->r8, 0X0, ctx->r4);
    // 0x8023D288: lh          $t2, 0x12($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X12);
    // 0x8023D28C: ld          $t1, 0x8($sp)
    ctx->r9 = LD(ctx->r29, 0X8);
    // 0x8023D290: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
    // 0x8023D294: or          $t4, $t3, $zero
    ctx->r12 = ctx->r11 | 0;
    // 0x8023D298: ddivu       $zero, $t1, $t4
    DDIVU(U64(ctx->r9), U64(ctx->r12), &lo, &hi);
    // 0x8023D29C: bne         $t4, $zero, L_8023D2A8
    if (ctx->r12 != 0) {
        // 0x8023D2A0: nop
    
            goto L_8023D2A8;
    }
    // 0x8023D2A0: nop

    // 0x8023D2A4: break       7
    do_break(2149831332);
L_8023D2A8:
    // 0x8023D2A8: mfhi        $t5
    ctx->r13 = hi;
    // 0x8023D2AC: sd          $t5, 0x0($a1)
    SD(ctx->r13, 0X0, ctx->r5);
    // 0x8023D2B0: jr          $ra
    // 0x8023D2B4: nop

    return;
    // 0x8023D2B4: nop

;}
RECOMP_FUNC void func_80221BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80221BC4: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x80221BC8: addiu       $t2, $t2, -0x1794
    ctx->r10 = ADD32(ctx->r10, -0X1794);
    // 0x80221BCC: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x80221BD0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80221BD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80221BD8: bne         $t6, $zero, L_80221BF4
    if (ctx->r14 != 0) {
        // 0x80221BDC: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80221BF4;
    }
    // 0x80221BDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80221BE0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80221BE4: jal         0x80231A24
    // 0x80221BE8: addiu       $a0, $a0, 0x3874
    ctx->r4 = ADD32(ctx->r4, 0X3874);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80221BE8: addiu       $a0, $a0, 0x3874
    ctx->r4 = ADD32(ctx->r4, 0X3874);
    after_0:
    // 0x80221BEC: b           L_80221F34
    // 0x80221BF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80221F34;
    // 0x80221BF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80221BF4:
    // 0x80221BF4: lui         $t1, 0x8027
    ctx->r9 = S32(0X8027 << 16);
    // 0x80221BF8: addiu       $t1, $t1, 0x3B90
    ctx->r9 = ADD32(ctx->r9, 0X3B90);
    // 0x80221BFC: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x80221C00: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    // 0x80221C04: lui         $t8, 0xE900
    ctx->r24 = S32(0XE900 << 16);
    // 0x80221C08: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80221C0C: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x80221C10: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80221C14: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80221C18: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x80221C1C: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80221C20: lui         $t3, 0xB800
    ctx->r11 = S32(0XB800 << 16);
    // 0x80221C24: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80221C28: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x80221C2C: addiu       $s0, $s0, -0x178C
    ctx->r16 = ADD32(ctx->r16, -0X178C);
    // 0x80221C30: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80221C34: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80221C38: lhu         $t5, 0x0($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X0);
    // 0x80221C3C: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x80221C40: lw          $t4, 0x0($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X0);
    // 0x80221C44: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80221C48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80221C4C: lw          $t7, 0x4390($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4390);
    // 0x80221C50: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x80221C54: addiu       $t0, $t0, -0x1788
    ctx->r8 = ADD32(ctx->r8, -0X1788);
    // 0x80221C58: subu        $t8, $t4, $t7
    ctx->r24 = SUB32(ctx->r12, ctx->r15);
    // 0x80221C5C: sra         $a0, $t8, 3
    ctx->r4 = S32(SIGNED(ctx->r24) >> 3);
    // 0x80221C60: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80221C64: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80221C68: sw          $a0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r4;
    // 0x80221C6C: addiu       $a2, $a2, 0xBE0
    ctx->r6 = ADD32(ctx->r6, 0XBE0);
    // 0x80221C70: jal         0x80231C58
    // 0x80221C74: addiu       $a1, $a1, 0x38A4
    ctx->r5 = ADD32(ctx->r5, 0X38A4);
    func_80231C58(rdram, ctx);
        goto after_1;
    // 0x80221C74: addiu       $a1, $a1, 0x38A4
    ctx->r5 = ADD32(ctx->r5, 0X38A4);
    after_1:
    // 0x80221C78: beq         $v0, $zero, L_80221C84
    if (ctx->r2 == 0) {
        // 0x80221C7C: lui         $v1, 0x8027
        ctx->r3 = S32(0X8027 << 16);
            goto L_80221C84;
    }
    // 0x80221C7C: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x80221C80: sw          $zero, 0x0($zero)
    MEM_W(0X0, 0) = 0;
L_80221C84:
    // 0x80221C84: lhu         $t3, 0x0($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X0);
    // 0x80221C88: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80221C8C: addiu       $v1, $v1, 0x44BC
    ctx->r3 = ADD32(ctx->r3, 0X44BC);
    // 0x80221C90: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80221C94: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80221C98: lw          $t6, 0x4380($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4380);
    // 0x80221C9C: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80221CA0: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80221CA4: addiu       $t8, $t8, 0x1500
    ctx->r24 = ADD32(ctx->r24, 0X1500);
    // 0x80221CA8: sw          $t6, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r14;
    // 0x80221CAC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80221CB0: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x80221CB4: addiu       $t3, $t3, 0x8F0
    ctx->r11 = ADD32(ctx->r11, 0X8F0);
    // 0x80221CB8: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x80221CBC: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80221CC0: addiu       $t6, $zero, 0x53
    ctx->r14 = ADD32(0, 0X53);
    // 0x80221CC4: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x80221CC8: sw          $t8, 0x50($t9)
    MEM_W(0X50, ctx->r25) = ctx->r24;
    // 0x80221CCC: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80221CD0: addiu       $a2, $a2, -0x5190
    ctx->r6 = ADD32(ctx->r6, -0X5190);
    // 0x80221CD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80221CD8: sw          $t3, 0x54($t5)
    MEM_W(0X54, ctx->r13) = ctx->r11;
    // 0x80221CDC: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80221CE0: lui         $t3, 0x8027
    ctx->r11 = S32(0X8027 << 16);
    // 0x80221CE4: addiu       $t3, $t3, 0x44C0
    ctx->r11 = ADD32(ctx->r11, 0X44C0);
    // 0x80221CE8: sw          $t6, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r14;
    // 0x80221CEC: lhu         $t7, 0x0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X0);
    // 0x80221CF0: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80221CF4: addiu       $t6, $t6, -0x50C0
    ctx->r14 = ADD32(ctx->r14, -0X50C0);
    // 0x80221CF8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80221CFC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80221D00: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80221D04: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80221D08: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80221D0C: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x80221D10: addu        $v0, $t9, $t3
    ctx->r2 = ADD32(ctx->r25, ctx->r11);
    // 0x80221D14: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x80221D18: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80221D1C: subu        $t4, $t6, $a2
    ctx->r12 = SUB32(ctx->r14, ctx->r6);
    // 0x80221D20: addiu       $t7, $zero, 0x1000
    ctx->r15 = ADD32(0, 0X1000);
    // 0x80221D24: addiu       $t8, $zero, 0x800
    ctx->r24 = ADD32(0, 0X800);
    // 0x80221D28: addiu       $t9, $t9, 0x5A60
    ctx->r25 = ADD32(ctx->r25, 0X5A60);
    // 0x80221D2C: addiu       $t3, $zero, 0x400
    ctx->r11 = ADD32(0, 0X400);
    // 0x80221D30: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80221D34: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80221D38: sw          $a2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r6;
    // 0x80221D3C: sw          $t4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r12;
    // 0x80221D40: sw          $t7, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r15;
    // 0x80221D44: sw          $t8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r24;
    // 0x80221D48: sw          $t9, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r25;
    // 0x80221D4C: sw          $t3, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r11;
    // 0x80221D50: lhu         $t5, 0x0($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X0);
    // 0x80221D54: lui         $t4, 0x8027
    ctx->r12 = S32(0X8027 << 16);
    // 0x80221D58: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80221D5C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80221D60: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x80221D64: lw          $t4, 0x4390($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X4390);
    // 0x80221D68: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x80221D6C: lui         $t5, 0x8025
    ctx->r13 = S32(0X8025 << 16);
    // 0x80221D70: sw          $t4, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r12;
    // 0x80221D74: lw          $t7, -0x1788($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1788);
    // 0x80221D78: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80221D7C: addiu       $t9, $t9, 0x4570
    ctx->r25 = ADD32(ctx->r25, 0X4570);
    // 0x80221D80: addiu       $t3, $zero, 0xBA0
    ctx->r11 = ADD32(0, 0XBA0);
    // 0x80221D84: addiu       $t5, $t5, -0x3CA0
    ctx->r13 = ADD32(ctx->r13, -0X3CA0);
    // 0x80221D88: addiu       $t6, $t6, 0x62B0
    ctx->r14 = ADD32(ctx->r14, 0X62B0);
    // 0x80221D8C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80221D90: sw          $t8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r24;
    // 0x80221D94: sw          $t9, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r25;
    // 0x80221D98: sw          $t3, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r11;
    // 0x80221D9C: sw          $t5, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r13;
    // 0x80221DA0: sw          $t6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r14;
    // 0x80221DA4: lui         $t4, 0x8027
    ctx->r12 = S32(0X8027 << 16);
    // 0x80221DA8: lw          $t4, 0x3B88($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B88);
    // 0x80221DAC: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x80221DB0: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    // 0x80221DB4: sw          $t4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r12;
    // 0x80221DB8: lw          $t7, 0x3B8C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B8C);
    // 0x80221DBC: jal         0x8022D560
    // 0x80221DC0: sw          $t7, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r15;
    func_8022D560(rdram, ctx);
        goto after_2;
    // 0x80221DC0: sw          $t7, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r15;
    after_2:
    // 0x80221DC4: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80221DC8: jal         0x8022CA28
    // 0x80221DCC: addiu       $a0, $a0, 0x1218
    ctx->r4 = ADD32(ctx->r4, 0X1218);
    func_8022CA28(rdram, ctx);
        goto after_3;
    // 0x80221DCC: addiu       $a0, $a0, 0x1218
    ctx->r4 = ADD32(ctx->r4, 0X1218);
    after_3:
    // 0x80221DD0: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80221DD4: lw          $a1, 0x44BC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X44BC);
    // 0x80221DD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80221DDC: jal         0x80236B80
    // 0x80221DE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80236B80(rdram, ctx);
        goto after_4;
    // 0x80221DE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80221DE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80221DE8: jal         0x80203C18
    // 0x80221DEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80203C18(rdram, ctx);
        goto after_5;
    // 0x80221DEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80221DF0: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x80221DF4: lw          $t8, -0x1784($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1784);
    // 0x80221DF8: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x80221DFC: bne         $t8, $zero, L_80221E14
    if (ctx->r24 != 0) {
        // 0x80221E00: nop
    
            goto L_80221E14;
    }
    // 0x80221E00: nop

    // 0x80221E04: jal         0x8023CE10
    // 0x80221E08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8023CE10(rdram, ctx);
        goto after_6;
    // 0x80221E08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x80221E0C: b           L_80221E2C
    // 0x80221E10: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
        goto L_80221E2C;
    // 0x80221E10: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_80221E14:
    // 0x80221E14: lw          $t9, -0x1798($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1798);
    // 0x80221E18: beql        $t9, $zero, L_80221E2C
    if (ctx->r25 == 0) {
        // 0x80221E1C: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_80221E2C;
    }
    goto skip_0;
    // 0x80221E1C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    skip_0:
    // 0x80221E20: jal         0x80230F68
    // 0x80221E24: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80230F68(rdram, ctx);
        goto after_7;
    // 0x80221E24: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_7:
    // 0x80221E28: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_80221E2C:
    // 0x80221E2C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80221E30: sw          $t3, -0x1798($at)
    MEM_W(-0X1798, ctx->r1) = ctx->r11;
    // 0x80221E34: lhu         $t5, 0x0($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X0);
    // 0x80221E38: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80221E3C: lw          $v0, -0x1758($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1758);
    // 0x80221E40: xori        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 ^ 0X1;
    // 0x80221E44: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x80221E48: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80221E4C: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x80221E50: beq         $v0, $zero, L_80221E78
    if (ctx->r2 == 0) {
        // 0x80221E54: lw          $a0, 0x4380($a0)
        ctx->r4 = MEM_W(ctx->r4, 0X4380);
            goto L_80221E78;
    }
    // 0x80221E54: lw          $a0, 0x4380($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4380);
    // 0x80221E58: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80221E5C: lw          $a1, 0x4388($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4388);
    // 0x80221E60: jalr        $v0
    // 0x80221E64: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x80221E64: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_8:
    // 0x80221E68: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80221E6C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80221E70: jal         0x8023CE80
    // 0x80221E74: ori         $a1, $a1, 0x5800
    ctx->r5 = ctx->r5 | 0X5800;
    func_8023CE80(rdram, ctx);
        goto after_9;
    // 0x80221E74: ori         $a1, $a1, 0x5800
    ctx->r5 = ctx->r5 | 0X5800;
    after_9:
L_80221E78:
    // 0x80221E78: jal         0x80207130
    // 0x80221E7C: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
    func_80207130(rdram, ctx);
        goto after_10;
    // 0x80221E7C: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
    after_10:
    // 0x80221E80: lhu         $t7, 0x0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X0);
    // 0x80221E84: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x80221E88: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80221E8C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80221E90: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80221E94: swc1        $f4, -0x17C0($at)
    MEM_W(-0X17C0, ctx->r1) = ctx->f4.u32l;
    // 0x80221E98: jal         0x80207210
    // 0x80221E9C: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
    func_80207210(rdram, ctx);
        goto after_11;
    // 0x80221E9C: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
    after_11:
    // 0x80221EA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80221EA4: jal         0x8022D560
    // 0x80221EA8: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    func_8022D560(rdram, ctx);
        goto after_12;
    // 0x80221EA8: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_12:
    // 0x80221EAC: lhu         $t9, 0x0($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X0);
    // 0x80221EB0: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80221EB4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80221EB8: xori        $t3, $t9, 0x1
    ctx->r11 = ctx->r25 ^ 0X1;
    // 0x80221EBC: sh          $t3, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r11;
    // 0x80221EC0: sh          $t5, -0x177C($at)
    MEM_H(-0X177C, ctx->r1) = ctx->r13;
    // 0x80221EC4: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80221EC8: lui         $t4, 0x8027
    ctx->r12 = S32(0X8027 << 16);
    // 0x80221ECC: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x80221ED0: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80221ED4: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80221ED8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80221EDC: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80221EE0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80221EE4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80221EE8: addiu       $t4, $t4, 0x44C0
    ctx->r12 = ADD32(ctx->r12, 0X44C0);
    // 0x80221EEC: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x80221EF0: lw          $t8, 0x4380($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4380);
    // 0x80221EF4: addu        $t7, $t6, $t4
    ctx->r15 = ADD32(ctx->r14, ctx->r12);
    // 0x80221EF8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80221EFC: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x80221F00: sw          $t7, 0x44BC($at)
    MEM_W(0X44BC, ctx->r1) = ctx->r15;
    // 0x80221F04: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x80221F08: lw          $t9, 0x4390($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4390);
    // 0x80221F0C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80221F10: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x80221F14: lw          $t3, -0x1784($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1784);
    // 0x80221F18: sw          $t8, -0x17A8($at)
    MEM_W(-0X17A8, ctx->r1) = ctx->r24;
    // 0x80221F1C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80221F20: sw          $t9, 0x3B90($at)
    MEM_W(0X3B90, ctx->r1) = ctx->r25;
    // 0x80221F24: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80221F28: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x80221F2C: sw          $t5, -0x1784($at)
    MEM_W(-0X1784, ctx->r1) = ctx->r13;
    // 0x80221F30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80221F34:
    // 0x80221F34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80221F38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80221F3C: jr          $ra
    // 0x80221F40: nop

    return;
    // 0x80221F40: nop

;}
RECOMP_FUNC void func_80249170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249170: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80249174: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80249178: blez        $a2, L_802491DC
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8024917C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_802491DC;
    }
    // 0x8024917C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80249180: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x80249184: beq         $a1, $zero, L_802491AC
    if (ctx->r5 == 0) {
        // 0x80249188: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_802491AC;
    }
    // 0x80249188: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_8024918C:
    // 0x8024918C: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80249190: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80249194: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80249198: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024919C: bne         $a0, $a3, L_8024918C
    if (ctx->r4 != ctx->r7) {
        // 0x802491A0: sb          $t6, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r14;
            goto L_8024918C;
    }
    // 0x802491A0: sb          $t6, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r14;
    // 0x802491A4: beq         $a3, $a2, L_802491DC
    if (ctx->r7 == ctx->r6) {
        // 0x802491A8: nop
    
            goto L_802491DC;
    }
    // 0x802491A8: nop

L_802491AC:
    // 0x802491AC: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x802491B0: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x802491B4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802491B8: sb          $t7, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = ctx->r15;
    // 0x802491BC: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x802491C0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802491C4: sb          $t8, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = ctx->r24;
    // 0x802491C8: lbu         $t9, -0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, -0X2);
    // 0x802491CC: sb          $t9, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r25;
    // 0x802491D0: lbu         $t0, -0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, -0X1);
    // 0x802491D4: bne         $a3, $a2, L_802491AC
    if (ctx->r7 != ctx->r6) {
        // 0x802491D8: sb          $t0, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r8;
            goto L_802491AC;
    }
    // 0x802491D8: sb          $t0, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r8;
L_802491DC:
    // 0x802491DC: jr          $ra
    // 0x802491E0: nop

    return;
    // 0x802491E0: nop

;}
RECOMP_FUNC void func_802326D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802326D0: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x802326D4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802326D8: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x802326DC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802326E0: or          $t9, $a2, $zero
    ctx->r25 = ctx->r6 | 0;
    // 0x802326E4: subu        $a1, $t7, $v0
    ctx->r5 = SUB32(ctx->r15, ctx->r2);
    // 0x802326E8: subu        $a2, $t9, $v0
    ctx->r6 = SUB32(ctx->r25, ctx->r2);
    // 0x802326EC: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x802326F0: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x802326F4: andi        $t0, $a3, 0xFF
    ctx->r8 = ctx->r7 & 0XFF;
    // 0x802326F8: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x802326FC: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80232700: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80232704: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x80232708: beq         $t0, $zero, L_802327CC
    if (ctx->r8 == 0) {
        // 0x8023270C: or          $a2, $t4, $zero
        ctx->r6 = ctx->r12 | 0;
            goto L_802327CC;
    }
    // 0x8023270C: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x80232710: subu        $v0, $t4, $t2
    ctx->r2 = SUB32(ctx->r12, ctx->r10);
    // 0x80232714: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x80232718: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8023271C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80232720: beq         $t6, $at, L_80232738
    if (ctx->r14 == ctx->r1) {
        // 0x80232724: nop
    
            goto L_80232738;
    }
    // 0x80232724: nop

    // 0x80232728: beq         $t6, $zero, L_80232738
    if (ctx->r14 == 0) {
        // 0x8023272C: addiu       $at, $zero, -0x3F
        ctx->r1 = ADD32(0, -0X3F);
            goto L_80232738;
    }
    // 0x8023272C: addiu       $at, $zero, -0x3F
    ctx->r1 = ADD32(0, -0X3F);
    // 0x80232730: bne         $t6, $at, L_80232740
    if (ctx->r14 != ctx->r1) {
        // 0x80232734: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_80232740;
    }
    // 0x80232734: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_80232738:
    // 0x80232738: jr          $ra
    // 0x8023273C: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    return;
    // 0x8023273C: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_80232740:
    // 0x80232740: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x80232744: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80232748: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8023274C: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x80232750: slti        $at, $t8, 0x40
    ctx->r1 = SIGNED(ctx->r24) < 0X40 ? 1 : 0;
    // 0x80232754: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80232758: bne         $at, $zero, L_80232770
    if (ctx->r1 != 0) {
        // 0x8023275C: sra         $a2, $t9, 16
        ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
            goto L_80232770;
    }
    // 0x8023275C: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80232760: addiu       $a1, $t8, -0x40
    ctx->r5 = ADD32(ctx->r24, -0X40);
    // 0x80232764: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x80232768: b           L_80232784
    // 0x8023276C: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
        goto L_80232784;
    // 0x8023276C: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
L_80232770:
    // 0x80232770: bgezl       $a1, L_80232788
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80232774: slti        $at, $a2, 0x40
        ctx->r1 = SIGNED(ctx->r6) < 0X40 ? 1 : 0;
            goto L_80232788;
    }
    goto skip_0;
    // 0x80232774: slti        $at, $a2, 0x40
    ctx->r1 = SIGNED(ctx->r6) < 0X40 ? 1 : 0;
    skip_0:
    // 0x80232778: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    // 0x8023277C: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x80232780: sra         $a1, $t3, 16
    ctx->r5 = S32(SIGNED(ctx->r11) >> 16);
L_80232784:
    // 0x80232784: slti        $at, $a2, 0x40
    ctx->r1 = SIGNED(ctx->r6) < 0X40 ? 1 : 0;
L_80232788:
    // 0x80232788: bne         $at, $zero, L_802327A0
    if (ctx->r1 != 0) {
        // 0x8023278C: sll         $t9, $a1, 7
        ctx->r25 = S32(ctx->r5 << 7);
            goto L_802327A0;
    }
    // 0x8023278C: sll         $t9, $a1, 7
    ctx->r25 = S32(ctx->r5 << 7);
    // 0x80232790: addiu       $a2, $a2, -0x40
    ctx->r6 = ADD32(ctx->r6, -0X40);
    // 0x80232794: sll         $t5, $a2, 16
    ctx->r13 = S32(ctx->r6 << 16);
    // 0x80232798: b           L_802327B4
    // 0x8023279C: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
        goto L_802327B4;
    // 0x8023279C: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
L_802327A0:
    // 0x802327A0: bgezl       $a2, L_802327B8
    if (SIGNED(ctx->r6) >= 0) {
        // 0x802327A4: sll         $t0, $a2, 1
        ctx->r8 = S32(ctx->r6 << 1);
            goto L_802327B8;
    }
    goto skip_1;
    // 0x802327A4: sll         $t0, $a2, 1
    ctx->r8 = S32(ctx->r6 << 1);
    skip_1:
    // 0x802327A8: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x802327AC: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x802327B0: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
L_802327B4:
    // 0x802327B4: sll         $t0, $a2, 1
    ctx->r8 = S32(ctx->r6 << 1);
L_802327B8:
    // 0x802327B8: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x802327BC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802327C0: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x802327C4: jr          $ra
    // 0x802327C8: lhu         $v0, -0x1740($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1740);
    return;
    // 0x802327C8: lhu         $v0, -0x1740($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1740);
L_802327CC:
    // 0x802327CC: subu        $v0, $a2, $a1
    ctx->r2 = SUB32(ctx->r6, ctx->r5);
    // 0x802327D0: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x802327D4: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x802327D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802327DC: beq         $t3, $at, L_802327F4
    if (ctx->r11 == ctx->r1) {
        // 0x802327E0: nop
    
            goto L_802327F4;
    }
    // 0x802327E0: nop

    // 0x802327E4: beq         $t3, $zero, L_802327F4
    if (ctx->r11 == 0) {
        // 0x802327E8: addiu       $at, $zero, 0x3F
        ctx->r1 = ADD32(0, 0X3F);
            goto L_802327F4;
    }
    // 0x802327E8: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    // 0x802327EC: bne         $t3, $at, L_802327FC
    if (ctx->r11 != ctx->r1) {
        // 0x802327F0: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_802327FC;
    }
    // 0x802327F0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_802327F4:
    // 0x802327F4: jr          $ra
    // 0x802327F8: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    return;
    // 0x802327F8: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_802327FC:
    // 0x802327FC: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x80232800: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80232804: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80232808: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x8023280C: slti        $at, $t5, 0x40
    ctx->r1 = SIGNED(ctx->r13) < 0X40 ? 1 : 0;
    // 0x80232810: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x80232814: bne         $at, $zero, L_8023282C
    if (ctx->r1 != 0) {
        // 0x80232818: sra         $a2, $t6, 16
        ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
            goto L_8023282C;
    }
    // 0x80232818: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8023281C: addiu       $a1, $t5, -0x40
    ctx->r5 = ADD32(ctx->r13, -0X40);
    // 0x80232820: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x80232824: b           L_80232840
    // 0x80232828: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
        goto L_80232840;
    // 0x80232828: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
L_8023282C:
    // 0x8023282C: bgezl       $a1, L_80232844
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80232830: slti        $at, $a2, 0x40
        ctx->r1 = SIGNED(ctx->r6) < 0X40 ? 1 : 0;
            goto L_80232844;
    }
    goto skip_2;
    // 0x80232830: slti        $at, $a2, 0x40
    ctx->r1 = SIGNED(ctx->r6) < 0X40 ? 1 : 0;
    skip_2:
    // 0x80232834: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    // 0x80232838: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x8023283C: sra         $a1, $t0, 16
    ctx->r5 = S32(SIGNED(ctx->r8) >> 16);
L_80232840:
    // 0x80232840: slti        $at, $a2, 0x40
    ctx->r1 = SIGNED(ctx->r6) < 0X40 ? 1 : 0;
L_80232844:
    // 0x80232844: bne         $at, $zero, L_8023285C
    if (ctx->r1 != 0) {
        // 0x80232848: sll         $t7, $a1, 1
        ctx->r15 = S32(ctx->r5 << 1);
            goto L_8023285C;
    }
    // 0x80232848: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x8023284C: addiu       $a2, $a2, -0x40
    ctx->r6 = ADD32(ctx->r6, -0X40);
    // 0x80232850: sll         $t2, $a2, 16
    ctx->r10 = S32(ctx->r6 << 16);
    // 0x80232854: b           L_80232870
    // 0x80232858: sra         $a2, $t2, 16
    ctx->r6 = S32(SIGNED(ctx->r10) >> 16);
        goto L_80232870;
    // 0x80232858: sra         $a2, $t2, 16
    ctx->r6 = S32(SIGNED(ctx->r10) >> 16);
L_8023285C:
    // 0x8023285C: bgezl       $a2, L_80232874
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80232860: sll         $t6, $a2, 7
        ctx->r14 = S32(ctx->r6 << 7);
            goto L_80232874;
    }
    goto skip_3;
    // 0x80232860: sll         $t6, $a2, 7
    ctx->r14 = S32(ctx->r6 << 7);
    skip_3:
    // 0x80232864: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x80232868: sll         $t4, $a2, 16
    ctx->r12 = S32(ctx->r6 << 16);
    // 0x8023286C: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
L_80232870:
    // 0x80232870: sll         $t6, $a2, 7
    ctx->r14 = S32(ctx->r6 << 7);
L_80232874:
    // 0x80232874: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80232878: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023287C: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x80232880: lhu         $v0, -0x1740($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1740);
    // 0x80232884: jr          $ra
    // 0x80232888: nop

    return;
    // 0x80232888: nop

;}
RECOMP_FUNC void func_80200C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80200C28: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80200C2C: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80200C30: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x80200C34: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80200C38: sw          $s7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r23;
    // 0x80200C3C: sw          $s6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r22;
    // 0x80200C40: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x80200C44: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x80200C48: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x80200C4C: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x80200C50: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x80200C54: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x80200C58: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x80200C5C: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x80200C60: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x80200C64: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80200C68: lw          $t7, 0x3C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X3C);
    // 0x80200C6C: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80200C70: mtc1        $a2, $f26
    ctx->f26.u32l = ctx->r6;
    // 0x80200C74: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80200C78: lw          $s7, 0x0($t9)
    ctx->r23 = MEM_W(ctx->r25, 0X0);
    // 0x80200C7C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80200C80: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80200C84: bnel        $s7, $zero, L_80200CA0
    if (ctx->r23 != 0) {
        // 0x80200C88: mtc1        $zero, $f22
        ctx->f22.u32l = 0;
            goto L_80200CA0;
    }
    goto skip_0;
    // 0x80200C88: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    skip_0:
    // 0x80200C8C: jal         0x80231A24
    // 0x80200C90: addiu       $a0, $a0, 0x1C4C
    ctx->r4 = ADD32(ctx->r4, 0X1C4C);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80200C90: addiu       $a0, $a0, 0x1C4C
    ctx->r4 = ADD32(ctx->r4, 0X1C4C);
    after_0:
    // 0x80200C94: b           L_80201194
    // 0x80200C98: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_80201194;
    // 0x80200C98: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80200C9C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
L_80200CA0:
    // 0x80200CA0: sb          $zero, 0x11($s3)
    MEM_B(0X11, ctx->r19) = 0;
    // 0x80200CA4: lhu         $t6, 0x2($s7)
    ctx->r14 = MEM_HU(ctx->r23, 0X2);
    // 0x80200CA8: c.lt.s      $f26, $f22
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f26.fl < ctx->f22.fl;
    // 0x80200CAC: addiu       $s5, $zero, 0xC
    ctx->r21 = ADD32(0, 0XC);
    // 0x80200CB0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80200CB4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80200CB8: bc1f        L_80200CE4
    if (!c1cs) {
        // 0x80200CBC: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80200CE4;
    }
    // 0x80200CBC: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80200CC0: trunc.w.s   $f8, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    ctx->f8.u32l = TRUNC_W_S(ctx->f26.fl);
    // 0x80200CC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80200CC8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80200CCC: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x80200CD0: add.s       $f6, $f26, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f26.fl + ctx->f24.fl;
    // 0x80200CD4: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80200CD8: nop

    // 0x80200CDC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80200CE0: sub.s       $f26, $f6, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = ctx->f6.fl - ctx->f4.fl;
L_80200CE4:
    // 0x80200CE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80200CE8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80200CEC: nop

    // 0x80200CF0: c.lt.s      $f24, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f24.fl < ctx->f26.fl;
    // 0x80200CF4: nop

    // 0x80200CF8: bc1fl       L_80200D20
    if (!c1cs) {
        // 0x80200CFC: lbu         $t8, 0x8($s7)
        ctx->r24 = MEM_BU(ctx->r23, 0X8);
            goto L_80200D20;
    }
    goto skip_1;
    // 0x80200CFC: lbu         $t8, 0x8($s7)
    ctx->r24 = MEM_BU(ctx->r23, 0X8);
    skip_1:
    // 0x80200D00: trunc.w.s   $f8, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    ctx->f8.u32l = TRUNC_W_S(ctx->f26.fl);
    // 0x80200D04: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80200D08: nop

    // 0x80200D0C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80200D10: nop

    // 0x80200D14: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80200D18: sub.s       $f26, $f26, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = ctx->f26.fl - ctx->f6.fl;
    // 0x80200D1C: lbu         $t8, 0x8($s7)
    ctx->r24 = MEM_BU(ctx->r23, 0X8);
L_80200D20:
    // 0x80200D20: sb          $zero, 0x10($s3)
    MEM_B(0X10, ctx->r19) = 0;
    // 0x80200D24: mul.s       $f26, $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f0.fl);
    // 0x80200D28: sb          $t8, 0x11($s3)
    MEM_B(0X11, ctx->r19) = ctx->r24;
    // 0x80200D2C: lw          $t4, 0xC($s7)
    ctx->r12 = MEM_W(ctx->r23, 0XC);
    // 0x80200D30: lw          $s6, 0xC($s3)
    ctx->r22 = MEM_W(ctx->r19, 0XC);
    // 0x80200D34: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x80200D38: lw          $s1, 0x4($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X4);
    // 0x80200D3C: beq         $t4, $zero, L_80201190
    if (ctx->r12 == 0) {
        // 0x80200D40: lw          $s2, 0x8($s3)
        ctx->r18 = MEM_W(ctx->r19, 0X8);
            goto L_80201190;
    }
    // 0x80200D40: lw          $s2, 0x8($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X8);
    // 0x80200D44: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80200D48: lhu         $t5, 0x6($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X6);
L_80200D4C:
    // 0x80200D4C: lhu         $t9, 0x2($s7)
    ctx->r25 = MEM_HU(ctx->r23, 0X2);
    // 0x80200D50: lw          $s4, 0x0($s3)
    ctx->r20 = MEM_W(ctx->r19, 0X0);
    // 0x80200D54: bnel        $t5, $t9, L_80200D74
    if (ctx->r13 != ctx->r25) {
        // 0x80200D58: lw          $v0, 0x8($t4)
        ctx->r2 = MEM_W(ctx->r12, 0X8);
            goto L_80200D74;
    }
    goto skip_2;
    // 0x80200D58: lw          $v0, 0x8($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X8);
    skip_2:
    // 0x80200D5C: trunc.w.s   $f4, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    ctx->f4.u32l = TRUNC_W_S(ctx->f26.fl);
    // 0x80200D60: lw          $t2, 0xC($t4)
    ctx->r10 = MEM_W(ctx->r12, 0XC);
    // 0x80200D64: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80200D68: b           L_80200E40
    // 0x80200D6C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
        goto L_80200E40;
    // 0x80200D6C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80200D70: lw          $v0, 0x8($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X8);
L_80200D74:
    // 0x80200D74: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x80200D78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80200D7C: beq         $v0, $zero, L_80200DA0
    if (ctx->r2 == 0) {
        // 0x80200D80: addiu       $ra, $t5, -0x2
        ctx->r31 = ADD32(ctx->r13, -0X2);
            goto L_80200DA0;
    }
    // 0x80200D80: addiu       $ra, $t5, -0x2
    ctx->r31 = ADD32(ctx->r13, -0X2);
    // 0x80200D84: trunc.w.s   $f8, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    ctx->f8.u32l = TRUNC_W_S(ctx->f26.fl);
    // 0x80200D88: lw          $t2, 0xC($t4)
    ctx->r10 = MEM_W(ctx->r12, 0XC);
    // 0x80200D8C: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x80200D90: nop

    // 0x80200D94: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80200D98: b           L_80200E3C
    // 0x80200D9C: lbu         $a1, 0x0($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X0);
        goto L_80200E3C;
    // 0x80200D9C: lbu         $a1, 0x0($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X0);
L_80200DA0:
    // 0x80200DA0: bltz        $ra, L_80200E28
    if (SIGNED(ctx->r31) < 0) {
        // 0x80200DA4: or          $t0, $ra, $zero
        ctx->r8 = ctx->r31 | 0;
            goto L_80200E28;
    }
    // 0x80200DA4: or          $t0, $ra, $zero
    ctx->r8 = ctx->r31 | 0;
    // 0x80200DA8: trunc.w.s   $f10, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    ctx->f10.u32l = TRUNC_W_S(ctx->f26.fl);
    // 0x80200DAC: lw          $t2, 0xC($t4)
    ctx->r10 = MEM_W(ctx->r12, 0XC);
    // 0x80200DB0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80200DB4: nop

    // 0x80200DB8: addu        $v0, $a3, $t0
    ctx->r2 = ADD32(ctx->r7, ctx->r8);
L_80200DBC:
    // 0x80200DBC: bgez        $v0, L_80200DCC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80200DC0: sra         $t7, $v0, 1
        ctx->r15 = S32(SIGNED(ctx->r2) >> 1);
            goto L_80200DCC;
    }
    // 0x80200DC0: sra         $t7, $v0, 1
    ctx->r15 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80200DC4: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x80200DC8: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_80200DCC:
    // 0x80200DCC: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80200DD0: addu        $v1, $t2, $t8
    ctx->r3 = ADD32(ctx->r10, ctx->r24);
    // 0x80200DD4: lhu         $a0, 0x0($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X0);
    // 0x80200DD8: or          $t3, $t7, $zero
    ctx->r11 = ctx->r15 | 0;
    // 0x80200DDC: lhu         $a2, 0x2($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X2);
    // 0x80200DE0: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80200DE4: bne         $at, $zero, L_80200DFC
    if (ctx->r1 != 0) {
        // 0x80200DE8: slt         $at, $a1, $a2
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_80200DFC;
    }
    // 0x80200DE8: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80200DEC: beql        $at, $zero, L_80200E00
    if (ctx->r1 == 0) {
        // 0x80200DF0: slt         $at, $a1, $a0
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80200E00;
    }
    goto skip_3;
    // 0x80200DF0: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    skip_3:
    // 0x80200DF4: b           L_80200E14
    // 0x80200DF8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
        goto L_80200E14;
    // 0x80200DF8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_80200DFC:
    // 0x80200DFC: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
L_80200E00:
    // 0x80200E00: beql        $at, $zero, L_80200E14
    if (ctx->r1 == 0) {
        // 0x80200E04: addiu       $a3, $t3, 0x1
        ctx->r7 = ADD32(ctx->r11, 0X1);
            goto L_80200E14;
    }
    goto skip_4;
    // 0x80200E04: addiu       $a3, $t3, 0x1
    ctx->r7 = ADD32(ctx->r11, 0X1);
    skip_4:
    // 0x80200E08: b           L_80200E14
    // 0x80200E0C: addiu       $t0, $t3, -0x1
    ctx->r8 = ADD32(ctx->r11, -0X1);
        goto L_80200E14;
    // 0x80200E0C: addiu       $t0, $t3, -0x1
    ctx->r8 = ADD32(ctx->r11, -0X1);
    // 0x80200E10: addiu       $a3, $t3, 0x1
    ctx->r7 = ADD32(ctx->r11, 0X1);
L_80200E14:
    // 0x80200E14: slt         $at, $t0, $a3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80200E18: bne         $at, $zero, L_80200E28
    if (ctx->r1 != 0) {
        // 0x80200E1C: nop
    
            goto L_80200E28;
    }
    // 0x80200E1C: nop

    // 0x80200E20: beql        $t1, $zero, L_80200DBC
    if (ctx->r9 == 0) {
        // 0x80200E24: addu        $v0, $a3, $t0
        ctx->r2 = ADD32(ctx->r7, ctx->r8);
            goto L_80200DBC;
    }
    goto skip_5;
    // 0x80200E24: addu        $v0, $a3, $t0
    ctx->r2 = ADD32(ctx->r7, ctx->r8);
    skip_5:
L_80200E28:
    // 0x80200E28: beq         $t1, $zero, L_80200E38
    if (ctx->r9 == 0) {
        // 0x80200E2C: lw          $t2, 0xC($t4)
        ctx->r10 = MEM_W(ctx->r12, 0XC);
            goto L_80200E38;
    }
    // 0x80200E2C: lw          $t2, 0xC($t4)
    ctx->r10 = MEM_W(ctx->r12, 0XC);
    // 0x80200E30: b           L_80200E3C
    // 0x80200E34: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
        goto L_80200E3C;
    // 0x80200E34: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
L_80200E38:
    // 0x80200E38: or          $a1, $ra, $zero
    ctx->r5 = ctx->r31 | 0;
L_80200E3C:
    // 0x80200E3C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
L_80200E40:
    // 0x80200E40: bne         $t5, $v0, L_80200E50
    if (ctx->r13 != ctx->r2) {
        // 0x80200E44: sll         $t9, $a1, 1
        ctx->r25 = S32(ctx->r5 << 1);
            goto L_80200E50;
    }
    // 0x80200E44: sll         $t9, $a1, 1
    ctx->r25 = S32(ctx->r5 << 1);
    // 0x80200E48: b           L_80200E54
    // 0x80200E4C: addiu       $a2, $t5, -0x1
    ctx->r6 = ADD32(ctx->r13, -0X1);
        goto L_80200E54;
    // 0x80200E4C: addiu       $a2, $t5, -0x1
    ctx->r6 = ADD32(ctx->r13, -0X1);
L_80200E50:
    // 0x80200E50: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_80200E54:
    // 0x80200E54: addu        $t6, $t2, $t9
    ctx->r14 = ADD32(ctx->r10, ctx->r25);
    // 0x80200E58: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x80200E5C: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x80200E60: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80200E64: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80200E68: addu        $t9, $t2, $t8
    ctx->r25 = ADD32(ctx->r10, ctx->r24);
    // 0x80200E6C: bgez        $t7, L_80200E80
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80200E70: cvt.s.w     $f12, $f6
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80200E80;
    }
    // 0x80200E70: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80200E74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80200E78: nop

    // 0x80200E7C: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
L_80200E80:
    // 0x80200E80: lhu         $t6, 0x0($t9)
    ctx->r14 = MEM_HU(ctx->r25, 0X0);
    // 0x80200E84: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80200E88: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80200E8C: bgez        $t6, L_80200EA0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80200E90: cvt.s.w     $f2, $f8
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80200EA0;
    }
    // 0x80200E90: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80200E94: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80200E98: nop

    // 0x80200E9C: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
L_80200EA0:
    // 0x80200EA0: c.eq.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
    // 0x80200EA4: nop

    // 0x80200EA8: bc1fl       L_80200EC0
    if (!c1cs) {
        // 0x80200EAC: sub.s       $f4, $f2, $f12
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_80200EC0;
    }
    goto skip_6;
    // 0x80200EAC: sub.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f12.fl;
    skip_6:
    // 0x80200EB0: mov.s       $f18, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    ctx->f18.fl = ctx->f24.fl;
    // 0x80200EB4: b           L_80200ED0
    // 0x80200EB8: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
        goto L_80200ED0;
    // 0x80200EB8: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x80200EBC: sub.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f12.fl;
L_80200EC0:
    // 0x80200EC0: sub.s       $f6, $f2, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f26.fl;
    // 0x80200EC4: div.s       $f8, $f24, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f24.fl, ctx->f4.fl);
    // 0x80200EC8: mul.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80200ECC: sub.s       $f20, $f24, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f24.fl - ctx->f18.fl;
L_80200ED0:
    // 0x80200ED0: lw          $a0, 0x18($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X18);
    // 0x80200ED4: beq         $a0, $zero, L_8020100C
    if (ctx->r4 == 0) {
        // 0x80200ED8: nop
    
            goto L_8020100C;
    }
    // 0x80200ED8: nop

    // 0x80200EDC: beq         $s4, $zero, L_8020100C
    if (ctx->r20 == 0) {
        // 0x80200EE0: sll         $t7, $a1, 4
        ctx->r15 = S32(ctx->r5 << 4);
            goto L_8020100C;
    }
    // 0x80200EE0: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x80200EE4: sll         $t8, $a2, 4
    ctx->r24 = S32(ctx->r6 << 4);
    // 0x80200EE8: addu        $v1, $a0, $t8
    ctx->r3 = ADD32(ctx->r4, ctx->r24);
    // 0x80200EEC: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80200EF0: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x80200EF4: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80200EF8: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80200EFC: nop

    // 0x80200F00: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x80200F04: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80200F08: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x80200F0C: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80200F10: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80200F14: mul.s       $f4, $f6, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80200F18: nop

    // 0x80200F1C: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80200F20: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80200F24: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x80200F28: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80200F2C: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80200F30: mul.s       $f4, $f8, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80200F34: nop

    // 0x80200F38: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80200F3C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80200F40: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x80200F44: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80200F48: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80200F4C: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80200F50: nop

    // 0x80200F54: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x80200F58: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80200F5C: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x80200F60: lw          $t9, 0x1C($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X1C);
    // 0x80200F64: addu        $t6, $t9, $a1
    ctx->r14 = ADD32(ctx->r25, ctx->r5);
    // 0x80200F68: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80200F6C: beq         $t7, $zero, L_80201024
    if (ctx->r15 == 0) {
        // 0x80200F70: nop
    
            goto L_80201024;
    }
    // 0x80200F70: nop

    // 0x80200F74: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80200F78: lwc1        $f14, 0x4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80200F7C: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80200F80: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80200F84: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80200F88: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    // 0x80200F8C: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80200F90: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    // 0x80200F94: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x80200F98: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80200F9C: sw          $a2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r6;
    // 0x80200FA0: sw          $a1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r5;
    // 0x80200FA4: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80200FA8: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80200FAC: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80200FB0: jal         0x8022AA40
    // 0x80200FB4: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_8022AA40(rdram, ctx);
        goto after_1;
    // 0x80200FB4: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x80200FB8: c.eq.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl == ctx->f22.fl;
    // 0x80200FBC: lw          $a1, 0x90($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X90);
    // 0x80200FC0: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    // 0x80200FC4: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80200FC8: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x80200FCC: bc1t        L_80201024
    if (c1cs) {
        // 0x80200FD0: lwc1        $f18, 0x78($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
            goto L_80201024;
    }
    // 0x80200FD0: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80200FD4: div.s       $f2, $f24, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f24.fl, ctx->f0.fl);
    // 0x80200FD8: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80200FDC: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80200FE0: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80200FE4: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80200FE8: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80200FEC: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80200FF0: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x80200FF4: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80200FF8: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x80200FFC: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80201000: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x80201004: b           L_80201024
    // 0x80201008: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
        goto L_80201024;
    // 0x80201008: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
L_8020100C:
    // 0x8020100C: beql        $s4, $zero, L_80201028
    if (ctx->r20 == 0) {
        // 0x80201010: lw          $a0, 0x10($t4)
        ctx->r4 = MEM_W(ctx->r12, 0X10);
            goto L_80201028;
    }
    goto skip_7;
    // 0x80201010: lw          $a0, 0x10($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X10);
    skip_7:
    // 0x80201014: swc1        $f22, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f22.u32l;
    // 0x80201018: swc1        $f22, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f22.u32l;
    // 0x8020101C: swc1        $f22, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f22.u32l;
    // 0x80201020: swc1        $f24, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f24.u32l;
L_80201024:
    // 0x80201024: lw          $a0, 0x10($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X10);
L_80201028:
    // 0x80201028: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x8020102C: beq         $a0, $zero, L_802010AC
    if (ctx->r4 == 0) {
        // 0x80201030: nop
    
            goto L_802010AC;
    }
    // 0x80201030: nop

    // 0x80201034: beq         $v0, $zero, L_802010AC
    if (ctx->r2 == 0) {
        // 0x80201038: nop
    
            goto L_802010AC;
    }
    // 0x80201038: nop

    // 0x8020103C: multu       $a1, $s5
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80201040: mflo        $t8
    ctx->r24 = lo;
    // 0x80201044: addu        $v0, $a0, $t8
    ctx->r2 = ADD32(ctx->r4, ctx->r24);
    // 0x80201048: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8020104C: multu       $a2, $s5
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80201050: mflo        $t9
    ctx->r25 = lo;
    // 0x80201054: addu        $v1, $a0, $t9
    ctx->r3 = ADD32(ctx->r4, ctx->r25);
    // 0x80201058: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8020105C: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80201060: nop

    // 0x80201064: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80201068: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8020106C: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
    // 0x80201070: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80201074: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80201078: mul.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8020107C: nop

    // 0x80201080: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x80201084: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80201088: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
    // 0x8020108C: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80201090: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80201094: mul.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80201098: nop

    // 0x8020109C: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x802010A0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802010A4: b           L_802010C0
    // 0x802010A8: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
        goto L_802010C0;
    // 0x802010A8: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
L_802010AC:
    // 0x802010AC: beql        $v0, $zero, L_802010C4
    if (ctx->r2 == 0) {
        // 0x802010B0: lw          $a0, 0x14($t4)
        ctx->r4 = MEM_W(ctx->r12, 0X14);
            goto L_802010C4;
    }
    goto skip_8;
    // 0x802010B0: lw          $a0, 0x14($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X14);
    skip_8:
    // 0x802010B4: swc1        $f22, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f22.u32l;
    // 0x802010B8: swc1        $f22, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f22.u32l;
    // 0x802010BC: swc1        $f22, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f22.u32l;
L_802010C0:
    // 0x802010C0: lw          $a0, 0x14($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X14);
L_802010C4:
    // 0x802010C4: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x802010C8: beq         $a0, $zero, L_80201148
    if (ctx->r4 == 0) {
        // 0x802010CC: nop
    
            goto L_80201148;
    }
    // 0x802010CC: nop

    // 0x802010D0: beq         $v0, $zero, L_80201148
    if (ctx->r2 == 0) {
        // 0x802010D4: nop
    
            goto L_80201148;
    }
    // 0x802010D4: nop

    // 0x802010D8: multu       $a1, $s5
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802010DC: mflo        $t6
    ctx->r14 = lo;
    // 0x802010E0: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x802010E4: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802010E8: multu       $a2, $s5
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802010EC: mflo        $t7
    ctx->r15 = lo;
    // 0x802010F0: addu        $v1, $a0, $t7
    ctx->r3 = ADD32(ctx->r4, ctx->r15);
    // 0x802010F4: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x802010F8: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x802010FC: nop

    // 0x80201100: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80201104: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80201108: swc1        $f8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f8.u32l;
    // 0x8020110C: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80201110: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80201114: mul.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80201118: nop

    // 0x8020111C: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x80201120: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80201124: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x80201128: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8020112C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80201130: mul.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80201134: nop

    // 0x80201138: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8020113C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80201140: b           L_8020115C
    // 0x80201144: swc1        $f6, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f6.u32l;
        goto L_8020115C;
    // 0x80201144: swc1        $f6, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f6.u32l;
L_80201148:
    // 0x80201148: beql        $v0, $zero, L_80201160
    if (ctx->r2 == 0) {
        // 0x8020114C: lhu         $t8, 0x4($t4)
        ctx->r24 = MEM_HU(ctx->r12, 0X4);
            goto L_80201160;
    }
    goto skip_9;
    // 0x8020114C: lhu         $t8, 0x4($t4)
    ctx->r24 = MEM_HU(ctx->r12, 0X4);
    skip_9:
    // 0x80201150: swc1        $f24, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f24.u32l;
    // 0x80201154: swc1        $f24, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f24.u32l;
    // 0x80201158: swc1        $f24, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f24.u32l;
L_8020115C:
    // 0x8020115C: lhu         $t8, 0x4($t4)
    ctx->r24 = MEM_HU(ctx->r12, 0X4);
L_80201160:
    // 0x80201160: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x80201164: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x80201168: sb          $t8, -0x1($s6)
    MEM_B(-0X1, ctx->r22) = ctx->r24;
    // 0x8020116C: lbu         $t9, 0x10($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X10);
    // 0x80201170: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x80201174: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x80201178: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x8020117C: sb          $t6, 0x10($s3)
    MEM_B(0X10, ctx->r19) = ctx->r14;
    // 0x80201180: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x80201184: bnel        $t4, $zero, L_80200D4C
    if (ctx->r12 != 0) {
        // 0x80201188: lhu         $t5, 0x6($t4)
        ctx->r13 = MEM_HU(ctx->r12, 0X6);
            goto L_80200D4C;
    }
    goto skip_10;
    // 0x80201188: lhu         $t5, 0x6($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X6);
    skip_10:
    // 0x8020118C: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
L_80201190:
    // 0x80201190: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_80201194:
    // 0x80201194: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80201198: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x8020119C: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x802011A0: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x802011A4: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x802011A8: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x802011AC: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x802011B0: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x802011B4: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x802011B8: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x802011BC: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x802011C0: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x802011C4: jr          $ra
    // 0x802011C8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x802011C8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_802359FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802359FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235A00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235A04: lbu         $t6, 0x8($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X8);
    // 0x80235A08: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80235A0C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80235A10: bne         $t6, $at, L_80235BBC
    if (ctx->r14 != ctx->r1) {
        // 0x80235A14: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80235BBC;
    }
    // 0x80235A14: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80235A18: lbu         $t7, 0x9($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X9);
    // 0x80235A1C: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x80235A20: addiu       $v0, $a1, 0x4
    ctx->r2 = ADD32(ctx->r5, 0X4);
    // 0x80235A24: bnel        $t7, $at, L_80235BC0
    if (ctx->r15 != ctx->r1) {
        // 0x80235A28: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80235BC0;
    }
    goto skip_0;
    // 0x80235A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80235A2C: lbu         $t6, 0x8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8);
    // 0x80235A30: lbu         $t8, 0x7($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X7);
    // 0x80235A34: lw          $fp, 0x24($s7)
    ctx->r30 = MEM_W(ctx->r23, 0X24);
    // 0x80235A38: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x80235A3C: lbu         $t6, 0x9($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X9);
    // 0x80235A40: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80235A44: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x80235A48: or          $v1, $t8, $t6
    ctx->r3 = ctx->r24 | ctx->r14;
    // 0x80235A4C: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80235A50: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80235A54: jal         0x802359C0
    // 0x80235A58: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_802359C0(rdram, ctx);
        goto after_0;
    // 0x80235A58: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x80235A5C: lw          $s1, 0x50($s7)
    ctx->r17 = MEM_W(ctx->r23, 0X50);
    // 0x80235A60: beq         $s1, $zero, L_80235AD8
    if (ctx->r17 == 0) {
        // 0x80235A64: nop
    
            goto L_80235AD8;
    }
    // 0x80235A64: nop

    // 0x80235A68: addiu       $s4, $zero, 0x15
    ctx->r20 = ADD32(0, 0X15);
L_80235A6C:
    // 0x80235A6C: lh          $t7, 0xC($s1)
    ctx->r15 = MEM_H(ctx->r17, 0XC);
    // 0x80235A70: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x80235A74: lw          $s2, 0x0($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X0);
    // 0x80235A78: bne         $s4, $t7, L_80235AD0
    if (ctx->r20 != ctx->r15) {
        // 0x80235A7C: addu        $s0, $s0, $t9
        ctx->r16 = ADD32(ctx->r16, ctx->r25);
            goto L_80235AD0;
    }
    // 0x80235A7C: addu        $s0, $s0, $t9
    ctx->r16 = ADD32(ctx->r16, ctx->r25);
    // 0x80235A80: jal         0x80237120
    // 0x80235A84: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80237120(rdram, ctx);
        goto after_1;
    // 0x80235A84: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80235A88: beql        $s3, $zero, L_80235AA8
    if (ctx->r19 == 0) {
        // 0x80235A8C: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_80235AA8;
    }
    goto skip_1;
    // 0x80235A8C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    skip_1:
    // 0x80235A90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80235A94: jal         0x80237150
    // 0x80235A98: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80237150(rdram, ctx);
        goto after_2;
    // 0x80235A98: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x80235A9C: b           L_80235AB0
    // 0x80235AA0: nop

        goto L_80235AB0;
    // 0x80235AA0: nop

    // 0x80235AA4: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_80235AA8:
    // 0x80235AA8: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x80235AAC: or          $s3, $s1, $zero
    ctx->r19 = ctx->r17 | 0;
L_80235AB0:
    // 0x80235AB0: beq         $s2, $zero, L_80235ACC
    if (ctx->r18 == 0) {
        // 0x80235AB4: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_80235ACC;
    }
    // 0x80235AB4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80235AB8: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x80235ABC: lw          $t8, 0x8($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X8);
    // 0x80235AC0: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x80235AC4: addu        $t6, $t8, $v0
    ctx->r14 = ADD32(ctx->r24, ctx->r2);
    // 0x80235AC8: sw          $t6, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r14;
L_80235ACC:
    // 0x80235ACC: sw          $v1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r3;
L_80235AD0:
    // 0x80235AD0: bne         $s2, $zero, L_80235A6C
    if (ctx->r18 != 0) {
        // 0x80235AD4: or          $s1, $s2, $zero
        ctx->r17 = ctx->r18 | 0;
            goto L_80235A6C;
    }
    // 0x80235AD4: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
L_80235AD8:
    // 0x80235AD8: beq         $s3, $zero, L_80235BBC
    if (ctx->r19 == 0) {
        // 0x80235ADC: or          $s1, $s3, $zero
        ctx->r17 = ctx->r19 | 0;
            goto L_80235BBC;
    }
    // 0x80235ADC: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x80235AE0: addiu       $s4, $s7, 0x48
    ctx->r20 = ADD32(ctx->r23, 0X48);
    // 0x80235AE4: addiu       $s5, $s4, 0x8
    ctx->r21 = ADD32(ctx->r20, 0X8);
    // 0x80235AE8: addiu       $s6, $zero, -0x8
    ctx->r22 = ADD32(0, -0X8);
L_80235AEC:
    // 0x80235AEC: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x80235AF0: lw          $t7, 0x24($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X24);
    // 0x80235AF4: lw          $s2, 0x0($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X0);
    // 0x80235AF8: div         $zero, $t9, $fp
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r30))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r30)));
    // 0x80235AFC: mflo        $v0
    ctx->r2 = lo;
    // 0x80235B00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80235B04: bne         $fp, $zero, L_80235B10
    if (ctx->r30 != 0) {
        // 0x80235B08: nop
    
            goto L_80235B10;
    }
    // 0x80235B08: nop

    // 0x80235B0C: break       7
    do_break(2149800716);
L_80235B10:
    // 0x80235B10: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80235B14: bne         $fp, $at, L_80235B28
    if (ctx->r30 != ctx->r1) {
        // 0x80235B18: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80235B28;
    }
    // 0x80235B18: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80235B1C: bne         $t9, $at, L_80235B28
    if (ctx->r25 != ctx->r1) {
        // 0x80235B20: nop
    
            goto L_80235B28;
    }
    // 0x80235B20: nop

    // 0x80235B24: break       6
    do_break(2149800740);
L_80235B28:
    // 0x80235B28: multu       $t7, $v0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80235B2C: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x80235B30: mflo        $t8
    ctx->r24 = lo;
    // 0x80235B34: sw          $t8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r24;
    // 0x80235B38: jal         0x8023FC40
    // 0x80235B3C: nop

    func_8023FC40(rdram, ctx);
        goto after_3;
    // 0x80235B3C: nop

    after_3:
    // 0x80235B40: beq         $s4, $s6, L_80235BAC
    if (ctx->r20 == ctx->r22) {
        // 0x80235B44: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80235BAC;
    }
    // 0x80235B44: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80235B48: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_80235B4C:
    // 0x80235B4C: bnel        $a0, $zero, L_80235B6C
    if (ctx->r4 != 0) {
        // 0x80235B50: lw          $v0, 0x8($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X8);
            goto L_80235B6C;
    }
    goto skip_2;
    // 0x80235B50: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    skip_2:
    // 0x80235B54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80235B58: jal         0x80237150
    // 0x80235B5C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80237150(rdram, ctx);
        goto after_4;
    // 0x80235B5C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x80235B60: b           L_80235BAC
    // 0x80235B64: nop

        goto L_80235BAC;
    // 0x80235B64: nop

    // 0x80235B68: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
L_80235B6C:
    // 0x80235B6C: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x80235B70: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80235B74: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80235B78: beq         $at, $zero, L_80235B9C
    if (ctx->r1 == 0) {
        // 0x80235B7C: subu        $t9, $v0, $v1
        ctx->r25 = SUB32(ctx->r2, ctx->r3);
            goto L_80235B9C;
    }
    // 0x80235B7C: subu        $t9, $v0, $v1
    ctx->r25 = SUB32(ctx->r2, ctx->r3);
    // 0x80235B80: subu        $t6, $v1, $v0
    ctx->r14 = SUB32(ctx->r3, ctx->r2);
    // 0x80235B84: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x80235B88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80235B8C: jal         0x80237150
    // 0x80235B90: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80237150(rdram, ctx);
        goto after_5;
    // 0x80235B90: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x80235B94: b           L_80235BAC
    // 0x80235B98: nop

        goto L_80235BAC;
    // 0x80235B98: nop

L_80235B9C:
    // 0x80235B9C: sw          $t9, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r25;
    // 0x80235BA0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80235BA4: bnel        $s0, $zero, L_80235B4C
    if (ctx->r16 != 0) {
        // 0x80235BA8: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_80235B4C;
    }
    goto skip_3;
    // 0x80235BA8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_3:
L_80235BAC:
    // 0x80235BAC: jal         0x8023FC40
    // 0x80235BB0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8023FC40(rdram, ctx);
        goto after_6;
    // 0x80235BB0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_6:
    // 0x80235BB4: bne         $s2, $zero, L_80235AEC
    if (ctx->r18 != 0) {
        // 0x80235BB8: or          $s1, $s2, $zero
        ctx->r17 = ctx->r18 | 0;
            goto L_80235AEC;
    }
    // 0x80235BB8: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
L_80235BBC:
    // 0x80235BBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80235BC0:
    // 0x80235BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80235BC4: jr          $ra
    // 0x80235BC8: nop

    return;
    // 0x80235BC8: nop

;}
RECOMP_FUNC void func_8022B80C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B80C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022B810: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B814: lui         $s0, 0x8027
    ctx->r16 = S32(0X8027 << 16);
    // 0x8022B818: lw          $s0, 0x5E78($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5E78);
    // 0x8022B81C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8022B820: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022B824: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022B828: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022B82C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022B830: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022B834: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x8022B838: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8022B83C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022B840: addiu       $t7, $t7, 0x5ED0
    ctx->r15 = ADD32(ctx->r15, 0X5ED0);
    // 0x8022B844: lui         $s1, 0x8027
    ctx->r17 = S32(0X8027 << 16);
    // 0x8022B848: lui         $s2, 0x8027
    ctx->r18 = S32(0X8027 << 16);
    // 0x8022B84C: lui         $s3, 0x8027
    ctx->r19 = S32(0X8027 << 16);
    // 0x8022B850: addiu       $s5, $a1, -0x1
    ctx->r21 = ADD32(ctx->r5, -0X1);
    // 0x8022B854: lui         $s6, 0x8025
    ctx->r22 = S32(0X8025 << 16);
    // 0x8022B858: lui         $s7, 0x8027
    ctx->r23 = S32(0X8027 << 16);
    // 0x8022B85C: sll         $t6, $s0, 3
    ctx->r14 = S32(ctx->r16 << 3);
    // 0x8022B860: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x8022B864: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x8022B868: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022B86C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8022B870: addiu       $s7, $s7, 0x5ED0
    ctx->r23 = ADD32(ctx->r23, 0X5ED0);
    // 0x8022B874: addiu       $s6, $s6, 0x4060
    ctx->r22 = ADD32(ctx->r22, 0X4060);
    // 0x8022B878: nor         $s5, $s5, $zero
    ctx->r21 = ~(ctx->r21 | 0);
    // 0x8022B87C: addiu       $s3, $s3, 0x5E74
    ctx->r19 = ADD32(ctx->r19, 0X5E74);
    // 0x8022B880: addiu       $s2, $s2, 0x5F7C
    ctx->r18 = ADD32(ctx->r18, 0X5F7C);
    // 0x8022B884: addiu       $s1, $s1, 0x5E78
    ctx->r17 = ADD32(ctx->r17, 0X5E78);
L_8022B888:
    // 0x8022B888: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8022B88C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x8022B890: addu        $t9, $t8, $s4
    ctx->r25 = ADD32(ctx->r24, ctx->r20);
    // 0x8022B894: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8022B898: and         $v1, $t0, $s5
    ctx->r3 = ctx->r8 & ctx->r21;
    // 0x8022B89C: addu        $a0, $v1, $fp
    ctx->r4 = ADD32(ctx->r3, ctx->r30);
    // 0x8022B8A0: sltu        $at, $t1, $a0
    ctx->r1 = ctx->r9 < ctx->r4 ? 1 : 0;
    // 0x8022B8A4: bne         $at, $zero, L_8022B8C8
    if (ctx->r1 != 0) {
        // 0x8022B8A8: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_8022B8C8;
    }
    // 0x8022B8A8: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8022B8AC: addiu       $a1, $a1, 0x5F88
    ctx->r5 = ADD32(ctx->r5, 0X5F88);
    // 0x8022B8B0: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x8022B8B4: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    // 0x8022B8B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8022B8BC: addu        $t3, $t2, $fp
    ctx->r11 = ADD32(ctx->r10, ctx->r30);
    // 0x8022B8C0: b           L_8022B918
    // 0x8022B8C4: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
        goto L_8022B918;
    // 0x8022B8C4: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
L_8022B8C8:
    // 0x8022B8C8: addiu       $t4, $s0, 0x1
    ctx->r12 = ADD32(ctx->r16, 0X1);
    // 0x8022B8CC: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x8022B8D0: addiu       $a1, $t4, 0x1
    ctx->r5 = ADD32(ctx->r12, 0X1);
    // 0x8022B8D4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8022B8D8: jal         0x80231A24
    // 0x8022B8DC: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022B8DC: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    after_0:
    // 0x8022B8E0: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8022B8E4: lw          $t5, 0x0($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X0);
    // 0x8022B8E8: slt         $at, $s0, $t5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8022B8EC: bne         $at, $zero, L_8022B904
    if (ctx->r1 != 0) {
        // 0x8022B8F0: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_8022B904;
    }
    // 0x8022B8F0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022B8F4: jal         0x80231A24
    // 0x8022B8F8: addiu       $a0, $a0, 0x409C
    ctx->r4 = ADD32(ctx->r4, 0X409C);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022B8F8: addiu       $a0, $a0, 0x409C
    ctx->r4 = ADD32(ctx->r4, 0X409C);
    after_1:
    // 0x8022B8FC: b           L_8022B918
    // 0x8022B900: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8022B918;
    // 0x8022B900: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022B904:
    // 0x8022B904: sll         $t6, $s0, 3
    ctx->r14 = S32(ctx->r16 << 3);
    // 0x8022B908: addu        $v0, $s7, $t6
    ctx->r2 = ADD32(ctx->r23, ctx->r14);
    // 0x8022B90C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8022B910: b           L_8022B888
    // 0x8022B914: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
        goto L_8022B888;
    // 0x8022B914: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
L_8022B918:
    // 0x8022B918: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022B91C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B920: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B924: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022B928: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022B92C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022B930: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B934: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022B938: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8022B93C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8022B940: jr          $ra
    // 0x8022B944: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8022B944: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80237120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237120: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80237124: beql        $v0, $zero, L_80237138
    if (ctx->r2 == 0) {
        // 0x80237128: lw          $v0, 0x4($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X4);
            goto L_80237138;
    }
    goto skip_0;
    // 0x80237128: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    skip_0:
    // 0x8023712C: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80237130: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80237134: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
L_80237138:
    // 0x80237138: beq         $v0, $zero, L_80237148
    if (ctx->r2 == 0) {
        // 0x8023713C: nop
    
            goto L_80237148;
    }
    // 0x8023713C: nop

    // 0x80237140: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80237144: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_80237148:
    // 0x80237148: jr          $ra
    // 0x8023714C: nop

    return;
    // 0x8023714C: nop

;}
RECOMP_FUNC void func_802438FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802438FC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80243900: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80243904: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80243908: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8024390C: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x80243910: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80243914: or          $t2, $a2, $zero
    ctx->r10 = ctx->r6 | 0;
    // 0x80243918: bne         $a2, $zero, L_80243928
    if (ctx->r6 != 0) {
        // 0x8024391C: sh          $t6, 0x46($sp)
        MEM_H(0X46, ctx->r29) = ctx->r14;
            goto L_80243928;
    }
    // 0x8024391C: sh          $t6, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r14;
    // 0x80243920: b           L_80243AF4
    // 0x80243924: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
        goto L_80243AF4;
    // 0x80243924: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
L_80243928:
    // 0x80243928: lw          $t7, 0x1C($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X1C);
    // 0x8024392C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x80243930: beql        $t7, $zero, L_8024399C
    if (ctx->r15 == 0) {
        // 0x80243934: lwc1        $f2, 0x18($t0)
        ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
            goto L_8024399C;
    }
    goto skip_0;
    // 0x80243934: lwc1        $f2, 0x18($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
    skip_0:
    // 0x80243938: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8024393C: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x80243940: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x80243944: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80243948: addiu       $a1, $sp, 0x46
    ctx->r5 = ADD32(ctx->r29, 0X46);
    // 0x8024394C: jalr        $t9
    // 0x80243950: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80243950: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_0:
    // 0x80243954: lh          $t3, 0x46($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X46);
    // 0x80243958: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8024395C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80243960: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x80243964: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x80243968: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x8024396C: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x80243970: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80243974: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80243978: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8024397C: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x80243980: lh          $t8, 0x0($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X0);
    // 0x80243984: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x80243988: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8024398C: or          $t5, $t9, $t4
    ctx->r13 = ctx->r25 | ctx->r12;
    // 0x80243990: b           L_80243AF0
    // 0x80243994: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
        goto L_80243AF0;
    // 0x80243994: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x80243998: lwc1        $f2, 0x18($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
L_8024399C:
    // 0x8024399C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802439A0: ldc1        $f4, 0x59D8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X59D8);
    // 0x802439A4: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x802439A8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802439AC: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x802439B0: nop

    // 0x802439B4: bc1fl       L_802439CC
    if (!c1cs) {
        // 0x802439B8: lui         $at, 0x4700
        ctx->r1 = S32(0X4700 << 16);
            goto L_802439CC;
    }
    goto skip_1;
    // 0x802439B8: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    skip_1:
    // 0x802439BC: lwc1        $f8, 0x59E0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X59E0);
    // 0x802439C0: swc1        $f8, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f8.u32l;
    // 0x802439C4: lwc1        $f2, 0x18($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
    // 0x802439C8: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
L_802439CC:
    // 0x802439CC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802439D0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x802439D4: addiu       $a1, $sp, 0x46
    ctx->r5 = ADD32(ctx->r29, 0X46);
    // 0x802439D8: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x802439DC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802439E0: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x802439E4: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x802439E8: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x802439EC: nop

    // 0x802439F0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802439F4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802439F8: swc1        $f4, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f4.u32l;
    // 0x802439FC: lwc1        $f6, 0x18($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X18);
    // 0x80243A00: div.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80243A04: lwc1        $f6, 0x20($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X20);
    // 0x80243A08: swc1        $f8, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f8.u32l;
    // 0x80243A0C: lwc1        $f10, 0x18($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X18);
    // 0x80243A10: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80243A14: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80243A18: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80243A1C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80243A20: nop

    // 0x80243A24: mtc1        $a2, $f16
    ctx->f16.u32l = ctx->r6;
    // 0x80243A28: nop

    // 0x80243A2C: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80243A30: sub.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80243A34: swc1        $f18, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f18.u32l;
    // 0x80243A38: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x80243A3C: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x80243A40: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x80243A44: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80243A48: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x80243A4C: jalr        $t9
    // 0x80243A50: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80243A50: nop

    after_1:
    // 0x80243A54: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80243A58: lh          $t5, 0x46($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X46);
    // 0x80243A5C: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x80243A60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80243A64: lwc1        $f6, 0x18($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X18);
    // 0x80243A68: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80243A6C: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x80243A70: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x80243A74: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80243A78: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80243A7C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80243A80: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80243A84: sll         $t5, $t2, 1
    ctx->r13 = S32(ctx->r10 << 1);
    // 0x80243A88: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x80243A8C: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x80243A90: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80243A94: sll         $t4, $t9, 16
    ctx->r12 = S32(ctx->r25 << 16);
    // 0x80243A98: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x80243A9C: trunc.w.s   $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80243AA0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80243AA4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x80243AA8: lw          $t3, 0x24($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X24);
    // 0x80243AAC: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x80243AB0: lui         $at, 0x500
    ctx->r1 = S32(0X500 << 16);
    // 0x80243AB4: andi        $t9, $t3, 0xFF
    ctx->r25 = ctx->r11 & 0XFF;
    // 0x80243AB8: sll         $t5, $t9, 16
    ctx->r13 = S32(ctx->r25 << 16);
    // 0x80243ABC: or          $t4, $t5, $at
    ctx->r12 = ctx->r13 | ctx->r1;
    // 0x80243AC0: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x80243AC4: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x80243AC8: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x80243ACC: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    // 0x80243AD0: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    // 0x80243AD4: jal         0x802375F0
    // 0x80243AD8: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    func_802375F0(rdram, ctx);
        goto after_2;
    // 0x80243AD8: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    after_2:
    // 0x80243ADC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80243AE0: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80243AE4: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80243AE8: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x80243AEC: sw          $zero, 0x24($t0)
    MEM_W(0X24, ctx->r8) = 0;
L_80243AF0:
    // 0x80243AF0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_80243AF4:
    // 0x80243AF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80243AF8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80243AFC: jr          $ra
    // 0x80243B00: nop

    return;
    // 0x80243B00: nop

;}
RECOMP_FUNC void func_8022A784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A784: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8022A788: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8022A78C: lwc1        $f12, 0x14($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8022A790: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8022A794: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8022A798: add.s       $f0, $f12, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f12.fl;
    // 0x8022A79C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8022A7A0: sub.s       $f2, $f14, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x8022A7A4: div.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8022A7A8: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x8022A7AC: lwc1        $f10, 0xC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8022A7B0: lwc1        $f8, 0x10($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8022A7B4: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8022A7B8: div.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8022A7BC: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    // 0x8022A7C0: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8022A7C4: add.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x8022A7C8: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8022A7CC: swc1        $f10, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f10.u32l;
    // 0x8022A7D0: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8022A7D4: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8022A7D8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022A7DC: div.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8022A7E0: swc1        $f10, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f10.u32l;
    // 0x8022A7E4: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8022A7E8: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x8022A7EC: sub.s       $f18, $f4, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x8022A7F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8022A7F4: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x8022A7F8: swc1        $f4, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f4.u32l;
    // 0x8022A7FC: div.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8022A800: swc1        $f10, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f10.u32l;
    // 0x8022A804: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8022A808: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8022A80C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8022A810: nop

    // 0x8022A814: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
    // 0x8022A818: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x8022A81C: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x8022A820: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8022A824: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x8022A828: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8022A82C: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x8022A830: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x8022A834: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x8022A838: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x8022A83C: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x8022A840: jr          $ra
    // 0x8022A844: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x8022A844: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8023403C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023403C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80234040: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80234044: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80234048: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023404C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80234050: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80234054: jal         0x8023CBF0
    // 0x80234058: addiu       $a0, $a0, 0x3B90
    ctx->r4 = ADD32(ctx->r4, 0X3B90);
    func_8023CBF0(rdram, ctx);
        goto after_0;
    // 0x80234058: addiu       $a0, $a0, 0x3B90
    ctx->r4 = ADD32(ctx->r4, 0X3B90);
    after_0:
    // 0x8023405C: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80234060: lhu         $v1, 0xBEC($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XBEC);
    // 0x80234064: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80234068: addiu       $s2, $zero, 0xFFF
    ctx->r18 = ADD32(0, 0XFFF);
    // 0x8023406C: blez        $v1, L_80234104
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80234070: lui         $s1, 0x8028
        ctx->r17 = S32(0X8028 << 16);
            goto L_80234104;
    }
    // 0x80234070: lui         $s1, 0x8028
    ctx->r17 = S32(0X8028 << 16);
    // 0x80234074: addiu       $s1, $s1, 0x3950
    ctx->r17 = ADD32(ctx->r17, 0X3950);
    // 0x80234078: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
L_8023407C:
    // 0x8023407C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80234080: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80234084: addu        $a0, $s0, $t6
    ctx->r4 = ADD32(ctx->r16, ctx->r14);
    // 0x80234088: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x8023408C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80234090: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234094: beq         $t7, $zero, L_802340A8
    if (ctx->r15 == 0) {
        // 0x80234098: nop
    
            goto L_802340A8;
    }
    // 0x80234098: nop

    // 0x8023409C: lbu         $t8, 0x2($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X2);
    // 0x802340A0: bnel        $t8, $zero, L_802340B4
    if (ctx->r24 != 0) {
        // 0x802340A4: lhu         $t9, 0xC($a0)
        ctx->r25 = MEM_HU(ctx->r4, 0XC);
            goto L_802340B4;
    }
    goto skip_0;
    // 0x802340A4: lhu         $t9, 0xC($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0XC);
    skip_0:
L_802340A8:
    // 0x802340A8: b           L_802340F4
    // 0x802340AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_802340F4;
    // 0x802340AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802340B0: lhu         $t9, 0xC($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0XC);
L_802340B4:
    // 0x802340B4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802340B8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802340BC: bne         $s2, $t9, L_802340D0
    if (ctx->r18 != ctx->r25) {
        // 0x802340C0: sll         $v0, $v0, 3
        ctx->r2 = S32(ctx->r2 << 3);
            goto L_802340D0;
    }
    // 0x802340C0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802340C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802340C8: b           L_802340F4
    // 0x802340CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_802340F4;
    // 0x802340CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_802340D0:
    // 0x802340D0: jal         0x80233EA0
    // 0x802340D4: nop

    func_80233EA0(rdram, ctx);
        goto after_1;
    // 0x802340D4: nop

    after_1:
    // 0x802340D8: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x802340DC: lhu         $v1, 0xBEC($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XBEC);
    // 0x802340E0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802340E4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802340E8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802340EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802340F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_802340F4:
    // 0x802340F4: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    // 0x802340F8: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802340FC: bnel        $at, $zero, L_8023407C
    if (ctx->r1 != 0) {
        // 0x80234100: lw          $t6, 0x0($s1)
        ctx->r14 = MEM_W(ctx->r17, 0X0);
            goto L_8023407C;
    }
    goto skip_1;
    // 0x80234100: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    skip_1:
L_80234104:
    // 0x80234104: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80234108: jal         0x8023A700
    // 0x8023410C: addiu       $a0, $a0, 0x3B90
    ctx->r4 = ADD32(ctx->r4, 0X3B90);
    func_8023A700(rdram, ctx);
        goto after_2;
    // 0x8023410C: addiu       $a0, $a0, 0x3B90
    ctx->r4 = ADD32(ctx->r4, 0X3B90);
    after_2:
    // 0x80234110: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80234114: lw          $t0, 0x3B90($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B90);
    // 0x80234118: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023411C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80234120: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80234124: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80234128: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023412C: addiu       $t1, $t0, -0x8
    ctx->r9 = ADD32(ctx->r8, -0X8);
    // 0x80234130: sw          $t1, 0x3B90($at)
    MEM_W(0X3B90, ctx->r1) = ctx->r9;
    // 0x80234134: jr          $ra
    // 0x80234138: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80234138: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802385E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802385E0: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x802385E4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802385E8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802385EC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x802385F0: addiu       $s3, $sp, 0x48
    ctx->r19 = ADD32(ctx->r29, 0X48);
    // 0x802385F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802385F8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x802385FC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80238600: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80238604: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80238608: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8023860C: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80238610: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x80238614: jal         0x802384CC
    // 0x80238618: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_802384CC(rdram, ctx);
        goto after_0;
    // 0x80238618: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x8023861C: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x80238620: addiu       $s4, $sp, 0x140
    ctx->r20 = ADD32(ctx->r29, 0X140);
    // 0x80238624: addiu       $s0, $sp, 0x58
    ctx->r16 = ADD32(ctx->r29, 0X58);
    // 0x80238628: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
L_8023862C:
    // 0x8023862C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80238630: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80238634: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x80238638: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x8023863C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80238640: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80238644: sw          $t7, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r15;
    // 0x80238648: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x8023864C: sw          $t8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r24;
L_80238650:
    // 0x80238650: lw          $t0, 0x18($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X18);
    // 0x80238654: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80238658: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8023865C: sw          $t0, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r8;
    // 0x80238660: lw          $t1, 0x58($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X58);
    // 0x80238664: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80238668: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8023866C: sw          $t1, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r9;
    // 0x80238670: lbu         $t2, 0x94($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X94);
    // 0x80238674: sb          $t2, 0x88($a1)
    MEM_B(0X88, ctx->r5) = ctx->r10;
    // 0x80238678: lbu         $t3, 0xA4($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0XA4);
    // 0x8023867C: sb          $t3, 0x98($a1)
    MEM_B(0X98, ctx->r5) = ctx->r11;
    // 0x80238680: lw          $t4, 0xA8($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XA8);
    // 0x80238684: sw          $t4, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r12;
    // 0x80238688: lw          $t5, 0xC($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XC);
    // 0x8023868C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80238690: lw          $t6, 0x4C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4C);
    // 0x80238694: sw          $t6, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r14;
    // 0x80238698: lbu         $t7, 0x95($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X95);
    // 0x8023869C: sb          $t7, 0x89($a1)
    MEM_B(0X89, ctx->r5) = ctx->r15;
    // 0x802386A0: lbu         $t8, 0xA5($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XA5);
    // 0x802386A4: sb          $t8, 0x99($a1)
    MEM_B(0X99, ctx->r5) = ctx->r24;
    // 0x802386A8: lw          $t9, 0xAC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XAC);
    // 0x802386AC: sw          $t9, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r25;
    // 0x802386B0: lw          $t0, 0x10($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X10);
    // 0x802386B4: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x802386B8: lw          $t1, 0x50($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X50);
    // 0x802386BC: sw          $t1, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r9;
    // 0x802386C0: lbu         $t2, 0x96($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X96);
    // 0x802386C4: sb          $t2, 0x8A($a1)
    MEM_B(0X8A, ctx->r5) = ctx->r10;
    // 0x802386C8: lbu         $t3, 0xA6($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0XA6);
    // 0x802386CC: sb          $t3, 0x9A($a1)
    MEM_B(0X9A, ctx->r5) = ctx->r11;
    // 0x802386D0: lw          $t4, 0xB0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XB0);
    // 0x802386D4: sw          $t4, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r12;
    // 0x802386D8: lw          $t5, 0x14($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X14);
    // 0x802386DC: sw          $t5, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r13;
    // 0x802386E0: lw          $t6, 0x54($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X54);
    // 0x802386E4: sw          $t6, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r14;
    // 0x802386E8: lbu         $t7, 0x97($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X97);
    // 0x802386EC: sb          $t7, 0x8B($a1)
    MEM_B(0X8B, ctx->r5) = ctx->r15;
    // 0x802386F0: lbu         $t8, 0xA7($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XA7);
    // 0x802386F4: sb          $t8, 0x9B($a1)
    MEM_B(0X9B, ctx->r5) = ctx->r24;
    // 0x802386F8: lw          $t9, 0xB4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XB4);
    // 0x802386FC: bne         $a0, $s0, L_80238650
    if (ctx->r4 != ctx->r16) {
        // 0x80238700: sw          $t9, 0xA8($v0)
        MEM_W(0XA8, ctx->r2) = ctx->r25;
            goto L_80238650;
    }
    // 0x80238700: sw          $t9, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r25;
    // 0x80238704: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80238708: jal         0x802381D4
    // 0x8023870C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_802381D4(rdram, ctx);
        goto after_1;
    // 0x8023870C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_1:
    // 0x80238710: lh          $t0, 0x140($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X140);
    // 0x80238714: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80238718: beq         $t0, $s5, L_80238728
    if (ctx->r8 == ctx->r21) {
        // 0x8023871C: sltu        $at, $t1, $s2
        ctx->r1 = ctx->r9 < ctx->r18 ? 1 : 0;
            goto L_80238728;
    }
    // 0x8023871C: sltu        $at, $t1, $s2
    ctx->r1 = ctx->r9 < ctx->r18 ? 1 : 0;
    // 0x80238720: bnel        $at, $zero, L_8023862C
    if (ctx->r1 != 0) {
        // 0x80238724: lw          $t6, 0x4C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X4C);
            goto L_8023862C;
    }
    goto skip_0;
    // 0x80238724: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    skip_0:
L_80238728:
    // 0x80238728: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023872C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80238730: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80238734: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80238738: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8023873C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80238740: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80238744: jr          $ra
    // 0x80238748: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    return;
    // 0x80238748: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
;}
RECOMP_FUNC void func_8023FE70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FE70: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    // 0x8023FE74: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
    // 0x8023FE78: subu        $v1, $t6, $a1
    ctx->r3 = SUB32(ctx->r14, ctx->r5);
    // 0x8023FE7C: bltz        $v1, L_8023FE8C
    if (SIGNED(ctx->r3) < 0) {
        // 0x8023FE80: nop
    
            goto L_8023FE8C;
    }
    // 0x8023FE80: nop

    // 0x8023FE84: jr          $ra
    // 0x8023FE88: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8023FE88: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8023FE8C:
    // 0x8023FE8C: jr          $ra
    // 0x8023FE90: nop

    return;
    // 0x8023FE90: nop

;}
RECOMP_FUNC void func_80228080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228080: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228084: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80228088: lui         $s1, 0x8028
    ctx->r17 = S32(0X8028 << 16);
    // 0x8022808C: addiu       $s1, $s1, 0xBC0
    ctx->r17 = ADD32(ctx->r17, 0XBC0);
    // 0x80228090: lhu         $a0, 0x3E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X3E);
    // 0x80228094: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228098: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8022809C: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x802280A0: jal         0x8022BA58
    // 0x802280A4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022BA58(rdram, ctx);
        goto after_0;
    // 0x802280A4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x802280A8: lhu         $a0, 0x42($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X42);
    // 0x802280AC: lui         $s0, 0x8027
    ctx->r16 = S32(0X8027 << 16);
    // 0x802280B0: addiu       $s0, $s0, 0x5A44
    ctx->r16 = ADD32(ctx->r16, 0X5A44);
    // 0x802280B4: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x802280B8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x802280BC: jal         0x8022BA58
    // 0x802280C0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8022BA58(rdram, ctx);
        goto after_1;
    // 0x802280C0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x802280C4: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802280C8: sw          $v0, 0x5A48($at)
    MEM_W(0X5A48, ctx->r1) = ctx->r2;
    // 0x802280CC: lhu         $a0, 0x42($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X42);
    // 0x802280D0: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x802280D4: jal         0x8022BA58
    // 0x802280D8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8022BA58(rdram, ctx);
        goto after_2;
    // 0x802280D8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_2:
    // 0x802280DC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802280E0: sw          $v0, 0x5A4C($at)
    MEM_W(0X5A4C, ctx->r1) = ctx->r2;
    // 0x802280E4: lhu         $a0, 0x40($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X40);
    // 0x802280E8: sll         $t9, $a0, 3
    ctx->r25 = S32(ctx->r4 << 3);
    // 0x802280EC: jal         0x8022BA58
    // 0x802280F0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_8022BA58(rdram, ctx);
        goto after_3;
    // 0x802280F0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_3:
    // 0x802280F4: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802280F8: sw          $v0, 0x5A50($at)
    MEM_W(0X5A50, ctx->r1) = ctx->r2;
    // 0x802280FC: lhu         $a0, 0x40($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X40);
    // 0x80228100: sll         $t0, $a0, 3
    ctx->r8 = S32(ctx->r4 << 3);
    // 0x80228104: jal         0x8022BA58
    // 0x80228108: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8022BA58(rdram, ctx);
        goto after_4;
    // 0x80228108: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_4:
    // 0x8022810C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80228110: sw          $v0, 0x5A54($at)
    MEM_W(0X5A54, ctx->r1) = ctx->r2;
    // 0x80228114: lhu         $t1, 0x3E($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X3E);
    // 0x80228118: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022811C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80228120: blezl       $t1, L_8022815C
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80228124: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8022815C;
    }
    goto skip_0;
    // 0x80228124: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80228128: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
L_8022812C:
    // 0x8022812C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228130: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x80228134: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
    // 0x80228138: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x8022813C: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x80228140: sb          $zero, 0x1($t5)
    MEM_B(0X1, ctx->r13) = 0;
    // 0x80228144: lhu         $t6, 0x3E($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X3E);
    // 0x80228148: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8022814C: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80228150: bnel        $at, $zero, L_8022812C
    if (ctx->r1 != 0) {
        // 0x80228154: lw          $t2, 0x0($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X0);
            goto L_8022812C;
    }
    goto skip_1;
    // 0x80228154: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x80228158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8022815C:
    // 0x8022815C: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x80228160: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x80228164: addiu       $v1, $v1, 0x5A5C
    ctx->r3 = ADD32(ctx->r3, 0X5A5C);
    // 0x80228168: addiu       $v0, $v0, 0x5A30
    ctx->r2 = ADD32(ctx->r2, 0X5A30);
    // 0x8022816C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80228170: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80228174: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80228178: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8022817C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80228180: sw          $zero, 0x5A58($at)
    MEM_W(0X5A58, ctx->r1) = 0;
    // 0x80228184: jr          $ra
    // 0x80228188: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80228188: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80241760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80241760: mfc0        $t0, Status
    ctx->r8 = cop0_status_read(ctx);
    // 0x80241764: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80241768: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x8024176C: mtc0        $t1, Status
    cop0_status_write(ctx, ctx->r9);    // 0x80241770: andi        $v0, $t0, 0x1
    ctx->r2 = ctx->r8 & 0X1;
    // 0x80241774: nop

    // 0x80241778: jr          $ra
    // 0x8024177C: nop

    return;
    // 0x8024177C: nop

;}
RECOMP_FUNC void func_80231848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231848: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8023184C: lw          $t6, -0x78C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X78C0);
    // 0x80231850: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80231854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231858: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8023185C: beq         $t6, $zero, L_8023186C
    if (ctx->r14 == 0) {
        // 0x80231860: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8023186C;
    }
    // 0x80231860: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80231864: b           L_80231A14
    // 0x80231868: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80231A14;
    // 0x80231868: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8023186C:
    // 0x8023186C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80231870: addiu       $a0, $a0, 0xC58
    ctx->r4 = ADD32(ctx->r4, 0XC58);
    // 0x80231874: jal         0x8023EDC0
    // 0x80231878: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_8023EDC0(rdram, ctx);
        goto after_0;
    // 0x80231878: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_0:
    // 0x8023187C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x80231880: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x80231884: beq         $t7, $zero, L_802318AC
    if (ctx->r15 == 0) {
        // 0x80231888: lw          $a3, 0x38($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X38);
            goto L_802318AC;
    }
    // 0x80231888: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8023188C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80231890: lw          $t8, 0x10($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X10);
    // 0x80231894: sw          $zero, 0x10($a3)
    MEM_W(0X10, ctx->r7) = 0;
    // 0x80231898: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8023189C: swc1        $f0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f0.u32l;
    // 0x802318A0: swc1        $f0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f0.u32l;
    // 0x802318A4: b           L_80231A14
    // 0x802318A8: sw          $t8, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r24;
        goto L_80231A14;
    // 0x802318A8: sw          $t8, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r24;
L_802318AC:
    // 0x802318AC: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802318B0: addiu       $a0, $a0, 0xC58
    ctx->r4 = ADD32(ctx->r4, 0XC58);
    // 0x802318B4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x802318B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802318BC: jal         0x802374B0
    // 0x802318C0: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_802374B0(rdram, ctx);
        goto after_1;
    // 0x802318C0: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_1:
    // 0x802318C4: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802318C8: jal         0x8023EE84
    // 0x802318CC: addiu       $a0, $a0, 0xCE0
    ctx->r4 = ADD32(ctx->r4, 0XCE0);
    func_8023EE84(rdram, ctx);
        goto after_2;
    // 0x802318CC: addiu       $a0, $a0, 0xCE0
    ctx->r4 = ADD32(ctx->r4, 0XCE0);
    after_2:
    // 0x802318D0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x802318D4: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x802318D8: addiu       $t1, $t1, 0xCE0
    ctx->r9 = ADD32(ctx->r9, 0XCE0);
    // 0x802318DC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x802318E0: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x802318E4: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x802318E8: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x802318EC: lb          $v0, 0x2($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2);
    // 0x802318F0: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x802318F4: lb          $v1, 0x3($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X3);
    // 0x802318F8: bgez        $v0, L_80231940
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802318FC: slti        $at, $v0, 0x45
        ctx->r1 = SIGNED(ctx->r2) < 0X45 ? 1 : 0;
            goto L_80231940;
    }
    // 0x802318FC: slti        $at, $v0, 0x45
    ctx->r1 = SIGNED(ctx->r2) < 0X45 ? 1 : 0;
    // 0x80231900: slti        $at, $v0, -0x44
    ctx->r1 = SIGNED(ctx->r2) < -0X44 ? 1 : 0;
    // 0x80231904: beql        $at, $zero, L_80231918
    if (ctx->r1 == 0) {
        // 0x80231908: slti        $at, $v0, -0x6
        ctx->r1 = SIGNED(ctx->r2) < -0X6 ? 1 : 0;
            goto L_80231918;
    }
    goto skip_0;
    // 0x80231908: slti        $at, $v0, -0x6
    ctx->r1 = SIGNED(ctx->r2) < -0X6 ? 1 : 0;
    skip_0:
    // 0x8023190C: b           L_80231924
    // 0x80231910: addiu       $v0, $zero, -0x44
    ctx->r2 = ADD32(0, -0X44);
        goto L_80231924;
    // 0x80231910: addiu       $v0, $zero, -0x44
    ctx->r2 = ADD32(0, -0X44);
    // 0x80231914: slti        $at, $v0, -0x6
    ctx->r1 = SIGNED(ctx->r2) < -0X6 ? 1 : 0;
L_80231918:
    // 0x80231918: bnel        $at, $zero, L_80231928
    if (ctx->r1 != 0) {
        // 0x8023191C: addiu       $t2, $v0, 0x7
        ctx->r10 = ADD32(ctx->r2, 0X7);
            goto L_80231928;
    }
    goto skip_1;
    // 0x8023191C: addiu       $t2, $v0, 0x7
    ctx->r10 = ADD32(ctx->r2, 0X7);
    skip_1:
    // 0x80231920: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
L_80231924:
    // 0x80231924: addiu       $t2, $v0, 0x7
    ctx->r10 = ADD32(ctx->r2, 0X7);
L_80231928:
    // 0x80231928: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8023192C: lui         $at, 0x4274
    ctx->r1 = S32(0X4274 << 16);
    // 0x80231930: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80231934: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80231938: b           L_80231978
    // 0x8023193C: div.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
        goto L_80231978;
    // 0x8023193C: div.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
L_80231940:
    // 0x80231940: bnel        $at, $zero, L_80231954
    if (ctx->r1 != 0) {
        // 0x80231944: slti        $at, $v0, 0x7
        ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
            goto L_80231954;
    }
    goto skip_2;
    // 0x80231944: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    skip_2:
    // 0x80231948: b           L_80231960
    // 0x8023194C: addiu       $v0, $zero, 0x44
    ctx->r2 = ADD32(0, 0X44);
        goto L_80231960;
    // 0x8023194C: addiu       $v0, $zero, 0x44
    ctx->r2 = ADD32(0, 0X44);
    // 0x80231950: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_80231954:
    // 0x80231954: beql        $at, $zero, L_80231964
    if (ctx->r1 == 0) {
        // 0x80231958: addiu       $t3, $v0, -0x7
        ctx->r11 = ADD32(ctx->r2, -0X7);
            goto L_80231964;
    }
    goto skip_3;
    // 0x80231958: addiu       $t3, $v0, -0x7
    ctx->r11 = ADD32(ctx->r2, -0X7);
    skip_3:
    // 0x8023195C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80231960:
    // 0x80231960: addiu       $t3, $v0, -0x7
    ctx->r11 = ADD32(ctx->r2, -0X7);
L_80231964:
    // 0x80231964: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80231968: lui         $at, 0x4274
    ctx->r1 = S32(0X4274 << 16);
    // 0x8023196C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80231970: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80231974: div.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
L_80231978:
    // 0x80231978: bgez        $v1, L_802319C0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8023197C: slti        $at, $v1, 0x47
        ctx->r1 = SIGNED(ctx->r3) < 0X47 ? 1 : 0;
            goto L_802319C0;
    }
    // 0x8023197C: slti        $at, $v1, 0x47
    ctx->r1 = SIGNED(ctx->r3) < 0X47 ? 1 : 0;
    // 0x80231980: slti        $at, $v1, -0x46
    ctx->r1 = SIGNED(ctx->r3) < -0X46 ? 1 : 0;
    // 0x80231984: beql        $at, $zero, L_80231998
    if (ctx->r1 == 0) {
        // 0x80231988: slti        $at, $v1, -0x6
        ctx->r1 = SIGNED(ctx->r3) < -0X6 ? 1 : 0;
            goto L_80231998;
    }
    goto skip_4;
    // 0x80231988: slti        $at, $v1, -0x6
    ctx->r1 = SIGNED(ctx->r3) < -0X6 ? 1 : 0;
    skip_4:
    // 0x8023198C: b           L_802319A4
    // 0x80231990: addiu       $v1, $zero, -0x46
    ctx->r3 = ADD32(0, -0X46);
        goto L_802319A4;
    // 0x80231990: addiu       $v1, $zero, -0x46
    ctx->r3 = ADD32(0, -0X46);
    // 0x80231994: slti        $at, $v1, -0x6
    ctx->r1 = SIGNED(ctx->r3) < -0X6 ? 1 : 0;
L_80231998:
    // 0x80231998: bnel        $at, $zero, L_802319A8
    if (ctx->r1 != 0) {
        // 0x8023199C: addiu       $t4, $v1, 0x7
        ctx->r12 = ADD32(ctx->r3, 0X7);
            goto L_802319A8;
    }
    goto skip_5;
    // 0x8023199C: addiu       $t4, $v1, 0x7
    ctx->r12 = ADD32(ctx->r3, 0X7);
    skip_5:
    // 0x802319A0: addiu       $v1, $zero, -0x7
    ctx->r3 = ADD32(0, -0X7);
L_802319A4:
    // 0x802319A4: addiu       $t4, $v1, 0x7
    ctx->r12 = ADD32(ctx->r3, 0X7);
L_802319A8:
    // 0x802319A8: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x802319AC: lui         $at, 0x427C
    ctx->r1 = S32(0X427C << 16);
    // 0x802319B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802319B4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802319B8: b           L_802319F8
    // 0x802319BC: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
        goto L_802319F8;
    // 0x802319BC: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
L_802319C0:
    // 0x802319C0: bnel        $at, $zero, L_802319D4
    if (ctx->r1 != 0) {
        // 0x802319C4: slti        $at, $v1, 0x7
        ctx->r1 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
            goto L_802319D4;
    }
    goto skip_6;
    // 0x802319C4: slti        $at, $v1, 0x7
    ctx->r1 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
    skip_6:
    // 0x802319C8: b           L_802319E0
    // 0x802319CC: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
        goto L_802319E0;
    // 0x802319CC: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
    // 0x802319D0: slti        $at, $v1, 0x7
    ctx->r1 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
L_802319D4:
    // 0x802319D4: beql        $at, $zero, L_802319E4
    if (ctx->r1 == 0) {
        // 0x802319D8: addiu       $t5, $v1, -0x7
        ctx->r13 = ADD32(ctx->r3, -0X7);
            goto L_802319E4;
    }
    goto skip_7;
    // 0x802319D8: addiu       $t5, $v1, -0x7
    ctx->r13 = ADD32(ctx->r3, -0X7);
    skip_7:
    // 0x802319DC: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
L_802319E0:
    // 0x802319E0: addiu       $t5, $v1, -0x7
    ctx->r13 = ADD32(ctx->r3, -0X7);
L_802319E4:
    // 0x802319E4: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x802319E8: lui         $at, 0x427C
    ctx->r1 = S32(0X427C << 16);
    // 0x802319EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802319F0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802319F4: div.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
L_802319F8:
    // 0x802319F8: lw          $t6, 0x10($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X10);
    // 0x802319FC: swc1        $f2, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f2.u32l;
    // 0x80231A00: swc1        $f0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f0.u32l;
    // 0x80231A04: sw          $t6, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r14;
    // 0x80231A08: lhu         $t7, 0x0($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X0);
    // 0x80231A0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231A10: sw          $t7, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r15;
L_80231A14:
    // 0x80231A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231A18: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80231A1C: jr          $ra
    // 0x80231A20: nop

    return;
    // 0x80231A20: nop

;}
RECOMP_FUNC void func_80202E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80202E78: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x80202E7C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80202E80: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x80202E84: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80202E88: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x80202E8C: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80202E90: lw          $t7, 0x6DE4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6DE4);
    // 0x80202E94: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80202E98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80202E9C: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x80202EA0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80202EA4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80202EA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80202EAC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202EB0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80202EB4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80202EB8: addiu       $a0, $a0, 0x2324
    ctx->r4 = ADD32(ctx->r4, 0X2324);
    // 0x80202EBC: jal         0x802011D0
    // 0x80202EC0: sb          $a1, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r5;
    func_802011D0(rdram, ctx);
        goto after_0;
    // 0x80202EC0: sb          $a1, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r5;
    after_0:
    // 0x80202EC4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80202EC8: lbu         $a2, 0x23($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X23);
    // 0x80202ECC: lw          $t8, 0x98($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X98);
    // 0x80202ED0: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x80202ED4: beql        $t9, $zero, L_80202EF0
    if (ctx->r25 == 0) {
        // 0x80202ED8: lbu         $a0, 0xAD($v0)
        ctx->r4 = MEM_BU(ctx->r2, 0XAD);
            goto L_80202EF0;
    }
    goto skip_0;
    // 0x80202ED8: lbu         $a0, 0xAD($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XAD);
    skip_0:
    // 0x80202EDC: jal         0x80201FB8
    // 0x80202EE0: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    func_80201FB8(rdram, ctx);
        goto after_1;
    // 0x80202EE0: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    after_1:
    // 0x80202EE4: b           L_80202F2C
    // 0x80202EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80202F2C;
    // 0x80202EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80202EEC: lbu         $a0, 0xAD($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XAD);
L_80202EF0:
    // 0x80202EF0: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x80202EF4: beq         $a0, $at, L_80202F20
    if (ctx->r4 == ctx->r1) {
        // 0x80202EF8: nop
    
            goto L_80202F20;
    }
    // 0x80202EF8: nop

    // 0x80202EFC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80202F00: jal         0x80203654
    // 0x80202F04: sb          $a2, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r6;
    func_80203654(rdram, ctx);
        goto after_2;
    // 0x80202F04: sb          $a2, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r6;
    after_2:
    // 0x80202F08: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80202F0C: lbu         $a2, 0x23($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X23);
    // 0x80202F10: addiu       $t0, $zero, 0x11
    ctx->r8 = ADD32(0, 0X11);
    // 0x80202F14: sb          $t0, 0xAD($v0)
    MEM_B(0XAD, ctx->r2) = ctx->r8;
    // 0x80202F18: sw          $zero, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = 0;
    // 0x80202F1C: sb          $zero, 0xB0($v0)
    MEM_B(0XB0, ctx->r2) = 0;
L_80202F20:
    // 0x80202F20: jal         0x80201F14
    // 0x80202F24: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    func_80201F14(rdram, ctx);
        goto after_3;
    // 0x80202F24: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    after_3:
    // 0x80202F28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80202F2C:
    // 0x80202F2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80202F30: jr          $ra
    // 0x80202F34: nop

    return;
    // 0x80202F34: nop

;}
RECOMP_FUNC void func_80241DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80241DFC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80241E00: lw          $a1, 0x16E0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X16E0);
    // 0x80241E04: mfc0        $t0, Status
    ctx->r8 = cop0_status_read(ctx);
    // 0x80241E08: lw          $k1, 0x18($a1)
    ctx->r27 = MEM_W(ctx->r5, 0X18);
    // 0x80241E0C: ori         $t0, $t0, 0x2
    ctx->r8 = ctx->r8 | 0X2;
    // 0x80241E10: sw          $t0, 0x118($a1)
    MEM_W(0X118, ctx->r5) = ctx->r8;
    // 0x80241E14: sd          $s0, 0x98($a1)
    SD(ctx->r16, 0X98, ctx->r5);
    // 0x80241E18: sd          $s1, 0xA0($a1)
    SD(ctx->r17, 0XA0, ctx->r5);
    // 0x80241E1C: sd          $s2, 0xA8($a1)
    SD(ctx->r18, 0XA8, ctx->r5);
    // 0x80241E20: sd          $s3, 0xB0($a1)
    SD(ctx->r19, 0XB0, ctx->r5);
    // 0x80241E24: sd          $s4, 0xB8($a1)
    SD(ctx->r20, 0XB8, ctx->r5);
    // 0x80241E28: sd          $s5, 0xC0($a1)
    SD(ctx->r21, 0XC0, ctx->r5);
    // 0x80241E2C: sd          $s6, 0xC8($a1)
    SD(ctx->r22, 0XC8, ctx->r5);
    // 0x80241E30: sd          $s7, 0xD0($a1)
    SD(ctx->r23, 0XD0, ctx->r5);
    // 0x80241E34: sd          $gp, 0xE8($a1)
    SD(ctx->r28, 0XE8, ctx->r5);
    // 0x80241E38: sd          $sp, 0xF0($a1)
    SD(ctx->r29, 0XF0, ctx->r5);
    // 0x80241E3C: sd          $fp, 0xF8($a1)
    SD(ctx->r30, 0XF8, ctx->r5);
    // 0x80241E40: sd          $ra, 0x100($a1)
    SD(ctx->r31, 0X100, ctx->r5);
    // 0x80241E44: beq         $k1, $zero, L_80241E6C
    if (ctx->r27 == 0) {
        // 0x80241E48: sw          $ra, 0x11C($a1)
        MEM_W(0X11C, ctx->r5) = ctx->r31;
            goto L_80241E6C;
    }
    // 0x80241E48: sw          $ra, 0x11C($a1)
    MEM_W(0X11C, ctx->r5) = ctx->r31;
    // 0x80241E4C: cfc1        $k1, $FpcCsr
    ctx->r27 = get_cop1_cs();
    // 0x80241E50: sdc1        $f20, 0x180($a1)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X180, ctx->r5);
    // 0x80241E54: sdc1        $f22, 0x188($a1)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X188, ctx->r5);
    // 0x80241E58: sdc1        $f24, 0x190($a1)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X190, ctx->r5);
    // 0x80241E5C: sdc1        $f26, 0x198($a1)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X198, ctx->r5);
    // 0x80241E60: sdc1        $f28, 0x1A0($a1)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X1A0, ctx->r5);
    // 0x80241E64: sdc1        $f30, 0x1A8($a1)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X1A8, ctx->r5);
    // 0x80241E68: sw          $k1, 0x12C($a1)
    MEM_W(0X12C, ctx->r5) = ctx->r27;
L_80241E6C:
    // 0x80241E6C: lw          $k1, 0x118($a1)
    ctx->r27 = MEM_W(ctx->r5, 0X118);
    // 0x80241E70: andi        $t1, $k1, 0xFF00
    ctx->r9 = ctx->r27 & 0XFF00;
    // 0x80241E74: beq         $t1, $zero, L_80241EAC
    if (ctx->r9 == 0) {
        // 0x80241E78: nop
    
            goto L_80241EAC;
    }
    // 0x80241E78: nop

    // 0x80241E7C: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x80241E80: addiu       $t0, $t0, 0x168C
    ctx->r8 = ADD32(ctx->r8, 0X168C);
    // 0x80241E84: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x80241E88: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80241E8C: xor         $t0, $t0, $at
    ctx->r8 = ctx->r8 ^ ctx->r1;
    // 0x80241E90: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x80241E94: andi        $t0, $t0, 0xFF00
    ctx->r8 = ctx->r8 & 0XFF00;
    // 0x80241E98: ori         $at, $at, 0xFF
    ctx->r1 = ctx->r1 | 0XFF;
    // 0x80241E9C: or          $t1, $t1, $t0
    ctx->r9 = ctx->r9 | ctx->r8;
    // 0x80241EA0: and         $k1, $k1, $at
    ctx->r27 = ctx->r27 & ctx->r1;
    // 0x80241EA4: or          $k1, $k1, $t1
    ctx->r27 = ctx->r27 | ctx->r9;
    // 0x80241EA8: sw          $k1, 0x118($a1)
    MEM_W(0X118, ctx->r5) = ctx->r27;
L_80241EAC:
    // 0x80241EAC: lui         $k1, 0xA430
    ctx->r27 = S32(0XA430 << 16);
    // 0x80241EB0: lw          $k1, 0xC($k1)
    ctx->r27 = MEM_W(ctx->r27, 0XC);
    // 0x80241EB4: beq         $k1, $zero, L_80241EE4
    if (ctx->r27 == 0) {
        // 0x80241EB8: nop
    
            goto L_80241EE4;
    }
    // 0x80241EB8: nop

    // 0x80241EBC: lui         $k0, 0x8025
    ctx->r26 = S32(0X8025 << 16);
    // 0x80241EC0: addiu       $k0, $k0, 0x168C
    ctx->r26 = ADD32(ctx->r26, 0X168C);
    // 0x80241EC4: lw          $k0, 0x0($k0)
    ctx->r26 = MEM_W(ctx->r26, 0X0);
    // 0x80241EC8: lw          $t0, 0x128($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X128);
    // 0x80241ECC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80241ED0: srl         $k0, $k0, 16
    ctx->r26 = S32(U32(ctx->r26) >> 16);
    // 0x80241ED4: xor         $k0, $k0, $at
    ctx->r26 = ctx->r26 ^ ctx->r1;
    // 0x80241ED8: andi        $k0, $k0, 0x3F
    ctx->r26 = ctx->r26 & 0X3F;
    // 0x80241EDC: and         $k0, $k0, $t0
    ctx->r26 = ctx->r26 & ctx->r8;
    // 0x80241EE0: or          $k1, $k1, $k0
    ctx->r27 = ctx->r27 | ctx->r26;
L_80241EE4:
    // 0x80241EE4: beq         $a0, $zero, L_80241EF4
    if (ctx->r4 == 0) {
        // 0x80241EE8: sw          $k1, 0x128($a1)
        MEM_W(0X128, ctx->r5) = ctx->r27;
            goto L_80241EF4;
    }
    // 0x80241EE8: sw          $k1, 0x128($a1)
    MEM_W(0X128, ctx->r5) = ctx->r27;
    // 0x80241EEC: jal         0x80241EFC
    // 0x80241EF0: nop

    func_80241EFC(rdram, ctx);
        goto after_0;
    // 0x80241EF0: nop

    after_0:
L_80241EF4:
    // 0x80241EF4: j           L_80241F54
    // 0x80241EF8: nop

    func_80241F54(rdram, ctx);
    return;
    // 0x80241EF8: nop

;}
RECOMP_FUNC void func_8021E708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E708: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021E70C: sb          $a0, -0x189C($at)
    MEM_B(-0X189C, ctx->r1) = ctx->r4;
    // 0x8021E710: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021E714: sb          $a1, -0x1898($at)
    MEM_B(-0X1898, ctx->r1) = ctx->r5;
    // 0x8021E718: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021E71C: sb          $a2, -0x1894($at)
    MEM_B(-0X1894, ctx->r1) = ctx->r6;
    // 0x8021E720: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021E724: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8021E728: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8021E72C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8021E730: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8021E734: jr          $ra
    // 0x8021E738: sb          $a3, -0x1890($at)
    MEM_B(-0X1890, ctx->r1) = ctx->r7;
    return;
    // 0x8021E738: sb          $a3, -0x1890($at)
    MEM_B(-0X1890, ctx->r1) = ctx->r7;
;}
RECOMP_FUNC void func_8024A640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A640: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8024A644: sb          $zero, 0xF($sp)
    MEM_B(0XF, ctx->r29) = 0;
    // 0x8024A648: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
L_8024A64C:
    // 0x8024A64C: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8024A650: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
L_8024A654:
    // 0x8024A654: lbu         $t7, 0xF($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XF);
    // 0x8024A658: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x8024A65C: beq         $t8, $zero, L_8024A670
    if (ctx->r24 == 0) {
        // 0x8024A660: nop
    
            goto L_8024A670;
    }
    // 0x8024A660: nop

    // 0x8024A664: addiu       $t9, $zero, 0x85
    ctx->r25 = ADD32(0, 0X85);
    // 0x8024A668: b           L_8024A674
    // 0x8024A66C: sb          $t9, 0xE($sp)
    MEM_B(0XE, ctx->r29) = ctx->r25;
        goto L_8024A674;
    // 0x8024A66C: sb          $t9, 0xE($sp)
    MEM_B(0XE, ctx->r29) = ctx->r25;
L_8024A670:
    // 0x8024A670: sb          $zero, 0xE($sp)
    MEM_B(0XE, ctx->r29) = 0;
L_8024A674:
    // 0x8024A674: lbu         $t0, 0xF($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XF);
    // 0x8024A678: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x8024A67C: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x8024A680: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8024A684: bne         $t2, $at, L_8024A698
    if (ctx->r10 != ctx->r1) {
        // 0x8024A688: sb          $t1, 0xF($sp)
        MEM_B(0XF, ctx->r29) = ctx->r9;
            goto L_8024A698;
    }
    // 0x8024A688: sb          $t1, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r9;
    // 0x8024A68C: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x8024A690: b           L_8024A6CC
    // 0x8024A694: sb          $t3, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r11;
        goto L_8024A6CC;
    // 0x8024A694: sb          $t3, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r11;
L_8024A698:
    // 0x8024A698: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8024A69C: lbu         $t4, 0x0($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X0);
    // 0x8024A6A0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8024A6A4: sllv        $t7, $t6, $t5
    ctx->r15 = S32(ctx->r14 << (ctx->r13 & 31));
    // 0x8024A6A8: and         $t8, $t4, $t7
    ctx->r24 = ctx->r12 & ctx->r15;
    // 0x8024A6AC: beq         $t8, $zero, L_8024A6BC
    if (ctx->r24 == 0) {
        // 0x8024A6B0: nop
    
            goto L_8024A6BC;
    }
    // 0x8024A6B0: nop

    // 0x8024A6B4: b           L_8024A6C0
    // 0x8024A6B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8024A6C0;
    // 0x8024A6B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8024A6BC:
    // 0x8024A6BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8024A6C0:
    // 0x8024A6C0: lbu         $t9, 0xF($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XF);
    // 0x8024A6C4: or          $t0, $t9, $a1
    ctx->r8 = ctx->r25 | ctx->r5;
    // 0x8024A6C8: sb          $t0, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r8;
L_8024A6CC:
    // 0x8024A6CC: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8024A6D0: lbu         $t2, 0xF($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XF);
    // 0x8024A6D4: lbu         $t1, 0xE($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XE);
    // 0x8024A6D8: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x8024A6DC: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x8024A6E0: xor         $t3, $t2, $t1
    ctx->r11 = ctx->r10 ^ ctx->r9;
    // 0x8024A6E4: bgez        $t5, L_8024A654
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8024A6E8: sb          $t3, 0xF($sp)
        MEM_B(0XF, ctx->r29) = ctx->r11;
            goto L_8024A654;
    }
    // 0x8024A6E8: sb          $t3, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r11;
    // 0x8024A6EC: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x8024A6F0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8024A6F4: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x8024A6F8: slti        $at, $t7, 0x21
    ctx->r1 = SIGNED(ctx->r15) < 0X21 ? 1 : 0;
    // 0x8024A6FC: bne         $at, $zero, L_8024A64C
    if (ctx->r1 != 0) {
        // 0x8024A700: sw          $t7, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r15;
            goto L_8024A64C;
    }
    // 0x8024A700: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x8024A704: lbu         $v0, 0xF($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XF);
    // 0x8024A708: jr          $ra
    // 0x8024A70C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8024A70C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8022C254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C254: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x8022C258: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x8022C25C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8022C260: lh          $t7, 0x6130($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X6130);
    // 0x8022C264: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C268: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8022C26C: bne         $t7, $at, L_8022C298
    if (ctx->r15 != ctx->r1) {
        // 0x8022C270: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022C298;
    }
    // 0x8022C270: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C274: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8022C278: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x8022C27C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8022C280: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x8022C284: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x8022C288: addiu       $t9, $t9, 0x5F90
    ctx->r25 = ADD32(ctx->r25, 0X5F90);
    // 0x8022C28C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8022C290: jal         0x8024AC1C
    // 0x8022C294: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    func_8024AC1C(rdram, ctx);
        goto after_0;
    // 0x8022C294: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    after_0:
L_8022C298:
    // 0x8022C298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C29C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022C2A0: jr          $ra
    // 0x8022C2A4: nop

    return;
    // 0x8022C2A4: nop

;}
RECOMP_FUNC void func_8023D6E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D6E4: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8023D6E8: addiu       $a3, $a3, 0x5EB1
    ctx->r7 = ADD32(ctx->r7, 0X5EB1);
    // 0x8023D6EC: lbu         $t6, 0x0($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X0);
    // 0x8023D6F0: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8023D6F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023D6F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8023D6FC: addiu       $v1, $v1, 0x3970
    ctx->r3 = ADD32(ctx->r3, 0X3970);
    // 0x8023D700: blez        $t6, L_8023D78C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8023D704: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8023D78C;
    }
    // 0x8023D704: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023D708: addiu       $t0, $sp, 0xC
    ctx->r8 = ADD32(ctx->r29, 0XC);
L_8023D70C:
    // 0x8023D70C: lwl         $at, 0x0($v1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r3, 0X0);
    // 0x8023D710: lwr         $at, 0x3($v1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r3, 0X3);
    // 0x8023D714: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8023D718: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x8023D71C: lwl         $t8, -0x4($v1)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r3, -0X4);
    // 0x8023D720: lwr         $t8, -0x1($v1)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r3, -0X1);
    // 0x8023D724: nop

    // 0x8023D728: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x8023D72C: lbu         $t9, 0xE($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XE);
    // 0x8023D730: nop

    // 0x8023D734: andi        $t1, $t9, 0xC0
    ctx->r9 = ctx->r25 & 0XC0;
    // 0x8023D738: sra         $t2, $t1, 4
    ctx->r10 = S32(SIGNED(ctx->r9) >> 4);
    // 0x8023D73C: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x8023D740: bne         $t3, $zero, L_8023D778
    if (ctx->r11 != 0) {
        // 0x8023D744: sb          $t2, 0x3($a1)
        MEM_B(0X3, ctx->r5) = ctx->r10;
            goto L_8023D778;
    }
    // 0x8023D744: sb          $t2, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r10;
    // 0x8023D748: lbu         $t4, 0x11($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X11);
    // 0x8023D74C: lbu         $t6, 0x10($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X10);
    // 0x8023D750: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x8023D754: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8023D758: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x8023D75C: sh          $t7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r15;
    // 0x8023D760: sllv        $t1, $t9, $a2
    ctx->r9 = S32(ctx->r25 << (ctx->r6 & 31));
    // 0x8023D764: lbu         $t8, 0x12($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X12);
    // 0x8023D768: or          $v0, $v0, $t1
    ctx->r2 = ctx->r2 | ctx->r9;
    // 0x8023D76C: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8023D770: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x8023D774: sb          $t8, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r24;
L_8023D778:
    // 0x8023D778: lbu         $t3, 0x0($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X0);
    // 0x8023D77C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8023D780: slt         $at, $a2, $t3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8023D784: bne         $at, $zero, L_8023D70C
    if (ctx->r1 != 0) {
        // 0x8023D788: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_8023D70C;
    }
    // 0x8023D788: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_8023D78C:
    // 0x8023D78C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8023D790: jr          $ra
    // 0x8023D794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8023D794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802012BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802012BC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802012C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802012C4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802012C8: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x802012CC: jal         0x8022970C
    // 0x802012D0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802012D0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x802012D4: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x802012D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802012DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802012E0: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x802012E4: addiu       $t7, $zero, 0x7FFF
    ctx->r15 = ADD32(0, 0X7FFF);
    // 0x802012E8: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x802012EC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x802012F0: sb          $t6, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = ctx->r14;
    // 0x802012F4: sw          $zero, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = 0;
    // 0x802012F8: sw          $t7, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r15;
    // 0x802012FC: sb          $t8, 0xAE($a0)
    MEM_B(0XAE, ctx->r4) = ctx->r24;
    // 0x80201300: sb          $zero, 0xAF($a0)
    MEM_B(0XAF, ctx->r4) = 0;
    // 0x80201304: sb          $zero, 0xB0($a0)
    MEM_B(0XB0, ctx->r4) = 0;
    // 0x80201308: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x8020130C: jal         0x80228DE0
    // 0x80201310: swc1        $f4, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f4.u32l;
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80201310: swc1        $f4, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f4.u32l;
    after_1:
    // 0x80201314: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x80201318: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020131C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80201320: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80201324: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80201328: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020132C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80201330: sb          $t9, 0x8C($a2)
    MEM_B(0X8C, ctx->r6) = ctx->r25;
    // 0x80201334: sw          $zero, 0x88($a2)
    MEM_W(0X88, ctx->r6) = 0;
    // 0x80201338: sw          $zero, 0x98($a2)
    MEM_W(0X98, ctx->r6) = 0;
    // 0x8020133C: sw          $zero, 0xA8($a2)
    MEM_W(0XA8, ctx->r6) = 0;
    // 0x80201340: swc1        $f0, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->f0.u32l;
    // 0x80201344: swc1        $f0, 0x44($a2)
    MEM_W(0X44, ctx->r6) = ctx->f0.u32l;
    // 0x80201348: swc1        $f0, 0x48($a2)
    MEM_W(0X48, ctx->r6) = ctx->f0.u32l;
    // 0x8020134C: swc1        $f0, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = ctx->f0.u32l;
    // 0x80201350: swc1        $f0, 0x50($a2)
    MEM_W(0X50, ctx->r6) = ctx->f0.u32l;
    // 0x80201354: swc1        $f0, 0x54($a2)
    MEM_W(0X54, ctx->r6) = ctx->f0.u32l;
    // 0x80201358: swc1        $f0, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f0.u32l;
    // 0x8020135C: swc1        $f0, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->f0.u32l;
    // 0x80201360: swc1        $f0, 0x80($a2)
    MEM_W(0X80, ctx->r6) = ctx->f0.u32l;
    // 0x80201364: swc1        $f0, 0x84($a2)
    MEM_W(0X84, ctx->r6) = ctx->f0.u32l;
    // 0x80201368: swc1        $f0, 0x90($a2)
    MEM_W(0X90, ctx->r6) = ctx->f0.u32l;
    // 0x8020136C: swc1        $f2, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f2.u32l;
    // 0x80201370: swc1        $f2, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f2.u32l;
    // 0x80201374: swc1        $f6, 0x94($a2)
    MEM_W(0X94, ctx->r6) = ctx->f6.u32l;
    // 0x80201378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020137C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80201380: jr          $ra
    // 0x80201384: nop

    return;
    // 0x80201384: nop

;}
RECOMP_FUNC void func_80220340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80220340: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80220344: addiu       $v1, $v1, -0x1794
    ctx->r3 = ADD32(ctx->r3, -0X1794);
    // 0x80220348: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8022034C: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80220350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80220354: bne         $v0, $t6, L_80220370
    if (ctx->r2 != ctx->r14) {
        // 0x80220358: sw          $ra, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r31;
            goto L_80220370;
    }
    // 0x80220358: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022035C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80220360: jal         0x80231A24
    // 0x80220364: addiu       $a0, $a0, 0x37C0
    ctx->r4 = ADD32(ctx->r4, 0X37C0);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80220364: addiu       $a0, $a0, 0x37C0
    ctx->r4 = ADD32(ctx->r4, 0X37C0);
    after_0:
    // 0x80220368: b           L_80220528
    // 0x8022036C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_80220528;
    // 0x8022036C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80220370:
    // 0x80220370: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80220374: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80220378: jal         0x80203C18
    // 0x8022037C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80203C18(rdram, ctx);
        goto after_1;
    // 0x8022037C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80220380: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80220384: addiu       $a1, $a1, 0x3B90
    ctx->r5 = ADD32(ctx->r5, 0X3B90);
    // 0x80220388: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8022038C: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x80220390: ori         $t8, $t8, 0x6
    ctx->r24 = ctx->r24 | 0X6;
    // 0x80220394: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80220398: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8022039C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802203A0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802203A4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802203A8: lui         $t0, 0xFF10
    ctx->r8 = S32(0XFF10 << 16);
    // 0x802203AC: ori         $t0, $t0, 0x13F
    ctx->r8 = ctx->r8 | 0X13F;
    // 0x802203B0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802203B4: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x802203B8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802203BC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x802203C0: lw          $a0, -0x17A8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X17A8);
    // 0x802203C4: jal         0x802375F0
    // 0x802203C8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_802375F0(rdram, ctx);
        goto after_2;
    // 0x802203C8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_2:
    // 0x802203CC: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x802203D0: jal         0x802206A0
    // 0x802203D4: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    func_802206A0(rdram, ctx);
        goto after_3;
    // 0x802203D4: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    after_3:
    // 0x802203D8: jal         0x8021DDE4
    // 0x802203DC: nop

    func_8021DDE4(rdram, ctx);
        goto after_4;
    // 0x802203DC: nop

    after_4:
    // 0x802203E0: jal         0x802333B0
    // 0x802203E4: nop

    func_802333B0(rdram, ctx);
        goto after_5;
    // 0x802203E4: nop

    after_5:
    // 0x802203E8: jal         0x8021F440
    // 0x802203EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8021F440(rdram, ctx);
        goto after_6;
    // 0x802203EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x802203F0: jal         0x8022818C
    // 0x802203F4: nop

    func_8022818C(rdram, ctx);
        goto after_7;
    // 0x802203F4: nop

    after_7:
    // 0x802203F8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802203FC: lhu         $v0, -0x178C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X178C);
    // 0x80220400: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80220404: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x80220408: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x8022040C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80220410: sw          $zero, 0x3B98($at)
    MEM_W(0X3B98, ctx->r1) = 0;
    // 0x80220414: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80220418: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8022041C: sw          $zero, 0x3BA0($at)
    MEM_W(0X3BA0, ctx->r1) = 0;
    // 0x80220420: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80220424: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80220428: sw          $zero, 0x3BA8($at)
    MEM_W(0X3BA8, ctx->r1) = 0;
    // 0x8022042C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80220430: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80220434: sw          $zero, 0x3BB0($at)
    MEM_W(0X3BB0, ctx->r1) = 0;
    // 0x80220438: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022043C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80220440: sw          $zero, 0x3BB8($at)
    MEM_W(0X3BB8, ctx->r1) = 0;
    // 0x80220444: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80220448: sw          $zero, -0x1780($at)
    MEM_W(-0X1780, ctx->r1) = 0;
    // 0x8022044C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80220450: sw          $zero, 0x5A5C($at)
    MEM_W(0X5A5C, ctx->r1) = 0;
    // 0x80220454: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80220458: addiu       $a3, $a3, 0x44B4
    ctx->r7 = ADD32(ctx->r7, 0X44B4);
    // 0x8022045C: sw          $zero, 0x3BC0($at)
    MEM_W(0X3BC0, ctx->r1) = 0;
    // 0x80220460: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x80220464: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80220468: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8022046C: blez        $t2, L_802204B8
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80220470: lui         $a2, 0x8000
        ctx->r6 = S32(0X8000 << 16);
            goto L_802204B8;
    }
    // 0x80220470: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x80220474: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80220478: addiu       $a0, $a0, 0x44B8
    ctx->r4 = ADD32(ctx->r4, 0X44B8);
    // 0x8022047C: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
L_80220480:
    // 0x80220480: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80220484: addu        $v0, $t3, $v1
    ctx->r2 = ADD32(ctx->r11, ctx->r3);
    // 0x80220488: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x8022048C: or          $t5, $t4, $a2
    ctx->r13 = ctx->r12 | ctx->r6;
    // 0x80220490: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80220494: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80220498: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x8022049C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x802204A0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802204A4: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x802204A8: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x802204AC: slt         $at, $a1, $t9
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x802204B0: bnel        $at, $zero, L_80220480
    if (ctx->r1 != 0) {
        // 0x802204B4: lw          $t3, 0x0($a0)
        ctx->r11 = MEM_W(ctx->r4, 0X0);
            goto L_80220480;
    }
    goto skip_0;
    // 0x802204B4: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    skip_0:
L_802204B8:
    // 0x802204B8: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x802204BC: addiu       $v0, $v0, -0x4158
    ctx->r2 = ADD32(ctx->r2, -0X4158);
    // 0x802204C0: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x802204C4: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x802204C8: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802204CC: sw          $zero, -0x415C($at)
    MEM_W(-0X415C, ctx->r1) = 0;
    // 0x802204D0: jal         0x8022975C
    // 0x802204D4: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    func_8022975C(rdram, ctx);
        goto after_8;
    // 0x802204D4: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_8:
    // 0x802204D8: addiu       $t1, $sp, 0x58
    ctx->r9 = ADD32(ctx->r29, 0X58);
    // 0x802204DC: addiu       $t3, $t1, 0x3C
    ctx->r11 = ADD32(ctx->r9, 0X3C);
    // 0x802204E0: or          $t4, $sp, $zero
    ctx->r12 = ctx->r29 | 0;
L_802204E4:
    // 0x802204E4: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x802204E8: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x802204EC: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x802204F0: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x802204F4: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x802204F8: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x802204FC: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x80220500: bne         $t1, $t3, L_802204E4
    if (ctx->r9 != ctx->r11) {
        // 0x80220504: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_802204E4;
    }
    // 0x80220504: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x80220508: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x8022050C: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x80220510: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80220514: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80220518: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8022051C: jal         0x802207E8
    // 0x80220520: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    func_802207E8(rdram, ctx);
        goto after_9;
    // 0x80220520: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    after_9:
    // 0x80220524: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80220528:
    // 0x80220528: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x8022052C: jr          $ra
    // 0x80220530: nop

    return;
    // 0x80220530: nop

;}
