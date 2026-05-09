#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8020672C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020672C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80206730: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80206734: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80206738: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8020673C: bltz        $a3, L_80206754
    if (SIGNED(ctx->r7) < 0) {
        // 0x80206740: sw          $a2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r6;
            goto L_80206754;
    }
    // 0x80206740: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80206744: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80206748: lhu         $t6, 0xBEE($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XBEE);
    // 0x8020674C: slt         $at, $t6, $a3
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80206750: beq         $at, $zero, L_80206768
    if (ctx->r1 == 0) {
        // 0x80206754: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80206768;
    }
L_80206754:
    // 0x80206754: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80206758: addiu       $a0, $a0, 0x2A50
    ctx->r4 = ADD32(ctx->r4, 0X2A50);
    // 0x8020675C: jal         0x80231A24
    // 0x80206760: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80206760: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80206764: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
L_80206768:
    // 0x80206768: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x8020676C: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x80206770: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80206774: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x80206778: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8020677C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80206780: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x80206784: lw          $t8, -0x4160($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4160);
    // 0x80206788: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x8020678C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80206790: blez        $t9, L_802067F4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80206794: addu        $v1, $t7, $t8
        ctx->r3 = ADD32(ctx->r15, ctx->r24);
            goto L_802067F4;
    }
    // 0x80206794: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80206798: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x8020679C: addiu       $v0, $v0, -0x415C
    ctx->r2 = ADD32(ctx->r2, -0X415C);
    // 0x802067A0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x802067A4: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x802067A8: lhu         $t0, 0xBF0($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0XBF0);
    // 0x802067AC: sll         $t1, $a0, 3
    ctx->r9 = S32(ctx->r4 << 3);
    // 0x802067B0: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x802067B4: slt         $at, $a0, $t0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x802067B8: bne         $at, $zero, L_802067DC
    if (ctx->r1 != 0) {
        // 0x802067BC: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_802067DC;
    }
    // 0x802067BC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x802067C0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802067C4: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x802067C8: addiu       $a2, $a2, 0xBF0
    ctx->r6 = ADD32(ctx->r6, 0XBF0);
    // 0x802067CC: jal         0x80231C58
    // 0x802067D0: addiu       $a1, $a1, 0x2A6C
    ctx->r5 = ADD32(ctx->r5, 0X2A6C);
    func_80231C58(rdram, ctx);
        goto after_1;
    // 0x802067D0: addiu       $a1, $a1, 0x2A6C
    ctx->r5 = ADD32(ctx->r5, 0X2A6C);
    after_1:
    // 0x802067D4: b           L_80206BD8
    // 0x802067D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80206BD8;
    // 0x802067D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802067DC:
    // 0x802067DC: lui         $t2, 0x8026
    ctx->r10 = S32(0X8026 << 16);
    // 0x802067E0: lw          $t2, -0x4150($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4150);
    // 0x802067E4: addiu       $t3, $a0, 0x1
    ctx->r11 = ADD32(ctx->r4, 0X1);
    // 0x802067E8: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x802067EC: b           L_80206858
    // 0x802067F0: addu        $a1, $t1, $t2
    ctx->r5 = ADD32(ctx->r9, ctx->r10);
        goto L_80206858;
    // 0x802067F0: addu        $a1, $t1, $t2
    ctx->r5 = ADD32(ctx->r9, ctx->r10);
L_802067F4:
    // 0x802067F4: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x802067F8: addiu       $v0, $v0, -0x4158
    ctx->r2 = ADD32(ctx->r2, -0X4158);
    // 0x802067FC: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80206800: lhu         $t4, 0xBF2($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0XBF2);
    // 0x80206804: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80206808: slt         $at, $a0, $t4
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8020680C: bne         $at, $zero, L_8020682C
    if (ctx->r1 != 0) {
        // 0x80206810: lui         $a1, 0x8025
        ctx->r5 = S32(0X8025 << 16);
            goto L_8020682C;
    }
    // 0x80206810: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80206814: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80206818: addiu       $a2, $a2, 0xBF2
    ctx->r6 = ADD32(ctx->r6, 0XBF2);
    // 0x8020681C: jal         0x80231C58
    // 0x80206820: addiu       $a1, $a1, 0x2A7C
    ctx->r5 = ADD32(ctx->r5, 0X2A7C);
    func_80231C58(rdram, ctx);
        goto after_2;
    // 0x80206820: addiu       $a1, $a1, 0x2A7C
    ctx->r5 = ADD32(ctx->r5, 0X2A7C);
    after_2:
    // 0x80206824: b           L_80206BD8
    // 0x80206828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80206BD8;
    // 0x80206828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8020682C:
    // 0x8020682C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80206830: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x80206834: lw          $t6, -0x414C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X414C);
    // 0x80206838: sll         $t5, $a0, 3
    ctx->r13 = S32(ctx->r4 << 3);
    // 0x8020683C: addu        $t5, $t5, $a0
    ctx->r13 = ADD32(ctx->r13, ctx->r4);
    // 0x80206840: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80206844: addiu       $t7, $a0, 0x1
    ctx->r15 = ADD32(ctx->r4, 0X1);
    // 0x80206848: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x8020684C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80206850: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80206854: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
L_80206858:
    // 0x80206858: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8020685C: sb          $t0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r8;
    // 0x80206860: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80206864: swc1        $f4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f4.u32l;
    // 0x80206868: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8020686C: sw          $t1, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r9;
    // 0x80206870: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x80206874: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x80206878: beql        $t3, $zero, L_802068A4
    if (ctx->r11 == 0) {
        // 0x8020687C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802068A4;
    }
    goto skip_0;
    // 0x8020687C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80206880: lui         $t4, 0x8025
    ctx->r12 = S32(0X8025 << 16);
    // 0x80206884: lw          $t4, -0x18F0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X18F0);
    // 0x80206888: lhu         $t6, 0x4($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X4);
    // 0x8020688C: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x80206890: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80206894: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80206898: b           L_802068A4
    // 0x8020689C: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
        goto L_802068A4;
    // 0x8020689C: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x802068A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802068A4:
    // 0x802068A4: beql        $v0, $zero, L_802069B4
    if (ctx->r2 == 0) {
        // 0x802068A8: ori         $t2, $zero, 0xFFFF
        ctx->r10 = 0 | 0XFFFF;
            goto L_802069B4;
    }
    goto skip_1;
    // 0x802068A8: ori         $t2, $zero, 0xFFFF
    ctx->r10 = 0 | 0XFFFF;
    skip_1:
    // 0x802068AC: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802068B0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802068B4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802068B8: nop

    // 0x802068BC: bc1tl       L_80206908
    if (c1cs) {
        // 0x802068C0: ori         $t9, $zero, 0xFFFF
        ctx->r25 = 0 | 0XFFFF;
            goto L_80206908;
    }
    goto skip_2;
    // 0x802068C0: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    skip_2:
    // 0x802068C4: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802068C8: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802068CC: c.le.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl <= ctx->f12.fl;
    // 0x802068D0: nop

    // 0x802068D4: bc1tl       L_80206908
    if (c1cs) {
        // 0x802068D8: ori         $t9, $zero, 0xFFFF
        ctx->r25 = 0 | 0XFFFF;
            goto L_80206908;
    }
    goto skip_3;
    // 0x802068D8: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    skip_3:
    // 0x802068DC: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802068E0: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x802068E4: nop

    // 0x802068E8: bc1tl       L_80206908
    if (c1cs) {
        // 0x802068EC: ori         $t9, $zero, 0xFFFF
        ctx->r25 = 0 | 0XFFFF;
            goto L_80206908;
    }
    goto skip_4;
    // 0x802068EC: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    skip_4:
    // 0x802068F0: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802068F4: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x802068F8: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802068FC: bc1fl       L_80206914
    if (!c1cs) {
        // 0x80206900: sub.s       $f16, $f12, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_80206914;
    }
    goto skip_5;
    // 0x80206900: sub.s       $f16, $f12, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f0.fl;
    skip_5:
    // 0x80206904: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
L_80206908:
    // 0x80206908: b           L_802069B8
    // 0x8020690C: sh          $t9, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r25;
        goto L_802069B8;
    // 0x8020690C: sh          $t9, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r25;
    // 0x80206910: sub.s       $f16, $f12, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f0.fl;
L_80206914:
    // 0x80206914: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80206918: lbu         $t8, 0x18($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X18);
    // 0x8020691C: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x80206920: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80206924: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80206928: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020692C: lwc1        $f18, 0x20($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80206930: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80206934: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x80206938: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020693C: div         $zero, $t1, $t3
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r11)));
    // 0x80206940: mflo        $v1
    ctx->r3 = lo;
    // 0x80206944: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x80206948: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x8020694C: bne         $t3, $zero, L_80206958
    if (ctx->r11 != 0) {
        // 0x80206950: nop
    
            goto L_80206958;
    }
    // 0x80206950: nop

    // 0x80206954: break       7
    do_break(2149607764);
L_80206958:
    // 0x80206958: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8020695C: bne         $t3, $at, L_80206970
    if (ctx->r11 != ctx->r1) {
        // 0x80206960: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80206970;
    }
    // 0x80206960: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80206964: bne         $t1, $at, L_80206970
    if (ctx->r9 != ctx->r1) {
        // 0x80206968: nop
    
            goto L_80206970;
    }
    // 0x80206968: nop

    // 0x8020696C: break       6
    do_break(2149607788);
L_80206970:
    // 0x80206970: div         $zero, $t6, $t7
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r15))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r15)));
    // 0x80206974: mflo        $a0
    ctx->r4 = lo;
    // 0x80206978: bne         $t7, $zero, L_80206984
    if (ctx->r15 != 0) {
        // 0x8020697C: nop
    
            goto L_80206984;
    }
    // 0x8020697C: nop

    // 0x80206980: break       7
    do_break(2149607808);
L_80206984:
    // 0x80206984: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80206988: bne         $t7, $at, L_8020699C
    if (ctx->r15 != ctx->r1) {
        // 0x8020698C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8020699C;
    }
    // 0x8020698C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80206990: bne         $t6, $at, L_8020699C
    if (ctx->r14 != ctx->r1) {
        // 0x80206994: nop
    
            goto L_8020699C;
    }
    // 0x80206994: nop

    // 0x80206998: break       6
    do_break(2149607832);
L_8020699C:
    // 0x8020699C: multu       $t8, $a0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802069A0: mflo        $t9
    ctx->r25 = lo;
    // 0x802069A4: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x802069A8: b           L_802069B8
    // 0x802069AC: sh          $t0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r8;
        goto L_802069B8;
    // 0x802069AC: sh          $t0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r8;
    // 0x802069B0: ori         $t2, $zero, 0xFFFF
    ctx->r10 = 0 | 0XFFFF;
L_802069B4:
    // 0x802069B4: sh          $t2, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r10;
L_802069B8:
    // 0x802069B8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x802069BC: addiu       $v1, $sp, 0x38
    ctx->r3 = ADD32(ctx->r29, 0X38);
    // 0x802069C0: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x802069C4: sltiu       $at, $t3, 0x5
    ctx->r1 = ctx->r11 < 0X5 ? 1 : 0;
    // 0x802069C8: beq         $at, $zero, L_80206BD4
    if (ctx->r1 == 0) {
        // 0x802069CC: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_80206BD4;
    }
    // 0x802069CC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x802069D0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802069D4: addu        $at, $at, $t3
    gpr jr_addend_802069DC = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x802069D8: lw          $t3, 0x2AA0($at)
    ctx->r11 = ADD32(ctx->r1, 0X2AA0);
    // 0x802069DC: jr          $t3
    // 0x802069E0: nop

    switch (jr_addend_802069DC >> 2) {
        case 0: goto L_802069E4; break;
        case 1: goto L_80206A00; break;
        case 2: goto L_80206A1C; break;
        case 3: goto L_80206AC4; break;
        case 4: goto L_80206BD4; break;
        default: switch_error(__func__, 0x802069DC, 0x80252AA0);
    }
    // 0x802069E0: nop

L_802069E4:
    // 0x802069E4: addiu       $a0, $zero, -0x4
    ctx->r4 = ADD32(0, -0X4);
    // 0x802069E8: addiu       $t4, $sp, 0x3B
    ctx->r12 = ADD32(ctx->r29, 0X3B);
    // 0x802069EC: and         $v0, $t4, $a0
    ctx->r2 = ctx->r12 & ctx->r4;
    // 0x802069F0: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x802069F4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802069F8: b           L_80206BD4
    // 0x802069FC: sw          $t5, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r13;
        goto L_80206BD4;
    // 0x802069FC: sw          $t5, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r13;
L_80206A00:
    // 0x80206A00: addiu       $a0, $zero, -0x4
    ctx->r4 = ADD32(0, -0X4);
    // 0x80206A04: addiu       $t6, $sp, 0x3B
    ctx->r14 = ADD32(ctx->r29, 0X3B);
    // 0x80206A08: and         $v0, $t6, $a0
    ctx->r2 = ctx->r14 & ctx->r4;
    // 0x80206A0C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80206A10: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80206A14: b           L_80206BD4
    // 0x80206A18: sb          $t7, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r15;
        goto L_80206BD4;
    // 0x80206A18: sb          $t7, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r15;
L_80206A1C:
    // 0x80206A1C: addiu       $a0, $zero, -0x4
    ctx->r4 = ADD32(0, -0X4);
    // 0x80206A20: addiu       $t8, $sp, 0x3B
    ctx->r24 = ADD32(ctx->r29, 0X3B);
    // 0x80206A24: and         $v0, $t8, $a0
    ctx->r2 = ctx->r24 & ctx->r4;
    // 0x80206A28: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80206A2C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80206A30: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x80206A34: beq         $t0, $zero, L_80206A48
    if (ctx->r8 == 0) {
        // 0x80206A38: sb          $t9, 0x1($a1)
        MEM_B(0X1, ctx->r5) = ctx->r25;
            goto L_80206A48;
    }
    // 0x80206A38: sb          $t9, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r25;
    // 0x80206A3C: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80206A40: b           L_80206A74
    // 0x80206A44: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
        goto L_80206A74;
    // 0x80206A44: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
L_80206A48:
    // 0x80206A48: andi        $t2, $v0, 0x2
    ctx->r10 = ctx->r2 & 0X2;
    // 0x80206A4C: beq         $t2, $zero, L_80206A60
    if (ctx->r10 == 0) {
        // 0x80206A50: addiu       $at, $zero, -0x8
        ctx->r1 = ADD32(0, -0X8);
            goto L_80206A60;
    }
    // 0x80206A50: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80206A54: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80206A58: b           L_80206A70
    // 0x80206A5C: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
        goto L_80206A70;
    // 0x80206A5C: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
L_80206A60:
    // 0x80206A60: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80206A64: and         $t1, $v0, $at
    ctx->r9 = ctx->r2 & ctx->r1;
    // 0x80206A68: addiu       $v0, $t1, 0x8
    ctx->r2 = ADD32(ctx->r9, 0X8);
    // 0x80206A6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80206A70:
    // 0x80206A70: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80206A74:
    // 0x80206A74: ldc1        $f6, -0x8($v1)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r3, -0X8);
    // 0x80206A78: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x80206A7C: andi        $t4, $v0, 0x2
    ctx->r12 = ctx->r2 & 0X2;
    // 0x80206A80: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80206A84: beq         $t3, $zero, L_80206A94
    if (ctx->r11 == 0) {
        // 0x80206A88: swc1        $f8, 0x8($a1)
        MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
            goto L_80206A94;
    }
    // 0x80206A88: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x80206A8C: b           L_80206AB4
    // 0x80206A90: addiu       $v1, $v0, -0xF
    ctx->r3 = ADD32(ctx->r2, -0XF);
        goto L_80206AB4;
    // 0x80206A90: addiu       $v1, $v0, -0xF
    ctx->r3 = ADD32(ctx->r2, -0XF);
L_80206A94:
    // 0x80206A94: beq         $t4, $zero, L_80206AA4
    if (ctx->r12 == 0) {
        // 0x80206A98: addiu       $at, $zero, -0x8
        ctx->r1 = ADD32(0, -0X8);
            goto L_80206AA4;
    }
    // 0x80206A98: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80206A9C: b           L_80206AB0
    // 0x80206AA0: addiu       $a0, $v0, -0x1E
    ctx->r4 = ADD32(ctx->r2, -0X1E);
        goto L_80206AB0;
    // 0x80206AA0: addiu       $a0, $v0, -0x1E
    ctx->r4 = ADD32(ctx->r2, -0X1E);
L_80206AA4:
    // 0x80206AA4: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80206AA8: and         $t5, $v0, $at
    ctx->r13 = ctx->r2 & ctx->r1;
    // 0x80206AAC: addiu       $a0, $t5, 0x8
    ctx->r4 = ADD32(ctx->r13, 0X8);
L_80206AB0:
    // 0x80206AB0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80206AB4:
    // 0x80206AB4: ldc1        $f10, -0x8($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, -0X8);
    // 0x80206AB8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80206ABC: b           L_80206BD4
    // 0x80206AC0: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
        goto L_80206BD4;
    // 0x80206AC0: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
L_80206AC4:
    // 0x80206AC4: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x80206AC8: beq         $t6, $zero, L_80206ADC
    if (ctx->r14 == 0) {
        // 0x80206ACC: andi        $t7, $v1, 0x2
        ctx->r15 = ctx->r3 & 0X2;
            goto L_80206ADC;
    }
    // 0x80206ACC: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x80206AD0: addiu       $v0, $sp, 0x3F
    ctx->r2 = ADD32(ctx->r29, 0X3F);
    // 0x80206AD4: b           L_80206B04
    // 0x80206AD8: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
        goto L_80206B04;
    // 0x80206AD8: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
L_80206ADC:
    // 0x80206ADC: beq         $t7, $zero, L_80206AF0
    if (ctx->r15 == 0) {
        // 0x80206AE0: addiu       $v0, $sp, 0x3F
        ctx->r2 = ADD32(ctx->r29, 0X3F);
            goto L_80206AF0;
    }
    // 0x80206AE0: addiu       $v0, $sp, 0x3F
    ctx->r2 = ADD32(ctx->r29, 0X3F);
    // 0x80206AE4: addiu       $v0, $sp, 0x42
    ctx->r2 = ADD32(ctx->r29, 0X42);
    // 0x80206AE8: b           L_80206B00
    // 0x80206AEC: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
        goto L_80206B00;
    // 0x80206AEC: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
L_80206AF0:
    // 0x80206AF0: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80206AF4: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x80206AF8: addiu       $v0, $t8, 0x8
    ctx->r2 = ADD32(ctx->r24, 0X8);
    // 0x80206AFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80206B00:
    // 0x80206B00: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80206B04:
    // 0x80206B04: ldc1        $f18, -0x8($v1)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r3, -0X8);
    // 0x80206B08: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x80206B0C: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
    // 0x80206B10: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80206B14: beq         $t9, $zero, L_80206B28
    if (ctx->r25 == 0) {
        // 0x80206B18: swc1        $f4, 0x8($a1)
        MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
            goto L_80206B28;
    }
    // 0x80206B18: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x80206B1C: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80206B20: b           L_80206B50
    // 0x80206B24: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
        goto L_80206B50;
    // 0x80206B24: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
L_80206B28:
    // 0x80206B28: beq         $t0, $zero, L_80206B3C
    if (ctx->r8 == 0) {
        // 0x80206B2C: addiu       $at, $zero, -0x8
        ctx->r1 = ADD32(0, -0X8);
            goto L_80206B3C;
    }
    // 0x80206B2C: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80206B30: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80206B34: b           L_80206B4C
    // 0x80206B38: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
        goto L_80206B4C;
    // 0x80206B38: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
L_80206B3C:
    // 0x80206B3C: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80206B40: and         $t2, $v0, $at
    ctx->r10 = ctx->r2 & ctx->r1;
    // 0x80206B44: addiu       $v0, $t2, 0x8
    ctx->r2 = ADD32(ctx->r10, 0X8);
    // 0x80206B48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80206B4C:
    // 0x80206B4C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80206B50:
    // 0x80206B50: ldc1        $f6, -0x8($v1)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r3, -0X8);
    // 0x80206B54: addiu       $a0, $zero, -0x4
    ctx->r4 = ADD32(0, -0X4);
    // 0x80206B58: addiu       $t1, $v0, 0x3
    ctx->r9 = ADD32(ctx->r2, 0X3);
    // 0x80206B5C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80206B60: and         $v0, $t1, $a0
    ctx->r2 = ctx->r9 & ctx->r4;
    // 0x80206B64: addiu       $t4, $v0, 0x7
    ctx->r12 = ADD32(ctx->r2, 0X7);
    // 0x80206B68: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
    // 0x80206B6C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80206B70: and         $v0, $t4, $a0
    ctx->r2 = ctx->r12 & ctx->r4;
    // 0x80206B74: addiu       $t6, $v0, 0x7
    ctx->r14 = ADD32(ctx->r2, 0X7);
    // 0x80206B78: sw          $t3, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r11;
    // 0x80206B7C: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x80206B80: and         $v0, $t6, $a0
    ctx->r2 = ctx->r14 & ctx->r4;
    // 0x80206B84: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80206B88: sb          $t5, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r13;
    // 0x80206B8C: lw          $t7, -0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, -0X4);
    // 0x80206B90: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x80206B94: beq         $t8, $zero, L_80206BA4
    if (ctx->r24 == 0) {
        // 0x80206B98: sb          $t7, 0x1($a1)
        MEM_B(0X1, ctx->r5) = ctx->r15;
            goto L_80206BA4;
    }
    // 0x80206B98: sb          $t7, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r15;
    // 0x80206B9C: b           L_80206BC8
    // 0x80206BA0: addiu       $v1, $v0, -0xF
    ctx->r3 = ADD32(ctx->r2, -0XF);
        goto L_80206BC8;
    // 0x80206BA0: addiu       $v1, $v0, -0xF
    ctx->r3 = ADD32(ctx->r2, -0XF);
L_80206BA4:
    // 0x80206BA4: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x80206BA8: beq         $t9, $zero, L_80206BB8
    if (ctx->r25 == 0) {
        // 0x80206BAC: addiu       $at, $zero, -0x8
        ctx->r1 = ADD32(0, -0X8);
            goto L_80206BB8;
    }
    // 0x80206BAC: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80206BB0: b           L_80206BC4
    // 0x80206BB4: addiu       $a0, $v0, -0x1E
    ctx->r4 = ADD32(ctx->r2, -0X1E);
        goto L_80206BC4;
    // 0x80206BB4: addiu       $a0, $v0, -0x1E
    ctx->r4 = ADD32(ctx->r2, -0X1E);
L_80206BB8:
    // 0x80206BB8: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80206BBC: and         $t0, $v0, $at
    ctx->r8 = ctx->r2 & ctx->r1;
    // 0x80206BC0: addiu       $a0, $t0, 0x8
    ctx->r4 = ADD32(ctx->r8, 0X8);
L_80206BC4:
    // 0x80206BC4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80206BC8:
    // 0x80206BC8: ldc1        $f10, -0x8($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, -0X8);
    // 0x80206BCC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80206BD0: swc1        $f16, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f16.u32l;
L_80206BD4:
    // 0x80206BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80206BD8:
    // 0x80206BD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80206BDC: jr          $ra
    // 0x80206BE0: nop

    return;
    // 0x80206BE0: nop

;}
RECOMP_FUNC void func_80211B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80211B08: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80211B0C: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80211B10: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x80211B14: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80211B18: sw          $s7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r23;
    // 0x80211B1C: sw          $s6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r22;
    // 0x80211B20: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x80211B24: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x80211B28: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x80211B2C: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x80211B30: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x80211B34: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x80211B38: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x80211B3C: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x80211B40: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x80211B44: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    // 0x80211B48: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80211B4C: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80211B50: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x80211B54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80211B58: lw          $s0, 0x0($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X0);
    // 0x80211B5C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80211B60: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80211B64: bne         $s0, $zero, L_80211B74
    if (ctx->r16 != 0) {
        // 0x80211B68: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80211B74;
    }
    // 0x80211B68: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80211B6C: jal         0x80231A24
    // 0x80211B70: addiu       $a0, $a0, 0x2DA4
    ctx->r4 = ADD32(ctx->r4, 0X2DA4);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80211B70: addiu       $a0, $a0, 0x2DA4
    ctx->r4 = ADD32(ctx->r4, 0X2DA4);
    after_0:
L_80211B74:
    // 0x80211B74: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80211B78: addiu       $t0, $sp, 0x94
    ctx->r8 = ADD32(ctx->r29, 0X94);
    // 0x80211B7C: addiu       $t1, $sp, 0x90
    ctx->r9 = ADD32(ctx->r29, 0X90);
    // 0x80211B80: addiu       $t2, $sp, 0x8C
    ctx->r10 = ADD32(ctx->r29, 0X8C);
    // 0x80211B84: addiu       $t3, $sp, 0x6E
    ctx->r11 = ADD32(ctx->r29, 0X6E);
    // 0x80211B88: addiu       $t4, $sp, 0x76
    ctx->r12 = ADD32(ctx->r29, 0X76);
    // 0x80211B8C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80211B90: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80211B94: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80211B98: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80211B9C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80211BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80211BA4: lw          $a2, 0xA0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA0);
    // 0x80211BA8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80211BAC: jal         0x802160EC
    // 0x80211BB0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_802160EC(rdram, ctx);
        goto after_1;
    // 0x80211BB0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_1:
    // 0x80211BB4: bne         $v0, $zero, L_80211BCC
    if (ctx->r2 != 0) {
        // 0x80211BB8: lhu         $t7, 0x6E($sp)
        ctx->r15 = MEM_HU(ctx->r29, 0X6E);
            goto L_80211BCC;
    }
    // 0x80211BB8: lhu         $t7, 0x6E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X6E);
    // 0x80211BBC: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x80211BC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80211BC4: b           L_80211D74
    // 0x80211BC8: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
        goto L_80211D74;
    // 0x80211BC8: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
L_80211BCC:
    // 0x80211BCC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80211BD0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80211BD4: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    // 0x80211BD8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80211BDC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80211BE0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80211BE4: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x80211BE8: lw          $s4, 0x40($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X40);
    // 0x80211BEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80211BF0: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x80211BF4: bne         $s4, $zero, L_80211C04
    if (ctx->r20 != 0) {
        // 0x80211BF8: lwc1        $f4, 0x94($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
            goto L_80211C04;
    }
    // 0x80211BF8: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80211BFC: b           L_80211D74
    // 0x80211C00: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
        goto L_80211D74;
    // 0x80211C00: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
L_80211C04:
    // 0x80211C04: lwc1        $f6, 0x2C($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X2C);
    // 0x80211C08: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80211C0C: lui         $s6, 0x8026
    ctx->r22 = S32(0X8026 << 16);
    // 0x80211C10: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80211C14: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80211C18: addiu       $s6, $s6, -0x3C64
    ctx->r22 = ADD32(ctx->r22, -0X3C64);
    // 0x80211C1C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80211C20: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80211C24: addiu       $s7, $zero, 0x2C
    ctx->r23 = ADD32(0, 0X2C);
    // 0x80211C28: lui         $s5, 0x8028
    ctx->r21 = S32(0X8028 << 16);
    // 0x80211C2C: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x80211C30: lwc1        $f16, 0x2C($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X2C);
    // 0x80211C34: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80211C38: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    // 0x80211C3C: lwc1        $f6, 0x2C($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X2C);
    // 0x80211C40: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80211C44: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x80211C48: lhu         $v0, 0xC($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0XC);
    // 0x80211C4C: blez        $v0, L_80211D5C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80211C50: nop
    
            goto L_80211D5C;
    }
    // 0x80211C50: nop

    // 0x80211C54: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80211C58: addiu       $s5, $s5, 0xBC0
    ctx->r21 = ADD32(ctx->r21, 0XBC0);
L_80211C5C:
    // 0x80211C5C: multu       $s3, $s7
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80211C60: lw          $t0, 0x8($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X8);
    // 0x80211C64: lhu         $t3, 0x76($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X76);
    // 0x80211C68: mflo        $t1
    ctx->r9 = lo;
    // 0x80211C6C: addu        $s1, $t0, $t1
    ctx->r17 = ADD32(ctx->r8, ctx->r9);
    // 0x80211C70: lhu         $t2, 0x16($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X16);
    // 0x80211C74: and         $t4, $t2, $t3
    ctx->r12 = ctx->r10 & ctx->r11;
    // 0x80211C78: beql        $t4, $zero, L_80211D4C
    if (ctx->r12 == 0) {
        // 0x80211C7C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80211D4C;
    }
    goto skip_0;
    // 0x80211C7C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x80211C80: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80211C84: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80211C88: blezl       $v1, L_80211D4C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80211C8C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80211D4C;
    }
    goto skip_1;
    // 0x80211C8C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_1:
L_80211C90:
    // 0x80211C90: lw          $t5, 0x10($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X10);
    // 0x80211C94: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
    // 0x80211C98: lhu         $t8, 0x76($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X76);
    // 0x80211C9C: addu        $v0, $t5, $t7
    ctx->r2 = ADD32(ctx->r13, ctx->r15);
    // 0x80211CA0: lhu         $t6, 0x6($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X6);
    // 0x80211CA4: lwc1        $f12, 0x94($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80211CA8: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80211CAC: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x80211CB0: beql        $t9, $zero, L_80211D34
    if (ctx->r25 == 0) {
        // 0x80211CB4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80211D34;
    }
    goto skip_2;
    // 0x80211CB4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x80211CB8: lhu         $t0, 0x2($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X2);
    // 0x80211CBC: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    // 0x80211CC0: lhu         $a3, 0x0($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X0);
    // 0x80211CC4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80211CC8: lhu         $t1, 0x4($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X4);
    // 0x80211CCC: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80211CD0: jal         0x80215578
    // 0x80211CD4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_80215578(rdram, ctx);
        goto after_2;
    // 0x80211CD4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_2:
    // 0x80211CD8: bne         $v0, $zero, L_80211CE8
    if (ctx->r2 != 0) {
        // 0x80211CDC: lhu         $t3, 0x6E($sp)
        ctx->r11 = MEM_HU(ctx->r29, 0X6E);
            goto L_80211CE8;
    }
    // 0x80211CDC: lhu         $t3, 0x6E($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X6E);
    // 0x80211CE0: b           L_80211D30
    // 0x80211CE4: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
        goto L_80211D30;
    // 0x80211CE4: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
L_80211CE8:
    // 0x80211CE8: lw          $t0, 0x0($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X0);
    // 0x80211CEC: andi        $t5, $s3, 0x3FF
    ctx->r13 = ctx->r19 & 0X3FF;
    // 0x80211CF0: sll         $t7, $t5, 12
    ctx->r15 = S32(ctx->r13 << 12);
    // 0x80211CF4: sll         $t4, $t3, 22
    ctx->r12 = S32(ctx->r11 << 22);
    // 0x80211CF8: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x80211CFC: andi        $t8, $s0, 0xFFF
    ctx->r24 = ctx->r16 & 0XFFF;
    // 0x80211D00: sll         $t1, $s2, 2
    ctx->r9 = S32(ctx->r18 << 2);
    // 0x80211D04: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80211D08: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80211D0C: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x80211D10: lhu         $t3, 0x18($s5)
    ctx->r11 = MEM_HU(ctx->r21, 0X18);
    // 0x80211D14: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80211D18: sltu        $at, $s2, $t3
    ctx->r1 = ctx->r18 < ctx->r11 ? 1 : 0;
    // 0x80211D1C: bnel        $at, $zero, L_80211D30
    if (ctx->r1 != 0) {
        // 0x80211D20: lhu         $v1, 0x14($s1)
        ctx->r3 = MEM_HU(ctx->r17, 0X14);
            goto L_80211D30;
    }
    goto skip_3;
    // 0x80211D20: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    skip_3:
    // 0x80211D24: b           L_80211D48
    // 0x80211D28: lhu         $v0, 0xC($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0XC);
        goto L_80211D48;
    // 0x80211D28: lhu         $v0, 0xC($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0XC);
    // 0x80211D2C: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
L_80211D30:
    // 0x80211D30: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80211D34:
    // 0x80211D34: andi        $t5, $s0, 0xFFFF
    ctx->r13 = ctx->r16 & 0XFFFF;
    // 0x80211D38: slt         $at, $t5, $v1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80211D3C: bne         $at, $zero, L_80211C90
    if (ctx->r1 != 0) {
        // 0x80211D40: or          $s0, $t5, $zero
        ctx->r16 = ctx->r13 | 0;
            goto L_80211C90;
    }
    // 0x80211D40: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x80211D44: lhu         $v0, 0xC($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0XC);
L_80211D48:
    // 0x80211D48: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_80211D4C:
    // 0x80211D4C: andi        $t4, $s3, 0xFFFF
    ctx->r12 = ctx->r19 & 0XFFFF;
    // 0x80211D50: slt         $at, $t4, $v0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80211D54: bne         $at, $zero, L_80211C5C
    if (ctx->r1 != 0) {
        // 0x80211D58: or          $s3, $t4, $zero
        ctx->r19 = ctx->r12 | 0;
            goto L_80211C5C;
    }
    // 0x80211D58: or          $s3, $t4, $zero
    ctx->r19 = ctx->r12 | 0;
L_80211D5C:
    // 0x80211D5C: lui         $s6, 0x8026
    ctx->r22 = S32(0X8026 << 16);
    // 0x80211D60: addiu       $s6, $s6, -0x3C64
    ctx->r22 = ADD32(ctx->r22, -0X3C64);
    // 0x80211D64: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x80211D68: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x80211D6C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x80211D70: sw          $t7, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r15;
L_80211D74:
    // 0x80211D74: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80211D78: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x80211D7C: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x80211D80: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x80211D84: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x80211D88: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x80211D8C: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x80211D90: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x80211D94: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x80211D98: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x80211D9C: jr          $ra
    // 0x80211DA0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x80211DA0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_80225424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80225424: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225428: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022542C: sltiu       $at, $a2, 0x9
    ctx->r1 = ctx->r6 < 0X9 ? 1 : 0;
    // 0x80225430: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80225434: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225438: beq         $at, $zero, L_802254B8
    if (ctx->r1 == 0) {
        // 0x8022543C: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_802254B8;
    }
    // 0x8022543C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80225440: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x80225444: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80225448: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8022544C: jal         0x8022B5E0
    // 0x80225450: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_8022B5E0(rdram, ctx);
        goto after_0;
    // 0x80225450: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x80225454: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80225458: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8022545C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80225460: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80225464: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x80225468: beq         $a2, $at, L_80225494
    if (ctx->r6 == ctx->r1) {
        // 0x8022546C: sw          $t7, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r15;
            goto L_80225494;
    }
    // 0x8022546C: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x80225470: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80225474: beq         $a2, $at, L_8022549C
    if (ctx->r6 == ctx->r1) {
        // 0x80225478: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8022549C;
    }
    // 0x80225478: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8022547C: beq         $a2, $at, L_802254A4
    if (ctx->r6 == ctx->r1) {
        // 0x80225480: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_802254A4;
    }
    // 0x80225480: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80225484: beql        $a2, $at, L_802254B0
    if (ctx->r6 == ctx->r1) {
        // 0x80225488: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_802254B0;
    }
    goto skip_0;
    // 0x80225488: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    skip_0:
    // 0x8022548C: b           L_802254E4
    // 0x80225490: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802254E4;
    // 0x80225490: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80225494:
    // 0x80225494: b           L_802254E0
    // 0x80225498: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
        goto L_802254E0;
    // 0x80225498: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
