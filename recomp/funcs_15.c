#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8024685C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024685C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80246860: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80246864: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80246868: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8024686C: addiu       $t0, $t0, 0x3970
    ctx->r8 = ADD32(ctx->r8, 0X3970);
    // 0x80246870: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80246874: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80246878: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024687C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x80246880: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x80246884: addiu       $v0, $v0, 0x3970
    ctx->r2 = ADD32(ctx->r2, 0X3970);
    // 0x80246888: addiu       $a0, $a0, 0x39B0
    ctx->r4 = ADD32(ctx->r4, 0X39B0);
L_8024688C:
    // 0x8024688C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80246890: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80246894: bne         $at, $zero, L_8024688C
    if (ctx->r1 != 0) {
        // 0x80246898: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_8024688C;
    }
    // 0x80246898: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x8024689C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802468A0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x802468A4: addiu       $t8, $zero, 0x23
    ctx->r24 = ADD32(0, 0X23);
    // 0x802468A8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802468AC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x802468B0: lhu         $a0, 0x5E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X5E);
    // 0x802468B4: sw          $t6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->r14;
    // 0x802468B8: sb          $t7, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r15;
    // 0x802468BC: sb          $t8, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = ctx->r24;
    // 0x802468C0: sb          $t9, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r25;
    // 0x802468C4: sb          $t1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r9;
    // 0x802468C8: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x802468CC: jal         0x8024A590
    // 0x802468D0: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    func_8024A590(rdram, ctx);
        goto after_0;
    // 0x802468D0: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    after_0:
    // 0x802468D4: lhu         $t2, 0x5E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X5E);
    // 0x802468D8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x802468DC: sll         $t3, $t2, 5
    ctx->r11 = S32(ctx->r10 << 5);
    // 0x802468E0: or          $t4, $v0, $t3
    ctx->r12 = ctx->r2 | ctx->r11;
    // 0x802468E4: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x802468E8: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x802468EC: sh          $t4, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r12;
    // 0x802468F0: sb          $t5, 0x52($sp)
    MEM_B(0X52, ctx->r29) = ctx->r13;
    // 0x802468F4: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x802468F8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
L_802468FC:
    // 0x802468FC: lbu         $t6, 0x0($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X0);
    // 0x80246900: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80246904: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x80246908: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8024690C: bne         $at, $zero, L_802468FC
    if (ctx->r1 != 0) {
        // 0x80246910: sb          $t6, 0x5($a0)
        MEM_B(0X5, ctx->r4) = ctx->r14;
            goto L_802468FC;
    }
    // 0x80246910: sb          $t6, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r14;
    // 0x80246914: beq         $s0, $zero, L_80246960
    if (ctx->r16 == 0) {
        // 0x80246918: addiu       $t7, $sp, 0x2C
        ctx->r15 = ADD32(ctx->r29, 0X2C);
            goto L_80246960;
    }
    // 0x80246918: addiu       $t7, $sp, 0x2C
    ctx->r15 = ADD32(ctx->r29, 0X2C);
    // 0x8024691C: blez        $s0, L_80246960
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80246920: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_80246960;
    }
    // 0x80246920: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80246924: andi        $a0, $s0, 0x3
    ctx->r4 = ctx->r16 & 0X3;
    // 0x80246928: beq         $a0, $zero, L_80246944
    if (ctx->r4 == 0) {
        // 0x8024692C: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80246944;
    }
    // 0x8024692C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80246930:
    // 0x80246930: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80246934: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x80246938: bne         $v0, $a3, L_80246930
    if (ctx->r2 != ctx->r7) {
        // 0x8024693C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_80246930;
    }
    // 0x8024693C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80246940: beq         $a3, $s0, L_80246960
    if (ctx->r7 == ctx->r16) {
        // 0x80246944: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_80246960;
    }
L_80246944:
    // 0x80246944: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80246948: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x8024694C: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x80246950: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x80246954: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80246958: bne         $a3, $s0, L_80246944
    if (ctx->r7 != ctx->r16) {
        // 0x8024695C: sb          $zero, -0x4($v1)
        MEM_B(-0X4, ctx->r3) = 0;
            goto L_80246944;
    }
    // 0x8024695C: sb          $zero, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = 0;
L_80246960:
    // 0x80246960: or          $t1, $v1, $zero
    ctx->r9 = ctx->r3 | 0;
    // 0x80246964: addiu       $t9, $t7, 0x24
    ctx->r25 = ADD32(ctx->r15, 0X24);
L_80246968:
    // 0x80246968: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8024696C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80246970: swl         $at, 0x0($t1)
    do_swl(rdram, 0X0, ctx->r9, ctx->r1);
    // 0x80246974: swr         $at, 0x3($t1)
    do_swr(rdram, 0X3, ctx->r9, ctx->r1);
    // 0x80246978: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8024697C: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x80246980: swl         $at, -0x8($t1)
    do_swl(rdram, -0X8, ctx->r9, ctx->r1);
    // 0x80246984: swr         $at, -0x5($t1)
    do_swr(rdram, -0X5, ctx->r9, ctx->r1);
    // 0x80246988: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8024698C: nop

    // 0x80246990: swl         $at, -0x4($t1)
    do_swl(rdram, -0X4, ctx->r9, ctx->r1);
    // 0x80246994: bne         $t7, $t9, L_80246968
    if (ctx->r15 != ctx->r25) {
        // 0x80246998: swr         $at, -0x1($t1)
        do_swr(rdram, -0X1, ctx->r9, ctx->r1);
            goto L_80246968;
    }
    // 0x80246998: swr         $at, -0x1($t1)
    do_swr(rdram, -0X1, ctx->r9, ctx->r1);
    // 0x8024699C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x802469A0: addiu       $t2, $zero, 0xFE
    ctx->r10 = ADD32(0, 0XFE);
    // 0x802469A4: swl         $at, 0x0($t1)
    do_swl(rdram, 0X0, ctx->r9, ctx->r1);
    // 0x802469A8: swr         $at, 0x3($t1)
    do_swr(rdram, 0X3, ctx->r9, ctx->r1);
    // 0x802469AC: sb          $t2, 0x28($v1)
    MEM_B(0X28, ctx->r3) = ctx->r10;
    // 0x802469B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802469B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802469B8: addiu       $v1, $v1, 0x28
    ctx->r3 = ADD32(ctx->r3, 0X28);
    // 0x802469BC: jr          $ra
    // 0x802469C0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x802469C0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8022F7F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022F7F4: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x8022F7F8: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x8022F7FC: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x8022F800: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x8022F804: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x8022F808: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x8022F80C: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x8022F810: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x8022F814: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x8022F818: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8022F81C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8022F820: sw          $a2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r6;
    // 0x8022F824: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x8022F828: lwc1        $f6, 0xFC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x8022F82C: lw          $fp, 0x4($a0)
    ctx->r30 = MEM_W(ctx->r4, 0X4);
    // 0x8022F830: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x8022F834: div.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8022F838: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x8022F83C: lwc1        $f8, 0xF8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x8022F840: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8022F844: sw          $t9, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r25;
    // 0x8022F848: lw          $t0, 0x8($fp)
    ctx->r8 = MEM_W(ctx->r30, 0X8);
    // 0x8022F84C: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8022F850: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x8022F854: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    // 0x8022F858: lw          $t1, 0x20($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X20);
    // 0x8022F85C: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x8022F860: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x8022F864: sw          $t1, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r9;
    // 0x8022F868: lw          $t2, 0x28($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X28);
    // 0x8022F86C: addu        $s6, $t7, $t8
    ctx->r22 = ADD32(ctx->r15, ctx->r24);
    // 0x8022F870: swc1        $f14, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f14.u32l;
    // 0x8022F874: sw          $t2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r10;
    // 0x8022F878: mul.s       $f18, $f14, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8022F87C: swc1        $f2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f2.u32l;
    // 0x8022F880: jal         0x8022AA40
    // 0x8022F884: add.s       $f12, $f18, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f10.fl;
    func_8022AA40(rdram, ctx);
        goto after_0;
    // 0x8022F884: add.s       $f12, $f18, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f10.fl;
    after_0:
    // 0x8022F888: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8022F88C: lwc1        $f2, 0x78($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8022F890: lwc1        $f14, 0xF4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x8022F894: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8022F898: lwc1        $f16, 0xF8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x8022F89C: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8022F8A0: bc1tl       L_8022F8B4
    if (c1cs) {
        // 0x8022F8A4: neg.s       $f6, $f16
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = -ctx->f16.fl;
            goto L_8022F8B4;
    }
    goto skip_0;
    // 0x8022F8A4: neg.s       $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = -ctx->f16.fl;
    skip_0:
    // 0x8022F8A8: div.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8022F8AC: div.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8022F8B0: neg.s       $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = -ctx->f16.fl;
L_8022F8B4:
    // 0x8022F8B4: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x8022F8B8: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8022F8BC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8022F8C0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8022F8C4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8022F8C8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8022F8CC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8022F8D0: div.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f14.fl, ctx->f2.fl);
    // 0x8022F8D4: mul.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8022F8D8: add.s       $f10, $f18, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x8022F8DC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8022F8E0: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8022F8E4: add.s       $f18, $f8, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x8022F8E8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8022F8EC: neg.s       $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = -ctx->f14.fl;
    // 0x8022F8F0: trunc.w.s   $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8022F8F4: sra         $a0, $a1, 16
    ctx->r4 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022F8F8: sh          $a0, 0x0($fp)
    MEM_H(0X0, ctx->r30) = ctx->r4;
    // 0x8022F8FC: div.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8022F900: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x8022F904: sh          $a0, 0xA($fp)
    MEM_H(0XA, ctx->r30) = ctx->r4;
    // 0x8022F908: sh          $a1, 0x20($fp)
    MEM_H(0X20, ctx->r30) = ctx->r5;
    // 0x8022F90C: sra         $t5, $t6, 16
    ctx->r13 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8022F910: sh          $t5, 0x2($fp)
    MEM_H(0X2, ctx->r30) = ctx->r13;
    // 0x8022F914: sh          $a1, 0x2A($fp)
    MEM_H(0X2A, ctx->r30) = ctx->r5;
    // 0x8022F918: sh          $t6, 0x22($fp)
    MEM_H(0X22, ctx->r30) = ctx->r14;
    // 0x8022F91C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8022F920: add.s       $f18, $f8, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x8022F924: trunc.w.s   $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8022F928: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8022F92C: nop

    // 0x8022F930: sra         $t8, $t9, 16
    ctx->r24 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8022F934: sh          $t8, 0x8($fp)
    MEM_H(0X8, ctx->r30) = ctx->r24;
    // 0x8022F938: sh          $t9, 0x28($fp)
    MEM_H(0X28, ctx->r30) = ctx->r25;
    // 0x8022F93C: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
    // 0x8022F940: blez        $v1, L_8022FAE0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8022F944: nop
    
            goto L_8022FAE0;
    }
    // 0x8022F944: nop

L_8022F948:
    // 0x8022F948: lw          $t0, 0x1C($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X1C);
    // 0x8022F94C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8022F950: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x8022F954: sllv        $t2, $t1, $s4
    ctx->r10 = S32(ctx->r9 << (ctx->r20 & 31));
    // 0x8022F958: and         $t3, $t0, $t2
    ctx->r11 = ctx->r8 & ctx->r10;
    // 0x8022F95C: bne         $t3, $zero, L_8022F978
    if (ctx->r11 != 0) {
        // 0x8022F960: addu        $s1, $a0, $s5
        ctx->r17 = ADD32(ctx->r4, ctx->r21);
            goto L_8022F978;
    }
    // 0x8022F960: addu        $s1, $a0, $s5
    ctx->r17 = ADD32(ctx->r4, ctx->r21);
    // 0x8022F964: lbu         $t4, 0x7($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X7);
    // 0x8022F968: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8022F96C: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x8022F970: beq         $t5, $zero, L_8022F980
    if (ctx->r13 == 0) {
        // 0x8022F974: nop
    
            goto L_8022F980;
    }
    // 0x8022F974: nop

L_8022F978:
    // 0x8022F978: b           L_8022F980
    // 0x8022F97C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_8022F980;
    // 0x8022F97C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8022F980:
    // 0x8022F980: bne         $s0, $zero, L_8022F9DC
    if (ctx->r16 != 0) {
        // 0x8022F984: sll         $t2, $s4, 6
        ctx->r10 = S32(ctx->r20 << 6);
            goto L_8022F9DC;
    }
    // 0x8022F984: sll         $t2, $s4, 6
    ctx->r10 = S32(ctx->r20 << 6);
    // 0x8022F988: lbu         $t6, 0x7($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X7);
    // 0x8022F98C: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x8022F990: slt         $at, $s4, $t8
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8022F994: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x8022F998: beql        $t7, $zero, L_8022F9E0
    if (ctx->r15 == 0) {
        // 0x8022F99C: lw          $t0, 0x4($s7)
        ctx->r8 = MEM_W(ctx->r23, 0X4);
            goto L_8022F9E0;
    }
    goto skip_1;
    // 0x8022F99C: lw          $t0, 0x4($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X4);
    skip_1:
    // 0x8022F9A0: beq         $at, $zero, L_8022FACC
    if (ctx->r1 == 0) {
        // 0x8022F9A4: addu        $v0, $a0, $s5
        ctx->r2 = ADD32(ctx->r4, ctx->r21);
            goto L_8022FACC;
    }
    // 0x8022F9A4: addu        $v0, $a0, $s5
    ctx->r2 = ADD32(ctx->r4, ctx->r21);
    // 0x8022F9A8: lbu         $t9, 0x6($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X6);
    // 0x8022F9AC: lbu         $t1, 0x2A($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X2A);
    // 0x8022F9B0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022F9B4: subu        $s2, $t9, $t1
    ctx->r18 = SUB32(ctx->r25, ctx->r9);
    // 0x8022F9B8: blezl       $s2, L_8022FAD0
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8022F9BC: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8022FAD0;
    }
    goto skip_2;
    // 0x8022F9BC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
L_8022F9C0:
    // 0x8022F9C0: jal         0x802230E4
    // 0x8022F9C4: nop

    func_802230E4(rdram, ctx);
        goto after_1;
    // 0x8022F9C4: nop

    after_1:
    // 0x8022F9C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022F9CC: bne         $s0, $s2, L_8022F9C0
    if (ctx->r16 != ctx->r18) {
        // 0x8022F9D0: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_8022F9C0;
    }
    // 0x8022F9D0: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8022F9D4: b           L_8022FACC
    // 0x8022F9D8: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
        goto L_8022FACC;
    // 0x8022F9D8: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
L_8022F9DC:
    // 0x8022F9DC: lw          $t0, 0x4($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X4);
L_8022F9E0:
    // 0x8022F9E0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8022F9E4: or          $t6, $sp, $zero
    ctx->r14 = ctx->r29 | 0;
    // 0x8022F9E8: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8022F9EC: addiu       $t5, $t3, 0x3C
    ctx->r13 = ADD32(ctx->r11, 0X3C);
L_8022F9F0:
    // 0x8022F9F0: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x8022F9F4: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x8022F9F8: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8022F9FC: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x8022FA00: lw          $at, -0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X8);
    // 0x8022FA04: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x8022FA08: lw          $at, -0x4($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X4);
    // 0x8022FA0C: bne         $t3, $t5, L_8022F9F0
    if (ctx->r11 != ctx->r13) {
        // 0x8022FA10: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8022F9F0;
    }
    // 0x8022FA10: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8022FA14: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x8022FA18: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8022FA1C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8022FA20: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x8022FA24: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x8022FA28: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8022FA2C: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x8022FA30: jal         0x80222FE0
    // 0x8022FA34: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    func_80222FE0(rdram, ctx);
        goto after_2;
    // 0x8022FA34: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    after_2:
    // 0x8022FA38: beql        $s0, $zero, L_8022FA78
    if (ctx->r16 == 0) {
        // 0x8022FA3C: lbu         $v1, 0x4($s6)
        ctx->r3 = MEM_BU(ctx->r22, 0X4);
            goto L_8022FA78;
    }
    goto skip_3;
    // 0x8022FA3C: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
    skip_3:
    // 0x8022FA40: lbu         $t8, 0x4($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X4);
    // 0x8022FA44: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022FA48: blezl       $t8, L_8022FA78
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8022FA4C: lbu         $v1, 0x4($s6)
        ctx->r3 = MEM_BU(ctx->r22, 0X4);
            goto L_8022FA78;
    }
    goto skip_4;
    // 0x8022FA4C: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
    skip_4:
    // 0x8022FA50: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
L_8022FA54:
    // 0x8022FA54: sll         $t1, $s0, 4
    ctx->r9 = S32(ctx->r16 << 4);
    // 0x8022FA58: jal         0x80220C44
    // 0x8022FA5C: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    func_80220C44(rdram, ctx);
        goto after_3;
    // 0x8022FA5C: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    after_3:
    // 0x8022FA60: lbu         $t0, 0x4($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X4);
    // 0x8022FA64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022FA68: slt         $at, $s0, $t0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8022FA6C: bnel        $at, $zero, L_8022FA54
    if (ctx->r1 != 0) {
        // 0x8022FA70: lw          $t9, 0x0($s1)
        ctx->r25 = MEM_W(ctx->r17, 0X0);
            goto L_8022FA54;
    }
    goto skip_5;
    // 0x8022FA70: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    skip_5:
    // 0x8022FA74: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
L_8022FA78:
    // 0x8022FA78: addiu       $t2, $s4, 0x1
    ctx->r10 = ADD32(ctx->r20, 0X1);
    // 0x8022FA7C: bnel        $t2, $v1, L_8022FA90
    if (ctx->r10 != ctx->r3) {
        // 0x8022FA80: lw          $t4, 0x0($s6)
        ctx->r12 = MEM_W(ctx->r22, 0X0);
            goto L_8022FA90;
    }
    goto skip_6;
    // 0x8022FA80: lw          $t4, 0x0($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X0);
    skip_6:
    // 0x8022FA84: b           L_8022FAE0
    // 0x8022FA88: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
        goto L_8022FAE0;
    // 0x8022FA88: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8022FA8C: lw          $t4, 0x0($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X0);
L_8022FA90:
    // 0x8022FA90: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022FA94: addu        $v0, $t4, $s5
    ctx->r2 = ADD32(ctx->r12, ctx->r21);
    // 0x8022FA98: lbu         $t5, 0x6($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X6);
    // 0x8022FA9C: lbu         $t3, 0x2A($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2A);
    // 0x8022FAA0: subu        $s2, $t5, $t3
    ctx->r18 = SUB32(ctx->r13, ctx->r11);
    // 0x8022FAA4: subu        $s3, $s3, $s2
    ctx->r19 = SUB32(ctx->r19, ctx->r18);
    // 0x8022FAA8: bltz        $s2, L_8022FACC
    if (SIGNED(ctx->r18) < 0) {
        // 0x8022FAAC: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_8022FACC;
    }
    // 0x8022FAAC: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8022FAB0: addiu       $s1, $s2, 0x1
    ctx->r17 = ADD32(ctx->r18, 0X1);
L_8022FAB4:
    // 0x8022FAB4: jal         0x802230E4
    // 0x8022FAB8: nop

    func_802230E4(rdram, ctx);
        goto after_4;
    // 0x8022FAB8: nop

    after_4:
    // 0x8022FABC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022FAC0: bne         $s1, $s0, L_8022FAB4
    if (ctx->r17 != ctx->r16) {
        // 0x8022FAC4: nop
    
            goto L_8022FAB4;
    }
    // 0x8022FAC4: nop

    // 0x8022FAC8: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
L_8022FACC:
    // 0x8022FACC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8022FAD0:
    // 0x8022FAD0: slt         $at, $s4, $v1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022FAD4: bne         $at, $zero, L_8022F948
    if (ctx->r1 != 0) {
        // 0x8022FAD8: addiu       $s5, $s5, 0x24
        ctx->r21 = ADD32(ctx->r21, 0X24);
            goto L_8022F948;
    }
    // 0x8022FAD8: addiu       $s5, $s5, 0x24
    ctx->r21 = ADD32(ctx->r21, 0X24);
    // 0x8022FADC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_8022FAE0:
    // 0x8022FAE0: blezl       $s3, L_8022FB00
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8022FAE4: lw          $t6, 0x98($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X98);
            goto L_8022FB00;
    }
    goto skip_7;
    // 0x8022FAE4: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    skip_7:
L_8022FAE8:
    // 0x8022FAE8: jal         0x802230E4
    // 0x8022FAEC: nop

    func_802230E4(rdram, ctx);
        goto after_5;
    // 0x8022FAEC: nop

    after_5:
    // 0x8022FAF0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8022FAF4: bne         $s4, $s3, L_8022FAE8
    if (ctx->r20 != ctx->r19) {
        // 0x8022FAF8: nop
    
            goto L_8022FAE8;
    }
    // 0x8022FAF8: nop

    // 0x8022FAFC: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
L_8022FB00:
    // 0x8022FB00: sw          $t6, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r14;
    // 0x8022FB04: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x8022FB08: sw          $t7, 0x8($fp)
    MEM_W(0X8, ctx->r30) = ctx->r15;
    // 0x8022FB0C: lw          $t8, 0xB8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB8);
    // 0x8022FB10: sw          $t8, 0x20($fp)
    MEM_W(0X20, ctx->r30) = ctx->r24;
    // 0x8022FB14: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
    // 0x8022FB18: sw          $t9, 0x28($fp)
    MEM_W(0X28, ctx->r30) = ctx->r25;
    // 0x8022FB1C: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x8022FB20: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x8022FB24: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x8022FB28: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x8022FB2C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x8022FB30: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x8022FB34: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x8022FB38: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x8022FB3C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8022FB40: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8022FB44: jr          $ra
    // 0x8022FB48: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x8022FB48: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_80215578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80215578: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021557C: lhu         $t0, 0x2A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X2A);
    // 0x80215580: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x80215584: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x80215588: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x8021558C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x80215590: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80215594: addu        $v1, $a2, $t1
    ctx->r3 = ADD32(ctx->r6, ctx->r9);
    // 0x80215598: lh          $t2, 0x0($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X0);
    // 0x8021559C: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
    // 0x802155A0: andi        $t6, $a3, 0xFFFF
    ctx->r14 = ctx->r7 & 0XFFFF;
    // 0x802155A4: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x802155A8: lhu         $t4, 0x2E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X2E);
    // 0x802155AC: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x802155B0: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x802155B4: addu        $v0, $a2, $t7
    ctx->r2 = ADD32(ctx->r6, ctx->r15);
    // 0x802155B8: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x802155BC: lh          $t9, 0x2($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2);
    // 0x802155C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802155C4: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x802155C8: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802155CC: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802155D0: addu        $a0, $a2, $t5
    ctx->r4 = ADD32(ctx->r6, ctx->r13);
    // 0x802155D4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x802155D8: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x802155DC: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802155E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802155E4: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x802155E8: lh          $t7, 0x2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2);
    // 0x802155EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802155F0: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x802155F4: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802155F8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802155FC: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80215600: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80215604: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80215608: bc1t        L_8021564C
    if (c1cs) {
        // 0x8021560C: cvt.s.w     $f22, $f6
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    ctx->f22.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8021564C;
    }
    // 0x8021560C: cvt.s.w     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    ctx->f22.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80215610: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80215614: nop

    // 0x80215618: div.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8021561C: mul.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x80215620: nop

    // 0x80215624: mul.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x80215628: nop

    // 0x8021562C: mul.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x80215630: nop

    // 0x80215634: mul.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x80215638: nop

    // 0x8021563C: mul.s       $f20, $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f12.fl);
    // 0x80215640: nop

    // 0x80215644: mul.s       $f22, $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f12.fl);
    // 0x80215648: nop