L_8022549C:
    // 0x8022549C: b           L_802254E0
    // 0x802254A0: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
        goto L_802254E0;
    // 0x802254A0: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
L_802254A4:
    // 0x802254A4: b           L_802254E0
    // 0x802254A8: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
        goto L_802254E0;
    // 0x802254A8: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x802254AC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_802254B0:
    // 0x802254B0: b           L_802254E0
    // 0x802254B4: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
        goto L_802254E0;
    // 0x802254B4: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
L_802254B8:
    // 0x802254B8: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x802254BC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x802254C0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802254C4: jal         0x8022B460
    // 0x802254C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022B460(rdram, ctx);
        goto after_1;
    // 0x802254C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802254CC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x802254D0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x802254D4: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x802254D8: addu        $t2, $t1, $a2
    ctx->r10 = ADD32(ctx->r9, ctx->r6);
    // 0x802254DC: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
L_802254E0:
    // 0x802254E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802254E4:
    // 0x802254E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802254E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802254EC: jr          $ra
    // 0x802254F0: nop

    return;
    // 0x802254F0: nop

;}
RECOMP_FUNC void func_80236D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80236D30: jr          $ra
    // 0x80236D34: nop

    return;
    // 0x80236D34: nop

    // 0x80236D38: jr          $ra
    // 0x80236D3C: nop

    return;
    // 0x80236D3C: nop

;}
RECOMP_FUNC void func_8023CBF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023CBF0: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x8023CBF4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023CBF8: sh          $zero, 0x934($at)
    MEM_H(0X934, ctx->r1) = 0;
    // 0x8023CBFC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023CC00: sw          $zero, 0x3968($at)
    MEM_W(0X3968, ctx->r1) = 0;
    // 0x8023CC04: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023CC08: sw          $zero, 0x396C($at)
    MEM_W(0X396C, ctx->r1) = 0;
    // 0x8023CC0C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023CC10: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x8023CC14: sw          $t6, 0x3960($at)
    MEM_W(0X3960, ctx->r1) = ctx->r14;
    // 0x8023CC18: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023CC1C: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x8023CC20: sw          $t7, 0x3964($at)
    MEM_W(0X3964, ctx->r1) = ctx->r15;
    // 0x8023CC24: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8023CC28: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8023CC2C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8023CC30: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x8023CC34: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8023CC38: ori         $t9, $t9, 0x1402
    ctx->r25 = ctx->r25 | 0X1402;
    // 0x8023CC3C: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x8023CC40: lui         $t2, 0xBB00
    ctx->r10 = S32(0XBB00 << 16);
    // 0x8023CC44: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8023CC48: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x8023CC4C: ori         $t2, $t2, 0x1
    ctx->r10 = ctx->r10 | 0X1;
    // 0x8023CC50: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x8023CC54: ori         $t3, $t3, 0x8000
    ctx->r11 = ctx->r11 | 0X8000;
    // 0x8023CC58: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x8023CC5C: addiu       $t0, $a3, 0x8
    ctx->r8 = ADD32(ctx->r7, 0X8);
    // 0x8023CC60: sw          $t3, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r11;
    // 0x8023CC64: lui         $t4, 0xB900
    ctx->r12 = S32(0XB900 << 16);
    // 0x8023CC68: ori         $t4, $t4, 0x2
    ctx->r12 = ctx->r12 | 0X2;
    // 0x8023CC6C: addiu       $v0, $t0, 0x8
    ctx->r2 = ADD32(ctx->r8, 0X8);
    // 0x8023CC70: lui         $t5, 0xBA00
    ctx->r13 = S32(0XBA00 << 16);
    // 0x8023CC74: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x8023CC78: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8023CC7C: ori         $t5, $t5, 0x1301
    ctx->r13 = ctx->r13 | 0X1301;
    // 0x8023CC80: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8023CC84: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023CC88: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x8023CC8C: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x8023CC90: ori         $t6, $t6, 0xC02
    ctx->r14 = ctx->r14 | 0XC02;
    // 0x8023CC94: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8023CC98: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x8023CC9C: addiu       $t7, $zero, 0x2000
    ctx->r15 = ADD32(0, 0X2000);
    // 0x8023CCA0: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x8023CCA4: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8023CCA8: ori         $t8, $t8, 0x903
    ctx->r24 = ctx->r24 | 0X903;
    // 0x8023CCAC: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x8023CCB0: addiu       $t9, $zero, 0xC00
    ctx->r25 = ADD32(0, 0XC00);
    // 0x8023CCB4: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x8023CCB8: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x8023CCBC: lui         $t2, 0xBA00
    ctx->r10 = S32(0XBA00 << 16);
    // 0x8023CCC0: ori         $t2, $t2, 0x1102
    ctx->r10 = ctx->r10 | 0X1102;
    // 0x8023CCC4: addiu       $t0, $a3, 0x8
    ctx->r8 = ADD32(ctx->r7, 0X8);
    // 0x8023CCC8: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x8023CCCC: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x8023CCD0: lui         $t3, 0xBA00
    ctx->r11 = S32(0XBA00 << 16);
    // 0x8023CCD4: ori         $t3, $t3, 0x1001
    ctx->r11 = ctx->r11 | 0X1001;
    // 0x8023CCD8: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8023CCDC: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x8023CCE0: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8023CCE4: lui         $t4, 0xBA00
    ctx->r12 = S32(0XBA00 << 16);
    // 0x8023CCE8: ori         $t4, $t4, 0xE02
    ctx->r12 = ctx->r12 | 0XE02;
    // 0x8023CCEC: addiu       $v1, $t1, 0x8
    ctx->r3 = ADD32(ctx->r9, 0X8);
    // 0x8023CCF0: sw          $t4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r12;
    // 0x8023CCF4: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8023CCF8: lui         $t6, 0xF0A
    ctx->r14 = S32(0XF0A << 16);
    // 0x8023CCFC: lui         $t5, 0xB900
    ctx->r13 = S32(0XB900 << 16);
    // 0x8023CD00: ori         $t5, $t5, 0x31D
    ctx->r13 = ctx->r13 | 0X31D;
    // 0x8023CD04: ori         $t6, $t6, 0x7008
    ctx->r14 = ctx->r14 | 0X7008;
    // 0x8023CD08: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8023CD0C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x8023CD10: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8023CD14: jr          $ra
    // 0x8023CD18: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x8023CD18: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80241EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80241EFC: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80241F00: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x80241F04: or          $t9, $a0, $zero
    ctx->r25 = ctx->r4 | 0;
    // 0x80241F08: lw          $t6, 0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X4);
    // 0x80241F0C: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80241F10: bne         $at, $zero, L_80241F30
    if (ctx->r1 != 0) {
        // 0x80241F14: nop
    
            goto L_80241F30;
    }
    // 0x80241F14: nop

L_80241F18:
    // 0x80241F18: or          $t9, $t8, $zero
    ctx->r25 = ctx->r24 | 0;
    // 0x80241F1C: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80241F20: lw          $t6, 0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X4);
    // 0x80241F24: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80241F28: beq         $at, $zero, L_80241F18
    if (ctx->r1 == 0) {
        // 0x80241F2C: nop
    
            goto L_80241F18;
    }
    // 0x80241F2C: nop

L_80241F30:
    // 0x80241F30: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x80241F34: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80241F38: sw          $a1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r5;
    // 0x80241F3C: jr          $ra
    // 0x80241F40: sw          $a0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r4;
    return;
    // 0x80241F40: sw          $a0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r4;
;}
RECOMP_FUNC void func_80243C24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80243C24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80243C28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80243C2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80243C30: beq         $a1, $v0, L_80243CD0
    if (ctx->r5 == ctx->r2) {
        // 0x80243C34: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80243CD0;
    }
    // 0x80243C34: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80243C38: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80243C3C: beq         $a1, $at, L_80243C5C
    if (ctx->r5 == ctx->r1) {
        // 0x80243C40: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80243C5C;
    }
    // 0x80243C40: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80243C44: beq         $a1, $at, L_80243C7C
    if (ctx->r5 == ctx->r1) {
        // 0x80243C48: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_80243C7C;
    }
    // 0x80243C48: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80243C4C: beql        $a1, $at, L_80243CAC
    if (ctx->r5 == ctx->r1) {
        // 0x80243C50: lw          $a0, 0x0($a3)
        ctx->r4 = MEM_W(ctx->r7, 0X0);
            goto L_80243CAC;
    }
    goto skip_0;
    // 0x80243C50: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    skip_0:
    // 0x80243C54: b           L_80243CDC
    // 0x80243C58: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
        goto L_80243CDC;
    // 0x80243C58: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
L_80243C5C:
    // 0x80243C5C: lw          $v0, 0x40($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X40);
    // 0x80243C60: beql        $v0, $zero, L_80243C74
    if (ctx->r2 == 0) {
        // 0x80243C64: sw          $a2, 0x3C($a3)
        MEM_W(0X3C, ctx->r7) = ctx->r6;
            goto L_80243C74;
    }
    goto skip_1;
    // 0x80243C64: sw          $a2, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r6;
    skip_1:
    // 0x80243C68: b           L_80243C74
    // 0x80243C6C: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
        goto L_80243C74;
    // 0x80243C6C: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x80243C70: sw          $a2, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r6;
L_80243C74:
    // 0x80243C74: b           L_80243CF0
    // 0x80243C78: sw          $a2, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r6;
        goto L_80243CF0;
    // 0x80243C78: sw          $a2, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r6;
L_80243C7C:
    // 0x80243C7C: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x80243C80: sw          $v0, 0x38($a3)
    MEM_W(0X38, ctx->r7) = ctx->r2;
    // 0x80243C84: sw          $zero, 0x48($a3)
    MEM_W(0X48, ctx->r7) = 0;
    // 0x80243C88: beq         $a0, $zero, L_80243CF0
    if (ctx->r4 == 0) {
        // 0x80243C8C: sh          $v0, 0x1A($a3)
        MEM_H(0X1A, ctx->r7) = ctx->r2;
            goto L_80243CF0;
    }
    // 0x80243C8C: sh          $v0, 0x1A($a3)
    MEM_H(0X1A, ctx->r7) = ctx->r2;
    // 0x80243C90: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80243C94: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80243C98: jalr        $t9
    // 0x80243C9C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80243C9C: nop

    after_0:
    // 0x80243CA0: b           L_80243CF4
    // 0x80243CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80243CF4;
    // 0x80243CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80243CA8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
L_80243CAC:
    // 0x80243CAC: sw          $v0, 0x48($a3)
    MEM_W(0X48, ctx->r7) = ctx->r2;
    // 0x80243CB0: beql        $a0, $zero, L_80243CF4
    if (ctx->r4 == 0) {
        // 0x80243CB4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80243CF4;
    }
    goto skip_2;
    // 0x80243CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x80243CB8: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80243CBC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80243CC0: jalr        $t9
    // 0x80243CC4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80243CC4: nop

    after_1:
    // 0x80243CC8: b           L_80243CF4
    // 0x80243CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80243CF4;
    // 0x80243CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80243CD0:
    // 0x80243CD0: b           L_80243CF0
    // 0x80243CD4: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
        goto L_80243CF0;
    // 0x80243CD4: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x80243CD8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
L_80243CDC:
    // 0x80243CDC: beql        $a0, $zero, L_80243CF4
    if (ctx->r4 == 0) {
        // 0x80243CE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80243CF4;
    }
    goto skip_3;
    // 0x80243CE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x80243CE4: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80243CE8: jalr        $t9
    // 0x80243CEC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80243CEC: nop

    after_2:
L_80243CF0:
    // 0x80243CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80243CF4:
    // 0x80243CF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80243CF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80243CFC: jr          $ra
    // 0x80243D00: nop

    return;
    // 0x80243D00: nop

;}
RECOMP_FUNC void func_8021C5AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021C5AC: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8021C5B0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021C5B4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8021C5B8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8021C5BC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8021C5C0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8021C5C4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8021C5C8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8021C5CC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021C5D0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021C5D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021C5D8: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x8021C5DC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x8021C5E0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8021C5E4: andi        $s1, $a2, 0xFF
    ctx->r17 = ctx->r6 & 0XFF;
    // 0x8021C5E8: beq         $v0, $zero, L_8021C5F8
    if (ctx->r2 == 0) {
        // 0x8021C5EC: or          $fp, $a0, $zero
        ctx->r30 = ctx->r4 | 0;
            goto L_8021C5F8;
    }
    // 0x8021C5EC: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x8021C5F0: jalr        $v0
    // 0x8021C5F4: lw          $a0, 0x1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1C);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8021C5F4: lw          $a0, 0x1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1C);
    after_0:
L_8021C5F8:
    // 0x8021C5F8: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x8021C5FC: lw          $t6, -0x3C20($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3C20);
    // 0x8021C600: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x8021C604: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x8021C608: subu        $t7, $fp, $t6
    ctx->r15 = SUB32(ctx->r30, ctx->r14);
    // 0x8021C60C: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x8021C610: addiu       $v0, $v0, -0x3C08
    ctx->r2 = ADD32(ctx->r2, -0X3C08);
    // 0x8021C614: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x8021C618: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x8021C61C: lw          $t9, -0x3C0C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C0C);
    // 0x8021C620: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8021C624: mflo        $t8
    ctx->r24 = lo;
    // 0x8021C628: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8021C62C: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x8021C630: lhu         $t3, 0x0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X0);
    // 0x8021C634: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8021C638: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x8021C63C: lbu         $t5, 0x8($fp)
    ctx->r13 = MEM_BU(ctx->r30, 0X8);
    // 0x8021C640: andi        $t6, $t5, 0x8
    ctx->r14 = ctx->r13 & 0X8;
    // 0x8021C644: beql        $t6, $zero, L_8021C658
    if (ctx->r14 == 0) {
        // 0x8021C648: lw          $t7, 0x8($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X8);
            goto L_8021C658;
    }
    goto skip_0;
    // 0x8021C648: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    skip_0:
    // 0x8021C64C: jal         0x80223648
    // 0x8021C650: nop

    func_80223648(rdram, ctx);
        goto after_1;
    // 0x8021C650: nop

    after_1:
    // 0x8021C654: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
L_8021C658:
    // 0x8021C658: sll         $t0, $s1, 3
    ctx->r8 = S32(ctx->r17 << 3);
    // 0x8021C65C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8021C660: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x8021C664: sw          $t9, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r25;
    // 0x8021C668: lbu         $v1, 0x4($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X4);
    // 0x8021C66C: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8021C670: lui         $s7, 0x1000
    ctx->r23 = S32(0X1000 << 16);
    // 0x8021C674: blez        $v1, L_8021C960
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8021C678: nop
    
            goto L_8021C960;
    }
    // 0x8021C678: nop

    // 0x8021C67C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
L_8021C680:
    // 0x8021C680: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x8021C684: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8021C688: slti        $at, $s6, 0x20
    ctx->r1 = SIGNED(ctx->r22) < 0X20 ? 1 : 0;
    // 0x8021C68C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x8021C690: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x8021C694: beq         $at, $zero, L_8021C6D4
    if (ctx->r1 == 0) {
        // 0x8021C698: addu        $s3, $a0, $t2
        ctx->r19 = ADD32(ctx->r4, ctx->r10);
            goto L_8021C6D4;
    }
    // 0x8021C698: addu        $s3, $a0, $t2
    ctx->r19 = ADD32(ctx->r4, ctx->r10);
    // 0x8021C69C: lw          $t3, 0x10($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X10);
    // 0x8021C6A0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8021C6A4: sllv        $t5, $t4, $s6
    ctx->r13 = S32(ctx->r12 << (ctx->r22 & 31));
    // 0x8021C6A8: and         $t6, $t3, $t5
    ctx->r14 = ctx->r11 & ctx->r13;
    // 0x8021C6AC: bne         $t6, $zero, L_8021C6C4
    if (ctx->r14 != 0) {
        // 0x8021C6B0: nop
    
            goto L_8021C6C4;
    }
    // 0x8021C6B0: nop

    // 0x8021C6B4: lbu         $t7, 0x7($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X7);
    // 0x8021C6B8: andi        $t0, $t7, 0x1
    ctx->r8 = ctx->r15 & 0X1;
    // 0x8021C6BC: beq         $t0, $zero, L_8021C6CC
    if (ctx->r8 == 0) {
        // 0x8021C6C0: nop
    
            goto L_8021C6CC;
    }
    // 0x8021C6C0: nop

L_8021C6C4:
    // 0x8021C6C4: b           L_8021C6D4
    // 0x8021C6C8: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
        goto L_8021C6D4;
    // 0x8021C6C8: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_8021C6CC:
    // 0x8021C6CC: b           L_8021C6D4
    // 0x8021C6D0: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
        goto L_8021C6D4;
    // 0x8021C6D0: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_8021C6D4:
    // 0x8021C6D4: bnel        $s5, $zero, L_8021C73C
    if (ctx->r21 != 0) {
        // 0x8021C6D8: lbu         $t7, 0x5($s3)
        ctx->r15 = MEM_BU(ctx->r19, 0X5);
            goto L_8021C73C;
    }
    goto skip_1;
    // 0x8021C6D8: lbu         $t7, 0x5($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X5);
    skip_1:
    // 0x8021C6DC: lbu         $t9, 0x7($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X7);
    // 0x8021C6E0: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x8021C6E4: slt         $at, $s6, $t8
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8021C6E8: andi        $t1, $t9, 0x2
    ctx->r9 = ctx->r25 & 0X2;
    // 0x8021C6EC: beql        $t1, $zero, L_8021C73C
    if (ctx->r9 == 0) {
        // 0x8021C6F0: lbu         $t7, 0x5($s3)
        ctx->r15 = MEM_BU(ctx->r19, 0X5);
            goto L_8021C73C;
    }
    goto skip_2;
    // 0x8021C6F0: lbu         $t7, 0x5($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X5);
    skip_2:
    // 0x8021C6F4: beq         $at, $zero, L_8021C944
    if (ctx->r1 == 0) {
        // 0x8021C6F8: lw          $t2, 0x44($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X44);
            goto L_8021C944;
    }
    // 0x8021C6F8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8021C6FC: addu        $v0, $a0, $t2
    ctx->r2 = ADD32(ctx->r4, ctx->r10);
    // 0x8021C700: lbu         $t4, 0x6($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X6);
    // 0x8021C704: lbu         $t3, 0x2A($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2A);
    // 0x8021C708: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021C70C: subu        $s1, $t4, $t3
    ctx->r17 = SUB32(ctx->r12, ctx->r11);
    // 0x8021C710: blezl       $s1, L_8021C948
    if (SIGNED(ctx->r17) <= 0) {
        // 0x8021C714: lw          $t9, 0x44($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X44);
            goto L_8021C948;
    }
    goto skip_3;
    // 0x8021C714: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    skip_3:
L_8021C718:
    // 0x8021C718: jal         0x802230E4
    // 0x8021C71C: nop

    func_802230E4(rdram, ctx);
        goto after_2;
    // 0x8021C71C: nop

    after_2:
    // 0x8021C720: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021C724: bne         $s0, $s1, L_8021C718
    if (ctx->r16 != ctx->r17) {
        // 0x8021C728: addiu       $s4, $s4, -0x1
        ctx->r20 = ADD32(ctx->r20, -0X1);
            goto L_8021C718;
    }
    // 0x8021C728: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x8021C72C: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x8021C730: b           L_8021C944
    // 0x8021C734: lbu         $v1, 0x4($t5)
    ctx->r3 = MEM_BU(ctx->r13, 0X4);
        goto L_8021C944;
    // 0x8021C734: lbu         $v1, 0x4($t5)
    ctx->r3 = MEM_BU(ctx->r13, 0X4);
    // 0x8021C738: lbu         $t7, 0x5($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X5);
L_8021C73C:
    // 0x8021C73C: lw          $t6, 0x4($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X4);
    // 0x8021C740: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x8021C744: sll         $t0, $t7, 1
    ctx->r8 = S32(ctx->r15 << 1);
    // 0x8021C748: addu        $t9, $t6, $t0
    ctx->r25 = ADD32(ctx->r14, ctx->r8);
    // 0x8021C74C: lhu         $s2, 0x0($t9)
    ctx->r18 = MEM_HU(ctx->r25, 0X0);
    // 0x8021C750: lw          $v0, -0x3C18($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C18);
    // 0x8021C754: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x8021C758: sll         $s0, $s2, 2
    ctx->r16 = S32(ctx->r18 << 2);
    // 0x8021C75C: addu        $t1, $v0, $s0
    ctx->r9 = ADD32(ctx->r2, ctx->r16);
    // 0x8021C760: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x8021C764: addiu       $v1, $v1, 0x44B4
    ctx->r3 = ADD32(ctx->r3, 0X44B4);
    // 0x8021C768: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x8021C76C: beq         $t8, $zero, L_8021C7C8
    if (ctx->r24 == 0) {
        // 0x8021C770: sll         $t1, $s2, 2
        ctx->r9 = S32(ctx->r18 << 2);
            goto L_8021C7C8;
    }
    // 0x8021C770: sll         $t1, $s2, 2
    ctx->r9 = S32(ctx->r18 << 2);
    // 0x8021C774: bne         $s6, $zero, L_8021C784
    if (ctx->r22 != 0) {
        // 0x8021C778: lui         $v1, 0x8027
        ctx->r3 = S32(0X8027 << 16);
            goto L_8021C784;
    }
    // 0x8021C778: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x8021C77C: b           L_8021C788
    // 0x8021C780: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
        goto L_8021C788;
    // 0x8021C780: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
L_8021C784:
    // 0x8021C784: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_8021C788:
    // 0x8021C788: lw          $v1, 0x3B90($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B90);
    // 0x8021C78C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8021C790: andi        $t4, $s1, 0xFF
    ctx->r12 = ctx->r17 & 0XFF;
    // 0x8021C794: addiu       $t2, $v1, 0x8
    ctx->r10 = ADD32(ctx->r3, 0X8);
    // 0x8021C798: sw          $t2, 0x3B90($at)
    MEM_W(0X3B90, ctx->r1) = ctx->r10;
    // 0x8021C79C: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x8021C7A0: sll         $t3, $t4, 16
    ctx->r11 = S32(ctx->r12 << 16);
    // 0x8021C7A4: or          $t5, $t3, $at
    ctx->r13 = ctx->r11 | ctx->r1;
    // 0x8021C7A8: ori         $t7, $t5, 0x40
    ctx->r15 = ctx->r13 | 0X40;
    // 0x8021C7AC: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x8021C7B0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021C7B4: lw          $t6, -0x3C18($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3C18);
    // 0x8021C7B8: addu        $t0, $t6, $s0
    ctx->r8 = ADD32(ctx->r14, ctx->r16);
    // 0x8021C7BC: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x8021C7C0: b           L_8021C840
    // 0x8021C7C4: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
        goto L_8021C840;
    // 0x8021C7C4: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
L_8021C7C8:
    // 0x8021C7C8: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x8021C7CC: lw          $t2, 0x44B8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X44B8);
    // 0x8021C7D0: addu        $t8, $t1, $v0
    ctx->r24 = ADD32(ctx->r9, ctx->r2);
    // 0x8021C7D4: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x8021C7D8: addu        $t5, $t2, $t3
    ctx->r13 = ADD32(ctx->r10, ctx->r11);
    // 0x8021C7DC: sw          $t8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r24;
    // 0x8021C7E0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8021C7E4: sll         $t3, $s2, 6
    ctx->r11 = S32(ctx->r18 << 6);
    // 0x8021C7E8: lui         $t2, 0x8026
    ctx->r10 = S32(0X8026 << 16);
    // 0x8021C7EC: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x8021C7F0: bne         $s6, $zero, L_8021C820
    if (ctx->r22 != 0) {
        // 0x8021C7F4: sw          $t6, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r14;
            goto L_8021C820;
    }
    // 0x8021C7F4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021C7F8: lui         $t0, 0x8026
    ctx->r8 = S32(0X8026 << 16);
    // 0x8021C7FC: lw          $t0, -0x3C1C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3C1C);
    // 0x8021C800: sll         $t9, $s2, 6
    ctx->r25 = S32(ctx->r18 << 6);
    // 0x8021C804: jal         0x80223108
    // 0x8021C808: addu        $a0, $t0, $t9
    ctx->r4 = ADD32(ctx->r8, ctx->r25);
    func_80223108(rdram, ctx);
        goto after_3;
    // 0x8021C808: addu        $a0, $t0, $t9
    ctx->r4 = ADD32(ctx->r8, ctx->r25);
    after_3:
    // 0x8021C80C: lui         $t1, 0x8026
    ctx->r9 = S32(0X8026 << 16);
    // 0x8021C810: lw          $t1, -0x3C18($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3C18);
    // 0x8021C814: addu        $t4, $t1, $s0
    ctx->r12 = ADD32(ctx->r9, ctx->r16);
    // 0x8021C818: b           L_8021C840
    // 0x8021C81C: sw          $v0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r2;
        goto L_8021C840;
    // 0x8021C81C: sw          $v0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r2;
L_8021C820:
    // 0x8021C820: lw          $t2, -0x3C1C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3C1C);
    // 0x8021C824: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8021C828: jal         0x80222F30
    // 0x8021C82C: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    func_80222F30(rdram, ctx);
        goto after_4;
    // 0x8021C82C: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    after_4:
    // 0x8021C830: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x8021C834: lw          $t8, -0x3C18($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C18);
    // 0x8021C838: addu        $t5, $t8, $s0
    ctx->r13 = ADD32(ctx->r24, ctx->r16);
    // 0x8021C83C: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
L_8021C840:
    // 0x8021C840: beq         $s5, $zero, L_8021C8E4
    if (ctx->r21 == 0) {
        // 0x8021C844: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8021C8E4;
    }
    // 0x8021C844: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8021C848: lbu         $t7, 0x20($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X20);
    // 0x8021C84C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021C850: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x8021C854: beql        $t7, $zero, L_8021C870
    if (ctx->r15 == 0) {
        // 0x8021C858: lbu         $t9, 0x4($s3)
        ctx->r25 = MEM_BU(ctx->r19, 0X4);
            goto L_8021C870;
    }
    goto skip_4;
    // 0x8021C858: lbu         $t9, 0x4($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X4);
    skip_4:
    // 0x8021C85C: lw          $t6, -0x3C1C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3C1C);
    // 0x8021C860: sll         $t0, $s2, 6
    ctx->r8 = S32(ctx->r18 << 6);
    // 0x8021C864: jal         0x802219B8
    // 0x8021C868: addu        $a0, $t6, $t0
    ctx->r4 = ADD32(ctx->r14, ctx->r8);
    func_802219B8(rdram, ctx);
        goto after_5;
    // 0x8021C868: addu        $a0, $t6, $t0
    ctx->r4 = ADD32(ctx->r14, ctx->r8);
    after_5:
    // 0x8021C86C: lbu         $t9, 0x4($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X4);
L_8021C870:
    // 0x8021C870: blezl       $t9, L_8021C8E8
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8021C874: lw          $t4, 0x74($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X74);
            goto L_8021C8E8;
    }
    goto skip_5;
    // 0x8021C874: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    skip_5:
    // 0x8021C878: lbu         $t1, 0x8($fp)
    ctx->r9 = MEM_BU(ctx->r30, 0X8);
L_8021C87C:
    // 0x8021C87C: andi        $t4, $t1, 0x20
    ctx->r12 = ctx->r9 & 0X20;
    // 0x8021C880: beql        $t4, $zero, L_8021C8C4
    if (ctx->r12 == 0) {
        // 0x8021C884: lw          $t0, 0x0($s3)
        ctx->r8 = MEM_W(ctx->r19, 0X0);
            goto L_8021C8C4;
    }
    goto skip_6;
    // 0x8021C884: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    skip_6:
    // 0x8021C888: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x8021C88C: sll         $s1, $s0, 4
    ctx->r17 = S32(ctx->r16 << 4);
    // 0x8021C890: sll         $t5, $s0, 4
    ctx->r13 = S32(ctx->r16 << 4);
    // 0x8021C894: addu        $v0, $t2, $s1
    ctx->r2 = ADD32(ctx->r10, ctx->r17);
    // 0x8021C898: lw          $s2, 0x0($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X0);
    // 0x8021C89C: or          $t3, $s2, $s7
    ctx->r11 = ctx->r18 | ctx->r23;
    // 0x8021C8A0: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8021C8A4: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x8021C8A8: jal         0x80220C44
    // 0x8021C8AC: addu        $a0, $t8, $t5
    ctx->r4 = ADD32(ctx->r24, ctx->r13);
    func_80220C44(rdram, ctx);
        goto after_6;
    // 0x8021C8AC: addu        $a0, $t8, $t5
    ctx->r4 = ADD32(ctx->r24, ctx->r13);
    after_6:
    // 0x8021C8B0: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x8021C8B4: addu        $t6, $t7, $s1
    ctx->r14 = ADD32(ctx->r15, ctx->r17);
    // 0x8021C8B8: b           L_8021C8D0
    // 0x8021C8BC: sw          $s2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r18;
        goto L_8021C8D0;
    // 0x8021C8BC: sw          $s2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r18;
    // 0x8021C8C0: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
L_8021C8C4:
    // 0x8021C8C4: sll         $t9, $s0, 4
    ctx->r25 = S32(ctx->r16 << 4);
    // 0x8021C8C8: jal         0x80220C44
    // 0x8021C8CC: addu        $a0, $t0, $t9
    ctx->r4 = ADD32(ctx->r8, ctx->r25);
    func_80220C44(rdram, ctx);
        goto after_7;
    // 0x8021C8CC: addu        $a0, $t0, $t9
    ctx->r4 = ADD32(ctx->r8, ctx->r25);
    after_7:
L_8021C8D0:
    // 0x8021C8D0: lbu         $t1, 0x4($s3)
    ctx->r9 = MEM_BU(ctx->r19, 0X4);
    // 0x8021C8D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021C8D8: slt         $at, $s0, $t1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8021C8DC: bnel        $at, $zero, L_8021C87C
    if (ctx->r1 != 0) {
        // 0x8021C8E0: lbu         $t1, 0x8($fp)
        ctx->r9 = MEM_BU(ctx->r30, 0X8);
            goto L_8021C87C;
    }
    goto skip_7;
    // 0x8021C8E0: lbu         $t1, 0x8($fp)
    ctx->r9 = MEM_BU(ctx->r30, 0X8);
    skip_7:
L_8021C8E4:
    // 0x8021C8E4: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
L_8021C8E8:
    // 0x8021C8E8: addiu       $t2, $s6, 0x1
    ctx->r10 = ADD32(ctx->r22, 0X1);
    // 0x8021C8EC: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x8021C8F0: lbu         $v1, 0x4($t4)
    ctx->r3 = MEM_BU(ctx->r12, 0X4);
    // 0x8021C8F4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8021C8F8: bnel        $t2, $v1, L_8021C90C
    if (ctx->r10 != ctx->r3) {
        // 0x8021C8FC: lw          $t8, 0x0($t3)
        ctx->r24 = MEM_W(ctx->r11, 0X0);
            goto L_8021C90C;
    }
    goto skip_8;
    // 0x8021C8FC: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
    skip_8:
    // 0x8021C900: b           L_8021C960
    // 0x8021C904: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
        goto L_8021C960;
    // 0x8021C904: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8021C908: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
L_8021C90C:
    // 0x8021C90C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021C910: addu        $v0, $t8, $t5
    ctx->r2 = ADD32(ctx->r24, ctx->r13);
    // 0x8021C914: lbu         $t7, 0x6($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X6);
    // 0x8021C918: lbu         $t6, 0x2A($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2A);
    // 0x8021C91C: subu        $s1, $t7, $t6
    ctx->r17 = SUB32(ctx->r15, ctx->r14);
    // 0x8021C920: bltz        $s1, L_8021C944
    if (SIGNED(ctx->r17) < 0) {
        // 0x8021C924: addiu       $s2, $s1, 0x1
        ctx->r18 = ADD32(ctx->r17, 0X1);
            goto L_8021C944;
    }
    // 0x8021C924: addiu       $s2, $s1, 0x1
    ctx->r18 = ADD32(ctx->r17, 0X1);
L_8021C928:
    // 0x8021C928: jal         0x802230E4
    // 0x8021C92C: nop

    func_802230E4(rdram, ctx);
        goto after_8;
    // 0x8021C92C: nop

    after_8:
    // 0x8021C930: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021C934: bne         $s2, $s0, L_8021C928
    if (ctx->r18 != ctx->r16) {
        // 0x8021C938: addiu       $s4, $s4, -0x1
        ctx->r20 = ADD32(ctx->r20, -0X1);
            goto L_8021C928;
    }
    // 0x8021C938: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x8021C93C: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x8021C940: lbu         $v1, 0x4($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X4);
L_8021C944:
    // 0x8021C944: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
L_8021C948:
    // 0x8021C948: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8021C94C: slt         $at, $s6, $v1
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8021C950: addiu       $t1, $t9, 0x24
    ctx->r9 = ADD32(ctx->r25, 0X24);
    // 0x8021C954: bne         $at, $zero, L_8021C680
    if (ctx->r1 != 0) {
        // 0x8021C958: sw          $t1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r9;
            goto L_8021C680;
    }
    // 0x8021C958: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x8021C95C: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
L_8021C960:
    // 0x8021C960: blezl       $s4, L_8021C980
    if (SIGNED(ctx->r20) <= 0) {
        // 0x8021C964: lw          $v0, 0x18($fp)
        ctx->r2 = MEM_W(ctx->r30, 0X18);
            goto L_8021C980;
    }
    goto skip_9;
    // 0x8021C964: lw          $v0, 0x18($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X18);
    skip_9:
L_8021C968:
    // 0x8021C968: jal         0x802230E4
    // 0x8021C96C: nop

    func_802230E4(rdram, ctx);
        goto after_9;
    // 0x8021C96C: nop

    after_9:
    // 0x8021C970: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8021C974: bne         $s6, $s4, L_8021C968
    if (ctx->r22 != ctx->r20) {
        // 0x8021C978: nop
    
            goto L_8021C968;
    }
    // 0x8021C978: nop

    // 0x8021C97C: lw          $v0, 0x18($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X18);
L_8021C980:
    // 0x8021C980: beql        $v0, $zero, L_8021C994
    if (ctx->r2 == 0) {
        // 0x8021C984: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_8021C994;
    }
    goto skip_10;
    // 0x8021C984: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_10:
    // 0x8021C988: jalr        $v0
    // 0x8021C98C: lw          $a0, 0x20($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X20);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x8021C98C: lw          $a0, 0x20($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X20);
    after_10:
    // 0x8021C990: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8021C994:
    // 0x8021C994: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021C998: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021C99C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021C9A0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8021C9A4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8021C9A8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8021C9AC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8021C9B0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8021C9B4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8021C9B8: jr          $ra
    // 0x8021C9BC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8021C9BC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_8022C45C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C45C: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8022C460: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022C464: jr          $ra
    // 0x8022C468: lbu         $v0, 0x613C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X613C);
    return;
    // 0x8022C468: lbu         $v0, 0x613C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X613C);