L_8021564C:
    // 0x8021564C: sub.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x80215650: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80215654: sub.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x80215658: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8021565C: sub.s       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x80215660: sub.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x80215664: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80215668: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x8021566C: nop

    // 0x80215670: bc1fl       L_80215684
    if (!c1cs) {
        // 0x80215674: sub.s       $f6, $f14, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f18.fl;
            goto L_80215684;
    }
    goto skip_0;
    // 0x80215674: sub.s       $f6, $f14, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f18.fl;
    skip_0:
    // 0x80215678: b           L_802156EC
    // 0x8021567C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802156EC;
    // 0x8021567C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80215680: sub.s       $f6, $f14, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f18.fl;
L_80215684:
    // 0x80215684: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80215688: sub.s       $f10, $f20, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f16.fl;
    // 0x8021568C: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80215690: sub.s       $f10, $f22, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f22.fl - ctx->f18.fl;
    // 0x80215694: sub.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x80215698: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8021569C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x802156A0: nop

    // 0x802156A4: bc1fl       L_802156B8
    if (!c1cs) {
        // 0x802156A8: sub.s       $f6, $f14, $f22
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f22.fl;
            goto L_802156B8;
    }
    goto skip_1;
    // 0x802156A8: sub.s       $f6, $f14, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f22.fl;
    skip_1:
    // 0x802156AC: b           L_802156EC
    // 0x802156B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802156EC;
    // 0x802156B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802156B4: sub.s       $f6, $f14, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f22.fl;
L_802156B8:
    // 0x802156B8: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802156BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802156C0: sub.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x802156C4: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802156C8: sub.s       $f10, $f2, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f22.fl;
    // 0x802156CC: sub.s       $f6, $f8, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x802156D0: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802156D4: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x802156D8: nop

    // 0x802156DC: bc1f        L_802156EC
    if (!c1cs) {
        // 0x802156E0: nop
    
            goto L_802156EC;
    }
    // 0x802156E0: nop

    // 0x802156E4: b           L_802156EC
    // 0x802156E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802156EC;
    // 0x802156E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802156EC:
    // 0x802156EC: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x802156F0: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x802156F4: jr          $ra
    // 0x802156F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x802156F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80205F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205F60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80205F64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80205F68: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80205F6C: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80205F70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80205F74: addiu       $a2, $a2, 0xBEE
    ctx->r6 = ADD32(ctx->r6, 0XBEE);
    // 0x80205F78: jal         0x80231C58
    // 0x80205F7C: addiu       $a1, $a1, 0x2A38
    ctx->r5 = ADD32(ctx->r5, 0X2A38);
    func_80231C58(rdram, ctx);
        goto after_0;
    // 0x80205F7C: addiu       $a1, $a1, 0x2A38
    ctx->r5 = ADD32(ctx->r5, 0X2A38);
    after_0:
    // 0x80205F80: bnel        $v0, $zero, L_80205F94
    if (ctx->r2 != 0) {
        // 0x80205F84: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80205F94;
    }
    goto skip_0;
    // 0x80205F84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80205F88: jal         0x80205FA0
    // 0x80205F8C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80205FA0(rdram, ctx);
        goto after_1;
    // 0x80205F8C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80205F90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80205F94:
    // 0x80205F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80205F98: jr          $ra
    // 0x80205F9C: nop

    return;
    // 0x80205F9C: nop

;}
RECOMP_FUNC void func_80222AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222AE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80222AE4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80222AE8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80222AEC: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80222AF0: lhu         $t6, 0xBEE($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XBEE);
    // 0x80222AF4: lw          $a0, -0x1780($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1780);
    // 0x80222AF8: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x80222AFC: lw          $t9, 0x4398($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4398);
    // 0x80222B00: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x80222B04: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80222B08: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80222B0C: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x80222B10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80222B14: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80222B18: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80222B1C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80222B20: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80222B24: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80222B28: addiu       $a1, $a1, 0x38B4
    ctx->r5 = ADD32(ctx->r5, 0X38B4);
    // 0x80222B2C: jal         0x80231C58
    // 0x80222B30: addiu       $a2, $a2, 0xC08
    ctx->r6 = ADD32(ctx->r6, 0XC08);
    func_80231C58(rdram, ctx);
        goto after_0;
    // 0x80222B30: addiu       $a2, $a2, 0xC08
    ctx->r6 = ADD32(ctx->r6, 0XC08);
    after_0:
    // 0x80222B34: bne         $v0, $zero, L_80222B80
    if (ctx->r2 != 0) {
        // 0x80222B38: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_80222B80;
    }
    // 0x80222B38: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80222B3C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80222B40: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80222B44: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80222B48: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80222B4C: jal         0x802228FC
    // 0x80222B50: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_802228FC(rdram, ctx);
        goto after_1;
    // 0x80222B50: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_1:
    // 0x80222B54: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x80222B58: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x80222B5C: lw          $t3, -0x1780($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1780);
    // 0x80222B60: lhu         $t2, 0xBEE($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0XBEE);
    // 0x80222B64: jal         0x80222B90
    // 0x80222B68: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    func_80222B90(rdram, ctx);
        goto after_2;
    // 0x80222B68: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    after_2:
    // 0x80222B6C: lui         $t4, 0x8025
    ctx->r12 = S32(0X8025 << 16);
    // 0x80222B70: lw          $t4, -0x1780($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1780);
    // 0x80222B74: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80222B78: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80222B7C: sw          $t5, -0x1780($at)
    MEM_W(-0X1780, ctx->r1) = ctx->r13;
L_80222B80:
    // 0x80222B80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80222B84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80222B88: jr          $ra
    // 0x80222B8C: nop

    return;
    // 0x80222B8C: nop

;}
RECOMP_FUNC void func_80223648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223648: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8022364C: addiu       $a1, $a1, 0x3B90
    ctx->r5 = ADD32(ctx->r5, 0X3B90);
    // 0x80223650: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80223654: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80223658: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022365C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80223660: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80223664: lui         $a2, 0xE700
    ctx->r6 = S32(0XE700 << 16);
    // 0x80223668: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x8022366C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80223670: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80223674: lui         $t8, 0xB900
    ctx->r24 = S32(0XB900 << 16);
    // 0x80223678: lui         $t9, 0xF0A
    ctx->r25 = S32(0XF0A << 16);
    // 0x8022367C: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80223680: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80223684: ori         $t9, $t9, 0x4000
    ctx->r25 = ctx->r25 | 0X4000;
    // 0x80223688: ori         $t8, $t8, 0x31D
    ctx->r24 = ctx->r24 | 0X31D;
    // 0x8022368C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80223690: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80223694: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80223698: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8022369C: ori         $t8, $t8, 0x1402
    ctx->r24 = ctx->r24 | 0X1402;
    // 0x802236A0: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802236A4: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802236A8: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x802236AC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802236B0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802236B4: lui         $t9, 0x30
    ctx->r25 = S32(0X30 << 16);
    // 0x802236B8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802236BC: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x802236C0: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x802236C4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x802236C8: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x802236CC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802236D0: lui         $t8, 0xF700
    ctx->r24 = S32(0XF700 << 16);
    // 0x802236D4: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802236D8: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802236DC: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x802236E0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802236E4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802236E8: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x802236EC: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x802236F0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x802236F4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802236F8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802236FC: lui         $t7, 0xFF10
    ctx->r15 = S32(0XFF10 << 16);
    // 0x80223700: ori         $t7, $t7, 0x13F
    ctx->r15 = ctx->r15 | 0X13F;
    // 0x80223704: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80223708: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8022370C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80223710: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80223714: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80223718: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8022371C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80223720: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80223724: lw          $a0, 0x4388($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4388);
    // 0x80223728: jal         0x802375F0
    // 0x8022372C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    func_802375F0(rdram, ctx);
        goto after_0;
    // 0x8022372C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_0:
    // 0x80223730: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80223734: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80223738: addiu       $a1, $a1, 0x3B90
    ctx->r5 = ADD32(ctx->r5, 0X3B90);
    // 0x8022373C: sw          $v0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r2;
    // 0x80223740: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80223744: lui         $a2, 0xE700
    ctx->r6 = S32(0XE700 << 16);
    // 0x80223748: lui         $t6, 0xF64D
    ctx->r14 = S32(0XF64D << 16);
    // 0x8022374C: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80223750: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80223754: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80223758: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8022375C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80223760: ori         $t6, $t6, 0x83AC
    ctx->r14 = ctx->r14 | 0X83AC;
    // 0x80223764: ori         $t7, $zero, 0x81E0
    ctx->r15 = 0 | 0X81E0;
    // 0x80223768: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8022376C: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80223770: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80223774: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80223778: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022377C: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x80223780: ori         $t7, $t7, 0x1402
    ctx->r15 = ctx->r15 | 0X1402;
    // 0x80223784: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80223788: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8022378C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80223790: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80223794: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80223798: lui         $t8, 0x10
    ctx->r24 = S32(0X10 << 16);
    // 0x8022379C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802237A0: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x802237A4: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x802237A8: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x802237AC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802237B0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802237B4: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802237B8: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802237BC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802237C0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x802237C4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802237C8: lui         $t7, 0xFF10
    ctx->r15 = S32(0XFF10 << 16);
    // 0x802237CC: ori         $t7, $t7, 0x13F
    ctx->r15 = ctx->r15 | 0X13F;
    // 0x802237D0: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x802237D4: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x802237D8: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x802237DC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802237E0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802237E4: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802237E8: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802237EC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802237F0: lw          $a0, -0x17A8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X17A8);
    // 0x802237F4: jal         0x802375F0
    // 0x802237F8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_802375F0(rdram, ctx);
        goto after_1;
    // 0x802237F8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x802237FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80223800: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80223804: addiu       $a1, $a1, 0x3B90
    ctx->r5 = ADD32(ctx->r5, 0X3B90);
    // 0x80223808: sw          $v0, 0x4($ra)
    MEM_W(0X4, ctx->r31) = ctx->r2;
    // 0x8022380C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80223810: lui         $a2, 0xE700
    ctx->r6 = S32(0XE700 << 16);
    // 0x80223814: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80223818: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8022381C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80223820: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80223824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80223828: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8022382C: jr          $ra
    // 0x80223830: nop

    return;
    // 0x80223830: nop

;}
RECOMP_FUNC void func_80237730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237730: jr          $ra
    // 0x80237734: nop

    return;
    // 0x80237734: nop

;}
RECOMP_FUNC void func_8024A940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A940: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8024A944: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8024A948: andi        $t6, $s3, 0xFFFF
    ctx->r14 = ctx->r19 & 0XFFFF;
    // 0x8024A94C: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x8024A950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024A954: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8024A958: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8024A95C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8024A960:
    // 0x8024A960: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8024A964: slti        $at, $v1, 0xF
    ctx->r1 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
    // 0x8024A968: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8024A96C: bne         $at, $zero, L_8024A960
    if (ctx->r1 != 0) {
        // 0x8024A970: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_8024A960;
    }
    // 0x8024A970: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x8024A974: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8024A978: sw          $t7, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->r15;
    // 0x8024A97C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8024A980: addiu       $t9, $zero, 0x23
    ctx->r25 = ADD32(0, 0X23);
    // 0x8024A984: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8024A988: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8024A98C: sb          $t8, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r24;
    // 0x8024A990: sb          $t9, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r25;
    // 0x8024A994: sb          $t6, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r14;
    // 0x8024A998: sb          $t7, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r15;
    // 0x8024A99C: jal         0x8024A590
    // 0x8024A9A0: andi        $a0, $s3, 0xFFFF
    ctx->r4 = ctx->r19 & 0XFFFF;
    func_8024A590(rdram, ctx);
        goto after_0;
    // 0x8024A9A0: andi        $a0, $s3, 0xFFFF
    ctx->r4 = ctx->r19 & 0XFFFF;
    after_0:
    // 0x8024A9A4: sll         $t8, $s3, 5
    ctx->r24 = S32(ctx->r19 << 5);
    // 0x8024A9A8: or          $t9, $v0, $t8
    ctx->r25 = ctx->r2 | ctx->r24;
    // 0x8024A9AC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8024A9B0: sh          $t9, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r25;
    // 0x8024A9B4: sb          $t6, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = ctx->r14;
    // 0x8024A9B8: addiu       $v0, $sp, 0x44
    ctx->r2 = ADD32(ctx->r29, 0X44);
    // 0x8024A9BC: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
L_8024A9C0:
    // 0x8024A9C0: lbu         $t7, 0x0($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X0);
    // 0x8024A9C4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8024A9C8: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x8024A9CC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8024A9D0: bne         $at, $zero, L_8024A9C0
    if (ctx->r1 != 0) {
        // 0x8024A9D4: sb          $t7, 0x5($a0)
        MEM_B(0X5, ctx->r4) = ctx->r15;
            goto L_8024A9C0;
    }
    // 0x8024A9D4: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x8024A9D8: beq         $s2, $zero, L_8024AA24
    if (ctx->r18 == 0) {
        // 0x8024A9DC: addiu       $t8, $sp, 0x24
        ctx->r24 = ADD32(ctx->r29, 0X24);
            goto L_8024AA24;
    }
    // 0x8024A9DC: addiu       $t8, $sp, 0x24
    ctx->r24 = ADD32(ctx->r29, 0X24);
    // 0x8024A9E0: blez        $s2, L_8024AA24
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8024A9E4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8024AA24;
    }
    // 0x8024A9E4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8024A9E8: andi        $a0, $s2, 0x3
    ctx->r4 = ctx->r18 & 0X3;
    // 0x8024A9EC: beq         $a0, $zero, L_8024AA08
    if (ctx->r4 == 0) {
        // 0x8024A9F0: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8024AA08;
    }
    // 0x8024A9F0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8024A9F4:
    // 0x8024A9F4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8024A9F8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x8024A9FC: bne         $v0, $v1, L_8024A9F4
    if (ctx->r2 != ctx->r3) {
        // 0x8024AA00: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8024A9F4;
    }
    // 0x8024AA00: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8024AA04: beq         $v1, $s2, L_8024AA24
    if (ctx->r3 == ctx->r18) {
        // 0x8024AA08: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8024AA24;
    }
L_8024AA08:
    // 0x8024AA08: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8024AA0C: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x8024AA10: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8024AA14: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8024AA18: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8024AA1C: bne         $v1, $s2, L_8024AA08
    if (ctx->r3 != ctx->r18) {
        // 0x8024AA20: sb          $zero, -0x4($s0)
        MEM_B(-0X4, ctx->r16) = 0;
            goto L_8024AA08;
    }
    // 0x8024AA20: sb          $zero, -0x4($s0)
    MEM_B(-0X4, ctx->r16) = 0;
L_8024AA24:
    // 0x8024AA24: or          $t7, $s0, $zero
    ctx->r15 = ctx->r16 | 0;
    // 0x8024AA28: addiu       $t6, $t8, 0x24
    ctx->r14 = ADD32(ctx->r24, 0X24);
L_8024AA2C:
    // 0x8024AA2C: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8024AA30: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8024AA34: swl         $at, 0x0($t7)
    do_swl(rdram, 0X0, ctx->r15, ctx->r1);
    // 0x8024AA38: swr         $at, 0x3($t7)
    do_swr(rdram, 0X3, ctx->r15, ctx->r1);
    // 0x8024AA3C: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x8024AA40: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8024AA44: swl         $at, -0x8($t7)
    do_swl(rdram, -0X8, ctx->r15, ctx->r1);
    // 0x8024AA48: swr         $at, -0x5($t7)
    do_swr(rdram, -0X5, ctx->r15, ctx->r1);
    // 0x8024AA4C: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x8024AA50: nop

    // 0x8024AA54: swl         $at, -0x4($t7)
    do_swl(rdram, -0X4, ctx->r15, ctx->r1);
    // 0x8024AA58: bne         $t8, $t6, L_8024AA2C
    if (ctx->r24 != ctx->r14) {
        // 0x8024AA5C: swr         $at, -0x1($t7)
        do_swr(rdram, -0X1, ctx->r15, ctx->r1);
            goto L_8024AA2C;
    }
    // 0x8024AA5C: swr         $at, -0x1($t7)
    do_swr(rdram, -0X1, ctx->r15, ctx->r1);
    // 0x8024AA60: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8024AA64: addiu       $t9, $zero, 0xFE
    ctx->r25 = ADD32(0, 0XFE);
    // 0x8024AA68: swl         $at, 0x0($t7)
    do_swl(rdram, 0X0, ctx->r15, ctx->r1);
    // 0x8024AA6C: swr         $at, 0x3($t7)
    do_swr(rdram, 0X3, ctx->r15, ctx->r1);
    // 0x8024AA70: sb          $t9, 0x28($s0)
    MEM_B(0X28, ctx->r16) = ctx->r25;
    // 0x8024AA74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024AA78: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8024AA7C: jr          $ra
    // 0x8024AA80: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8024AA80: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_802165D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802165D0: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x802165D4: lw          $a0, 0xF8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF8);
    // 0x802165D8: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802165DC: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x802165E0: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x802165E4: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x802165E8: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x802165EC: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x802165F0: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x802165F4: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x802165F8: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x802165FC: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80216600: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80216604: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80216608: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x8021660C: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x80216610: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x80216614: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x80216618: swc1        $f12, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f12.u32l;
    // 0x8021661C: swc1        $f14, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f14.u32l;
    // 0x80216620: lhu         $t8, 0x0($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X0);
    // 0x80216624: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x80216628: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8021662C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80216630: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80216634: lw          $s7, 0x0($t0)
    ctx->r23 = MEM_W(ctx->r8, 0X0);
    // 0x80216638: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021663C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80216640: lwc1        $f4, 0x1C($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0X1C);
    // 0x80216644: lwc1        $f10, 0x20($s7)
    ctx->f10.u32l = MEM_W(ctx->r23, 0X20);
    // 0x80216648: lw          $s5, 0x8($s7)
    ctx->r21 = MEM_W(ctx->r23, 0X8);
    // 0x8021664C: div.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80216650: mtc1        $a2, $f24
    ctx->f24.u32l = ctx->r6;
    // 0x80216654: mtc1        $a3, $f26
    ctx->f26.u32l = ctx->r7;
    // 0x80216658: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8021665C: lbu         $fp, 0x4($s5)
    ctx->r30 = MEM_BU(ctx->r21, 0X4);
    // 0x80216660: sh          $t1, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = ctx->r9;
    // 0x80216664: mul.s       $f22, $f0, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80216668: nop

    // 0x8021666C: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80216670: jal         0x80228CE0
    // 0x80216674: div.s       $f20, $f8, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    func_80228CE0(rdram, ctx);
        goto after_0;
    // 0x80216674: div.s       $f20, $f8, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    after_0:
    // 0x80216678: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8021667C: blez        $fp, L_80216858
    if (SIGNED(ctx->r30) <= 0) {
        // 0x80216680: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80216858;
    }
    // 0x80216680: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80216684: addiu       $s6, $sp, 0x80
    ctx->r22 = ADD32(ctx->r29, 0X80);
    // 0x80216688: lw          $v1, 0xF8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XF8);
    // 0x8021668C: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
L_80216690:
    // 0x80216690: sll         $s4, $s3, 3
    ctx->r20 = S32(ctx->r19 << 3);
    // 0x80216694: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80216698: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    // 0x8021669C: addu        $s4, $s4, $s3
    ctx->r20 = ADD32(ctx->r20, ctx->r19);
    // 0x802166A0: sllv        $t5, $t4, $s3
    ctx->r13 = S32(ctx->r12 << (ctx->r19 & 31));
    // 0x802166A4: sll         $s4, $s4, 2
    ctx->r20 = S32(ctx->r20 << 2);
    // 0x802166A8: and         $t6, $t3, $t5
    ctx->r14 = ctx->r11 & ctx->r13;
    // 0x802166AC: bne         $t6, $zero, L_802166C8
    if (ctx->r14 != 0) {
        // 0x802166B0: addu        $v0, $t2, $s4
        ctx->r2 = ADD32(ctx->r10, ctx->r20);
            goto L_802166C8;
    }
    // 0x802166B0: addu        $v0, $t2, $s4
    ctx->r2 = ADD32(ctx->r10, ctx->r20);
    // 0x802166B4: lbu         $t8, 0x7($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X7);
    // 0x802166B8: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x802166BC: andi        $t7, $t8, 0x1
    ctx->r15 = ctx->r24 & 0X1;
    // 0x802166C0: beq         $t7, $zero, L_802166D0
    if (ctx->r15 == 0) {
        // 0x802166C4: nop
    
            goto L_802166D0;
    }
    // 0x802166C4: nop

L_802166C8:
    // 0x802166C8: b           L_802166D0
    // 0x802166CC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_802166D0;
    // 0x802166CC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_802166D0:
    // 0x802166D0: bne         $s0, $zero, L_802166E8
    if (ctx->r16 != 0) {
        // 0x802166D4: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_802166E8;
    }
    // 0x802166D4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x802166D8: lbu         $t9, 0x7($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X7);
    // 0x802166DC: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x802166E0: bnel        $t0, $zero, L_80216840
    if (ctx->r8 != 0) {
        // 0x802166E4: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80216840;
    }
    goto skip_0;
    // 0x802166E4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
L_802166E8:
    // 0x802166E8: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x802166EC: sll         $t2, $s3, 1
    ctx->r10 = S32(ctx->r19 << 1);
    // 0x802166F0: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x802166F4: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x802166F8: lhu         $t3, 0x0($t4)
    ctx->r11 = MEM_HU(ctx->r12, 0X0);
    // 0x802166FC: lw          $t6, -0x3C1C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3C1C);
    // 0x80216700: addiu       $s1, $fp, -0x1
    ctx->r17 = ADD32(ctx->r30, -0X1);
    // 0x80216704: sll         $t5, $t3, 6
    ctx->r13 = S32(ctx->r11 << 6);
    // 0x80216708: jal         0x80228DE0
    // 0x8021670C: addu        $a1, $t6, $t5
    ctx->r5 = ADD32(ctx->r14, ctx->r13);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x8021670C: addu        $a1, $t6, $t5
    ctx->r5 = ADD32(ctx->r14, ctx->r13);
    after_1:
    // 0x80216710: bne         $s3, $zero, L_80216740
    if (ctx->r19 != 0) {
        // 0x80216714: lwc1        $f4, 0xB0($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
            goto L_80216740;
    }
    // 0x80216714: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80216718: lwc1        $f18, 0x20($s7)
    ctx->f18.u32l = MEM_W(ctx->r23, 0X20);
    // 0x8021671C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80216720: mul.s       $f0, $f18, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x80216724: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80216728: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8021672C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80216730: jal         0x8022A210
    // 0x80216734: nop

    func_8022A210(rdram, ctx);
        goto after_2;
    // 0x80216734: nop

    after_2:
    // 0x80216738: b           L_80216764
    // 0x8021673C: nop

        goto L_80216764;
    // 0x8021673C: nop

L_80216740:
    // 0x80216740: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80216744: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80216748: lwc1        $f16, 0xB8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8021674C: mul.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80216750: nop

    // 0x80216754: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80216758: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x8021675C: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
    // 0x80216760: swc1        $f18, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f18.u32l;