;}
RECOMP_FUNC void func_80230B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80230B80: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80230B84: lw          $t6, 0x3520($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3520);
    // 0x80230B88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230B8C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80230B90: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80230B94: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80230B98: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80230B9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80230BA0: bne         $t6, $zero, L_80230BBC
    if (ctx->r14 != 0) {
        // 0x80230BA4: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_80230BBC;
    }
    // 0x80230BA4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80230BA8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230BAC: jal         0x80231A24
    // 0x80230BB0: addiu       $a0, $a0, 0x4BB0
    ctx->r4 = ADD32(ctx->r4, 0X4BB0);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80230BB0: addiu       $a0, $a0, 0x4BB0
    ctx->r4 = ADD32(ctx->r4, 0X4BB0);
    after_0:
    // 0x80230BB4: b           L_80230C64
    // 0x80230BB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230C64;
    // 0x80230BB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230BBC:
    // 0x80230BBC: andi        $t7, $s0, 0x7
    ctx->r15 = ctx->r16 & 0X7;
    // 0x80230BC0: beq         $t7, $zero, L_80230BDC
    if (ctx->r15 == 0) {
        // 0x80230BC4: andi        $t8, $s1, 0x7
        ctx->r24 = ctx->r17 & 0X7;
            goto L_80230BDC;
    }
    // 0x80230BC4: andi        $t8, $s1, 0x7
    ctx->r24 = ctx->r17 & 0X7;
    // 0x80230BC8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230BCC: jal         0x80231A24
    // 0x80230BD0: addiu       $a0, $a0, 0x4BD4
    ctx->r4 = ADD32(ctx->r4, 0X4BD4);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x80230BD0: addiu       $a0, $a0, 0x4BD4
    ctx->r4 = ADD32(ctx->r4, 0X4BD4);
    after_1:
    // 0x80230BD4: b           L_80230C64
    // 0x80230BD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230C64;
    // 0x80230BD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230BDC:
    // 0x80230BDC: beq         $t8, $zero, L_80230BF8
    if (ctx->r24 == 0) {
        // 0x80230BE0: addu        $t9, $s0, $s1
        ctx->r25 = ADD32(ctx->r16, ctx->r17);
            goto L_80230BF8;
    }
    // 0x80230BE0: addu        $t9, $s0, $s1
    ctx->r25 = ADD32(ctx->r16, ctx->r17);
    // 0x80230BE4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230BE8: jal         0x80231A24
    // 0x80230BEC: addiu       $a0, $a0, 0x4C04
    ctx->r4 = ADD32(ctx->r4, 0X4C04);
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x80230BEC: addiu       $a0, $a0, 0x4C04
    ctx->r4 = ADD32(ctx->r4, 0X4C04);
    after_2:
    // 0x80230BF0: b           L_80230C64
    // 0x80230BF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230C64;
    // 0x80230BF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230BF8:
    // 0x80230BF8: slti        $at, $t9, 0x209
    ctx->r1 = SIGNED(ctx->r25) < 0X209 ? 1 : 0;
    // 0x80230BFC: bne         $at, $zero, L_80230C24
    if (ctx->r1 != 0) {
        // 0x80230C00: lui         $a0, 0x8028
        ctx->r4 = S32(0X8028 << 16);
            goto L_80230C24;
    }
    // 0x80230C00: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80230C04: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230C08: addiu       $a0, $a0, 0x4C38
    ctx->r4 = ADD32(ctx->r4, 0X4C38);
    // 0x80230C0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80230C10: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80230C14: jal         0x80231A24
    // 0x80230C18: addiu       $a3, $zero, 0x208
    ctx->r7 = ADD32(0, 0X208);
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x80230C18: addiu       $a3, $zero, 0x208
    ctx->r7 = ADD32(0, 0X208);
    after_3:
    // 0x80230C1C: b           L_80230C64
    // 0x80230C20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230C64;
    // 0x80230C20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230C24:
    // 0x80230C24: bgez        $s0, L_80230C34
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80230C28: sra         $t0, $s0, 3
        ctx->r8 = S32(SIGNED(ctx->r16) >> 3);
            goto L_80230C34;
    }
    // 0x80230C28: sra         $t0, $s0, 3
    ctx->r8 = S32(SIGNED(ctx->r16) >> 3);
    // 0x80230C2C: addiu       $at, $s0, 0x7
    ctx->r1 = ADD32(ctx->r16, 0X7);
    // 0x80230C30: sra         $t0, $at, 3
    ctx->r8 = S32(SIGNED(ctx->r1) >> 3);
L_80230C34:
    // 0x80230C34: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    // 0x80230C38: addiu       $a0, $a0, 0xC58
    ctx->r4 = ADD32(ctx->r4, 0XC58);
    // 0x80230C3C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80230C40: jal         0x8023E0B0
    // 0x80230C44: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_8023E0B0(rdram, ctx);
        goto after_4;
    // 0x80230C44: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_4:
    // 0x80230C48: beq         $v0, $zero, L_80230C60
    if (ctx->r2 == 0) {
        // 0x80230C4C: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80230C60;
    }
    // 0x80230C4C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230C50: jal         0x80231A24
    // 0x80230C54: addiu       $a0, $a0, 0x4C6C
    ctx->r4 = ADD32(ctx->r4, 0X4C6C);
    func_80231A24(rdram, ctx);
        goto after_5;
    // 0x80230C54: addiu       $a0, $a0, 0x4C6C
    ctx->r4 = ADD32(ctx->r4, 0X4C6C);
    after_5:
    // 0x80230C58: b           L_80230C64
    // 0x80230C5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230C64;
    // 0x80230C5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230C60:
    // 0x80230C60: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_80230C64:
    // 0x80230C64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80230C68: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80230C6C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80230C70: jr          $ra
    // 0x80230C74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80230C74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023DA94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023DA94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023DA98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023DA9C: jal         0x80247060
    // 0x8023DAA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80247060(rdram, ctx);
        goto after_0;
    // 0x8023DAA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8023DAA4: beq         $v0, $zero, L_8023DABC
    if (ctx->r2 == 0) {
        // 0x8023DAA8: nop
    
            goto L_8023DABC;
    }
    // 0x8023DAA8: nop

L_8023DAAC:
    // 0x8023DAAC: jal         0x80247060
    // 0x8023DAB0: nop

    func_80247060(rdram, ctx);
        goto after_1;
    // 0x8023DAB0: nop

    after_1:
    // 0x8023DAB4: bne         $v0, $zero, L_8023DAAC
    if (ctx->r2 != 0) {
        // 0x8023DAB8: nop
    
            goto L_8023DAAC;
    }
    // 0x8023DAB8: nop

L_8023DABC:
    // 0x8023DABC: jal         0x80246F80
    // 0x8023DAC0: addiu       $a0, $zero, 0x125
    ctx->r4 = ADD32(0, 0X125);
    func_80246F80(rdram, ctx);
        goto after_2;
    // 0x8023DAC0: addiu       $a0, $zero, 0x125
    ctx->r4 = ADD32(0, 0X125);
    after_2:
    // 0x8023DAC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023DAC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023DACC: jr          $ra
    // 0x8023DAD0: nop

    return;
    // 0x8023DAD0: nop

;}
RECOMP_FUNC void func_8021D228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021D228: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021D22C: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8021D230: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x8021D234: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8021D238: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8021D23C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8021D240: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8021D244: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8021D248: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8021D24C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8021D250: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8021D254: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8021D258: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8021D25C: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x8021D260: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8021D264: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x8021D268: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8021D26C: lw          $s1, 0x0($t0)
    ctx->r17 = MEM_W(ctx->r8, 0X0);
    // 0x8021D270: or          $t8, $a0, $zero
    ctx->r24 = ctx->r4 | 0;
    // 0x8021D274: addiu       $s0, $sp, 0x3C
    ctx->r16 = ADD32(ctx->r29, 0X3C);
    // 0x8021D278: bne         $s1, $zero, L_8021D298
    if (ctx->r17 != 0) {
        // 0x8021D27C: addiu       $s3, $s3, 0x354C
        ctx->r19 = ADD32(ctx->r19, 0X354C);
            goto L_8021D298;
    }
    // 0x8021D27C: addiu       $s3, $s3, 0x354C
    ctx->r19 = ADD32(ctx->r19, 0X354C);
    // 0x8021D280: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021D284: addiu       $a0, $a0, 0x3528
    ctx->r4 = ADD32(ctx->r4, 0X3528);
    // 0x8021D288: jal         0x80231A24
    // 0x8021D28C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021D28C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_0:
    // 0x8021D290: b           L_8021D428
    // 0x8021D294: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8021D428;
    // 0x8021D294: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8021D298:
    // 0x8021D298: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8021D29C: addiu       $s2, $zero, -0x4
    ctx->r18 = ADD32(0, -0X4);
L_8021D2A0:
    // 0x8021D2A0: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
L_8021D2A4:
    // 0x8021D2A4: and         $s0, $t1, $s2
    ctx->r16 = ctx->r9 & ctx->r18;
    // 0x8021D2A8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8021D2AC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021D2B0: sltiu       $at, $a1, 0x5
    ctx->r1 = ctx->r5 < 0X5 ? 1 : 0;
    // 0x8021D2B4: beq         $at, $zero, L_8021D414
    if (ctx->r1 == 0) {
        // 0x8021D2B8: sll         $t2, $a1, 2
        ctx->r10 = S32(ctx->r5 << 2);
            goto L_8021D414;
    }
    // 0x8021D2B8: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x8021D2BC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021D2C0: addu        $at, $at, $t2
    gpr jr_addend_8021D2C8 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8021D2C4: lw          $t2, 0x35B0($at)
    ctx->r10 = ADD32(ctx->r1, 0X35B0);
    // 0x8021D2C8: jr          $t2
    // 0x8021D2CC: nop

    switch (jr_addend_8021D2C8 >> 2) {
        case 0: goto L_8021D424; break;
        case 1: goto L_8021D364; break;
        case 2: goto L_8021D3BC; break;
        case 3: goto L_8021D2D0; break;
        case 4: goto L_8021D30C; break;
        default: switch_error(__func__, 0x8021D2C8, 0x802535B0);
    }
    // 0x8021D2CC: nop

L_8021D2D0:
    // 0x8021D2D0: lwc1        $f0, 0x18($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X18);
    // 0x8021D2D4: addiu       $t3, $s0, 0x3
    ctx->r11 = ADD32(ctx->r16, 0X3);
    // 0x8021D2D8: and         $s0, $t3, $s2
    ctx->r16 = ctx->r11 & ctx->r18;
    // 0x8021D2DC: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x8021D2E0: nop

    // 0x8021D2E4: bc1tl       L_8021D2FC
    if (c1cs) {
        // 0x8021D2E8: mov.s       $f2, $f20
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
            goto L_8021D2FC;
    }
    goto skip_0;
    // 0x8021D2E8: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    skip_0:
    // 0x8021D2EC: lwc1        $f4, 0x14($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X14);
    // 0x8021D2F0: b           L_8021D2FC
    // 0x8021D2F4: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
        goto L_8021D2FC;
    // 0x8021D2F4: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8021D2F8: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
L_8021D2FC:
    // 0x8021D2FC: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x8021D300: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021D304: b           L_8021D2A0
    // 0x8021D308: swc1        $f2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f2.u32l;
        goto L_8021D2A0;
    // 0x8021D308: swc1        $f2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f2.u32l;
L_8021D30C:
    // 0x8021D30C: addiu       $t5, $s0, 0x3
    ctx->r13 = ADD32(ctx->r16, 0X3);
    // 0x8021D310: and         $s0, $t5, $s2
    ctx->r16 = ctx->r13 & ctx->r18;
    // 0x8021D314: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8021D318: lbu         $t6, 0x8($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X8);
    // 0x8021D31C: addiu       $t9, $s0, 0x7
    ctx->r25 = ADD32(ctx->r16, 0X7);
    // 0x8021D320: and         $s0, $t9, $s2
    ctx->r16 = ctx->r25 & ctx->r18;
    // 0x8021D324: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x8021D328: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8021D32C: lbu         $t0, 0x9($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X9);
    // 0x8021D330: addiu       $t1, $s0, 0x7
    ctx->r9 = ADD32(ctx->r16, 0X7);
    // 0x8021D334: and         $s0, $t1, $s2
    ctx->r16 = ctx->r9 & ctx->r18;
    // 0x8021D338: sb          $t0, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r8;
    // 0x8021D33C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x8021D340: lbu         $t2, 0xA($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0XA);
    // 0x8021D344: addiu       $t4, $s0, 0x7
    ctx->r12 = ADD32(ctx->r16, 0X7);
    // 0x8021D348: and         $s0, $t4, $s2
    ctx->r16 = ctx->r12 & ctx->r18;
    // 0x8021D34C: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
    // 0x8021D350: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8021D354: lbu         $t5, 0xB($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0XB);
    // 0x8021D358: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021D35C: b           L_8021D2A0
    // 0x8021D360: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
        goto L_8021D2A0;
    // 0x8021D360: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
L_8021D364:
    // 0x8021D364: addiu       $t7, $s0, 0x3
    ctx->r15 = ADD32(ctx->r16, 0X3);
    // 0x8021D368: and         $s0, $t7, $s2
    ctx->r16 = ctx->r15 & ctx->r18;
    // 0x8021D36C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x8021D370: lbu         $t9, 0x4($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X4);
    // 0x8021D374: addiu       $t8, $s0, 0x7
    ctx->r24 = ADD32(ctx->r16, 0X7);
    // 0x8021D378: and         $s0, $t8, $s2
    ctx->r16 = ctx->r24 & ctx->r18;
    // 0x8021D37C: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
    // 0x8021D380: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x8021D384: lbu         $t1, 0x5($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X5);
    // 0x8021D388: addiu       $t3, $s0, 0x7
    ctx->r11 = ADD32(ctx->r16, 0X7);
    // 0x8021D38C: and         $s0, $t3, $s2
    ctx->r16 = ctx->r11 & ctx->r18;
    // 0x8021D390: sb          $t1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r9;
    // 0x8021D394: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x8021D398: lbu         $t4, 0x6($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X6);
    // 0x8021D39C: addiu       $t6, $s0, 0x7
    ctx->r14 = ADD32(ctx->r16, 0X7);
    // 0x8021D3A0: and         $s0, $t6, $s2
    ctx->r16 = ctx->r14 & ctx->r18;
    // 0x8021D3A4: sb          $t4, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r12;
    // 0x8021D3A8: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8021D3AC: lbu         $t7, 0x7($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X7);
    // 0x8021D3B0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021D3B4: b           L_8021D2A0
    // 0x8021D3B8: sb          $t7, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r15;
        goto L_8021D2A0;
    // 0x8021D3B8: sb          $t7, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r15;
L_8021D3BC:
    // 0x8021D3BC: addiu       $t0, $s0, 0x3
    ctx->r8 = ADD32(ctx->r16, 0X3);
    // 0x8021D3C0: and         $s0, $t0, $s2
    ctx->r16 = ctx->r8 & ctx->r18;
    // 0x8021D3C4: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x8021D3C8: lbu         $t8, 0x0($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X0);
    // 0x8021D3CC: addiu       $t2, $s0, 0x7
    ctx->r10 = ADD32(ctx->r16, 0X7);
    // 0x8021D3D0: and         $s0, $t2, $s2
    ctx->r16 = ctx->r10 & ctx->r18;
    // 0x8021D3D4: sb          $t8, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r24;
    // 0x8021D3D8: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x8021D3DC: lbu         $t3, 0x0($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X0);
    // 0x8021D3E0: addiu       $t5, $s0, 0x7
    ctx->r13 = ADD32(ctx->r16, 0X7);
    // 0x8021D3E4: and         $s0, $t5, $s2
    ctx->r16 = ctx->r13 & ctx->r18;
    // 0x8021D3E8: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    // 0x8021D3EC: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8021D3F0: lbu         $t6, 0x0($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X0);
    // 0x8021D3F4: addiu       $t9, $s0, 0x7
    ctx->r25 = ADD32(ctx->r16, 0X7);
    // 0x8021D3F8: and         $s0, $t9, $s2
    ctx->r16 = ctx->r25 & ctx->r18;
    // 0x8021D3FC: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x8021D400: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8021D404: lbu         $t0, 0x0($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X0);
    // 0x8021D408: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021D40C: b           L_8021D2A0
    // 0x8021D410: sb          $t0, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r8;
        goto L_8021D2A0;
    // 0x8021D410: sb          $t0, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r8;
L_8021D414:
    // 0x8021D414: jal         0x80231A24
    // 0x8021D418: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8021D418: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x8021D41C: b           L_8021D2A4
    // 0x8021D420: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
        goto L_8021D2A4;
    // 0x8021D420: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
L_8021D424:
    // 0x8021D424: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8021D428:
    // 0x8021D428: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8021D42C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8021D430: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8021D434: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8021D438: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8021D43C: jr          $ra
    // 0x8021D440: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8021D440: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80246BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246BA0: lhu         $t6, 0x14($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X14);
    // 0x80246BA4: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x80246BA8: jr          $ra
    // 0x80246BAC: sh          $t7, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r15;
    return;
    // 0x80246BAC: sh          $t7, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_80242AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80242AD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80242AD4: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x80242AD8: sra         $t6, $t0, 16
    ctx->r14 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80242ADC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80242AE0: sll         $s1, $t6, 2
    ctx->r17 = S32(ctx->r14 << 2);
    // 0x80242AE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80242AE8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80242AEC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80242AF0: addu        $s1, $s1, $t6
    ctx->r17 = ADD32(ctx->r17, ctx->r14);
    // 0x80242AF4: lw          $t7, 0x34($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X34);
    // 0x80242AF8: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x80242AFC: subu        $s1, $s1, $t6
    ctx->r17 = SUB32(ctx->r17, ctx->r14);
    // 0x80242B00: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80242B04: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x80242B08: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80242B0C: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    // 0x80242B10: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80242B14: jal         0x80242690
    // 0x80242B18: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    func_80242690(rdram, ctx);
        goto after_0;
    // 0x80242B18: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_0:
    // 0x80242B1C: lw          $t8, 0x34($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X34);
    // 0x80242B20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80242B24: addu        $a2, $t8, $s1
    ctx->r6 = ADD32(ctx->r24, ctx->r17);
    // 0x80242B28: jal         0x8024A234
    // 0x80242B2C: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
    func_8024A234(rdram, ctx);
        goto after_1;
    // 0x80242B2C: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
    after_1:
    // 0x80242B30: lw          $t9, 0x34($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X34);
    // 0x80242B34: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80242B38: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80242B3C: addu        $a2, $t9, $s1
    ctx->r6 = ADD32(ctx->r25, ctx->r17);
    // 0x80242B40: jal         0x80242B70
    // 0x80242B44: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    func_80242B70(rdram, ctx);
        goto after_2;
    // 0x80242B44: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    after_2:
    // 0x80242B48: lw          $t2, 0x34($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X34);
    // 0x80242B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80242B50: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80242B54: addu        $v0, $t2, $s1
    ctx->r2 = ADD32(ctx->r10, ctx->r17);
    // 0x80242B58: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80242B5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80242B60: jr          $ra
    // 0x80242B64: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    return;
    // 0x80242B64: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
;}
RECOMP_FUNC void func_80227DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227DE8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80227DEC: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80227DF0: lw          $t6, 0x5214($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5214);
    // 0x80227DF4: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80227DF8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80227DFC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80227E00: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80227E04: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80227E08: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80227E0C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80227E10: jal         0x80223840
    // 0x80227E14: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227E14: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_0:
    // 0x80227E18: addiu       $s2, $sp, 0x34
    ctx->r18 = ADD32(ctx->r29, 0X34);
    // 0x80227E1C: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
    // 0x80227E20: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80227E24: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80227E28: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80227E2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227E30: jal         0x8022393C
    // 0x80227E34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_1;
    // 0x80227E34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80227E38: beq         $v0, $zero, L_80227E74
    if (ctx->r2 == 0) {
        // 0x80227E3C: lui         $s0, 0x434F
        ctx->r16 = S32(0X434F << 16);
            goto L_80227E74;
    }
    // 0x80227E3C: lui         $s0, 0x434F
    ctx->r16 = S32(0X434F << 16);
    // 0x80227E40: ori         $s0, $s0, 0x4D4D
    ctx->r16 = ctx->r16 | 0X4D4D;
L_80227E44:
    // 0x80227E44: bnel        $v0, $s0, L_80227E5C
    if (ctx->r2 != ctx->r16) {
        // 0x80227E48: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80227E5C;
    }
    goto skip_0;
    // 0x80227E48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x80227E4C: jal         0x80226790
    // 0x80227E50: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_80226790(rdram, ctx);
        goto after_2;
    // 0x80227E50: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_2:
    // 0x80227E54: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80227E58: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80227E5C:
    // 0x80227E5C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80227E60: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80227E64: jal         0x8022393C
    // 0x80227E68: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_3;
    // 0x80227E68: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x80227E6C: bne         $v0, $zero, L_80227E44
    if (ctx->r2 != 0) {
        // 0x80227E70: nop
    
            goto L_80227E44;
    }
    // 0x80227E70: nop

L_80227E74:
    // 0x80227E74: jal         0x802238F0
    // 0x80227E78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_802238F0(rdram, ctx);
        goto after_4;
    // 0x80227E78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80227E7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80227E80: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x80227E84: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80227E88: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80227E8C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80227E90: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80227E94: jr          $ra
    // 0x80227E98: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80227E98: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8021DE60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021DE60: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8021DE64: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x8021DE68: lw          $t7, -0x3A00($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A00);
    // 0x8021DE6C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8021DE70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021DE74: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8021DE78: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8021DE7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021DE80: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8021DE84: bne         $a1, $at, L_8021DE94
    if (ctx->r5 != ctx->r1) {
        // 0x8021DE88: addu        $v0, $t6, $t7
        ctx->r2 = ADD32(ctx->r14, ctx->r15);
            goto L_8021DE94;
    }
    // 0x8021DE88: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8021DE8C: b           L_8021DF28
    // 0x8021DE90: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
        goto L_8021DF28;
    // 0x8021DE90: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
L_8021DE94:
    // 0x8021DE94: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x8021DE98: lw          $t8, -0x18F0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X18F0);
    // 0x8021DE9C: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x8021DEA0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8021DEA4: lw          $t9, 0x34($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X34);
    // 0x8021DEA8: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x8021DEAC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8021DEB0: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x8021DEB4: bnel        $a1, $zero, L_8021DED8
    if (ctx->r5 != 0) {
        // 0x8021DEB8: sb          $t2, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r10;
            goto L_8021DED8;
    }
    goto skip_0;
    // 0x8021DEB8: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    skip_0:
    // 0x8021DEBC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021DEC0: addiu       $a0, $a0, 0x35D0
    ctx->r4 = ADD32(ctx->r4, 0X35D0);
    // 0x8021DEC4: jal         0x80231A24
    // 0x8021DEC8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021DEC8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x8021DECC: b           L_8021DF2C
    // 0x8021DED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021DF2C;
    // 0x8021DED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021DED4: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
L_8021DED8:
    // 0x8021DED8: lbu         $t3, 0x9($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X9);
    // 0x8021DEDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021DEE0: bnel        $t3, $at, L_8021DEFC
    if (ctx->r11 != ctx->r1) {
        // 0x8021DEE4: sb          $zero, 0x2($v0)
        MEM_B(0X2, ctx->r2) = 0;
            goto L_8021DEFC;
    }
    goto skip_1;
    // 0x8021DEE4: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    skip_1:
    // 0x8021DEE8: lbu         $t4, 0x0($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X0);
    // 0x8021DEEC: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x8021DEF0: b           L_8021DEFC
    // 0x8021DEF4: sb          $t5, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r13;
        goto L_8021DEFC;
    // 0x8021DEF4: sb          $t5, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r13;
    // 0x8021DEF8: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
L_8021DEFC:
    // 0x8021DEFC: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x8021DF00: beq         $t6, $zero, L_8021DF20
    if (ctx->r14 == 0) {
        // 0x8021DF04: nop
    
            goto L_8021DF20;
    }
    // 0x8021DF04: nop

    // 0x8021DF08: lbu         $t8, 0x2($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2);
    // 0x8021DF0C: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x8021DF10: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8021DF14: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8021DF18: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8021DF1C: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
L_8021DF20:
    // 0x8021DF20: jal         0x8022B460
    // 0x8021DF24: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_8022B460(rdram, ctx);
        goto after_1;
    // 0x8021DF24: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
L_8021DF28:
    // 0x8021DF28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021DF2C:
    // 0x8021DF2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021DF30: jr          $ra
    // 0x8021DF34: nop

    return;
    // 0x8021DF34: nop

;}
RECOMP_FUNC void func_80201FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80201FB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201FBC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80201FC0: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80201FC4: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x80201FC8: lbu         $a3, 0x23($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X23);
    // 0x80201FCC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201FD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201FD4: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201FD8: bne         $at, $zero, L_80202000
    if (ctx->r1 != 0) {
        // 0x80201FDC: addiu       $a0, $a0, 0x1F98
        ctx->r4 = ADD32(ctx->r4, 0X1F98);
            goto L_80202000;
    }
    // 0x80201FDC: addiu       $a0, $a0, 0x1F98
    ctx->r4 = ADD32(ctx->r4, 0X1F98);
    // 0x80201FE0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80201FE4: addiu       $a1, $a1, 0x1FB0
    ctx->r5 = ADD32(ctx->r5, 0X1FB0);
    // 0x80201FE8: addiu       $a2, $zero, 0x21C
    ctx->r6 = ADD32(0, 0X21C);
    // 0x80201FEC: jal         0x80231C9C
    // 0x80201FF0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80201FF0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80201FF4: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80201FF8: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x80201FFC: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
L_80202000:
    // 0x80202000: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80202004: beq         $at, $zero, L_802020C4
    if (ctx->r1 == 0) {
        // 0x80202008: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_802020C4;
    }
    // 0x80202008: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8020200C: addiu       $a0, $a0, 0x1FB8
    ctx->r4 = ADD32(ctx->r4, 0X1FB8);
    // 0x80202010: jal         0x802011D0
    // 0x80202014: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_802011D0(rdram, ctx);
        goto after_1;
    // 0x80202014: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x80202018: lbu         $v0, 0x23($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X23);
    // 0x8020201C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80202020: addiu       $a1, $a1, 0x6DE4
    ctx->r5 = ADD32(ctx->r5, 0X6DE4);
    // 0x80202024: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80202028: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8020202C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80202030: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80202034: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x80202038: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8020203C: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80202040: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80202044: addu        $v1, $t7, $t6
    ctx->r3 = ADD32(ctx->r15, ctx->r14);
    // 0x80202048: lbu         $a0, 0xAD($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0XAD);
    // 0x8020204C: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x80202050: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80202054: beql        $a0, $at, L_8020207C
    if (ctx->r4 == ctx->r1) {
        // 0x80202058: sw          $zero, 0xA8($v1)
        MEM_W(0XA8, ctx->r3) = 0;
            goto L_8020207C;
    }
    goto skip_0;
    // 0x80202058: sw          $zero, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = 0;
    skip_0:
    // 0x8020205C: jal         0x80203654
    // 0x80202060: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    func_80203654(rdram, ctx);
        goto after_2;
    // 0x80202060: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_2:
    // 0x80202064: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80202068: addiu       $a1, $a1, 0x6DE4
    ctx->r5 = ADD32(ctx->r5, 0X6DE4);
    // 0x8020206C: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x80202070: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80202074: addu        $v1, $t8, $v0
    ctx->r3 = ADD32(ctx->r24, ctx->r2);
    // 0x80202078: sw          $zero, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = 0;
L_8020207C:
    // 0x8020207C: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x80202080: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x80202084: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x80202088: sb          $t9, 0xAD($t1)
    MEM_B(0XAD, ctx->r9) = ctx->r25;
    // 0x8020208C: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x80202090: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x80202094: sw          $zero, 0xA0($t3)
    MEM_W(0XA0, ctx->r11) = 0;
    // 0x80202098: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x8020209C: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x802020A0: sb          $zero, 0xB0($t5)
    MEM_B(0XB0, ctx->r13) = 0;
    // 0x802020A4: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x802020A8: addu        $t6, $a2, $v0
    ctx->r14 = ADD32(ctx->r6, ctx->r2);
    // 0x802020AC: lw          $t7, 0x98($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X98);
    // 0x802020B0: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x802020B4: beql        $t8, $zero, L_802020C8
    if (ctx->r24 == 0) {
        // 0x802020B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802020C8;
    }
    goto skip_1;
    // 0x802020B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x802020BC: jal         0x802012BC
    // 0x802020C0: addu        $a0, $v0, $a2
    ctx->r4 = ADD32(ctx->r2, ctx->r6);
    func_802012BC(rdram, ctx);
        goto after_3;
    // 0x802020C0: addu        $a0, $v0, $a2
    ctx->r4 = ADD32(ctx->r2, ctx->r6);
    after_3:
L_802020C4:
    // 0x802020C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802020C8:
    // 0x802020C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802020CC: jr          $ra
    // 0x802020D0: nop

    return;
    // 0x802020D0: nop

;}
RECOMP_FUNC void func_802156FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802156FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80215700: lhu         $t0, 0x2A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X2A);
    // 0x80215704: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x80215708: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8021570C: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x80215710: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x80215714: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80215718: addu        $v1, $a2, $t1
    ctx->r3 = ADD32(ctx->r6, ctx->r9);
    // 0x8021571C: lh          $t2, 0x0($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X0);
    // 0x80215720: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
    // 0x80215724: andi        $t6, $a3, 0xFFFF
    ctx->r14 = ctx->r7 & 0XFFFF;
    // 0x80215728: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8021572C: lhu         $t4, 0x2E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X2E);
    // 0x80215730: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80215734: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80215738: addu        $v0, $a2, $t7
    ctx->r2 = ADD32(ctx->r6, ctx->r15);
    // 0x8021573C: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x80215740: lh          $t9, 0x2($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2);
    // 0x80215744: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80215748: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x8021574C: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80215750: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80215754: addu        $a0, $a2, $t5
    ctx->r4 = ADD32(ctx->r6, ctx->r13);
    // 0x80215758: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8021575C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80215760: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80215764: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80215768: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8021576C: lh          $t7, 0x2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2);
    // 0x80215770: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80215774: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80215778: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021577C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80215780: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80215784: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80215788: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021578C: bc1t        L_802157D0
    if (c1cs) {
        // 0x80215790: cvt.s.w     $f22, $f6
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    ctx->f22.fl = CVT_S_W(ctx->f6.u32l);
            goto L_802157D0;
    }
    // 0x80215790: cvt.s.w     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    ctx->f22.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80215794: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80215798: nop

    // 0x8021579C: div.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802157A0: mul.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x802157A4: nop

    // 0x802157A8: mul.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x802157AC: nop

    // 0x802157B0: mul.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x802157B4: nop

    // 0x802157B8: mul.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x802157BC: nop

    // 0x802157C0: mul.s       $f20, $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f12.fl);
    // 0x802157C4: nop

    // 0x802157C8: mul.s       $f22, $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f12.fl);
    // 0x802157CC: nop

L_802157D0:
    // 0x802157D0: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802157D4: sub.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x802157D8: sub.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x802157DC: sub.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x802157E0: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802157E4: sub.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x802157E8: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802157EC: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802157F0: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x802157F4: nop

    // 0x802157F8: bc1fl       L_8021580C
    if (!c1cs) {
        // 0x802157FC: sub.s       $f10, $f6, $f16
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f16.fl;
            goto L_8021580C;
    }
    goto skip_0;
    // 0x802157FC: sub.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f16.fl;
    skip_0:
    // 0x80215800: b           L_80215870
    // 0x80215804: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80215870;
    // 0x80215804: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80215808: sub.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f16.fl;
L_8021580C:
    // 0x8021580C: sub.s       $f8, $f22, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f22.fl - ctx->f18.fl;
    // 0x80215810: sub.s       $f6, $f14, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f18.fl;
    // 0x80215814: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80215818: sub.s       $f10, $f20, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f16.fl;
    // 0x8021581C: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80215820: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80215824: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80215828: nop

    // 0x8021582C: bc1fl       L_80215840
    if (!c1cs) {
        // 0x80215830: sub.s       $f10, $f6, $f20
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f20.fl;
            goto L_80215840;
    }
    goto skip_1;
    // 0x80215830: sub.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f20.fl;
    skip_1:
    // 0x80215834: b           L_80215870
    // 0x80215838: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80215870;
    // 0x80215838: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021583C: sub.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f20.fl;
L_80215840:
    // 0x80215840: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80215844: sub.s       $f4, $f2, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f22.fl;
    // 0x80215848: sub.s       $f6, $f14, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f22.fl;
    // 0x8021584C: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80215850: sub.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x80215854: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80215858: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x8021585C: nop

    // 0x80215860: bc1f        L_80215870
    if (!c1cs) {
        // 0x80215864: nop
    
            goto L_80215870;
    }
    // 0x80215864: nop

    // 0x80215868: b           L_80215870
    // 0x8021586C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80215870;
    // 0x8021586C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80215870:
    // 0x80215870: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x80215874: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x80215878: jr          $ra
    // 0x8021587C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8021587C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80246FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246FD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80246FD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80246FD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80246FDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80246FE0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80246FE4: jal         0x80247060
    // 0x80246FE8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_80247060(rdram, ctx);
        goto after_0;
    // 0x80246FE8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x80246FEC: beq         $v0, $zero, L_80246FFC
    if (ctx->r2 == 0) {
        // 0x80246FF0: nop
    
            goto L_80246FFC;
    }
    // 0x80246FF0: nop

    // 0x80246FF4: b           L_8024704C
    // 0x80246FF8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8024704C;
    // 0x80246FF8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80246FFC:
    // 0x80246FFC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80247000: lui         $t7, 0xA404
    ctx->r15 = S32(0XA404 << 16);
    // 0x80247004: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80247008: jal         0x802375F0
    // 0x8024700C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_802375F0(rdram, ctx);
        goto after_1;
    // 0x8024700C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80247010: lui         $t8, 0xA404
    ctx->r24 = S32(0XA404 << 16);
    // 0x80247014: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x80247018: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8024701C: bne         $t9, $zero, L_80247038
    if (ctx->r25 != 0) {
        // 0x80247020: nop
    
            goto L_80247038;
    }
    // 0x80247020: nop

    // 0x80247024: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80247028: lui         $t2, 0xA404
    ctx->r10 = S32(0XA404 << 16);
    // 0x8024702C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80247030: b           L_80247048
    // 0x80247034: sw          $t1, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r9;
        goto L_80247048;
    // 0x80247034: sw          $t1, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r9;
L_80247038:
    // 0x80247038: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8024703C: lui         $t5, 0xA404
    ctx->r13 = S32(0XA404 << 16);
    // 0x80247040: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80247044: sw          $t4, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r12;
L_80247048:
    // 0x80247048: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024704C:
    // 0x8024704C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80247050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80247054: jr          $ra
    // 0x80247058: nop

    return;
    // 0x80247058: nop

;}
RECOMP_FUNC void func_8021F35C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021F35C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021F360: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x8021F364: addiu       $t0, $t0, 0x1B5E
    ctx->r8 = ADD32(ctx->r8, 0X1B5E);
    // 0x8021F368: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8021F36C: lh          $a0, 0x0($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X0);
    // 0x8021F370: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x8021F374: lw          $t7, 0x1B58($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1B58);
    // 0x8021F378: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8021F37C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8021F380: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8021F384: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021F388: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8021F38C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8021F390: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8021F394: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8021F398: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8021F39C: addiu       $a1, $a1, 0x3720
    ctx->r5 = ADD32(ctx->r5, 0X3720);
    // 0x8021F3A0: jal         0x80231C58
    // 0x8021F3A4: addiu       $a2, $a2, 0xBE4
    ctx->r6 = ADD32(ctx->r6, 0XBE4);
    func_80231C58(rdram, ctx);
        goto after_0;
    // 0x8021F3A4: addiu       $a2, $a2, 0xBE4
    ctx->r6 = ADD32(ctx->r6, 0XBE4);
    after_0:
    // 0x8021F3A8: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x8021F3AC: addiu       $t0, $t0, 0x1B5E
    ctx->r8 = ADD32(ctx->r8, 0X1B5E);
    // 0x8021F3B0: beq         $v0, $zero, L_8021F3C0
    if (ctx->r2 == 0) {
        // 0x8021F3B4: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_8021F3C0;
    }
    // 0x8021F3B4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8021F3B8: b           L_8021F430
    // 0x8021F3BC: lh          $v0, 0x0($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X0);
        goto L_8021F430;
    // 0x8021F3BC: lh          $v0, 0x0($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X0);