L_80216764:
    // 0x80216764: jal         0x80228D0C
    // 0x80216768: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80228D0C(rdram, ctx);
        goto after_3;
    // 0x80216768: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_3:
    // 0x8021676C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80216770: sll         $t8, $s2, 16
    ctx->r24 = S32(ctx->r18 << 16);
    // 0x80216774: beq         $s0, $zero, L_802167D8
    if (ctx->r16 == 0) {
        // 0x80216778: sra         $s2, $t8, 16
        ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
            goto L_802167D8;
    }
    // 0x80216778: sra         $s2, $t8, 16
    ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8021677C: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80216780: addiu       $v0, $v0, -0x3C6C
    ctx->r2 = ADD32(ctx->r2, -0X3C6C);
    // 0x80216784: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80216788: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8021678C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80216790: sll         $t1, $s3, 24
    ctx->r9 = S32(ctx->r19 << 24);
    // 0x80216794: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x80216798: or          $t2, $t0, $t1
    ctx->r10 = ctx->r8 | ctx->r9;
    // 0x8021679C: jal         0x80228CF0
    // 0x802167A0: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    func_80228CF0(rdram, ctx);
        goto after_4;
    // 0x802167A0: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    after_4:
    // 0x802167A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802167A8: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x802167AC: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x802167B0: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x802167B4: addu        $t3, $t4, $s4
    ctx->r11 = ADD32(ctx->r12, ctx->r20);
    // 0x802167B8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802167BC: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    // 0x802167C0: lwc1        $f12, 0xE8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x802167C4: jal         0x80217940
    // 0x802167C8: lwc1        $f14, 0xEC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XEC);
    func_80217940(rdram, ctx);
        goto after_5;
    // 0x802167C8: lwc1        $f14, 0xEC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XEC);
    after_5:
    // 0x802167CC: lh          $t6, 0xE4($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XE4);
    // 0x802167D0: addu        $t5, $t6, $v0
    ctx->r13 = ADD32(ctx->r14, ctx->r2);
    // 0x802167D4: sh          $t5, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = ctx->r13;
L_802167D8:
    // 0x802167D8: bnel        $s3, $s1, L_802167EC
    if (ctx->r19 != ctx->r17) {
        // 0x802167DC: lw          $t8, 0x0($s5)
        ctx->r24 = MEM_W(ctx->r21, 0X0);
            goto L_802167EC;
    }
    goto skip_1;
    // 0x802167DC: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    skip_1:
    // 0x802167E0: b           L_80216858
    // 0x802167E4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_80216858;
    // 0x802167E4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802167E8: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
L_802167EC:
    // 0x802167EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802167F0: addu        $v0, $t8, $s4
    ctx->r2 = ADD32(ctx->r24, ctx->r20);
    // 0x802167F4: lbu         $t7, 0x6($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X6);
    // 0x802167F8: lbu         $t9, 0x2A($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2A);
    // 0x802167FC: subu        $s1, $t7, $t9
    ctx->r17 = SUB32(ctx->r15, ctx->r25);
    // 0x80216800: sll         $t0, $s1, 16
    ctx->r8 = S32(ctx->r17 << 16);
    // 0x80216804: sra         $s1, $t0, 16
    ctx->r17 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80216808: bltzl       $s1, L_8021683C
    if (SIGNED(ctx->r17) < 0) {
        // 0x8021680C: lw          $v1, 0xF8($sp)
        ctx->r3 = MEM_W(ctx->r29, 0XF8);
            goto L_8021683C;
    }
    goto skip_2;
    // 0x8021680C: lw          $v1, 0xF8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XF8);
    skip_2:
L_80216810:
    // 0x80216810: jal         0x80228D9C
    // 0x80216814: nop

    func_80228D9C(rdram, ctx);
        goto after_6;
    // 0x80216814: nop

    after_6:
    // 0x80216818: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021681C: sll         $t3, $s0, 16
    ctx->r11 = S32(ctx->r16 << 16);
    // 0x80216820: sra         $s0, $t3, 16
    ctx->r16 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80216824: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80216828: sll         $t2, $s2, 16
    ctx->r10 = S32(ctx->r18 << 16);
    // 0x8021682C: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80216830: beq         $at, $zero, L_80216810
    if (ctx->r1 == 0) {
        // 0x80216834: sra         $s2, $t2, 16
        ctx->r18 = S32(SIGNED(ctx->r10) >> 16);
            goto L_80216810;
    }
    // 0x80216834: sra         $s2, $t2, 16
    ctx->r18 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80216838: lw          $v1, 0xF8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XF8);
L_8021683C:
    // 0x8021683C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_80216840:
    // 0x80216840: sll         $t5, $s3, 16
    ctx->r13 = S32(ctx->r19 << 16);
    // 0x80216844: sra         $s3, $t5, 16
    ctx->r19 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80216848: slt         $at, $s3, $fp
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x8021684C: bnel        $at, $zero, L_80216690
    if (ctx->r1 != 0) {
        // 0x80216850: lw          $t3, 0x10($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X10);
            goto L_80216690;
    }
    goto skip_3;
    // 0x80216850: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
    skip_3:
    // 0x80216854: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80216858:
    // 0x80216858: blezl       $s2, L_80216884
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8021685C: lw          $ra, 0x6C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X6C);
            goto L_80216884;
    }
    goto skip_4;
    // 0x8021685C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    skip_4:
L_80216860:
    // 0x80216860: jal         0x80228D9C
    // 0x80216864: nop

    func_80228D9C(rdram, ctx);
        goto after_7;
    // 0x80216864: nop

    after_7:
    // 0x80216868: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8021686C: sll         $t7, $s3, 16
    ctx->r15 = S32(ctx->r19 << 16);
    // 0x80216870: sra         $s3, $t7, 16
    ctx->r19 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80216874: slt         $at, $s3, $s2
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80216878: bne         $at, $zero, L_80216860
    if (ctx->r1 != 0) {
        // 0x8021687C: nop
    
            goto L_80216860;
    }
    // 0x8021687C: nop

    // 0x80216880: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
L_80216884:
    // 0x80216884: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x80216888: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x8021688C: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x80216890: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x80216894: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80216898: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8021689C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x802168A0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x802168A4: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x802168A8: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x802168AC: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x802168B0: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x802168B4: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x802168B8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    // 0x802168BC: jr          $ra
    // 0x802168C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x802168C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_80234ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234ED0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80234ED4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234ED8: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80234EDC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80234EE0: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x80234EE4: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x80234EE8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80234EEC: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80234EF0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80234EF4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80234EF8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80234EFC: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80234F00: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80234F04: jal         0x8023F37C
    // 0x80234F08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80234F08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80234F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234F10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80234F14: jr          $ra
    // 0x80234F18: nop

    return;
    // 0x80234F18: nop

;}
RECOMP_FUNC void func_8021CD80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021CD80: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8021CD84: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8021CD88: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8021CD8C: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8021CD90: mul.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x8021CD94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021CD98: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8021CD9C: lui         $at, 0x4378
    ctx->r1 = S32(0X4378 << 16);
    // 0x8021CDA0: lui         $a2, 0x8026
    ctx->r6 = S32(0X8026 << 16);
    // 0x8021CDA4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021CDA8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8021CDAC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8021CDB0: addiu       $a2, $a2, -0x3C00
    ctx->r6 = ADD32(ctx->r6, -0X3C00);
    // 0x8021CDB4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021CDB8: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x8021CDBC: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x8021CDC0: nop

L_8021CDC4:
    // 0x8021CDC4: slti        $at, $v0, 0xF9
    ctx->r1 = SIGNED(ctx->r2) < 0XF9 ? 1 : 0;
    // 0x8021CDC8: bne         $at, $zero, L_8021CDD4
    if (ctx->r1 != 0) {
        // 0x8021CDCC: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_8021CDD4;
    }
    // 0x8021CDCC: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8021CDD0: addiu       $v0, $zero, 0xF8
    ctx->r2 = ADD32(0, 0XF8);
L_8021CDD4:
    // 0x8021CDD4: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8021CDD8: slti        $at, $v1, 0xF9
    ctx->r1 = SIGNED(ctx->r3) < 0XF9 ? 1 : 0;
    // 0x8021CDDC: addiu       $t1, $zero, 0xF8
    ctx->r9 = ADD32(0, 0XF8);
    // 0x8021CDE0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021CDE4: bne         $at, $zero, L_8021CDF0
    if (ctx->r1 != 0) {
        // 0x8021CDE8: div.s       $f0, $f10, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
            goto L_8021CDF0;
    }
    // 0x8021CDE8: div.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8021CDEC: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
L_8021CDF0:
    // 0x8021CDF0: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x8021CDF4: nop

    // 0x8021CDF8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021CDFC: div.s       $f12, $f6, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8021CE00: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8021CE04: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8021CE08: bc1fl       L_8021CE18
    if (!c1cs) {
        // 0x8021CE0C: c.eq.s      $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
            goto L_8021CE18;
    }
    goto skip_0;
    // 0x8021CE0C: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    skip_0:
    // 0x8021CE10: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
    // 0x8021CE14: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
L_8021CE18:
    // 0x8021CE18: nop

    // 0x8021CE1C: bc1fl       L_8021CE30
    if (!c1cs) {
        // 0x8021CE20: sub.s       $f8, $f20, $f0
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_8021CE30;
    }
    goto skip_1;
    // 0x8021CE20: sub.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f20.fl - ctx->f0.fl;
    skip_1:
    // 0x8021CE24: b           L_8021CE34
    // 0x8021CE28: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
        goto L_8021CE34;
    // 0x8021CE28: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
    // 0x8021CE2C: sub.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f20.fl - ctx->f0.fl;
L_8021CE30:
    // 0x8021CE30: div.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f8.fl);
L_8021CE34:
    // 0x8021CE34: mul.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8021CE38: addiu       $a3, $v1, 0x1
    ctx->r7 = ADD32(ctx->r3, 0X1);
    // 0x8021CE3C: slti        $at, $v0, 0xF9
    ctx->r1 = SIGNED(ctx->r2) < 0XF9 ? 1 : 0;
    // 0x8021CE40: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8021CE44: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8021CE48: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8021CE4C: nop

    // 0x8021CE50: sll         $t8, $a1, 8
    ctx->r24 = S32(ctx->r5 << 8);
    // 0x8021CE54: or          $t9, $t8, $a1
    ctx->r25 = ctx->r24 | ctx->r5;
    // 0x8021CE58: bne         $at, $zero, L_8021CE70
    if (ctx->r1 != 0) {
        // 0x8021CE5C: sh          $t9, 0x0($a2)
        MEM_H(0X0, ctx->r6) = ctx->r25;
            goto L_8021CE70;
    }
    // 0x8021CE5C: sh          $t9, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r25;
    // 0x8021CE60: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8021CE64: addiu       $v0, $zero, 0xF8
    ctx->r2 = ADD32(0, 0XF8);
    // 0x8021CE68: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021CE6C: div.s       $f0, $f8, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
L_8021CE70:
    // 0x8021CE70: slti        $at, $a3, 0xF9
    ctx->r1 = SIGNED(ctx->r7) < 0XF9 ? 1 : 0;
    // 0x8021CE74: bnel        $at, $zero, L_8021CE84
    if (ctx->r1 != 0) {
        // 0x8021CE78: mtc1        $a0, $f10
        ctx->f10.u32l = ctx->r4;
            goto L_8021CE84;
    }
    goto skip_2;
    // 0x8021CE78: mtc1        $a0, $f10
    ctx->f10.u32l = ctx->r4;
    skip_2:
    // 0x8021CE7C: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
    // 0x8021CE80: mtc1        $a0, $f10
    ctx->f10.u32l = ctx->r4;
L_8021CE84:
    // 0x8021CE84: nop

    // 0x8021CE88: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8021CE8C: div.s       $f12, $f4, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8021CE90: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8021CE94: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8021CE98: bc1fl       L_8021CEA8
    if (!c1cs) {
        // 0x8021CE9C: c.eq.s      $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
            goto L_8021CEA8;
    }
    goto skip_3;
    // 0x8021CE9C: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    skip_3:
    // 0x8021CEA0: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
    // 0x8021CEA4: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
L_8021CEA8:
    // 0x8021CEA8: nop

    // 0x8021CEAC: bc1fl       L_8021CEC0
    if (!c1cs) {
        // 0x8021CEB0: sub.s       $f6, $f20, $f0
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_8021CEC0;
    }
    goto skip_4;
    // 0x8021CEB0: sub.s       $f6, $f20, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f20.fl - ctx->f0.fl;
    skip_4:
    // 0x8021CEB4: b           L_8021CEC4
    // 0x8021CEB8: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
        goto L_8021CEC4;
    // 0x8021CEB8: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
    // 0x8021CEBC: sub.s       $f6, $f20, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f20.fl - ctx->f0.fl;
L_8021CEC0:
    // 0x8021CEC0: div.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f6.fl);
L_8021CEC4:
    // 0x8021CEC4: mul.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8021CEC8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8021CECC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8021CED0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021CED4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8021CED8: nop

    // 0x8021CEDC: sll         $t3, $a1, 8
    ctx->r11 = S32(ctx->r5 << 8);
    // 0x8021CEE0: or          $t4, $t3, $a1
    ctx->r12 = ctx->r11 | ctx->r5;
    // 0x8021CEE4: bne         $v1, $t0, L_8021CDC4
    if (ctx->r3 != ctx->r8) {
        // 0x8021CEE8: sh          $t4, -0x2($a2)
        MEM_H(-0X2, ctx->r6) = ctx->r12;
            goto L_8021CDC4;
    }
    // 0x8021CEE8: sh          $t4, -0x2($a2)
    MEM_H(-0X2, ctx->r6) = ctx->r12;
    // 0x8021CEEC: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8021CEF0: jr          $ra
    // 0x8021CEF4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8021CEF4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_802215C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802215C8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802215CC: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x802215D0: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x802215D4: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802215D8: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x802215DC: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802215E0: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x802215E4: sub.s       $f18, $f8, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x802215E8: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x802215EC: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802215F0: sub.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x802215F4: mul.s       $f6, $f18, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x802215F8: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802215FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80221600: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80221604: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80221608: sub.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8022160C: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x80221610: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80221614: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80221618: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8022161C: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    // 0x80221620: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x80221624: jal         0x8023CE00
    // 0x80221628: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    func_8023CE00(rdram, ctx);
        goto after_0;
    // 0x80221628: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    after_0:
    // 0x8022162C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80221630: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80221634: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80221638: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x8022163C: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80221640: bc1t        L_80221654
    if (c1cs) {
        // 0x80221644: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_80221654;
    }
    // 0x80221644: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80221648: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8022164C: b           L_80221660
    // 0x80221650: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
        goto L_80221660;
    // 0x80221650: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
L_80221654:
    // 0x80221654: lui         $at, 0xC37F
    ctx->r1 = S32(0XC37F << 16);
    // 0x80221658: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8022165C: nop

L_80221660:
    // 0x80221660: mul.s       $f20, $f18, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x80221664: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80221668: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8022166C: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80221670: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80221674: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80221678: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x8022167C: swc1        $f20, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f20.u32l;
    // 0x80221680: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80221684: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x80221688: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8022168C: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80221690: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80221694: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x80221698: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8022169C: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802216A0: sub.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x802216A4: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802216A8: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802216AC: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x802216B0: mul.s       $f4, $f6, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802216B4: nop

    // 0x802216B8: mul.s       $f8, $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x802216BC: sub.s       $f14, $f8, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x802216C0: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802216C4: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802216C8: swc1        $f14, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f14.u32l;
    // 0x802216CC: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x802216D0: sub.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x802216D4: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802216D8: nop

    // 0x802216DC: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x802216E0: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x802216E4: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x802216E8: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802216EC: jal         0x8023CE00
    // 0x802216F0: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    func_8023CE00(rdram, ctx);
        goto after_1;
    // 0x802216F0: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    after_1:
    // 0x802216F4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802216F8: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x802216FC: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80221700: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x80221704: lwc1        $f20, 0x48($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80221708: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8022170C: bc1tl       L_80221728
    if (c1cs) {
        // 0x80221710: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_80221728;
    }
    goto skip_0;
    // 0x80221710: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_0:
    // 0x80221714: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80221718: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8022171C: b           L_8022172C
    // 0x80221720: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
        goto L_8022172C;
    // 0x80221720: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80221724: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_80221728:
    // 0x80221728: nop

L_8022172C:
    // 0x8022172C: mul.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x80221730: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80221734: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80221738: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x8022173C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80221740: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80221744: mul.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80221748: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8022174C: swc1        $f14, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f14.u32l;
    // 0x80221750: swc1        $f20, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f20.u32l;
    // 0x80221754: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80221758: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x8022175C: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80221760: sub.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80221764: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80221768: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8022176C: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x80221770: mul.s       $f6, $f8, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80221774: sub.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80221778: mul.s       $f8, $f4, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8022177C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80221780: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x80221784: mul.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x80221788: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8022178C: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80221790: nop

    // 0x80221794: mul.s       $f6, $f18, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80221798: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8022179C: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802217A0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802217A4: jal         0x8023CE00
    // 0x802217A8: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    func_8023CE00(rdram, ctx);
        goto after_2;
    // 0x802217A8: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_2:
    // 0x802217AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802217B0: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x802217B4: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802217B8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x802217BC: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802217C0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802217C4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802217C8: bc1tl       L_802217E4
    if (c1cs) {
        // 0x802217CC: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_802217E4;
    }
    goto skip_1;
    // 0x802217CC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_1:
    // 0x802217D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802217D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802217D8: b           L_802217E8
    // 0x802217DC: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
        goto L_802217E8;
    // 0x802217DC: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802217E0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_802217E4:
    // 0x802217E4: nop

L_802217E8:
    // 0x802217E8: mul.s       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x802217EC: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802217F0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802217F4: mul.s       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x802217F8: ldc1        $f12, 0x3940($at)
    CHECK_FR(ctx, 12);
    ctx->f12.u64 = LD(ctx->r1, 0X3940);
    // 0x802217FC: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x80221800: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80221804: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x80221808: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8022180C: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x80221810: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80221814: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x80221818: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8022181C: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x80221820: mul.d       $f14, $f10, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f14.d = MUL_D(ctx->f10.d, ctx->f20.d);
    // 0x80221824: c.lt.d      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.d < ctx->f12.d;
    // 0x80221828: nop

    // 0x8022182C: bc1fl       L_80221840
    if (!c1cs) {
        // 0x80221830: mov.d       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
            goto L_80221840;
    }
    goto skip_2;
    // 0x80221830: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    skip_2:
    // 0x80221834: b           L_80221840
    // 0x80221838: mov.d       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.d = ctx->f14.d;
        goto L_80221840;
    // 0x80221838: mov.d       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.d = ctx->f14.d;
    // 0x8022183C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
L_80221840:
    // 0x80221840: trunc.w.d   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x80221844: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x80221848: nop

    // 0x8022184C: sb          $t6, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r14;
    // 0x80221850: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80221854: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80221858: mul.d       $f2, $f8, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x8022185C: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    // 0x80221860: nop

    // 0x80221864: bc1fl       L_80221878
    if (!c1cs) {
        // 0x80221868: mov.d       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
            goto L_80221878;
    }
    goto skip_3;
    // 0x80221868: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    skip_3:
    // 0x8022186C: b           L_80221878
    // 0x80221870: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
        goto L_80221878;
    // 0x80221870: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    // 0x80221874: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
L_80221878:
    // 0x80221878: trunc.w.d   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x8022187C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x80221880: nop

    // 0x80221884: sb          $t9, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r25;
    // 0x80221888: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8022188C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80221890: mul.d       $f2, $f6, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x80221894: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    // 0x80221898: nop

    // 0x8022189C: bc1fl       L_802218B0
    if (!c1cs) {
        // 0x802218A0: mov.d       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
            goto L_802218B0;
    }
    goto skip_4;
    // 0x802218A0: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    skip_4:
    // 0x802218A4: b           L_802218B0
    // 0x802218A8: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
        goto L_802218B0;
    // 0x802218A8: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    // 0x802218AC: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
L_802218B0:
    // 0x802218B0: trunc.w.d   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x802218B4: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x802218B8: nop

    // 0x802218BC: sb          $t2, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r10;
    // 0x802218C0: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802218C4: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x802218C8: mul.d       $f2, $f4, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = MUL_D(ctx->f4.d, ctx->f20.d);
    // 0x802218CC: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    // 0x802218D0: nop

    // 0x802218D4: bc1fl       L_802218E8
    if (!c1cs) {
        // 0x802218D8: mov.d       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
            goto L_802218E8;
    }
    goto skip_5;
    // 0x802218D8: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    skip_5:
    // 0x802218DC: b           L_802218E8
    // 0x802218E0: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
        goto L_802218E8;
    // 0x802218E0: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    // 0x802218E4: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
L_802218E8:
    // 0x802218E8: trunc.w.d   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x802218EC: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x802218F0: nop

    // 0x802218F4: sb          $t5, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r13;
    // 0x802218F8: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802218FC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80221900: mul.d       $f2, $f10, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = MUL_D(ctx->f10.d, ctx->f20.d);
    // 0x80221904: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    // 0x80221908: nop

    // 0x8022190C: bc1fl       L_80221920
    if (!c1cs) {
        // 0x80221910: mov.d       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
            goto L_80221920;
    }
    goto skip_6;
    // 0x80221910: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    skip_6:
    // 0x80221914: b           L_80221920
    // 0x80221918: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
        goto L_80221920;
    // 0x80221918: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    // 0x8022191C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
L_80221920:
    // 0x80221920: trunc.w.d   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x80221924: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x80221928: nop

    // 0x8022192C: sb          $t8, 0x19($a0)
    MEM_B(0X19, ctx->r4) = ctx->r24;
    // 0x80221930: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80221934: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80221938: mul.d       $f2, $f8, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x8022193C: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    // 0x80221940: nop

    // 0x80221944: bc1fl       L_80221958
    if (!c1cs) {
        // 0x80221948: mov.d       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
            goto L_80221958;
    }
    goto skip_7;
    // 0x80221948: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    skip_7:
    // 0x8022194C: b           L_80221958
    // 0x80221950: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
        goto L_80221958;
    // 0x80221950: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    // 0x80221954: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
L_80221958:
    // 0x80221958: trunc.w.d   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x8022195C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80221960: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    // 0x80221964: sb          $zero, 0x2($a0)
    MEM_B(0X2, ctx->r4) = 0;
    // 0x80221968: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8022196C: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x80221970: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x80221974: sb          $zero, 0x5($a0)
    MEM_B(0X5, ctx->r4) = 0;
    // 0x80221978: sb          $zero, 0x6($a0)
    MEM_B(0X6, ctx->r4) = 0;
    // 0x8022197C: sb          $zero, 0x7($a0)
    MEM_B(0X7, ctx->r4) = 0;
    // 0x80221980: sb          $zero, 0x10($a0)
    MEM_B(0X10, ctx->r4) = 0;
    // 0x80221984: sb          $v0, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r2;
    // 0x80221988: sb          $zero, 0x12($a0)
    MEM_B(0X12, ctx->r4) = 0;
    // 0x8022198C: sb          $zero, 0x13($a0)
    MEM_B(0X13, ctx->r4) = 0;
    // 0x80221990: sb          $zero, 0x14($a0)
    MEM_B(0X14, ctx->r4) = 0;
    // 0x80221994: sb          $v0, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r2;
    // 0x80221998: sb          $zero, 0x16($a0)
    MEM_B(0X16, ctx->r4) = 0;
    // 0x8022199C: sb          $zero, 0x17($a0)
    MEM_B(0X17, ctx->r4) = 0;
    // 0x802219A0: sb          $t1, 0x1A($a0)
    MEM_B(0X1A, ctx->r4) = ctx->r9;
    // 0x802219A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802219A8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x802219AC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x802219B0: jr          $ra
    // 0x802219B4: nop

    return;
    // 0x802219B4: nop