L_8021F3C0:
    // 0x8021F3C0: lh          $t8, 0x0($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X0);
    // 0x8021F3C4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8021F3C8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8021F3CC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8021F3D0: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
    // 0x8021F3D4: sh          $t1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r9;
    // 0x8021F3D8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8021F3DC: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8021F3E0: sh          $t2, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r10;
    // 0x8021F3E4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8021F3E8: sh          $t3, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r11;
    // 0x8021F3EC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8021F3F0: sh          $t4, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r12;
    // 0x8021F3F4: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8021F3F8: sh          $t5, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r13;
    // 0x8021F3FC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8021F400: sb          $t6, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r14;
    // 0x8021F404: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8021F408: sb          $t7, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r15;
    // 0x8021F40C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8021F410: sb          $t8, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r24;
    // 0x8021F414: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x8021F418: sb          $t9, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r25;
    // 0x8021F41C: sh          $t1, 0x1B66($at)
    MEM_H(0X1B66, ctx->r1) = ctx->r9;
    // 0x8021F420: lh          $v0, 0x0($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X0);
    // 0x8021F424: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8021F428: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x8021F42C: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
L_8021F430:
    // 0x8021F430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021F434: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021F438: jr          $ra
    // 0x8021F43C: nop

    return;
    // 0x8021F43C: nop

;}
RECOMP_FUNC void func_802423C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802423C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802423CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802423D0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802423D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802423D8: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x802423DC: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802423E0: addiu       $a1, $a1, 0x47A0
    ctx->r5 = ADD32(ctx->r5, 0X47A0);
    // 0x802423E4: addiu       $a2, $a2, 0x4770
    ctx->r6 = ADD32(ctx->r6, 0X4770);
    // 0x802423E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802423EC: jal         0x80249920
    // 0x802423F0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_80249920(rdram, ctx);
        goto after_0;
    // 0x802423F0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x802423F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802423F8: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x802423FC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80242400: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x80242404: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80242408: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    // 0x8024240C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80242410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80242414: jr          $ra
    // 0x80242418: nop

    return;
    // 0x80242418: nop

;}
RECOMP_FUNC void func_8024336C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024336C: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80243370: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80243374: sw          $a3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r7;
    // 0x80243378: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8024337C: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x80243380: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80243384: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80243388: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8024338C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80243390: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80243394: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80243398: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8024339C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802433A0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802433A4: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x802433A8: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x802433AC: bne         $a2, $zero, L_802433BC
    if (ctx->r6 != 0) {
        // 0x802433B0: or          $t5, $zero, $zero
        ctx->r13 = 0 | 0;
            goto L_802433BC;
    }
    // 0x802433B0: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x802433B4: b           L_802437DC
    // 0x802433B8: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
        goto L_802437DC;
    // 0x802433B8: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
L_802433BC:
    // 0x802433BC: lw          $t6, 0x2C($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X2C);
    // 0x802433C0: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x802433C4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802433C8: lw          $a1, 0xC0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC0);
    // 0x802433CC: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x802433D0: lui         $at, 0xB00
    ctx->r1 = S32(0XB00 << 16);
    // 0x802433D4: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x802433D8: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x802433DC: lw          $t9, 0x28($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X28);
    // 0x802433E0: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x802433E4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802433E8: lw          $t6, 0x10($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X10);
    // 0x802433EC: addiu       $t2, $a1, 0x8
    ctx->r10 = ADD32(ctx->r5, 0X8);
    // 0x802433F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802433F4: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x802433F8: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x802433FC: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x80243400: lw          $v1, 0x38($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X38);
    // 0x80243404: lw          $a0, 0x20($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X20);
    // 0x80243408: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8024340C: addu        $t9, $v1, $t0
    ctx->r25 = ADD32(ctx->r3, ctx->r8);
    // 0x80243410: sltu        $t1, $a0, $t9
    ctx->r9 = ctx->r4 < ctx->r25 ? 1 : 0;
    // 0x80243414: beq         $t1, $zero, L_80243428
    if (ctx->r9 == 0) {
        // 0x80243418: addiu       $t7, $zero, 0x10
        ctx->r15 = ADD32(0, 0X10);
            goto L_80243428;
    }
    // 0x80243418: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x8024341C: lw          $t1, 0x24($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X24);
    // 0x80243420: sltu        $t6, $zero, $t1
    ctx->r14 = 0 < ctx->r9 ? 1 : 0;
    // 0x80243424: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
L_80243428:
    // 0x80243428: beq         $t1, $zero, L_80243438
    if (ctx->r9 == 0) {
        // 0x8024342C: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_80243438;
    }
    // 0x8024342C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80243430: b           L_80243438
    // 0x80243434: subu        $a1, $a0, $v1
    ctx->r5 = SUB32(ctx->r4, ctx->r3);
        goto L_80243438;
    // 0x80243434: subu        $a1, $a0, $v1
    ctx->r5 = SUB32(ctx->r4, ctx->r3);
L_80243438:
    // 0x80243438: lw          $v1, 0x3C($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X3C);
    // 0x8024343C: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80243440: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x80243444: beq         $v1, $zero, L_80243454
    if (ctx->r3 == 0) {
        // 0x80243448: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80243454;
    }
    // 0x80243448: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8024344C: b           L_80243454
    // 0x80243450: subu        $a2, $t7, $v1
    ctx->r6 = SUB32(ctx->r15, ctx->r3);
        goto L_80243454;
    // 0x80243450: subu        $a2, $t7, $v1
    ctx->r6 = SUB32(ctx->r15, ctx->r3);
L_80243454:
    // 0x80243454: subu        $a0, $a1, $a2
    ctx->r4 = SUB32(ctx->r5, ctx->r6);
    // 0x80243458: bgez        $a0, L_80243464
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8024345C: nop
    
            goto L_80243464;
    }
    // 0x8024345C: nop

    // 0x80243460: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80243464:
    // 0x80243464: beq         $t1, $zero, L_8024366C
    if (ctx->r9 == 0) {
        // 0x80243468: addiu       $fp, $a0, 0xF
        ctx->r30 = ADD32(ctx->r4, 0XF);
            goto L_8024366C;
    }
    // 0x80243468: addiu       $fp, $a0, 0xF
    ctx->r30 = ADD32(ctx->r4, 0XF);
    // 0x8024346C: addiu       $fp, $a0, 0xF
    ctx->r30 = ADD32(ctx->r4, 0XF);
    // 0x80243470: sra         $t8, $fp, 4
    ctx->r24 = S32(SIGNED(ctx->r30) >> 4);
    // 0x80243474: lh          $s5, 0x0($a3)
    ctx->r21 = MEM_H(ctx->r7, 0X0);
    // 0x80243478: lw          $s4, 0x40($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X40);
    // 0x8024347C: sll         $t1, $t8, 3
    ctx->r9 = S32(ctx->r24 << 3);
    // 0x80243480: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80243484: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x80243488: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x8024348C: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    // 0x80243490: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x80243494: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x80243498: or          $fp, $t8, $zero
    ctx->r30 = ctx->r24 | 0;
    // 0x8024349C: jal         0x80243240
    // 0x802434A0: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    func_80243240(rdram, ctx);
        goto after_0;
    // 0x802434A0: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    after_0:
    // 0x802434A4: lw          $v1, 0x3C($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X3C);
    // 0x802434A8: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x802434AC: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x802434B0: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x802434B4: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x802434B8: beq         $v1, $zero, L_802434D4
    if (ctx->r3 == 0) {
        // 0x802434BC: or          $t2, $v0, $zero
        ctx->r10 = ctx->r2 | 0;
            goto L_802434D4;
    }
    // 0x802434BC: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x802434C0: lh          $t9, 0x0($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X0);
    // 0x802434C4: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x802434C8: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x802434CC: b           L_802434E0
    // 0x802434D0: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
        goto L_802434E0;
    // 0x802434D0: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
L_802434D4:
    // 0x802434D4: lh          $t8, 0x0($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X0);
    // 0x802434D8: addiu       $t9, $t8, 0x20
    ctx->r25 = ADD32(ctx->r24, 0X20);
    // 0x802434DC: sh          $t9, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r25;
L_802434E0:
    // 0x802434E0: lw          $v0, 0x1C($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X1C);
    // 0x802434E4: lw          $t7, 0x28($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X28);
    // 0x802434E8: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x802434EC: andi        $t6, $v0, 0xF
    ctx->r14 = ctx->r2 & 0XF;
    // 0x802434F0: sw          $t6, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = ctx->r14;
    // 0x802434F4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x802434F8: srl         $t9, $v0, 4
    ctx->r25 = S32(U32(ctx->r2) >> 4);
    // 0x802434FC: sll         $t6, $t9, 3
    ctx->r14 = S32(ctx->r25 << 3);
    // 0x80243500: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80243504: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x80243508: addiu       $t9, $t7, 0x9
    ctx->r25 = ADD32(ctx->r15, 0X9);
    // 0x8024350C: sw          $t9, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r25;
    // 0x80243510: sw          $v0, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->r2;
    // 0x80243514: beq         $at, $zero, L_8024363C
    if (ctx->r1 == 0) {
        // 0x80243518: lh          $a2, 0x0($a3)
        ctx->r6 = MEM_H(ctx->r7, 0X0);
            goto L_8024363C;
    }
    // 0x80243518: lh          $a2, 0x0($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X0);
    // 0x8024351C: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
L_80243520:
    // 0x80243520: addiu       $t8, $fp, 0x1
    ctx->r24 = ADD32(ctx->r30, 0X1);
    // 0x80243524: sll         $t6, $t8, 5
    ctx->r14 = S32(ctx->r24 << 5);
    // 0x80243528: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
    // 0x8024352C: addu        $a3, $t6, $a2
    ctx->r7 = ADD32(ctx->r14, ctx->r6);
    // 0x80243530: addiu       $at, $zero, -0x20
    ctx->r1 = ADD32(0, -0X20);
    // 0x80243534: and         $t7, $a3, $at
    ctx->r15 = ctx->r7 & ctx->r1;
    // 0x80243538: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8024353C: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x80243540: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x80243544: beq         $v0, $at, L_80243558
    if (ctx->r2 == ctx->r1) {
        // 0x80243548: addu        $a2, $a2, $v1
        ctx->r6 = ADD32(ctx->r6, ctx->r3);
            goto L_80243558;
    }
    // 0x80243548: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8024354C: beq         $v0, $zero, L_80243558
    if (ctx->r2 == 0) {
        // 0x80243550: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_80243558;
    }
    // 0x80243550: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x80243554: sw          $t9, 0x24($s7)
    MEM_W(0X24, ctx->r23) = ctx->r25;
L_80243558:
    // 0x80243558: lw          $t8, 0x20($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X20);
    // 0x8024355C: lw          $t6, 0x1C($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X1C);
    // 0x80243560: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80243564: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x80243568: subu        $v0, $t8, $t6
    ctx->r2 = SUB32(ctx->r24, ctx->r14);
    // 0x8024356C: sltu        $at, $t0, $v0
    ctx->r1 = ctx->r8 < ctx->r2 ? 1 : 0;
    // 0x80243570: beq         $at, $zero, L_80243580
    if (ctx->r1 == 0) {
        // 0x80243574: sll         $s5, $a3, 16
        ctx->r21 = S32(ctx->r7 << 16);
            goto L_80243580;
    }
    // 0x80243574: sll         $s5, $a3, 16
    ctx->r21 = S32(ctx->r7 << 16);
    // 0x80243578: b           L_80243584
    // 0x8024357C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
        goto L_80243584;
    // 0x8024357C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
L_80243580:
    // 0x80243580: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80243584:
    // 0x80243584: lw          $t7, 0x3C($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X3C);
    // 0x80243588: sra         $t8, $s5, 16
    ctx->r24 = S32(SIGNED(ctx->r21) >> 16);
    // 0x8024358C: or          $s5, $t8, $zero
    ctx->r21 = ctx->r24 | 0;
    // 0x80243590: addu        $a0, $a1, $t7
    ctx->r4 = ADD32(ctx->r5, ctx->r15);
    // 0x80243594: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    // 0x80243598: bgez        $a0, L_802435A4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8024359C: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_802435A4;
    }
    // 0x8024359C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802435A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_802435A4:
    // 0x802435A4: lw          $s4, 0x40($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X40);
    // 0x802435A8: addiu       $fp, $a0, 0xF
    ctx->r30 = ADD32(ctx->r4, 0XF);
    // 0x802435AC: sra         $t9, $fp, 4
    ctx->r25 = S32(SIGNED(ctx->r30) >> 4);
    // 0x802435B0: sll         $t1, $t9, 3
    ctx->r9 = S32(ctx->r25 << 3);
    // 0x802435B4: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x802435B8: ori         $t6, $s4, 0x2
    ctx->r14 = ctx->r20 | 0X2;
    // 0x802435BC: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x802435C0: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x802435C4: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x802435C8: or          $fp, $t9, $zero
    ctx->r30 = ctx->r25 | 0;
    // 0x802435CC: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    // 0x802435D0: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    // 0x802435D4: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x802435D8: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x802435DC: jal         0x80243240
    // 0x802435E0: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    func_80243240(rdram, ctx);
        goto after_1;
    // 0x802435E0: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    after_1:
    // 0x802435E4: lw          $t7, 0x3C($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X3C);
    // 0x802435E8: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x802435EC: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x802435F0: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x802435F4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802435F8: addu        $t8, $t9, $a3
    ctx->r24 = ADD32(ctx->r25, ctx->r7);
    // 0x802435FC: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x80243600: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x80243604: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x80243608: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8024360C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80243610: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x80243614: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80243618: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x8024361C: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x80243620: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80243624: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x80243628: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8024362C: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80243630: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80243634: bne         $at, $zero, L_80243520
    if (ctx->r1 != 0) {
        // 0x80243638: addiu       $t2, $v0, 0x8
        ctx->r10 = ADD32(ctx->r2, 0X8);
            goto L_80243520;
    }
    // 0x80243638: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
L_8024363C:
    // 0x8024363C: lw          $t9, 0x3C($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X3C);
    // 0x80243640: lw          $t7, 0x38($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X38);
    // 0x80243644: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x80243648: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x8024364C: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x80243650: lw          $t8, 0x44($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X44);
    // 0x80243654: sw          $t6, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = ctx->r14;
    // 0x80243658: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x8024365C: addu        $t6, $t8, $t1
    ctx->r14 = ADD32(ctx->r24, ctx->r9);
    // 0x80243660: sw          $t9, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->r25;
    // 0x80243664: b           L_802437DC
    // 0x80243668: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
        goto L_802437DC;
    // 0x80243668: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
L_8024366C:
    // 0x8024366C: lw          $v0, 0x28($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X28);
    // 0x80243670: sra         $t7, $fp, 4
    ctx->r15 = S32(SIGNED(ctx->r30) >> 4);
    // 0x80243674: lw          $t9, 0x44($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X44);
    // 0x80243678: sll         $t1, $t7, 3
    ctx->r9 = S32(ctx->r15 << 3);
    // 0x8024367C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80243680: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x80243684: or          $fp, $t7, $zero
    ctx->r30 = ctx->r15 | 0;
    // 0x80243688: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x8024368C: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x80243690: subu        $t6, $t3, $t8
    ctx->r14 = SUB32(ctx->r11, ctx->r24);
    // 0x80243694: subu        $v1, $t6, $t7
    ctx->r3 = SUB32(ctx->r14, ctx->r15);
    // 0x80243698: bgez        $v1, L_802436A4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8024369C: sll         $a1, $fp, 4
        ctx->r5 = S32(ctx->r30 << 4);
            goto L_802436A4;
    }
    // 0x8024369C: sll         $a1, $fp, 4
    ctx->r5 = S32(ctx->r30 << 4);
    // 0x802436A0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802436A4:
    // 0x802436A4: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x802436A8: mflo        $v0
    ctx->r2 = lo;
    // 0x802436AC: sll         $a0, $v0, 4
    ctx->r4 = S32(ctx->r2 << 4);
    // 0x802436B0: addu        $t4, $a1, $a2
    ctx->r12 = ADD32(ctx->r5, ctx->r6);
    // 0x802436B4: slt         $at, $t4, $a0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x802436B8: beq         $at, $zero, L_802436C4
    if (ctx->r1 == 0) {
        // 0x802436BC: or          $s0, $t2, $zero
        ctx->r16 = ctx->r10 | 0;
            goto L_802436C4;
    }
    // 0x802436BC: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x802436C0: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
L_802436C4:
    // 0x802436C4: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x802436C8: subu        $t6, $a0, $t8
    ctx->r14 = SUB32(ctx->r4, ctx->r24);
    // 0x802436CC: slt         $at, $t6, $t0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x802436D0: beq         $at, $zero, L_80243780
    if (ctx->r1 == 0) {
        // 0x802436D4: subu        $a2, $t1, $v1
        ctx->r6 = SUB32(ctx->r9, ctx->r3);
            goto L_80243780;
    }
    // 0x802436D4: subu        $a2, $t1, $v1
    ctx->r6 = SUB32(ctx->r9, ctx->r3);
    // 0x802436D8: lh          $s5, 0x0($a3)
    ctx->r21 = MEM_H(ctx->r7, 0X0);
    // 0x802436DC: lw          $s4, 0x40($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X40);
    // 0x802436E0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802436E4: sw          $t5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r13;
    // 0x802436E8: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    // 0x802436EC: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x802436F0: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    // 0x802436F4: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x802436F8: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x802436FC: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x80243700: subu        $s6, $a1, $a0
    ctx->r22 = SUB32(ctx->r5, ctx->r4);
    // 0x80243704: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80243708: jal         0x80243240
    // 0x8024370C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    func_80243240(rdram, ctx);
        goto after_2;
    // 0x8024370C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_2:
    // 0x80243710: lw          $v1, 0x3C($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X3C);
    // 0x80243714: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x80243718: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x8024371C: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x80243720: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80243724: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80243728: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8024372C: beq         $v1, $zero, L_80243748
    if (ctx->r3 == 0) {
        // 0x80243730: or          $t2, $v0, $zero
        ctx->r10 = ctx->r2 | 0;
            goto L_80243748;
    }
    // 0x80243730: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x80243734: lh          $t7, 0x0($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X0);
    // 0x80243738: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x8024373C: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x80243740: b           L_80243754
    // 0x80243744: sh          $t8, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r24;
        goto L_80243754;
    // 0x80243744: sh          $t8, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r24;
L_80243748:
    // 0x80243748: lh          $t6, 0x0($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X0);
    // 0x8024374C: addiu       $t7, $t6, 0x20
    ctx->r15 = ADD32(ctx->r14, 0X20);
    // 0x80243750: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
L_80243754:
    // 0x80243754: lw          $t9, 0x3C($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X3C);
    // 0x80243758: lw          $t7, 0x38($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X38);
    // 0x8024375C: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x80243760: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x80243764: lw          $t8, 0x44($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X44);
    // 0x80243768: sw          $t6, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = ctx->r14;
    // 0x8024376C: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x80243770: addu        $t6, $t8, $t1
    ctx->r14 = ADD32(ctx->r24, ctx->r9);
    // 0x80243774: sw          $t9, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->r25;
    // 0x80243778: b           L_80243788
    // 0x8024377C: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
        goto L_80243788;
    // 0x8024377C: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
L_80243780:
    // 0x80243780: sw          $zero, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = 0;
    // 0x80243784: sw          $t3, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r11;
L_80243788:
    // 0x80243788: beq         $a0, $zero, L_802437D8
    if (ctx->r4 == 0) {
        // 0x8024378C: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_802437D8;
    }
    // 0x8024378C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x80243790: beq         $t5, $zero, L_802437A8
    if (ctx->r13 == 0) {
        // 0x80243794: sw          $zero, 0x3C($s7)
        MEM_W(0X3C, ctx->r23) = 0;
            goto L_802437A8;
    }
    // 0x80243794: sw          $zero, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = 0;
    // 0x80243798: subu        $v1, $t4, $a0
    ctx->r3 = SUB32(ctx->r12, ctx->r4);
    // 0x8024379C: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x802437A0: b           L_802437AC
    // 0x802437A4: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
        goto L_802437AC;
    // 0x802437A4: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_802437A8:
    // 0x802437A8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802437AC:
    // 0x802437AC: lh          $t9, 0x0($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X0);
    // 0x802437B0: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x802437B4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802437B8: addu        $t8, $t9, $v1
    ctx->r24 = ADD32(ctx->r25, ctx->r3);
    // 0x802437BC: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x802437C0: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x802437C4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x802437C8: sll         $t9, $a0, 1
    ctx->r25 = S32(ctx->r4 << 1);
    // 0x802437CC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802437D0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802437D4: addiu       $t2, $t2, 0x8
    ctx->r10 = ADD32(ctx->r10, 0X8);
L_802437D8:
    // 0x802437D8: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_802437DC:
    // 0x802437DC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x802437E0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802437E4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802437E8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802437EC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802437F0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x802437F4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x802437F8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x802437FC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80243800: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80243804: jr          $ra
    // 0x80243808: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x80243808: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_8022393C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022393C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80223940: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x80223944: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80223948: addiu       $t7, $t7, 0x5110
    ctx->r15 = ADD32(ctx->r15, 0X5110);
    // 0x8022394C: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80223950: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x80223954: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80223958: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x8022395C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80223960: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80223964: sltu        $at, $v0, $t8
    ctx->r1 = ctx->r2 < ctx->r24 ? 1 : 0;
    // 0x80223968: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022396C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80223970: bne         $at, $zero, L_80223980
    if (ctx->r1 != 0) {
        // 0x80223974: sw          $a3, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r7;
            goto L_80223980;
    }
    // 0x80223974: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80223978: b           L_80223B1C
    // 0x8022397C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80223B1C;
    // 0x8022397C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80223980:
    // 0x80223980: bnel        $s1, $zero, L_80223990
    if (ctx->r17 != 0) {
        // 0x80223984: lw          $t9, 0x0($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X0);
            goto L_80223990;
    }
    goto skip_0;
    // 0x80223984: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x80223988: addiu       $s1, $sp, 0x3C
    ctx->r17 = ADD32(ctx->r29, 0X3C);
    // 0x8022398C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
L_80223990:
    // 0x80223990: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80223994: jal         0x8022B5E0
    // 0x80223998: addu        $a0, $t9, $v0
    ctx->r4 = ADD32(ctx->r25, ctx->r2);
    func_8022B5E0(rdram, ctx);
        goto after_0;
    // 0x80223998: addu        $a0, $t9, $v0
    ctx->r4 = ADD32(ctx->r25, ctx->r2);
    after_0:
    // 0x8022399C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x802239A0: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x802239A4: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x802239A8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802239AC: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x802239B0: jal         0x8022B5E0
    // 0x802239B4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_8022B5E0(rdram, ctx);
        goto after_1;
    // 0x802239B4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x802239B8: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x802239BC: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x802239C0: lw          $t5, 0xC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC);
    // 0x802239C4: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x802239C8: lui         $at, 0x475A
    ctx->r1 = S32(0X475A << 16);
    // 0x802239CC: ori         $at, $at, 0x4950
    ctx->r1 = ctx->r1 | 0X4950;
    // 0x802239D0: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x802239D4: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x802239D8: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x802239DC: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x802239E0: bnel        $t8, $at, L_80223AB0
    if (ctx->r24 != ctx->r1) {
        // 0x802239E4: lw          $t6, 0x0($a2)
        ctx->r14 = MEM_W(ctx->r6, 0X0);
            goto L_80223AB0;
    }
    goto skip_1;
    // 0x802239E4: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    skip_1:
    // 0x802239E8: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x802239EC: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x802239F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802239F4: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x802239F8: jal         0x8022B5E0
    // 0x802239FC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_8022B5E0(rdram, ctx);
        goto after_2;
    // 0x802239FC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_2:
    // 0x80223A00: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80223A04: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80223A08: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x80223A0C: bnel        $t2, $zero, L_80223B1C
    if (ctx->r10 != 0) {
        // 0x80223A10: lw          $v0, 0x40($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X40);
            goto L_80223B1C;
    }
    goto skip_2;
    // 0x80223A10: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    skip_2:
    // 0x80223A14: jal         0x8022BB00
    // 0x80223A18: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    func_8022BB00(rdram, ctx);
        goto after_3;
    // 0x80223A18: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_3:
    // 0x80223A1C: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x80223A20: lhu         $t3, -0x178C($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X178C);
    // 0x80223A24: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80223A28: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x80223A2C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80223A30: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80223A34: addu        $a3, $a3, $t4
    ctx->r7 = ADD32(ctx->r7, ctx->r12);
    // 0x80223A38: lw          $a0, 0x4380($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X4380);
    // 0x80223A3C: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x80223A40: lw          $a1, 0x0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X0);
    // 0x80223A44: jal         0x8022B460
    // 0x80223A48: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_8022B460(rdram, ctx);
        goto after_4;
    // 0x80223A48: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_4:
    // 0x80223A4C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80223A50: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80223A54: jal         0x80234DF0
    // 0x80223A58: addiu       $a0, $a3, 0x8
    ctx->r4 = ADD32(ctx->r7, 0X8);
    func_80234DF0(rdram, ctx);
        goto after_5;
    // 0x80223A58: addiu       $a0, $a3, 0x8
    ctx->r4 = ADD32(ctx->r7, 0X8);
    after_5:
    // 0x80223A5C: jal         0x8022BA94
    // 0x80223A60: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8022BA94(rdram, ctx);
        goto after_6;
    // 0x80223A60: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x80223A64: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80223A68: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80223A6C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80223A70: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80223A74: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x80223A78: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80223A7C: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x80223A80: jal         0x8022B5E0
    // 0x80223A84: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_8022B5E0(rdram, ctx);
        goto after_7;
    // 0x80223A84: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_7:
    // 0x80223A88: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x80223A8C: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x80223A90: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x80223A94: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80223A98: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80223A9C: sw          $t4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r12;
    // 0x80223AA0: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80223AA4: b           L_80223B18
    // 0x80223AA8: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
        goto L_80223B18;
    // 0x80223AA8: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x80223AAC: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
L_80223AB0:
    // 0x80223AB0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80223AB4: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80223AB8: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80223ABC: sltu        $t8, $zero, $t7
    ctx->r24 = 0 < ctx->r15 ? 1 : 0;
    // 0x80223AC0: bne         $t8, $zero, L_80223B04
    if (ctx->r24 != 0) {
        // 0x80223AC4: andi        $t0, $t9, 0x1
        ctx->r8 = ctx->r25 & 0X1;
            goto L_80223B04;
    }
    // 0x80223AC4: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80223AC8: beql        $t0, $zero, L_80223B08
    if (ctx->r8 == 0) {
        // 0x80223ACC: lw          $t4, 0xC($s0)
        ctx->r12 = MEM_W(ctx->r16, 0XC);
            goto L_80223B08;
    }
    goto skip_3;
    // 0x80223ACC: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    skip_3:
    // 0x80223AD0: jal         0x8022BB00
    // 0x80223AD4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_8022BB00(rdram, ctx);
        goto after_8;
    // 0x80223AD4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_8:
    // 0x80223AD8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80223ADC: jal         0x8022BA94
    // 0x80223AE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8022BA94(rdram, ctx);
        goto after_9;
    // 0x80223AE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x80223AE4: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80223AE8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80223AEC: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x80223AF0: jal         0x8022B460
    // 0x80223AF4: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    func_8022B460(rdram, ctx);
        goto after_10;
    // 0x80223AF4: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    after_10:
    // 0x80223AF8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80223AFC: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80223B00: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
L_80223B04:
    // 0x80223B04: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
L_80223B08:
    // 0x80223B08: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x80223B0C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80223B10: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80223B14: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
L_80223B18:
    // 0x80223B18: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
L_80223B1C:
    // 0x80223B1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80223B20: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80223B24: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80223B28: jr          $ra
    // 0x80223B2C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80223B2C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80229CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80229CD4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80229CD8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80229CDC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80229CE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229CE4: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x80229CE8: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x80229CEC: bc1tl       L_8022A0C4
    if (c1cs) {
        // 0x80229CF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022A0C4;
    }
    goto skip_0;
    // 0x80229CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80229CF4: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x80229CF8: jal         0x8022AA60
    // 0x80229CFC: swc1        $f12, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f12.u32l;
    func_8022AA60(rdram, ctx);
        goto after_0;
    // 0x80229CFC: swc1        $f12, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x80229D00: lwc1        $f12, 0x74($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80229D04: jal         0x8022AC20
    // 0x80229D08: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    func_8022AC20(rdram, ctx);
        goto after_1;
    // 0x80229D08: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80229D0C: lbu         $v0, 0x7B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X7B);
    // 0x80229D10: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x80229D14: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x80229D18: beq         $v0, $at, L_80229D3C
    if (ctx->r2 == ctx->r1) {
        // 0x80229D1C: lwc1        $f2, 0x6C($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_80229D3C;
    }
    // 0x80229D1C: lwc1        $f2, 0x6C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80229D20: addiu       $at, $zero, 0x79
    ctx->r1 = ADD32(0, 0X79);
    // 0x80229D24: beq         $v0, $at, L_80229E60
    if (ctx->r2 == ctx->r1) {
        // 0x80229D28: addiu       $at, $zero, 0x7A
        ctx->r1 = ADD32(0, 0X7A);
            goto L_80229E60;
    }
    // 0x80229D28: addiu       $at, $zero, 0x7A
    ctx->r1 = ADD32(0, 0X7A);
    // 0x80229D2C: beql        $v0, $at, L_80229F88
    if (ctx->r2 == ctx->r1) {
        // 0x80229D30: lwc1        $f6, 0x10($a0)
        ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
            goto L_80229F88;
    }
    goto skip_1;
    // 0x80229D30: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
    skip_1:
    // 0x80229D34: b           L_8022A0A8
    // 0x80229D38: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
        goto L_8022A0A8;
    // 0x80229D38: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
L_80229D3C:
    // 0x80229D3C: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80229D40: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80229D44: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80229D48: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x80229D4C: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80229D50: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80229D54: lwc1        $f16, 0xC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80229D58: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80229D5C: lwc1        $f18, 0x20($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80229D60: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80229D64: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x80229D68: nop

    // 0x80229D6C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80229D70: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80229D74: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x80229D78: lwc1        $f16, 0x24($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80229D7C: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80229D80: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x80229D84: nop

    // 0x80229D88: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80229D8C: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80229D90: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x80229D94: lwc1        $f10, 0x28($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X28);
    // 0x80229D98: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x80229D9C: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80229DA0: nop

    // 0x80229DA4: mul.s       $f18, $f0, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80229DA8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80229DAC: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x80229DB0: lwc1        $f8, 0x2C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x80229DB4: lwc1        $f6, 0x1C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80229DB8: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80229DBC: nop

    // 0x80229DC0: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80229DC4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80229DC8: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x80229DCC: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80229DD0: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80229DD4: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80229DD8: nop

    // 0x80229DDC: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80229DE0: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80229DE4: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x80229DE8: lwc1        $f18, 0x24($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80229DEC: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80229DF0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80229DF4: nop

    // 0x80229DF8: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80229DFC: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80229E00: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x80229E04: lwc1        $f16, 0x28($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X28);
    // 0x80229E08: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x80229E0C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80229E10: nop

    // 0x80229E14: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80229E18: sub.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80229E1C: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x80229E20: lwc1        $f10, 0x2C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x80229E24: lwc1        $f6, 0x1C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80229E28: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80229E2C: nop

    // 0x80229E30: mul.s       $f18, $f6, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80229E34: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80229E38: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x80229E3C: lwc1        $f8, 0x30($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X30);
    // 0x80229E40: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x80229E44: lwc1        $f10, 0x34($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X34);
    // 0x80229E48: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x80229E4C: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x80229E50: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x80229E54: lwc1        $f16, 0x3C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x80229E58: b           L_8022A0B8
    // 0x80229E5C: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
        goto L_8022A0B8;
    // 0x80229E5C: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
L_80229E60:
    // 0x80229E60: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80229E64: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80229E68: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80229E6C: nop

    // 0x80229E70: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80229E74: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80229E78: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80229E7C: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80229E80: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80229E84: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80229E88: nop

    // 0x80229E8C: mul.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80229E90: sub.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80229E94: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80229E98: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80229E9C: lwc1        $f8, 0x28($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X28);
    // 0x80229EA0: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80229EA4: nop

    // 0x80229EA8: mul.s       $f18, $f8, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80229EAC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80229EB0: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x80229EB4: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80229EB8: lwc1        $f8, 0x2C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x80229EBC: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80229EC0: nop

    // 0x80229EC4: mul.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80229EC8: sub.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x80229ECC: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80229ED0: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80229ED4: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x80229ED8: lwc1        $f10, 0x14($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80229EDC: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x80229EE0: lwc1        $f8, 0x18($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X18);
    // 0x80229EE4: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x80229EE8: lwc1        $f6, 0x1C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80229EEC: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x80229EF0: lwc1        $f16, 0x20($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80229EF4: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80229EF8: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80229EFC: nop

    // 0x80229F00: mul.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80229F04: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x80229F08: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x80229F0C: lwc1        $f6, 0x24($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80229F10: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80229F14: mul.s       $f16, $f6, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80229F18: nop

    // 0x80229F1C: mul.s       $f18, $f2, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80229F20: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80229F24: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x80229F28: lwc1        $f8, 0x28($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X28);
    // 0x80229F2C: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80229F30: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80229F34: nop

    // 0x80229F38: mul.s       $f16, $f2, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80229F3C: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80229F40: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x80229F44: lwc1        $f10, 0x2C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x80229F48: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80229F4C: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80229F50: nop

    // 0x80229F54: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80229F58: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80229F5C: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x80229F60: lwc1        $f18, 0x30($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X30);
    // 0x80229F64: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x80229F68: lwc1        $f10, 0x34($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X34);
    // 0x80229F6C: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x80229F70: lwc1        $f4, 0x38($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X38);
    // 0x80229F74: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x80229F78: lwc1        $f8, 0x3C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x80229F7C: b           L_8022A0B8
    // 0x80229F80: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
        goto L_8022A0B8;
    // 0x80229F80: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x80229F84: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