;}
RECOMP_FUNC void func_8022BE80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022BE80: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8022BE84: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022BE88: lui         $s5, 0x8028
    ctx->r21 = S32(0X8028 << 16);
    // 0x8022BE8C: addiu       $s5, $s5, 0xC58
    ctx->r21 = ADD32(ctx->r21, 0XC58);
    // 0x8022BE90: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022BE94: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8022BE98: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8022BE9C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022BEA0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022BEA4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022BEA8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022BEAC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022BEB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022BEB4: jal         0x8023D3C0
    // 0x8022BEB8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8023D3C0(rdram, ctx);
        goto after_0;
    // 0x8022BEB8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_0:
    // 0x8022BEBC: lui         $s2, 0x8027
    ctx->r18 = S32(0X8027 << 16);
    // 0x8022BEC0: lui         $s3, 0x8027
    ctx->r19 = S32(0X8027 << 16);
    // 0x8022BEC4: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x8022BEC8: addiu       $s3, $s3, 0x613C
    ctx->r19 = ADD32(ctx->r19, 0X613C);
    // 0x8022BECC: addiu       $s2, $s2, 0x6130
    ctx->r18 = ADD32(ctx->r18, 0X6130);
    // 0x8022BED0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8022BED4: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x8022BED8: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    // 0x8022BEDC: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_8022BEE0:
    // 0x8022BEE0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8022BEE4: sh          $zero, 0x0($s2)
    MEM_H(0X0, ctx->r18) = 0;
    // 0x8022BEE8: bne         $s4, $at, L_8022BF04
    if (ctx->r20 != ctx->r1) {
        // 0x8022BEEC: sb          $zero, 0x0($s3)
        MEM_B(0X0, ctx->r19) = 0;
            goto L_8022BF04;
    }
    // 0x8022BEEC: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
    // 0x8022BEF0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022BEF4: jal         0x80231A24
    // 0x8022BEF8: addiu       $a0, $a0, 0x4230
    ctx->r4 = ADD32(ctx->r4, 0X4230);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022BEF8: addiu       $a0, $a0, 0x4230
    ctx->r4 = ADD32(ctx->r4, 0X4230);
    after_1:
    // 0x8022BEFC: b           L_8022C07C
    // 0x8022BF00: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8022C07C;
    // 0x8022BF00: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8022BF04:
    // 0x8022BF04: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8022BF08: addiu       $t7, $t7, 0xCC8
    ctx->r15 = ADD32(ctx->r15, 0XCC8);
    // 0x8022BF0C: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x8022BF10: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x8022BF14: jal         0x8023D444
    // 0x8022BF18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8023D444(rdram, ctx);
        goto after_2;
    // 0x8022BF18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8022BF1C: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
    // 0x8022BF20: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x8022BF24: subu        $t2, $t2, $s1
    ctx->r10 = SUB32(ctx->r10, ctx->r17);
    // 0x8022BF28: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x8022BF2C: beq         $t9, $zero, L_8022C078
    if (ctx->r25 == 0) {
        // 0x8022BF30: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_8022C078;
    }
    // 0x8022BF30: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8022BF34: lbu         $t0, 0x2($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2);
    // 0x8022BF38: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8022BF3C: addu        $t2, $t2, $s1
    ctx->r10 = ADD32(ctx->r10, ctx->r17);
    // 0x8022BF40: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8022BF44: beq         $t1, $zero, L_8022C078
    if (ctx->r9 == 0) {
        // 0x8022BF48: sll         $t2, $t2, 3
        ctx->r10 = S32(ctx->r10 << 3);
            goto L_8022C078;
    }
    // 0x8022BF48: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8022BF4C: lui         $t3, 0x8027
    ctx->r11 = S32(0X8027 << 16);
    // 0x8022BF50: addiu       $t3, $t3, 0x5F90
    ctx->r11 = ADD32(ctx->r11, 0X5F90);
    // 0x8022BF54: addu        $s0, $t2, $t3
    ctx->r16 = ADD32(ctx->r10, ctx->r11);
    // 0x8022BF58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8022BF5C: jal         0x80238F10
    // 0x8022BF60: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_80238F10(rdram, ctx);
        goto after_3;
    // 0x8022BF60: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x8022BF64: sltiu       $at, $v0, 0xC
    ctx->r1 = ctx->r2 < 0XC ? 1 : 0;
    // 0x8022BF68: beq         $at, $zero, L_8022C01C
    if (ctx->r1 == 0) {
        // 0x8022BF6C: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_8022C01C;
    }
    // 0x8022BF6C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x8022BF70: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x8022BF74: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022BF78: addu        $at, $at, $t4
    gpr jr_addend_8022BF80 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8022BF7C: lw          $t4, 0x4354($at)
    ctx->r12 = ADD32(ctx->r1, 0X4354);
    // 0x8022BF80: jr          $t4
    // 0x8022BF84: nop

    switch (jr_addend_8022BF80 >> 2) {
        case 0: goto L_8022BF88; break;
        case 1: goto L_8022C02C; break;
        case 2: goto L_8022C01C; break;
        case 3: goto L_8022C01C; break;
        case 4: goto L_8022C02C; break;
        case 5: goto L_8022C01C; break;
        case 6: goto L_8022C01C; break;
        case 7: goto L_8022C01C; break;
        case 8: goto L_8022C01C; break;
        case 9: goto L_8022C01C; break;
        case 10: goto L_8022BF90; break;
        case 11: goto L_8022BFF8; break;
        default: switch_error(__func__, 0x8022BF80, 0x80254354);
    }
    // 0x8022BF84: nop

L_8022BF88:
    // 0x8022BF88: b           L_8022C02C
    // 0x8022BF8C: sh          $s6, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r22;
        goto L_8022C02C;
    // 0x8022BF8C: sh          $s6, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r22;
L_8022BF90:
    // 0x8022BF90: jal         0x80238B90
    // 0x8022BF94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80238B90(rdram, ctx);
        goto after_4;
    // 0x8022BF94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8022BF98: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022BF9C: addiu       $a0, $a0, 0x4258
    ctx->r4 = ADD32(ctx->r4, 0X4258);
    // 0x8022BFA0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022BFA4: jal         0x80231A24
    // 0x8022BFA8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_80231A24(rdram, ctx);
        goto after_5;
    // 0x8022BFA8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_5:
    // 0x8022BFAC: jal         0x80238B90
    // 0x8022BFB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80238B90(rdram, ctx);
        goto after_6;
    // 0x8022BFB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8022BFB4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8022BFB8: bne         $v0, $at, L_8022BFC8
    if (ctx->r2 != ctx->r1) {
        // 0x8022BFBC: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_8022BFC8;
    }
    // 0x8022BFBC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8022BFC0: b           L_8022BFD0
    // 0x8022BFC4: sb          $fp, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r30;
        goto L_8022BFD0;
    // 0x8022BFC4: sb          $fp, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r30;
L_8022BFC8:
    // 0x8022BFC8: b           L_8022C02C
    // 0x8022BFCC: sh          $s6, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r22;
        goto L_8022C02C;
    // 0x8022BFCC: sh          $s6, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r22;
L_8022BFD0:
    // 0x8022BFD0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8022BFD4: jal         0x8024AA84
    // 0x8022BFD8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8024AA84(rdram, ctx);
        goto after_7;
    // 0x8022BFD8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x8022BFDC: bne         $v0, $zero, L_8022BFF0
    if (ctx->r2 != 0) {
        // 0x8022BFE0: addiu       $t5, $zero, 0x3
        ctx->r13 = ADD32(0, 0X3);
            goto L_8022BFF0;
    }
    // 0x8022BFE0: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x8022BFE4: sh          $s7, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r23;
    // 0x8022BFE8: b           L_8022C02C
    // 0x8022BFEC: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
        goto L_8022C02C;
    // 0x8022BFEC: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
L_8022BFF0:
    // 0x8022BFF0: b           L_8022C02C
    // 0x8022BFF4: sh          $t5, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r13;
        goto L_8022C02C;
    // 0x8022BFF4: sh          $t5, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r13;
L_8022BFF8:
    // 0x8022BFF8: sh          $s7, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r23;
    // 0x8022BFFC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8022C000: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8022C004: jal         0x8024AA84
    // 0x8022C008: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8024AA84(rdram, ctx);
        goto after_8;
    // 0x8022C008: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x8022C00C: beql        $v0, $zero, L_8022C030
    if (ctx->r2 == 0) {
        // 0x8022C010: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8022C030;
    }
    goto skip_0;
    // 0x8022C010: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x8022C014: b           L_8022C02C
    // 0x8022C018: sb          $fp, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r30;
        goto L_8022C02C;
    // 0x8022C018: sb          $fp, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r30;
L_8022C01C:
    // 0x8022C01C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022C020: addiu       $a0, $a0, 0x4280
    ctx->r4 = ADD32(ctx->r4, 0X4280);
    // 0x8022C024: jal         0x80231A24
    // 0x8022C028: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80231A24(rdram, ctx);
        goto after_9;
    // 0x8022C028: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_9:
L_8022C02C:
    // 0x8022C02C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8022C030:
    // 0x8022C030: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8022C034: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x8022C038: bne         $s1, $at, L_8022BEE0
    if (ctx->r17 != ctx->r1) {
        // 0x8022C03C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_8022BEE0;
    }
    // 0x8022C03C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8022C040: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8022C044: jal         0x8023D470
    // 0x8022C048: addiu       $a1, $sp, 0x5B
    ctx->r5 = ADD32(ctx->r29, 0X5B);
    func_8023D470(rdram, ctx);
        goto after_10;
    // 0x8022C048: addiu       $a1, $sp, 0x5B
    ctx->r5 = ADD32(ctx->r29, 0X5B);
    after_10:
    // 0x8022C04C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022C050: beql        $v0, $at, L_8022C07C
    if (ctx->r2 == ctx->r1) {
        // 0x8022C054: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_8022C07C;
    }
    goto skip_1;
    // 0x8022C054: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_1:
    // 0x8022C058: beq         $v0, $zero, L_8022C06C
    if (ctx->r2 == 0) {
        // 0x8022C05C: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_8022C06C;
    }
    // 0x8022C05C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022C060: addiu       $a0, $a0, 0x429C
    ctx->r4 = ADD32(ctx->r4, 0X429C);
    // 0x8022C064: jal         0x80231A24
    // 0x8022C068: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80231A24(rdram, ctx);
        goto after_11;
    // 0x8022C068: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_11:
L_8022C06C:
    // 0x8022C06C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8022C070: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022C074: sb          $t6, 0x6138($at)
    MEM_B(0X6138, ctx->r1) = ctx->r14;
L_8022C078:
    // 0x8022C078: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8022C07C:
    // 0x8022C07C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022C080: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C084: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022C088: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022C08C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022C090: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C094: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022C098: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8022C09C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8022C0A0: jr          $ra
    // 0x8022C0A4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8022C0A4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80242E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80242E94: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80242E98: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x80242E9C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80242EA0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80242EA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80242EA8: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x80242EAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80242EB0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80242EB4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80242EB8: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80242EBC: or          $t2, $a1, $zero
    ctx->r10 = ctx->r5 | 0;
    // 0x80242EC0: bne         $a2, $zero, L_80242ED0
    if (ctx->r6 != 0) {
        // 0x80242EC4: or          $t1, $t0, $zero
        ctx->r9 = ctx->r8 | 0;
            goto L_80242ED0;
    }
    // 0x80242EC4: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
    // 0x80242EC8: b           L_80243224
    // 0x80242ECC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_80243224;
    // 0x80242ECC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_80242ED0:
    // 0x80242ED0: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x80242ED4: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80242ED8: addu        $t6, $v0, $s3
    ctx->r14 = ADD32(ctx->r2, ctx->r19);
    // 0x80242EDC: sltu        $at, $v1, $t6
    ctx->r1 = ctx->r3 < ctx->r14 ? 1 : 0;
    // 0x80242EE0: beql        $at, $zero, L_802430F4
    if (ctx->r1 == 0) {
        // 0x80242EE4: lw          $v0, 0x28($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X28);
            goto L_802430F4;
    }
    goto skip_0;
    // 0x80242EE4: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    skip_0:
    // 0x80242EE8: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x80242EEC: subu        $s2, $v1, $v0
    ctx->r18 = SUB32(ctx->r3, ctx->r2);
    // 0x80242EF0: beql        $t7, $zero, L_802430F4
    if (ctx->r15 == 0) {
        // 0x80242EF4: lw          $v0, 0x28($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X28);
            goto L_802430F4;
    }
    goto skip_1;
    // 0x80242EF4: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    skip_1:
    // 0x80242EF8: blez        $s2, L_80242F74
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80242EFC: sll         $s1, $s2, 1
        ctx->r17 = S32(ctx->r18 << 1);
            goto L_80242F74;
    }
    // 0x80242EFC: sll         $s1, $s2, 1
    ctx->r17 = S32(ctx->r18 << 1);
    // 0x80242F00: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x80242F04: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x80242F08: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x80242F0C: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x80242F10: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80242F14: jalr        $t9
    // 0x80242F18: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80242F18: nop

    after_0:
    // 0x80242F1C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80242F20: andi        $a2, $v0, 0x7
    ctx->r6 = ctx->r2 & 0X7;
    // 0x80242F24: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x80242F28: lh          $t8, 0x0($t2)
    ctx->r24 = MEM_H(ctx->r10, 0X0);
    // 0x80242F2C: addu        $a3, $s1, $a2
    ctx->r7 = ADD32(ctx->r17, ctx->r6);
    // 0x80242F30: andi        $t5, $a3, 0x7
    ctx->r13 = ctx->r7 & 0X7;
    // 0x80242F34: subu        $t6, $a3, $t5
    ctx->r14 = SUB32(ctx->r7, ctx->r13);
    // 0x80242F38: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80242F3C: andi        $t3, $t8, 0xFFFF
    ctx->r11 = ctx->r24 & 0XFFFF;
    // 0x80242F40: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x80242F44: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80242F48: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80242F4C: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x80242F50: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80242F54: subu        $t3, $v0, $a2
    ctx->r11 = SUB32(ctx->r2, ctx->r6);
    // 0x80242F58: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x80242F5C: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x80242F60: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x80242F64: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x80242F68: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80242F6C: b           L_80242F78
    // 0x80242F70: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_80242F78;
    // 0x80242F70: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_80242F74:
    // 0x80242F74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80242F78:
    // 0x80242F78: lh          $t4, 0x0($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X0);
    // 0x80242F7C: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80242F80: addu        $t5, $t4, $a2
    ctx->r13 = ADD32(ctx->r12, ctx->r6);
    // 0x80242F84: sh          $t5, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r13;
    // 0x80242F88: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    // 0x80242F8C: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80242F90: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80242F94: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x80242F98: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x80242F9C: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x80242FA0: sw          $t8, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r24;
    // 0x80242FA4: beq         $at, $zero, L_802430CC
    if (ctx->r1 == 0) {
        // 0x80242FA8: lh          $t0, 0x0($t2)
        ctx->r8 = MEM_H(ctx->r10, 0X0);
            goto L_802430CC;
    }
    // 0x80242FA8: lh          $t0, 0x0($t2)
    ctx->r8 = MEM_H(ctx->r10, 0X0);
    // 0x80242FAC: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
L_80242FB0:
    // 0x80242FB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80242FB4: addu        $t0, $t0, $s1
    ctx->r8 = ADD32(ctx->r8, ctx->r17);
    // 0x80242FB8: beq         $v0, $at, L_80242FCC
    if (ctx->r2 == ctx->r1) {
        // 0x80242FBC: subu        $s3, $s3, $s2
        ctx->r19 = SUB32(ctx->r19, ctx->r18);
            goto L_80242FCC;
    }
    // 0x80242FBC: subu        $s3, $s3, $s2
    ctx->r19 = SUB32(ctx->r19, ctx->r18);
    // 0x80242FC0: beq         $v0, $zero, L_80242FCC
    if (ctx->r2 == 0) {
        // 0x80242FC4: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_80242FCC;
    }
    // 0x80242FC4: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x80242FC8: sw          $t3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r11;
L_80242FCC:
    // 0x80242FCC: lw          $t4, 0x20($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X20);
    // 0x80242FD0: lw          $t5, 0x1C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1C);
    // 0x80242FD4: subu        $v0, $t4, $t5
    ctx->r2 = SUB32(ctx->r12, ctx->r13);
    // 0x80242FD8: sltu        $at, $s3, $v0
    ctx->r1 = ctx->r19 < ctx->r2 ? 1 : 0;
    // 0x80242FDC: beq         $at, $zero, L_80242FEC
    if (ctx->r1 == 0) {
        // 0x80242FE0: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_80242FEC;
    }
    // 0x80242FE0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80242FE4: b           L_80242FEC
    // 0x80242FE8: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
        goto L_80242FEC;
    // 0x80242FE8: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
L_80242FEC:
    // 0x80242FEC: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x80242FF0: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x80242FF4: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x80242FF8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80242FFC: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x80243000: sll         $s1, $s2, 1
    ctx->r17 = S32(ctx->r18 << 1);
    // 0x80243004: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80243008: jalr        $t9
    // 0x8024300C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8024300C: nop

    after_1:
    // 0x80243010: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80243014: andi        $a1, $v0, 0x7
    ctx->r5 = ctx->r2 & 0X7;
    // 0x80243018: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8024301C: andi        $v1, $t0, 0x7
    ctx->r3 = ctx->r8 & 0X7;
    // 0x80243020: beq         $v1, $zero, L_80243034
    if (ctx->r3 == 0) {
        // 0x80243024: addu        $a3, $s1, $a1
        ctx->r7 = ADD32(ctx->r17, ctx->r5);
            goto L_80243034;
    }
    // 0x80243024: addu        $a3, $s1, $a1
    ctx->r7 = ADD32(ctx->r17, ctx->r5);
    // 0x80243028: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8024302C: b           L_80243038
    // 0x80243030: subu        $a2, $t6, $v1
    ctx->r6 = SUB32(ctx->r14, ctx->r3);
        goto L_80243038;
    // 0x80243030: subu        $a2, $t6, $v1
    ctx->r6 = SUB32(ctx->r14, ctx->r3);
L_80243034:
    // 0x80243034: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80243038:
    // 0x80243038: addu        $t7, $t0, $a2
    ctx->r15 = ADD32(ctx->r8, ctx->r6);
    // 0x8024303C: andi        $t4, $a3, 0x7
    ctx->r12 = ctx->r7 & 0X7;
    // 0x80243040: subu        $t5, $a3, $t4
    ctx->r13 = SUB32(ctx->r7, ctx->r12);
    // 0x80243044: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80243048: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8024304C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80243050: or          $t3, $t8, $at
    ctx->r11 = ctx->r24 | ctx->r1;
    // 0x80243054: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x80243058: addiu       $t9, $t5, 0x8
    ctx->r25 = ADD32(ctx->r13, 0X8);
    // 0x8024305C: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x80243060: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80243064: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80243068: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8024306C: subu        $t8, $v0, $a1
    ctx->r24 = SUB32(ctx->r2, ctx->r5);
    // 0x80243070: lui         $t7, 0x400
    ctx->r15 = S32(0X400 << 16);
    // 0x80243074: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80243078: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x8024307C: bne         $a1, $zero, L_80243088
    if (ctx->r5 != 0) {
        // 0x80243080: addiu       $t1, $t1, 0x8
        ctx->r9 = ADD32(ctx->r9, 0X8);
            goto L_80243088;
    }
    // 0x80243080: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x80243084: beq         $a2, $zero, L_802430C0
    if (ctx->r6 == 0) {
        // 0x80243088: addu        $t3, $t0, $a1
        ctx->r11 = ADD32(ctx->r8, ctx->r5);
            goto L_802430C0;
    }
L_80243088:
    // 0x80243088: addu        $t3, $t0, $a1
    ctx->r11 = ADD32(ctx->r8, ctx->r5);
    // 0x8024308C: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80243090: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80243094: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x80243098: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x8024309C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x802430A0: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x802430A4: sll         $t7, $t0, 16
    ctx->r15 = S32(ctx->r8 << 16);
    // 0x802430A8: andi        $t8, $s1, 0xFFFF
    ctx->r24 = ctx->r17 & 0XFFFF;
    // 0x802430AC: or          $t3, $t7, $t8
    ctx->r11 = ctx->r15 | ctx->r24;
    // 0x802430B0: or          $t9, $t5, $at
    ctx->r25 = ctx->r13 | ctx->r1;
    // 0x802430B4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802430B8: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x802430BC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_802430C0:
    // 0x802430C0: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x802430C4: bnel        $at, $zero, L_80242FB0
    if (ctx->r1 != 0) {
        // 0x802430C8: lw          $v0, 0x24($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X24);
            goto L_80242FB0;
    }
    goto skip_2;
    // 0x802430C8: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    skip_2:
L_802430CC:
    // 0x802430CC: lw          $t4, 0x38($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X38);
    // 0x802430D0: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x802430D4: sll         $t6, $s3, 1
    ctx->r14 = S32(ctx->r19 << 1);
    // 0x802430D8: addu        $t5, $t4, $s3
    ctx->r13 = ADD32(ctx->r12, ctx->r19);
    // 0x802430DC: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x802430E0: sw          $t5, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r13;
    // 0x802430E4: sw          $t7, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r15;
    // 0x802430E8: b           L_80243224
    // 0x802430EC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_80243224;
    // 0x802430EC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x802430F0: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
L_802430F4:
    // 0x802430F4: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x802430F8: sll         $s1, $s3, 1
    ctx->r17 = S32(ctx->r19 << 1);
    // 0x802430FC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80243100: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x80243104: addu        $v1, $a0, $s1
    ctx->r3 = ADD32(ctx->r4, ctx->r17);
    // 0x80243108: subu        $t3, $v1, $t8
    ctx->r11 = SUB32(ctx->r3, ctx->r24);
    // 0x8024310C: subu        $s2, $t3, $t4
    ctx->r18 = SUB32(ctx->r11, ctx->r12);
    // 0x80243110: bgezl       $s2, L_80243120
    if (SIGNED(ctx->r18) >= 0) {
        // 0x80243114: slt         $at, $s1, $s2
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
            goto L_80243120;
    }
    goto skip_3;
    // 0x80243114: slt         $at, $s1, $s2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    skip_3:
    // 0x80243118: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8024311C: slt         $at, $s1, $s2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
L_80243120:
    // 0x80243120: beql        $at, $zero, L_80243130
    if (ctx->r1 == 0) {
        // 0x80243124: slt         $at, $s2, $s1
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_80243130;
    }
    goto skip_4;
    // 0x80243124: slt         $at, $s2, $s1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
    skip_4:
    // 0x80243128: or          $s2, $s1, $zero
    ctx->r18 = ctx->r17 | 0;
    // 0x8024312C: slt         $at, $s2, $s1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
L_80243130:
    // 0x80243130: beql        $at, $zero, L_802431E4
    if (ctx->r1 == 0) {
        // 0x80243134: sw          $v1, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->r3;
            goto L_802431E4;
    }
    goto skip_5;
    // 0x80243134: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
    skip_5:
    // 0x80243138: blez        $s3, L_802431B8
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8024313C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_802431B8;
    }
    // 0x8024313C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80243140: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x80243144: subu        $a1, $s1, $s2
    ctx->r5 = SUB32(ctx->r17, ctx->r18);
    // 0x80243148: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x8024314C: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x80243150: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x80243154: jalr        $t9
    // 0x80243158: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80243158: nop

    after_2:
    // 0x8024315C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80243160: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80243164: andi        $a2, $v0, 0x7
    ctx->r6 = ctx->r2 & 0X7;
    // 0x80243168: lh          $t5, 0x0($t2)
    ctx->r13 = MEM_H(ctx->r10, 0X0);
    // 0x8024316C: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x80243170: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x80243174: andi        $t8, $a3, 0x7
    ctx->r24 = ctx->r7 & 0X7;
    // 0x80243178: subu        $t3, $a3, $t8
    ctx->r11 = SUB32(ctx->r7, ctx->r24);
    // 0x8024317C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80243180: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x80243184: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80243188: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8024318C: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80243190: andi        $t9, $t4, 0xFFFF
    ctx->r25 = ctx->r12 & 0XFFFF;
    // 0x80243194: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80243198: subu        $t6, $v0, $a2
    ctx->r14 = SUB32(ctx->r2, ctx->r6);
    // 0x8024319C: lui         $t5, 0x400
    ctx->r13 = S32(0X400 << 16);
    // 0x802431A0: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x802431A4: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x802431A8: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x802431AC: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x802431B0: b           L_802431B8
    // 0x802431B4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_802431B8;
    // 0x802431B4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_802431B8:
    // 0x802431B8: lh          $t7, 0x0($t2)
    ctx->r15 = MEM_H(ctx->r10, 0X0);
    // 0x802431BC: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x802431C0: sh          $t8, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r24;
    // 0x802431C4: lw          $t3, 0x38($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X38);
    // 0x802431C8: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x802431CC: addu        $t4, $t3, $s3
    ctx->r12 = ADD32(ctx->r11, ctx->r19);
    // 0x802431D0: addu        $t5, $t9, $s1
    ctx->r13 = ADD32(ctx->r25, ctx->r17);
    // 0x802431D4: sw          $t4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r12;
    // 0x802431D8: b           L_802431E4
    // 0x802431DC: sw          $t5, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r13;
        goto L_802431E4;
    // 0x802431DC: sw          $t5, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r13;
    // 0x802431E0: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
L_802431E4:
    // 0x802431E4: beq         $s2, $zero, L_80243220
    if (ctx->r18 == 0) {
        // 0x802431E8: subu        $v1, $s1, $s2
        ctx->r3 = SUB32(ctx->r17, ctx->r18);
            goto L_80243220;
    }
    // 0x802431E8: subu        $v1, $s1, $s2
    ctx->r3 = SUB32(ctx->r17, ctx->r18);
    // 0x802431EC: bgez        $v1, L_802431F8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x802431F0: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_802431F8;
    }
    // 0x802431F0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x802431F4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802431F8:
    // 0x802431F8: lh          $t6, 0x0($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X0);
    // 0x802431FC: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80243200: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80243204: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x80243208: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x8024320C: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x80243210: or          $t3, $t8, $at
    ctx->r11 = ctx->r24 | ctx->r1;
    // 0x80243214: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80243218: sw          $s2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r18;
    // 0x8024321C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_80243220:
    // 0x80243220: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_80243224:
    // 0x80243224: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80243228: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8024322C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80243230: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80243234: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80243238: jr          $ra
    // 0x8024323C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8024323C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_802048EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802048EC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802048F0: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x802048F4: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x802048F8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802048FC: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x80204900: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x80204904: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80204908: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8020490C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80204910: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80204914: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80204918: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8020491C: addiu       $t6, $t6, 0x5204
    ctx->r14 = ADD32(ctx->r14, 0X5204);
    // 0x80204920: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80204924: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
    // 0x80204928: jal         0x80236F80
    // 0x8020492C: addiu       $a0, $zero, 0x5622
    ctx->r4 = ADD32(0, 0X5622);
    func_80236F80(rdram, ctx);
        goto after_0;
    // 0x8020492C: addiu       $a0, $zero, 0x5622
    ctx->r4 = ADD32(0, 0X5622);
    after_0:
    // 0x80204930: sw          $v0, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r2;
    // 0x80204934: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x80204938: lw          $v1, 0x300($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X300);
    // 0x8020493C: lui         $s6, 0x8026
    ctx->r22 = S32(0X8026 << 16);
    // 0x80204940: addiu       $s6, $s6, -0x4734
    ctx->r22 = ADD32(ctx->r22, -0X4734);
    // 0x80204944: bne         $v1, $zero, L_80204978
    if (ctx->r3 != 0) {
        // 0x80204948: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80204978;
    }
    // 0x80204948: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8020494C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80204950: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80204954: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80204958: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020495C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80204960: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80204964: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    // 0x80204968: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8020496C: div.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80204970: b           L_802049E4
    // 0x80204974: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
        goto L_802049E4;
    // 0x80204974: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
L_80204978:
    // 0x80204978: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020497C: bne         $v1, $at, L_802049B4
    if (ctx->r3 != ctx->r1) {
        // 0x80204980: addiu       $s7, $zero, 0x2
        ctx->r23 = ADD32(0, 0X2);
            goto L_802049B4;
    }
    // 0x80204980: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    // 0x80204984: lw          $t8, 0x18($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X18);
    // 0x80204988: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020498C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80204990: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80204994: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80204998: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020499C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802049A0: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    // 0x802049A4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802049A8: div.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802049AC: b           L_802049E4
    // 0x802049B0: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
        goto L_802049E4;
    // 0x802049B0: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
L_802049B4:
    // 0x802049B4: bnel        $s7, $v1, L_802049E8
    if (ctx->r23 != ctx->r3) {
        // 0x802049B8: lwc1        $f0, 0x40($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
            goto L_802049E8;
    }
    goto skip_0;
    // 0x802049B8: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    skip_0:
    // 0x802049BC: lw          $t9, 0x18($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X18);
    // 0x802049C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802049C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802049C8: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x802049CC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802049D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802049D4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802049D8: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802049DC: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802049E0: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
L_802049E4:
    // 0x802049E4: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
L_802049E8:
    // 0x802049E8: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x802049EC: addiu       $v1, $v1, -0x4738
    ctx->r3 = ADD32(ctx->r3, -0X4738);
    // 0x802049F0: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x802049F4: addiu       $a0, $a0, 0x7860
    ctx->r4 = ADD32(ctx->r4, 0X7860);
    // 0x802049F8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x802049FC: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80204A00: nop

    // 0x80204A04: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80204A08: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80204A0C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80204A10: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80204A14: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x80204A18: nop

    // 0x80204A1C: bc1fl       L_80204A30
    if (!c1cs) {
        // 0x80204A20: andi        $t3, $v0, 0xF
        ctx->r11 = ctx->r2 & 0XF;
            goto L_80204A30;
    }
    goto skip_1;
    // 0x80204A20: andi        $t3, $v0, 0xF
    ctx->r11 = ctx->r2 & 0XF;
    skip_1:
    // 0x80204A24: addiu       $v0, $t1, 0x1
    ctx->r2 = ADD32(ctx->r9, 0X1);
    // 0x80204A28: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80204A2C: andi        $t3, $v0, 0xF
    ctx->r11 = ctx->r2 & 0XF;
L_80204A30:
    // 0x80204A30: beq         $t3, $zero, L_80204A44
    if (ctx->r11 == 0) {
        // 0x80204A34: addiu       $at, $zero, -0x10
        ctx->r1 = ADD32(0, -0X10);
            goto L_80204A44;
    }
    // 0x80204A34: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80204A38: and         $t4, $v0, $at
    ctx->r12 = ctx->r2 & ctx->r1;
    // 0x80204A3C: addiu       $v0, $t4, 0x10
    ctx->r2 = ADD32(ctx->r12, 0X10);
    // 0x80204A40: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80204A44:
    // 0x80204A44: addiu       $t6, $v0, -0x10
    ctx->r14 = ADD32(ctx->r2, -0X10);
    // 0x80204A48: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80204A4C: sw          $t6, -0x473C($at)
    MEM_W(-0X473C, ctx->r1) = ctx->r14;
    // 0x80204A50: addiu       $t7, $v0, 0x74
    ctx->r15 = ADD32(ctx->r2, 0X74);
    // 0x80204A54: jal         0x802371AC
    // 0x80204A58: sw          $t7, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r15;
    func_802371AC(rdram, ctx);
        goto after_1;
    // 0x80204A58: sw          $t7, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r15;
    after_1:
    // 0x80204A5C: lui         $s3, 0x8026
    ctx->r19 = S32(0X8026 << 16);
    // 0x80204A60: addiu       $s3, $s3, -0x4744
    ctx->r19 = ADD32(ctx->r19, -0X4744);
    // 0x80204A64: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x80204A68: lui         $s5, 0x8028
    ctx->r21 = S32(0X8028 << 16);
    // 0x80204A6C: addiu       $s5, $s5, 0xBC0
    ctx->r21 = ADD32(ctx->r21, 0XBC0);
    // 0x80204A70: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x80204A74: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x80204A78: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80204A7C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80204A80: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x80204A84: lhu         $t0, 0x3C($s5)
    ctx->r8 = MEM_HU(ctx->r21, 0X3C);
    // 0x80204A88: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80204A8C: blezl       $t1, L_80204AEC
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80204A90: sll         $s1, $s2, 2
        ctx->r17 = S32(ctx->r18 << 2);
            goto L_80204AEC;
    }
    goto skip_2;
    // 0x80204A90: sll         $s1, $s2, 2
    ctx->r17 = S32(ctx->r18 << 2);
    skip_2:
    // 0x80204A94: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
L_80204A98:
    // 0x80204A98: addu        $a1, $s1, $t2
    ctx->r5 = ADD32(ctx->r17, ctx->r10);
    // 0x80204A9C: jal         0x80237150
    // 0x80204AA0: addiu       $a0, $a1, 0x14
    ctx->r4 = ADD32(ctx->r5, 0X14);
    func_80237150(rdram, ctx);
        goto after_2;
    // 0x80204AA0: addiu       $a0, $a1, 0x14
    ctx->r4 = ADD32(ctx->r5, 0X14);
    after_2:
    // 0x80204AA4: lw          $a2, 0x14($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X14);
    // 0x80204AA8: addiu       $t3, $zero, 0x800
    ctx->r11 = ADD32(0, 0X800);
    // 0x80204AAC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80204AB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80204AB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80204AB8: jal         0x80236CD0
    // 0x80204ABC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80236CD0(rdram, ctx);
        goto after_3;
    // 0x80204ABC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x80204AC0: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x80204AC4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80204AC8: addu        $t5, $t4, $s1
    ctx->r13 = ADD32(ctx->r12, ctx->r17);
    // 0x80204ACC: sw          $v0, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->r2;
    // 0x80204AD0: lhu         $t6, 0x3C($s5)
    ctx->r14 = MEM_HU(ctx->r21, 0X3C);
    // 0x80204AD4: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x80204AD8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80204ADC: slt         $at, $s2, $t7
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80204AE0: bnel        $at, $zero, L_80204A98
    if (ctx->r1 != 0) {
        // 0x80204AE4: lw          $t2, 0x0($s3)
        ctx->r10 = MEM_W(ctx->r19, 0X0);
            goto L_80204A98;
    }
    goto skip_3;
    // 0x80204AE4: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    skip_3:
    // 0x80204AE8: sll         $s1, $s2, 2
    ctx->r17 = S32(ctx->r18 << 2);
L_80204AEC:
    // 0x80204AEC: addu        $s1, $s1, $s2
    ctx->r17 = ADD32(ctx->r17, ctx->r18);
    // 0x80204AF0: lw          $a2, 0x14($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X14);
    // 0x80204AF4: addiu       $t8, $zero, 0x800
    ctx->r24 = ADD32(0, 0X800);
    // 0x80204AF8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80204AFC: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x80204B00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80204B04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80204B08: jal         0x80236CD0
    // 0x80204B0C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80236CD0(rdram, ctx);
        goto after_4;
    // 0x80204B0C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x80204B10: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x80204B14: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80204B18: addiu       $s0, $s0, 0x7628
    ctx->r16 = ADD32(ctx->r16, 0X7628);
    // 0x80204B1C: addu        $t0, $t9, $s1
    ctx->r8 = ADD32(ctx->r25, ctx->r17);
    // 0x80204B20: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80204B24: sw          $v0, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r2;
    // 0x80204B28: addiu       $s1, $s1, 0x7630
    ctx->r17 = ADD32(ctx->r17, 0X7630);
L_80204B2C:
    // 0x80204B2C: lhu         $t1, 0x38($s5)
    ctx->r9 = MEM_HU(ctx->r21, 0X38);
    // 0x80204B30: lw          $a2, 0x14($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X14);
    // 0x80204B34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80204B38: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x80204B3C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80204B40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80204B44: jal         0x80236CD0
    // 0x80204B48: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80236CD0(rdram, ctx);
        goto after_5;
    // 0x80204B48: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x80204B4C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80204B50: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x80204B54: bne         $at, $zero, L_80204B2C
    if (ctx->r1 != 0) {
        // 0x80204B58: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_80204B2C;
    }
    // 0x80204B58: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x80204B5C: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80204B60: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80204B64: addiu       $s1, $s1, 0x7634
    ctx->r17 = ADD32(ctx->r17, 0X7634);
    // 0x80204B68: addiu       $s0, $s0, 0x7628
    ctx->r16 = ADD32(ctx->r16, 0X7628);
L_80204B6C:
    // 0x80204B6C: lw          $a2, 0x14($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X14);
    // 0x80204B70: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x80204B74: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80204B78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80204B7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80204B80: jal         0x80236CD0
    // 0x80204B84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80236CD0(rdram, ctx);
        goto after_6;
    // 0x80204B84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x80204B88: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x80204B8C: sh          $s7, 0x60($v0)
    MEM_H(0X60, ctx->r2) = ctx->r23;
    // 0x80204B90: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x80204B94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80204B98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80204B9C: sw          $v1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r3;
    // 0x80204BA0: lw          $t4, 0x0($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X0);
    // 0x80204BA4: lw          $a2, 0x14($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X14);
    // 0x80204BA8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80204BAC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80204BB0: jal         0x80236CD0
    // 0x80204BB4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_80236CD0(rdram, ctx);
        goto after_7;
    // 0x80204BB4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_7:
    // 0x80204BB8: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x80204BBC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80204BC0: bne         $s0, $s1, L_80204B6C
    if (ctx->r16 != ctx->r17) {
        // 0x80204BC4: sw          $v0, 0x0($t6)
        MEM_W(0X0, ctx->r14) = ctx->r2;
            goto L_80204B6C;
    }
    // 0x80204BC4: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x80204BC8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80204BCC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80204BD0: addiu       $a1, $a1, 0x7840
    ctx->r5 = ADD32(ctx->r5, 0X7840);
    // 0x80204BD4: addiu       $a0, $a0, 0x7828
    ctx->r4 = ADD32(ctx->r4, 0X7828);
    // 0x80204BD8: jal         0x802371E0
    // 0x80204BDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802371E0(rdram, ctx);
        goto after_8;
    // 0x80204BDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x80204BE0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80204BE4: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80204BE8: addiu       $a1, $a1, 0x7808
    ctx->r5 = ADD32(ctx->r5, 0X7808);
    // 0x80204BEC: addiu       $a0, $a0, 0x77F0
    ctx->r4 = ADD32(ctx->r4, 0X77F0);
    // 0x80204BF0: jal         0x802371E0
    // 0x80204BF4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802371E0(rdram, ctx);
        goto after_9;
    // 0x80204BF4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x80204BF8: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80204BFC: lui         $a1, 0x8026
    ctx->r5 = S32(0X8026 << 16);
    // 0x80204C00: lw          $a1, -0x4710($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4710);
    // 0x80204C04: addiu       $a0, $a0, -0x4728
    ctx->r4 = ADD32(ctx->r4, -0X4728);
    // 0x80204C08: jal         0x802371E0
    // 0x80204C0C: lhu         $a2, 0x3C($s5)
    ctx->r6 = MEM_HU(ctx->r21, 0X3C);
    func_802371E0(rdram, ctx);
        goto after_10;
    // 0x80204C0C: lhu         $a2, 0x3C($s5)
    ctx->r6 = MEM_HU(ctx->r21, 0X3C);
    after_10:
    // 0x80204C10: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80204C14: lui         $a1, 0x8026
    ctx->r5 = S32(0X8026 << 16);
    // 0x80204C18: addiu       $a1, $a1, -0x46F0
    ctx->r5 = ADD32(ctx->r5, -0X46F0);
    // 0x80204C1C: addiu       $a0, $a0, -0x4708
    ctx->r4 = ADD32(ctx->r4, -0X4708);
    // 0x80204C20: jal         0x802371E0
    // 0x80204C24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802371E0(rdram, ctx);
        goto after_11;
    // 0x80204C24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x80204C28: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80204C2C: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80204C30: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x80204C34: addiu       $s0, $s0, 0x7640
    ctx->r16 = ADD32(ctx->r16, 0X7640);
    // 0x80204C38: addiu       $t7, $t7, -0x4750
    ctx->r15 = ADD32(ctx->r15, -0X4750);
    // 0x80204C3C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80204C40: addiu       $a2, $a2, 0x4C90
    ctx->r6 = ADD32(ctx->r6, 0X4C90);
    // 0x80204C44: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80204C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80204C4C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80204C50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80204C54: jal         0x80237210
    // 0x80204C58: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_80237210(rdram, ctx);
        goto after_12;
    // 0x80204C58: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_12:
    // 0x80204C5C: jal         0x80237360
    // 0x80204C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80237360(rdram, ctx);
        goto after_13;
    // 0x80204C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80204C64: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80204C68: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80204C6C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80204C70: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80204C74: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80204C78: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80204C7C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80204C80: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x80204C84: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x80204C88: jr          $ra
    // 0x80204C8C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80204C8C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80238010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238010: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80238014: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80238018: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8023801C: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x80238020: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x80238024: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80238028: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8023802C: sw          $t7, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r15;
    // 0x80238030: lw          $t8, 0x8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X8);
    // 0x80238034: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80238038: sw          $t8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r24;
    // 0x8023803C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_80238040:
    // 0x80238040: lw          $t9, 0xC($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XC);
    // 0x80238044: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80238048: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8023804C: sw          $t9, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r25;
    // 0x80238050: lw          $t1, 0x4C($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X4C);
    // 0x80238054: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x80238058: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x8023805C: sw          $t1, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r9;
    // 0x80238060: lbu         $t2, 0x8C($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X8C);
    // 0x80238064: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80238068: sb          $t2, 0x96($a3)
    MEM_B(0X96, ctx->r7) = ctx->r10;
    // 0x8023806C: lbu         $t3, 0x9A($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X9A);
    // 0x80238070: sb          $t3, 0xA6($a3)
    MEM_B(0XA6, ctx->r7) = ctx->r11;
    // 0x80238074: lw          $t4, 0xA4($a2)
    ctx->r12 = MEM_W(ctx->r6, 0XA4);
    // 0x80238078: sw          $t4, 0xB0($v1)
    MEM_W(0XB0, ctx->r3) = ctx->r12;
    // 0x8023807C: lw          $t5, 0x8($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X8);
    // 0x80238080: sw          $t5, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r13;
    // 0x80238084: lw          $t6, 0x48($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X48);
    // 0x80238088: sw          $t6, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r14;
    // 0x8023808C: lbu         $t7, 0x8B($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X8B);
    // 0x80238090: sb          $t7, 0x97($a3)
    MEM_B(0X97, ctx->r7) = ctx->r15;
    // 0x80238094: lbu         $t8, 0x9B($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X9B);
    // 0x80238098: sb          $t8, 0xA7($a3)
    MEM_B(0XA7, ctx->r7) = ctx->r24;
    // 0x8023809C: lw          $t9, 0xA8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XA8);
    // 0x802380A0: bne         $v0, $a0, L_80238040
    if (ctx->r2 != ctx->r4) {
        // 0x802380A4: sw          $t9, 0xB4($v1)
        MEM_W(0XB4, ctx->r3) = ctx->r25;
            goto L_80238040;
    }
    // 0x802380A4: sw          $t9, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r25;
    // 0x802380A8: jr          $ra
    // 0x802380AC: nop

    return;
    // 0x802380AC: nop

;}
RECOMP_FUNC void func_802380B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802380B0: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x802380B4: lbu         $t6, 0x98($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X98);
    // 0x802380B8: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x802380BC: addu        $a2, $a0, $t7
    ctx->r6 = ADD32(ctx->r4, ctx->r15);
    // 0x802380C0: beql        $t6, $zero, L_802380F8
    if (ctx->r14 == 0) {
        // 0x802380C4: lw          $a3, 0x18($a2)
        ctx->r7 = MEM_W(ctx->r6, 0X18);
            goto L_802380F8;
    }
    goto skip_0;
    // 0x802380C4: lw          $a3, 0x18($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X18);
    skip_0:
    // 0x802380C8: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x802380CC: addu        $a2, $a0, $t7
    ctx->r6 = ADD32(ctx->r4, ctx->r15);
    // 0x802380D0: lw          $a3, 0x58($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X58);
    // 0x802380D4: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x802380D8: addiu       $t8, $a3, 0x1
    ctx->r24 = ADD32(ctx->r7, 0X1);
    // 0x802380DC: sw          $t8, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->r24;
    // 0x802380E0: lbu         $t9, 0x98($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X98);
    // 0x802380E4: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x802380E8: sb          $t6, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r14;
    // 0x802380EC: jr          $ra
    // 0x802380F0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x802380F0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802380F4: lw          $a3, 0x18($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X18);
L_802380F8:
    // 0x802380F8: addiu       $t0, $zero, 0xFE
    ctx->r8 = ADD32(0, 0XFE);
    // 0x802380FC: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x80238100: addiu       $t8, $a3, 0x1
    ctx->r24 = ADD32(ctx->r7, 0X1);
    // 0x80238104: sw          $t8, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r24;
    // 0x80238108: bne         $t0, $v1, L_8023816C
    if (ctx->r8 != ctx->r3) {
        // 0x8023810C: nop
    
            goto L_8023816C;
    }
    // 0x8023810C: nop

    // 0x80238110: lbu         $a0, 0x0($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X0);
    // 0x80238114: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80238118: sw          $t9, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r25;
    // 0x8023811C: beq         $t0, $a0, L_8023816C
    if (ctx->r8 == ctx->r4) {
        // 0x80238120: addiu       $t6, $t9, 0x1
        ctx->r14 = ADD32(ctx->r25, 0X1);
            goto L_8023816C;
    }
    // 0x80238120: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80238124: lbu         $v1, 0x0($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X0);
    // 0x80238128: sw          $t6, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r14;
    // 0x8023812C: lbu         $a1, 0x0($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X0);
    // 0x80238130: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80238134: sll         $t9, $a0, 8
    ctx->r25 = S32(ctx->r4 << 8);
    // 0x80238138: sw          $t7, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r15;
    // 0x8023813C: addu        $t6, $t9, $v1
    ctx->r14 = ADD32(ctx->r25, ctx->r3);
    // 0x80238140: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80238144: addiu       $t9, $t7, -0x4
    ctx->r25 = ADD32(ctx->r15, -0X4);
    // 0x80238148: sw          $t9, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->r25;
    // 0x8023814C: sb          $a1, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r5;
    // 0x80238150: lw          $a3, 0x58($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X58);
    // 0x80238154: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x80238158: addiu       $t8, $a3, 0x1
    ctx->r24 = ADD32(ctx->r7, 0X1);
    // 0x8023815C: sw          $t8, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->r24;
    // 0x80238160: lbu         $t6, 0x98($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X98);
    // 0x80238164: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80238168: sb          $t7, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r15;
L_8023816C:
    // 0x8023816C: jr          $ra
    // 0x80238170: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80238170: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8022149C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022149C: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x802214A0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802214A4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802214A8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802214AC: jal         0x80228DE0
    // 0x802214B0: addiu       $a0, $a0, 0x43B0
    ctx->r4 = ADD32(ctx->r4, 0X43B0);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802214B0: addiu       $a0, $a0, 0x43B0
    ctx->r4 = ADD32(ctx->r4, 0X43B0);
    after_0:
    // 0x802214B4: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802214B8: addiu       $a1, $a1, 0x43B0
    ctx->r5 = ADD32(ctx->r5, 0X43B0);
    // 0x802214BC: jal         0x80228DE0
    // 0x802214C0: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x802214C0: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_1:
    // 0x802214C4: jal         0x8022970C
    // 0x802214C8: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x802214C8: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    after_2:
    // 0x802214CC: lui         $a1, 0xBFC9
    ctx->r5 = S32(0XBFC9 << 16);
    // 0x802214D0: ori         $a1, $a1, 0xFDA
    ctx->r5 = ctx->r5 | 0XFDA;
    // 0x802214D4: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x802214D8: jal         0x80229CD4
    // 0x802214DC: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    func_80229CD4(rdram, ctx);
        goto after_3;
    // 0x802214DC: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_3:
    // 0x802214E0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802214E4: addiu       $a0, $a0, 0x43B0
    ctx->r4 = ADD32(ctx->r4, 0X43B0);
    // 0x802214E8: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x802214EC: jal         0x802297A8
    // 0x802214F0: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    func_802297A8(rdram, ctx);
        goto after_4;
    // 0x802214F0: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_4:
    // 0x802214F4: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802214F8: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x802214FC: addiu       $a2, $a2, 0x43B0
    ctx->r6 = ADD32(ctx->r6, 0X43B0);
    // 0x80221500: addiu       $a1, $a1, 0x43F0
    ctx->r5 = ADD32(ctx->r5, 0X43F0);
    // 0x80221504: jal         0x802297A8
    // 0x80221508: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    func_802297A8(rdram, ctx);
        goto after_5;
    // 0x80221508: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_5:
    // 0x8022150C: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    // 0x80221510: jal         0x802291F8
    // 0x80221514: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_802291F8(rdram, ctx);
        goto after_6;
    // 0x80221514: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_6:
    // 0x80221518: addiu       $t6, $sp, 0xC8
    ctx->r14 = ADD32(ctx->r29, 0XC8);
    // 0x8022151C: addiu       $t8, $t6, 0x3C
    ctx->r24 = ADD32(ctx->r14, 0X3C);
    // 0x80221520: or          $t9, $sp, $zero
    ctx->r25 = ctx->r29 | 0;