L_80229F88:
    // 0x80229F88: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80229F8C: mul.s       $f16, $f6, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80229F90: nop

    // 0x80229F94: mul.s       $f10, $f0, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80229F98: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80229F9C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x80229FA0: lwc1        $f8, 0x14($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80229FA4: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80229FA8: mul.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80229FAC: nop

    // 0x80229FB0: mul.s       $f16, $f0, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80229FB4: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80229FB8: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80229FBC: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x80229FC0: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80229FC4: mul.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80229FC8: nop

    // 0x80229FCC: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80229FD0: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80229FD4: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x80229FD8: lwc1        $f10, 0x1C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80229FDC: lwc1        $f18, 0xC($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80229FE0: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80229FE4: nop

    // 0x80229FE8: mul.s       $f8, $f0, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80229FEC: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80229FF0: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80229FF4: lwc1        $f16, 0x10($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80229FF8: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80229FFC: mul.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8022A000: nop

    // 0x8022A004: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8022A008: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8022A00C: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x8022A010: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8022A014: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8022A018: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8022A01C: nop

    // 0x8022A020: mul.s       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8022A024: sub.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x8022A028: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x8022A02C: lwc1        $f8, 0x18($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8022A030: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8022A034: mul.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8022A038: nop

    // 0x8022A03C: mul.s       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8022A040: sub.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x8022A044: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x8022A048: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8022A04C: lwc1        $f18, 0xC($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8022A050: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8022A054: nop

    // 0x8022A058: mul.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8022A05C: sub.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8022A060: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x8022A064: lwc1        $f10, 0x20($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8022A068: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x8022A06C: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8022A070: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x8022A074: lwc1        $f18, 0x28($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8022A078: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x8022A07C: lwc1        $f8, 0x2C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x8022A080: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x8022A084: lwc1        $f6, 0x30($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X30);
    // 0x8022A088: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x8022A08C: lwc1        $f16, 0x34($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X34);
    // 0x8022A090: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x8022A094: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x8022A098: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x8022A09C: lwc1        $f4, 0x3C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x8022A0A0: b           L_8022A0B8
    // 0x8022A0A4: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
        goto L_8022A0B8;
    // 0x8022A0A4: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
L_8022A0A8:
    // 0x8022A0A8: jal         0x80231A24
    // 0x8022A0AC: addiu       $a0, $a0, 0x3ED4
    ctx->r4 = ADD32(ctx->r4, 0X3ED4);
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x8022A0AC: addiu       $a0, $a0, 0x3ED4
    ctx->r4 = ADD32(ctx->r4, 0X3ED4);
    after_2:
    // 0x8022A0B0: b           L_8022A0C4
    // 0x8022A0B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022A0C4;
    // 0x8022A0B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022A0B8:
    // 0x8022A0B8: jal         0x80228DE0
    // 0x8022A0BC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_80228DE0(rdram, ctx);
        goto after_3;
    // 0x8022A0BC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x8022A0C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022A0C4:
    // 0x8022A0C4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8022A0C8: jr          $ra
    // 0x8022A0CC: nop

    return;
    // 0x8022A0CC: nop

;}
RECOMP_FUNC void func_8023F37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F37C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023F380: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023F384: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8023F388: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8023F38C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8023F390: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023F394: jal         0x8023FC40
    // 0x8023F398: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    func_8023FC40(rdram, ctx);
        goto after_0;
    // 0x8023F398: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_0:
    // 0x8023F39C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8023F3A0: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8023F3A4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8023F3A8: lw          $t0, 0x0($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X0);
    // 0x8023F3AC: bne         $t0, $zero, L_8023F3C4
    if (ctx->r8 != 0) {
        // 0x8023F3B0: or          $a0, $t0, $zero
        ctx->r4 = ctx->r8 | 0;
            goto L_8023F3C4;
    }
    // 0x8023F3B0: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8023F3B4: jal         0x8023FC40
    // 0x8023F3B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8023FC40(rdram, ctx);
        goto after_1;
    // 0x8023F3B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8023F3BC: b           L_8023F494
    // 0x8023F3C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8023F494;
    // 0x8023F3C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023F3C4:
    // 0x8023F3C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8023F3C8: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x8023F3CC: jal         0x80237120
    // 0x8023F3D0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_80237120(rdram, ctx);
        goto after_2;
    // 0x8023F3D0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_2:
    // 0x8023F3D4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8023F3D8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8023F3DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8023F3E0: jal         0x80249170
    // 0x8023F3E4: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    func_80249170(rdram, ctx);
        goto after_3;
    // 0x8023F3E4: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    after_3:
    // 0x8023F3E8: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8023F3EC: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x8023F3F0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8023F3F4: bne         $a3, $at, L_8023F404
    if (ctx->r7 != ctx->r1) {
        // 0x8023F3F8: lw          $t0, 0x2C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X2C);
            goto L_8023F404;
    }
    // 0x8023F3F8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8023F3FC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8023F400: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
L_8023F404:
    // 0x8023F404: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8023F408: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8023F40C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8023F410: beq         $v0, $at, L_8023F488
    if (ctx->r2 == ctx->r1) {
        // 0x8023F414: addiu       $a1, $v0, 0x8
        ctx->r5 = ADD32(ctx->r2, 0X8);
            goto L_8023F488;
    }
    // 0x8023F414: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
L_8023F418:
    // 0x8023F418: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8023F41C: bnel        $v0, $zero, L_8023F44C
    if (ctx->r2 != 0) {
        // 0x8023F420: lw          $v1, 0x8($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X8);
            goto L_8023F44C;
    }
    goto skip_0;
    // 0x8023F420: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x8023F424: beql        $t8, $zero, L_8023F438
    if (ctx->r24 == 0) {
        // 0x8023F428: sw          $a3, 0x8($t0)
        MEM_W(0X8, ctx->r8) = ctx->r7;
            goto L_8023F438;
    }
    goto skip_1;
    // 0x8023F428: sw          $a3, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r7;
    skip_1:
    // 0x8023F42C: b           L_8023F438
    // 0x8023F430: sw          $zero, 0x8($t0)
    MEM_W(0X8, ctx->r8) = 0;
        goto L_8023F438;
    // 0x8023F430: sw          $zero, 0x8($t0)
    MEM_W(0X8, ctx->r8) = 0;
    // 0x8023F434: sw          $a3, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r7;
L_8023F438:
    // 0x8023F438: jal         0x80237150
    // 0x8023F43C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80237150(rdram, ctx);
        goto after_4;
    // 0x8023F43C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_4:
    // 0x8023F440: b           L_8023F488
    // 0x8023F444: nop

        goto L_8023F488;
    // 0x8023F444: nop

    // 0x8023F448: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
L_8023F44C:
    // 0x8023F44C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023F450: slt         $at, $a3, $v1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023F454: beql        $at, $zero, L_8023F480
    if (ctx->r1 == 0) {
        // 0x8023F458: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8023F480;
    }
    goto skip_2;
    // 0x8023F458: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    skip_2:
    // 0x8023F45C: sw          $a3, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r7;
    // 0x8023F460: lw          $t9, 0x8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X8);
    // 0x8023F464: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8023F468: subu        $t1, $t9, $a3
    ctx->r9 = SUB32(ctx->r25, ctx->r7);
    // 0x8023F46C: jal         0x80237150
    // 0x8023F470: sw          $t1, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r9;
    func_80237150(rdram, ctx);
        goto after_5;
    // 0x8023F470: sw          $t1, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r9;
    after_5:
    // 0x8023F474: b           L_8023F488
    // 0x8023F478: nop

        goto L_8023F488;
    // 0x8023F478: nop

    // 0x8023F47C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8023F480:
    // 0x8023F480: bne         $v0, $zero, L_8023F418
    if (ctx->r2 != 0) {
        // 0x8023F484: subu        $a3, $a3, $v1
        ctx->r7 = SUB32(ctx->r7, ctx->r3);
            goto L_8023F418;
    }
    // 0x8023F484: subu        $a3, $a3, $v1
    ctx->r7 = SUB32(ctx->r7, ctx->r3);
L_8023F488:
    // 0x8023F488: jal         0x8023FC40
    // 0x8023F48C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8023FC40(rdram, ctx);
        goto after_6;
    // 0x8023F48C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_6:
    // 0x8023F490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023F494:
    // 0x8023F494: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8023F498: jr          $ra
    // 0x8023F49C: nop

    return;
    // 0x8023F49C: nop

;}
RECOMP_FUNC void func_80237360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237360: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80237364: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80237368: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8023736C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80237370: jal         0x80241760
    // 0x80237374: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x80237374: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80237378: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023737C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80237380: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80237384: lhu         $s1, 0x10($t6)
    ctx->r17 = MEM_HU(ctx->r14, 0X10);
    // 0x80237388: beq         $s1, $at, L_802373BC
    if (ctx->r17 == ctx->r1) {
        // 0x8023738C: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_802373BC;
    }
    // 0x8023738C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80237390: bne         $s1, $at, L_8023743C
    if (ctx->r17 != ctx->r1) {
        // 0x80237394: nop
    
            goto L_8023743C;
    }
    // 0x80237394: nop

    // 0x80237398: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8023739C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802373A0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802373A4: sh          $t7, 0x10($t8)
    MEM_H(0X10, ctx->r24) = ctx->r15;
    // 0x802373A8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802373AC: jal         0x80241EFC
    // 0x802373B0: addiu       $a0, $a0, 0x16D8
    ctx->r4 = ADD32(ctx->r4, 0X16D8);
    func_80241EFC(rdram, ctx);
        goto after_1;
    // 0x802373B0: addiu       $a0, $a0, 0x16D8
    ctx->r4 = ADD32(ctx->r4, 0X16D8);
    after_1:
    // 0x802373B4: b           L_8023743C
    // 0x802373B8: nop

        goto L_8023743C;
    // 0x802373B8: nop

L_802373BC:
    // 0x802373BC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x802373C0: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x802373C4: beq         $t0, $zero, L_802373DC
    if (ctx->r8 == 0) {
        // 0x802373C8: nop
    
            goto L_802373DC;
    }
    // 0x802373C8: nop

    // 0x802373CC: lui         $t1, 0x8025
    ctx->r9 = S32(0X8025 << 16);
    // 0x802373D0: addiu       $t1, $t1, 0x16D8
    ctx->r9 = ADD32(ctx->r9, 0X16D8);
    // 0x802373D4: bne         $t0, $t1, L_80237400
    if (ctx->r8 != ctx->r9) {
        // 0x802373D8: nop
    
            goto L_80237400;
    }
    // 0x802373D8: nop

L_802373DC:
    // 0x802373DC: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x802373E0: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x802373E4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802373E8: sh          $t2, 0x10($t3)
    MEM_H(0X10, ctx->r11) = ctx->r10;
    // 0x802373EC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802373F0: jal         0x80241EFC
    // 0x802373F4: addiu       $a0, $a0, 0x16D8
    ctx->r4 = ADD32(ctx->r4, 0X16D8);
    func_80241EFC(rdram, ctx);
        goto after_2;
    // 0x802373F4: addiu       $a0, $a0, 0x16D8
    ctx->r4 = ADD32(ctx->r4, 0X16D8);
    after_2:
    // 0x802373F8: b           L_8023743C
    // 0x802373FC: nop

        goto L_8023743C;
    // 0x802373FC: nop

L_80237400:
    // 0x80237400: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80237404: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x80237408: sh          $t4, 0x10($t5)
    MEM_H(0X10, ctx->r13) = ctx->r12;
    // 0x8023740C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80237410: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    // 0x80237414: jal         0x80241EFC
    // 0x80237418: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80241EFC(rdram, ctx);
        goto after_3;
    // 0x80237418: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_3:
    // 0x8023741C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80237420: jal         0x80241F44
    // 0x80237424: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    func_80241F44(rdram, ctx);
        goto after_4;
    // 0x80237424: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    after_4:
    // 0x80237428: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8023742C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80237430: addiu       $a0, $a0, 0x16D8
    ctx->r4 = ADD32(ctx->r4, 0X16D8);
    // 0x80237434: jal         0x80241EFC
    // 0x80237438: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80241EFC(rdram, ctx);
        goto after_5;
    // 0x80237438: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
L_8023743C:
    // 0x8023743C: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x80237440: lw          $t8, 0x16E0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X16E0);
    // 0x80237444: bne         $t8, $zero, L_8023745C
    if (ctx->r24 != 0) {
        // 0x80237448: nop
    
            goto L_8023745C;
    }
    // 0x80237448: nop

    // 0x8023744C: jal         0x80241F54
    // 0x80237450: nop

    func_80241F54(rdram, ctx);
        goto after_6;
    // 0x80237450: nop

    after_6:
    // 0x80237454: b           L_80237494
    // 0x80237458: nop

        goto L_80237494;
    // 0x80237458: nop

L_8023745C:
    // 0x8023745C: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x80237460: lui         $t1, 0x8025
    ctx->r9 = S32(0X8025 << 16);
    // 0x80237464: lw          $t1, 0x16D8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X16D8);
    // 0x80237468: lw          $t9, 0x16E0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X16E0);
    // 0x8023746C: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x80237470: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x80237474: slt         $at, $t0, $t2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80237478: beq         $at, $zero, L_80237494
    if (ctx->r1 == 0) {
        // 0x8023747C: nop
    
            goto L_80237494;
    }
    // 0x8023747C: nop

    // 0x80237480: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80237484: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80237488: sh          $t3, 0x10($t9)
    MEM_H(0X10, ctx->r25) = ctx->r11;
    // 0x8023748C: jal         0x80241DFC
    // 0x80237490: addiu       $a0, $a0, 0x16D8
    ctx->r4 = ADD32(ctx->r4, 0X16D8);
    func_80241DFC(rdram, ctx);
        goto after_7;
    // 0x80237490: addiu       $a0, $a0, 0x16D8
    ctx->r4 = ADD32(ctx->r4, 0X16D8);
    after_7:
L_80237494:
    // 0x80237494: jal         0x80241780
    // 0x80237498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80241780(rdram, ctx);
        goto after_8;
    // 0x80237498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8023749C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802374A0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802374A4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802374A8: jr          $ra
    // 0x802374AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802374AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80244C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80244C38: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80244C3C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80244C40: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80244C44: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80244C48: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80244C4C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80244C50: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80244C54: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80244C58: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80244C5C: lbu         $t6, 0x65($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X65);
    // 0x80244C60: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80244C64: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x80244C68: beq         $t6, $zero, L_80244C88
    if (ctx->r14 == 0) {
        // 0x80244C6C: or          $s6, $a1, $zero
        ctx->r22 = ctx->r5 | 0;
            goto L_80244C88;
    }
    // 0x80244C6C: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x80244C70: jal         0x802456A0
    // 0x80244C74: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    func_802456A0(rdram, ctx);
        goto after_0;
    // 0x80244C74: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    after_0:
    // 0x80244C78: beq         $v0, $zero, L_80244C8C
    if (ctx->r2 == 0) {
        // 0x80244C7C: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_80244C8C;
    }
    // 0x80244C7C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80244C80: b           L_80244F60
    // 0x80244C84: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F60;
    // 0x80244C84: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244C88:
    // 0x80244C88: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_80244C8C:
    // 0x80244C8C: jal         0x80238B80
    // 0x80244C90: sw          $t7, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r15;
    func_80238B80(rdram, ctx);
        goto after_1;
    // 0x80244C90: sw          $t7, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r15;
    after_1:
    // 0x80244C94: sw          $v0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r2;
    // 0x80244C98: lw          $t9, 0xC($s6)
    ctx->r25 = MEM_W(ctx->r22, 0XC);
    // 0x80244C9C: lw          $t8, 0x8($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X8);
    // 0x80244CA0: sw          $t9, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r25;
    // 0x80244CA4: sw          $t8, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r24;
    // 0x80244CA8: lw          $t1, 0x14($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X14);
    // 0x80244CAC: lw          $t0, 0x10($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X10);
    // 0x80244CB0: addiu       $s1, $sp, 0x7C
    ctx->r17 = ADD32(ctx->r29, 0X7C);
    // 0x80244CB4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80244CB8: or          $s5, $s1, $zero
    ctx->r21 = ctx->r17 | 0;
    // 0x80244CBC: addiu       $s0, $sp, 0x9C
    ctx->r16 = ADD32(ctx->r29, 0X9C);
    // 0x80244CC0: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x80244CC4: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
L_80244CC8:
    // 0x80244CC8: sb          $s3, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r19;
    // 0x80244CCC: jal         0x802456A0
    // 0x80244CD0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_802456A0(rdram, ctx);
        goto after_2;
    // 0x80244CD0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x80244CD4: beq         $v0, $zero, L_80244CE4
    if (ctx->r2 == 0) {
        // 0x80244CD8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80244CE4;
    }
    // 0x80244CD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80244CDC: b           L_80244F60
    // 0x80244CE0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F60;
    // 0x80244CE0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244CE4:
    // 0x80244CE4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80244CE8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80244CEC: jal         0x80245710
    // 0x80244CF0: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    func_80245710(rdram, ctx);
        goto after_3;
    // 0x80244CF0: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_3:
    // 0x80244CF4: beq         $v0, $zero, L_80244D04
    if (ctx->r2 == 0) {
        // 0x80244CF8: ori         $t3, $s3, 0x80
        ctx->r11 = ctx->r19 | 0X80;
            goto L_80244D04;
    }
    // 0x80244CF8: ori         $t3, $s3, 0x80
    ctx->r11 = ctx->r19 | 0X80;
    // 0x80244CFC: b           L_80244F60
    // 0x80244D00: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F60;
    // 0x80244D00: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244D04:
    // 0x80244D04: sb          $t3, 0x7C($sp)
    MEM_B(0X7C, ctx->r29) = ctx->r11;
    // 0x80244D08: addiu       $v0, $sp, 0x7D
    ctx->r2 = ADD32(ctx->r29, 0X7D);
L_80244D0C:
    // 0x80244D0C: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x80244D10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244D14: sltu        $at, $v0, $s0
    ctx->r1 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x80244D18: nor         $t5, $t4, $zero
    ctx->r13 = ~(ctx->r12 | 0);
    // 0x80244D1C: bne         $at, $zero, L_80244D0C
    if (ctx->r1 != 0) {
        // 0x80244D20: sb          $t5, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r13;
            goto L_80244D0C;
    }
    // 0x80244D20: sb          $t5, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r13;
    // 0x80244D24: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80244D28: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80244D2C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80244D30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80244D34: jal         0x80246660
    // 0x80244D38: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    func_80246660(rdram, ctx);
        goto after_4;
    // 0x80244D38: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_4:
    // 0x80244D3C: beq         $v0, $zero, L_80244D4C
    if (ctx->r2 == 0) {
        // 0x80244D40: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80244D4C;
    }
    // 0x80244D40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80244D44: b           L_80244F60
    // 0x80244D48: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F60;
    // 0x80244D48: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244D4C:
    // 0x80244D4C: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80244D50: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80244D54: jal         0x80245710
    // 0x80244D58: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    func_80245710(rdram, ctx);
        goto after_5;
    // 0x80244D58: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    after_5:
    // 0x80244D5C: beq         $v0, $zero, L_80244D6C
    if (ctx->r2 == 0) {
        // 0x80244D60: addiu       $v1, $sp, 0x5C
        ctx->r3 = ADD32(ctx->r29, 0X5C);
            goto L_80244D6C;
    }
    // 0x80244D60: addiu       $v1, $sp, 0x5C
    ctx->r3 = ADD32(ctx->r29, 0X5C);
    // 0x80244D64: b           L_80244F60
    // 0x80244D68: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F60;
    // 0x80244D68: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244D6C:
    // 0x80244D6C: addiu       $v0, $sp, 0x7C
    ctx->r2 = ADD32(ctx->r29, 0X7C);
L_80244D70:
    // 0x80244D70: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x80244D74: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x80244D78: nop

    // 0x80244D7C: bne         $t6, $t7, L_80244D98
    if (ctx->r14 != ctx->r15) {
        // 0x80244D80: addiu       $t8, $sp, 0x7C
        ctx->r24 = ADD32(ctx->r29, 0X7C);
            goto L_80244D98;
    }
    // 0x80244D80: addiu       $t8, $sp, 0x7C
    ctx->r24 = ADD32(ctx->r29, 0X7C);
    // 0x80244D84: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80244D88: sltu        $at, $v1, $s1
    ctx->r1 = ctx->r3 < ctx->r17 ? 1 : 0;
    // 0x80244D8C: bne         $at, $zero, L_80244D70
    if (ctx->r1 != 0) {
        // 0x80244D90: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80244D70;
    }
    // 0x80244D90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244D94: addiu       $t8, $sp, 0x7C
    ctx->r24 = ADD32(ctx->r29, 0X7C);
L_80244D98:
    // 0x80244D98: bne         $v1, $t8, L_80244E00
    if (ctx->r3 != ctx->r24) {
        // 0x80244D9C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80244E00;
    }
    // 0x80244D9C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80244DA0: blez        $s3, L_80244DF0
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80244DA4: nop
    
            goto L_80244DF0;
    }
    // 0x80244DA4: nop

    // 0x80244DA8: jal         0x802456A0
    // 0x80244DAC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    func_802456A0(rdram, ctx);
        goto after_6;
    // 0x80244DAC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_6:
    // 0x80244DB0: beq         $v0, $zero, L_80244DC0
    if (ctx->r2 == 0) {
        // 0x80244DB4: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80244DC0;
    }
    // 0x80244DB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80244DB8: b           L_80244F60
    // 0x80244DBC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F60;
    // 0x80244DBC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244DC0:
    // 0x80244DC0: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80244DC4: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80244DC8: jal         0x80245710
    // 0x80244DCC: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    func_80245710(rdram, ctx);
        goto after_7;
    // 0x80244DCC: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_7:
    // 0x80244DD0: beq         $v0, $zero, L_80244DE4
    if (ctx->r2 == 0) {
        // 0x80244DD4: lbu         $t9, 0x7C($sp)
        ctx->r25 = MEM_BU(ctx->r29, 0X7C);
            goto L_80244DE4;
    }
    // 0x80244DD4: lbu         $t9, 0x7C($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X7C);
    // 0x80244DD8: b           L_80244F60
    // 0x80244DDC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F60;
    // 0x80244DDC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80244DE0: lbu         $t9, 0x7C($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X7C);
L_80244DE4:
    // 0x80244DE4: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x80244DE8: bne         $t9, $at, L_80244E00
    if (ctx->r25 != ctx->r1) {
        // 0x80244DEC: nop
    
            goto L_80244E00;
    }
    // 0x80244DEC: nop

L_80244DF0:
    // 0x80244DF0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80244DF4: slti        $at, $s3, 0x3E
    ctx->r1 = SIGNED(ctx->r19) < 0X3E ? 1 : 0;
    // 0x80244DF8: bne         $at, $zero, L_80244CC8
    if (ctx->r1 != 0) {
        // 0x80244DFC: nop
    
            goto L_80244CC8;
    }
    // 0x80244DFC: nop

L_80244E00:
    // 0x80244E00: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    // 0x80244E04: jal         0x802456A0
    // 0x80244E08: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_802456A0(rdram, ctx);
        goto after_8;
    // 0x80244E08: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_8:
    // 0x80244E0C: beq         $v0, $zero, L_80244E1C
    if (ctx->r2 == 0) {
        // 0x80244E10: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_80244E1C;
    }
    // 0x80244E10: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80244E14: b           L_80244F60
    // 0x80244E18: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F60;
    // 0x80244E18: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244E1C:
    // 0x80244E1C: blez        $s3, L_80244E2C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80244E20: addiu       $a1, $s4, 0x1C
        ctx->r5 = ADD32(ctx->r20, 0X1C);
            goto L_80244E2C;
    }
    // 0x80244E20: addiu       $a1, $s4, 0x1C
    ctx->r5 = ADD32(ctx->r20, 0X1C);
    // 0x80244E24: b           L_80244E30
    // 0x80244E28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80244E30;
    // 0x80244E28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80244E2C:
    // 0x80244E2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80244E30:
    // 0x80244E30: lhu         $t0, 0x18($s6)
    ctx->r8 = MEM_HU(ctx->r22, 0X18);
    // 0x80244E34: sb          $s3, 0x1A($s4)
    MEM_B(0X1A, ctx->r20) = ctx->r19;
    // 0x80244E38: andi        $t1, $t0, 0xFFFE
    ctx->r9 = ctx->r8 & 0XFFFE;
    // 0x80244E3C: or          $t2, $t1, $v0
    ctx->r10 = ctx->r9 | ctx->r2;
    // 0x80244E40: sh          $t2, 0x18($s4)
    MEM_H(0X18, ctx->r20) = ctx->r10;
    // 0x80244E44: lbu         $t3, 0x1B($s6)
    ctx->r11 = MEM_BU(ctx->r22, 0X1B);
    // 0x80244E48: addiu       $a2, $s4, 0x1E
    ctx->r6 = ADD32(ctx->r20, 0X1E);
    // 0x80244E4C: jal         0x80244B3C
    // 0x80244E50: sb          $t3, 0x1B($s4)
    MEM_B(0X1B, ctx->r20) = ctx->r11;
    func_80244B3C(rdram, ctx);
        goto after_9;
    // 0x80244E50: sb          $t3, 0x1B($s4)
    MEM_B(0X1B, ctx->r20) = ctx->r11;
    after_9:
    // 0x80244E54: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80244E58: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80244E5C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80244E60: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80244E64: sh          $t4, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r12;
    // 0x80244E68: sh          $t5, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r13;
    // 0x80244E6C: sh          $t6, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r14;
    // 0x80244E70: sh          $t7, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r15;
    // 0x80244E74: addiu       $s0, $sp, 0x48
    ctx->r16 = ADD32(ctx->r29, 0X48);
    // 0x80244E78: addiu       $s1, $sp, 0x50
    ctx->r17 = ADD32(ctx->r29, 0X50);
L_80244E7C:
    // 0x80244E7C: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80244E80: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80244E84: lhu         $a2, 0x0($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X0);
    // 0x80244E88: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80244E8C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80244E90: jal         0x80246660
    // 0x80244E94: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_80246660(rdram, ctx);
        goto after_10;
    // 0x80244E94: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_10:
    // 0x80244E98: beq         $v0, $zero, L_80244EA8
    if (ctx->r2 == 0) {
        // 0x80244E9C: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_80244EA8;
    }
    // 0x80244E9C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x80244EA0: b           L_80244F60
    // 0x80244EA4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F60;
    // 0x80244EA4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244EA8:
    // 0x80244EA8: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x80244EAC: bne         $at, $zero, L_80244E7C
    if (ctx->r1 != 0) {
        // 0x80244EB0: nop
    
            goto L_80244E7C;
    }
    // 0x80244EB0: nop

    // 0x80244EB4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80244EB8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80244EBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80244EC0: jal         0x80245710
    // 0x80244EC4: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    func_80245710(rdram, ctx);
        goto after_11;
    // 0x80244EC4: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_11:
    // 0x80244EC8: beq         $v0, $zero, L_80244ED8
    if (ctx->r2 == 0) {
        // 0x80244ECC: or          $v1, $s4, $zero
        ctx->r3 = ctx->r20 | 0;
            goto L_80244ED8;
    }
    // 0x80244ECC: or          $v1, $s4, $zero
    ctx->r3 = ctx->r20 | 0;
    // 0x80244ED0: b           L_80244F60
    // 0x80244ED4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F60;
    // 0x80244ED4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244ED8:
    // 0x80244ED8: addiu       $v0, $sp, 0x7C
    ctx->r2 = ADD32(ctx->r29, 0X7C);
    // 0x80244EDC: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
L_80244EE0:
    // 0x80244EE0: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x80244EE4: lbu         $t0, 0x0($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X0);
    // 0x80244EE8: nop

    // 0x80244EEC: beq         $t9, $t0, L_80244EFC
    if (ctx->r25 == ctx->r8) {
        // 0x80244EF0: nop
    
            goto L_80244EFC;
    }
    // 0x80244EF0: nop

    // 0x80244EF4: b           L_80244F5C
    // 0x80244EF8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80244F5C;
    // 0x80244EF8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80244EFC:
    // 0x80244EFC: lbu         $t1, 0x1($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X1);
    // 0x80244F00: lbu         $t2, 0x1($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X1);
    // 0x80244F04: nop

    // 0x80244F08: beq         $t1, $t2, L_80244F18
    if (ctx->r9 == ctx->r10) {
        // 0x80244F0C: nop
    
            goto L_80244F18;
    }
    // 0x80244F0C: nop

    // 0x80244F10: b           L_80244F5C
    // 0x80244F14: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80244F5C;
    // 0x80244F14: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80244F18:
    // 0x80244F18: lbu         $t3, 0x2($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2);
    // 0x80244F1C: lbu         $t4, 0x2($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X2);
    // 0x80244F20: nop

    // 0x80244F24: beq         $t3, $t4, L_80244F34
    if (ctx->r11 == ctx->r12) {
        // 0x80244F28: nop
    
            goto L_80244F34;
    }
    // 0x80244F28: nop

    // 0x80244F2C: b           L_80244F5C
    // 0x80244F30: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80244F5C;
    // 0x80244F30: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80244F34:
    // 0x80244F34: lbu         $t5, 0x3($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X3);
    // 0x80244F38: lbu         $t6, 0x3($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X3);
    // 0x80244F3C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80244F40: beq         $t5, $t6, L_80244F50
    if (ctx->r13 == ctx->r14) {
        // 0x80244F44: nop
    
            goto L_80244F50;
    }
    // 0x80244F44: nop

    // 0x80244F48: b           L_80244F5C
    // 0x80244F4C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80244F5C;
    // 0x80244F4C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80244F50:
    // 0x80244F50: bne         $v0, $a0, L_80244EE0
    if (ctx->r2 != ctx->r4) {
        // 0x80244F54: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80244EE0;
    }
    // 0x80244F54: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80244F58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80244F5C:
    // 0x80244F5C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244F60:
    // 0x80244F60: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80244F64: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80244F68: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80244F6C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80244F70: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80244F74: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80244F78: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80244F7C: jr          $ra
    // 0x80244F80: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x80244F80: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_80228500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228504: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80228508: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022850C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80228510: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80228514: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80228518: addiu       $a2, $a2, 0xC00
    ctx->r6 = ADD32(ctx->r6, 0XC00);
    // 0x8022851C: addiu       $a1, $a1, 0x3D50
    ctx->r5 = ADD32(ctx->r5, 0X3D50);
    // 0x80228520: lw          $a0, 0x5A5C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5A5C);
    // 0x80228524: jal         0x80231C58
    // 0x80228528: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80231C58(rdram, ctx);
        goto after_0;
    // 0x80228528: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x8022852C: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x80228530: addiu       $t2, $t2, 0x5A5C
    ctx->r10 = ADD32(ctx->r10, 0X5A5C);
    // 0x80228534: bne         $v0, $zero, L_80228688
    if (ctx->r2 != 0) {
        // 0x80228538: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_80228688;
    }
    // 0x80228538: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8022853C: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x80228540: addiu       $v0, $v0, 0x5A38
    ctx->r2 = ADD32(ctx->r2, 0X5A38);
    // 0x80228544: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80228548: lwc1        $f6, 0x18($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X18);
    // 0x8022854C: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80228550: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80228554: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80228558: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8022855C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80228560: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x80228564: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80228568: lwc1        $f8, 0x1C($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x8022856C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80228570: lwc1        $f16, 0x4($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X4);
    // 0x80228574: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80228578: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8022857C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80228580: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80228584: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80228588: lwc1        $f10, 0x20($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X20);
    // 0x8022858C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80228590: lwc1        $f18, 0x8($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80228594: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x80228598: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8022859C: addiu       $a3, $a3, 0x3B90
    ctx->r7 = ADD32(ctx->r7, 0X3B90);
    // 0x802285A0: slti        $at, $a2, 0x100
    ctx->r1 = SIGNED(ctx->r6) < 0X100 ? 1 : 0;
    // 0x802285A4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802285A8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x802285AC: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x802285B0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802285B4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802285B8: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x802285BC: bgez        $a2, L_802285CC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x802285C0: nop
    
            goto L_802285CC;
    }
    // 0x802285C0: nop

    // 0x802285C4: b           L_802285D8
    // 0x802285C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_802285D8;
    // 0x802285C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_802285CC:
    // 0x802285CC: bne         $at, $zero, L_802285D8
    if (ctx->r1 != 0) {
        // 0x802285D0: nop
    
            goto L_802285D8;
    }
    // 0x802285D0: nop

    // 0x802285D4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
L_802285D8:
    // 0x802285D8: bgez        $t0, L_802285E8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802285DC: slti        $at, $t0, 0x100
        ctx->r1 = SIGNED(ctx->r8) < 0X100 ? 1 : 0;
            goto L_802285E8;
    }
    // 0x802285DC: slti        $at, $t0, 0x100
    ctx->r1 = SIGNED(ctx->r8) < 0X100 ? 1 : 0;
    // 0x802285E0: b           L_802285F4
    // 0x802285E4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_802285F4;
    // 0x802285E4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_802285E8:
    // 0x802285E8: bne         $at, $zero, L_802285F4
    if (ctx->r1 != 0) {
        // 0x802285EC: nop
    
            goto L_802285F4;
    }
    // 0x802285EC: nop

    // 0x802285F0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
L_802285F4:
    // 0x802285F4: bgez        $t1, L_80228604
    if (SIGNED(ctx->r9) >= 0) {
        // 0x802285F8: slti        $at, $t1, 0x100
        ctx->r1 = SIGNED(ctx->r9) < 0X100 ? 1 : 0;
            goto L_80228604;
    }
    // 0x802285F8: slti        $at, $t1, 0x100
    ctx->r1 = SIGNED(ctx->r9) < 0X100 ? 1 : 0;
    // 0x802285FC: b           L_80228610
    // 0x80228600: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
        goto L_80228610;
    // 0x80228600: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_80228604:
    // 0x80228604: bne         $at, $zero, L_80228610
    if (ctx->r1 != 0) {
        // 0x80228608: nop
    
            goto L_80228610;
    }
    // 0x80228608: nop

    // 0x8022860C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
L_80228610:
    // 0x80228610: lhu         $t3, -0x178C($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X178C);
    // 0x80228614: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x80228618: lui         $t5, 0x8027
    ctx->r13 = S32(0X8027 << 16);
    // 0x8022861C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80228620: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80228624: lw          $t5, 0x5A50($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5A50);
    // 0x80228628: sll         $t9, $v1, 3
    ctx->r25 = S32(ctx->r3 << 3);
    // 0x8022862C: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x80228630: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x80228634: addu        $v0, $t9, $t5
    ctx->r2 = ADD32(ctx->r25, ctx->r13);
    // 0x80228638: sb          $a2, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r6;
    // 0x8022863C: sb          $a2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r6;
    // 0x80228640: sb          $t0, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r8;
    // 0x80228644: sb          $t0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r8;
    // 0x80228648: sb          $t1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r9;
    // 0x8022864C: sb          $t1, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r9;
    // 0x80228650: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x80228654: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x80228658: lui         $at, 0x300
    ctx->r1 = S32(0X300 << 16);
    // 0x8022865C: addiu       $t7, $a1, 0x8
    ctx->r15 = ADD32(ctx->r5, 0X8);
    // 0x80228660: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x80228664: lw          $t8, 0x5A30($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5A30);
    // 0x80228668: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x8022866C: sll         $t3, $t8, 1
    ctx->r11 = S32(ctx->r24 << 1);
    // 0x80228670: addiu       $t4, $t3, 0x86
    ctx->r12 = ADD32(ctx->r11, 0X86);
    // 0x80228674: andi        $t9, $t4, 0xFF
    ctx->r25 = ctx->r12 & 0XFF;
    // 0x80228678: sll         $t5, $t9, 16
    ctx->r13 = S32(ctx->r25 << 16);
    // 0x8022867C: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x80228680: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x80228684: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
L_80228688:
    // 0x80228688: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022868C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80228690: jr          $ra
    // 0x80228694: nop

    return;
    // 0x80228694: nop