L_80221524:
    // 0x80221524: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80221528: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8022152C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80221530: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x80221534: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x80221538: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x8022153C: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x80221540: bne         $t6, $t8, L_80221524
    if (ctx->r14 != ctx->r24) {
        // 0x80221544: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_80221524;
    }
    // 0x80221544: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x80221548: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8022154C: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x80221550: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80221554: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80221558: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8022155C: jal         0x802208B4
    // 0x80221560: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    func_802208B4(rdram, ctx);
        goto after_7;
    // 0x80221560: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    after_7:
    // 0x80221564: jal         0x8022975C
    // 0x80221568: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    func_8022975C(rdram, ctx);
        goto after_8;
    // 0x80221568: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    after_8:
    // 0x8022156C: addiu       $t0, $sp, 0xC8
    ctx->r8 = ADD32(ctx->r29, 0XC8);
    // 0x80221570: addiu       $t2, $t0, 0x3C
    ctx->r10 = ADD32(ctx->r8, 0X3C);
    // 0x80221574: or          $t3, $sp, $zero
    ctx->r11 = ctx->r29 | 0;
L_80221578:
    // 0x80221578: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8022157C: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x80221580: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x80221584: sw          $at, -0xC($t3)
    MEM_W(-0XC, ctx->r11) = ctx->r1;
    // 0x80221588: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x8022158C: sw          $at, -0x8($t3)
    MEM_W(-0X8, ctx->r11) = ctx->r1;
    // 0x80221590: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x80221594: bne         $t0, $t2, L_80221578
    if (ctx->r8 != ctx->r10) {
        // 0x80221598: sw          $at, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r1;
            goto L_80221578;
    }
    // 0x80221598: sw          $at, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r1;
    // 0x8022159C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x802215A0: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x802215A4: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x802215A8: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x802215AC: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x802215B0: jal         0x802207E8
    // 0x802215B4: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    func_802207E8(rdram, ctx);
        goto after_9;
    // 0x802215B4: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    after_9:
    // 0x802215B8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802215BC: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    // 0x802215C0: jr          $ra
    // 0x802215C4: nop

    return;
    // 0x802215C4: nop

;}
RECOMP_FUNC void func_8020802C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020802C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80208030: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x80208034: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80208038: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x8020803C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80208040: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80208044: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80208048: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8020804C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80208050:
    // 0x80208050: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80208054: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80208058: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x8020805C: slti        $at, $t7, 0x5
    ctx->r1 = SIGNED(ctx->r15) < 0X5 ? 1 : 0;
    // 0x80208060: mflo        $t6
    ctx->r14 = lo;
    // 0x80208064: addu        $v1, $t6, $a0
    ctx->r3 = ADD32(ctx->r14, ctx->r4);
    // 0x80208068: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8020806C: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80208070: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80208074: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80208078: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8020807C: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80208080: mul.s       $f8, $f4, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80208084: add.s       $f0, $f18, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x80208088: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x8020808C: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x80208090: nop

    // 0x80208094: bc1f        L_802080A4
    if (!c1cs) {
        // 0x80208098: nop
    
            goto L_802080A4;
    }
    // 0x80208098: nop

    // 0x8020809C: b           L_802080B0
    // 0x802080A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802080B0;
    // 0x802080A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802080A4:
    // 0x802080A4: bne         $at, $zero, L_80208050
    if (ctx->r1 != 0) {
        // 0x802080A8: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80208050;
    }
    // 0x802080A8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x802080AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802080B0:
    // 0x802080B0: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x802080B4: jr          $ra
    // 0x802080B8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x802080B8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8023CD40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023CD40: sh          $a1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r5;
    // 0x8023CD44: jr          $ra
    // 0x8023CD48: sh          $a2, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r6;
    return;
    // 0x8023CD48: sh          $a2, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r6;
;}
RECOMP_FUNC void func_8023499C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023499C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802349A0: lui         $a3, 0x8025
    ctx->r7 = S32(0X8025 << 16);
    // 0x802349A4: addiu       $a3, $a3, 0x904
    ctx->r7 = ADD32(ctx->r7, 0X904);
    // 0x802349A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802349AC: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x802349B0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x802349B4: jal         0x8023F1D0
    // 0x802349B8: ori         $a2, $zero, 0xD1A4
    ctx->r6 = 0 | 0XD1A4;
    func_8023F1D0(rdram, ctx);
        goto after_0;
    // 0x802349B8: ori         $a2, $zero, 0xD1A4
    ctx->r6 = 0 | 0XD1A4;
    after_0:
    // 0x802349BC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x802349C0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x802349C4: ori         $at, $zero, 0x9C4E
    ctx->r1 = 0 | 0X9C4E;
    // 0x802349C8: multu       $t6, $at
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802349CC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x802349D0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x802349D4: sll         $t9, $t9, 6
    ctx->r25 = S32(ctx->r25 << 6);
    // 0x802349D8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x802349DC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x802349E0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x802349E4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x802349E8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x802349EC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x802349F0: lui         $a3, 0x8025
    ctx->r7 = S32(0X8025 << 16);
    // 0x802349F4: mflo        $t7
    ctx->r15 = lo;
    // 0x802349F8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x802349FC: addiu       $a3, $a3, 0x904
    ctx->r7 = ADD32(ctx->r7, 0X904);
    // 0x80234A00: subu        $t0, $t7, $t9
    ctx->r8 = SUB32(ctx->r15, ctx->r25);
    // 0x80234A04: bgez        $t0, L_80234A1C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80234A08: sw          $t0, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r8;
            goto L_80234A1C;
    }
    // 0x80234A08: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
    // 0x80234A0C: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x80234A10: ori         $at, $at, 0xFFAB
    ctx->r1 = ctx->r1 | 0XFFAB;
    // 0x80234A14: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x80234A18: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
L_80234A1C:
    // 0x80234A1C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80234A20: addiu       $v1, $v1, 0x908
    ctx->r3 = ADD32(ctx->r3, 0X908);
    // 0x80234A24: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x80234A28: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80234A2C: jal         0x8023F1D0
    // 0x80234A30: ori         $a2, $zero, 0xCE26
    ctx->r6 = 0 | 0XCE26;
    func_8023F1D0(rdram, ctx);
        goto after_1;
    // 0x80234A30: ori         $a2, $zero, 0xCE26
    ctx->r6 = 0 | 0XCE26;
    after_1:
    // 0x80234A34: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80234A38: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80234A3C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80234A40: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80234A44: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80234A48: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x80234A4C: sll         $t3, $t3, 5
    ctx->r11 = S32(ctx->r11 << 5);
    // 0x80234A50: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80234A54: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80234A58: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80234A5C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80234A60: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80234A64: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80234A68: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80234A6C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80234A70: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80234A74: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80234A78: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80234A7C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80234A80: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80234A84: subu        $t6, $t3, $t5
    ctx->r14 = SUB32(ctx->r11, ctx->r13);
    // 0x80234A88: addiu       $v1, $v1, 0x908
    ctx->r3 = ADD32(ctx->r3, 0X908);
    // 0x80234A8C: lui         $a3, 0x8025
    ctx->r7 = S32(0X8025 << 16);
    // 0x80234A90: addiu       $a3, $a3, 0x904
    ctx->r7 = ADD32(ctx->r7, 0X904);
    // 0x80234A94: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80234A98: bgez        $t6, L_80234AB0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80234A9C: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80234AB0;
    }
    // 0x80234A9C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80234AA0: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x80234AA4: ori         $at, $at, 0xFF07
    ctx->r1 = ctx->r1 | 0XFF07;
    // 0x80234AA8: addu        $v0, $t6, $at
    ctx->r2 = ADD32(ctx->r14, ctx->r1);
    // 0x80234AAC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80234AB0:
    // 0x80234AB0: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x80234AB4: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x80234AB8: ori         $at, $at, 0xFFAA
    ctx->r1 = ctx->r1 | 0XFFAA;
    // 0x80234ABC: subu        $v1, $t7, $v0
    ctx->r3 = SUB32(ctx->r15, ctx->r2);
    // 0x80234AC0: bgtzl       $v1, L_80234AD0
    if (SIGNED(ctx->r3) > 0) {
        // 0x80234AC4: addiu       $t9, $v1, -0x1
        ctx->r25 = ADD32(ctx->r3, -0X1);
            goto L_80234AD0;
    }
    goto skip_0;
    // 0x80234AC4: addiu       $t9, $v1, -0x1
    ctx->r25 = ADD32(ctx->r3, -0X1);
    skip_0:
    // 0x80234AC8: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x80234ACC: addiu       $t9, $v1, -0x1
    ctx->r25 = ADD32(ctx->r3, -0X1);
L_80234AD0:
    // 0x80234AD0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80234AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234AD8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80234ADC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80234AE0: lwc1        $f8, 0x53B0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X53B0);
    // 0x80234AE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80234AE8: jr          $ra
    // 0x80234AEC: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    return;
    // 0x80234AEC: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
;}
RECOMP_FUNC void func_8024AD44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024AD44: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8024AD48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024AD4C: jal         0x80245AD0
    // 0x8024AD50: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    func_80245AD0(rdram, ctx);
        goto after_0;
    // 0x8024AD50: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    after_0:
    // 0x8024AD54: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x8024AD58: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8024AD5C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024AD60: sb          $t6, 0x5EB0($at)
    MEM_B(0X5EB0, ctx->r1) = ctx->r14;
    // 0x8024AD64: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8024AD68: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8024AD6C: addiu       $t0, $t0, 0x71F0
    ctx->r8 = ADD32(ctx->r8, 0X71F0);
    // 0x8024AD70: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x8024AD74: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x8024AD78: jal         0x802465B0
    // 0x8024AD7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802465B0(rdram, ctx);
        goto after_1;
    // 0x8024AD7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8024AD80: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x8024AD84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8024AD88: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    // 0x8024AD8C: jal         0x802374B0
    // 0x8024AD90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_2;
    // 0x8024AD90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8024AD94: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8024AD98: addiu       $a1, $a1, 0x3970
    ctx->r5 = ADD32(ctx->r5, 0X3970);
    // 0x8024AD9C: jal         0x802465B0
    // 0x8024ADA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802465B0(rdram, ctx);
        goto after_3;
    // 0x8024ADA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8024ADA4: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x8024ADA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8024ADAC: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    // 0x8024ADB0: jal         0x802374B0
    // 0x8024ADB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_4;
    // 0x8024ADB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8024ADB8: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8024ADBC: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8024ADC0: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    // 0x8024ADC4: addiu       $v1, $v1, 0x3970
    ctx->r3 = ADD32(ctx->r3, 0X3970);
    // 0x8024ADC8: beq         $a0, $zero, L_8024ADE8
    if (ctx->r4 == 0) {
        // 0x8024ADCC: addiu       $t4, $sp, 0x1C
        ctx->r12 = ADD32(ctx->r29, 0X1C);
            goto L_8024ADE8;
    }
    // 0x8024ADCC: addiu       $t4, $sp, 0x1C
    ctx->r12 = ADD32(ctx->r29, 0X1C);
    // 0x8024ADD0: blez        $a0, L_8024ADE8
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8024ADD4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8024ADE8;
    }
    // 0x8024ADD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024ADD8:
    // 0x8024ADD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024ADDC: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8024ADE0: bne         $at, $zero, L_8024ADD8
    if (ctx->r1 != 0) {
        // 0x8024ADE4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8024ADD8;
    }
    // 0x8024ADE4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8024ADE8:
    // 0x8024ADE8: or          $t7, $v1, $zero
    ctx->r15 = ctx->r3 | 0;
    // 0x8024ADEC: addiu       $t6, $v1, 0x24
    ctx->r14 = ADD32(ctx->r3, 0X24);
L_8024ADF0:
    // 0x8024ADF0: lwl         $at, 0x0($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X0);
    // 0x8024ADF4: lwr         $at, 0x3($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X3);
    // 0x8024ADF8: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8024ADFC: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x8024AE00: lwl         $at, -0x8($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, -0X8);
    // 0x8024AE04: lwr         $at, -0x5($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, -0X5);
    // 0x8024AE08: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x8024AE0C: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x8024AE10: lwl         $at, -0x4($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, -0X4);
    // 0x8024AE14: lwr         $at, -0x1($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, -0X1);
    // 0x8024AE18: bne         $t7, $t6, L_8024ADF0
    if (ctx->r15 != ctx->r14) {
        // 0x8024AE1C: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_8024ADF0;
    }
    // 0x8024AE1C: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x8024AE20: lwl         $at, 0x0($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X0);
    // 0x8024AE24: lwr         $at, 0x3($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X3);
    // 0x8024AE28: nop

    // 0x8024AE2C: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x8024AE30: lbu         $v0, 0x1E($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1E);
    // 0x8024AE34: lbu         $t0, 0x42($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X42);
    // 0x8024AE38: andi        $t8, $v0, 0xC0
    ctx->r24 = ctx->r2 & 0XC0;
    // 0x8024AE3C: sra         $a0, $t8, 4
    ctx->r4 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8024AE40: bne         $a0, $zero, L_8024AE54
    if (ctx->r4 != 0) {
        // 0x8024AE44: nop
    
            goto L_8024AE54;
    }
    // 0x8024AE44: nop

    // 0x8024AE48: beq         $t0, $zero, L_8024AE54
    if (ctx->r8 == 0) {
        // 0x8024AE4C: nop
    
            goto L_8024AE54;
    }
    // 0x8024AE4C: nop

    // 0x8024AE50: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8024AE54:
    // 0x8024AE54: jal         0x80245B14
    // 0x8024AE58: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    func_80245B14(rdram, ctx);
        goto after_5;
    // 0x8024AE58: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_5:
    // 0x8024AE5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024AE60: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x8024AE64: jr          $ra
    // 0x8024AE68: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8024AE68: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_802234A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802234A4: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x802234A8: lw          $v1, 0x4348($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4348);
    // 0x802234AC: lui         $a2, 0x100
    ctx->r6 = S32(0X100 << 16);
    // 0x802234B0: beq         $a1, $zero, L_802234BC
    if (ctx->r5 == 0) {
        // 0x802234B4: and         $v0, $v1, $a2
        ctx->r2 = ctx->r3 & ctx->r6;
            goto L_802234BC;
    }
    // 0x802234B4: and         $v0, $v1, $a2
    ctx->r2 = ctx->r3 & ctx->r6;
    // 0x802234B8: xor         $v0, $v0, $a2
    ctx->r2 = ctx->r2 ^ ctx->r6;
L_802234BC:
    // 0x802234BC: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x802234C0: bne         $a0, $at, L_80223508
    if (ctx->r4 != ctx->r1) {
        // 0x802234C4: nop
    
            goto L_80223508;
    }
    // 0x802234C4: nop

    // 0x802234C8: andi        $a0, $v1, 0xFFF
    ctx->r4 = ctx->r3 & 0XFFF;
    // 0x802234CC: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x802234D0: bne         $a0, $at, L_802234DC
    if (ctx->r4 != ctx->r1) {
        // 0x802234D4: lui         $a2, 0x8027
        ctx->r6 = S32(0X8027 << 16);
            goto L_802234DC;
    }
    // 0x802234D4: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x802234D8: beq         $v0, $zero, L_802235C0
    if (ctx->r2 == 0) {
        // 0x802234DC: addiu       $a2, $a2, 0x3B90
        ctx->r6 = ADD32(ctx->r6, 0X3B90);
            goto L_802235C0;
    }
L_802234DC:
    // 0x802234DC: addiu       $a2, $a2, 0x3B90
    ctx->r6 = ADD32(ctx->r6, 0X3B90);
    // 0x802234E0: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x802234E4: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x802234E8: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x802234EC: lui         $at, 0xBB00
    ctx->r1 = S32(0XBB00 << 16);
    // 0x802234F0: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802234F4: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x802234F8: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x802234FC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80223500: jr          $ra
    // 0x80223504: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    return;
    // 0x80223504: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_80223508:
    // 0x80223508: beq         $a1, $zero, L_8022356C
    if (ctx->r5 == 0) {
        // 0x8022350C: lui         $t0, 0x8025
        ctx->r8 = S32(0X8025 << 16);
            goto L_8022356C;
    }
    // 0x8022350C: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x80223510: lw          $t0, -0x18F0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X18F0);
    // 0x80223514: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x80223518: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8022351C: lw          $t1, 0x2C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X2C);
    // 0x80223520: addiu       $a2, $a2, 0x3B90
    ctx->r6 = ADD32(ctx->r6, 0X3B90);
    // 0x80223524: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x80223528: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8022352C: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80223530: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80223534: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80223538: lw          $v0, 0x4($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X4);
    // 0x8022353C: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x80223540: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x80223544: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x80223548: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x8022354C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80223550: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80223554: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x80223558: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x8022355C: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x80223560: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x80223564: jr          $ra
    // 0x80223568: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    return;
    // 0x80223568: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
L_8022356C:
    // 0x8022356C: beq         $v0, $zero, L_802235C0
    if (ctx->r2 == 0) {
        // 0x80223570: lui         $t3, 0x8025
        ctx->r11 = S32(0X8025 << 16);
            goto L_802235C0;
    }
    // 0x80223570: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x80223574: lw          $t3, -0x18F0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X18F0);
    // 0x80223578: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x8022357C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80223580: lw          $t4, 0x2C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X2C);
    // 0x80223584: addiu       $a2, $a2, 0x3B90
    ctx->r6 = ADD32(ctx->r6, 0X3B90);
    // 0x80223588: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8022358C: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x80223590: lw          $t6, 0x0($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X0);
    // 0x80223594: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x80223598: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8022359C: lw          $v0, 0x4($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X4);
    // 0x802235A0: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x802235A4: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x802235A8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x802235AC: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x802235B0: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x802235B4: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x802235B8: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x802235BC: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
L_802235C0:
    // 0x802235C0: jr          $ra
    // 0x802235C4: nop

    return;
    // 0x802235C4: nop