;}
RECOMP_FUNC void func_80216EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80216EFC: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x80216F00: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80216F04: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x80216F08: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80216F0C: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80216F10: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80216F14: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80216F18: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80216F1C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80216F20: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80216F24: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80216F28: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80216F2C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80216F30: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x80216F34: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80216F38: swc1        $f12, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f12.u32l;
    // 0x80216F3C: swc1        $f14, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f14.u32l;
    // 0x80216F40: sw          $a2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r6;
    // 0x80216F44: lhu         $t8, 0x0($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X0);
    // 0x80216F48: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x80216F4C: lwc1        $f6, 0xC($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XC);
    // 0x80216F50: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80216F54: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80216F58: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x80216F5C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80216F60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80216F64: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80216F68: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80216F6C: lw          $s5, 0x8($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X8);
    // 0x80216F70: div.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80216F74: or          $s7, $a3, $zero
    ctx->r23 = ctx->r7 | 0;
    // 0x80216F78: lbu         $fp, 0x4($s5)
    ctx->r30 = MEM_BU(ctx->r21, 0X4);
    // 0x80216F7C: sw          $v0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r2;
    // 0x80216F80: mul.s       $f22, $f0, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80216F84: nop

    // 0x80216F88: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80216F8C: jal         0x80228CE0
    // 0x80216F90: div.s       $f20, $f8, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    func_80228CE0(rdram, ctx);
        goto after_0;
    // 0x80216F90: div.s       $f20, $f8, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    after_0:
    // 0x80216F94: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80216F98: blez        $fp, L_8021718C
    if (SIGNED(ctx->r30) <= 0) {
        // 0x80216F9C: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8021718C;
    }
    // 0x80216F9C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80216FA0: addiu       $s6, $sp, 0x6C
    ctx->r22 = ADD32(ctx->r29, 0X6C);
    // 0x80216FA4: lw          $t2, 0x10($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X10);
L_80216FA8:
    // 0x80216FA8: sll         $s4, $s3, 3
    ctx->r20 = S32(ctx->r19 << 3);
    // 0x80216FAC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80216FB0: lw          $t1, 0x0($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X0);
    // 0x80216FB4: addu        $s4, $s4, $s3
    ctx->r20 = ADD32(ctx->r20, ctx->r19);
    // 0x80216FB8: sllv        $t4, $t3, $s3
    ctx->r12 = S32(ctx->r11 << (ctx->r19 & 31));
    // 0x80216FBC: sll         $s4, $s4, 2
    ctx->r20 = S32(ctx->r20 << 2);
    // 0x80216FC0: and         $t5, $t2, $t4
    ctx->r13 = ctx->r10 & ctx->r12;
    // 0x80216FC4: beq         $t5, $zero, L_80216FD8
    if (ctx->r13 == 0) {
        // 0x80216FC8: addu        $v0, $t1, $s4
        ctx->r2 = ADD32(ctx->r9, ctx->r20);
            goto L_80216FD8;
    }
    // 0x80216FC8: addu        $v0, $t1, $s4
    ctx->r2 = ADD32(ctx->r9, ctx->r20);
    // 0x80216FCC: slti        $at, $s3, 0x20
    ctx->r1 = SIGNED(ctx->r19) < 0X20 ? 1 : 0;
    // 0x80216FD0: bne         $at, $zero, L_80216FEC
    if (ctx->r1 != 0) {
        // 0x80216FD4: nop
    
            goto L_80216FEC;
    }
    // 0x80216FD4: nop

L_80216FD8:
    // 0x80216FD8: lbu         $t6, 0x7($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X7);
    // 0x80216FDC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80216FE0: andi        $t8, $t6, 0x1
    ctx->r24 = ctx->r14 & 0X1;
    // 0x80216FE4: beq         $t8, $zero, L_80216FF4
    if (ctx->r24 == 0) {
        // 0x80216FE8: nop
    
            goto L_80216FF4;
    }
    // 0x80216FE8: nop

L_80216FEC:
    // 0x80216FEC: b           L_80216FF4
    // 0x80216FF0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80216FF4;
    // 0x80216FF0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80216FF4:
    // 0x80216FF4: bnel        $s0, $zero, L_80217010
    if (ctx->r16 != 0) {
        // 0x80216FF8: lw          $t0, 0x4($s7)
        ctx->r8 = MEM_W(ctx->r23, 0X4);
            goto L_80217010;
    }
    goto skip_0;
    // 0x80216FF8: lw          $t0, 0x4($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X4);
    skip_0:
    // 0x80216FFC: lbu         $t7, 0x7($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X7);
    // 0x80217000: andi        $t9, $t7, 0x2
    ctx->r25 = ctx->r15 & 0X2;
    // 0x80217004: bnel        $t9, $zero, L_80217174
    if (ctx->r25 != 0) {
        // 0x80217008: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80217174;
    }
    goto skip_1;
    // 0x80217008: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_1:
    // 0x8021700C: lw          $t0, 0x4($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X4);
L_80217010:
    // 0x80217010: sll         $t1, $s3, 1
    ctx->r9 = S32(ctx->r19 << 1);
    // 0x80217014: lui         $t5, 0x8026
    ctx->r13 = S32(0X8026 << 16);
    // 0x80217018: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x8021701C: lhu         $t2, 0x0($t3)
    ctx->r10 = MEM_HU(ctx->r11, 0X0);
    // 0x80217020: lw          $t5, -0x3C1C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3C1C);
    // 0x80217024: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80217028: sll         $t4, $t2, 6
    ctx->r12 = S32(ctx->r10 << 6);
    // 0x8021702C: jal         0x80228DE0
    // 0x80217030: addu        $a1, $t5, $t4
    ctx->r5 = ADD32(ctx->r13, ctx->r12);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80217030: addu        $a1, $t5, $t4
    ctx->r5 = ADD32(ctx->r13, ctx->r12);
    after_1:
    // 0x80217034: bne         $s3, $zero, L_80217068
    if (ctx->r19 != 0) {
        // 0x80217038: lwc1        $f4, 0x9C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_80217068;
    }
    // 0x80217038: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8021703C: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x80217040: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80217044: lwc1        $f18, 0x20($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X20);
    // 0x80217048: mul.s       $f0, $f18, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x8021704C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80217050: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80217054: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80217058: jal         0x8022A210
    // 0x8021705C: nop

    func_8022A210(rdram, ctx);
        goto after_2;
    // 0x8021705C: nop

    after_2:
    // 0x80217060: b           L_8021708C
    // 0x80217064: nop

        goto L_8021708C;
    // 0x80217064: nop

L_80217068:
    // 0x80217068: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8021706C: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80217070: lwc1        $f16, 0xA4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x80217074: mul.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80217078: nop

    // 0x8021707C: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80217080: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    // 0x80217084: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    // 0x80217088: swc1        $f18, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
L_8021708C:
    // 0x8021708C: jal         0x80228D0C
    // 0x80217090: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80228D0C(rdram, ctx);
        goto after_3;
    // 0x80217090: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_3:
    // 0x80217094: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80217098: sll         $t8, $s2, 16
    ctx->r24 = S32(ctx->r18 << 16);
    // 0x8021709C: beq         $s0, $zero, L_802170FC
    if (ctx->r16 == 0) {
        // 0x802170A0: sra         $s2, $t8, 16
        ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
            goto L_802170FC;
    }
    // 0x802170A0: sra         $s2, $t8, 16
    ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802170A4: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x802170A8: addiu       $v0, $v0, -0x3C6C
    ctx->r2 = ADD32(ctx->r2, -0X3C6C);
    // 0x802170AC: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x802170B0: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x802170B4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802170B8: sll         $t1, $s3, 24
    ctx->r9 = S32(ctx->r19 << 24);
    // 0x802170BC: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x802170C0: or          $t3, $t0, $t1
    ctx->r11 = ctx->r8 | ctx->r9;
    // 0x802170C4: jal         0x80228CF0
    // 0x802170C8: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    func_80228CF0(rdram, ctx);
        goto after_4;
    // 0x802170C8: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    after_4:
    // 0x802170CC: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    // 0x802170D0: lwc1        $f12, 0xC8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x802170D4: lwc1        $f14, 0xCC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x802170D8: addu        $t5, $t2, $s4
    ctx->r13 = ADD32(ctx->r10, ctx->r20);
    // 0x802170DC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802170E0: lw          $a2, 0xD0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD0);
    // 0x802170E4: jal         0x80216534
    // 0x802170E8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_80216534(rdram, ctx);
        goto after_5;
    // 0x802170E8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_5:
    // 0x802170EC: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802170F0: sra         $t4, $v1, 16
    ctx->r12 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802170F4: b           L_80217100
    // 0x802170F8: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
        goto L_80217100;
    // 0x802170F8: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
L_802170FC:
    // 0x802170FC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_80217100:
    // 0x80217100: bltz        $v1, L_80217110
    if (SIGNED(ctx->r3) < 0) {
        // 0x80217104: addiu       $t6, $s3, 0x1
        ctx->r14 = ADD32(ctx->r19, 0X1);
            goto L_80217110;
    }
    // 0x80217104: addiu       $t6, $s3, 0x1
    ctx->r14 = ADD32(ctx->r19, 0X1);
    // 0x80217108: b           L_802171B8
    // 0x8021710C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_802171B8;
    // 0x8021710C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80217110:
    // 0x80217110: bnel        $t6, $fp, L_80217124
    if (ctx->r14 != ctx->r30) {
        // 0x80217114: lw          $t8, 0x0($s5)
        ctx->r24 = MEM_W(ctx->r21, 0X0);
            goto L_80217124;
    }
    goto skip_2;
    // 0x80217114: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    skip_2:
    // 0x80217118: b           L_8021718C
    // 0x8021711C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_8021718C;
    // 0x8021711C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80217120: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
L_80217124:
    // 0x80217124: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80217128: addu        $v0, $t8, $s4
    ctx->r2 = ADD32(ctx->r24, ctx->r20);
    // 0x8021712C: lbu         $t7, 0x6($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X6);
    // 0x80217130: lbu         $t9, 0x2A($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2A);
    // 0x80217134: subu        $s1, $t7, $t9
    ctx->r17 = SUB32(ctx->r15, ctx->r25);
    // 0x80217138: sll         $t0, $s1, 16
    ctx->r8 = S32(ctx->r17 << 16);
    // 0x8021713C: sra         $s1, $t0, 16
    ctx->r17 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80217140: bltzl       $s1, L_80217174
    if (SIGNED(ctx->r17) < 0) {
        // 0x80217144: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80217174;
    }
    goto skip_3;
    // 0x80217144: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_3:
L_80217148:
    // 0x80217148: jal         0x80228D9C
    // 0x8021714C: nop

    func_80228D9C(rdram, ctx);
        goto after_6;
    // 0x8021714C: nop

    after_6:
    // 0x80217150: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80217154: sll         $t5, $s0, 16
    ctx->r13 = S32(ctx->r16 << 16);
    // 0x80217158: sra         $s0, $t5, 16
    ctx->r16 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8021715C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80217160: sll         $t3, $s2, 16
    ctx->r11 = S32(ctx->r18 << 16);
    // 0x80217164: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80217168: beq         $at, $zero, L_80217148
    if (ctx->r1 == 0) {
        // 0x8021716C: sra         $s2, $t3, 16
        ctx->r18 = S32(SIGNED(ctx->r11) >> 16);
            goto L_80217148;
    }
    // 0x8021716C: sra         $s2, $t3, 16
    ctx->r18 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80217170: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_80217174:
    // 0x80217174: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x80217178: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8021717C: slt         $at, $s3, $fp
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x80217180: bnel        $at, $zero, L_80216FA8
    if (ctx->r1 != 0) {
        // 0x80217184: lw          $t2, 0x10($s7)
        ctx->r10 = MEM_W(ctx->r23, 0X10);
            goto L_80216FA8;
    }
    goto skip_4;
    // 0x80217184: lw          $t2, 0x10($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X10);
    skip_4:
    // 0x80217188: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_8021718C:
    // 0x8021718C: blezl       $s2, L_802171B8
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80217190: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802171B8;
    }
    goto skip_5;
    // 0x80217190: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_5:
L_80217194:
    // 0x80217194: jal         0x80228D9C
    // 0x80217198: nop

    func_80228D9C(rdram, ctx);
        goto after_7;
    // 0x80217198: nop

    after_7:
    // 0x8021719C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802171A0: sll         $t7, $s3, 16
    ctx->r15 = S32(ctx->r19 << 16);
    // 0x802171A4: sra         $s3, $t7, 16
    ctx->r19 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802171A8: slt         $at, $s3, $s2
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x802171AC: bne         $at, $zero, L_80217194
    if (ctx->r1 != 0) {
        // 0x802171B0: nop
    
            goto L_80217194;
    }
    // 0x802171B0: nop

    // 0x802171B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_802171B8:
    // 0x802171B8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x802171BC: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x802171C0: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x802171C4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802171C8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802171CC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802171D0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802171D4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802171D8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802171DC: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x802171E0: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x802171E4: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x802171E8: jr          $ra
    // 0x802171EC: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x802171EC: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_80220C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80220C44: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80220C48: lwc1        $f6, -0x1790($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1790);
    // 0x80220C4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80220C50: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80220C54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80220C58: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80220C5C: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x80220C60: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80220C64: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x80220C68: bc1f        L_80220C7C
    if (!c1cs) {
        // 0x80220C6C: lui         $t9, 0x8025
        ctx->r25 = S32(0X8025 << 16);
            goto L_80220C7C;
    }
    // 0x80220C6C: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x80220C70: lui         $at, 0x8002
    ctx->r1 = S32(0X8002 << 16);
    // 0x80220C74: or          $t7, $t1, $at
    ctx->r15 = ctx->r9 | ctx->r1;
    // 0x80220C78: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
L_80220C7C:
    // 0x80220C7C: lw          $t8, -0x17B8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X17B8);
    // 0x80220C80: lw          $t9, -0x17B4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X17B4);
    // 0x80220C84: or          $t1, $t1, $t8
    ctx->r9 = ctx->r9 | ctx->r24;
    // 0x80220C88: and         $t1, $t1, $t9
    ctx->r9 = ctx->r9 & ctx->r25;
    // 0x80220C8C: sll         $t6, $t1, 6
    ctx->r14 = S32(ctx->r9 << 6);
    // 0x80220C90: bgez        $t6, L_80220CA8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80220C94: sll         $t7, $t1, 13
        ctx->r15 = S32(ctx->r9 << 13);
            goto L_80220CA8;
    }
    // 0x80220C94: sll         $t7, $t1, 13
    ctx->r15 = S32(ctx->r9 << 13);
    // 0x80220C98: jal         0x802209A4
    // 0x80220C9C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    func_802209A4(rdram, ctx);
        goto after_0;
    // 0x80220C9C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    after_0:
    // 0x80220CA0: b           L_80221490
    // 0x80220CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80221490;
    // 0x80220CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80220CA8:
    // 0x80220CA8: bgez        $t7, L_80220D64
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80220CAC: lw          $t8, 0x80($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X80);
            goto L_80220D64;
    }
    // 0x80220CAC: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x80220CB0: lhu         $v1, 0x8($t8)
    ctx->r3 = MEM_HU(ctx->r24, 0X8);
    // 0x80220CB4: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80220CB8: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x80220CBC: beq         $v1, $at, L_80220D64
    if (ctx->r3 == ctx->r1) {
        // 0x80220CC0: addiu       $v0, $v0, 0x4350
        ctx->r2 = ADD32(ctx->r2, 0X4350);
            goto L_80220D64;
    }
    // 0x80220CC0: addiu       $v0, $v0, 0x4350
    ctx->r2 = ADD32(ctx->r2, 0X4350);
    // 0x80220CC4: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80220CC8: lw          $t6, 0x5A28($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5A28);
    // 0x80220CCC: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x80220CD0: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x80220CD4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80220CD8: addu        $a0, $t9, $t6
    ctx->r4 = ADD32(ctx->r25, ctx->r14);
    // 0x80220CDC: lw          $t8, 0x2C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X2C);
    // 0x80220CE0: lw          $t7, 0x2C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X2C);
    // 0x80220CE4: bnel        $t7, $t8, L_80220D00
    if (ctx->r15 != ctx->r24) {
        // 0x80220CE8: sw          $a0, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r4;
            goto L_80220D00;
    }
    goto skip_0;
    // 0x80220CE8: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    skip_0:
    // 0x80220CEC: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x80220CF0: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    // 0x80220CF4: beql        $t9, $t6, L_80220D2C
    if (ctx->r25 == ctx->r14) {
        // 0x80220CF8: lw          $t9, 0x28($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X28);
            goto L_80220D2C;
    }
    goto skip_1;
    // 0x80220CF8: lw          $t9, 0x28($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X28);
    skip_1:
    // 0x80220CFC: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
L_80220D00:
    // 0x80220D00: jal         0x80228500
    // 0x80220D04: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    func_80228500(rdram, ctx);
        goto after_1;
    // 0x80220D04: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    after_1:
    // 0x80220D08: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x80220D0C: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x80220D10: addiu       $v0, $v0, 0x4350
    ctx->r2 = ADD32(ctx->r2, 0X4350);
    // 0x80220D14: lw          $t7, 0x2C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X2C);
    // 0x80220D18: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80220D1C: sw          $t7, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r15;
    // 0x80220D20: lw          $t8, 0x24($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X24);
    // 0x80220D24: sw          $t8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r24;
    // 0x80220D28: lw          $t9, 0x28($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X28);
L_80220D2C:
    // 0x80220D2C: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x80220D30: beq         $t9, $t6, L_80220D64
    if (ctx->r25 == ctx->r14) {
        // 0x80220D34: nop
    
            goto L_80220D64;
    }
    // 0x80220D34: nop

    // 0x80220D38: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x80220D3C: jal         0x802281A4
    // 0x80220D40: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    func_802281A4(rdram, ctx);
        goto after_2;
    // 0x80220D40: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    after_2:
    // 0x80220D44: jal         0x80228698
    // 0x80220D48: nop

    func_80228698(rdram, ctx);
        goto after_3;
    // 0x80220D48: nop

    after_3:
    // 0x80220D4C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x80220D50: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x80220D54: addiu       $v0, $v0, 0x4350
    ctx->r2 = ADD32(ctx->r2, 0X4350);
    // 0x80220D58: lw          $t7, 0x28($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X28);
    // 0x80220D5C: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80220D60: sw          $t7, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r15;
L_80220D64:
    // 0x80220D64: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x80220D68: lw          $t8, 0x4348($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4348);
    // 0x80220D6C: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x80220D70: addiu       $t2, $t2, 0x3B90
    ctx->r10 = ADD32(ctx->r10, 0X3B90);
    // 0x80220D74: beq         $t1, $t8, L_80221398
    if (ctx->r9 == ctx->r24) {
        // 0x80220D78: nop
    
            goto L_80221398;
    }
    // 0x80220D78: nop

    // 0x80220D7C: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80220D80: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x80220D84: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x80220D88: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80220D8C: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x80220D90: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80220D94: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80220D98: lw          $t7, 0x4348($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4348);
    // 0x80220D9C: lui         $a0, 0x883E
    ctx->r4 = S32(0X883E << 16);
    // 0x80220DA0: and         $t9, $t1, $a0
    ctx->r25 = ctx->r9 & ctx->r4;
    // 0x80220DA4: and         $t8, $t7, $a0
    ctx->r24 = ctx->r15 & ctx->r4;
    // 0x80220DA8: beq         $t8, $t9, L_80220EB8
    if (ctx->r24 == ctx->r25) {
        // 0x80220DAC: sll         $t6, $t1, 4
        ctx->r14 = S32(ctx->r9 << 4);
            goto L_80220EB8;
    }
    // 0x80220DAC: sll         $t6, $t1, 4
    ctx->r14 = S32(ctx->r9 << 4);
    // 0x80220DB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80220DB4: bgez        $t6, L_80220DC4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80220DB8: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80220DC4;
    }
    // 0x80220DB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80220DBC: b           L_80220DC8
    // 0x80220DC0: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
        goto L_80220DC8;
    // 0x80220DC0: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
L_80220DC4:
    // 0x80220DC4: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
L_80220DC8:
    // 0x80220DC8: sll         $t7, $t1, 11
    ctx->r15 = S32(ctx->r9 << 11);
    // 0x80220DCC: bgez        $t7, L_80220DE0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80220DD0: sll         $t6, $t1, 12
        ctx->r14 = S32(ctx->r9 << 12);
            goto L_80220DE0;
    }
    // 0x80220DD0: sll         $t6, $t1, 12
    ctx->r14 = S32(ctx->r9 << 12);
    // 0x80220DD4: ori         $t8, $a0, 0x2000
    ctx->r24 = ctx->r4 | 0X2000;
    // 0x80220DD8: b           L_80220DE8
    // 0x80220DDC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
        goto L_80220DE8;
    // 0x80220DDC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
L_80220DE0:
    // 0x80220DE0: ori         $t9, $a1, 0x2000
    ctx->r25 = ctx->r5 | 0X2000;
    // 0x80220DE4: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_80220DE8:
    // 0x80220DE8: bgez        $t6, L_80220DFC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80220DEC: sll         $t9, $t1, 14
        ctx->r25 = S32(ctx->r9 << 14);
            goto L_80220DFC;
    }
    // 0x80220DEC: sll         $t9, $t1, 14
    ctx->r25 = S32(ctx->r9 << 14);
    // 0x80220DF0: ori         $t7, $a0, 0x1000
    ctx->r15 = ctx->r4 | 0X1000;
    // 0x80220DF4: b           L_80220E04
    // 0x80220DF8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
        goto L_80220E04;
    // 0x80220DF8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_80220DFC:
    // 0x80220DFC: ori         $t8, $a1, 0x1000
    ctx->r24 = ctx->r5 | 0X1000;
    // 0x80220E00: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
L_80220E04:
    // 0x80220E04: bgez        $t9, L_80220E18
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80220E08: lui         $v0, 0x2
        ctx->r2 = S32(0X2 << 16);
            goto L_80220E18;
    }
    // 0x80220E08: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x80220E0C: ori         $t6, $a0, 0x200
    ctx->r14 = ctx->r4 | 0X200;
    // 0x80220E10: b           L_80220E20
    // 0x80220E14: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
        goto L_80220E20;
    // 0x80220E14: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_80220E18:
    // 0x80220E18: ori         $t7, $a1, 0x200
    ctx->r15 = ctx->r5 | 0X200;
    // 0x80220E1C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
L_80220E20:
    // 0x80220E20: lui         $at, 0x804
    ctx->r1 = S32(0X804 << 16);
    // 0x80220E24: and         $t8, $t1, $at
    ctx->r24 = ctx->r9 & ctx->r1;
    // 0x80220E28: beq         $t8, $zero, L_80220E38
    if (ctx->r24 == 0) {
        // 0x80220E2C: sll         $t9, $t1, 10
        ctx->r25 = S32(ctx->r9 << 10);
            goto L_80220E38;
    }
    // 0x80220E2C: sll         $t9, $t1, 10
    ctx->r25 = S32(ctx->r9 << 10);
    // 0x80220E30: b           L_80220E3C
    // 0x80220E34: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
        goto L_80220E3C;
    // 0x80220E34: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
L_80220E38:
    // 0x80220E38: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
L_80220E3C:
    // 0x80220E3C: bgez        $t9, L_80220E50
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80220E40: sll         $t8, $t1, 0
        ctx->r24 = S32(ctx->r9 << 0);
            goto L_80220E50;
    }
    // 0x80220E40: sll         $t8, $t1, 0
    ctx->r24 = S32(ctx->r9 << 0);
    // 0x80220E44: ori         $t6, $a0, 0x1
    ctx->r14 = ctx->r4 | 0X1;
    // 0x80220E48: b           L_80220E58
    // 0x80220E4C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
        goto L_80220E58;
    // 0x80220E4C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_80220E50:
    // 0x80220E50: ori         $t7, $a1, 0x1
    ctx->r15 = ctx->r5 | 0X1;
    // 0x80220E54: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
L_80220E58:
    // 0x80220E58: bgez        $t8, L_80220E70
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80220E5C: lui         $at, 0x1
        ctx->r1 = S32(0X1 << 16);
            goto L_80220E70;
    }
    // 0x80220E5C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80220E60: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80220E64: or          $t9, $a0, $at
    ctx->r25 = ctx->r4 | ctx->r1;
    // 0x80220E68: b           L_80220E78
    // 0x80220E6C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
        goto L_80220E78;
    // 0x80220E6C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
L_80220E70:
    // 0x80220E70: or          $t6, $a1, $at
    ctx->r14 = ctx->r5 | ctx->r1;
    // 0x80220E74: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
L_80220E78:
    // 0x80220E78: beq         $a1, $zero, L_80220E98
    if (ctx->r5 == 0) {
        // 0x80220E7C: nop
    
            goto L_80220E98;
    }
    // 0x80220E7C: nop

    // 0x80220E80: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80220E84: lui         $t8, 0xB600
    ctx->r24 = S32(0XB600 << 16);
    // 0x80220E88: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80220E8C: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x80220E90: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x80220E94: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_80220E98:
    // 0x80220E98: beql        $a0, $zero, L_80220EBC
    if (ctx->r4 == 0) {
        // 0x80220E9C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80220EBC;
    }
    goto skip_2;
    // 0x80220E9C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    skip_2:
    // 0x80220EA0: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80220EA4: lui         $t6, 0xB700
    ctx->r14 = S32(0XB700 << 16);
    // 0x80220EA8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80220EAC: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x80220EB0: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x80220EB4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_80220EB8:
    // 0x80220EB8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
L_80220EBC:
    // 0x80220EBC: andi        $v0, $t1, 0xFFF
    ctx->r2 = ctx->r9 & 0XFFF;
    // 0x80220EC0: and         $t7, $t1, $at
    ctx->r15 = ctx->r9 & ctx->r1;
    // 0x80220EC4: addiu       $at, $zero, 0xFFE
    ctx->r1 = ADD32(0, 0XFFE);
    // 0x80220EC8: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80220ECC: andi        $ra, $v0, 0xFFFF
    ctx->r31 = ctx->r2 & 0XFFFF;
    // 0x80220ED0: bne         $v1, $at, L_80220EE4
    if (ctx->r3 != ctx->r1) {
        // 0x80220ED4: sw          $t7, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r15;
            goto L_80220EE4;
    }
    // 0x80220ED4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80220ED8: addiu       $ra, $v1, 0x1
    ctx->r31 = ADD32(ctx->r3, 0X1);
    // 0x80220EDC: andi        $t8, $ra, 0xFFFF
    ctx->r24 = ctx->r31 & 0XFFFF;
    // 0x80220EE0: or          $ra, $t8, $zero
    ctx->r31 = ctx->r24 | 0;
L_80220EE4:
    // 0x80220EE4: slti        $at, $ra, 0xFFF
    ctx->r1 = SIGNED(ctx->r31) < 0XFFF ? 1 : 0;
    // 0x80220EE8: bne         $at, $zero, L_80220EFC
    if (ctx->r1 != 0) {
        // 0x80220EEC: or          $a3, $ra, $zero
        ctx->r7 = ctx->r31 | 0;
            goto L_80220EFC;
    }
    // 0x80220EEC: or          $a3, $ra, $zero
    ctx->r7 = ctx->r31 | 0;
    // 0x80220EF0: addiu       $t4, $zero, 0xFFF
    ctx->r12 = ADD32(0, 0XFFF);
    // 0x80220EF4: b           L_80220F68
    // 0x80220EF8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_80220F68;
    // 0x80220EF8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_80220EFC:
    // 0x80220EFC: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x80220F00: lw          $t9, -0x18F0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X18F0);
    // 0x80220F04: sll         $t7, $ra, 2
    ctx->r15 = S32(ctx->r31 << 2);
    // 0x80220F08: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80220F0C: lw          $t6, 0x2C($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X2C);
    // 0x80220F10: addiu       $a0, $a0, 0x3800
    ctx->r4 = ADD32(ctx->r4, 0X3800);
    // 0x80220F14: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80220F18: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80220F1C: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x80220F20: bnel        $t0, $zero, L_80220F58
    if (ctx->r8 != 0) {
        // 0x80220F24: lhu         $t9, 0x12($t0)
        ctx->r25 = MEM_HU(ctx->r8, 0X12);
            goto L_80220F58;
    }
    goto skip_3;
    // 0x80220F24: lhu         $t9, 0x12($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X12);
    skip_3:
    // 0x80220F28: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x80220F2C: jal         0x80231A24
    // 0x80220F30: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    func_80231A24(rdram, ctx);
        goto after_4;
    // 0x80220F30: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    after_4:
    // 0x80220F34: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x80220F38: addiu       $t2, $t2, 0x3B90
    ctx->r10 = ADD32(ctx->r10, 0X3B90);
    // 0x80220F3C: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80220F40: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80220F44: addiu       $t4, $zero, 0xFFF
    ctx->r12 = ADD32(0, 0XFFF);
    // 0x80220F48: addiu       $ra, $zero, 0xFFF
    ctx->r31 = ADD32(0, 0XFFF);
    // 0x80220F4C: b           L_80220F68
    // 0x80220F50: addiu       $a3, $zero, 0xFFF
    ctx->r7 = ADD32(0, 0XFFF);
        goto L_80220F68;
    // 0x80220F50: addiu       $a3, $zero, 0xFFF
    ctx->r7 = ADD32(0, 0XFFF);
    // 0x80220F54: lhu         $t9, 0x12($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X12);
L_80220F58:
    // 0x80220F58: andi        $t6, $t9, 0xF000
    ctx->r14 = ctx->r25 & 0XF000;
    // 0x80220F5C: or          $t4, $t6, $a3
    ctx->r12 = ctx->r14 | ctx->r7;
    // 0x80220F60: andi        $t7, $t4, 0xFFFF
    ctx->r15 = ctx->r12 & 0XFFFF;
    // 0x80220F64: or          $t4, $t7, $zero
    ctx->r12 = ctx->r15 | 0;
L_80220F68:
    // 0x80220F68: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x80220F6C: lw          $t8, 0x434C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X434C);
    // 0x80220F70: slti        $at, $a3, 0xFFE
    ctx->r1 = SIGNED(ctx->r7) < 0XFFE ? 1 : 0;
    // 0x80220F74: beq         $t8, $t4, L_80221000
    if (ctx->r24 == ctx->r12) {
        // 0x80220F78: nop
    
            goto L_80221000;
    }
    // 0x80220F78: nop

    // 0x80220F7C: bne         $at, $zero, L_80220FA8
    if (ctx->r1 != 0) {
        // 0x80220F80: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80220FA8;
    }
    // 0x80220F80: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80220F84: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80220F88: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80220F8C: addiu       $t7, $t7, -0x17E8
    ctx->r15 = ADD32(ctx->r15, -0X17E8);
    // 0x80220F90: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80220F94: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x80220F98: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x80220F9C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80220FA0: b           L_80221000
    // 0x80220FA4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
        goto L_80221000;
    // 0x80220FA4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
L_80220FA8:
    // 0x80220FA8: sh          $ra, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r31;
    // 0x80220FAC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x80220FB0: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x80220FB4: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x80220FB8: jal         0x80233748
    // 0x80220FBC: sh          $t4, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r12;
    func_80233748(rdram, ctx);
        goto after_5;
    // 0x80220FBC: sh          $t4, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r12;
    after_5:
    // 0x80220FC0: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x80220FC4: lhu         $t8, -0x178C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X178C);
    // 0x80220FC8: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80220FCC: addiu       $t6, $t6, 0x3BA8
    ctx->r14 = ADD32(ctx->r14, 0X3BA8);
    // 0x80220FD0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80220FD4: addu        $v0, $t9, $t6
    ctx->r2 = ADD32(ctx->r25, ctx->r14);
    // 0x80220FD8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80220FDC: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x80220FE0: addiu       $t2, $t2, 0x3B90
    ctx->r10 = ADD32(ctx->r10, 0X3B90);
    // 0x80220FE4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80220FE8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80220FEC: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80220FF0: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80220FF4: lhu         $t4, 0x66($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X66);
    // 0x80220FF8: lhu         $ra, 0x72($sp)
    ctx->r31 = MEM_HU(ctx->r29, 0X72);
    // 0x80220FFC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_80221000:
    // 0x80221000: beq         $t0, $zero, L_80221010
    if (ctx->r8 == 0) {
        // 0x80221004: lui         $a1, 0x8025
        ctx->r5 = S32(0X8025 << 16);
            goto L_80221010;
    }
    // 0x80221004: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80221008: b           L_80221014
    // 0x8022100C: lbu         $a2, 0x27($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0X27);
        goto L_80221014;
    // 0x8022100C: lbu         $a2, 0x27($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0X27);
L_80221010:
    // 0x80221010: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
L_80221014:
    // 0x80221014: addiu       $a1, $a1, -0x175C
    ctx->r5 = ADD32(ctx->r5, -0X175C);
    // 0x80221018: lbu         $t9, 0x0($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X0);
    // 0x8022101C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80221020: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80221024: beql        $a2, $t9, L_8022109C
    if (ctx->r6 == ctx->r25) {
        // 0x80221028: sll         $t7, $t1, 7
        ctx->r15 = S32(ctx->r9 << 7);
            goto L_8022109C;
    }
    goto skip_4;
    // 0x80221028: sll         $t7, $t1, 7
    ctx->r15 = S32(ctx->r9 << 7);
    skip_4:
    // 0x8022102C: bne         $a2, $t3, L_80221054
    if (ctx->r6 != ctx->r11) {
        // 0x80221030: lui         $t9, 0xB900
        ctx->r25 = S32(0XB900 << 16);
            goto L_80221054;
    }
    // 0x80221030: lui         $t9, 0xB900
    ctx->r25 = S32(0XB900 << 16);
    // 0x80221034: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80221038: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x8022103C: ori         $t7, $t7, 0x2
    ctx->r15 = ctx->r15 | 0X2;
    // 0x80221040: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80221044: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x80221048: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8022104C: b           L_80221094
    // 0x80221050: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_80221094;
    // 0x80221050: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_80221054:
    // 0x80221054: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80221058: ori         $t9, $t9, 0x2
    ctx->r25 = ctx->r25 | 0X2;
    // 0x8022105C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80221060: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80221064: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x80221068: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8022106C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80221070: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80221074: andi        $t9, $a2, 0xFF
    ctx->r25 = ctx->r6 & 0XFF;
    // 0x80221078: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x8022107C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80221080: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x80221084: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x80221088: lui         $t8, 0xF900
    ctx->r24 = S32(0XF900 << 16);
    // 0x8022108C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80221090: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_80221094:
    // 0x80221094: sb          $a2, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r6;
    // 0x80221098: sll         $t7, $t1, 7
    ctx->r15 = S32(ctx->r9 << 7);
L_8022109C:
    // 0x8022109C: bgez        $t7, L_802210AC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802210A0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802210AC;
    }
    // 0x802210A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802210A4: b           L_802210AC
    // 0x802210A8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
        goto L_802210AC;
    // 0x802210A8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
L_802210AC:
    // 0x802210AC: sh          $ra, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r31;
    // 0x802210B0: sw          $a2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r6;
    // 0x802210B4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x802210B8: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x802210BC: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x802210C0: jal         0x802234A4
    // 0x802210C4: sh          $t4, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r12;
    func_802234A4(rdram, ctx);
        goto after_6;
    // 0x802210C4: sh          $t4, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r12;
    after_6:
    // 0x802210C8: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x802210CC: lui         $v1, 0x1E0
    ctx->r3 = S32(0X1E0 << 16);
    // 0x802210D0: lui         $at, 0xE0
    ctx->r1 = S32(0XE0 << 16);
    // 0x802210D4: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x802210D8: and         $v0, $v1, $t1
    ctx->r2 = ctx->r3 & ctx->r9;
    // 0x802210DC: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x802210E0: lui         $t5, 0x1E0
    ctx->r13 = S32(0X1E0 << 16);
    // 0x802210E4: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x802210E8: addiu       $t2, $t2, 0x3B90
    ctx->r10 = ADD32(ctx->r10, 0X3B90);
    // 0x802210EC: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x802210F0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802210F4: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x802210F8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802210FC: lhu         $t4, 0x66($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X66);
    // 0x80221100: lhu         $ra, 0x72($sp)
    ctx->r31 = MEM_HU(ctx->r29, 0X72);
    // 0x80221104: bne         $at, $zero, L_80221164
    if (ctx->r1 != 0) {
        // 0x80221108: sw          $t5, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r13;
            goto L_80221164;
    }
    // 0x80221108: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
    // 0x8022110C: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x80221110: beq         $v0, $at, L_802211D4
    if (ctx->r2 == ctx->r1) {
        // 0x80221114: lui         $a0, 0x11
        ctx->r4 = S32(0X11 << 16);
            goto L_802211D4;
    }
    // 0x80221114: lui         $a0, 0x11
    ctx->r4 = S32(0X11 << 16);
    // 0x80221118: lui         $at, 0x120
    ctx->r1 = S32(0X120 << 16);
    // 0x8022111C: beq         $v0, $at, L_802211D4
    if (ctx->r2 == ctx->r1) {
        // 0x80221120: lui         $at, 0x140
        ctx->r1 = S32(0X140 << 16);
            goto L_802211D4;
    }
    // 0x80221120: lui         $at, 0x140
    ctx->r1 = S32(0X140 << 16);
    // 0x80221124: beq         $v0, $at, L_802211CC
    if (ctx->r2 == ctx->r1) {
        // 0x80221128: lui         $a0, 0x11
        ctx->r4 = S32(0X11 << 16);
            goto L_802211CC;
    }
    // 0x80221128: lui         $a0, 0x11
    ctx->r4 = S32(0X11 << 16);
    // 0x8022112C: lui         $at, 0x160
    ctx->r1 = S32(0X160 << 16);
    // 0x80221130: beq         $v0, $at, L_802211CC
    if (ctx->r2 == ctx->r1) {
        // 0x80221134: lui         $at, 0x180
        ctx->r1 = S32(0X180 << 16);
            goto L_802211CC;
    }
    // 0x80221134: lui         $at, 0x180
    ctx->r1 = S32(0X180 << 16);
    // 0x80221138: beq         $v0, $at, L_802211C4
    if (ctx->r2 == ctx->r1) {
        // 0x8022113C: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_802211C4;
    }
    // 0x8022113C: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x80221140: lui         $at, 0x1A0
    ctx->r1 = S32(0X1A0 << 16);
    // 0x80221144: beq         $v0, $at, L_802211C4
    if (ctx->r2 == ctx->r1) {
        // 0x80221148: lui         $at, 0x1C0
        ctx->r1 = S32(0X1C0 << 16);
            goto L_802211C4;
    }
    // 0x80221148: lui         $at, 0x1C0
    ctx->r1 = S32(0X1C0 << 16);
    // 0x8022114C: beq         $v0, $at, L_802211BC
    if (ctx->r2 == ctx->r1) {
        // 0x80221150: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_802211BC;
    }
    // 0x80221150: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x80221154: beq         $v0, $v1, L_802211BC
    if (ctx->r2 == ctx->r3) {
        // 0x80221158: nop
    
            goto L_802211BC;
    }
    // 0x80221158: nop

    // 0x8022115C: b           L_80221304
    // 0x80221160: nop

        goto L_80221304;
    // 0x80221160: nop

L_80221164:
    // 0x80221164: beq         $v0, $zero, L_802212FC
    if (ctx->r2 == 0) {
        // 0x80221168: lui         $a0, 0x302
        ctx->r4 = S32(0X302 << 16);
            goto L_802212FC;
    }
    // 0x80221168: lui         $a0, 0x302
    ctx->r4 = S32(0X302 << 16);
    // 0x8022116C: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x80221170: beq         $v0, $at, L_802212D0
    if (ctx->r2 == ctx->r1) {
        // 0x80221174: lui         $a0, 0x11
        ctx->r4 = S32(0X11 << 16);
            goto L_802212D0;
    }
    // 0x80221174: lui         $a0, 0x11
    ctx->r4 = S32(0X11 << 16);
    // 0x80221178: lui         $at, 0x40
    ctx->r1 = S32(0X40 << 16);
    // 0x8022117C: beq         $v0, $at, L_802212D8
    if (ctx->r2 == ctx->r1) {
        // 0x80221180: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_802212D8;
    }
    // 0x80221180: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x80221184: lui         $at, 0x60
    ctx->r1 = S32(0X60 << 16);
    // 0x80221188: beq         $v0, $at, L_802212C8
    if (ctx->r2 == ctx->r1) {
        // 0x8022118C: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_802212C8;
    }
    // 0x8022118C: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x80221190: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x80221194: beq         $v0, $at, L_802212E0
    if (ctx->r2 == ctx->r1) {
        // 0x80221198: lui         $at, 0xA0
        ctx->r1 = S32(0XA0 << 16);
            goto L_802212E0;
    }
    // 0x80221198: lui         $at, 0xA0
    ctx->r1 = S32(0XA0 << 16);
    // 0x8022119C: beq         $v0, $at, L_802212AC
    if (ctx->r2 == ctx->r1) {
        // 0x802211A0: lui         $at, 0xC0
        ctx->r1 = S32(0XC0 << 16);
            goto L_802212AC;
    }
    // 0x802211A0: lui         $at, 0xC0
    ctx->r1 = S32(0XC0 << 16);
    // 0x802211A4: beq         $v0, $at, L_80221244
    if (ctx->r2 == ctx->r1) {
        // 0x802211A8: lui         $at, 0xE0
        ctx->r1 = S32(0XE0 << 16);
            goto L_80221244;
    }
    // 0x802211A8: lui         $at, 0xE0
    ctx->r1 = S32(0XE0 << 16);
    // 0x802211AC: beql        $v0, $at, L_802211E0
    if (ctx->r2 == ctx->r1) {
        // 0x802211B0: addiu       $at, $zero, 0xFFF
        ctx->r1 = ADD32(0, 0XFFF);
            goto L_802211E0;
    }
    goto skip_5;
    // 0x802211B0: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    skip_5:
    // 0x802211B4: b           L_80221304
    // 0x802211B8: nop

        goto L_80221304;
    // 0x802211B8: nop

L_802211BC:
    // 0x802211BC: b           L_8022133C
    // 0x802211C0: ori         $a0, $a0, 0x4DD8
    ctx->r4 = ctx->r4 | 0X4DD8;
        goto L_8022133C;
    // 0x802211C0: ori         $a0, $a0, 0x4DD8
    ctx->r4 = ctx->r4 | 0X4DD8;
L_802211C4:
    // 0x802211C4: b           L_8022133C
    // 0x802211C8: ori         $a0, $a0, 0x4E50
    ctx->r4 = ctx->r4 | 0X4E50;
        goto L_8022133C;
    // 0x802211C8: ori         $a0, $a0, 0x4E50
    ctx->r4 = ctx->r4 | 0X4E50;
L_802211CC:
    // 0x802211CC: b           L_8022133C
    // 0x802211D0: ori         $a0, $a0, 0x2D58
    ctx->r4 = ctx->r4 | 0X2D58;
        goto L_8022133C;
    // 0x802211D0: ori         $a0, $a0, 0x2D58
    ctx->r4 = ctx->r4 | 0X2D58;
L_802211D4:
    // 0x802211D4: b           L_8022133C
    // 0x802211D8: ori         $a0, $a0, 0x2E10
    ctx->r4 = ctx->r4 | 0X2E10;
        goto L_8022133C;
    // 0x802211D8: ori         $a0, $a0, 0x2E10
    ctx->r4 = ctx->r4 | 0X2E10;
    // 0x802211DC: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
L_802211E0:
    // 0x802211E0: bne         $a3, $at, L_802211F0
    if (ctx->r7 != ctx->r1) {
        // 0x802211E4: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_802211F0;
    }
    // 0x802211E4: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x802211E8: b           L_8022133C
    // 0x802211EC: ori         $a0, $a0, 0x45D8
    ctx->r4 = ctx->r4 | 0X45D8;
        goto L_8022133C;
    // 0x802211EC: ori         $a0, $a0, 0x45D8
    ctx->r4 = ctx->r4 | 0X45D8;
L_802211F0:
    // 0x802211F0: beq         $a2, $t3, L_80221200
    if (ctx->r6 == ctx->r11) {
        // 0x802211F4: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_80221200;
    }
    // 0x802211F4: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x802211F8: b           L_8022133C
    // 0x802211FC: ori         $a0, $a0, 0x5278
    ctx->r4 = ctx->r4 | 0X5278;
        goto L_8022133C;
    // 0x802211FC: ori         $a0, $a0, 0x5278
    ctx->r4 = ctx->r4 | 0X5278;
L_80221200:
    // 0x80221200: lhu         $t8, 0x12($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X12);
    // 0x80221204: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x80221208: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x8022120C: bne         $t9, $zero, L_80221230
    if (ctx->r25 != 0) {
        // 0x80221210: nop
    
            goto L_80221230;
    }
    // 0x80221210: nop

    // 0x80221214: lbu         $t6, 0x22($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X22);
    // 0x80221218: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8022121C: sll         $t7, $t1, 5
    ctx->r15 = S32(ctx->r9 << 5);
    // 0x80221220: beq         $t6, $at, L_80221230
    if (ctx->r14 == ctx->r1) {
        // 0x80221224: nop
    
            goto L_80221230;
    }
    // 0x80221224: nop

    // 0x80221228: bgezl       $t7, L_8022123C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8022122C: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_8022123C;
    }
    goto skip_6;
    // 0x8022122C: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    skip_6:
L_80221230:
    // 0x80221230: b           L_8022133C
    // 0x80221234: ori         $a0, $a0, 0x49D8
    ctx->r4 = ctx->r4 | 0X49D8;
        goto L_8022133C;
    // 0x80221234: ori         $a0, $a0, 0x49D8
    ctx->r4 = ctx->r4 | 0X49D8;
    // 0x80221238: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
L_8022123C:
    // 0x8022123C: b           L_8022133C
    // 0x80221240: ori         $a0, $a0, 0x3078
    ctx->r4 = ctx->r4 | 0X3078;
        goto L_8022133C;
    // 0x80221240: ori         $a0, $a0, 0x3078
    ctx->r4 = ctx->r4 | 0X3078;
L_80221244:
    // 0x80221244: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x80221248: bne         $a3, $at, L_80221258
    if (ctx->r7 != ctx->r1) {
        // 0x8022124C: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_80221258;
    }
    // 0x8022124C: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x80221250: b           L_8022133C
    // 0x80221254: ori         $a0, $a0, 0x41C8
    ctx->r4 = ctx->r4 | 0X41C8;
        goto L_8022133C;
    // 0x80221254: ori         $a0, $a0, 0x41C8
    ctx->r4 = ctx->r4 | 0X41C8;
L_80221258:
    // 0x80221258: beq         $a2, $t3, L_80221268
    if (ctx->r6 == ctx->r11) {
        // 0x8022125C: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_80221268;
    }
    // 0x8022125C: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x80221260: b           L_8022133C
    // 0x80221264: ori         $a0, $a0, 0x5278
    ctx->r4 = ctx->r4 | 0X5278;
        goto L_8022133C;
    // 0x80221264: ori         $a0, $a0, 0x5278
    ctx->r4 = ctx->r4 | 0X5278;
L_80221268:
    // 0x80221268: lhu         $t8, 0x12($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X12);
    // 0x8022126C: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x80221270: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80221274: bne         $t9, $zero, L_80221298
    if (ctx->r25 != 0) {
        // 0x80221278: nop
    
            goto L_80221298;
    }
    // 0x80221278: nop

    // 0x8022127C: lbu         $t6, 0x22($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X22);
    // 0x80221280: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80221284: sll         $t7, $t1, 5
    ctx->r15 = S32(ctx->r9 << 5);
    // 0x80221288: beq         $t6, $at, L_80221298
    if (ctx->r14 == ctx->r1) {
        // 0x8022128C: nop
    
            goto L_80221298;
    }
    // 0x8022128C: nop

    // 0x80221290: bgezl       $t7, L_802212A4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80221294: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_802212A4;
    }
    goto skip_7;
    // 0x80221294: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    skip_7:
L_80221298:
    // 0x80221298: b           L_8022133C
    // 0x8022129C: ori         $a0, $a0, 0x41C8
    ctx->r4 = ctx->r4 | 0X41C8;
        goto L_8022133C;
    // 0x8022129C: ori         $a0, $a0, 0x41C8
    ctx->r4 = ctx->r4 | 0X41C8;
    // 0x802212A0: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
L_802212A4:
    // 0x802212A4: b           L_8022133C
    // 0x802212A8: ori         $a0, $a0, 0x3048
    ctx->r4 = ctx->r4 | 0X3048;
        goto L_8022133C;
    // 0x802212A8: ori         $a0, $a0, 0x3048
    ctx->r4 = ctx->r4 | 0X3048;
L_802212AC:
    // 0x802212AC: bne         $a2, $t3, L_802212C0
    if (ctx->r6 != ctx->r11) {
        // 0x802212B0: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_802212C0;
    }
    // 0x802212B0: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x802212B4: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x802212B8: b           L_8022133C
    // 0x802212BC: ori         $a0, $a0, 0x4A50
    ctx->r4 = ctx->r4 | 0X4A50;
        goto L_8022133C;
    // 0x802212BC: ori         $a0, $a0, 0x4A50
    ctx->r4 = ctx->r4 | 0X4A50;
L_802212C0:
    // 0x802212C0: b           L_8022133C
    // 0x802212C4: ori         $a0, $a0, 0x5278
    ctx->r4 = ctx->r4 | 0X5278;
        goto L_8022133C;
    // 0x802212C4: ori         $a0, $a0, 0x5278
    ctx->r4 = ctx->r4 | 0X5278;
L_802212C8:
    // 0x802212C8: b           L_8022133C
    // 0x802212CC: ori         $a0, $a0, 0x2078
    ctx->r4 = ctx->r4 | 0X2078;
        goto L_8022133C;
    // 0x802212CC: ori         $a0, $a0, 0x2078
    ctx->r4 = ctx->r4 | 0X2078;
L_802212D0:
    // 0x802212D0: b           L_8022133C
    // 0x802212D4: ori         $a0, $a0, 0x2230
    ctx->r4 = ctx->r4 | 0X2230;
        goto L_8022133C;
    // 0x802212D4: ori         $a0, $a0, 0x2230
    ctx->r4 = ctx->r4 | 0X2230;
L_802212D8:
    // 0x802212D8: b           L_8022133C
    // 0x802212DC: ori         $a0, $a0, 0x2048
    ctx->r4 = ctx->r4 | 0X2048;
        goto L_8022133C;
    // 0x802212DC: ori         $a0, $a0, 0x2048
    ctx->r4 = ctx->r4 | 0X2048;
L_802212E0:
    // 0x802212E0: bne         $a2, $t3, L_802212F4
    if (ctx->r6 != ctx->r11) {
        // 0x802212E4: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_802212F4;
    }
    // 0x802212E4: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x802212E8: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x802212EC: b           L_8022133C
    // 0x802212F0: ori         $a0, $a0, 0x4240
    ctx->r4 = ctx->r4 | 0X4240;
        goto L_8022133C;
    // 0x802212F0: ori         $a0, $a0, 0x4240
    ctx->r4 = ctx->r4 | 0X4240;
L_802212F4:
    // 0x802212F4: b           L_8022133C
    // 0x802212F8: ori         $a0, $a0, 0x5278
    ctx->r4 = ctx->r4 | 0X5278;
        goto L_8022133C;
    // 0x802212F8: ori         $a0, $a0, 0x5278
    ctx->r4 = ctx->r4 | 0X5278;
L_802212FC:
    // 0x802212FC: b           L_8022133C
    // 0x80221300: ori         $a0, $a0, 0x4000
    ctx->r4 = ctx->r4 | 0X4000;
        goto L_8022133C;
    // 0x80221300: ori         $a0, $a0, 0x4000
    ctx->r4 = ctx->r4 | 0X4000;
L_80221304:
    // 0x80221304: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80221308: sh          $ra, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r31;
    // 0x8022130C: addiu       $a0, $a0, 0x382C
    ctx->r4 = ADD32(ctx->r4, 0X382C);
    // 0x80221310: and         $a1, $t5, $t1
    ctx->r5 = ctx->r13 & ctx->r9;
    // 0x80221314: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x80221318: jal         0x80231A24
    // 0x8022131C: sh          $t4, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r12;
    func_80231A24(rdram, ctx);
        goto after_7;
    // 0x8022131C: sh          $t4, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r12;
    after_7:
    // 0x80221320: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x80221324: lui         $a0, 0x302
    ctx->r4 = S32(0X302 << 16);
    // 0x80221328: addiu       $t2, $t2, 0x3B90
    ctx->r10 = ADD32(ctx->r10, 0X3B90);
    // 0x8022132C: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80221330: lhu         $t4, 0x66($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X66);
    // 0x80221334: lhu         $ra, 0x72($sp)
    ctx->r31 = MEM_HU(ctx->r29, 0X72);
    // 0x80221338: ori         $a0, $a0, 0x4000
    ctx->r4 = ctx->r4 | 0X4000;
L_8022133C:
    // 0x8022133C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80221340: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x80221344: sll         $t9, $t1, 3
    ctx->r25 = S32(ctx->r9 << 3);
    // 0x80221348: beq         $t8, $zero, L_80221358
    if (ctx->r24 == 0) {
        // 0x8022134C: ori         $t7, $t7, 0x31D
        ctx->r15 = ctx->r15 | 0X31D;
            goto L_80221358;
    }
    // 0x8022134C: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x80221350: b           L_8022135C
    // 0x80221354: lui         $a1, 0xC800
    ctx->r5 = S32(0XC800 << 16);
        goto L_8022135C;
    // 0x80221354: lui         $a1, 0xC800
    ctx->r5 = S32(0XC800 << 16);
L_80221358:
    // 0x80221358: lui         $a1, 0xC08
    ctx->r5 = S32(0XC08 << 16);
L_8022135C:
    // 0x8022135C: bgezl       $t9, L_80221370
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80221360: lw          $v0, 0x0($t2)
        ctx->r2 = MEM_W(ctx->r10, 0X0);
            goto L_80221370;
    }
    goto skip_8;
    // 0x80221360: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    skip_8:
    // 0x80221364: lui         $a0, 0x5E
    ctx->r4 = S32(0X5E << 16);
    // 0x80221368: ori         $a0, $a0, 0x5278
    ctx->r4 = ctx->r4 | 0X5278;
    // 0x8022136C: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
L_80221370:
    // 0x80221370: or          $t8, $a1, $a0
    ctx->r24 = ctx->r5 | ctx->r4;
    // 0x80221374: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80221378: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8022137C: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x80221380: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80221384: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80221388: sw          $t4, 0x434C($at)
    MEM_W(0X434C, ctx->r1) = ctx->r12;
    // 0x8022138C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80221390: sw          $t1, 0x4348($at)
    MEM_W(0X4348, ctx->r1) = ctx->r9;
    // 0x80221394: sh          $ra, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r31;
L_80221398:
    // 0x80221398: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x8022139C: sll         $t9, $t1, 0
    ctx->r25 = S32(ctx->r9 << 0);
    // 0x802213A0: addiu       $t2, $t2, 0x3B90
    ctx->r10 = ADD32(ctx->r10, 0X3B90);
    // 0x802213A4: bgez        $t9, L_8022140C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802213A8: lhu         $ra, 0x72($sp)
        ctx->r31 = MEM_HU(ctx->r29, 0X72);
            goto L_8022140C;
    }
    // 0x802213A8: lhu         $ra, 0x72($sp)
    ctx->r31 = MEM_HU(ctx->r29, 0X72);
    // 0x802213AC: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x802213B0: lui         $at, 0xE0
    ctx->r1 = S32(0XE0 << 16);
    // 0x802213B4: and         $t7, $t6, $t1
    ctx->r15 = ctx->r14 & ctx->r9;
    // 0x802213B8: bne         $t7, $at, L_8022140C
    if (ctx->r15 != ctx->r1) {
        // 0x802213BC: addiu       $at, $zero, 0xFFF
        ctx->r1 = ADD32(0, 0XFFF);
            goto L_8022140C;
    }
    // 0x802213BC: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x802213C0: bne         $ra, $at, L_802213F0
    if (ctx->r31 != ctx->r1) {
        // 0x802213C4: lui         $t8, 0xFC12
        ctx->r24 = S32(0XFC12 << 16);
            goto L_802213F0;
    }
    // 0x802213C4: lui         $t8, 0xFC12
    ctx->r24 = S32(0XFC12 << 16);
    // 0x802213C8: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x802213CC: lui         $t9, 0xFCFF
    ctx->r25 = S32(0XFCFF << 16);
    // 0x802213D0: lui         $t6, 0xFFFE
    ctx->r14 = S32(0XFFFE << 16);
    // 0x802213D4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802213D8: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x802213DC: ori         $t6, $t6, 0x7838
    ctx->r14 = ctx->r14 | 0X7838;
    // 0x802213E0: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x802213E4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802213E8: b           L_8022140C
    // 0x802213EC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
        goto L_8022140C;
    // 0x802213EC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_802213F0:
    // 0x802213F0: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x802213F4: ori         $t8, $t8, 0x7FFF
    ctx->r24 = ctx->r24 | 0X7FFF;
    // 0x802213F8: addiu       $t9, $zero, -0xDC8
    ctx->r25 = ADD32(0, -0XDC8);
    // 0x802213FC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80221400: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x80221404: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80221408: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_8022140C:
    // 0x8022140C: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x80221410: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x80221414: beql        $t7, $zero, L_80221490
    if (ctx->r15 == 0) {
        // 0x80221418: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80221490;
    }
    goto skip_9;
    // 0x80221418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_9:
    // 0x8022141C: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80221420: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x80221424: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80221428: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8022142C: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x80221430: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80221434: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x80221438: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x8022143C: addiu       $t9, $t9, 0x3B98
    ctx->r25 = ADD32(ctx->r25, 0X3B98);
    // 0x80221440: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x80221444: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80221448: lhu         $v1, -0x178C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X178C);
    // 0x8022144C: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x80221450: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x80221454: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x80221458: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x8022145C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80221460: lh          $t8, 0x4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X4);
    // 0x80221464: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x80221468: addiu       $t7, $t7, 0x3BA0
    ctx->r15 = ADD32(ctx->r15, 0X3BA0);
    // 0x8022146C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80221470: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x80221474: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80221478: addu        $a2, $v1, $t7
    ctx->r6 = ADD32(ctx->r3, ctx->r15);
    // 0x8022147C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80221480: lh          $t9, 0x6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X6);
    // 0x80221484: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x80221488: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8022148C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80221490:
    // 0x80221490: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x80221494: jr          $ra
    // 0x80221498: nop

    return;
    // 0x80221498: nop

;}
RECOMP_FUNC void func_8023A324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023A324: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8023A328: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8023A32C: lbu         $s4, 0x93($sp)
    ctx->r20 = MEM_BU(ctx->r29, 0X93);
    // 0x8023A330: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8023A334: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8023A338: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x8023A33C: or          $fp, $a1, $zero
    ctx->r30 = ctx->r5 | 0;
    // 0x8023A340: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8023A344: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8023A348: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8023A34C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023A350: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023A354: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023A358: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023A35C: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x8023A360: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x8023A364: blez        $s4, L_8023A374
    if (SIGNED(ctx->r20) <= 0) {
        // 0x8023A368: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8023A374;
    }
    // 0x8023A368: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8023A36C: b           L_8023A384
    // 0x8023A370: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023A384;
    // 0x8023A370: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023A374:
    // 0x8023A374: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x8023A378: nop

    // 0x8023A37C: lw          $v0, 0x60($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X60);
    // 0x8023A380: nop

L_8023A384:
    // 0x8023A384: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x8023A388: beq         $at, $zero, L_8023A3BC
    if (ctx->r1 == 0) {
        // 0x8023A38C: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_8023A3BC;
    }
    // 0x8023A38C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8023A390: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x8023A394: addu        $s0, $fp, $t7
    ctx->r16 = ADD32(ctx->r30, ctx->r15);
    // 0x8023A398: addiu       $s6, $zero, 0x80
    ctx->r22 = ADD32(0, 0X80);
    // 0x8023A39C: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
L_8023A3A0:
    // 0x8023A3A0: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
    // 0x8023A3A4: nop

    // 0x8023A3A8: beq         $s3, $t8, L_8023A3BC
    if (ctx->r19 == ctx->r24) {
        // 0x8023A3AC: nop
    
            goto L_8023A3BC;
    }
    // 0x8023A3AC: nop

    // 0x8023A3B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8023A3B4: bne         $s1, $s6, L_8023A3A0
    if (ctx->r17 != ctx->r22) {
        // 0x8023A3B8: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_8023A3A0;
    }
    // 0x8023A3B8: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8023A3BC:
    // 0x8023A3BC: addiu       $s6, $zero, 0x80
    ctx->r22 = ADD32(0, 0X80);
    // 0x8023A3C0: bne         $s1, $s6, L_8023A3DC
    if (ctx->r17 != ctx->r22) {
        // 0x8023A3C4: addiu       $s3, $zero, 0x3
        ctx->r19 = ADD32(0, 0X3);
            goto L_8023A3DC;
    }
    // 0x8023A3C4: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
    // 0x8023A3C8: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x8023A3CC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8023A3D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8023A3D4: b           L_8023A4F4
    // 0x8023A3D8: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
        goto L_8023A4F4;
    // 0x8023A3D8: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
L_8023A3DC:
    // 0x8023A3DC: addiu       $v0, $sp, 0x54
    ctx->r2 = ADD32(ctx->r29, 0X54);
    // 0x8023A3E0: addiu       $v1, $sp, 0x74
    ctx->r3 = ADD32(ctx->r29, 0X74);
L_8023A3E4:
    // 0x8023A3E4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8023A3E8: sb          $zero, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = 0;
    // 0x8023A3EC: sb          $zero, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = 0;
    // 0x8023A3F0: sb          $zero, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = 0;
    // 0x8023A3F4: bne         $v0, $v1, L_8023A3E4
    if (ctx->r2 != ctx->r3) {
        // 0x8023A3F8: sb          $zero, -0x4($v0)
        MEM_B(-0X4, ctx->r2) = 0;
            goto L_8023A3E4;
    }
    // 0x8023A3F8: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
    // 0x8023A3FC: lw          $s2, 0x94($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X94);
    // 0x8023A400: sw          $s1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r17;
    // 0x8023A404: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8023A408: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8023A40C: slti        $at, $s7, 0x2
    ctx->r1 = SIGNED(ctx->r23) < 0X2 ? 1 : 0;
    // 0x8023A410: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8023A414: bne         $at, $zero, L_8023A498
    if (ctx->r1 != 0) {
        // 0x8023A418: sw          $t2, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->r10;
            goto L_8023A498;
    }
    // 0x8023A418: sw          $t2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r10;
    // 0x8023A41C: slti        $at, $s1, 0x80
    ctx->r1 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
    // 0x8023A420: beq         $at, $zero, L_8023A498
    if (ctx->r1 == 0) {
        // 0x8023A424: sll         $t3, $s1, 1
        ctx->r11 = S32(ctx->r17 << 1);
            goto L_8023A498;
    }
    // 0x8023A424: sll         $t3, $s1, 1
    ctx->r11 = S32(ctx->r17 << 1);
    // 0x8023A428: addu        $s0, $fp, $t3
    ctx->r16 = ADD32(ctx->r30, ctx->r11);
    // 0x8023A42C: addiu       $s5, $sp, 0x54
    ctx->r21 = ADD32(ctx->r29, 0X54);
L_8023A430:
    // 0x8023A430: lhu         $t4, 0x0($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X0);
    // 0x8023A434: sll         $t5, $a1, 1
    ctx->r13 = S32(ctx->r5 << 1);
    // 0x8023A438: bne         $s3, $t4, L_8023A478
    if (ctx->r19 != ctx->r12) {
        // 0x8023A43C: addu        $v0, $fp, $t5
        ctx->r2 = ADD32(ctx->r30, ctx->r13);
            goto L_8023A478;
    }
    // 0x8023A43C: addu        $v0, $fp, $t5
    ctx->r2 = ADD32(ctx->r30, ctx->r13);
    // 0x8023A440: sb          $s4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r20;
    // 0x8023A444: sb          $s1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r17;
    // 0x8023A448: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8023A44C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8023A450: jal         0x8023A524
    // 0x8023A454: andi        $a3, $s4, 0xFF
    ctx->r7 = ctx->r20 & 0XFF;
    func_8023A524(rdram, ctx);
        goto after_0;
    // 0x8023A454: andi        $a3, $s4, 0xFF
    ctx->r7 = ctx->r20 & 0XFF;
    after_0:
    // 0x8023A458: beq         $v0, $zero, L_8023A468
    if (ctx->r2 == 0) {
        // 0x8023A45C: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_8023A468;
    }
    // 0x8023A45C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x8023A460: b           L_8023A4F8
    // 0x8023A464: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8023A4F8;
    // 0x8023A464: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8023A468:
    // 0x8023A468: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8023A46C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8023A470: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8023A474: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
L_8023A478:
    // 0x8023A478: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8023A47C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8023A480: slt         $at, $t8, $s7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x8023A484: beq         $at, $zero, L_8023A498
    if (ctx->r1 == 0) {
        // 0x8023A488: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_8023A498;
    }
    // 0x8023A488: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8023A48C: slti        $at, $s1, 0x80
    ctx->r1 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
    // 0x8023A490: bne         $at, $zero, L_8023A430
    if (ctx->r1 != 0) {
        // 0x8023A494: nop
    
            goto L_8023A430;
    }
    // 0x8023A494: nop

L_8023A498:
    // 0x8023A498: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x8023A49C: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x8023A4A0: addiu       $s5, $sp, 0x54
    ctx->r21 = ADD32(ctx->r29, 0X54);
    // 0x8023A4A4: bne         $s1, $s6, L_8023A4C8
    if (ctx->r17 != ctx->r22) {
        // 0x8023A4A8: sw          $t9, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r25;
            goto L_8023A4C8;
    }
    // 0x8023A4A8: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x8023A4AC: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x8023A4B0: lw          $t3, 0x98($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X98);
    // 0x8023A4B4: slt         $at, $t2, $s7
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x8023A4B8: beq         $at, $zero, L_8023A4C8
    if (ctx->r1 == 0) {
        // 0x8023A4BC: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_8023A4C8;
    }
    // 0x8023A4BC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x8023A4C0: b           L_8023A4F4
    // 0x8023A4C4: sw          $a1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r5;
        goto L_8023A4F4;
    // 0x8023A4C4: sw          $a1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r5;
L_8023A4C8:
    // 0x8023A4C8: sll         $t5, $a1, 1
    ctx->r13 = S32(ctx->r5 << 1);
    // 0x8023A4CC: addu        $t6, $fp, $t5
    ctx->r14 = ADD32(ctx->r30, ctx->r13);
    // 0x8023A4D0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8023A4D4: sh          $t4, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r12;
    // 0x8023A4D8: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8023A4DC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8023A4E0: jal         0x8023A524
    // 0x8023A4E4: andi        $a3, $s4, 0xFF
    ctx->r7 = ctx->r20 & 0XFF;
    func_8023A524(rdram, ctx);
        goto after_1;
    // 0x8023A4E4: andi        $a3, $s4, 0xFF
    ctx->r7 = ctx->r20 & 0XFF;
    after_1:
    // 0x8023A4E8: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x8023A4EC: nop

    // 0x8023A4F0: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
L_8023A4F4:
    // 0x8023A4F4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8023A4F8:
    // 0x8023A4F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023A4FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023A500: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023A504: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023A508: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8023A50C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8023A510: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8023A514: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8023A518: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8023A51C: jr          $ra
    // 0x8023A520: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x8023A520: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_8021F4F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021F4F8: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8021F4FC: lh          $t6, 0x1B5E($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X1B5E);
    // 0x8021F500: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8021F504: jr          $ra
    // 0x8021F508: sh          $t6, 0x1B60($at)
    MEM_H(0X1B60, ctx->r1) = ctx->r14;
    return;
    // 0x8021F508: sh          $t6, 0x1B60($at)
    MEM_H(0X1B60, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_8022CA14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022CA14: sw          $a2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r6;
    // 0x8022CA18: lw          $t6, 0x260($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X260);
    // 0x8022CA1C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8022CA20: jr          $ra
    // 0x8022CA24: sw          $a1, 0x260($a0)
    MEM_W(0X260, ctx->r4) = ctx->r5;
    return;
    // 0x8022CA24: sw          $a1, 0x260($a0)
    MEM_W(0X260, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_8023E1F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E1F0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8023E1F4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8023E1F8: lbu         $t6, 0x47($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X47);
    // 0x8023E1FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023E200: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8023E204: slti        $at, $t6, 0x41
    ctx->r1 = SIGNED(ctx->r14) < 0X41 ? 1 : 0;
    // 0x8023E208: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8023E20C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8023E210: bne         $at, $zero, L_8023E220
    if (ctx->r1 != 0) {
        // 0x8023E214: sw          $zero, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = 0;
            goto L_8023E220;
    }
    // 0x8023E214: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8023E218: b           L_8023E31C
    // 0x8023E21C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8023E31C;
    // 0x8023E21C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8023E220:
    // 0x8023E220: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x8023E224: blez        $t7, L_8023E318
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8023E228: nop
    
            goto L_8023E318;
    }
    // 0x8023E228: nop

L_8023E22C:
    // 0x8023E22C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8023E230: lbu         $a1, 0x47($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X47);
    // 0x8023E234: jal         0x80247D10
    // 0x8023E238: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    func_80247D10(rdram, ctx);
        goto after_0;
    // 0x8023E238: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    after_0:
    // 0x8023E23C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8023E240: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8023E244: beq         $t8, $zero, L_8023E254
    if (ctx->r24 == 0) {
        // 0x8023E248: nop
    
            goto L_8023E254;
    }
    // 0x8023E248: nop

    // 0x8023E24C: b           L_8023E31C
    // 0x8023E250: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_8023E31C;
    // 0x8023E250: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8023E254:
    // 0x8023E254: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8023E258: lbu         $t1, 0x47($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X47);
    // 0x8023E25C: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x8023E260: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x8023E264: lui         $a3, 0x8025
    ctx->r7 = S32(0X8025 << 16);
    // 0x8023E268: addiu       $t0, $t9, -0x8
    ctx->r8 = ADD32(ctx->r25, -0X8);
    // 0x8023E26C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8023E270: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8023E274: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x8023E278: sb          $t2, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r10;
    // 0x8023E27C: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    // 0x8023E280: lw          $a3, 0x1684($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X1684);
    // 0x8023E284: lw          $a2, 0x1680($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1680);
    // 0x8023E288: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x8023E28C: jal         0x8023D228
    // 0x8023E290: addiu       $a1, $zero, 0x2EE0
    ctx->r5 = ADD32(0, 0X2EE0);
    func_8023D228(rdram, ctx);
        goto after_1;
    // 0x8023E290: addiu       $a1, $zero, 0x2EE0
    ctx->r5 = ADD32(0, 0X2EE0);
    after_1:
    // 0x8023E294: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8023E298: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x8023E29C: lui         $a3, 0xF
    ctx->r7 = S32(0XF << 16);
    // 0x8023E2A0: ori         $a3, $a3, 0x4240
    ctx->r7 = ctx->r7 | 0X4240;
    // 0x8023E2A4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8023E2A8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8023E2AC: jal         0x8023D128
    // 0x8023E2B0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8023D128(rdram, ctx);
        goto after_2;
    // 0x8023E2B0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_2:
    // 0x8023E2B4: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x8023E2B8: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8023E2BC: addiu       $t8, $t8, 0x5EF0
    ctx->r24 = ADD32(ctx->r24, 0X5EF0);
    // 0x8023E2C0: addiu       $t5, $t5, 0x5ED8
    ctx->r13 = ADD32(ctx->r13, 0X5ED8);
    // 0x8023E2C4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8023E2C8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x8023E2CC: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023E2D0: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x8023E2D4: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x8023E2D8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8023E2DC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8023E2E0: addiu       $a0, $a0, 0x5EB8
    ctx->r4 = ADD32(ctx->r4, 0X5EB8);
    // 0x8023E2E4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8023E2E8: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8023E2EC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8023E2F0: jal         0x8023E920
    // 0x8023E2F4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_8023E920(rdram, ctx);
        goto after_3;
    // 0x8023E2F4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_3:
    // 0x8023E2F8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023E2FC: addiu       $a0, $a0, 0x5ED8
    ctx->r4 = ADD32(ctx->r4, 0X5ED8);
    // 0x8023E300: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8023E304: jal         0x802374B0
    // 0x8023E308: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_4;
    // 0x8023E308: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8023E30C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8023E310: bgtz        $t9, L_8023E22C
    if (SIGNED(ctx->r25) > 0) {
        // 0x8023E314: nop
    
            goto L_8023E22C;
    }
    // 0x8023E314: nop

L_8023E318:
    // 0x8023E318: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
L_8023E31C:
    // 0x8023E31C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023E320: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8023E324: jr          $ra
    // 0x8023E328: nop

    return;
    // 0x8023E328: nop

;}
RECOMP_FUNC void func_80234EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234EB0: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x80234EB4: lw          $v1, 0x40($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X40);
    // 0x80234EB8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80234EBC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80234EC0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80234EC4: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x80234EC8: jr          $ra
    // 0x80234ECC: lw          $v0, 0x28($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X28);
    return;
    // 0x80234ECC: lw          $v0, 0x28($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X28);