;}
RECOMP_FUNC void func_80218600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80218600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80218604: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x80218608: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8021860C: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80218610: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80218614: lwc1        $f14, 0x0($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80218618: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x8021861C: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80218620: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80218624: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80218628: bc1fl       L_802186DC
    if (!c1cs) {
        // 0x8021862C: sub.s       $f4, $f14, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f2.fl;
            goto L_802186DC;
    }
    goto skip_0;
    // 0x8021862C: sub.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f2.fl;
    skip_0:
    // 0x80218630: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80218634: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80218638: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8021863C: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80218640: bc1fl       L_80218658
    if (!c1cs) {
        // 0x80218644: c.lt.s      $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
            goto L_80218658;
    }
    goto skip_1;
    // 0x80218644: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    skip_1:
    // 0x80218648: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
    // 0x8021864C: b           L_8021866C
    // 0x80218650: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
        goto L_8021866C;
    // 0x80218650: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    // 0x80218654: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
L_80218658:
    // 0x80218658: nop

    // 0x8021865C: bc1fl       L_80218670
    if (!c1cs) {
        // 0x80218660: c.lt.s      $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
            goto L_80218670;
    }
    goto skip_2;
    // 0x80218660: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    skip_2:
    // 0x80218664: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
    // 0x80218668: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
L_8021866C:
    // 0x8021866C: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
L_80218670:
    // 0x80218670: nop

    // 0x80218674: bc1fl       L_80218688
    if (!c1cs) {
        // 0x80218678: c.lt.s      $f6, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
            goto L_80218688;
    }
    goto skip_3;
    // 0x80218678: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    skip_3:
    // 0x8021867C: b           L_80218698
    // 0x80218680: mov.s       $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = ctx->f4.fl;
        goto L_80218698;
    // 0x80218680: mov.s       $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = ctx->f4.fl;
    // 0x80218684: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
L_80218688:
    // 0x80218688: nop

    // 0x8021868C: bc1fl       L_8021869C
    if (!c1cs) {
        // 0x80218690: c.lt.s      $f14, $f8
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
            goto L_8021869C;
    }
    goto skip_4;
    // 0x80218690: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    skip_4:
    // 0x80218694: mov.s       $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = ctx->f6.fl;
L_80218698:
    // 0x80218698: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
L_8021869C:
    // 0x8021869C: nop

    // 0x802186A0: bc1fl       L_802186B4
    if (!c1cs) {
        // 0x802186A4: c.lt.s      $f10, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
            goto L_802186B4;
    }
    goto skip_5;
    // 0x802186A4: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    skip_5:
    // 0x802186A8: b           L_802186C4
    // 0x802186AC: mov.s       $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = ctx->f8.fl;
        goto L_802186C4;
    // 0x802186AC: mov.s       $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = ctx->f8.fl;
    // 0x802186B0: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
L_802186B4:
    // 0x802186B4: nop

    // 0x802186B8: bc1fl       L_802186C8
    if (!c1cs) {
        // 0x802186BC: swc1        $f0, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
            goto L_802186C8;
    }
    goto skip_6;
    // 0x802186BC: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    skip_6:
    // 0x802186C0: mov.s       $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = ctx->f10.fl;
L_802186C4:
    // 0x802186C4: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
L_802186C8:
    // 0x802186C8: swc1        $f2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f2.u32l;
    // 0x802186CC: swc1        $f12, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f12.u32l;
    // 0x802186D0: b           L_80218878
    // 0x802186D4: swc1        $f14, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f14.u32l;
        goto L_80218878;
    // 0x802186D4: swc1        $f14, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f14.u32l;
    // 0x802186D8: sub.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f2.fl;
L_802186DC:
    // 0x802186DC: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802186E0: sub.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x802186E4: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x802186E8: div.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802186EC: mul.s       $f8, $f18, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x802186F0: mov.s       $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = ctx->f18.fl;
    // 0x802186F4: sub.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x802186F8: bc1f        L_80218718
    if (!c1cs) {
        // 0x802186FC: swc1        $f10, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
            goto L_80218718;
    }
    // 0x802186FC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80218700: mul.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x80218704: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80218708: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021870C: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    // 0x80218710: b           L_8021873C
    // 0x80218714: add.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f6.fl;
        goto L_8021873C;
    // 0x80218714: add.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f6.fl;
L_80218718:
    // 0x80218718: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021871C: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x80218720: nop

    // 0x80218724: bc1fl       L_80218740
    if (!c1cs) {
        // 0x80218728: lwc1        $f4, 0x30($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
            goto L_80218740;
    }
    goto skip_7;
    // 0x80218728: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    skip_7:
    // 0x8021872C: mul.s       $f8, $f20, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x80218730: lwc1        $f10, 0x10($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80218734: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    // 0x80218738: add.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f10.fl;
L_8021873C:
    // 0x8021873C: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
L_80218740:
    // 0x80218740: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80218744: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x80218748: nop

    // 0x8021874C: bc1fl       L_80218780
    if (!c1cs) {
        // 0x80218750: c.lt.s      $f6, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
            goto L_80218780;
    }
    goto skip_8;
    // 0x80218750: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    skip_8:
    // 0x80218754: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80218758: mov.s       $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = ctx->f4.fl;
    // 0x8021875C: lwc1        $f8, 0x10($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80218760: c.eq.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl == ctx->f6.fl;
    // 0x80218764: nop

    // 0x80218768: bc1tl       L_802187B4
    if (c1cs) {
        // 0x8021876C: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_802187B4;
    }
    goto skip_9;
    // 0x8021876C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_9:
    // 0x80218770: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80218774: b           L_802187B0
    // 0x80218778: div.s       $f0, $f10, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
        goto L_802187B0;
    // 0x80218778: div.s       $f0, $f10, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8021877C: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
L_80218780:
    // 0x80218780: nop

    // 0x80218784: bc1fl       L_802187B4
    if (!c1cs) {
        // 0x80218788: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_802187B4;
    }
    goto skip_10;
    // 0x80218788: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_10:
    // 0x8021878C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80218790: mov.s       $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = ctx->f6.fl;
    // 0x80218794: lwc1        $f8, 0x10($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80218798: c.eq.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl == ctx->f4.fl;
    // 0x8021879C: nop

    // 0x802187A0: bc1tl       L_802187B4
    if (c1cs) {
        // 0x802187A4: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_802187B4;
    }
    goto skip_11;
    // 0x802187A4: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_11:
    // 0x802187A8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802187AC: div.s       $f0, $f10, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
L_802187B0:
    // 0x802187B0: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
L_802187B4:
    // 0x802187B4: nop

    // 0x802187B8: bc1fl       L_802187D8
    if (!c1cs) {
        // 0x802187BC: c.lt.s      $f18, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
            goto L_802187D8;
    }
    goto skip_12;
    // 0x802187BC: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    skip_12:
    // 0x802187C0: mul.s       $f4, $f20, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x802187C4: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x802187C8: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
    // 0x802187CC: b           L_802187F4
    // 0x802187D0: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
        goto L_802187F4;
    // 0x802187D0: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802187D4: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
L_802187D8:
    // 0x802187D8: nop

    // 0x802187DC: bc1fl       L_802187F8
    if (!c1cs) {
        // 0x802187E0: lwc1        $f4, 0x30($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
            goto L_802187F8;
    }
    goto skip_13;
    // 0x802187E0: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    skip_13:
    // 0x802187E4: mul.s       $f8, $f20, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x802187E8: lwc1        $f10, 0x10($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10);
    // 0x802187EC: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
    // 0x802187F0: add.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f10.fl;
L_802187F4:
    // 0x802187F4: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
L_802187F8:
    // 0x802187F8: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802187FC: c.lt.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl < ctx->f4.fl;
    // 0x80218800: nop

    // 0x80218804: bc1fl       L_80218838
    if (!c1cs) {
        // 0x80218808: c.lt.s      $f6, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
            goto L_80218838;
    }
    goto skip_14;
    // 0x80218808: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
    skip_14:
    // 0x8021880C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80218810: mov.s       $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = ctx->f4.fl;
    // 0x80218814: lwc1        $f8, 0x10($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80218818: c.eq.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl == ctx->f6.fl;
    // 0x8021881C: nop

    // 0x80218820: bc1tl       L_8021886C
    if (c1cs) {
        // 0x80218824: swc1        $f0, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
            goto L_8021886C;
    }
    goto skip_15;
    // 0x80218824: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    skip_15:
    // 0x80218828: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8021882C: b           L_80218868
    // 0x80218830: div.s       $f12, $f10, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
        goto L_80218868;
    // 0x80218830: div.s       $f12, $f10, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80218834: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
L_80218838:
    // 0x80218838: nop

    // 0x8021883C: bc1fl       L_8021886C
    if (!c1cs) {
        // 0x80218840: swc1        $f0, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
            goto L_8021886C;
    }
    goto skip_16;
    // 0x80218840: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    skip_16:
    // 0x80218844: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80218848: mov.s       $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = ctx->f6.fl;
    // 0x8021884C: lwc1        $f8, 0x10($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80218850: c.eq.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl == ctx->f4.fl;
    // 0x80218854: nop

    // 0x80218858: bc1tl       L_8021886C
    if (c1cs) {
        // 0x8021885C: swc1        $f0, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
            goto L_8021886C;
    }
    goto skip_17;
    // 0x8021885C: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    skip_17:
    // 0x80218860: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80218864: div.s       $f12, $f10, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
L_80218868:
    // 0x80218868: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
L_8021886C:
    // 0x8021886C: swc1        $f2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f2.u32l;
    // 0x80218870: swc1        $f12, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f12.u32l;
    // 0x80218874: swc1        $f14, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f14.u32l;
L_80218878:
    // 0x80218878: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8021887C: jr          $ra
    // 0x80218880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80218880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802037EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802037EC: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x802037F0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x802037F4: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x802037F8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802037FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80203800: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x80203804: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80203808: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8020380C: lw          $t7, 0x6DE4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6DE4);
    // 0x80203810: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80203814: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x80203818: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8020381C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80203820: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80203824: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203828: addiu       $a0, $a0, 0x25A8
    ctx->r4 = ADD32(ctx->r4, 0X25A8);
    // 0x8020382C: jal         0x802011D0
    // 0x80203830: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    func_802011D0(rdram, ctx);
        goto after_0;
    // 0x80203830: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x80203834: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203838: addiu       $a0, $a0, 0x25C0
    ctx->r4 = ADD32(ctx->r4, 0X25C0);
    // 0x8020383C: jal         0x802011D0
    // 0x80203840: lbu         $a1, 0xAD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAD);
    func_802011D0(rdram, ctx);
        goto after_1;
    // 0x80203840: lbu         $a1, 0xAD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAD);
    after_1:
    // 0x80203844: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203848: addiu       $a0, $a0, 0x25D4
    ctx->r4 = ADD32(ctx->r4, 0X25D4);
    // 0x8020384C: jal         0x802011D0
    // 0x80203850: lw          $a1, 0xA0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA0);
    func_802011D0(rdram, ctx);
        goto after_2;
    // 0x80203850: lw          $a1, 0xA0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA0);
    after_2:
    // 0x80203854: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203858: addiu       $a0, $a0, 0x25E8
    ctx->r4 = ADD32(ctx->r4, 0X25E8);
    // 0x8020385C: jal         0x802011D0
    // 0x80203860: lbu         $a1, 0xB0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XB0);
    func_802011D0(rdram, ctx);
        goto after_3;
    // 0x80203860: lbu         $a1, 0xB0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XB0);
    after_3:
    // 0x80203864: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203868: addiu       $a0, $a0, 0x25FC
    ctx->r4 = ADD32(ctx->r4, 0X25FC);
    // 0x8020386C: jal         0x802011D0
    // 0x80203870: lw          $a1, 0xA4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA4);
    func_802011D0(rdram, ctx);
        goto after_4;
    // 0x80203870: lw          $a1, 0xA4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA4);
    after_4:
    // 0x80203874: lwc1        $f4, 0x9C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x80203878: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8020387C: addiu       $a0, $a0, 0x2610
    ctx->r4 = ADD32(ctx->r4, 0X2610);
    // 0x80203880: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80203884: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80203888: mfc1        $a2, $f7
    ctx->r6 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x8020388C: jal         0x802011D0
    // 0x80203890: nop

    func_802011D0(rdram, ctx);
        goto after_5;
    // 0x80203890: nop

    after_5:
    // 0x80203894: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203898: addiu       $a0, $a0, 0x2624
    ctx->r4 = ADD32(ctx->r4, 0X2624);
    // 0x8020389C: jal         0x802011D0
    // 0x802038A0: lbu         $a1, 0xAE($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAE);
    func_802011D0(rdram, ctx);
        goto after_6;
    // 0x802038A0: lbu         $a1, 0xAE($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAE);
    after_6:
    // 0x802038A4: lwc1        $f8, 0x90($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X90);
    // 0x802038A8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802038AC: addiu       $a0, $a0, 0x2638
    ctx->r4 = ADD32(ctx->r4, 0X2638);
    // 0x802038B0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802038B4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802038B8: mfc1        $a2, $f11
    ctx->r6 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x802038BC: jal         0x802011D0
    // 0x802038C0: nop

    func_802011D0(rdram, ctx);
        goto after_7;
    // 0x802038C0: nop

    after_7:
    // 0x802038C4: lwc1        $f16, 0x94($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X94);
    // 0x802038C8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802038CC: addiu       $a0, $a0, 0x264C
    ctx->r4 = ADD32(ctx->r4, 0X264C);
    // 0x802038D0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x802038D4: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x802038D8: mfc1        $a2, $f19
    ctx->r6 = (int32_t)ctx->f_odd[(19 - 1) * 2];
    // 0x802038DC: jal         0x802011D0
    // 0x802038E0: nop

    func_802011D0(rdram, ctx);
        goto after_8;
    // 0x802038E0: nop

    after_8:
    // 0x802038E4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802038E8: addiu       $a0, $a0, 0x2660
    ctx->r4 = ADD32(ctx->r4, 0X2660);
    // 0x802038EC: jal         0x802011D0
    // 0x802038F0: lbu         $a1, 0x8C($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X8C);
    func_802011D0(rdram, ctx);
        goto after_9;
    // 0x802038F0: lbu         $a1, 0x8C($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X8C);
    after_9:
    // 0x802038F4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802038F8: addiu       $a0, $a0, 0x2674
    ctx->r4 = ADD32(ctx->r4, 0X2674);
    // 0x802038FC: jal         0x802011D0
    // 0x80203900: lw          $a1, 0x88($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X88);
    func_802011D0(rdram, ctx);
        goto after_10;
    // 0x80203900: lw          $a1, 0x88($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X88);
    after_10:
    // 0x80203904: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203908: addiu       $a0, $a0, 0x2688
    ctx->r4 = ADD32(ctx->r4, 0X2688);
    // 0x8020390C: jal         0x802011D0
    // 0x80203910: lw          $a1, 0xA8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA8);
    func_802011D0(rdram, ctx);
        goto after_11;
    // 0x80203910: lw          $a1, 0xA8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA8);
    after_11:
    // 0x80203914: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80203918: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8020391C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80203920: jr          $ra
    // 0x80203924: nop

    return;
    // 0x80203924: nop

;}
RECOMP_FUNC void func_8022FB4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022FB4C: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8022FB50: lw          $t7, -0x18F0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X18F0);
    // 0x8022FB54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FB58: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8022FB5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FB60: ori         $at, $at, 0xF000
    ctx->r1 = ctx->r1 | 0XF000;
    // 0x8022FB64: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x8022FB68: and         $a2, $a0, $at
    ctx->r6 = ctx->r4 & ctx->r1;
    // 0x8022FB6C: srl         $t6, $a2, 12
    ctx->r14 = S32(U32(ctx->r6) >> 12);
    // 0x8022FB70: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8022FB74: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8022FB78: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x8022FB7C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8022FB80: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8022FB84: bnel        $v0, $zero, L_8022FBA4
    if (ctx->r2 != 0) {
        // 0x8022FB88: lw          $t1, 0x10($v0)
        ctx->r9 = MEM_W(ctx->r2, 0X10);
            goto L_8022FBA4;
    }
    goto skip_0;
    // 0x8022FB88: lw          $t1, 0x10($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X10);
    skip_0:
    // 0x8022FB8C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022FB90: jal         0x80231A24
    // 0x8022FB94: addiu       $a0, $a0, 0x4AAC
    ctx->r4 = ADD32(ctx->r4, 0X4AAC);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022FB94: addiu       $a0, $a0, 0x4AAC
    ctx->r4 = ADD32(ctx->r4, 0X4AAC);
    after_0:
    // 0x8022FB98: b           L_8022FBCC
    // 0x8022FB9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8022FBCC;
    // 0x8022FB9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022FBA0: lw          $t1, 0x10($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X10);
L_8022FBA4:
    // 0x8022FBA4: andi        $a1, $a0, 0xFFF
    ctx->r5 = ctx->r4 & 0XFFF;
    // 0x8022FBA8: sll         $t2, $a1, 5
    ctx->r10 = S32(ctx->r5 << 5);
    // 0x8022FBAC: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x8022FBB0: bne         $v1, $zero, L_8022FBCC
    if (ctx->r3 != 0) {
        // 0x8022FBB4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8022FBCC;
    }
    // 0x8022FBB4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8022FBB8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022FBBC: jal         0x80231A24
    // 0x8022FBC0: addiu       $a0, $a0, 0x4AD0
    ctx->r4 = ADD32(ctx->r4, 0X4AD0);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022FBC0: addiu       $a0, $a0, 0x4AD0
    ctx->r4 = ADD32(ctx->r4, 0X4AD0);
    after_1:
    // 0x8022FBC4: b           L_8022FBCC
    // 0x8022FBC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8022FBCC;
    // 0x8022FBC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022FBCC:
    // 0x8022FBCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FBD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022FBD4: jr          $ra
    // 0x8022FBD8: nop

    return;
    // 0x8022FBD8: nop

;}
RECOMP_FUNC void func_80203C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80203C18: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80203C1C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80203C20: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80203C24: slti        $at, $a0, 0x23
    ctx->r1 = SIGNED(ctx->r4) < 0X23 ? 1 : 0;
    // 0x80203C28: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80203C2C: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x80203C30: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80203C34: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80203C38: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80203C3C: bne         $at, $zero, L_80203C58
    if (ctx->r1 != 0) {
        // 0x80203C40: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80203C58;
    }
    // 0x80203C40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80203C44: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203C48: jal         0x80231A24
    // 0x80203C4C: addiu       $a0, $a0, 0x271C
    ctx->r4 = ADD32(ctx->r4, 0X271C);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80203C4C: addiu       $a0, $a0, 0x271C
    ctx->r4 = ADD32(ctx->r4, 0X271C);
    after_0:
    // 0x80203C50: b           L_80203D84
    // 0x80203C54: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80203D84;
    // 0x80203C54: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80203C58:
    // 0x80203C58: sll         $t6, $s3, 3
    ctx->r14 = S32(ctx->r19 << 3);
    // 0x80203C5C: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x80203C60: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80203C64: addiu       $t7, $t7, 0x6EA0
    ctx->r15 = ADD32(ctx->r15, 0X6EA0);
    // 0x80203C68: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80203C6C: addu        $t3, $t6, $t7
    ctx->r11 = ADD32(ctx->r14, ctx->r15);
    // 0x80203C70: lw          $s2, 0x20($t3)
    ctx->r18 = MEM_W(ctx->r11, 0X20);
    // 0x80203C74: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80203C78: blez        $s2, L_80203D58
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80203C7C: andi        $a0, $s2, 0x3
        ctx->r4 = ctx->r18 & 0X3;
            goto L_80203D58;
    }
    // 0x80203C7C: andi        $a0, $s2, 0x3
    ctx->r4 = ctx->r18 & 0X3;
    // 0x80203C80: beq         $a0, $zero, L_80203CBC
    if (ctx->r4 == 0) {
        // 0x80203C84: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_80203CBC;
    }
    // 0x80203C84: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80203C88: sll         $t2, $zero, 3
    ctx->r10 = S32(0 << 3);
    // 0x80203C8C: addiu       $t8, $sp, 0x64
    ctx->r24 = ADD32(ctx->r29, 0X64);
    // 0x80203C90: addu        $s0, $t2, $t8
    ctx->r16 = ADD32(ctx->r10, ctx->r24);
    // 0x80203C94: addu        $v0, $t3, $t2
    ctx->r2 = ADD32(ctx->r11, ctx->r10);
L_80203C98:
    // 0x80203C98: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x80203C9C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80203CA0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80203CA4: sw          $at, -0x8($s0)
    MEM_W(-0X8, ctx->r16) = ctx->r1;
    // 0x80203CA8: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x80203CAC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80203CB0: bne         $v1, $s1, L_80203C98
    if (ctx->r3 != ctx->r17) {
        // 0x80203CB4: sw          $t4, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r12;
            goto L_80203C98;
    }
    // 0x80203CB4: sw          $t4, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r12;
    // 0x80203CB8: beq         $s1, $s2, L_80203D54
    if (ctx->r17 == ctx->r18) {
        // 0x80203CBC: sll         $t2, $s1, 3
        ctx->r10 = S32(ctx->r17 << 3);
            goto L_80203D54;
    }
L_80203CBC:
    // 0x80203CBC: sll         $t2, $s1, 3
    ctx->r10 = S32(ctx->r17 << 3);
    // 0x80203CC0: addiu       $t5, $sp, 0x64
    ctx->r13 = ADD32(ctx->r29, 0X64);
    // 0x80203CC4: addu        $s0, $t2, $t5
    ctx->r16 = ADD32(ctx->r10, ctx->r13);
    // 0x80203CC8: addu        $v0, $t3, $t2
    ctx->r2 = ADD32(ctx->r11, ctx->r10);
    // 0x80203CCC: sll         $t6, $s2, 3
    ctx->r14 = S32(ctx->r18 << 3);
    // 0x80203CD0: addiu       $t7, $sp, 0x7C
    ctx->r15 = ADD32(ctx->r29, 0X7C);
    // 0x80203CD4: addu        $t1, $t6, $t7
    ctx->r9 = ADD32(ctx->r14, ctx->r15);
    // 0x80203CD8: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x80203CDC: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    // 0x80203CE0: addiu       $t0, $v0, 0x18
    ctx->r8 = ADD32(ctx->r2, 0X18);
    // 0x80203CE4: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x80203CE8: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x80203CEC: addiu       $v1, $s0, 0x18
    ctx->r3 = ADD32(ctx->r16, 0X18);
L_80203CF0:
    // 0x80203CF0: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x80203CF4: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x80203CF8: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80203CFC: sw          $at, -0x20($s0)
    MEM_W(-0X20, ctx->r16) = ctx->r1;
    // 0x80203D00: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x80203D04: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80203D08: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x80203D0C: sw          $t9, -0x1C($s0)
    MEM_W(-0X1C, ctx->r16) = ctx->r25;
    // 0x80203D10: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x80203D14: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80203D18: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    // 0x80203D1C: sw          $at, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = ctx->r1;
    // 0x80203D20: lw          $t5, -0x1C($a2)
    ctx->r13 = MEM_W(ctx->r6, -0X1C);
    // 0x80203D24: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x80203D28: addiu       $t0, $t0, 0x20
    ctx->r8 = ADD32(ctx->r8, 0X20);
    // 0x80203D2C: sw          $t5, -0x1C($a0)
    MEM_W(-0X1C, ctx->r4) = ctx->r13;
    // 0x80203D30: lw          $at, -0x20($a3)
    ctx->r1 = MEM_W(ctx->r7, -0X20);
    // 0x80203D34: sw          $at, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->r1;
    // 0x80203D38: lw          $t7, -0x1C($a3)
    ctx->r15 = MEM_W(ctx->r7, -0X1C);
    // 0x80203D3C: sw          $t7, -0x1C($a1)
    MEM_W(-0X1C, ctx->r5) = ctx->r15;
    // 0x80203D40: lw          $at, -0x20($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X20);
    // 0x80203D44: sw          $at, -0x20($v1)
    MEM_W(-0X20, ctx->r3) = ctx->r1;
    // 0x80203D48: lw          $t9, -0x1C($t0)
    ctx->r25 = MEM_W(ctx->r8, -0X1C);
    // 0x80203D4C: bne         $v1, $t1, L_80203CF0
    if (ctx->r3 != ctx->r9) {
        // 0x80203D50: sw          $t9, -0x1C($v1)
        MEM_W(-0X1C, ctx->r3) = ctx->r25;
            goto L_80203CF0;
    }
    // 0x80203D50: sw          $t9, -0x1C($v1)
    MEM_W(-0X1C, ctx->r3) = ctx->r25;
L_80203D54:
    // 0x80203D54: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80203D58:
    // 0x80203D58: blez        $s2, L_80203D80
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80203D5C: addiu       $s0, $sp, 0x64
        ctx->r16 = ADD32(ctx->r29, 0X64);
            goto L_80203D80;
    }
    // 0x80203D5C: addiu       $s0, $sp, 0x64
    ctx->r16 = ADD32(ctx->r29, 0X64);
L_80203D60:
    // 0x80203D60: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80203D64: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80203D68: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x80203D6C: jalr        $t9
    // 0x80203D70: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80203D70: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_1:
    // 0x80203D74: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80203D78: bne         $s1, $s2, L_80203D60
    if (ctx->r17 != ctx->r18) {
        // 0x80203D7C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_80203D60;
    }
    // 0x80203D7C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80203D80:
    // 0x80203D80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80203D84:
    // 0x80203D84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80203D88: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80203D8C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80203D90: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80203D94: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80203D98: jr          $ra
    // 0x80203D9C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x80203D9C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_8020372C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020372C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80203730: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80203734: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80203738: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8020373C: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80203740: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80203744: lw          $t7, 0x6DE4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6DE4);
    // 0x80203748: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8020374C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80203750: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80203754: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80203758: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8020375C: lbu         $t0, 0xAC($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0XAC);
    // 0x80203760: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80203764: bne         $t0, $zero, L_80203774
    if (ctx->r8 != 0) {
        // 0x80203768: nop
    
            goto L_80203774;
    }
    // 0x80203768: nop

    // 0x8020376C: jr          $ra
    // 0x80203770: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80203770: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80203774:
    // 0x80203774: jr          $ra
    // 0x80203778: nop

    return;
    // 0x80203778: nop

;}
RECOMP_FUNC void func_80238A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238A70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80238A74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238A78: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x80238A7C: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80238A80: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80238A84: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x80238A88: jal         0x8023F37C
    // 0x80238A8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80238A8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80238A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238A94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80238A98: jr          $ra
    // 0x80238A9C: nop

    return;
    // 0x80238A9C: nop

;}
RECOMP_FUNC void func_80246660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246660: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80246664: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x80246668: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8024666C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80246670: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80246674: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80246678: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8024667C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80246680: andi        $s0, $a2, 0xFFFF
    ctx->r16 = ctx->r6 & 0XFFFF;
    // 0x80246684: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80246688: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8024668C: or          $s7, $a3, $zero
    ctx->r23 = ctx->r7 | 0;
    // 0x80246690: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80246694: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80246698: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8024669C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802466A0: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x802466A4: beq         $t6, $at, L_802466C8
    if (ctx->r14 == ctx->r1) {
        // 0x802466A8: addiu       $s3, $zero, 0x2
        ctx->r19 = ADD32(0, 0X2);
            goto L_802466C8;
    }
    // 0x802466A8: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x802466AC: slti        $at, $s0, 0x7
    ctx->r1 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
    // 0x802466B0: beq         $at, $zero, L_802466C8
    if (ctx->r1 == 0) {
        // 0x802466B4: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_802466C8;
    }
    // 0x802466B4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802466B8: beq         $v0, $zero, L_802466C8
    if (ctx->r2 == 0) {
        // 0x802466BC: nop
    
            goto L_802466C8;
    }
    // 0x802466BC: nop

    // 0x802466C0: b           L_80246830
    // 0x802466C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80246830;
    // 0x802466C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802466C8:
    // 0x802466C8: jal         0x80245AD0
    // 0x802466CC: nop

    func_80245AD0(rdram, ctx);
        goto after_0;
    // 0x802466CC: nop

    after_0:
    // 0x802466D0: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x802466D4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802466D8: sb          $t7, 0x5EB0($at)
    MEM_B(0X5EB0, ctx->r1) = ctx->r15;
    // 0x802466DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802466E0: andi        $a1, $s0, 0xFFFF
    ctx->r5 = ctx->r16 & 0XFFFF;
    // 0x802466E4: jal         0x8024685C
    // 0x802466E8: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_8024685C(rdram, ctx);
        goto after_1;
    // 0x802466E8: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_1:
    // 0x802466EC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802466F0: addiu       $a1, $a1, 0x3970
    ctx->r5 = ADD32(ctx->r5, 0X3970);
    // 0x802466F4: jal         0x802465B0
    // 0x802466F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802465B0(rdram, ctx);
        goto after_2;
    // 0x802466F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x802466FC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80246700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80246704: jal         0x802374B0
    // 0x80246708: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_3;
    // 0x80246708: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8024670C: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
    // 0x80246710: addiu       $s5, $sp, 0x4C
    ctx->r21 = ADD32(ctx->r29, 0X4C);
L_80246714:
    // 0x80246714: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80246718: addiu       $s0, $t8, 0x3970
    ctx->r16 = ADD32(ctx->r24, 0X3970);
    // 0x8024671C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80246720: jal         0x802465B0
    // 0x80246724: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802465B0(rdram, ctx);
        goto after_4;
    // 0x80246724: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x80246728: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8024672C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80246730: jal         0x802374B0
    // 0x80246734: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_5;
    // 0x80246734: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80246738: beq         $s1, $zero, L_80246770
    if (ctx->r17 == 0) {
        // 0x8024673C: or          $t2, $s5, $zero
        ctx->r10 = ctx->r21 | 0;
            goto L_80246770;
    }
    // 0x8024673C: or          $t2, $s5, $zero
    ctx->r10 = ctx->r21 | 0;
    // 0x80246740: blez        $s1, L_80246770
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80246744: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80246770;
    }
    // 0x80246744: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80246748: andi        $a0, $s1, 0x3
    ctx->r4 = ctx->r17 & 0X3;
    // 0x8024674C: beq         $a0, $zero, L_80246764
    if (ctx->r4 == 0) {
        // 0x80246750: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_80246764;
    }
    // 0x80246750: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80246754:
    // 0x80246754: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80246758: bne         $v1, $v0, L_80246754
    if (ctx->r3 != ctx->r2) {
        // 0x8024675C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80246754;
    }
    // 0x8024675C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80246760: beq         $v0, $s1, L_80246770
    if (ctx->r2 == ctx->r17) {
        // 0x80246764: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80246770;
    }
L_80246764:
    // 0x80246764: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80246768: bne         $v0, $s1, L_80246764
    if (ctx->r2 != ctx->r17) {
        // 0x8024676C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80246764;
    }
    // 0x8024676C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80246770:
    // 0x80246770: or          $t1, $s0, $zero
    ctx->r9 = ctx->r16 | 0;
    // 0x80246774: addiu       $t0, $s0, 0x24
    ctx->r8 = ADD32(ctx->r16, 0X24);
L_80246778:
    // 0x80246778: lwl         $at, 0x0($t1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r9, 0X0);
    // 0x8024677C: lwr         $at, 0x3($t1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r9, 0X3);
    // 0x80246780: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x80246784: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x80246788: lwl         $at, -0x8($t1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r9, -0X8);
    // 0x8024678C: lwr         $at, -0x5($t1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r9, -0X5);
    // 0x80246790: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x80246794: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x80246798: lwl         $at, -0x4($t1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r9, -0X4);
    // 0x8024679C: lwr         $at, -0x1($t1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r9, -0X1);
    // 0x802467A0: bne         $t1, $t0, L_80246778
    if (ctx->r9 != ctx->r8) {
        // 0x802467A4: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_80246778;
    }
    // 0x802467A4: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
    // 0x802467A8: lwl         $at, 0x0($t1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r9, 0X0);
    // 0x802467AC: lwr         $at, 0x3($t1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r9, 0X3);
    // 0x802467B0: nop

    // 0x802467B4: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x802467B8: lbu         $v0, 0x4E($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X4E);
    // 0x802467BC: nop

    // 0x802467C0: andi        $t3, $v0, 0xC0
    ctx->r11 = ctx->r2 & 0XC0;
    // 0x802467C4: sra         $s2, $t3, 4
    ctx->r18 = S32(SIGNED(ctx->r11) >> 4);
    // 0x802467C8: bne         $s2, $zero, L_80246810
    if (ctx->r18 != 0) {
        // 0x802467CC: nop
    
            goto L_80246810;
    }
    // 0x802467CC: nop

    // 0x802467D0: jal         0x8024A640
    // 0x802467D4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8024A640(rdram, ctx);
        goto after_6;
    // 0x802467D4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_6:
    // 0x802467D8: lbu         $t5, 0x72($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X72);
    // 0x802467DC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802467E0: beq         $t5, $v0, L_80246814
    if (ctx->r13 == ctx->r2) {
        // 0x802467E4: nop
    
            goto L_80246814;
    }
    // 0x802467E4: nop

    // 0x802467E8: jal         0x80238E34
    // 0x802467EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80238E34(rdram, ctx);
        goto after_7;
    // 0x802467EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x802467F0: beq         $v0, $zero, L_80246808
    if (ctx->r2 == 0) {
        // 0x802467F4: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_80246808;
    }
    // 0x802467F4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x802467F8: jal         0x80245B14
    // 0x802467FC: nop

    func_80245B14(rdram, ctx);
        goto after_8;
    // 0x802467FC: nop

    after_8:
    // 0x80246800: b           L_80246830
    // 0x80246804: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_80246830;
    // 0x80246804: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_80246808:
    // 0x80246808: b           L_80246814
    // 0x8024680C: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
        goto L_80246814;
    // 0x8024680C: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
L_80246810:
    // 0x80246810: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_80246814:
    // 0x80246814: bne         $s2, $s6, L_80246824
    if (ctx->r18 != ctx->r22) {
        // 0x80246818: slti        $v0, $s3, 0x0
        ctx->r2 = SIGNED(ctx->r19) < 0X0 ? 1 : 0;
            goto L_80246824;
    }
    // 0x80246818: slti        $v0, $s3, 0x0
    ctx->r2 = SIGNED(ctx->r19) < 0X0 ? 1 : 0;
    // 0x8024681C: beq         $v0, $zero, L_80246714
    if (ctx->r2 == 0) {
        // 0x80246820: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_80246714;
    }
    // 0x80246820: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
L_80246824:
    // 0x80246824: jal         0x80245B14
    // 0x80246828: nop

    func_80245B14(rdram, ctx);
        goto after_9;
    // 0x80246828: nop

    after_9:
    // 0x8024682C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_80246830:
    // 0x80246830: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80246834: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80246838: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8024683C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80246840: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80246844: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80246848: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8024684C: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80246850: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80246854: jr          $ra
    // 0x80246858: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80246858: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_802160EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802160EC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802160F0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x802160F4: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802160F8: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x802160FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80216100: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80216104: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80216108: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x8021610C: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80216110: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80216114: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x80216118: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8021611C: swc1        $f6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f6.u32l;
    // 0x80216120: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x80216124: swc1        $f12, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f12.u32l;
    // 0x80216128: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8021612C: lbu         $v1, 0x6F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X6F);
    // 0x80216130: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x80216134: lwc1        $f10, 0x20($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80216138: andi        $t4, $v1, 0x1
    ctx->r12 = ctx->r3 & 0X1;
    // 0x8021613C: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x80216140: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80216144: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80216148: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x8021614C: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80216150: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80216154: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x80216158: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021615C: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x80216160: nop

    // 0x80216164: div         $zero, $t1, $t3
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r11)));
    // 0x80216168: mflo        $v0
    ctx->r2 = lo;
    // 0x8021616C: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    // 0x80216170: bne         $t3, $zero, L_8021617C
    if (ctx->r11 != 0) {
        // 0x80216174: nop
    
            goto L_8021617C;
    }
    // 0x80216174: nop

    // 0x80216178: break       7
    do_break(2149671288);
L_8021617C:
    // 0x8021617C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80216180: bne         $t3, $at, L_80216194
    if (ctx->r11 != ctx->r1) {
        // 0x80216184: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80216194;
    }
    // 0x80216184: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80216188: bne         $t1, $at, L_80216194
    if (ctx->r9 != ctx->r1) {
        // 0x8021618C: nop
    
            goto L_80216194;
    }
    // 0x8021618C: nop

    // 0x80216190: break       6
    do_break(2149671312);
L_80216194:
    // 0x80216194: beql        $t4, $zero, L_802161B0
    if (ctx->r12 == 0) {
        // 0x80216198: lwc1        $f0, 0x4($a3)
        ctx->f0.u32l = MEM_W(ctx->r7, 0X4);
            goto L_802161B0;
    }
    goto skip_0;
    // 0x80216198: lwc1        $f0, 0x4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X4);
    skip_0:
    // 0x8021619C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x802161A0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x802161A4: andi        $t5, $a2, 0xFFFF
    ctx->r13 = ctx->r6 & 0XFFFF;
    // 0x802161A8: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x802161AC: lwc1        $f0, 0x4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X4);
L_802161B0:
    // 0x802161B0: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802161B4: andi        $t2, $v1, 0x2
    ctx->r10 = ctx->r3 & 0X2;
    // 0x802161B8: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x802161BC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802161C0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802161C4: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x802161C8: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x802161CC: nop

    // 0x802161D0: div         $zero, $t7, $t9
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r25))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r25)));
    // 0x802161D4: mflo        $a0
    ctx->r4 = lo;
    // 0x802161D8: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x802161DC: bne         $t9, $zero, L_802161E8
    if (ctx->r25 != 0) {
        // 0x802161E0: nop
    
            goto L_802161E8;
    }
    // 0x802161E0: nop

    // 0x802161E4: break       7
    do_break(2149671396);
L_802161E8:
    // 0x802161E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802161EC: bne         $t9, $at, L_80216200
    if (ctx->r25 != ctx->r1) {
        // 0x802161F0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80216200;
    }
    // 0x802161F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802161F4: bne         $t7, $at, L_80216200
    if (ctx->r15 != ctx->r1) {
        // 0x802161F8: nop
    
            goto L_80216200;
    }
    // 0x802161F8: nop

    // 0x802161FC: break       6
    do_break(2149671420);
L_80216200:
    // 0x80216200: beql        $t2, $zero, L_8021621C
    if (ctx->r10 == 0) {
        // 0x80216204: lbu         $a1, 0x18($a3)
        ctx->r5 = MEM_BU(ctx->r7, 0X18);
            goto L_8021621C;
    }
    goto skip_1;
    // 0x80216204: lbu         $a1, 0x18($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X18);
    skip_1:
    // 0x80216208: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8021620C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80216210: andi        $t1, $v0, 0xFFFF
    ctx->r9 = ctx->r2 & 0XFFFF;
    // 0x80216214: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80216218: lbu         $a1, 0x18($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X18);
L_8021621C:
    // 0x8021621C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x80216220: slt         $at, $a2, $a1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80216224: beq         $at, $zero, L_80216240
    if (ctx->r1 == 0) {
        // 0x80216228: nop
    
            goto L_80216240;
    }
    // 0x80216228: nop

    // 0x8021622C: lbu         $t3, 0x19($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X19);
    // 0x80216230: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80216234: slt         $at, $v0, $t3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80216238: bne         $at, $zero, L_80216248
    if (ctx->r1 != 0) {
        // 0x8021623C: nop
    
            goto L_80216248;
    }
    // 0x8021623C: nop

L_80216240:
    // 0x80216240: b           L_80216454
    // 0x80216244: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80216454;
    // 0x80216244: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80216248:
    // 0x80216248: multu       $a0, $a1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021624C: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x80216250: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80216254: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80216258: mtc1        $a2, $f10
    ctx->f10.u32l = ctx->r6;
    // 0x8021625C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80216260: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80216264: mflo        $t4
    ctx->r12 = lo;
    // 0x80216268: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x8021626C: sh          $t5, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r13;
    // 0x80216270: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80216274: mul.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80216278: bgez        $a2, L_8021628C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8021627C: nop
    
            goto L_8021628C;
    }
    // 0x8021627C: nop

    // 0x80216280: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80216284: nop

    // 0x80216288: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_8021628C:
    // 0x8021628C: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80216290: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80216294: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x80216298: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021629C: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x802162A0: sub.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x802162A4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x802162A8: sub.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x802162AC: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802162B0: swc1        $f6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
    // 0x802162B4: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802162B8: mul.s       $f14, $f10, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x802162BC: bgez        $v0, L_802162D0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802162C0: nop
    
            goto L_802162D0;
    }
    // 0x802162C0: nop

    // 0x802162C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802162C8: nop

    // 0x802162CC: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_802162D0:
    // 0x802162D0: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802162D4: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802162D8: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x802162DC: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x802162E0: neg.s       $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = -ctx->f12.fl;
    // 0x802162E4: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x802162E8: sub.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x802162EC: swc1        $f6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f6.u32l;
    // 0x802162F0: lwc1        $f2, 0x0($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, 0X0);
    // 0x802162F4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x802162F8: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x802162FC: nop

    // 0x80216300: bc1fl       L_80216314
    if (!c1cs) {
        // 0x80216304: c.le.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
            goto L_80216314;
    }
    goto skip_2;
    // 0x80216304: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    skip_2:
    // 0x80216308: b           L_80216360
    // 0x8021630C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80216360;
    // 0x8021630C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80216310: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
L_80216314:
    // 0x80216314: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80216318: bc1fl       L_8021632C
    if (!c1cs) {
        // 0x8021631C: lwc1        $f0, 0x0($t7)
        ctx->f0.u32l = MEM_W(ctx->r15, 0X0);
            goto L_8021632C;
    }
    goto skip_3;
    // 0x8021631C: lwc1        $f0, 0x0($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X0);
    skip_3:
    // 0x80216320: b           L_80216360
    // 0x80216324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80216360;
    // 0x80216324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80216328: lwc1        $f0, 0x0($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X0);
L_8021632C:
    // 0x8021632C: neg.s       $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = -ctx->f14.fl;
    // 0x80216330: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80216334: nop

    // 0x80216338: bc1fl       L_8021634C
    if (!c1cs) {
        // 0x8021633C: c.le.s      $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
            goto L_8021634C;
    }
    goto skip_4;
    // 0x8021633C: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    skip_4:
    // 0x80216340: b           L_80216360
    // 0x80216344: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80216360;
    // 0x80216344: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80216348: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
L_8021634C:
    // 0x8021634C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80216350: bc1f        L_80216360
    if (!c1cs) {
        // 0x80216354: nop
    
            goto L_80216360;
    }
    // 0x80216354: nop

    // 0x80216358: b           L_80216360
    // 0x8021635C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80216360;
    // 0x8021635C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80216360:
    // 0x80216360: lhu         $t2, 0x0($t0)
    ctx->r10 = MEM_HU(ctx->r8, 0X0);
    // 0x80216364: lw          $t9, 0x28($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X28);
    // 0x80216368: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x8021636C: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80216370: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80216374: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80216378: subu        $t1, $t1, $t2
    ctx->r9 = SUB32(ctx->r9, ctx->r10);
    // 0x8021637C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80216380: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x80216384: lbu         $a0, 0x48($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X48);
    // 0x80216388: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x8021638C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x80216390: jal         0x80218C74
    // 0x80216394: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    func_80218C74(rdram, ctx);
        goto after_0;
    // 0x80216394: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    after_0:
    // 0x80216398: lbu         $v0, 0x27($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X27);
    // 0x8021639C: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802163A0: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802163A4: beq         $v0, $zero, L_802163B8
    if (ctx->r2 == 0) {
        // 0x802163A8: lw          $t5, 0x58($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X58);
            goto L_802163B8;
    }
    // 0x802163A8: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x802163AC: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x802163B0: b           L_80216450
    // 0x802163B4: sh          $zero, 0x0($t4)
    MEM_H(0X0, ctx->r12) = 0;
        goto L_80216450;
    // 0x802163B4: sh          $zero, 0x0($t4)
    MEM_H(0X0, ctx->r12) = 0;
L_802163B8:
    // 0x802163B8: lwc1        $f10, 0x0($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X0);
    // 0x802163BC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802163C0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802163C4: add.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x802163C8: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802163CC: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x802163D0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802163D4: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802163D8: ori         $t5, $zero, 0x8000
    ctx->r13 = 0 | 0X8000;
    // 0x802163DC: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x802163E0: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802163E4: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x802163E8: add.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x802163EC: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802163F0: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802163F4: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x802163F8: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802163FC: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x80216400: div.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80216404: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80216408: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x8021640C: nop

    // 0x80216410: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x80216414: bne         $a1, $v0, L_80216420
    if (ctx->r5 != ctx->r2) {
        // 0x80216418: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_80216420;
    }
    // 0x80216418: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8021641C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80216420:
    // 0x80216420: bne         $a1, $a0, L_8021642C
    if (ctx->r5 != ctx->r4) {
        // 0x80216424: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_8021642C;
    }
    // 0x80216424: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80216428: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_8021642C:
    // 0x8021642C: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x80216430: bgez        $v0, L_80216444
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80216434: andi        $t3, $v0, 0x3
        ctx->r11 = ctx->r2 & 0X3;
            goto L_80216444;
    }
    // 0x80216434: andi        $t3, $v0, 0x3
    ctx->r11 = ctx->r2 & 0X3;
    // 0x80216438: beq         $t3, $zero, L_80216444
    if (ctx->r11 == 0) {
        // 0x8021643C: nop
    
            goto L_80216444;
    }
    // 0x8021643C: nop

    // 0x80216440: addiu       $t3, $t3, -0x4
    ctx->r11 = ADD32(ctx->r11, -0X4);
L_80216444:
    // 0x80216444: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80216448: srav        $t8, $t5, $t4
    ctx->r24 = S32(SIGNED(ctx->r13) >> (ctx->r12 & 31));
    // 0x8021644C: sh          $t8, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r24;
L_80216450:
    // 0x80216450: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80216454:
    // 0x80216454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80216458: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8021645C: jr          $ra
    // 0x80216460: nop

    return;
    // 0x80216460: nop

;}
RECOMP_FUNC void func_8020225C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020225C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80202260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80202264: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202268: jal         0x802011D0
    // 0x8020226C: addiu       $a0, $a0, 0x2040
    ctx->r4 = ADD32(ctx->r4, 0X2040);
    func_802011D0(rdram, ctx);
        goto after_0;
    // 0x8020226C: addiu       $a0, $a0, 0x2040
    ctx->r4 = ADD32(ctx->r4, 0X2040);
    after_0:
    // 0x80202270: jal         0x80202F38
    // 0x80202274: nop

    func_80202F38(rdram, ctx);
        goto after_1;
    // 0x80202274: nop

    after_1:
    // 0x80202278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020227C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80202280: jr          $ra
    // 0x80202284: nop

    return;
    // 0x80202284: nop

;}
RECOMP_FUNC void func_80239570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80239570: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80239574: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80239578: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023957C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80239580: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80239584: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x80239588: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x8023958C: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x80239590: beq         $v0, $t7, L_802395C4
    if (ctx->r2 == ctx->r15) {
        // 0x80239594: or          $t6, $a1, $zero
        ctx->r14 = ctx->r5 | 0;
            goto L_802395C4;
    }
    // 0x80239594: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x80239598: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8023959C: lbu         $a3, 0x0($t6)
    ctx->r7 = MEM_BU(ctx->r14, 0X0);
    // 0x802395A0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802395A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802395A8: jal         0x80245404
    // 0x802395AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80245404(rdram, ctx);
        goto after_0;
    // 0x802395AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802395B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802395B4: beq         $v0, $zero, L_802395C4
    if (ctx->r2 == 0) {
        // 0x802395B8: nop
    
            goto L_802395C4;
    }
    // 0x802395B8: nop

    // 0x802395BC: b           L_80239644
    // 0x802395C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80239644;
    // 0x802395C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802395C4:
    // 0x802395C4: lbu         $t9, 0x1($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1);
    // 0x802395C8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x802395CC: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x802395D0: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x802395D4: lhu         $at, 0x0($t1)
    ctx->r1 = MEM_HU(ctx->r9, 0X0);
    // 0x802395D8: nop

    // 0x802395DC: sh          $at, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r1;
    // 0x802395E0: lw          $t4, 0x60($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X60);
    // 0x802395E4: andi        $v1, $at, 0xFFFF
    ctx->r3 = ctx->r1 & 0XFFFF;
    // 0x802395E8: slt         $at, $v1, $t4
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x802395EC: bne         $at, $zero, L_80239628
    if (ctx->r1 != 0) {
        // 0x802395F0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80239628;
    }
    // 0x802395F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802395F4: lbu         $t5, 0x0($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X0);
    // 0x802395F8: lbu         $t7, 0x64($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X64);
    // 0x802395FC: nop

    // 0x80239600: slt         $at, $t5, $t7
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80239604: beq         $at, $zero, L_80239628
    if (ctx->r1 == 0) {
        // 0x80239608: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80239628;
    }
    // 0x80239608: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023960C: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80239610: nop

    // 0x80239614: blez        $v0, L_80239624
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80239618: slti        $at, $v0, 0x80
        ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
            goto L_80239624;
    }
    // 0x80239618: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x8023961C: bne         $at, $zero, L_80239640
    if (ctx->r1 != 0) {
        // 0x80239620: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80239640;
    }
    // 0x80239620: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80239624:
    // 0x80239624: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_80239628:
    // 0x80239628: bne         $v1, $at, L_80239638
    if (ctx->r3 != ctx->r1) {
        // 0x8023962C: nop
    
            goto L_80239638;
    }
    // 0x8023962C: nop

    // 0x80239630: b           L_80239640
    // 0x80239634: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80239640;
    // 0x80239634: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80239638:
    // 0x80239638: b           L_80239640
    // 0x8023963C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80239640;
    // 0x8023963C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80239640:
    // 0x80239640: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80239644:
    // 0x80239644: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80239648: jr          $ra
    // 0x8023964C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8023964C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238174: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238178: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023817C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80238180: jal         0x802380B0
    // 0x80238184: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_802380B0(rdram, ctx);
        goto after_0;
    // 0x80238184: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_0:
    // 0x80238188: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x8023818C: beq         $t6, $zero, L_802381B8
    if (ctx->r14 == 0) {
        // 0x80238190: or          $t1, $v0, $zero
        ctx->r9 = ctx->r2 | 0;
            goto L_802381B8;
    }
    // 0x80238190: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x80238194: andi        $t1, $v0, 0x7F
    ctx->r9 = ctx->r2 & 0X7F;
L_80238198:
    // 0x80238198: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8023819C: jal         0x802380B0
    // 0x802381A0: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_802380B0(rdram, ctx);
        goto after_1;
    // 0x802381A0: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_1:
    // 0x802381A4: sll         $t7, $t1, 7
    ctx->r15 = S32(ctx->r9 << 7);
    // 0x802381A8: andi        $t8, $v0, 0x7F
    ctx->r24 = ctx->r2 & 0X7F;
    // 0x802381AC: andi        $t9, $v0, 0x80
    ctx->r25 = ctx->r2 & 0X80;
    // 0x802381B0: bne         $t9, $zero, L_80238198
    if (ctx->r25 != 0) {
        // 0x802381B4: addu        $t1, $t7, $t8
        ctx->r9 = ADD32(ctx->r15, ctx->r24);
            goto L_80238198;
    }
    // 0x802381B4: addu        $t1, $t7, $t8
    ctx->r9 = ADD32(ctx->r15, ctx->r24);
L_802381B8:
    // 0x802381B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802381BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802381C0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x802381C4: jr          $ra
    // 0x802381C8: nop

    return;
    // 0x802381C8: nop

    // 0x802381CC: jr          $ra
    // 0x802381D0: nop

    return;
    // 0x802381D0: nop

;}
RECOMP_FUNC void func_802344A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802344A4: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x802344A8: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x802344AC: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x802344B0: lw          $t6, 0x3950($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3950);
    // 0x802344B4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802344B8: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x802344BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802344C0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x802344C4: jr          $ra
    // 0x802344C8: lh          $v0, 0x4($t8)
    ctx->r2 = MEM_H(ctx->r24, 0X4);
    return;
    // 0x802344C8: lh          $v0, 0x4($t8)
    ctx->r2 = MEM_H(ctx->r24, 0X4);
;}
RECOMP_FUNC void func_80238A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238A30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80238A34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238A38: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x80238A3C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80238A40: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80238A44: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80238A48: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x80238A4C: jal         0x8023F37C
    // 0x80238A50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80238A50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80238A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238A58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80238A5C: jr          $ra
    // 0x80238A60: nop

    return;
    // 0x80238A60: nop

;}