;}
RECOMP_FUNC void func_8020765C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020765C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80207660: lwc1        $f0, 0x2B04($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2B04);
    // 0x80207664: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80207668: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8020766C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80207670: nop

    // 0x80207674: bc1fl       L_80207684
    if (!c1cs) {
        // 0x80207678: lwc1        $f2, 0x8($a1)
        ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
            goto L_80207684;
    }
    goto skip_0;
    // 0x80207678: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    skip_0:
    // 0x8020767C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80207680: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
L_80207684:
    // 0x80207684: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80207688: nop

    // 0x8020768C: bc1fl       L_802076A0
    if (!c1cs) {
        // 0x80207690: lwc1        $f2, 0x8($a2)
        ctx->f2.u32l = MEM_W(ctx->r6, 0X8);
            goto L_802076A0;
    }
    goto skip_1;
    // 0x80207690: lwc1        $f2, 0x8($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X8);
    skip_1:
    // 0x80207694: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80207698: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8020769C: lwc1        $f2, 0x8($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X8);
L_802076A0:
    // 0x802076A0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802076A4: nop

    // 0x802076A8: bc1fl       L_802076BC
    if (!c1cs) {
        // 0x802076AC: lwc1        $f2, 0x8($a3)
        ctx->f2.u32l = MEM_W(ctx->r7, 0X8);
            goto L_802076BC;
    }
    goto skip_2;
    // 0x802076AC: lwc1        $f2, 0x8($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X8);
    skip_2:
    // 0x802076B0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x802076B4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802076B8: lwc1        $f2, 0x8($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X8);
L_802076BC:
    // 0x802076BC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802076C0: nop

    // 0x802076C4: bc1f        L_802076D0
    if (!c1cs) {
        // 0x802076C8: nop
    
            goto L_802076D0;
    }
    // 0x802076C8: nop

    // 0x802076CC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_802076D0:
    // 0x802076D0: jr          $ra
    // 0x802076D4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x802076D4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80238D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238D94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80238D98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80238D9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80238DA0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80238DA4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80238DA8: jal         0x80245AD0
    // 0x80238DAC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    func_80245AD0(rdram, ctx);
        goto after_0;
    // 0x80238DAC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    after_0:
    // 0x80238DB0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80238DB4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80238DB8: jal         0x80238E34
    // 0x80238DBC: nop

    func_80238E34(rdram, ctx);
        goto after_1;
    // 0x80238DBC: nop

    after_1:
    // 0x80238DC0: jal         0x80245B14
    // 0x80238DC4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_80245B14(rdram, ctx);
        goto after_2;
    // 0x80238DC4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x80238DC8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80238DCC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80238DD0: beq         $v1, $zero, L_80238DE0
    if (ctx->r3 == 0) {
        // 0x80238DD4: addiu       $t8, $zero, 0xFF
        ctx->r24 = ADD32(0, 0XFF);
            goto L_80238DE0;
    }
    // 0x80238DD4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80238DD8: b           L_80238E24
    // 0x80238DDC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80238E24;
    // 0x80238DDC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80238DE0:
    // 0x80238DE0: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x80238DE4: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80238DE8: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80238DEC: sb          $t8, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r24;
    // 0x80238DF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80238DF4: jal         0x802450E8
    // 0x80238DF8: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    func_802450E8(rdram, ctx);
        goto after_3;
    // 0x80238DF8: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    after_3:
    // 0x80238DFC: beq         $v0, $zero, L_80238E0C
    if (ctx->r2 == 0) {
        // 0x80238E00: nop
    
            goto L_80238E0C;
    }
    // 0x80238E00: nop

    // 0x80238E04: b           L_80238E28
    // 0x80238E08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80238E28;
    // 0x80238E08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80238E0C:
    // 0x80238E0C: jal         0x80245B40
    // 0x80238E10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80245B40(rdram, ctx);
        goto after_4;
    // 0x80238E10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80238E14: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80238E18: nop

    // 0x80238E1C: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x80238E20: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
L_80238E24:
    // 0x80238E24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80238E28:
    // 0x80238E28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80238E2C: jr          $ra
    // 0x80238E30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80238E30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80246F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246F80: lui         $t6, 0xA404
    ctx->r14 = S32(0XA404 << 16);
    // 0x80246F84: jr          $ra
    // 0x80246F88: sw          $a0, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r4;
    return;
    // 0x80246F88: sw          $a0, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r4;
;}
RECOMP_FUNC void func_802230E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802230E4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802230E8: addiu       $a0, $a0, 0x3B90
    ctx->r4 = ADD32(ctx->r4, 0X3B90);
    // 0x802230EC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x802230F0: lui         $t7, 0xBD00
    ctx->r15 = S32(0XBD00 << 16);
    // 0x802230F4: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802230F8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x802230FC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80223100: jr          $ra
    // 0x80223104: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    return;
    // 0x80223104: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
;}
RECOMP_FUNC void func_8023DAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023DAE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023DAE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023DAE8: jal         0x80241760
    // 0x8023DAEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x8023DAEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023DAF0: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8023DAF4: lw          $t6, 0x1770($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1770);
    // 0x8023DAF8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023DAFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023DB00: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8023DB04: jal         0x80241780
    // 0x8023DB08: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_80241780(rdram, ctx);
        goto after_1;
    // 0x8023DB08: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_1:
    // 0x8023DB0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023DB10: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8023DB14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023DB18: jr          $ra
    // 0x8023DB1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8023DB1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80247294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247294: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80247298: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024729C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802472A0: jal         0x80241760
    // 0x802472A4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x802472A4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802472A8: jal         0x80238B80
    // 0x802472AC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80238B80(rdram, ctx);
        goto after_1;
    // 0x802472AC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x802472B0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802472B4: sw          $v0, 0x5F70($at)
    MEM_W(0X5F70, ctx->r1) = ctx->r2;
    // 0x802472B8: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x802472BC: lw          $t6, 0x5F70($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5F70);
    // 0x802472C0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x802472C4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x802472C8: or          $t9, $t6, $zero
    ctx->r25 = ctx->r14 | 0;
    // 0x802472CC: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x802472D0: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x802472D4: sltu        $at, $t3, $t1
    ctx->r1 = ctx->r11 < ctx->r9 ? 1 : 0;
    // 0x802472D8: addu        $t2, $at, $t8
    ctx->r10 = ADD32(ctx->r1, ctx->r24);
    // 0x802472DC: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x802472E0: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x802472E4: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x802472E8: jal         0x8024A740
    // 0x802472EC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_8024A740(rdram, ctx);
        goto after_2;
    // 0x802472EC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_2:
    // 0x802472F0: jal         0x80241780
    // 0x802472F4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_80241780(rdram, ctx);
        goto after_3;
    // 0x802472F4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x802472F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802472FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80247300: jr          $ra
    // 0x80247304: nop

    return;
    // 0x80247304: nop

;}
RECOMP_FUNC void func_80220980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80220980: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80220984: addiu       $a1, $a1, 0x3B90
    ctx->r5 = ADD32(ctx->r5, 0X3B90);
    // 0x80220988: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022098C: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x80220990: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80220994: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80220998: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x8022099C: jr          $ra
    // 0x802209A0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    return;
    // 0x802209A0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
;}
RECOMP_FUNC void func_802344CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802344CC: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x802344D0: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x802344D4: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x802344D8: lw          $t6, 0x3950($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3950);
    // 0x802344DC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802344E0: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x802344E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802344E8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x802344EC: jr          $ra
    // 0x802344F0: lh          $v0, 0x6($t8)
    ctx->r2 = MEM_H(ctx->r24, 0X6);
    return;
    // 0x802344F0: lh          $v0, 0x6($t8)
    ctx->r2 = MEM_H(ctx->r24, 0X6);
;}
RECOMP_FUNC void func_80245404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80245404: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80245408: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8024540C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80245410: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80245414: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80245418: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8024541C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80245420: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80245424: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80245428: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8024542C: lbu         $t6, 0x65($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X65);
    // 0x80245430: andi        $s0, $a3, 0xFF
    ctx->r16 = ctx->r7 & 0XFF;
    // 0x80245434: andi        $s1, $a2, 0xFF
    ctx->r17 = ctx->r6 & 0XFF;
    // 0x80245438: beq         $t6, $zero, L_80245458
    if (ctx->r14 == 0) {
        // 0x8024543C: or          $s2, $a0, $zero
        ctx->r18 = ctx->r4 | 0;
            goto L_80245458;
    }
    // 0x8024543C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80245440: jal         0x802456A0
    // 0x80245444: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    func_802456A0(rdram, ctx);
        goto after_0;
    // 0x80245444: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    after_0:
    // 0x80245448: beq         $v0, $zero, L_80245458
    if (ctx->r2 == 0) {
        // 0x8024544C: nop
    
            goto L_80245458;
    }
    // 0x8024544C: nop

    // 0x80245450: b           L_80245684
    // 0x80245454: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80245684;
    // 0x80245454: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80245458:
    // 0x80245458: blez        $s0, L_8024546C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8024545C: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_8024546C;
    }
    // 0x8024545C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80245460: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80245464: b           L_80245478
    // 0x80245468: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
        goto L_80245478;
    // 0x80245468: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
L_8024546C:
    // 0x8024546C: lw          $t8, 0x60($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X60);
    // 0x80245470: nop

    // 0x80245474: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
L_80245478:
    // 0x80245478: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024547C: bne         $v0, $s1, L_802454B4
    if (ctx->r2 != ctx->r17) {
        // 0x80245480: or          $s3, $s1, $zero
        ctx->r19 = ctx->r17 | 0;
            goto L_802454B4;
    }
    // 0x80245480: or          $s3, $s1, $zero
    ctx->r19 = ctx->r17 | 0;
    // 0x80245484: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80245488: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8024548C: negu        $a1, $t0
    ctx->r5 = SUB32(0, ctx->r8);
    // 0x80245490: sll         $t2, $a1, 1
    ctx->r10 = S32(ctx->r5 << 1);
    // 0x80245494: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80245498: addiu       $a1, $t2, 0x100
    ctx->r5 = ADD32(ctx->r10, 0X100);
    // 0x8024549C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x802454A0: jal         0x80244AC0
    // 0x802454A4: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    func_80244AC0(rdram, ctx);
        goto after_1;
    // 0x802454A4: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    after_1:
    // 0x802454A8: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x802454AC: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x802454B0: sb          $v0, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r2;
L_802454B4:
    // 0x802454B4: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x802454B8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802454BC: sll         $s4, $v1, 3
    ctx->r20 = S32(ctx->r3 << 3);
L_802454C0:
    // 0x802454C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802454C4: bne         $v0, $s3, L_80245524
    if (ctx->r2 != ctx->r19) {
        // 0x802454C8: or          $a3, $s1, $zero
        ctx->r7 = ctx->r17 | 0;
            goto L_80245524;
    }
    // 0x802454C8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x802454CC: lw          $t4, 0x54($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X54);
    // 0x802454D0: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x802454D4: addu        $t5, $t4, $s4
    ctx->r13 = ADD32(ctx->r12, ctx->r20);
    // 0x802454D8: addu        $a2, $t5, $s0
    ctx->r6 = ADD32(ctx->r13, ctx->r16);
    // 0x802454DC: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x802454E0: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x802454E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802454E8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x802454EC: jal         0x80246660
    // 0x802454F0: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_80246660(rdram, ctx);
        goto after_2;
    // 0x802454F0: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_2:
    // 0x802454F4: lw          $t7, 0x58($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X58);
    // 0x802454F8: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x802454FC: addu        $t8, $t7, $s4
    ctx->r24 = ADD32(ctx->r15, ctx->r20);
    // 0x80245500: addu        $a2, $t8, $s0
    ctx->r6 = ADD32(ctx->r24, ctx->r16);
    // 0x80245504: andi        $t9, $a2, 0xFFFF
    ctx->r25 = ctx->r6 & 0XFFFF;
    // 0x80245508: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x8024550C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80245510: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80245514: jal         0x80246660
    // 0x80245518: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_80246660(rdram, ctx);
        goto after_3;
    // 0x80245518: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_3:
    // 0x8024551C: b           L_80245548
    // 0x80245520: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80245548;
    // 0x80245520: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80245524:
    // 0x80245524: lw          $t1, 0x54($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X54);
    // 0x80245528: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x8024552C: addu        $t0, $t1, $s4
    ctx->r8 = ADD32(ctx->r9, ctx->r20);
    // 0x80245530: addu        $a2, $t0, $s0
    ctx->r6 = ADD32(ctx->r8, ctx->r16);
    // 0x80245534: andi        $t2, $a2, 0xFFFF
    ctx->r10 = ctx->r6 & 0XFFFF;
    // 0x80245538: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x8024553C: jal         0x80245710
    // 0x80245540: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    func_80245710(rdram, ctx);
        goto after_4;
    // 0x80245540: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_4:
    // 0x80245544: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80245548:
    // 0x80245548: beq         $v0, $zero, L_80245558
    if (ctx->r2 == 0) {
        // 0x8024554C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80245558;
    }
    // 0x8024554C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80245550: b           L_80245680
    // 0x80245554: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80245680;
    // 0x80245554: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80245558:
    // 0x80245558: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x8024555C: bne         $at, $zero, L_802454C0
    if (ctx->r1 != 0) {
        // 0x80245560: addiu       $s1, $s1, 0x20
        ctx->r17 = ADD32(ctx->r17, 0X20);
            goto L_802454C0;
    }
    // 0x80245560: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x80245564: bne         $s3, $zero, L_80245680
    if (ctx->r19 != 0) {
        // 0x80245568: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80245680;
    }
    // 0x80245568: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8024556C: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80245570: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80245574: negu        $a1, $t4
    ctx->r5 = SUB32(0, ctx->r12);
    // 0x80245578: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x8024557C: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80245580: addiu       $a1, $t6, 0x100
    ctx->r5 = ADD32(ctx->r14, 0X100);
    // 0x80245584: jal         0x80244AC0
    // 0x80245588: addu        $a0, $t3, $t5
    ctx->r4 = ADD32(ctx->r11, ctx->r13);
    func_80244AC0(rdram, ctx);
        goto after_5;
    // 0x80245588: addu        $a0, $t3, $t5
    ctx->r4 = ADD32(ctx->r11, ctx->r13);
    after_5:
    // 0x8024558C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80245590: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x80245594: lbu         $t9, 0x1($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X1);
    // 0x80245598: andi        $s3, $v0, 0xFF
    ctx->r19 = ctx->r2 & 0XFF;
    // 0x8024559C: beq         $t7, $t9, L_80245640
    if (ctx->r15 == ctx->r25) {
        // 0x802455A0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80245640;
    }
    // 0x802455A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802455A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802455A8: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_802455AC:
    // 0x802455AC: lw          $t1, 0x58($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X58);
    // 0x802455B0: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x802455B4: addu        $t0, $t1, $s4
    ctx->r8 = ADD32(ctx->r9, ctx->r20);
    // 0x802455B8: addu        $a2, $t0, $s0
    ctx->r6 = ADD32(ctx->r8, ctx->r16);
    // 0x802455BC: andi        $t2, $a2, 0xFFFF
    ctx->r10 = ctx->r6 & 0XFFFF;
    // 0x802455C0: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x802455C4: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x802455C8: jal         0x80245710
    // 0x802455CC: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_80245710(rdram, ctx);
        goto after_6;
    // 0x802455CC: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_6:
    // 0x802455D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802455D4: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x802455D8: bne         $at, $zero, L_802455AC
    if (ctx->r1 != 0) {
        // 0x802455DC: addiu       $s1, $s1, 0x20
        ctx->r17 = ADD32(ctx->r17, 0X20);
            goto L_802455AC;
    }
    // 0x802455DC: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x802455E0: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x802455E4: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x802455E8: lbu         $t5, 0x1($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X1);
    // 0x802455EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802455F0: beq         $s3, $t5, L_80245604
    if (ctx->r19 == ctx->r13) {
        // 0x802455F4: addiu       $s3, $zero, 0x8
        ctx->r19 = ADD32(0, 0X8);
            goto L_80245604;
    }
    // 0x802455F4: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
    // 0x802455F8: b           L_80245680
    // 0x802455FC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80245680;
    // 0x802455FC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80245600: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_80245604:
    // 0x80245604: lw          $t4, 0x54($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X54);
    // 0x80245608: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x8024560C: addu        $t6, $t4, $s4
    ctx->r14 = ADD32(ctx->r12, ctx->r20);
    // 0x80245610: addu        $a2, $t6, $s0
    ctx->r6 = ADD32(ctx->r14, ctx->r16);
    // 0x80245614: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80245618: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x8024561C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80245620: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80245624: jal         0x80246660
    // 0x80245628: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_80246660(rdram, ctx);
        goto after_7;
    // 0x80245628: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_7:
    // 0x8024562C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80245630: bne         $s0, $s3, L_80245604
    if (ctx->r16 != ctx->r19) {
        // 0x80245634: addiu       $s1, $s1, 0x20
        ctx->r17 = ADD32(ctx->r17, 0X20);
            goto L_80245604;
    }
    // 0x80245634: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x80245638: b           L_80245680
    // 0x8024563C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80245680;
    // 0x8024563C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80245640:
    // 0x80245640: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80245644: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_80245648:
    // 0x80245648: lw          $t9, 0x58($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X58);
    // 0x8024564C: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80245650: addu        $t8, $t9, $s4
    ctx->r24 = ADD32(ctx->r25, ctx->r20);
    // 0x80245654: addu        $a2, $t8, $s0
    ctx->r6 = ADD32(ctx->r24, ctx->r16);
    // 0x80245658: andi        $t1, $a2, 0xFFFF
    ctx->r9 = ctx->r6 & 0XFFFF;
    // 0x8024565C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80245660: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80245664: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x80245668: jal         0x80246660
    // 0x8024566C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_80246660(rdram, ctx);
        goto after_8;
    // 0x8024566C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_8:
    // 0x80245670: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80245674: bne         $s0, $s3, L_80245648
    if (ctx->r16 != ctx->r19) {
        // 0x80245678: addiu       $s1, $s1, 0x20
        ctx->r17 = ADD32(ctx->r17, 0X20);
            goto L_80245648;
    }
    // 0x80245678: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x8024567C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80245680:
    // 0x80245680: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80245684:
    // 0x80245684: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80245688: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8024568C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80245690: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80245694: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80245698: jr          $ra
    // 0x8024569C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8024569C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80220534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80220534: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80220538: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x8022053C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80220540: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80220544: addiu       $t0, $t0, 0x3B90
    ctx->r8 = ADD32(ctx->r8, 0X3B90);
    // 0x80220548: lui         $t7, 0xB700
    ctx->r15 = S32(0XB700 << 16);
    // 0x8022054C: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x80220550: bc1f        L_80220560
    if (!c1cs) {
        // 0x80220554: nop
    
            goto L_80220560;
    }
    // 0x80220554: nop

    // 0x80220558: b           L_80220578
    // 0x8022055C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_80220578;
    // 0x8022055C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_80220560:
    // 0x80220560: lwc1        $f2, 0x3938($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3938);
    // 0x80220564: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80220568: nop

    // 0x8022056C: bc1fl       L_8022057C
    if (!c1cs) {
        // 0x80220570: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_8022057C;
    }
    goto skip_0;
    // 0x80220570: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_0:
    // 0x80220574: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_80220578:
    // 0x80220578: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_8022057C:
    // 0x8022057C: lui         $a3, 0x8025
    ctx->r7 = S32(0X8025 << 16);
    // 0x80220580: addiu       $a3, $a3, -0x1790
    ctx->r7 = ADD32(ctx->r7, -0X1790);
    // 0x80220584: swc1        $f12, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f12.u32l;
    // 0x80220588: bc1f        L_80220674
    if (!c1cs) {
        // 0x8022058C: nop
    
            goto L_80220674;
    }
    // 0x8022058C: nop

    // 0x80220590: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80220594: lui         $t1, 0xBC00
    ctx->r9 = S32(0XBC00 << 16);
    // 0x80220598: ori         $t1, $t1, 0x8
    ctx->r9 = ctx->r9 | 0X8;
    // 0x8022059C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802205A0: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x802205A4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802205A8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x802205AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802205B0: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x802205B4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x802205B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802205BC: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x802205C0: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x802205C4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x802205C8: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x802205CC: addiu       $t3, $zero, 0x3E8
    ctx->r11 = ADD32(0, 0X3E8);
    // 0x802205D0: lui         $t4, 0x1
    ctx->r12 = S32(0X1 << 16);
    // 0x802205D4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802205D8: ori         $t4, $t4, 0xF400
    ctx->r12 = ctx->r12 | 0XF400;
    // 0x802205DC: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x802205E0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802205E4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802205E8: nop

    // 0x802205EC: subu        $a2, $t3, $a1
    ctx->r6 = SUB32(ctx->r11, ctx->r5);
    // 0x802205F0: div         $zero, $t4, $a2
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r6)));
    // 0x802205F4: negu        $t8, $a1
    ctx->r24 = SUB32(0, ctx->r5);
    // 0x802205F8: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x802205FC: addu        $t1, $t9, $t4
    ctx->r9 = ADD32(ctx->r25, ctx->r12);
    // 0x80220600: mflo        $t5
    ctx->r13 = lo;
    // 0x80220604: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x80220608: bne         $a2, $zero, L_80220614
    if (ctx->r6 != 0) {
        // 0x8022060C: nop
    
            goto L_80220614;
    }
    // 0x8022060C: nop

    // 0x80220610: break       7
    do_break(2149713424);
L_80220614:
    // 0x80220614: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80220618: bne         $a2, $at, L_8022062C
    if (ctx->r6 != ctx->r1) {
        // 0x8022061C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022062C;
    }
    // 0x8022061C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80220620: bne         $t4, $at, L_8022062C
    if (ctx->r12 != ctx->r1) {
        // 0x80220624: nop
    
            goto L_8022062C;
    }
    // 0x80220624: nop

    // 0x80220628: break       6
    do_break(2149713448);
L_8022062C:
    // 0x8022062C: div         $zero, $t1, $a2
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r6)));
    // 0x80220630: addu        $at, $t4, $zero
    ctx->r1 = ADD32(ctx->r12, 0);
    // 0x80220634: mflo        $t2
    ctx->r10 = lo;
    // 0x80220638: andi        $t3, $t2, 0xFFFF
    ctx->r11 = ctx->r10 & 0XFFFF;
    // 0x8022063C: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80220640: or          $t4, $t7, $t3
    ctx->r12 = ctx->r15 | ctx->r11;
    // 0x80220644: bne         $a2, $zero, L_80220650
    if (ctx->r6 != 0) {
        // 0x80220648: nop
    
            goto L_80220650;
    }
    // 0x80220648: nop

    // 0x8022064C: break       7
    do_break(2149713484);
L_80220650:
    // 0x80220650: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80220654: bne         $a2, $at, L_80220668
    if (ctx->r6 != ctx->r1) {
        // 0x80220658: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80220668;
    }
    // 0x80220658: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022065C: bne         $t1, $at, L_80220668
    if (ctx->r9 != ctx->r1) {
        // 0x80220660: nop
    
            goto L_80220668;
    }
    // 0x80220660: nop

    // 0x80220664: break       6
    do_break(2149713508);
L_80220668:
    // 0x80220668: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
    // 0x8022066C: jr          $ra
    // 0x80220670: nop

    return;
    // 0x80220670: nop

L_80220674:
    // 0x80220674: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80220678: addiu       $t0, $t0, 0x3B90
    ctx->r8 = ADD32(ctx->r8, 0X3B90);
    // 0x8022067C: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80220680: lui         $t6, 0xB600
    ctx->r14 = S32(0XB600 << 16);
    // 0x80220684: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x80220688: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x8022068C: sw          $t5, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r13;
    // 0x80220690: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80220694: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80220698: jr          $ra
    // 0x8022069C: nop

    return;
    // 0x8022069C: nop

;}
RECOMP_FUNC void func_802306D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802306D0: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x802306D4: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x802306D8: beq         $at, $zero, L_802306F0
    if (ctx->r1 == 0) {
        // 0x802306DC: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_802306F0;
    }
    // 0x802306DC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802306E0: addiu       $v0, $t6, 0x30
    ctx->r2 = ADD32(ctx->r14, 0X30);
    // 0x802306E4: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x802306E8: jr          $ra
    // 0x802306EC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    return;
    // 0x802306EC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_802306F0:
    // 0x802306F0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802306F4: jr          $ra
    // 0x802306F8: nop

    return;
    // 0x802306F8: nop

;}
RECOMP_FUNC void func_8022D3F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022D3F0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022D3F4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8022D3F8: lw          $a1, -0x78C8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X78C8);
    // 0x8022D3FC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022D400: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D404: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8022D408: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8022D40C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8022D410: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8022D414: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8022D418: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8022D41C: addiu       $a0, $a0, 0x479C
    ctx->r4 = ADD32(ctx->r4, 0X479C);
    // 0x8022D420: jal         0x80231A24
    // 0x8022D424: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022D424: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x8022D428: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x8022D42C: lui         $s5, 0x8028
    ctx->r21 = S32(0X8028 << 16);
    // 0x8022D430: lui         $s4, 0x8025
    ctx->r20 = S32(0X8025 << 16);
    // 0x8022D434: addiu       $s4, $s4, 0x47B4
    ctx->r20 = ADD32(ctx->r20, 0X47B4);
    // 0x8022D438: addiu       $s5, $s5, -0x7910
    ctx->r21 = ADD32(ctx->r21, -0X7910);
    // 0x8022D43C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8022D440: addiu       $s3, $zero, 0x5
    ctx->r19 = ADD32(0, 0X5);
    // 0x8022D444: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8022D448:
    // 0x8022D448: div         $zero, $s2, $s3
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r19)));
    // 0x8022D44C: mfhi        $s0
    ctx->r16 = hi;
    // 0x8022D450: sll         $t6, $s0, 3
    ctx->r14 = S32(ctx->r16 << 3);
    // 0x8022D454: addu        $t7, $s5, $t6
    ctx->r15 = ADD32(ctx->r21, ctx->r14);
    // 0x8022D458: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x8022D45C: lw          $a3, 0x4($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X4);
    // 0x8022D460: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8022D464: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8022D468: bne         $s3, $zero, L_8022D474
    if (ctx->r19 != 0) {
        // 0x8022D46C: nop
    
            goto L_8022D474;
    }
    // 0x8022D46C: nop

    // 0x8022D470: break       7
    do_break(2149766256);
L_8022D474:
    // 0x8022D474: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022D478: bne         $s3, $at, L_8022D48C
    if (ctx->r19 != ctx->r1) {
        // 0x8022D47C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022D48C;
    }
    // 0x8022D47C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022D480: bne         $s2, $at, L_8022D48C
    if (ctx->r18 != ctx->r1) {
        // 0x8022D484: nop
    
            goto L_8022D48C;
    }
    // 0x8022D484: nop

    // 0x8022D488: break       6
    do_break(2149766280);
L_8022D48C:
    // 0x8022D48C: jal         0x80231A24
    // 0x8022D490: nop

    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022D490: nop

    after_1:
    // 0x8022D494: jal         0x8022D04C
    // 0x8022D498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022D04C(rdram, ctx);
        goto after_2;
    // 0x8022D498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8022D49C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022D4A0: bne         $s1, $s3, L_8022D448
    if (ctx->r17 != ctx->r19) {
        // 0x8022D4A4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8022D448;
    }
    // 0x8022D4A4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8022D4A8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022D4AC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D4B0: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8022D4B4: sw          $zero, -0x78BC($at)
    MEM_W(-0X78BC, ctx->r1) = 0;
    // 0x8022D4B8: lw          $a2, -0x78C8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X78C8);
    // 0x8022D4BC: addiu       $a0, $a0, 0x47EC
    ctx->r4 = ADD32(ctx->r4, 0X47EC);
    // 0x8022D4C0: jal         0x80231A24
    // 0x8022D4C4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x8022D4C4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x8022D4C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D4CC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8022D4D0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8022D4D4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D4D8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8022D4DC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8022D4E0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8022D4E4: jr          $ra
    // 0x8022D4E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8022D4E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80200144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80200144: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80200148: andi        $a3, $a0, 0xFFFF
    ctx->r7 = ctx->r4 & 0XFFFF;
    // 0x8020014C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80200150: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80200154: blez        $a3, L_8020017C
    if (SIGNED(ctx->r7) <= 0) {
        // 0x80200158: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8020017C;
    }
    // 0x80200158: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8020015C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80200160: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80200164: addiu       $a1, $a1, 0x1B84
    ctx->r5 = ADD32(ctx->r5, 0X1B84);
    // 0x80200168: addiu       $a0, $a0, 0x1B70
    ctx->r4 = ADD32(ctx->r4, 0X1B70);
    // 0x8020016C: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    // 0x80200170: jal         0x80231C9C
    // 0x80200174: sh          $a3, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r7;
    func_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80200174: sh          $a3, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r7;
    after_0:
    // 0x80200178: lhu         $a3, 0x1A($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X1A);
L_8020017C:
    // 0x8020017C: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x80200180: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x80200184: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80200188: addiu       $t7, $t7, 0x6D70
    ctx->r15 = ADD32(ctx->r15, 0X6D70);
    // 0x8020018C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80200190: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x80200194: jal         0x80228DE0
    // 0x80200198: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80200198: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x8020019C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802001A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802001A4: jr          $ra
    // 0x802001A8: nop

    return;
    // 0x802001A8: nop

;}
RECOMP_FUNC void func_8023D164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D164: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8023D168: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8023D16C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023D170: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023D174: ld          $t7, 0x8($sp)
    ctx->r15 = LD(ctx->r29, 0X8);
    // 0x8023D178: ld          $t6, 0x0($sp)
    ctx->r14 = LD(ctx->r29, 0X0);
    // 0x8023D17C: dsllv       $v0, $t6, $t7
    ctx->r2 = ctx->r14 << (ctx->r15 & 63);
    // 0x8023D180: dsll32      $v1, $v0, 0
    ctx->r3 = ctx->r2 << (0 + 32);
    // 0x8023D184: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x8023D188: jr          $ra
    // 0x8023D18C: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x8023D18C: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void func_8022FE90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022FE90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FE94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FE98: jal         0x8022FB4C
    // 0x8022FE9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8022FB4C(rdram, ctx);
        goto after_0;
    // 0x8022FE9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8022FEA0: beq         $v0, $zero, L_8022FF2C
    if (ctx->r2 == 0) {
        // 0x8022FEA4: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_8022FF2C;
    }
    // 0x8022FEA4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FEA8: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8022FEAC: bne         $a1, $at, L_8022FEBC
    if (ctx->r5 != ctx->r1) {
        // 0x8022FEB0: lui         $t6, 0x8025
        ctx->r14 = S32(0X8025 << 16);
            goto L_8022FEBC;
    }
    // 0x8022FEB0: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8022FEB4: b           L_8022FF2C
    // 0x8022FEB8: sh          $a1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r5;
        goto L_8022FF2C;
    // 0x8022FEB8: sh          $a1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r5;
L_8022FEBC:
    // 0x8022FEBC: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x8022FEC0: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8022FEC4: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    // 0x8022FEC8: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x8022FECC: lw          $v1, 0x0($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X0);
    // 0x8022FED0: bnel        $v1, $zero, L_8022FEF0
    if (ctx->r3 != 0) {
        // 0x8022FED4: lhu         $t1, 0x0($v0)
        ctx->r9 = MEM_HU(ctx->r2, 0X0);
            goto L_8022FEF0;
    }
    goto skip_0;
    // 0x8022FED4: lhu         $t1, 0x0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X0);
    skip_0:
    // 0x8022FED8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022FEDC: jal         0x80231A24
    // 0x8022FEE0: addiu       $a0, $a0, 0x4B4C
    ctx->r4 = ADD32(ctx->r4, 0X4B4C);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022FEE0: addiu       $a0, $a0, 0x4B4C
    ctx->r4 = ADD32(ctx->r4, 0X4B4C);
    after_1:
    // 0x8022FEE4: b           L_8022FF30
    // 0x8022FEE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022FF30;
    // 0x8022FEE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FEEC: lhu         $t1, 0x0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X0);
L_8022FEF0:
    // 0x8022FEF0: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x8022FEF4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8022FEF8: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x8022FEFC: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8022FF00: lbu         $t0, 0x4($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X4);
    // 0x8022FF04: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022FF08: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x8022FF0C: lbu         $t6, 0x4($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X4);
    // 0x8022FF10: beql        $t0, $t6, L_8022FF2C
    if (ctx->r8 == ctx->r14) {
        // 0x8022FF14: sh          $a1, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r5;
            goto L_8022FF2C;
    }
    goto skip_1;
    // 0x8022FF14: sh          $a1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r5;
    skip_1:
    // 0x8022FF18: jal         0x80231A24
    // 0x8022FF1C: addiu       $a0, $a0, 0x4B74
    ctx->r4 = ADD32(ctx->r4, 0X4B74);
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x8022FF1C: addiu       $a0, $a0, 0x4B74
    ctx->r4 = ADD32(ctx->r4, 0X4B74);
    after_2:
    // 0x8022FF20: b           L_8022FF30
    // 0x8022FF24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022FF30;
    // 0x8022FF24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FF28: sh          $a1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r5;
L_8022FF2C:
    // 0x8022FF2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022FF30:
    // 0x8022FF30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022FF34: jr          $ra
    // 0x8022FF38: nop

    return;
    // 0x8022FF38: nop

;}
