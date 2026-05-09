#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_802085D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802085D4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802085D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802085DC: jal         0x80208230
    // 0x802085E0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    func_80208230(rdram, ctx);
        goto after_0;
    // 0x802085E0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802085E4: beq         $v0, $zero, L_802085F4
    if (ctx->r2 == 0) {
        // 0x802085E8: lui         $a0, 0x8026
        ctx->r4 = S32(0X8026 << 16);
            goto L_802085F4;
    }
    // 0x802085E8: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x802085EC: b           L_8020863C
    // 0x802085F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8020863C;
    // 0x802085F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802085F4:
    // 0x802085F4: addiu       $a0, $a0, -0x3CE0
    ctx->r4 = ADD32(ctx->r4, -0X3CE0);
    // 0x802085F8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x802085FC: jal         0x802392C0
    // 0x80208600: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_802392C0(rdram, ctx);
        goto after_1;
    // 0x80208600: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x80208604: bne         $v0, $zero, L_80208634
    if (ctx->r2 != 0) {
        // 0x80208608: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80208634;
    }
    // 0x80208608: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8020860C: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80208610: addiu       $t6, $sp, 0x32
    ctx->r14 = ADD32(ctx->r29, 0X32);
    // 0x80208614: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80208618: addiu       $a0, $a0, -0x3CE0
    ctx->r4 = ADD32(ctx->r4, -0X3CE0);
    // 0x8020861C: lhu         $a1, 0x30($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X30);
    // 0x80208620: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80208624: jal         0x802399C0
    // 0x80208628: addiu       $a3, $sp, 0x36
    ctx->r7 = ADD32(ctx->r29, 0X36);
    func_802399C0(rdram, ctx);
        goto after_2;
    // 0x80208628: addiu       $a3, $sp, 0x36
    ctx->r7 = ADD32(ctx->r29, 0X36);
    after_2:
    // 0x8020862C: b           L_8020863C
    // 0x80208630: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8020863C;
    // 0x80208630: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80208634:
    // 0x80208634: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80208638: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8020863C:
    // 0x8020863C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80208640: jr          $ra
    // 0x80208644: nop

    return;
    // 0x80208644: nop

;}
RECOMP_FUNC void func_802011D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802011D0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802011D4: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x802011D8: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x802011DC: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x802011E0: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x802011E4: jr          $ra
    // 0x802011E8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x802011E8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80211DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80211DA4: addiu       $sp, $sp, -0x188
    ctx->r29 = ADD32(ctx->r29, -0X188);
    // 0x80211DA8: sw          $a1, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r5;
    // 0x80211DAC: lwc1        $f8, 0x18C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18C);
    // 0x80211DB0: lwc1        $f10, 0x198($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
    // 0x80211DB4: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x80211DB8: lui         $s2, 0x8026
    ctx->r18 = S32(0X8026 << 16);
    // 0x80211DBC: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80211DC0: addiu       $s2, $s2, -0x3C68
    ctx->r18 = ADD32(ctx->r18, -0X3C68);
    // 0x80211DC4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80211DC8: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x80211DCC: sw          $fp, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r30;
    // 0x80211DD0: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x80211DD4: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x80211DD8: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x80211DDC: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x80211DE0: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x80211DE4: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x80211DE8: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x80211DEC: sdc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X68, ctx->r29);
    // 0x80211DF0: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x80211DF4: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x80211DF8: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x80211DFC: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x80211E00: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x80211E04: sw          $a0, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r4;
    // 0x80211E08: sw          $a2, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r6;
    // 0x80211E0C: sw          $a3, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r7;
    // 0x80211E10: bc1f        L_80211E5C
    if (!c1cs) {
        // 0x80211E14: sw          $zero, 0x0($s2)
        MEM_W(0X0, ctx->r18) = 0;
            goto L_80211E5C;
    }
    // 0x80211E14: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x80211E18: lwc1        $f4, 0x190($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X190);
    // 0x80211E1C: lwc1        $f6, 0x19C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x80211E20: lwc1        $f8, 0x194($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X194);
    // 0x80211E24: lwc1        $f10, 0x1A0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x80211E28: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80211E2C: nop

    // 0x80211E30: bc1f        L_80211E5C
    if (!c1cs) {
        // 0x80211E34: nop
    
            goto L_80211E5C;
    }
    // 0x80211E34: nop

    // 0x80211E38: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80211E3C: lw          $t2, 0x1A4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1A4);
    // 0x80211E40: bc1f        L_80211E5C
    if (!c1cs) {
        // 0x80211E44: nop
    
            goto L_80211E5C;
    }
    // 0x80211E44: nop

    // 0x80211E48: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    // 0x80211E4C: lw          $t0, 0x1A8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1A8);
    // 0x80211E50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80211E54: b           L_802129AC
    // 0x80211E58: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
        goto L_802129AC;
    // 0x80211E58: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
L_80211E5C:
    // 0x80211E5C: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x80211E60: lw          $t3, -0x18F0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X18F0);
    // 0x80211E64: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x80211E68: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80211E6C: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x80211E70: addiu       $a0, $a0, 0x2DD4
    ctx->r4 = ADD32(ctx->r4, 0X2DD4);
    // 0x80211E74: addu        $t4, $t6, $t5
    ctx->r12 = ADD32(ctx->r14, ctx->r13);
    // 0x80211E78: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x80211E7C: bne         $v0, $zero, L_80211E8C
    if (ctx->r2 != 0) {
        // 0x80211E80: sw          $v0, 0x184($sp)
        MEM_W(0X184, ctx->r29) = ctx->r2;
            goto L_80211E8C;
    }
    // 0x80211E80: sw          $v0, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r2;
    // 0x80211E84: jal         0x80231A24
    // 0x80211E88: sw          $v0, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r2;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80211E88: sw          $v0, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r2;
    after_0:
L_80211E8C:
    // 0x80211E8C: lw          $v0, 0x184($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X184);
    // 0x80211E90: lwc1        $f10, 0x1A0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x80211E94: lwc1        $f6, 0x194($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X194);
    // 0x80211E98: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80211E9C: lwc1        $f22, 0x1C($v0)
    ctx->f22.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80211EA0: sub.s       $f20, $f10, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80211EA4: swc1        $f4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f4.u32l;
    // 0x80211EA8: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80211EAC: lwc1        $f12, 0x198($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X198);
    // 0x80211EB0: lwc1        $f14, 0x19C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x80211EB4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80211EB8: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80211EBC: lwc1        $f28, 0x18C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X18C);
    // 0x80211EC0: lwc1        $f30, 0x190($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X190);
    // 0x80211EC4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80211EC8: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80211ECC: addiu       $a0, $sp, 0x18C
    ctx->r4 = ADD32(ctx->r29, 0X18C);
    // 0x80211ED0: addiu       $a1, $sp, 0x190
    ctx->r5 = ADD32(ctx->r29, 0X190);
    // 0x80211ED4: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80211ED8: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80211EDC: addiu       $a2, $sp, 0x198
    ctx->r6 = ADD32(ctx->r29, 0X198);
    // 0x80211EE0: addiu       $a3, $sp, 0x19C
    ctx->r7 = ADD32(ctx->r29, 0X19C);
    // 0x80211EE4: swc1        $f12, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f12.u32l;
    // 0x80211EE8: swc1        $f14, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f14.u32l;
    // 0x80211EEC: sub.s       $f24, $f12, $f28
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f24.fl = ctx->f12.fl - ctx->f28.fl;
    // 0x80211EF0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80211EF4: jal         0x80218600
    // 0x80211EF8: sub.s       $f26, $f14, $f30
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f26.fl = ctx->f14.fl - ctx->f30.fl;
    func_80218600(rdram, ctx);
        goto after_1;
    // 0x80211EF8: sub.s       $f26, $f14, $f30
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f26.fl = ctx->f14.fl - ctx->f30.fl;
    after_1:
    // 0x80211EFC: lw          $a0, 0x184($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X184);
    // 0x80211F00: lwc1        $f4, 0x18C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18C);
    // 0x80211F04: lwc1        $f12, 0xF8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x80211F08: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80211F0C: lwc1        $f14, 0xF4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x80211F10: lwc1        $f16, 0x128($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80211F14: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x80211F18: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80211F1C: bc1fl       L_80211F3C
    if (!c1cs) {
        // 0x80211F20: lwc1        $f6, 0x198($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X198);
            goto L_80211F3C;
    }
    goto skip_0;
    // 0x80211F20: lwc1        $f6, 0x198($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X198);
    skip_0:
    // 0x80211F24: lwc1        $f2, 0x30F0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X30F0);
    // 0x80211F28: mul.s       $f8, $f2, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x80211F2C: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80211F30: swc1        $f10, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->f10.u32l;
    // 0x80211F34: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80211F38: lwc1        $f6, 0x198($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X198);
L_80211F3C:
    // 0x80211F3C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80211F40: lwc1        $f2, 0x30F4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X30F4);
    // 0x80211F44: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x80211F48: nop

    // 0x80211F4C: bc1fl       L_80211F64
    if (!c1cs) {
        // 0x80211F50: lwc1        $f0, 0x10($a0)
        ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
            goto L_80211F64;
    }
    goto skip_1;
    // 0x80211F50: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    skip_1:
    // 0x80211F54: mul.s       $f4, $f2, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x80211F58: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80211F5C: swc1        $f8, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f8.u32l;
    // 0x80211F60: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
L_80211F64:
    // 0x80211F64: lwc1        $f10, 0x190($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X190);
    // 0x80211F68: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x80211F6C: nop

    // 0x80211F70: bc1fl       L_80211F8C
    if (!c1cs) {
        // 0x80211F74: lwc1        $f8, 0x19C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X19C);
            goto L_80211F8C;
    }
    goto skip_2;
    // 0x80211F74: lwc1        $f8, 0x19C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X19C);
    skip_2:
    // 0x80211F78: mul.s       $f6, $f2, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x80211F7C: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80211F80: swc1        $f4, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f4.u32l;
    // 0x80211F84: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80211F88: lwc1        $f8, 0x19C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X19C);
L_80211F8C:
    // 0x80211F8C: addiu       $t1, $sp, 0x170
    ctx->r9 = ADD32(ctx->r29, 0X170);
    // 0x80211F90: addiu       $t8, $sp, 0x16C
    ctx->r24 = ADD32(ctx->r29, 0X16C);
    // 0x80211F94: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x80211F98: addiu       $t2, $sp, 0x168
    ctx->r10 = ADD32(ctx->r29, 0X168);
    // 0x80211F9C: addiu       $t0, $sp, 0x15A
    ctx->r8 = ADD32(ctx->r29, 0X15A);
    // 0x80211FA0: addiu       $t3, $sp, 0x156
    ctx->r11 = ADD32(ctx->r29, 0X156);
    // 0x80211FA4: bc1fl       L_80211FBC
    if (!c1cs) {
        // 0x80211FA8: lwc1        $f0, 0x18C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X18C);
            goto L_80211FBC;
    }
    goto skip_3;
    // 0x80211FA8: lwc1        $f0, 0x18C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18C);
    skip_3:
    // 0x80211FAC: mul.s       $f10, $f2, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x80211FB0: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80211FB4: swc1        $f6, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->f6.u32l;
    // 0x80211FB8: lwc1        $f0, 0x18C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18C);
L_80211FBC:
    // 0x80211FBC: swc1        $f22, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f22.u32l;
    // 0x80211FC0: lwc1        $f10, 0x190($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X190);
    // 0x80211FC4: c.eq.s      $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f28.fl == ctx->f0.fl;
    // 0x80211FC8: nop

    // 0x80211FCC: bc1tl       L_8021200C
    if (c1cs) {
        // 0x80211FD0: c.eq.s      $f30, $f10
        CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f30.fl == ctx->f10.fl;
            goto L_8021200C;
    }
    goto skip_4;
    // 0x80211FD0: c.eq.s      $f30, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f30.fl == ctx->f10.fl;
    skip_4:
    // 0x80211FD4: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80211FD8: nop

    // 0x80211FDC: c.eq.s      $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f24.fl == ctx->f22.fl;
    // 0x80211FE0: nop

    // 0x80211FE4: bc1tl       L_8021200C
    if (c1cs) {
        // 0x80211FE8: c.eq.s      $f30, $f10
        CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f30.fl == ctx->f10.fl;
            goto L_8021200C;
    }
    goto skip_5;
    // 0x80211FE8: c.eq.s      $f30, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f30.fl == ctx->f10.fl;
    skip_5:
    // 0x80211FEC: sub.s       $f8, $f0, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f28.fl;
    // 0x80211FF0: lwc1        $f4, 0x194($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X194);
    // 0x80211FF4: div.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f24.fl);
    // 0x80211FF8: mul.s       $f6, $f20, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x80211FFC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80212000: b           L_80212040
    // 0x80212004: swc1        $f8, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->f8.u32l;
        goto L_80212040;
    // 0x80212004: swc1        $f8, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->f8.u32l;
    // 0x80212008: c.eq.s      $f30, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f30.fl == ctx->f10.fl;
L_8021200C:
    // 0x8021200C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80212010: bc1tl       L_80212044
    if (c1cs) {
        // 0x80212014: lwc1        $f8, 0x198($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X198);
            goto L_80212044;
    }
    goto skip_6;
    // 0x80212014: lwc1        $f8, 0x198($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X198);
    skip_6:
    // 0x80212018: c.eq.s      $f26, $f22
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f26.fl == ctx->f22.fl;
    // 0x8021201C: nop

    // 0x80212020: bc1tl       L_80212044
    if (c1cs) {
        // 0x80212024: lwc1        $f8, 0x198($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X198);
            goto L_80212044;
    }
    goto skip_7;
    // 0x80212024: lwc1        $f8, 0x198($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X198);
    skip_7:
    // 0x80212028: sub.s       $f6, $f10, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f30.fl;
    // 0x8021202C: lwc1        $f4, 0x194($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X194);
    // 0x80212030: div.s       $f8, $f6, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f26.fl);
    // 0x80212034: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x80212038: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8021203C: swc1        $f6, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->f6.u32l;
L_80212040:
    // 0x80212040: lwc1        $f8, 0x198($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X198);
L_80212044:
    // 0x80212044: lwc1        $f6, 0x19C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x80212048: c.eq.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl == ctx->f8.fl;
    // 0x8021204C: nop

    // 0x80212050: bc1tl       L_80212088
    if (c1cs) {
        // 0x80212054: c.eq.s      $f14, $f6
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl == ctx->f6.fl;
            goto L_80212088;
    }
    goto skip_8;
    // 0x80212054: c.eq.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl == ctx->f6.fl;
    skip_8:
    // 0x80212058: c.eq.s      $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f24.fl == ctx->f22.fl;
    // 0x8021205C: nop

    // 0x80212060: bc1tl       L_80212088
    if (c1cs) {
        // 0x80212064: c.eq.s      $f14, $f6
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl == ctx->f6.fl;
            goto L_80212088;
    }
    goto skip_9;
    // 0x80212064: c.eq.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl == ctx->f6.fl;
    skip_9:
    // 0x80212068: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x8021206C: lwc1        $f4, 0x1A0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x80212070: div.s       $f6, $f10, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f24.fl);
    // 0x80212074: mul.s       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x80212078: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8021207C: b           L_802120BC
    // 0x80212080: swc1        $f10, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f10.u32l;
        goto L_802120BC;
    // 0x80212080: swc1        $f10, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f10.u32l;
    // 0x80212084: c.eq.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl == ctx->f6.fl;
L_80212088:
    // 0x80212088: nop

    // 0x8021208C: bc1tl       L_802120C0
    if (c1cs) {
        // 0x80212090: lwc1        $f10, 0x198($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
            goto L_802120C0;
    }
    goto skip_10;
    // 0x80212090: lwc1        $f10, 0x198($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
    skip_10:
    // 0x80212094: c.eq.s      $f26, $f22
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f26.fl == ctx->f22.fl;
    // 0x80212098: nop

    // 0x8021209C: bc1tl       L_802120C0
    if (c1cs) {
        // 0x802120A0: lwc1        $f10, 0x198($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
            goto L_802120C0;
    }
    goto skip_11;
    // 0x802120A0: lwc1        $f10, 0x198($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
    skip_11:
    // 0x802120A4: sub.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x802120A8: lwc1        $f4, 0x1A0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x802120AC: div.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f26.fl);
    // 0x802120B0: mul.s       $f6, $f20, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x802120B4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802120B8: swc1        $f8, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f8.u32l;
L_802120BC:
    // 0x802120BC: lwc1        $f10, 0x198($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
L_802120C0:
    // 0x802120C0: lwc1        $f4, 0x19C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x802120C4: lwc1        $f6, 0x190($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X190);
    // 0x802120C8: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x802120CC: lw          $a2, 0x190($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X190);
    // 0x802120D0: lw          $a3, 0x194($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X194);
    // 0x802120D4: bc1fl       L_80212128
    if (!c1cs) {
        // 0x802120D8: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_80212128;
    }
    goto skip_12;
    // 0x802120D8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_12:
    // 0x802120DC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802120E0: lwc1        $f4, 0x194($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X194);
    // 0x802120E4: lwc1        $f10, 0x1A0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x802120E8: c.eq.s      $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f8.fl == ctx->f22.fl;
    // 0x802120EC: nop

    // 0x802120F0: bc1fl       L_80212128
    if (!c1cs) {
        // 0x802120F4: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_80212128;
    }
    goto skip_13;
    // 0x802120F4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_13:
    // 0x802120F8: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x802120FC: lw          $t7, 0x1A4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1A4);
    // 0x80212100: c.eq.s      $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f6.fl == ctx->f22.fl;
    // 0x80212104: nop

    // 0x80212108: bc1fl       L_80212128
    if (!c1cs) {
        // 0x8021210C: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_80212128;
    }
    goto skip_14;
    // 0x8021210C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_14:
    // 0x80212110: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x80212114: lw          $t9, 0x1A8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1A8);
    // 0x80212118: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021211C: b           L_802129AC
    // 0x80212120: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
        goto L_802129AC;
    // 0x80212120: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x80212124: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_80212128:
    // 0x80212128: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8021212C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80212130: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80212134: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80212138: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8021213C: jal         0x802160EC
    // 0x80212140: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_802160EC(rdram, ctx);
        goto after_2;
    // 0x80212140: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_2:
    // 0x80212144: addiu       $t6, $sp, 0x164
    ctx->r14 = ADD32(ctx->r29, 0X164);
    // 0x80212148: addiu       $t5, $sp, 0x160
    ctx->r13 = ADD32(ctx->r29, 0X160);
    // 0x8021214C: addiu       $t4, $sp, 0x15C
    ctx->r12 = ADD32(ctx->r29, 0X15C);
    // 0x80212150: addiu       $t7, $sp, 0x158
    ctx->r15 = ADD32(ctx->r29, 0X158);
    // 0x80212154: addiu       $t9, $sp, 0x154
    ctx->r25 = ADD32(ctx->r29, 0X154);
    // 0x80212158: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x8021215C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80212160: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80212164: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80212168: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8021216C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80212170: lw          $a0, 0x184($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X184);
    // 0x80212174: lw          $a1, 0x198($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X198);
    // 0x80212178: lw          $a2, 0x19C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X19C);
    // 0x8021217C: lw          $a3, 0x1A0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1A0);
    // 0x80212180: jal         0x802160EC
    // 0x80212184: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_802160EC(rdram, ctx);
        goto after_3;
    // 0x80212184: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_3:
    // 0x80212188: bne         $s0, $zero, L_802121AC
    if (ctx->r16 != 0) {
        // 0x8021218C: andi        $t1, $v0, 0xFF
        ctx->r9 = ctx->r2 & 0XFF;
            goto L_802121AC;
    }
    // 0x8021218C: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x80212190: bne         $t1, $zero, L_802121AC
    if (ctx->r9 != 0) {
        // 0x80212194: lw          $t8, 0x1A4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X1A4);
            goto L_802121AC;
    }
    // 0x80212194: lw          $t8, 0x1A4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1A4);
    // 0x80212198: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x8021219C: lw          $t2, 0x1A8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1A8);
    // 0x802121A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802121A4: b           L_802129AC
    // 0x802121A8: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
        goto L_802129AC;
    // 0x802121A8: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
L_802121AC:
    // 0x802121AC: lhu         $t0, 0x158($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X158);
    // 0x802121B0: lhu         $t3, 0x15A($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X15A);
    // 0x802121B4: bnel        $t0, $t3, L_802121E8
    if (ctx->r8 != ctx->r11) {
        // 0x802121B8: sb          $zero, 0xBB($sp)
        MEM_B(0XBB, ctx->r29) = 0;
            goto L_802121E8;
    }
    goto skip_15;
    // 0x802121B8: sb          $zero, 0xBB($sp)
    MEM_B(0XBB, ctx->r29) = 0;
    skip_15:
    // 0x802121BC: lhu         $t5, 0x154($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X154);
    // 0x802121C0: lhu         $t4, 0x156($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X156);
    // 0x802121C4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802121C8: sb          $t6, 0xBB($sp)
    MEM_B(0XBB, ctx->r29) = ctx->r14;
    // 0x802121CC: bne         $t5, $t4, L_802121DC
    if (ctx->r13 != ctx->r12) {
        // 0x802121D0: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_802121DC;
    }
    // 0x802121D0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802121D4: b           L_802121EC
    // 0x802121D8: sb          $t7, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = ctx->r15;
        goto L_802121EC;
    // 0x802121D8: sb          $t7, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = ctx->r15;
L_802121DC:
    // 0x802121DC: b           L_802121EC
    // 0x802121E0: sb          $zero, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = 0;
        goto L_802121EC;
    // 0x802121E0: sb          $zero, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = 0;
    // 0x802121E4: sb          $zero, 0xBB($sp)
    MEM_B(0XBB, ctx->r29) = 0;
L_802121E8:
    // 0x802121E8: sb          $zero, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = 0;
L_802121EC:
    // 0x802121EC: lbu         $t9, 0xBB($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XBB);
    // 0x802121F0: lwc1        $f0, 0x18C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18C);
    // 0x802121F4: lwc1        $f8, 0x198($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802121F8: beq         $t9, $zero, L_80212250
    if (ctx->r25 == 0) {
        // 0x802121FC: lwc1        $f10, 0x19C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X19C);
            goto L_80212250;
    }
    // 0x802121FC: lwc1        $f10, 0x19C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x80212200: lw          $t1, 0x184($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X184);
    // 0x80212204: lwc1        $f8, 0x18C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18C);
    // 0x80212208: lwc1        $f6, 0x12C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8021220C: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80212210: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80212214: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80212218: lwc1        $f4, 0x190($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X190);
    // 0x8021221C: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80212220: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80212224: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80212228: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x8021222C: lwc1        $f10, 0x128($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80212230: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80212234: div.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80212238: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8021223C: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x80212240: nop

    // 0x80212244: sw          $t0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r8;
    // 0x80212248: b           L_8021233C
    // 0x8021224C: sw          $t0, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r8;
        goto L_8021233C;
    // 0x8021224C: sw          $t0, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r8;
L_80212250:
    // 0x80212250: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80212254: lwc1        $f18, 0x198($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X198);
    // 0x80212258: lwc1        $f4, 0x190($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X190);
    // 0x8021225C: lwc1        $f14, 0x19C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x80212260: bc1f        L_80212274
    if (!c1cs) {
        // 0x80212264: lw          $t3, 0x184($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X184);
            goto L_80212274;
    }
    // 0x80212264: lw          $t3, 0x184($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X184);
    // 0x80212268: mov.s       $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = ctx->f8.fl;
    // 0x8021226C: b           L_80212278
    // 0x80212270: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
        goto L_80212278;
    // 0x80212270: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
L_80212274:
    // 0x80212274: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
L_80212278:
    // 0x80212278: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x8021227C: lwc1        $f12, 0x190($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X190);
    // 0x80212280: bc1f        L_80212294
    if (!c1cs) {
        // 0x80212284: nop
    
            goto L_80212294;
    }
    // 0x80212284: nop

    // 0x80212288: mov.s       $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = ctx->f10.fl;
    // 0x8021228C: b           L_80212294
    // 0x80212290: mov.s       $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = ctx->f4.fl;
        goto L_80212294;
    // 0x80212290: mov.s       $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = ctx->f4.fl;
L_80212294:
    // 0x80212294: lwc1        $f0, 0x0($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80212298: lwc1        $f8, 0x12C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8021229C: lwc1        $f2, 0x4($t3)
    ctx->f2.u32l = MEM_W(ctx->r11, 0X4);
    // 0x802122A0: sub.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x802122A4: lwc1        $f20, 0x128($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X128);
    // 0x802122A8: lw          $t1, 0x184($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X184);
    // 0x802122AC: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802122B0: sub.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x802122B4: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802122B8: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802122BC: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x802122C0: sub.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x802122C4: div.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    // 0x802122C8: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802122CC: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x802122D0: sub.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x802122D4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802122D8: div.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f20.fl);
    // 0x802122DC: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x802122E0: nop

    // 0x802122E4: sw          $t7, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r15;
    // 0x802122E8: lw          $t2, 0x144($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X144);
    // 0x802122EC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802122F0: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x802122F4: bgez        $v1, L_80212300
    if (SIGNED(ctx->r3) >= 0) {
        // 0x802122F8: sw          $t8, 0x140($sp)
        MEM_W(0X140, ctx->r29) = ctx->r24;
            goto L_80212300;
    }
    // 0x802122F8: sw          $t8, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r24;
    // 0x802122FC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80212300:
    // 0x80212300: lbu         $a0, 0x18($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X18);
    // 0x80212304: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80212308: bne         $at, $zero, L_80212314
    if (ctx->r1 != 0) {
        // 0x8021230C: nop
    
            goto L_80212314;
    }
    // 0x8021230C: nop

    // 0x80212310: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
L_80212314:
    // 0x80212314: bgezl       $t2, L_80212324
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80212318: lw          $t0, 0x184($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X184);
            goto L_80212324;
    }
    goto skip_16;
    // 0x80212318: lw          $t0, 0x184($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X184);
    skip_16:
    // 0x8021231C: sw          $zero, 0x144($sp)
    MEM_W(0X144, ctx->r29) = 0;
    // 0x80212320: lw          $t0, 0x184($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X184);
L_80212324:
    // 0x80212324: lw          $t6, 0x140($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X140);
    // 0x80212328: lbu         $a0, 0x19($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X19);
    // 0x8021232C: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80212330: bne         $at, $zero, L_8021233C
    if (ctx->r1 != 0) {
        // 0x80212334: addiu       $t5, $a0, -0x1
        ctx->r13 = ADD32(ctx->r4, -0X1);
            goto L_8021233C;
    }
    // 0x80212334: addiu       $t5, $a0, -0x1
    ctx->r13 = ADD32(ctx->r4, -0X1);
    // 0x80212338: sw          $t5, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r13;
L_8021233C:
    // 0x8021233C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80212340: bne         $at, $zero, L_80212988
    if (ctx->r1 != 0) {
        // 0x80212344: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_80212988;
    }
    // 0x80212344: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80212348: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021234C: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x80212350: lui         $fp, 0x8025
    ctx->r30 = S32(0X8025 << 16);
    // 0x80212354: lui         $s7, 0x8028
    ctx->r23 = S32(0X8028 << 16);
    // 0x80212358: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8021235C: addiu       $s7, $s7, 0xBC0
    ctx->r23 = ADD32(ctx->r23, 0XBC0);
    // 0x80212360: addiu       $fp, $fp, 0x2E04
    ctx->r30 = ADD32(ctx->r30, 0X2E04);
    // 0x80212364: sw          $t3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r11;
    // 0x80212368: addiu       $s6, $sp, 0x124
    ctx->r22 = ADD32(ctx->r29, 0X124);
    // 0x8021236C: lw          $v0, 0x144($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X144);
L_80212370:
    // 0x80212370: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
    // 0x80212374: slt         $at, $t7, $v0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80212378: bne         $at, $zero, L_80212978
    if (ctx->r1 != 0) {
        // 0x8021237C: addiu       $t9, $t7, 0x1
        ctx->r25 = ADD32(ctx->r15, 0X1);
            goto L_80212978;
    }
    // 0x8021237C: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80212380: sw          $t9, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r25;
    // 0x80212384: sw          $a0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r4;
    // 0x80212388: lw          $v1, 0x184($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X184);
L_8021238C:
    // 0x8021238C: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x80212390: lbu         $t8, 0x18($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X18);
    // 0x80212394: lw          $t0, 0x28($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X28);
    // 0x80212398: multu       $t8, $v0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021239C: mflo        $t1
    ctx->r9 = lo;
    // 0x802123A0: addu        $s5, $t1, $t2
    ctx->r21 = ADD32(ctx->r9, ctx->r10);
    // 0x802123A4: sll         $t6, $s5, 2
    ctx->r14 = S32(ctx->r21 << 2);
    // 0x802123A8: addu        $t6, $t6, $s5
    ctx->r14 = ADD32(ctx->r14, ctx->r21);
    // 0x802123AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802123B0: subu        $t6, $t6, $s5
    ctx->r14 = SUB32(ctx->r14, ctx->r21);
    // 0x802123B4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802123B8: addu        $s1, $t0, $t6
    ctx->r17 = ADD32(ctx->r8, ctx->r14);
    // 0x802123BC: beql        $s1, $zero, L_80212968
    if (ctx->r17 == 0) {
        // 0x802123C0: lw          $t8, 0xA8($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA8);
            goto L_80212968;
    }
    goto skip_17;
    // 0x802123C0: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
    skip_17:
    // 0x802123C4: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x802123C8: lw          $s4, 0x40($s1)
    ctx->r20 = MEM_W(ctx->r17, 0X40);
    // 0x802123CC: lwc1        $f10, 0x18C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18C);
    // 0x802123D0: bnel        $s4, $zero, L_802123E4
    if (ctx->r20 != 0) {
        // 0x802123D4: lwc1        $f4, 0x190($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X190);
            goto L_802123E4;
    }
    goto skip_18;
    // 0x802123D4: lwc1        $f4, 0x190($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X190);
    skip_18:
    // 0x802123D8: b           L_80212968
    // 0x802123DC: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
        goto L_80212968;
    // 0x802123DC: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
    // 0x802123E0: lwc1        $f4, 0x190($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X190);
L_802123E4:
    // 0x802123E4: lwc1        $f6, 0x198($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802123E8: lwc1        $f8, 0x19C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x802123EC: swc1        $f10, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f10.u32l;
    // 0x802123F0: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
    // 0x802123F4: swc1        $f4, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f4.u32l;
    // 0x802123F8: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x802123FC: swc1        $f6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f6.u32l;
    // 0x80212400: swc1        $f8, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f8.u32l;
    // 0x80212404: lwc1        $f4, 0x38($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X38);
    // 0x80212408: lwc1        $f10, 0x194($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X194);
    // 0x8021240C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80212410: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80212414: sub.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80212418: lwc1        $f4, 0x1A0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x8021241C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80212420: lwc1        $f14, 0x9C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80212424: swc1        $f10, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f10.u32l;
    // 0x80212428: lwc1        $f10, 0x38($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X38);
    // 0x8021242C: lwc1        $f12, 0x98($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80212430: sub.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80212434: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80212438: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
    // 0x8021243C: lwc1        $f4, 0x12C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80212440: lwc1        $f0, 0x30($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X30);
    // 0x80212444: mul.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80212448: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8021244C: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x80212450: swc1        $f10, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f10.u32l;
    // 0x80212454: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80212458: swc1        $f4, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f4.u32l;
    // 0x8021245C: lwc1        $f4, 0x128($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80212460: lwc1        $f16, 0x34($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X34);
    // 0x80212464: mul.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80212468: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8021246C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80212470: swc1        $f10, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f10.u32l;
    // 0x80212474: lwc1        $f8, 0x114($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80212478: lwc1        $f10, 0x120($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X120);
    // 0x8021247C: swc1        $f4, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f4.u32l;
    // 0x80212480: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80212484: lwc1        $f4, 0x11C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x80212488: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x8021248C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80212490: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x80212494: jal         0x802184F0
    // 0x80212498: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_802184F0(rdram, ctx);
        goto after_4;
    // 0x80212498: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x8021249C: bne         $v0, $zero, L_802124AC
    if (ctx->r2 != 0) {
        // 0x802124A0: lbu         $t5, 0xBB($sp)
        ctx->r13 = MEM_BU(ctx->r29, 0XBB);
            goto L_802124AC;
    }
    // 0x802124A0: lbu         $t5, 0xBB($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XBB);
    // 0x802124A4: b           L_80212964
    // 0x802124A8: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80212964;
    // 0x802124A8: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_802124AC:
    // 0x802124AC: bne         $t5, $zero, L_80212684
    if (ctx->r13 != 0) {
        // 0x802124B0: addiu       $a0, $sp, 0x110
        ctx->r4 = ADD32(ctx->r29, 0X110);
            goto L_80212684;
    }
    // 0x802124B0: addiu       $a0, $sp, 0x110
    ctx->r4 = ADD32(ctx->r29, 0X110);
    // 0x802124B4: lwc1        $f10, 0x120($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X120);
    // 0x802124B8: lwc1        $f4, 0x11C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x802124BC: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x802124C0: lwc1        $f8, 0x114($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X114);
    // 0x802124C4: addiu       $t3, $sp, 0x104
    ctx->r11 = ADD32(ctx->r29, 0X104);
    // 0x802124C8: addiu       $t4, $sp, 0xEC
    ctx->r12 = ADD32(ctx->r29, 0XEC);
    // 0x802124CC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x802124D0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x802124D4: addiu       $a1, $sp, 0x108
    ctx->r5 = ADD32(ctx->r29, 0X108);
    // 0x802124D8: addiu       $a2, $sp, 0xF0
    ctx->r6 = ADD32(ctx->r29, 0XF0);
    // 0x802124DC: addiu       $a3, $sp, 0x10C
    ctx->r7 = ADD32(ctx->r29, 0X10C);
    // 0x802124E0: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x802124E4: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x802124E8: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x802124EC: jal         0x80218884
    // 0x802124F0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_80218884(rdram, ctx);
        goto after_5;
    // 0x802124F0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x802124F4: lwc1        $f0, 0x10C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802124F8: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    // 0x802124FC: lwc1        $f2, 0x104($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X104);
    // 0x80212500: lwc1        $f14, 0x108($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80212504: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x80212508: lwc1        $f6, 0x11C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x8021250C: lwc1        $f8, 0x114($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80212510: lw          $a0, 0x184($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X184);
    // 0x80212514: bc1f        L_80212548
    if (!c1cs) {
        // 0x80212518: lw          $a3, 0xF0($sp)
        ctx->r7 = MEM_W(ctx->r29, 0XF0);
            goto L_80212548;
    }
    // 0x80212518: lw          $a3, 0xF0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XF0);
    // 0x8021251C: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x80212520: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x80212524: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80212528: bc1fl       L_8021254C
    if (!c1cs) {
        // 0x8021252C: c.eq.s      $f12, $f6
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl == ctx->f6.fl;
            goto L_8021254C;
    }
    goto skip_19;
    // 0x8021252C: c.eq.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl == ctx->f6.fl;
    skip_19:
    // 0x80212530: c.eq.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl == ctx->f4.fl;
    // 0x80212534: nop

    // 0x80212538: bc1fl       L_8021254C
    if (!c1cs) {
        // 0x8021253C: c.eq.s      $f12, $f6
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl == ctx->f6.fl;
            goto L_8021254C;
    }
    goto skip_20;
    // 0x8021253C: c.eq.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl == ctx->f6.fl;
    skip_20:
    // 0x80212540: b           L_80212964
    // 0x80212544: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80212964;
    // 0x80212544: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_80212548:
    // 0x80212548: c.eq.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl == ctx->f6.fl;
L_8021254C:
    // 0x8021254C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80212550: lwc1        $f14, 0x108($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80212554: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80212558: bc1f        L_80212564
    if (!c1cs) {
        // 0x8021255C: addiu       $t8, $sp, 0x170
        ctx->r24 = ADD32(ctx->r29, 0X170);
            goto L_80212564;
    }
    // 0x8021255C: addiu       $t8, $sp, 0x170
    ctx->r24 = ADD32(ctx->r29, 0X170);
    // 0x80212560: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80212564:
    // 0x80212564: c.eq.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl == ctx->f8.fl;
    // 0x80212568: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x8021256C: addiu       $t1, $sp, 0x16C
    ctx->r9 = ADD32(ctx->r29, 0X16C);
    // 0x80212570: addiu       $t2, $sp, 0x168
    ctx->r10 = ADD32(ctx->r29, 0X168);
    // 0x80212574: bc1f        L_80212584
    if (!c1cs) {
        // 0x80212578: addiu       $t0, $sp, 0x15A
        ctx->r8 = ADD32(ctx->r29, 0X15A);
            goto L_80212584;
    }
    // 0x80212578: addiu       $t0, $sp, 0x15A
    ctx->r8 = ADD32(ctx->r29, 0X15A);
    // 0x8021257C: ori         $t7, $s0, 0x2
    ctx->r15 = ctx->r16 | 0X2;
    // 0x80212580: andi        $s0, $t7, 0xFFFF
    ctx->r16 = ctx->r15 & 0XFFFF;
L_80212584:
    // 0x80212584: addiu       $t6, $sp, 0x156
    ctx->r14 = ADD32(ctx->r29, 0X156);
    // 0x80212588: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8021258C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80212590: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80212594: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80212598: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8021259C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802125A0: jal         0x802160EC
    // 0x802125A4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_802160EC(rdram, ctx);
        goto after_6;
    // 0x802125A4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_6:
    // 0x802125A8: lwc1        $f0, 0x10C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802125AC: lwc1        $f10, 0x11C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x802125B0: lwc1        $f2, 0x104($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X104);
    // 0x802125B4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802125B8: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x802125BC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x802125C0: lwc1        $f4, 0x114($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X114);
    // 0x802125C4: lw          $a0, 0x184($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X184);
    // 0x802125C8: bc1f        L_802125D4
    if (!c1cs) {
        // 0x802125CC: lw          $a3, 0xEC($sp)
        ctx->r7 = MEM_W(ctx->r29, 0XEC);
            goto L_802125D4;
    }
    // 0x802125CC: lw          $a3, 0xEC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XEC);
    // 0x802125D0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_802125D4:
    // 0x802125D4: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x802125D8: addiu       $t4, $sp, 0x164
    ctx->r12 = ADD32(ctx->r29, 0X164);
    // 0x802125DC: addiu       $t7, $sp, 0x160
    ctx->r15 = ADD32(ctx->r29, 0X160);
    // 0x802125E0: addiu       $t9, $sp, 0x15C
    ctx->r25 = ADD32(ctx->r29, 0X15C);
    // 0x802125E4: bc1f        L_802125F4
    if (!c1cs) {
        // 0x802125E8: addiu       $t8, $sp, 0x158
        ctx->r24 = ADD32(ctx->r29, 0X158);
            goto L_802125F4;
    }
    // 0x802125E8: addiu       $t8, $sp, 0x158
    ctx->r24 = ADD32(ctx->r29, 0X158);
    // 0x802125EC: ori         $t5, $s0, 0x2
    ctx->r13 = ctx->r16 | 0X2;
    // 0x802125F0: andi        $s0, $t5, 0xFFFF
    ctx->r16 = ctx->r13 & 0XFFFF;
L_802125F4:
    // 0x802125F4: addiu       $t1, $sp, 0x154
    ctx->r9 = ADD32(ctx->r29, 0X154);
    // 0x802125F8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x802125FC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80212600: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80212604: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80212608: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8021260C: jal         0x802160EC
    // 0x80212610: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    func_802160EC(rdram, ctx);
        goto after_7;
    // 0x80212610: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    after_7:
    // 0x80212614: lhu         $t2, 0x154($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X154);
    // 0x80212618: lhu         $t0, 0x156($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X156);
    // 0x8021261C: lwc1        $f0, 0x10C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x80212620: lwc1        $f2, 0x104($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X104);
    // 0x80212624: beq         $t2, $t0, L_80212684
    if (ctx->r10 == ctx->r8) {
        // 0x80212628: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_80212684;
    }
    // 0x80212628: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    // 0x8021262C: lwc1        $f6, 0x170($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X170);
    // 0x80212630: lwc1        $f8, 0x16C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x80212634: lwc1        $f10, 0x164($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X164);
    // 0x80212638: lwc1        $f4, 0x160($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X160);
    // 0x8021263C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80212640: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80212644: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80212648: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8021264C: lwc1        $f4, 0x118($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80212650: lwc1        $f10, 0x114($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80212654: lwc1        $f8, 0x11C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x80212658: lwc1        $f6, 0x120($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X120);
    // 0x8021265C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80212660: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80212664: lwc1        $f14, 0x108($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80212668: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8021266C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x80212670: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80212674: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x80212678: jal         0x80218EAC
    // 0x8021267C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    func_80218EAC(rdram, ctx);
        goto after_8;
    // 0x8021267C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x80212680: sh          $v0, 0x154($sp)
    MEM_H(0X154, ctx->r29) = ctx->r2;
L_80212684:
    // 0x80212684: lbu         $t6, 0xBA($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XBA);
    // 0x80212688: lwc1        $f0, 0x10C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x8021268C: lwc1        $f2, 0x104($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X104);
    // 0x80212690: bne         $t6, $zero, L_802126F0
    if (ctx->r14 != 0) {
        // 0x80212694: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_802126F0;
    }
    // 0x80212694: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80212698: lwc1        $f6, 0x170($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X170);
    // 0x8021269C: lwc1        $f8, 0x16C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x802126A0: lwc1        $f10, 0x164($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X164);
    // 0x802126A4: lwc1        $f4, 0x160($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X160);
    // 0x802126A8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x802126AC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x802126B0: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x802126B4: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x802126B8: lwc1        $f4, 0x118($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X118);
    // 0x802126BC: lwc1        $f10, 0x114($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X114);
    // 0x802126C0: lwc1        $f8, 0x11C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x802126C4: lwc1        $f6, 0x120($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X120);
    // 0x802126C8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802126CC: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x802126D0: lwc1        $f14, 0x108($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X108);
    // 0x802126D4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x802126D8: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x802126DC: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x802126E0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x802126E4: jal         0x80218EAC
    // 0x802126E8: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    func_80218EAC(rdram, ctx);
        goto after_9;
    // 0x802126E8: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x802126EC: sh          $v0, 0x154($sp)
    MEM_H(0X154, ctx->r29) = ctx->r2;
L_802126F0:
    // 0x802126F0: lhu         $t5, 0x154($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X154);
    // 0x802126F4: lwc1        $f6, 0x170($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X170);
    // 0x802126F8: bnel        $t5, $zero, L_8021270C
    if (ctx->r13 != 0) {
        // 0x802126FC: lwc1        $f8, 0x2C($s4)
        ctx->f8.u32l = MEM_W(ctx->r20, 0X2C);
            goto L_8021270C;
    }
    goto skip_21;
    // 0x802126FC: lwc1        $f8, 0x2C($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X2C);
    skip_21:
    // 0x80212700: b           L_80212964
    // 0x80212704: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80212964;
    // 0x80212704: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
    // 0x80212708: lwc1        $f8, 0x2C($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X2C);
L_8021270C:
    // 0x8021270C: lwc1        $f4, 0x164($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X164);
    // 0x80212710: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80212714: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80212718: swc1        $f10, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f10.u32l;
    // 0x8021271C: lwc1        $f6, 0x2C($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X2C);
    // 0x80212720: lwc1        $f10, 0x16C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x80212724: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80212728: swc1        $f8, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f8.u32l;
    // 0x8021272C: lwc1        $f4, 0x2C($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X2C);
    // 0x80212730: lwc1        $f8, 0x160($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X160);
    // 0x80212734: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80212738: swc1        $f6, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f6.u32l;
    // 0x8021273C: lwc1        $f10, 0x2C($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X2C);
    // 0x80212740: lwc1        $f6, 0x168($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X168);
    // 0x80212744: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80212748: swc1        $f4, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f4.u32l;
    // 0x8021274C: lwc1        $f8, 0x2C($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X2C);
    // 0x80212750: lwc1        $f4, 0x15C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x80212754: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80212758: swc1        $f10, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f10.u32l;
    // 0x8021275C: lwc1        $f6, 0x2C($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X2C);
    // 0x80212760: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80212764: swc1        $f8, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f8.u32l;
    // 0x80212768: lhu         $v0, 0xC($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0XC);
    // 0x8021276C: blezl       $v0, L_80212964
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80212770: lw          $v0, 0xCC($sp)
        ctx->r2 = MEM_W(ctx->r29, 0XCC);
            goto L_80212964;
    }
    goto skip_22;
    // 0x80212770: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
    skip_22:
    // 0x80212774: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
L_80212778:
    // 0x80212778: lw          $t3, 0x8($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X8);
    // 0x8021277C: lw          $t4, 0xB0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB0);
    // 0x80212780: lhu         $t9, 0x154($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X154);
    // 0x80212784: addu        $s1, $t3, $t4
    ctx->r17 = ADD32(ctx->r11, ctx->r12);
    // 0x80212788: lhu         $t7, 0x16($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X16);
    // 0x8021278C: and         $t8, $t7, $t9
    ctx->r24 = ctx->r15 & ctx->r25;
    // 0x80212790: beql        $t8, $zero, L_8021294C
    if (ctx->r24 == 0) {
        // 0x80212794: lw          $t9, 0xB0($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XB0);
            goto L_8021294C;
    }
    goto skip_23;
    // 0x80212794: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
    skip_23:
    // 0x80212798: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x8021279C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802127A0: blezl       $v1, L_8021294C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x802127A4: lw          $t9, 0xB0($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XB0);
            goto L_8021294C;
    }
    goto skip_24;
    // 0x802127A4: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
    skip_24:
    // 0x802127A8: lw          $t1, 0x10($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X10);
L_802127AC:
    // 0x802127AC: sll         $t2, $s0, 3
    ctx->r10 = S32(ctx->r16 << 3);
    // 0x802127B0: lhu         $t6, 0x154($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X154);
    // 0x802127B4: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x802127B8: lhu         $t0, 0x6($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X6);
    // 0x802127BC: lwc1        $f10, 0x160($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X160);
    // 0x802127C0: and         $t5, $t0, $t6
    ctx->r13 = ctx->r8 & ctx->r14;
    // 0x802127C4: beql        $t5, $zero, L_80212938
    if (ctx->r13 == 0) {
        // 0x802127C8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80212938;
    }
    goto skip_25;
    // 0x802127C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_25:
    // 0x802127CC: lwc1        $f4, 0x15C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x802127D0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x802127D4: lwc1        $f12, 0x170($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X170);
    // 0x802127D8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x802127DC: lw          $t3, 0x0($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X0);
    // 0x802127E0: lwc1        $f14, 0x16C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x802127E4: lw          $a2, 0x168($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X168);
    // 0x802127E8: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802127EC: lhu         $t4, 0x0($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X0);
    // 0x802127F0: lw          $a3, 0x164($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X164);
    // 0x802127F4: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x802127F8: lhu         $t7, 0x2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X2);
    // 0x802127FC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80212800: lhu         $t9, 0x4($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X4);
    // 0x80212804: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80212808: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x8021280C: jal         0x80215AA8
    // 0x80212810: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    func_80215AA8(rdram, ctx);
        goto after_10;
    // 0x80212810: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_10:
    // 0x80212814: bne         $v0, $zero, L_80212824
    if (ctx->r2 != 0) {
        // 0x80212818: andi        $t6, $s0, 0xFFF
        ctx->r14 = ctx->r16 & 0XFFF;
            goto L_80212824;
    }
    // 0x80212818: andi        $t6, $s0, 0xFFF
    ctx->r14 = ctx->r16 & 0XFFF;
    // 0x8021281C: b           L_80212934
    // 0x80212820: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
        goto L_80212934;
    // 0x80212820: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
L_80212824:
    // 0x80212824: c.eq.s      $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f24.fl == ctx->f22.fl;
    // 0x80212828: andi        $t2, $s3, 0x3FF
    ctx->r10 = ctx->r19 & 0X3FF;
    // 0x8021282C: sll         $t0, $t2, 12
    ctx->r8 = S32(ctx->r10 << 12);
    // 0x80212830: sll         $t1, $s5, 22
    ctx->r9 = S32(ctx->r21 << 22);
    // 0x80212834: bc1t        L_80212864
    if (c1cs) {
        // 0x80212838: addu        $v0, $t1, $t0
        ctx->r2 = ADD32(ctx->r9, ctx->r8);
            goto L_80212864;
    }
    // 0x80212838: addu        $v0, $t1, $t0
    ctx->r2 = ADD32(ctx->r9, ctx->r8);
    // 0x8021283C: lwc1        $f0, 0x10C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x80212840: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80212844: lwc1        $f8, 0x124($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X124);
    // 0x80212848: sub.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x8021284C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80212850: add.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x80212854: sub.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f28.fl;
    // 0x80212858: div.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f24.fl);
    // 0x8021285C: b           L_80212894
    // 0x80212860: swc1        $f8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f8.u32l;
        goto L_80212894;
    // 0x80212860: swc1        $f8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f8.u32l;
L_80212864:
    // 0x80212864: c.eq.s      $f26, $f22
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f26.fl == ctx->f22.fl;
    // 0x80212868: lwc1        $f2, 0x104($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X104);
    // 0x8021286C: lwc1        $f14, 0x108($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80212870: bc1tl       L_80212898
    if (c1cs) {
        // 0x80212874: lwc1        $f6, 0x124($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X124);
            goto L_80212898;
    }
    goto skip_26;
    // 0x80212874: lwc1        $f6, 0x124($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X124);
    skip_26:
    // 0x80212878: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021287C: lwc1        $f4, 0x124($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X124);
    // 0x80212880: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80212884: add.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x80212888: sub.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f30.fl;
    // 0x8021288C: div.s       $f4, $f10, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f26.fl);
    // 0x80212890: swc1        $f4, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f4.u32l;
L_80212894:
    // 0x80212894: lwc1        $f6, 0x124($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X124);
L_80212898:
    // 0x80212898: lwc1        $f8, 0x124($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X124);
    // 0x8021289C: addu        $t5, $v0, $t6
    ctx->r13 = ADD32(ctx->r2, ctx->r14);
    // 0x802128A0: c.lt.s      $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f6.fl < ctx->f22.fl;
    // 0x802128A4: lui         $t3, 0x8026
    ctx->r11 = S32(0X8026 << 16);
    // 0x802128A8: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x802128AC: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x802128B0: bc1fl       L_802128C4
    if (!c1cs) {
        // 0x802128B4: c.lt.s      $f20, $f8
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl < ctx->f8.fl;
            goto L_802128C4;
    }
    goto skip_27;
    // 0x802128B4: c.lt.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl < ctx->f8.fl;
    skip_27:
    // 0x802128B8: b           L_802128D4
    // 0x802128BC: swc1        $f22, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f22.u32l;
        goto L_802128D4;
    // 0x802128BC: swc1        $f22, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f22.u32l;
    // 0x802128C0: c.lt.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl < ctx->f8.fl;
L_802128C4:
    // 0x802128C4: nop

    // 0x802128C8: bc1fl       L_802128D8
    if (!c1cs) {
        // 0x802128CC: lw          $t4, 0x0($s2)
        ctx->r12 = MEM_W(ctx->r18, 0X0);
            goto L_802128D8;
    }
    goto skip_28;
    // 0x802128CC: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    skip_28:
    // 0x802128D0: swc1        $f20, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f20.u32l;
L_802128D4:
    // 0x802128D4: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
L_802128D8:
    // 0x802128D8: lw          $t3, -0x3C64($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3C64);
    // 0x802128DC: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x802128E0: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x802128E4: addu        $t9, $t3, $t7
    ctx->r25 = ADD32(ctx->r11, ctx->r15);
    // 0x802128E8: sw          $t5, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r13;
    // 0x802128EC: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x802128F0: lw          $t8, -0x3C60($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C60);
    // 0x802128F4: lwc1        $f10, 0x124($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X124);
    // 0x802128F8: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x802128FC: addu        $t0, $t8, $t1
    ctx->r8 = ADD32(ctx->r24, ctx->r9);
    // 0x80212900: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
    // 0x80212904: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x80212908: lhu         $t3, 0x18($s7)
    ctx->r11 = MEM_HU(ctx->r23, 0X18);
    // 0x8021290C: addiu       $a0, $t6, 0x1
    ctx->r4 = ADD32(ctx->r14, 0X1);
    // 0x80212910: slt         $at, $a0, $t3
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80212914: bne         $at, $zero, L_80212930
    if (ctx->r1 != 0) {
        // 0x80212918: sw          $a0, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->r4;
            goto L_80212930;
    }
    // 0x80212918: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    // 0x8021291C: jal         0x80231C58
    // 0x80212920: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    func_80231C58(rdram, ctx);
        goto after_11;
    // 0x80212920: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    after_11:
    // 0x80212924: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80212928: addiu       $t5, $t7, -0x1
    ctx->r13 = ADD32(ctx->r15, -0X1);
    // 0x8021292C: sw          $t5, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r13;
L_80212930:
    // 0x80212930: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
L_80212934:
    // 0x80212934: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80212938:
    // 0x80212938: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8021293C: bnel        $at, $zero, L_802127AC
    if (ctx->r1 != 0) {
        // 0x80212940: lw          $t1, 0x10($s1)
        ctx->r9 = MEM_W(ctx->r17, 0X10);
            goto L_802127AC;
    }
    goto skip_29;
    // 0x80212940: lw          $t1, 0x10($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X10);
    skip_29:
    // 0x80212944: lhu         $v0, 0xC($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0XC);
    // 0x80212948: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
L_8021294C:
    // 0x8021294C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80212950: slt         $at, $s3, $v0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80212954: addiu       $t2, $t9, 0x2C
    ctx->r10 = ADD32(ctx->r25, 0X2C);
    // 0x80212958: bne         $at, $zero, L_80212778
    if (ctx->r1 != 0) {
        // 0x8021295C: sw          $t2, 0xB0($sp)
        MEM_W(0XB0, ctx->r29) = ctx->r10;
            goto L_80212778;
    }
    // 0x8021295C: sw          $t2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r10;
    // 0x80212960: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_80212964:
    // 0x80212964: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
L_80212968:
    // 0x80212968: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8021296C: bnel        $t8, $v0, L_8021238C
    if (ctx->r24 != ctx->r2) {
        // 0x80212970: lw          $v1, 0x184($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X184);
            goto L_8021238C;
    }
    goto skip_30;
    // 0x80212970: lw          $v1, 0x184($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X184);
    skip_30:
    // 0x80212974: lw          $a0, 0xD0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD0);
L_80212978:
    // 0x80212978: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x8021297C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80212980: bnel        $t1, $a0, L_80212370
    if (ctx->r9 != ctx->r4) {
        // 0x80212984: lw          $v0, 0x144($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X144);
            goto L_80212370;
    }
    goto skip_31;
    // 0x80212984: lw          $v0, 0x144($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X144);
    skip_31:
L_80212988:
    // 0x80212988: lui         $t0, 0x8026
    ctx->r8 = S32(0X8026 << 16);
    // 0x8021298C: lw          $t0, -0x3C64($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3C64);
    // 0x80212990: lw          $t6, 0x1A4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1A4);
    // 0x80212994: lui         $t4, 0x8026
    ctx->r12 = S32(0X8026 << 16);
    // 0x80212998: sw          $t0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r8;
    // 0x8021299C: lw          $t3, 0x1A8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1A8);
    // 0x802129A0: lw          $t4, -0x3C60($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3C60);
    // 0x802129A4: sw          $t4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r12;
    // 0x802129A8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_802129AC:
    // 0x802129AC: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    // 0x802129B0: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x802129B4: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x802129B8: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x802129BC: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x802129C0: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x802129C4: ldc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X68);
    // 0x802129C8: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x802129CC: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x802129D0: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x802129D4: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x802129D8: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x802129DC: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x802129E0: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x802129E4: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x802129E8: lw          $fp, 0x90($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X90);
    // 0x802129EC: jr          $ra
    // 0x802129F0: addiu       $sp, $sp, 0x188
    ctx->r29 = ADD32(ctx->r29, 0X188);
    return;
    // 0x802129F0: addiu       $sp, $sp, 0x188
    ctx->r29 = ADD32(ctx->r29, 0X188);
;}
RECOMP_FUNC void func_80201920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80201920: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201924: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80201928: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8020192C: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x80201930: lbu         $v1, 0x23($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X23);
    // 0x80201934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201938: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8020193C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201940: bne         $at, $zero, L_8020196C
    if (ctx->r1 != 0) {
        // 0x80201944: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_8020196C;
    }
    // 0x80201944: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201948: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8020194C: addiu       $a1, $a1, 0x1DFC
    ctx->r5 = ADD32(ctx->r5, 0X1DFC);
    // 0x80201950: addiu       $a0, $a0, 0x1DE4
    ctx->r4 = ADD32(ctx->r4, 0X1DE4);
    // 0x80201954: addiu       $a2, $zero, 0x190
    ctx->r6 = ADD32(0, 0X190);
    // 0x80201958: jal         0x80231C9C
    // 0x8020195C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80231C9C(rdram, ctx);
        goto after_0;
    // 0x8020195C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80201960: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80201964: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x80201968: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_8020196C:
    // 0x8020196C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201970: beq         $at, $zero, L_80201A08
    if (ctx->r1 == 0) {
        // 0x80201974: lwc1        $f4, 0x24($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
            goto L_80201A08;
    }
    // 0x80201974: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80201978: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8020197C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80201980: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201984: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80201988: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8020198C: addiu       $a1, $a1, 0x1E14
    ctx->r5 = ADD32(ctx->r5, 0X1E14);
    // 0x80201990: addiu       $a0, $a0, 0x1E04
    ctx->r4 = ADD32(ctx->r4, 0X1E04);
    // 0x80201994: bc1tl       L_802019A8
    if (c1cs) {
        // 0x80201998: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_802019A8;
    }
    goto skip_0;
    // 0x80201998: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x8020199C: jal         0x80231C9C
    // 0x802019A0: addiu       $a2, $zero, 0x192
    ctx->r6 = ADD32(0, 0X192);
    func_80231C9C(rdram, ctx);
        goto after_1;
    // 0x802019A0: addiu       $a2, $zero, 0x192
    ctx->r6 = ADD32(0, 0X192);
    after_1:
    // 0x802019A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_802019A8:
    // 0x802019A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802019AC: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802019B0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802019B4: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802019B8: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x802019BC: addiu       $a1, $a1, 0x1E28
    ctx->r5 = ADD32(ctx->r5, 0X1E28);
    // 0x802019C0: addiu       $a0, $a0, 0x1E1C
    ctx->r4 = ADD32(ctx->r4, 0X1E1C);
    // 0x802019C4: bc1tl       L_802019D8
    if (c1cs) {
        // 0x802019C8: lbu         $t7, 0x23($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X23);
            goto L_802019D8;
    }
    goto skip_1;
    // 0x802019C8: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    skip_1:
    // 0x802019CC: jal         0x80231C9C
    // 0x802019D0: addiu       $a2, $zero, 0x193
    ctx->r6 = ADD32(0, 0X193);
    func_80231C9C(rdram, ctx);
        goto after_2;
    // 0x802019D0: addiu       $a2, $zero, 0x193
    ctx->r6 = ADD32(0, 0X193);
    after_2:
    // 0x802019D4: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
L_802019D8:
    // 0x802019D8: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802019DC: lw          $t6, 0x6DE4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6DE4);
    // 0x802019E0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802019E4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x802019E8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802019EC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x802019F0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802019F4: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802019F8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802019FC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80201A00: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80201A04: swc1        $f16, 0x78($t9)
    MEM_W(0X78, ctx->r25) = ctx->f16.u32l;
L_80201A08:
    // 0x80201A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201A0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80201A10: jr          $ra
    // 0x80201A14: nop

    return;
    // 0x80201A14: nop

;}
RECOMP_FUNC void func_8022FF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022FF90: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022FF94: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8022FF98: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022FF9C: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022FFA0: beq         $t6, $zero, L_8022FFC0
    if (ctx->r14 == 0) {
        // 0x8022FFA4: nop
    
            goto L_8022FFC0;
    }
    // 0x8022FFA4: nop

    // 0x8022FFA8: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
L_8022FFAC:
    // 0x8022FFAC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022FFB0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022FFB4: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022FFB8: bnel        $t7, $zero, L_8022FFAC
    if (ctx->r15 != 0) {
        // 0x8022FFBC: lbu         $v0, 0x0($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X0);
            goto L_8022FFAC;
    }
    goto skip_0;
    // 0x8022FFBC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    skip_0:
L_8022FFC0:
    // 0x8022FFC0: jr          $ra
    // 0x8022FFC4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8022FFC4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8020854C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020854C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80208550: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80208554: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80208558: jal         0x80208230
    // 0x8020855C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80208230(rdram, ctx);
        goto after_0;
    // 0x8020855C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80208560: beq         $v0, $zero, L_80208570
    if (ctx->r2 == 0) {
        // 0x80208564: lui         $a0, 0x8026
        ctx->r4 = S32(0X8026 << 16);
            goto L_80208570;
    }
    // 0x80208564: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80208568: b           L_80208584
    // 0x8020856C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80208584;
    // 0x8020856C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80208570:
    // 0x80208570: addiu       $a0, $a0, -0x3CE0
    ctx->r4 = ADD32(ctx->r4, -0X3CE0);
    // 0x80208574: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80208578: jal         0x8023A5D0
    // 0x8020857C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    func_8023A5D0(rdram, ctx);
        goto after_1;
    // 0x8020857C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80208580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80208584:
    // 0x80208584: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80208588: jr          $ra
    // 0x8020858C: nop

    return;
    // 0x8020858C: nop

;}
RECOMP_FUNC void func_802228FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802228FC: sh          $a1, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r5;
    // 0x80222900: lh          $v0, 0x8($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8);
    // 0x80222904: sh          $a2, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r6;
    // 0x80222908: sh          $a3, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r7;
    // 0x8022290C: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x80222910: addiu       $t0, $zero, 0x1FF
    ctx->r8 = ADD32(0, 0X1FF);
    // 0x80222914: bgez        $v0, L_80222924
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80222918: sh          $t6, 0xE($a0)
        MEM_H(0XE, ctx->r4) = ctx->r14;
            goto L_80222924;
    }
    // 0x80222918: sh          $t6, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r14;
    // 0x8022291C: b           L_80222934
    // 0x80222920: sh          $zero, 0x8($a0)
    MEM_H(0X8, ctx->r4) = 0;
        goto L_80222934;
    // 0x80222920: sh          $zero, 0x8($a0)
    MEM_H(0X8, ctx->r4) = 0;
L_80222924:
    // 0x80222924: slti        $at, $v0, 0x141
    ctx->r1 = SIGNED(ctx->r2) < 0X141 ? 1 : 0;
    // 0x80222928: bne         $at, $zero, L_80222934
    if (ctx->r1 != 0) {
        // 0x8022292C: addiu       $t7, $zero, 0x140
        ctx->r15 = ADD32(0, 0X140);
            goto L_80222934;
    }
    // 0x8022292C: addiu       $t7, $zero, 0x140
    ctx->r15 = ADD32(0, 0X140);
    // 0x80222930: sh          $t7, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r15;
L_80222934:
    // 0x80222934: lh          $v0, 0xA($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XA);
    // 0x80222938: bgez        $v0, L_80222948
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022293C: slti        $at, $v0, 0x141
        ctx->r1 = SIGNED(ctx->r2) < 0X141 ? 1 : 0;
            goto L_80222948;
    }
    // 0x8022293C: slti        $at, $v0, 0x141
    ctx->r1 = SIGNED(ctx->r2) < 0X141 ? 1 : 0;
    // 0x80222940: b           L_80222954
    // 0x80222944: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
        goto L_80222954;
    // 0x80222944: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
L_80222948:
    // 0x80222948: bne         $at, $zero, L_80222954
    if (ctx->r1 != 0) {
        // 0x8022294C: addiu       $t8, $zero, 0x140
        ctx->r24 = ADD32(0, 0X140);
            goto L_80222954;
    }
    // 0x8022294C: addiu       $t8, $zero, 0x140
    ctx->r24 = ADD32(0, 0X140);
    // 0x80222950: sh          $t8, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r24;
L_80222954:
    // 0x80222954: lh          $v0, 0xE($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE);
    // 0x80222958: bgez        $v0, L_80222968
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022295C: slti        $at, $v0, 0xF1
        ctx->r1 = SIGNED(ctx->r2) < 0XF1 ? 1 : 0;
            goto L_80222968;
    }
    // 0x8022295C: slti        $at, $v0, 0xF1
    ctx->r1 = SIGNED(ctx->r2) < 0XF1 ? 1 : 0;
    // 0x80222960: b           L_80222974
    // 0x80222964: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
        goto L_80222974;
    // 0x80222964: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
L_80222968:
    // 0x80222968: bne         $at, $zero, L_80222974
    if (ctx->r1 != 0) {
        // 0x8022296C: addiu       $t1, $zero, 0xF0
        ctx->r9 = ADD32(0, 0XF0);
            goto L_80222974;
    }
    // 0x8022296C: addiu       $t1, $zero, 0xF0
    ctx->r9 = ADD32(0, 0XF0);
    // 0x80222970: sh          $t1, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r9;
L_80222974:
    // 0x80222974: lh          $v0, 0xC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XC);
    // 0x80222978: addiu       $t1, $zero, 0xF0
    ctx->r9 = ADD32(0, 0XF0);
    // 0x8022297C: addiu       $t7, $zero, 0x13F
    ctx->r15 = ADD32(0, 0X13F);
    // 0x80222980: bgez        $v0, L_80222990
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80222984: slti        $at, $v0, 0xF1
        ctx->r1 = SIGNED(ctx->r2) < 0XF1 ? 1 : 0;
            goto L_80222990;
    }
    // 0x80222984: slti        $at, $v0, 0xF1
    ctx->r1 = SIGNED(ctx->r2) < 0XF1 ? 1 : 0;
    // 0x80222988: b           L_8022299C
    // 0x8022298C: sh          $zero, 0xC($a0)
    MEM_H(0XC, ctx->r4) = 0;
        goto L_8022299C;
    // 0x8022298C: sh          $zero, 0xC($a0)
    MEM_H(0XC, ctx->r4) = 0;
L_80222990:
    // 0x80222990: bnel        $at, $zero, L_802229A0
    if (ctx->r1 != 0) {
        // 0x80222994: lh          $t9, 0x8($a0)
        ctx->r25 = MEM_H(ctx->r4, 0X8);
            goto L_802229A0;
    }
    goto skip_0;
    // 0x80222994: lh          $t9, 0x8($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X8);
    skip_0:
    // 0x80222998: sh          $t1, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r9;
L_8022299C:
    // 0x8022299C: lh          $t9, 0x8($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X8);
L_802229A0:
    // 0x802229A0: addiu       $t2, $t9, -0x1
    ctx->r10 = ADD32(ctx->r25, -0X1);
    // 0x802229A4: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
    // 0x802229A8: lh          $t3, 0x0($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X0);
    // 0x802229AC: bgezl       $t3, L_802229BC
    if (SIGNED(ctx->r11) >= 0) {
        // 0x802229B0: lh          $t4, 0xA($a0)
        ctx->r12 = MEM_H(ctx->r4, 0XA);
            goto L_802229BC;
    }
    goto skip_1;
    // 0x802229B0: lh          $t4, 0xA($a0)
    ctx->r12 = MEM_H(ctx->r4, 0XA);
    skip_1:
    // 0x802229B4: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x802229B8: lh          $t4, 0xA($a0)
    ctx->r12 = MEM_H(ctx->r4, 0XA);
L_802229BC:
    // 0x802229BC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x802229C0: sh          $t5, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r13;
    // 0x802229C4: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x802229C8: addiu       $t5, $zero, 0xEF
    ctx->r13 = ADD32(0, 0XEF);
    // 0x802229CC: slti        $at, $t6, 0x140
    ctx->r1 = SIGNED(ctx->r14) < 0X140 ? 1 : 0;
    // 0x802229D0: bnel        $at, $zero, L_802229E0
    if (ctx->r1 != 0) {
        // 0x802229D4: lh          $t8, 0xC($a0)
        ctx->r24 = MEM_H(ctx->r4, 0XC);
            goto L_802229E0;
    }
    goto skip_2;
    // 0x802229D4: lh          $t8, 0xC($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XC);
    skip_2:
    // 0x802229D8: sh          $t7, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r15;
    // 0x802229DC: lh          $t8, 0xC($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XC);
L_802229E0:
    // 0x802229E0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x802229E4: sh          $t9, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r25;
    // 0x802229E8: lh          $t2, 0x4($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X4);
    // 0x802229EC: bgezl       $t2, L_802229FC
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802229F0: lh          $t3, 0xE($a0)
        ctx->r11 = MEM_H(ctx->r4, 0XE);
            goto L_802229FC;
    }
    goto skip_3;
    // 0x802229F0: lh          $t3, 0xE($a0)
    ctx->r11 = MEM_H(ctx->r4, 0XE);
    skip_3:
    // 0x802229F4: sh          $zero, 0x4($a0)
    MEM_H(0X4, ctx->r4) = 0;
    // 0x802229F8: lh          $t3, 0xE($a0)
    ctx->r11 = MEM_H(ctx->r4, 0XE);
L_802229FC:
    // 0x802229FC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80222A00: sh          $t4, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r12;
    // 0x80222A04: lh          $a1, 0x6($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X6);
    // 0x80222A08: slti        $at, $a1, 0xF0
    ctx->r1 = SIGNED(ctx->r5) < 0XF0 ? 1 : 0;
    // 0x80222A0C: bnel        $at, $zero, L_80222A20
    if (ctx->r1 != 0) {
        // 0x80222A10: lh          $v0, 0x0($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X0);
            goto L_80222A20;
    }
    goto skip_4;
    // 0x80222A10: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    skip_4:
    // 0x80222A14: sh          $t5, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r13;
    // 0x80222A18: lh          $a1, 0x6($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X6);
    // 0x80222A1C: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
L_80222A20:
    // 0x80222A20: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x80222A24: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80222A28: sh          $t0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r8;
    // 0x80222A2C: subu        $a2, $t6, $v0
    ctx->r6 = SUB32(ctx->r14, ctx->r2);
    // 0x80222A30: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x80222A34: sra         $t9, $a2, 1
    ctx->r25 = S32(SIGNED(ctx->r6) >> 1);
    // 0x80222A38: sh          $t7, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r15;
    // 0x80222A3C: addu        $t4, $v0, $t9
    ctx->r12 = ADD32(ctx->r2, ctx->r25);
    // 0x80222A40: subu        $a3, $a1, $v1
    ctx->r7 = SUB32(ctx->r5, ctx->r3);
    // 0x80222A44: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80222A48: sra         $t7, $a3, 1
    ctx->r15 = S32(SIGNED(ctx->r7) >> 1);
    // 0x80222A4C: subu        $t6, $t1, $v1
    ctx->r14 = SUB32(ctx->r9, ctx->r3);
    // 0x80222A50: lh          $t4, 0x8($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X8);
    // 0x80222A54: subu        $t2, $t6, $t7
    ctx->r10 = SUB32(ctx->r14, ctx->r15);
    // 0x80222A58: sll         $t8, $a3, 1
    ctx->r24 = S32(ctx->r7 << 1);
    // 0x80222A5C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80222A60: sh          $t8, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r24;
    // 0x80222A64: sh          $zero, 0x16($a0)
    MEM_H(0X16, ctx->r4) = 0;
    // 0x80222A68: sh          $t5, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r13;
    // 0x80222A6C: sh          $t3, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r11;
    // 0x80222A70: sh          $t0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r8;
    // 0x80222A74: sh          $zero, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = 0;
    // 0x80222A78: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80222A7C: sh          $t4, 0x439C($at)
    MEM_H(0X439C, ctx->r1) = ctx->r12;
    // 0x80222A80: lh          $t5, 0xA($a0)
    ctx->r13 = MEM_H(ctx->r4, 0XA);
    // 0x80222A84: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80222A88: sh          $t5, 0x439E($at)
    MEM_H(0X439E, ctx->r1) = ctx->r13;
    // 0x80222A8C: lh          $t6, 0xC($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XC);
    // 0x80222A90: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80222A94: sh          $t6, 0x43A0($at)
    MEM_H(0X43A0, ctx->r1) = ctx->r14;
    // 0x80222A98: lh          $t7, 0xE($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XE);
    // 0x80222A9C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80222AA0: jr          $ra
    // 0x80222AA4: sh          $t7, 0x43A2($at)
    MEM_H(0X43A2, ctx->r1) = ctx->r15;
    return;
    // 0x80222AA4: sh          $t7, 0x43A2($at)
    MEM_H(0X43A2, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_8022970C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022970C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80229710: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80229714: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80229718: swc1        $f2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f2.u32l;
    // 0x8022971C: swc1        $f2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f2.u32l;
    // 0x80229720: swc1        $f2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f2.u32l;
    // 0x80229724: swc1        $f2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f2.u32l;
    // 0x80229728: swc1        $f2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f2.u32l;
    // 0x8022972C: swc1        $f2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f2.u32l;
    // 0x80229730: swc1        $f2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f2.u32l;
    // 0x80229734: swc1        $f2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f2.u32l;
    // 0x80229738: swc1        $f2, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f2.u32l;
    // 0x8022973C: swc1        $f2, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f2.u32l;
    // 0x80229740: swc1        $f2, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f2.u32l;
    // 0x80229744: swc1        $f2, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f2.u32l;
    // 0x80229748: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x8022974C: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x80229750: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x80229754: jr          $ra
    // 0x80229758: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x80229758: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_8023169C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023169C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802316A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802316A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802316A8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802316AC: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x802316B0: addiu       $a2, $a2, 0xC90
    ctx->r6 = ADD32(ctx->r6, 0XC90);
    // 0x802316B4: addiu       $a1, $a1, 0xCB0
    ctx->r5 = ADD32(ctx->r5, 0XCB0);
    // 0x802316B8: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    // 0x802316BC: jal         0x8023E6B0
    // 0x802316C0: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_8023E6B0(rdram, ctx);
        goto after_0;
    // 0x802316C0: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_0:
    // 0x802316C4: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802316C8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802316CC: addiu       $a1, $a1, 0xC28
    ctx->r5 = ADD32(ctx->r5, 0XC28);
    // 0x802316D0: addiu       $a0, $a0, 0xC30
    ctx->r4 = ADD32(ctx->r4, 0XC30);
    // 0x802316D4: jal         0x802371E0
    // 0x802316D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802371E0(rdram, ctx);
        goto after_1;
    // 0x802316D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x802316DC: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x802316E0: addiu       $t6, $t6, -0x54A0
    ctx->r14 = ADD32(ctx->r14, -0X54A0);
    // 0x802316E4: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802316E8: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x802316EC: addiu       $t7, $zero, 0xFA
    ctx->r15 = ADD32(0, 0XFA);
    // 0x802316F0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802316F4: addiu       $a2, $a2, 0x1584
    ctx->r6 = ADD32(ctx->r6, 0X1584);
    // 0x802316F8: addiu       $a0, $a0, 0xEB8
    ctx->r4 = ADD32(ctx->r4, 0XEB8);
    // 0x802316FC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80231700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80231704: jal         0x80237210
    // 0x80231708: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80237210(rdram, ctx);
        goto after_2;
    // 0x80231708: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x8023170C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80231710: jal         0x80237360
    // 0x80231714: addiu       $a0, $a0, 0xEB8
    ctx->r4 = ADD32(ctx->r4, 0XEB8);
    func_80237360(rdram, ctx);
        goto after_3;
    // 0x80231714: addiu       $a0, $a0, 0xEB8
    ctx->r4 = ADD32(ctx->r4, 0XEB8);
    after_3:
    // 0x80231718: jal         0x80230FF8
    // 0x8023171C: nop

    func_80230FF8(rdram, ctx);
        goto after_4;
    // 0x8023171C: nop

    after_4:
    // 0x80231720: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80231724: addiu       $t8, $t8, 0xB60
    ctx->r24 = ADD32(ctx->r24, 0XB60);
    // 0x80231728: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023172C: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x80231730: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x80231734: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80231738: addiu       $a2, $a2, 0x1630
    ctx->r6 = ADD32(ctx->r6, 0X1630);
    // 0x8023173C: addiu       $a0, $a0, 0xD08
    ctx->r4 = ADD32(ctx->r4, 0XD08);
    // 0x80231740: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80231744: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80231748: jal         0x80237210
    // 0x8023174C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    func_80237210(rdram, ctx);
        goto after_5;
    // 0x8023174C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x80231750: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x80231754: lw          $t0, 0xC0C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0XC0C);
    // 0x80231758: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023175C: bnel        $t0, $zero, L_80231770
    if (ctx->r8 != 0) {
        // 0x80231760: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80231770;
    }
    goto skip_0;
    // 0x80231760: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    skip_0:
    // 0x80231764: jal         0x80237360
    // 0x80231768: addiu       $a0, $a0, 0xD08
    ctx->r4 = ADD32(ctx->r4, 0XD08);
    func_80237360(rdram, ctx);
        goto after_6;
    // 0x80231768: addiu       $a0, $a0, 0xD08
    ctx->r4 = ADD32(ctx->r4, 0XD08);
    after_6:
    // 0x8023176C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80231770:
    // 0x80231770: jal         0x8023E840
    // 0x80231774: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8023E840(rdram, ctx);
        goto after_7;
    // 0x80231774: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
L_80231778:
    // 0x80231778: b           L_80231778
    pause_self(rdram);
    // 0x8023177C: nop

    // 0x80231780: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80231784: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80231788: jr          $ra
    // 0x8023178C: nop

    return;
    // 0x8023178C: nop

;}
RECOMP_FUNC void func_8022A614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A614: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022A618: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022A61C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022A620: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022A624: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022A628: lwc1        $f6, 0x30($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X30);
    // 0x8022A62C: lwc1        $f4, 0x30($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X30);
    // 0x8022A630: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8022A634: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8022A638: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8022A63C: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x8022A640: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x8022A644: lwc1        $f16, 0x34($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X34);
    // 0x8022A648: lwc1        $f10, 0x34($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X34);
    // 0x8022A64C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8022A650: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x8022A654: lwc1        $f6, 0x38($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X38);
    // 0x8022A658: lwc1        $f4, 0x38($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X38);
    // 0x8022A65C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8022A660: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8022A664: jal         0x80234D30
    // 0x8022A668: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    func_80234D30(rdram, ctx);
        goto after_0;
    // 0x8022A668: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8022A66C: beql        $v0, $zero, L_8022A770
    if (ctx->r2 == 0) {
        // 0x8022A670: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8022A770;
    }
    goto skip_0;
    // 0x8022A670: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x8022A674: lwc1        $f10, 0x20($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X20);
    // 0x8022A678: addiu       $s2, $sp, 0x2C
    ctx->r18 = ADD32(ctx->r29, 0X2C);
    // 0x8022A67C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8022A680: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x8022A684: lwc1        $f16, 0x24($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X24);
    // 0x8022A688: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x8022A68C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x8022A690: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x8022A694: lwc1        $f18, 0x28($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X28);
    // 0x8022A698: jal         0x80234C78
    // 0x8022A69C: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    func_80234C78(rdram, ctx);
        goto after_1;
    // 0x8022A69C: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x8022A6A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8022A6A4: jal         0x80234D30
    // 0x8022A6A8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80234D30(rdram, ctx);
        goto after_2;
    // 0x8022A6A8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x8022A6AC: bne         $v0, $zero, L_8022A6D4
    if (ctx->r2 != 0) {
        // 0x8022A6B0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8022A6D4;
    }
    // 0x8022A6B0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8022A6B4: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8022A6B8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8022A6BC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8022A6C0: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x8022A6C4: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8022A6C8: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x8022A6CC: jal         0x80234D30
    // 0x8022A6D0: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    func_80234D30(rdram, ctx);
        goto after_3;
    // 0x8022A6D0: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    after_3:
L_8022A6D4:
    // 0x8022A6D4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8022A6D8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8022A6DC: jal         0x80234C78
    // 0x8022A6E0: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    func_80234C78(rdram, ctx);
        goto after_4;
    // 0x8022A6E0: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_4:
    // 0x8022A6E4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8022A6E8: jal         0x80234D30
    // 0x8022A6EC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80234D30(rdram, ctx);
        goto after_5;
    // 0x8022A6EC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_5:
    // 0x8022A6F0: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8022A6F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8022A6F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022A6FC: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x8022A700: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8022A704: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    // 0x8022A708: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8022A70C: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x8022A710: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8022A714: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    // 0x8022A718: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8022A71C: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    // 0x8022A720: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8022A724: swc1        $f8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f8.u32l;
    // 0x8022A728: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8022A72C: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x8022A730: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8022A734: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8022A738: swc1        $f16, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f16.u32l;
    // 0x8022A73C: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8022A740: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
    // 0x8022A744: lwc1        $f4, 0x30($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X30);
    // 0x8022A748: swc1        $f4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f4.u32l;
    // 0x8022A74C: lwc1        $f6, 0x34($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X34);
    // 0x8022A750: swc1        $f6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f6.u32l;
    // 0x8022A754: lwc1        $f8, 0x38($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X38);
    // 0x8022A758: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x8022A75C: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x8022A760: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x8022A764: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    // 0x8022A768: swc1        $f8, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f8.u32l;
    // 0x8022A76C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8022A770:
    // 0x8022A770: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022A774: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A778: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022A77C: jr          $ra
    // 0x8022A780: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8022A780: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80201448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80201448: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8020144C: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x80201450: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x80201454: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201458: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8020145C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201460: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80201464: bne         $at, $zero, L_8020149C
    if (ctx->r1 != 0) {
        // 0x80201468: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_8020149C;
    }
    // 0x80201468: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x8020146C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201470: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80201474: addiu       $a1, $a1, 0x1CE8
    ctx->r5 = ADD32(ctx->r5, 0X1CE8);
    // 0x80201478: addiu       $a0, $a0, 0x1CD0
    ctx->r4 = ADD32(ctx->r4, 0X1CD0);
    // 0x8020147C: addiu       $a2, $zero, 0x115
    ctx->r6 = ADD32(0, 0X115);
    // 0x80201480: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80201484: jal         0x80231C9C
    // 0x80201488: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    func_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80201488: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    after_0:
    // 0x8020148C: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80201490: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x80201494: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80201498: lbu         $a3, 0x23($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X23);
L_8020149C:
    // 0x8020149C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802014A0: beq         $at, $zero, L_8020152C
    if (ctx->r1 == 0) {
        // 0x802014A4: lui         $a2, 0x8025
        ctx->r6 = S32(0X8025 << 16);
            goto L_8020152C;
    }
    // 0x802014A4: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x802014A8: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x802014AC: subu        $v0, $v0, $a3
    ctx->r2 = SUB32(ctx->r2, ctx->r7);
    // 0x802014B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802014B4: addiu       $a2, $a2, 0x6DE4
    ctx->r6 = ADD32(ctx->r6, 0X6DE4);
    // 0x802014B8: subu        $v0, $v0, $a3
    ctx->r2 = SUB32(ctx->r2, ctx->r7);
    // 0x802014BC: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x802014C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802014C4: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x802014C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802014CC: addu        $a1, $v1, $v0
    ctx->r5 = ADD32(ctx->r3, ctx->r2);
    // 0x802014D0: lw          $t6, 0xA0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XA0);
    // 0x802014D4: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x802014D8: beq         $t6, $at, L_80201524
    if (ctx->r14 == ctx->r1) {
        // 0x802014DC: nop
    
            goto L_80201524;
    }
    // 0x802014DC: nop

    // 0x802014E0: lbu         $a0, 0xAD($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0XAD);
    // 0x802014E4: jal         0x80203654
    // 0x802014E8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80203654(rdram, ctx);
        goto after_1;
    // 0x802014E8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x802014EC: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x802014F0: addiu       $a2, $a2, 0x6DE4
    ctx->r6 = ADD32(ctx->r6, 0X6DE4);
    // 0x802014F4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x802014F8: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x802014FC: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x80201500: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80201504: sw          $zero, 0xA0($t8)
    MEM_W(0XA0, ctx->r24) = 0;
    // 0x80201508: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x8020150C: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x80201510: sb          $t9, 0xAD($t1)
    MEM_B(0XAD, ctx->r9) = ctx->r25;
    // 0x80201514: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x80201518: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x8020151C: sb          $zero, 0xB0($t3)
    MEM_B(0XB0, ctx->r11) = 0;
    // 0x80201520: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
L_80201524:
    // 0x80201524: jal         0x802012BC
    // 0x80201528: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    func_802012BC(rdram, ctx);
        goto after_2;
    // 0x80201528: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    after_2:
L_8020152C:
    // 0x8020152C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201530: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80201534: jr          $ra
    // 0x80201538: nop

    return;
    // 0x80201538: nop

;}
RECOMP_FUNC void func_8023D7A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D7A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023D7A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023D7A8: jal         0x80241760
    // 0x8023D7AC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x8023D7AC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8023D7B0: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8023D7B4: lw          $t7, 0x1774($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1774);
    // 0x8023D7B8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8023D7BC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023D7C0: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x8023D7C4: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8023D7C8: lw          $t8, 0x1774($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1774);
    // 0x8023D7CC: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x8023D7D0: ori         $t0, $t9, 0x10
    ctx->r8 = ctx->r25 | 0X10;
    // 0x8023D7D4: sh          $t0, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r8;
    // 0x8023D7D8: jal         0x80241780
    // 0x8023D7DC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_80241780(rdram, ctx);
        goto after_1;
    // 0x8023D7DC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x8023D7E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023D7E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023D7E8: jr          $ra
    // 0x8023D7EC: nop

    return;
    // 0x8023D7EC: nop

;}
RECOMP_FUNC void func_802080BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802080BC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802080C0: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x802080C4: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x802080C8: lwc1        $f6, 0x34($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X34);
    // 0x802080CC: sub.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x802080D0: lwc1        $f8, 0x10($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10);
    // 0x802080D4: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x802080D8: lwc1        $f4, 0x30($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X30);
    // 0x802080DC: sub.s       $f2, $f14, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x802080E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802080E4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802080E8: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802080EC: lwc1        $f8, 0x34($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X34);
    // 0x802080F0: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802080F4: lwc1        $f8, 0x38($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X38);
    // 0x802080F8: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802080FC: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80208100: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80208104: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80208108: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x8020810C: nop

    // 0x80208110: bc1f        L_80208120
    if (!c1cs) {
        // 0x80208114: nop
    
            goto L_80208120;
    }
    // 0x80208114: nop

    // 0x80208118: jr          $ra
    // 0x8020811C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8020811C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80208120:
    // 0x80208120: jr          $ra
    // 0x80208124: nop

    return;
    // 0x80208124: nop

;}
RECOMP_FUNC void func_80227CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227CAC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80227CB0: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80227CB4: lw          $t6, 0x520C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X520C);
    // 0x80227CB8: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80227CBC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80227CC0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80227CC4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80227CC8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80227CCC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80227CD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80227CD4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80227CD8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80227CDC: jal         0x80223840
    // 0x80227CE0: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227CE0: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_0:
    // 0x80227CE4: addiu       $s3, $sp, 0x3C
    ctx->r19 = ADD32(ctx->r29, 0X3C);
    // 0x80227CE8: addiu       $s4, $sp, 0x38
    ctx->r20 = ADD32(ctx->r29, 0X38);
    // 0x80227CEC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80227CF0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80227CF4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80227CF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227CFC: jal         0x8022393C
    // 0x80227D00: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_1;
    // 0x80227D00: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80227D04: beq         $v0, $zero, L_80227D40
    if (ctx->r2 == 0) {
        // 0x80227D08: lui         $s0, 0x434F
        ctx->r16 = S32(0X434F << 16);
            goto L_80227D40;
    }
    // 0x80227D08: lui         $s0, 0x434F
    ctx->r16 = S32(0X434F << 16);
    // 0x80227D0C: ori         $s0, $s0, 0x4D4D
    ctx->r16 = ctx->r16 | 0X4D4D;
L_80227D10:
    // 0x80227D10: bnel        $v0, $s0, L_80227D28
    if (ctx->r2 != ctx->r16) {
        // 0x80227D14: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80227D28;
    }
    goto skip_0;
    // 0x80227D14: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
    // 0x80227D18: jal         0x8022573C
    // 0x80227D1C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_8022573C(rdram, ctx);
        goto after_2;
    // 0x80227D1C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_2:
    // 0x80227D20: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80227D24: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80227D28:
    // 0x80227D28: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80227D2C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80227D30: jal         0x8022393C
    // 0x80227D34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_3;
    // 0x80227D34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x80227D38: bne         $v0, $zero, L_80227D10
    if (ctx->r2 != 0) {
        // 0x80227D3C: nop
    
            goto L_80227D10;
    }
    // 0x80227D3C: nop

L_80227D40:
    // 0x80227D40: jal         0x802238F0
    // 0x80227D44: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_802238F0(rdram, ctx);
        goto after_4;
    // 0x80227D44: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x80227D48: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80227D4C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80227D50: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80227D54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80227D58: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80227D5C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80227D60: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80227D64: jr          $ra
    // 0x80227D68: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80227D68: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8024A234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A234: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8024A238: bne         $a1, $at, L_8024A244
    if (ctx->r5 != ctx->r1) {
        // 0x8024A23C: nop
    
            goto L_8024A244;
    }
    // 0x8024A23C: nop

    // 0x8024A240: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
L_8024A244:
    // 0x8024A244: jr          $ra
    // 0x8024A248: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8024A248: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_802371AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802371AC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802371B0: addiu       $v0, $v0, 0x910
    ctx->r2 = ADD32(ctx->r2, 0X910);
    // 0x802371B4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x802371B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802371BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802371C0: bnel        $t6, $zero, L_802371D4
    if (ctx->r14 != 0) {
        // 0x802371C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802371D4;
    }
    goto skip_0;
    // 0x802371C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802371C8: jal         0x80237B10
    // 0x802371CC: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    func_80237B10(rdram, ctx);
        goto after_0;
    // 0x802371CC: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    after_0:
    // 0x802371D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802371D4:
    // 0x802371D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802371D8: jr          $ra
    // 0x802371DC: nop

    return;
    // 0x802371DC: nop

;}
RECOMP_FUNC void func_8022CB48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022CB48: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022CB4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022CB50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022CB54: jal         0x802070D4
    // 0x8022CB58: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_802070D4(rdram, ctx);
        goto after_0;
    // 0x8022CB58: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x8022CB5C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8022CB60: lw          $t6, -0x78C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X78C0);
    // 0x8022CB64: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8022CB68: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8022CB6C: bnel        $t6, $zero, L_8022CE58
    if (ctx->r14 != 0) {
        // 0x8022CB70: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8022CE58;
    }
    goto skip_0;
    // 0x8022CB70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8022CB74: lbu         $a2, -0x78D7($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X78D7);
    // 0x8022CB78: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8022CB7C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022CB80: beq         $a2, $zero, L_8022CBA0
    if (ctx->r6 == 0) {
        // 0x8022CB84: sw          $t7, -0x78BC($at)
        MEM_W(-0X78BC, ctx->r1) = ctx->r15;
            goto L_8022CBA0;
    }
    // 0x8022CB84: sw          $t7, -0x78BC($at)
    MEM_W(-0X78BC, ctx->r1) = ctx->r15;
    // 0x8022CB88: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8022CB8C: addiu       $a0, $a0, -0x78D0
    ctx->r4 = ADD32(ctx->r4, -0X78D0);
    // 0x8022CB90: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x8022CB94: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8022CB98: b           L_8022CBAC
    // 0x8022CB9C: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
        goto L_8022CBAC;
    // 0x8022CB9C: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
L_8022CBA0:
    // 0x8022CBA0: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8022CBA4: addiu       $a0, $a0, -0x78D0
    ctx->r4 = ADD32(ctx->r4, -0X78D0);
    // 0x8022CBA8: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
L_8022CBAC:
    // 0x8022CBAC: lbu         $a3, -0x78D6($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X78D6);
    // 0x8022CBB0: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8022CBB4: addiu       $v1, $v1, -0x78D1
    ctx->r3 = ADD32(ctx->r3, -0X78D1);
    // 0x8022CBB8: beq         $a3, $zero, L_8022CBD8
    if (ctx->r7 == 0) {
        // 0x8022CBBC: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_8022CBD8;
    }
    // 0x8022CBBC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8022CBC0: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8022CBC4: addiu       $v1, $v1, -0x78D1
    ctx->r3 = ADD32(ctx->r3, -0X78D1);
    // 0x8022CBC8: lbu         $t0, 0x0($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X0);
    // 0x8022CBCC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8022CBD0: b           L_8022CBDC
    // 0x8022CBD4: sb          $t1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r9;
        goto L_8022CBDC;
    // 0x8022CBD4: sb          $t1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r9;
L_8022CBD8:
    // 0x8022CBD8: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
L_8022CBDC:
    // 0x8022CBDC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022CBE0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022CBE4: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x8022CBE8: bnel        $at, $zero, L_8022CC0C
    if (ctx->r1 != 0) {
        // 0x8022CBEC: lbu         $t2, 0x0($v1)
        ctx->r10 = MEM_BU(ctx->r3, 0X0);
            goto L_8022CC0C;
    }
    goto skip_1;
    // 0x8022CBEC: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    skip_1:
    // 0x8022CBF0: jal         0x80231A24
    // 0x8022CBF4: addiu       $a0, $a0, 0x44AC
    ctx->r4 = ADD32(ctx->r4, 0X44AC);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022CBF4: addiu       $a0, $a0, 0x44AC
    ctx->r4 = ADD32(ctx->r4, 0X44AC);
    after_1:
    // 0x8022CBF8: jal         0x8022C7C8
    // 0x8022CBFC: nop

    func_8022C7C8(rdram, ctx);
        goto after_2;
    // 0x8022CBFC: nop

    after_2:
    // 0x8022CC00: b           L_8022CE58
    // 0x8022CC04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8022CE58;
    // 0x8022CC04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CC08: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
L_8022CC0C:
    // 0x8022CC0C: addiu       $t3, $v0, 0x32
    ctx->r11 = ADD32(ctx->r2, 0X32);
    // 0x8022CC10: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022CC14: slt         $at, $t3, $t2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8022CC18: beq         $at, $zero, L_8022CC54
    if (ctx->r1 == 0) {
        // 0x8022CC1C: addiu       $a0, $a0, 0x44D4
        ctx->r4 = ADD32(ctx->r4, 0X44D4);
            goto L_8022CC54;
    }
    // 0x8022CC1C: addiu       $a0, $a0, 0x44D4
    ctx->r4 = ADD32(ctx->r4, 0X44D4);
    // 0x8022CC20: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x8022CC24: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8022CC28: jal         0x80231A24
    // 0x8022CC2C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x8022CC2C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_3:
    // 0x8022CC30: jal         0x8022D3F0
    // 0x8022CC34: nop

    func_8022D3F0(rdram, ctx);
        goto after_4;
    // 0x8022CC34: nop

    after_4:
    // 0x8022CC38: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8022CC3C: addiu       $a0, $a0, 0x1258
    ctx->r4 = ADD32(ctx->r4, 0X1258);
    // 0x8022CC40: addiu       $a1, $zero, 0x29C
    ctx->r5 = ADD32(0, 0X29C);
    // 0x8022CC44: jal         0x80236B80
    // 0x8022CC48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80236B80(rdram, ctx);
        goto after_5;
    // 0x8022CC48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8022CC4C: b           L_8022CE58
    // 0x8022CC50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8022CE58;
    // 0x8022CC50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8022CC54:
    // 0x8022CC54: addiu       $at, $zero, 0x61
    ctx->r1 = ADD32(0, 0X61);
    // 0x8022CC58: bne         $a2, $at, L_8022CC74
    if (ctx->r6 != ctx->r1) {
        // 0x8022CC5C: lui         $v0, 0x8028
        ctx->r2 = S32(0X8028 << 16);
            goto L_8022CC74;
    }
    // 0x8022CC5C: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8022CC60: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022CC64: jal         0x80231A24
    // 0x8022CC68: addiu       $a0, $a0, 0x4500
    ctx->r4 = ADD32(ctx->r4, 0X4500);
    func_80231A24(rdram, ctx);
        goto after_6;
    // 0x8022CC68: addiu       $a0, $a0, 0x4500
    ctx->r4 = ADD32(ctx->r4, 0X4500);
    after_6:
    // 0x8022CC6C: b           L_8022CE58
    // 0x8022CC70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8022CE58;
    // 0x8022CC70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8022CC74:
    // 0x8022CC74: addiu       $v0, $v0, -0x78D8
    ctx->r2 = ADD32(ctx->r2, -0X78D8);
    // 0x8022CC78: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x8022CC7C: beq         $t4, $zero, L_8022CCA0
    if (ctx->r12 == 0) {
        // 0x8022CC80: nop
    
            goto L_8022CCA0;
    }
    // 0x8022CC80: nop

    // 0x8022CC84: jal         0x8022D4EC
    // 0x8022CC88: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    func_8022D4EC(rdram, ctx);
        goto after_7;
    // 0x8022CC88: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    after_7:
    // 0x8022CC8C: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x8022CC90: lbu         $t5, -0x78D2($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X78D2);
    // 0x8022CC94: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022CC98: xori        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 ^ 0X1;
    // 0x8022CC9C: sb          $t6, -0x78D2($at)
    MEM_B(-0X78D2, ctx->r1) = ctx->r14;
L_8022CCA0:
    // 0x8022CCA0: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8022CCA4: addiu       $a0, $a0, 0x1290
    ctx->r4 = ADD32(ctx->r4, 0X1290);
    // 0x8022CCA8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8022CCAC: jal         0x802374B0
    // 0x8022CCB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802374B0(rdram, ctx);
        goto after_8;
    // 0x8022CCB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x8022CCB4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022CCB8: beq         $v0, $at, L_8022CD5C
    if (ctx->r2 == ctx->r1) {
        // 0x8022CCBC: lui         $s0, 0x8028
        ctx->r16 = S32(0X8028 << 16);
            goto L_8022CD5C;
    }
    // 0x8022CCBC: lui         $s0, 0x8028
    ctx->r16 = S32(0X8028 << 16);
    // 0x8022CCC0: addiu       $s0, $s0, -0x78D3
    ctx->r16 = ADD32(ctx->r16, -0X78D3);
    // 0x8022CCC4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
L_8022CCC8:
    // 0x8022CCC8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8022CCCC: bne         $t7, $zero, L_8022CCE4
    if (ctx->r15 != 0) {
        // 0x8022CCD0: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_8022CCE4;
    }
    // 0x8022CCD0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022CCD4: jal         0x80231A24
    // 0x8022CCD8: addiu       $a0, $a0, 0x4528
    ctx->r4 = ADD32(ctx->r4, 0X4528);
    func_80231A24(rdram, ctx);
        goto after_9;
    // 0x8022CCD8: addiu       $a0, $a0, 0x4528
    ctx->r4 = ADD32(ctx->r4, 0X4528);
    after_9:
    // 0x8022CCDC: b           L_8022CD5C
    // 0x8022CCE0: nop

        goto L_8022CD5C;
    // 0x8022CCE0: nop

L_8022CCE4:
    // 0x8022CCE4: lw          $v0, 0x10($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X10);
    // 0x8022CCE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8022CCEC: bnel        $v0, $at, L_8022CD18
    if (ctx->r2 != ctx->r1) {
        // 0x8022CCF0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8022CD18;
    }
    goto skip_2;
    // 0x8022CCF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_2:
    // 0x8022CCF4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CCF8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022CCFC: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x8022CD00: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8022CD04: sw          $t8, -0x78E0($at)
    MEM_W(-0X78E0, ctx->r1) = ctx->r24;
    // 0x8022CD08: xori        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 ^ 0X1;
    // 0x8022CD0C: b           L_8022CD3C
    // 0x8022CD10: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
        goto L_8022CD3C;
    // 0x8022CD10: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
    // 0x8022CD14: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8022CD18:
    // 0x8022CD18: bne         $v0, $at, L_8022CD30
    if (ctx->r2 != ctx->r1) {
        // 0x8022CD1C: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_8022CD30;
    }
    // 0x8022CD1C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022CD20: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8022CD24: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022CD28: b           L_8022CD3C
    // 0x8022CD2C: sw          $t1, -0x78E8($at)
    MEM_W(-0X78E8, ctx->r1) = ctx->r9;
        goto L_8022CD3C;
    // 0x8022CD2C: sw          $t1, -0x78E8($at)
    MEM_W(-0X78E8, ctx->r1) = ctx->r9;
L_8022CD30:
    // 0x8022CD30: addiu       $a0, $a0, 0x454C
    ctx->r4 = ADD32(ctx->r4, 0X454C);
    // 0x8022CD34: jal         0x80231A24
    // 0x8022CD38: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_80231A24(rdram, ctx);
        goto after_10;
    // 0x8022CD38: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_10:
L_8022CD3C:
    // 0x8022CD3C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8022CD40: addiu       $a0, $a0, 0x1290
    ctx->r4 = ADD32(ctx->r4, 0X1290);
    // 0x8022CD44: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8022CD48: jal         0x802374B0
    // 0x8022CD4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802374B0(rdram, ctx);
        goto after_11;
    // 0x8022CD4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x8022CD50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022CD54: bnel        $v0, $at, L_8022CCC8
    if (ctx->r2 != ctx->r1) {
        // 0x8022CD58: lw          $t7, 0x34($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X34);
            goto L_8022CCC8;
    }
    goto skip_3;
    // 0x8022CD58: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    skip_3:
L_8022CD5C:
    // 0x8022CD5C: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x8022CD60: lw          $t2, -0x78E8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X78E8);
    // 0x8022CD64: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x8022CD68: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8022CD6C: beq         $t2, $zero, L_8022CE00
    if (ctx->r10 == 0) {
        // 0x8022CD70: nop
    
            goto L_8022CE00;
    }
    // 0x8022CD70: nop

    // 0x8022CD74: lbu         $t3, -0x78D7($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X78D7);
    // 0x8022CD78: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
    // 0x8022CD7C: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x8022CD80: bne         $t3, $at, L_8022CDF0
    if (ctx->r11 != ctx->r1) {
        // 0x8022CD84: nop
    
            goto L_8022CDF0;
    }
    // 0x8022CD84: nop

    // 0x8022CD88: lbu         $t4, -0x78D4($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X78D4);
    // 0x8022CD8C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022CD90: beq         $t4, $zero, L_8022CDA0
    if (ctx->r12 == 0) {
        // 0x8022CD94: nop
    
            goto L_8022CDA0;
    }
    // 0x8022CD94: nop

    // 0x8022CD98: jal         0x80231A24
    // 0x8022CD9C: addiu       $a0, $a0, 0x4578
    ctx->r4 = ADD32(ctx->r4, 0X4578);
    func_80231A24(rdram, ctx);
        goto after_12;
    // 0x8022CD9C: addiu       $a0, $a0, 0x4578
    ctx->r4 = ADD32(ctx->r4, 0X4578);
    after_12:
L_8022CDA0:
    // 0x8022CDA0: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8022CDA4: addiu       $v0, $v0, -0x78D5
    ctx->r2 = ADD32(ctx->r2, -0X78D5);
    // 0x8022CDA8: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x8022CDAC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8022CDB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022CDB4: beq         $t5, $zero, L_8022CDD8
    if (ctx->r13 == 0) {
        // 0x8022CDB8: addiu       $a1, $zero, 0x31
        ctx->r5 = ADD32(0, 0X31);
            goto L_8022CDD8;
    }
    // 0x8022CDB8: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x8022CDBC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022CDC0: jal         0x80231A24
    // 0x8022CDC4: addiu       $a0, $a0, 0x4598
    ctx->r4 = ADD32(ctx->r4, 0X4598);
    func_80231A24(rdram, ctx);
        goto after_13;
    // 0x8022CDC4: addiu       $a0, $a0, 0x4598
    ctx->r4 = ADD32(ctx->r4, 0X4598);
    after_13:
    // 0x8022CDC8: jal         0x8022C7C8
    // 0x8022CDCC: nop

    func_8022C7C8(rdram, ctx);
        goto after_14;
    // 0x8022CDCC: nop

    after_14:
    // 0x8022CDD0: b           L_8022CE58
    // 0x8022CDD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8022CE58;
    // 0x8022CDD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8022CDD8:
    // 0x8022CDD8: jal         0x8022D560
    // 0x8022CDDC: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    func_8022D560(rdram, ctx);
        goto after_15;
    // 0x8022CDDC: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    after_15:
    // 0x8022CDE0: jal         0x8023E010
    // 0x8022CDE4: nop

    func_8023E010(rdram, ctx);
        goto after_16;
    // 0x8022CDE4: nop

    after_16:
    // 0x8022CDE8: b           L_8022CE24
    // 0x8022CDEC: nop

        goto L_8022CE24;
    // 0x8022CDEC: nop

L_8022CDF0:
    // 0x8022CDF0: jal         0x8022C620
    // 0x8022CDF4: nop

    func_8022C620(rdram, ctx);
        goto after_17;
    // 0x8022CDF4: nop

    after_17:
    // 0x8022CDF8: b           L_8022CE24
    // 0x8022CDFC: nop

        goto L_8022CE24;
    // 0x8022CDFC: nop

L_8022CE00:
    // 0x8022CE00: lbu         $t7, -0x78D2($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X78D2);
    // 0x8022CE04: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x8022CE08: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8022CE0C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8022CE10: lw          $t9, -0x78E0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X78E0);
    // 0x8022CE14: beq         $t9, $zero, L_8022CE24
    if (ctx->r25 == 0) {
        // 0x8022CE18: nop
    
            goto L_8022CE24;
    }
    // 0x8022CE18: nop

    // 0x8022CE1C: jal         0x8022C6A4
    // 0x8022CE20: nop

    func_8022C6A4(rdram, ctx);
        goto after_18;
    // 0x8022CE20: nop

    after_18:
L_8022CE24:
    // 0x8022CE24: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8022CE28: addiu       $a1, $a1, 0x1218
    ctx->r5 = ADD32(ctx->r5, 0X1218);
    // 0x8022CE2C: lw          $s0, 0x260($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X260);
    // 0x8022CE30: beq         $s0, $zero, L_8022CE54
    if (ctx->r16 == 0) {
        // 0x8022CE34: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_8022CE54;
    }
L_8022CE34:
    // 0x8022CE34: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8022CE38: addiu       $a1, $a1, 0x1218
    ctx->r5 = ADD32(ctx->r5, 0X1218);
    // 0x8022CE3C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8022CE40: jal         0x80236B80
    // 0x8022CE44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80236B80(rdram, ctx);
        goto after_19;
    // 0x8022CE44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_19:
    // 0x8022CE48: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8022CE4C: bne         $s0, $zero, L_8022CE34
    if (ctx->r16 != 0) {
        // 0x8022CE50: nop
    
            goto L_8022CE34;
    }
    // 0x8022CE50: nop

L_8022CE54:
    // 0x8022CE54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8022CE58:
    // 0x8022CE58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022CE5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8022CE60: jr          $ra
    // 0x8022CE64: nop

    return;
    // 0x8022CE64: nop

;}
RECOMP_FUNC void func_8021E18C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E18C: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x8021E190: addiu       $v1, $v1, -0x3A00
    ctx->r3 = ADD32(ctx->r3, -0X3A00);
    // 0x8021E194: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8021E198: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8021E19C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8021E1A0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8021E1A4: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8021E1A8: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x8021E1AC: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8021E1B0: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8021E1B4: jr          $ra
    // 0x8021E1B8: sb          $zero, 0x1($t9)
    MEM_B(0X1, ctx->r25) = 0;
    return;
    // 0x8021E1B8: sb          $zero, 0x1($t9)
    MEM_B(0X1, ctx->r25) = 0;
;}
RECOMP_FUNC void func_80248020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248020: mfc0        $v0, Status
    ctx->r2 = cop0_status_read(ctx);
    // 0x80248024: jr          $ra
    // 0x80248028: nop

    return;
    // 0x80248028: nop

;}
RECOMP_FUNC void func_80223E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223E48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80223E4C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80223E50: lw          $t6, 0x3524($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3524);
    // 0x80223E54: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80223E58: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80223E5C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80223E60: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80223E64: bne         $t6, $zero, L_80223E80
    if (ctx->r14 != 0) {
        // 0x80223E68: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_80223E80;
    }
    // 0x80223E68: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80223E6C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80223E70: jal         0x80231A24
    // 0x80223E74: addiu       $a0, $a0, 0x39A0
    ctx->r4 = ADD32(ctx->r4, 0X39A0);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80223E74: addiu       $a0, $a0, 0x39A0
    ctx->r4 = ADD32(ctx->r4, 0X39A0);
    after_0:
    // 0x80223E78: b           L_80223EEC
    // 0x80223E7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80223EEC;
    // 0x80223E7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80223E80:
    // 0x80223E80: lui         $s1, 0x8027
    ctx->r17 = S32(0X8027 << 16);
    // 0x80223E84: addiu       $s1, $s1, 0x5130
    ctx->r17 = ADD32(ctx->r17, 0X5130);
    // 0x80223E88: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80223E8C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80223E90: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
L_80223E94:
    // 0x80223E94: lbu         $t7, 0x18($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X18);
    // 0x80223E98: beql        $t7, $zero, L_80223EE0
    if (ctx->r15 == 0) {
        // 0x80223E9C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80223EE0;
    }
    goto skip_0;
    // 0x80223E9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x80223EA0: lbu         $t8, 0x0($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X0);
    // 0x80223EA4: bne         $s3, $t8, L_80223EC4
    if (ctx->r19 != ctx->r24) {
        // 0x80223EA8: nop
    
            goto L_80223EC4;
    }
    // 0x80223EA8: nop

    // 0x80223EAC: jal         0x80223F08
    // 0x80223EB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80223F08(rdram, ctx);
        goto after_1;
    // 0x80223EB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80223EB4: bnel        $v0, $zero, L_80223EE0
    if (ctx->r2 != 0) {
        // 0x80223EB8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80223EE0;
    }
    goto skip_1;
    // 0x80223EB8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x80223EBC: b           L_80223EEC
    // 0x80223EC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80223EEC;
    // 0x80223EC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80223EC4:
    // 0x80223EC4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80223EC8: addiu       $a0, $a0, 0x39D8
    ctx->r4 = ADD32(ctx->r4, 0X39D8);
    // 0x80223ECC: jal         0x80231A24
    // 0x80223ED0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x80223ED0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80223ED4: b           L_80223EEC
    // 0x80223ED8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80223EEC;
    // 0x80223ED8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80223EDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80223EE0:
    // 0x80223EE0: bne         $s0, $s2, L_80223E94
    if (ctx->r16 != ctx->r18) {
        // 0x80223EE4: addiu       $s1, $s1, 0x1C
        ctx->r17 = ADD32(ctx->r17, 0X1C);
            goto L_80223E94;
    }
    // 0x80223EE4: addiu       $s1, $s1, 0x1C
    ctx->r17 = ADD32(ctx->r17, 0X1C);
    // 0x80223EE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80223EEC:
    // 0x80223EEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80223EF0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80223EF4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80223EF8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80223EFC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80223F00: jr          $ra
    // 0x80223F04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80223F04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023D470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D470: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8023D474: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8023D478: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8023D47C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023D480: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023D484: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8023D488: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8023D48C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8023D490: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8023D494: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8023D498: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023D49C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023D4A0: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x8023D4A4: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8023D4A8: jal         0x80245AD0
    // 0x8023D4AC: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    func_80245AD0(rdram, ctx);
        goto after_0;
    // 0x8023D4AC: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    after_0:
    // 0x8023D4B0: lui         $fp, 0x8028
    ctx->r30 = S32(0X8028 << 16);
    // 0x8023D4B4: lui         $s3, 0x8028
    ctx->r19 = S32(0X8028 << 16);
    // 0x8023D4B8: addiu       $s3, $s3, 0x3970
    ctx->r19 = ADD32(ctx->r19, 0X3970);
    // 0x8023D4BC: addiu       $fp, $fp, 0x5EB1
    ctx->r30 = ADD32(ctx->r30, 0X5EB1);
    // 0x8023D4C0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8023D4C4: addiu       $s7, $sp, 0x54
    ctx->r23 = ADD32(ctx->r29, 0X54);
    // 0x8023D4C8: addiu       $s6, $sp, 0x67
    ctx->r22 = ADD32(ctx->r29, 0X67);
    // 0x8023D4CC: addiu       $s4, $sp, 0x68
    ctx->r20 = ADD32(ctx->r29, 0X68);
L_8023D4D0:
    // 0x8023D4D0: jal         0x8023D604
    // 0x8023D4D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8023D604(rdram, ctx);
        goto after_1;
    // 0x8023D4D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8023D4D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023D4DC: jal         0x802465B0
    // 0x8023D4E0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_802465B0(rdram, ctx);
        goto after_2;
    // 0x8023D4E0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x8023D4E4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8023D4E8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8023D4EC: jal         0x802374B0
    // 0x8023D4F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_3;
    // 0x8023D4F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8023D4F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8023D4F8: jal         0x802465B0
    // 0x8023D4FC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_802465B0(rdram, ctx);
        goto after_4;
    // 0x8023D4FC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_4:
    // 0x8023D500: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x8023D504: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8023D508: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8023D50C: jal         0x802374B0
    // 0x8023D510: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_5;
    // 0x8023D510: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8023D514: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8023D518: jal         0x8023D6E4
    // 0x8023D51C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_8023D6E4(rdram, ctx);
        goto after_6;
    // 0x8023D51C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_6:
    // 0x8023D520: lbu         $v1, 0x0($fp)
    ctx->r3 = MEM_BU(ctx->r30, 0X0);
    // 0x8023D524: addiu       $v0, $sp, 0x54
    ctx->r2 = ADD32(ctx->r29, 0X54);
    // 0x8023D528: blez        $v1, L_8023D55C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8023D52C: nop
    
            goto L_8023D55C;
    }
    // 0x8023D52C: nop

L_8023D530:
    // 0x8023D530: lbu         $t6, 0x2($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2);
    // 0x8023D534: nop

    // 0x8023D538: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8023D53C: bne         $t7, $zero, L_8023D54C
    if (ctx->r15 != 0) {
        // 0x8023D540: nop
    
            goto L_8023D54C;
    }
    // 0x8023D540: nop

    // 0x8023D544: b           L_8023D55C
    // 0x8023D548: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
        goto L_8023D55C;
    // 0x8023D548: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_8023D54C:
    // 0x8023D54C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8023D550: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023D554: bne         $at, $zero, L_8023D530
    if (ctx->r1 != 0) {
        // 0x8023D558: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8023D530;
    }
    // 0x8023D558: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_8023D55C:
    // 0x8023D55C: xor         $v0, $s0, $v1
    ctx->r2 = ctx->r16 ^ ctx->r3;
    // 0x8023D560: bne         $v0, $zero, L_8023D56C
    if (ctx->r2 != 0) {
        // 0x8023D564: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8023D56C;
    }
    // 0x8023D564: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8023D568: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8023D56C:
    // 0x8023D56C: bgtz        $s1, L_8023D4D0
    if (SIGNED(ctx->r17) > 0) {
        // 0x8023D570: nop
    
            goto L_8023D4D0;
    }
    // 0x8023D570: nop

    // 0x8023D574: blez        $v1, L_8023D5BC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8023D578: addiu       $v0, $sp, 0x54
        ctx->r2 = ADD32(ctx->r29, 0X54);
            goto L_8023D5BC;
    }
    // 0x8023D578: addiu       $v0, $sp, 0x54
    ctx->r2 = ADD32(ctx->r29, 0X54);
L_8023D57C:
    // 0x8023D57C: lbu         $t8, 0x3($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X3);
    // 0x8023D580: nop

    // 0x8023D584: bne         $t8, $zero, L_8023D5AC
    if (ctx->r24 != 0) {
        // 0x8023D588: nop
    
            goto L_8023D5AC;
    }
    // 0x8023D588: nop

    // 0x8023D58C: lbu         $t9, 0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2);
    // 0x8023D590: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8023D594: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8023D598: beq         $t0, $zero, L_8023D5AC
    if (ctx->r8 == 0) {
        // 0x8023D59C: sllv        $t2, $t1, $s0
        ctx->r10 = S32(ctx->r9 << (ctx->r16 & 31));
            goto L_8023D5AC;
    }
    // 0x8023D59C: sllv        $t2, $t1, $s0
    ctx->r10 = S32(ctx->r9 << (ctx->r16 & 31));
    // 0x8023D5A0: or          $s5, $s5, $t2
    ctx->r21 = ctx->r21 | ctx->r10;
    // 0x8023D5A4: andi        $t3, $s5, 0xFF
    ctx->r11 = ctx->r21 & 0XFF;
    // 0x8023D5A8: or          $s5, $t3, $zero
    ctx->r21 = ctx->r11 | 0;
L_8023D5AC:
    // 0x8023D5AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8023D5B0: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023D5B4: bne         $at, $zero, L_8023D57C
    if (ctx->r1 != 0) {
        // 0x8023D5B8: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8023D57C;
    }
    // 0x8023D5B8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_8023D5BC:
    // 0x8023D5BC: jal         0x80245B14
    // 0x8023D5C0: nop

    func_80245B14(rdram, ctx);
        goto after_7;
    // 0x8023D5C0: nop

    after_7:
    // 0x8023D5C4: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    // 0x8023D5C8: nop

    // 0x8023D5CC: sb          $s5, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r21;
    // 0x8023D5D0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8023D5D4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8023D5D8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8023D5DC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8023D5E0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8023D5E4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8023D5E8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023D5EC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023D5F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023D5F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023D5F8: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x8023D5FC: jr          $ra
    // 0x8023D600: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8023D600: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80201F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80201F14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201F18: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80201F1C: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80201F20: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x80201F24: lbu         $a3, 0x23($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X23);
    // 0x80201F28: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201F2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201F30: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201F34: bne         $at, $zero, L_80201F5C
    if (ctx->r1 != 0) {
        // 0x80201F38: addiu       $a0, $a0, 0x1F60
        ctx->r4 = ADD32(ctx->r4, 0X1F60);
            goto L_80201F5C;
    }
    // 0x80201F38: addiu       $a0, $a0, 0x1F60
    ctx->r4 = ADD32(ctx->r4, 0X1F60);
    // 0x80201F3C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80201F40: addiu       $a1, $a1, 0x1F78
    ctx->r5 = ADD32(ctx->r5, 0X1F78);
    // 0x80201F44: addiu       $a2, $zero, 0x20D
    ctx->r6 = ADD32(0, 0X20D);
    // 0x80201F48: jal         0x80231C9C
    // 0x80201F4C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80201F4C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80201F50: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80201F54: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x80201F58: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
L_80201F5C:
    // 0x80201F5C: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201F60: beq         $at, $zero, L_80201FA8
    if (ctx->r1 == 0) {
        // 0x80201F64: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80201FA8;
    }
    // 0x80201F64: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201F68: addiu       $a0, $a0, 0x1F80
    ctx->r4 = ADD32(ctx->r4, 0X1F80);
    // 0x80201F6C: jal         0x802011D0
    // 0x80201F70: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_802011D0(rdram, ctx);
        goto after_1;
    // 0x80201F70: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x80201F74: lbu         $t8, 0x23($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X23);
    // 0x80201F78: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80201F7C: lw          $t7, 0x6DE4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6DE4);
    // 0x80201F80: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80201F84: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80201F88: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80201F8C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80201F90: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80201F94: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80201F98: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80201F9C: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80201FA0: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80201FA4: sw          $t6, 0xA8($t0)
    MEM_W(0XA8, ctx->r8) = ctx->r14;
L_80201FA8:
    // 0x80201FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201FAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80201FB0: jr          $ra
    // 0x80201FB4: nop

    return;
    // 0x80201FB4: nop

;}
RECOMP_FUNC void func_8024023C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024023C: lbu         $t6, 0x8($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X8);
    // 0x80240240: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80240244: bne         $t6, $at, L_802402AC
    if (ctx->r14 != ctx->r1) {
        // 0x80240248: nop
    
            goto L_802402AC;
    }
    // 0x80240248: nop

    // 0x8024024C: lbu         $t7, 0x9($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X9);
    // 0x80240250: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x80240254: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x80240258: bne         $t7, $at, L_802402AC
    if (ctx->r15 != ctx->r1) {
        // 0x8024025C: nop
    
            goto L_802402AC;
    }
    // 0x8024025C: nop

    // 0x80240260: lbu         $t6, 0x8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8);
    // 0x80240264: lbu         $t8, 0x7($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X7);
    // 0x80240268: lw          $a2, 0x18($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X18);
    // 0x8024026C: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x80240270: lbu         $t6, 0x9($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X9);
    // 0x80240274: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80240278: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x8024027C: or          $v1, $t8, $t6
    ctx->r3 = ctx->r24 | ctx->r14;
    // 0x80240280: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80240284: addiu       $t8, $zero, 0x1E8
    ctx->r24 = ADD32(0, 0X1E8);
    // 0x80240288: beq         $a2, $zero, L_802402A8
    if (ctx->r6 == 0) {
        // 0x8024028C: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802402A8;
    }
    // 0x8024028C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80240290: lwc1        $f6, 0x14($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X14);
    // 0x80240294: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80240298: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8024029C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x802402A0: jr          $ra
    // 0x802402A4: sw          $t7, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r15;
    return;
    // 0x802402A4: sw          $t7, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r15;
L_802402A8:
    // 0x802402A8: sw          $t8, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r24;
L_802402AC:
    // 0x802402AC: jr          $ra
    // 0x802402B0: nop

    return;
    // 0x802402B0: nop

;}
RECOMP_FUNC void func_802469D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802469D0: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x802469D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802469D8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x802469DC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x802469E0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802469E4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802469E8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802469EC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802469F0: sw          $a1, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r5;
    // 0x802469F4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x802469F8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802469FC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80246A00: bne         $t7, $zero, L_80246A10
    if (ctx->r15 != 0) {
        // 0x80246A04: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80246A10;
    }
    // 0x80246A04: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80246A08: b           L_80246B54
    // 0x80246A0C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80246B54;
    // 0x80246A0C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80246A10:
    // 0x80246A10: jal         0x802452EC
    // 0x80246A14: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_802452EC(rdram, ctx);
        goto after_0;
    // 0x80246A14: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_0:
    // 0x80246A18: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80246A1C: bne         $v0, $at, L_80246A2C
    if (ctx->r2 != ctx->r1) {
        // 0x80246A20: nop
    
            goto L_80246A2C;
    }
    // 0x80246A20: nop

    // 0x80246A24: b           L_80246B54
    // 0x80246A28: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80246B54;
    // 0x80246A28: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80246A2C:
    // 0x80246A2C: lbu         $t8, 0x64($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X64);
    // 0x80246A30: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80246A34: blez        $t8, L_80246B44
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80246A38: addiu       $s5, $zero, 0x80
        ctx->r21 = ADD32(0, 0X80);
            goto L_80246B44;
    }
    // 0x80246A38: addiu       $s5, $zero, 0x80
    ctx->r21 = ADD32(0, 0X80);
    // 0x80246A3C: addiu       $s2, $sp, 0x148
    ctx->r18 = ADD32(ctx->r29, 0X148);
    // 0x80246A40: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
L_80246A44:
    // 0x80246A44: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80246A48: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80246A4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80246A50: jal         0x80245404
    // 0x80246A54: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    func_80245404(rdram, ctx);
        goto after_1;
    // 0x80246A54: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    after_1:
    // 0x80246A58: beq         $v0, $zero, L_80246A68
    if (ctx->r2 == 0) {
        // 0x80246A5C: nop
    
            goto L_80246A68;
    }
    // 0x80246A5C: nop

    // 0x80246A60: b           L_80246B58
    // 0x80246A64: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80246B58;
    // 0x80246A64: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80246A68:
    // 0x80246A68: blez        $s3, L_80246A78
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80246A6C: nop
    
            goto L_80246A78;
    }
    // 0x80246A6C: nop

    // 0x80246A70: b           L_80246A80
    // 0x80246A74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80246A80;
    // 0x80246A74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80246A78:
    // 0x80246A78: lw          $a1, 0x60($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X60);
    // 0x80246A7C: nop

L_80246A80:
    // 0x80246A80: slti        $at, $a1, 0x80
    ctx->r1 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    // 0x80246A84: beq         $at, $zero, L_80246B2C
    if (ctx->r1 == 0) {
        // 0x80246A88: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_80246B2C;
    }
    // 0x80246A88: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80246A8C: subu        $a2, $s5, $a1
    ctx->r6 = SUB32(ctx->r21, ctx->r5);
    // 0x80246A90: andi        $t9, $a2, 0x3
    ctx->r25 = ctx->r6 & 0X3;
    // 0x80246A94: beq         $t9, $zero, L_80246AC8
    if (ctx->r25 == 0) {
        // 0x80246A98: addu        $a0, $t9, $a1
        ctx->r4 = ADD32(ctx->r25, ctx->r5);
            goto L_80246AC8;
    }
    // 0x80246A98: addu        $a0, $t9, $a1
    ctx->r4 = ADD32(ctx->r25, ctx->r5);
    // 0x80246A9C: sll         $t0, $a1, 1
    ctx->r8 = S32(ctx->r5 << 1);
    // 0x80246AA0: addiu       $t1, $sp, 0x48
    ctx->r9 = ADD32(ctx->r29, 0X48);
    // 0x80246AA4: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
L_80246AA8:
    // 0x80246AA8: lhu         $t2, 0x0($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X0);
    // 0x80246AAC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80246AB0: bne         $s1, $t2, L_80246ABC
    if (ctx->r17 != ctx->r10) {
        // 0x80246AB4: nop
    
            goto L_80246ABC;
    }
    // 0x80246AB4: nop

    // 0x80246AB8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80246ABC:
    // 0x80246ABC: bne         $a0, $v1, L_80246AA8
    if (ctx->r4 != ctx->r3) {
        // 0x80246AC0: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_80246AA8;
    }
    // 0x80246AC0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80246AC4: beq         $v1, $s5, L_80246B2C
    if (ctx->r3 == ctx->r21) {
        // 0x80246AC8: sll         $t3, $v1, 1
        ctx->r11 = S32(ctx->r3 << 1);
            goto L_80246B2C;
    }
L_80246AC8:
    // 0x80246AC8: sll         $t3, $v1, 1
    ctx->r11 = S32(ctx->r3 << 1);
    // 0x80246ACC: addiu       $t4, $sp, 0x48
    ctx->r12 = ADD32(ctx->r29, 0X48);
    // 0x80246AD0: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
L_80246AD4:
    // 0x80246AD4: lhu         $t5, 0x0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X0);
    // 0x80246AD8: nop

    // 0x80246ADC: bne         $s1, $t5, L_80246AE8
    if (ctx->r17 != ctx->r13) {
        // 0x80246AE0: nop
    
            goto L_80246AE8;
    }
    // 0x80246AE0: nop

    // 0x80246AE4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80246AE8:
    // 0x80246AE8: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x80246AEC: nop

    // 0x80246AF0: bne         $s1, $t6, L_80246AFC
    if (ctx->r17 != ctx->r14) {
        // 0x80246AF4: nop
    
            goto L_80246AFC;
    }
    // 0x80246AF4: nop

    // 0x80246AF8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80246AFC:
    // 0x80246AFC: lhu         $t7, 0x4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X4);
    // 0x80246B00: nop

    // 0x80246B04: bne         $s1, $t7, L_80246B10
    if (ctx->r17 != ctx->r15) {
        // 0x80246B08: nop
    
            goto L_80246B10;
    }
    // 0x80246B08: nop

    // 0x80246B0C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80246B10:
    // 0x80246B10: lhu         $t8, 0x6($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X6);
    // 0x80246B14: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80246B18: bne         $s1, $t8, L_80246B24
    if (ctx->r17 != ctx->r24) {
        // 0x80246B1C: nop
    
            goto L_80246B24;
    }
    // 0x80246B1C: nop

    // 0x80246B20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80246B24:
    // 0x80246B24: bne         $v0, $s2, L_80246AD4
    if (ctx->r2 != ctx->r18) {
        // 0x80246B28: nop
    
            goto L_80246AD4;
    }
    // 0x80246B28: nop

L_80246B2C:
    // 0x80246B2C: lbu         $t0, 0x64($s4)
    ctx->r8 = MEM_BU(ctx->r20, 0X64);
    // 0x80246B30: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80246B34: andi        $t9, $s3, 0xFF
    ctx->r25 = ctx->r19 & 0XFF;
    // 0x80246B38: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80246B3C: bne         $at, $zero, L_80246A44
    if (ctx->r1 != 0) {
        // 0x80246B40: or          $s3, $t9, $zero
        ctx->r19 = ctx->r25 | 0;
            goto L_80246A44;
    }
    // 0x80246B40: or          $s3, $t9, $zero
    ctx->r19 = ctx->r25 | 0;
L_80246B44:
    // 0x80246B44: lw          $t2, 0x154($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X154);
    // 0x80246B48: sll         $t1, $s0, 8
    ctx->r9 = S32(ctx->r16 << 8);
    // 0x80246B4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80246B50: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
L_80246B54:
    // 0x80246B54: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80246B58:
    // 0x80246B58: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80246B5C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80246B60: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80246B64: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80246B68: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80246B6C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80246B70: jr          $ra
    // 0x80246B74: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    return;
    // 0x80246B74: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
;}
RECOMP_FUNC void func_8023DF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023DF30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023DF34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023DF38: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8023DF3C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8023DF40: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8023DF44: jal         0x80241760
    // 0x8023DF48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x8023DF48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023DF4C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023DF50: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8023DF54: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8023DF58: addiu       $t8, $t8, 0x4C10
    ctx->r24 = ADD32(ctx->r24, 0X4C10);
    // 0x8023DF5C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8023DF60: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8023DF64: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8023DF68: sw          $t0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r8;
    // 0x8023DF6C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8023DF70: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8023DF74: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023DF78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023DF7C: jal         0x80241780
    // 0x8023DF80: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    func_80241780(rdram, ctx);
        goto after_1;
    // 0x8023DF80: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    after_1:
    // 0x8023DF84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023DF88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023DF8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8023DF90: jr          $ra
    // 0x8023DF94: nop

    return;
    // 0x8023DF94: nop

;}
RECOMP_FUNC void func_8020670C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020670C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80206710: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80206714: jal         0x8022A2F0
    // 0x80206718: nop

    func_8022A2F0(rdram, ctx);
        goto after_0;
    // 0x80206718: nop

    after_0:
    // 0x8020671C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80206720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80206724: jr          $ra
    // 0x80206728: nop

    return;
    // 0x80206728: nop

;}
RECOMP_FUNC void func_80201B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80201B0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201B10: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80201B14: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80201B18: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x80201B1C: lbu         $v1, 0x23($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X23);
    // 0x80201B20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201B24: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80201B28: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201B2C: bne         $at, $zero, L_80201B58
    if (ctx->r1 != 0) {
        // 0x80201B30: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80201B58;
    }
    // 0x80201B30: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201B34: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80201B38: addiu       $a1, $a1, 0x1E98
    ctx->r5 = ADD32(ctx->r5, 0X1E98);
    // 0x80201B3C: addiu       $a0, $a0, 0x1E80
    ctx->r4 = ADD32(ctx->r4, 0X1E80);
    // 0x80201B40: addiu       $a2, $zero, 0x1B0
    ctx->r6 = ADD32(0, 0X1B0);
    // 0x80201B44: jal         0x80231C9C
    // 0x80201B48: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80201B48: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80201B4C: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80201B50: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x80201B54: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_80201B58:
    // 0x80201B58: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201B5C: beq         $at, $zero, L_80201BF0
    if (ctx->r1 == 0) {
        // 0x80201B60: lwc1        $f4, 0x24($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
            goto L_80201BF0;
    }
    // 0x80201B60: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80201B64: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80201B68: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201B6C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80201B70: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80201B74: addiu       $a1, $a1, 0x1EB0
    ctx->r5 = ADD32(ctx->r5, 0X1EB0);
    // 0x80201B78: addiu       $a0, $a0, 0x1EA0
    ctx->r4 = ADD32(ctx->r4, 0X1EA0);
    // 0x80201B7C: bc1tl       L_80201B90
    if (c1cs) {
        // 0x80201B80: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80201B90;
    }
    goto skip_0;
    // 0x80201B80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x80201B84: jal         0x80231C9C
    // 0x80201B88: addiu       $a2, $zero, 0x1B2
    ctx->r6 = ADD32(0, 0X1B2);
    func_80231C9C(rdram, ctx);
        goto after_1;
    // 0x80201B88: addiu       $a2, $zero, 0x1B2
    ctx->r6 = ADD32(0, 0X1B2);
    after_1:
    // 0x80201B8C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_80201B90:
    // 0x80201B90: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80201B94: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80201B98: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201B9C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80201BA0: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80201BA4: addiu       $a1, $a1, 0x1EC8
    ctx->r5 = ADD32(ctx->r5, 0X1EC8);
    // 0x80201BA8: addiu       $a0, $a0, 0x1EB8
    ctx->r4 = ADD32(ctx->r4, 0X1EB8);
    // 0x80201BAC: bc1tl       L_80201BC0
    if (c1cs) {
        // 0x80201BB0: lbu         $t7, 0x23($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X23);
            goto L_80201BC0;
    }
    goto skip_1;
    // 0x80201BB0: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    skip_1:
    // 0x80201BB4: jal         0x80231C9C
    // 0x80201BB8: addiu       $a2, $zero, 0x1B3
    ctx->r6 = ADD32(0, 0X1B3);
    func_80231C9C(rdram, ctx);
        goto after_2;
    // 0x80201BB8: addiu       $a2, $zero, 0x1B3
    ctx->r6 = ADD32(0, 0X1B3);
    after_2:
    // 0x80201BBC: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
L_80201BC0:
    // 0x80201BC0: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80201BC4: lw          $t6, 0x6DE4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6DE4);
    // 0x80201BC8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80201BCC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80201BD0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80201BD4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80201BD8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80201BDC: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80201BE0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80201BE4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80201BE8: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80201BEC: swc1        $f16, 0x7C($t9)
    MEM_W(0X7C, ctx->r25) = ctx->f16.u32l;
L_80201BF0:
    // 0x80201BF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201BF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80201BF8: jr          $ra
    // 0x80201BFC: nop

    return;
    // 0x80201BFC: nop

;}
RECOMP_FUNC void func_80231B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231B6C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80231B70: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80231B74: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80231B78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80231B7C: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80231B80: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x80231B84: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80231B88: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80231B8C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80231B90: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80231B94: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80231B98: beq         $a1, $zero, L_80231C24
    if (ctx->r5 == 0) {
        // 0x80231B9C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80231C24;
    }
    // 0x80231B9C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80231BA0: lui         $s5, 0x8025
    ctx->r21 = S32(0X8025 << 16);
    // 0x80231BA4: lui         $s4, 0x8025
    ctx->r20 = S32(0X8025 << 16);
    // 0x80231BA8: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x80231BAC: addiu       $s3, $s3, 0x5054
    ctx->r19 = ADD32(ctx->r19, 0X5054);
    // 0x80231BB0: addiu       $s4, $s4, 0x5058
    ctx->r20 = ADD32(ctx->r20, 0X5058);
    // 0x80231BB4: addiu       $s5, $s5, 0x5060
    ctx->r21 = ADD32(ctx->r21, 0X5060);
    // 0x80231BB8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
L_80231BBC:
    // 0x80231BBC: divu        $zero, $s0, $s2
    lo = S32(U32(ctx->r16) / U32(ctx->r18)); hi = S32(U32(ctx->r16) % U32(ctx->r18));
    // 0x80231BC0: mfhi        $t6
    ctx->r14 = hi;
    // 0x80231BC4: bne         $s2, $zero, L_80231BD0
    if (ctx->r18 != 0) {
        // 0x80231BC8: nop
    
            goto L_80231BD0;
    }
    // 0x80231BC8: nop

    // 0x80231BCC: break       7
    do_break(2149784524);
L_80231BD0:
    // 0x80231BD0: bnel        $t6, $zero, L_80231C0C
    if (ctx->r14 != 0) {
        // 0x80231BD4: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80231C0C;
    }
    goto skip_0;
    // 0x80231BD4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_0:
    // 0x80231BD8: beq         $s0, $zero, L_80231BE8
    if (ctx->r16 == 0) {
        // 0x80231BDC: nop
    
            goto L_80231BE8;
    }
    // 0x80231BDC: nop

    // 0x80231BE0: jal         0x80231A24
    // 0x80231BE4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80231BE4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
L_80231BE8:
    // 0x80231BE8: divu        $zero, $s0, $s2
    lo = S32(U32(ctx->r16) / U32(ctx->r18)); hi = S32(U32(ctx->r16) % U32(ctx->r18));
    // 0x80231BEC: mflo        $a1
    ctx->r5 = lo;
    // 0x80231BF0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80231BF4: bne         $s2, $zero, L_80231C00
    if (ctx->r18 != 0) {
        // 0x80231BF8: nop
    
            goto L_80231C00;
    }
    // 0x80231BF8: nop

    // 0x80231BFC: break       7
    do_break(2149784572);
L_80231C00:
    // 0x80231C00: jal         0x80231A24
    // 0x80231C04: nop

    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x80231C04: nop

    after_1:
    // 0x80231C08: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80231C0C:
    // 0x80231C0C: jal         0x80231A24
    // 0x80231C10: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x80231C10: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    after_2:
    // 0x80231C14: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80231C18: sltu        $at, $s0, $s6
    ctx->r1 = ctx->r16 < ctx->r22 ? 1 : 0;
    // 0x80231C1C: bne         $at, $zero, L_80231BBC
    if (ctx->r1 != 0) {
        // 0x80231C20: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80231BBC;
    }
    // 0x80231C20: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80231C24:
    // 0x80231C24: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80231C28: jal         0x80231A24
    // 0x80231C2C: addiu       $a0, $a0, 0x5068
    ctx->r4 = ADD32(ctx->r4, 0X5068);
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x80231C2C: addiu       $a0, $a0, 0x5068
    ctx->r4 = ADD32(ctx->r4, 0X5068);
    after_3:
    // 0x80231C30: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80231C34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80231C38: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80231C3C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80231C40: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80231C44: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80231C48: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80231C4C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80231C50: jr          $ra
    // 0x80231C54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80231C54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023E840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E840: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023E844: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023E848: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8023E84C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8023E850: jal         0x80241760
    // 0x8023E854: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x8023E854: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023E858: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023E85C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023E860: bne         $t6, $zero, L_8023E874
    if (ctx->r14 != 0) {
        // 0x8023E864: nop
    
            goto L_8023E874;
    }
    // 0x8023E864: nop

    // 0x8023E868: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8023E86C: lw          $t7, 0x16E0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X16E0);
    // 0x8023E870: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
L_8023E874:
    // 0x8023E874: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8023E878: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8023E87C: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8023E880: beq         $t9, $t0, L_8023E904
    if (ctx->r25 == ctx->r8) {
        // 0x8023E884: nop
    
            goto L_8023E904;
    }
    // 0x8023E884: nop

    // 0x8023E888: sw          $t0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r8;
    // 0x8023E88C: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x8023E890: lw          $t2, 0x16E0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X16E0);
    // 0x8023E894: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8023E898: beq         $t1, $t2, L_8023E8CC
    if (ctx->r9 == ctx->r10) {
        // 0x8023E89C: nop
    
            goto L_8023E8CC;
    }
    // 0x8023E89C: nop

    // 0x8023E8A0: lhu         $t3, 0x10($t1)
    ctx->r11 = MEM_HU(ctx->r9, 0X10);
    // 0x8023E8A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023E8A8: beq         $t3, $at, L_8023E8CC
    if (ctx->r11 == ctx->r1) {
        // 0x8023E8AC: nop
    
            goto L_8023E8CC;
    }
    // 0x8023E8AC: nop

    // 0x8023E8B0: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    // 0x8023E8B4: jal         0x802417A0
    // 0x8023E8B8: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_802417A0(rdram, ctx);
        goto after_1;
    // 0x8023E8B8: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_1:
    // 0x8023E8BC: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8023E8C0: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    // 0x8023E8C4: jal         0x80241EFC
    // 0x8023E8C8: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    func_80241EFC(rdram, ctx);
        goto after_2;
    // 0x8023E8C8: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_2:
L_8023E8CC:
    // 0x8023E8CC: lui         $t5, 0x8025
    ctx->r13 = S32(0X8025 << 16);
    // 0x8023E8D0: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8023E8D4: lw          $t7, 0x16D8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X16D8);
    // 0x8023E8D8: lw          $t5, 0x16E0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X16E0);
    // 0x8023E8DC: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x8023E8E0: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x8023E8E4: slt         $at, $t6, $t9
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8023E8E8: beq         $at, $zero, L_8023E904
    if (ctx->r1 == 0) {
        // 0x8023E8EC: nop
    
            goto L_8023E904;
    }
    // 0x8023E8EC: nop

    // 0x8023E8F0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8023E8F4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8023E8F8: sh          $t0, 0x10($t5)
    MEM_H(0X10, ctx->r13) = ctx->r8;
    // 0x8023E8FC: jal         0x80241DFC
    // 0x8023E900: addiu       $a0, $a0, 0x16D8
    ctx->r4 = ADD32(ctx->r4, 0X16D8);
    func_80241DFC(rdram, ctx);
        goto after_3;
    // 0x8023E900: addiu       $a0, $a0, 0x16D8
    ctx->r4 = ADD32(ctx->r4, 0X16D8);
    after_3:
L_8023E904:
    // 0x8023E904: jal         0x80241780
    // 0x8023E908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80241780(rdram, ctx);
        goto after_4;
    // 0x8023E908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8023E90C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023E910: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023E914: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8023E918: jr          $ra
    // 0x8023E91C: nop

    return;
    // 0x8023E91C: nop

;}
RECOMP_FUNC void func_80249738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024973C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80249740: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80249744: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x80249748: sw          $a2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r6;
    // 0x8024974C: sh          $zero, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = 0;
    // 0x80249750: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80249754: jal         0x802496B8
    // 0x80249758: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    func_802496B8(rdram, ctx);
        goto after_0;
    // 0x80249758: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    after_0:
    // 0x8024975C: lui         $at, 0x4D54
    ctx->r1 = S32(0X4D54 << 16);
    // 0x80249760: ori         $at, $at, 0x6864
    ctx->r1 = ctx->r1 | 0X6864;
    // 0x80249764: bnel        $v0, $at, L_80249804
    if (ctx->r2 != ctx->r1) {
        // 0x80249768: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80249804;
    }
    goto skip_0;
    // 0x80249768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8024976C: jal         0x802496B8
    // 0x80249770: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_802496B8(rdram, ctx);
        goto after_1;
    // 0x80249770: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_1:
    // 0x80249774: jal         0x80249708
    // 0x80249778: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80249708(rdram, ctx);
        goto after_2;
    // 0x80249778: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x8024977C: bnel        $v0, $zero, L_80249804
    if (ctx->r2 != 0) {
        // 0x80249780: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80249804;
    }
    goto skip_1;
    // 0x80249780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80249784: jal         0x80249708
    // 0x80249788: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80249708(rdram, ctx);
        goto after_3;
    // 0x80249788: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
    // 0x8024978C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80249790: bnel        $v0, $at, L_80249804
    if (ctx->r2 != ctx->r1) {
        // 0x80249794: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80249804;
    }
    goto skip_2;
    // 0x80249794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x80249798: jal         0x80249708
    // 0x8024979C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80249708(rdram, ctx);
        goto after_4;
    // 0x8024979C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_4:
    // 0x802497A0: sh          $v0, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r2;
    // 0x802497A4: lh          $v1, 0x18($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X18);
    // 0x802497A8: andi        $t6, $v1, 0x8000
    ctx->r14 = ctx->r3 & 0X8000;
    // 0x802497AC: bnel        $t6, $zero, L_80249804
    if (ctx->r14 != 0) {
        // 0x802497B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80249804;
    }
    goto skip_3;
    // 0x802497B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x802497B4: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x802497B8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802497BC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802497C0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802497C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802497C8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802497CC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802497D0: div.d       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f10.d);
    // 0x802497D4: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x802497D8: jal         0x802496B8
    // 0x802497DC: swc1        $f8, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f8.u32l;
    func_802496B8(rdram, ctx);
        goto after_5;
    // 0x802497DC: swc1        $f8, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f8.u32l;
    after_5:
    // 0x802497E0: lui         $at, 0x4D54
    ctx->r1 = S32(0X4D54 << 16);
    // 0x802497E4: ori         $at, $at, 0x726B
    ctx->r1 = ctx->r1 | 0X726B;
    // 0x802497E8: bnel        $v0, $at, L_80249804
    if (ctx->r2 != ctx->r1) {
        // 0x802497EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80249804;
    }
    goto skip_4;
    // 0x802497EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x802497F0: jal         0x802496B8
    // 0x802497F4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_802496B8(rdram, ctx);
        goto after_6;
    // 0x802497F4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_6:
    // 0x802497F8: lw          $t7, 0x8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X8);
    // 0x802497FC: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x80249800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80249804:
    // 0x80249804: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80249808: jr          $ra
    // 0x8024980C: nop

    return;
    // 0x8024980C: nop

;}
RECOMP_FUNC void func_8021A370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021A370: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021A374: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x8021A378: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8021A37C: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021A380: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8021A384: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021A388: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8021A38C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021A390: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021A394: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8021A398: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021A39C: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021A3A0: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8021A3A4: sub.s       $f2, $f8, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8021A3A8: sub.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x8021A3AC: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x8021A3B0: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8021A3B4: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8021A3B8: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x8021A3BC: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021A3C0: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021A3C4: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8021A3C8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021A3CC: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x8021A3D0: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8021A3D4: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021A3D8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021A3DC: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021A3E0: nop

    // 0x8021A3E4: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8021A3E8: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021A3EC: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x8021A3F0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021A3F4: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x8021A3F8: jal         0x8022AA40
    // 0x8021A3FC: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    func_8022AA40(rdram, ctx);
        goto after_0;
    // 0x8021A3FC: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x8021A400: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8021A404: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8021A408: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8021A40C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8021A410: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021A414: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021A418: bc1tl       L_8021A438
    if (c1cs) {
        // 0x8021A41C: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_8021A438;
    }
    goto skip_0;
    // 0x8021A41C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_0:
    // 0x8021A420: div.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8021A424: div.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8021A428: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x8021A42C: b           L_8021A444
    // 0x8021A430: div.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
        goto L_8021A444;
    // 0x8021A430: div.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8021A434: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_8021A438:
    // 0x8021A438: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8021A43C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8021A440: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
L_8021A444:
    // 0x8021A444: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x8021A448: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    // 0x8021A44C: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x8021A450: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021A454: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x8021A458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021A45C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8021A460: jr          $ra
    // 0x8021A464: nop

    return;
    // 0x8021A464: nop

;}
RECOMP_FUNC void func_8021E104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E104: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8021E108: lhu         $v0, 0xBF6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBF6);
    // 0x8021E10C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021E110: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021E114: blez        $v0, L_8021E164
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8021E118: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8021E164;
    }
    // 0x8021E118: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8021E11C: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x8021E120: lw          $v1, -0x3A00($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A00);
    // 0x8021E124: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8021E128:
    // 0x8021E128: lbu         $t6, 0x1($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X1);
    // 0x8021E12C: bne         $t6, $zero, L_8021E150
    if (ctx->r14 != 0) {
        // 0x8021E130: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_8021E150;
    }
    // 0x8021E130: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8021E134: sb          $a2, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r6;
    // 0x8021E138: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x8021E13C: lw          $t7, -0x3A00($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A00);
    // 0x8021E140: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8021E144: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x8021E148: b           L_8021E17C
    // 0x8021E14C: sb          $a2, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r6;
        goto L_8021E17C;
    // 0x8021E14C: sb          $a2, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r6;
L_8021E150:
    // 0x8021E150: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8021E154: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021E158: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    // 0x8021E15C: bne         $at, $zero, L_8021E128
    if (ctx->r1 != 0) {
        // 0x8021E160: addiu       $v1, $v1, 0x18
        ctx->r3 = ADD32(ctx->r3, 0X18);
            goto L_8021E128;
    }
    // 0x8021E160: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
L_8021E164:
    // 0x8021E164: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8021E168: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8021E16C: addiu       $a2, $a2, 0xBF6
    ctx->r6 = ADD32(ctx->r6, 0XBF6);
    // 0x8021E170: jal         0x80231C58
    // 0x8021E174: addiu       $a1, $a1, 0x3674
    ctx->r5 = ADD32(ctx->r5, 0X3674);
    func_80231C58(rdram, ctx);
        goto after_0;
    // 0x8021E174: addiu       $a1, $a1, 0x3674
    ctx->r5 = ADD32(ctx->r5, 0X3674);
    after_0:
    // 0x8021E178: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8021E17C:
    // 0x8021E17C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021E180: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021E184: jr          $ra
    // 0x8021E188: nop

    return;
    // 0x8021E188: nop

;}
RECOMP_FUNC void func_8023CE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023CE00: jr          $ra
    // 0x8023CE04: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
    return;
    // 0x8023CE04: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
;}
RECOMP_FUNC void func_802206A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802206A0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802206A4: lwc1        $f6, -0x1790($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1790);
    // 0x802206A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802206AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802206B0: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x802206B4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802206B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802206BC: addiu       $v1, $v1, 0x3B90
    ctx->r3 = ADD32(ctx->r3, 0X3B90);
    // 0x802206C0: lui         $t0, 0xFE00
    ctx->r8 = S32(0XFE00 << 16);
    // 0x802206C4: bc1f        L_802206F8
    if (!c1cs) {
        // 0x802206C8: lui         $t5, 0x600
        ctx->r13 = S32(0X600 << 16);
            goto L_802206F8;
    }
    // 0x802206C8: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x802206CC: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x802206D0: addiu       $v1, $v1, 0x3B90
    ctx->r3 = ADD32(ctx->r3, 0X3B90);
    // 0x802206D4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802206D8: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x802206DC: ori         $t8, $t8, 0x2205
    ctx->r24 = ctx->r24 | 0X2205;
    // 0x802206E0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802206E4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802206E8: lui         $t7, 0xB700
    ctx->r15 = S32(0XB700 << 16);
    // 0x802206EC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802206F0: b           L_80220714
    // 0x802206F4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
        goto L_80220714;
    // 0x802206F4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_802206F8:
    // 0x802206F8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802206FC: lui         $t2, 0xB700
    ctx->r10 = S32(0XB700 << 16);
    // 0x80220700: addiu       $t3, $zero, 0x2205
    ctx->r11 = ADD32(0, 0X2205);
    // 0x80220704: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80220708: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8022070C: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80220710: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
L_80220714:
    // 0x80220714: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80220718: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8022071C: addiu       $t6, $t6, -0x1860
    ctx->r14 = ADD32(ctx->r14, -0X1860);
    // 0x80220720: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80220724: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80220728: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8022072C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80220730: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80220734: lui         $t1, 0x8027
    ctx->r9 = S32(0X8027 << 16);
    // 0x80220738: addiu       $t1, $t1, 0x4388
    ctx->r9 = ADD32(ctx->r9, 0X4388);
    // 0x8022073C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80220740: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80220744: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x80220748: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x8022074C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80220750: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80220754: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80220758: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8022075C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x80220760: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x80220764: jal         0x802375F0
    // 0x80220768: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_802375F0(rdram, ctx);
        goto after_0;
    // 0x80220768: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8022076C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80220770: lui         $t2, 0x52
    ctx->r10 = S32(0X52 << 16);
    // 0x80220774: ori         $t2, $t2, 0xFFF
    ctx->r10 = ctx->r10 | 0XFFF;
    // 0x80220778: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022077C: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x80220780: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x80220784: sw          $t2, 0x4348($at)
    MEM_W(0X4348, ctx->r1) = ctx->r10;
    // 0x80220788: addiu       $v1, $v1, 0x4350
    ctx->r3 = ADD32(ctx->r3, 0X4350);
    // 0x8022078C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80220790: lui         $t6, 0xFF
    ctx->r14 = S32(0XFF << 16);
    // 0x80220794: sw          $t3, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r11;
    // 0x80220798: sw          $t3, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r11;
    // 0x8022079C: sw          $t3, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r11;
    // 0x802207A0: ori         $t6, $t6, 0xFFF
    ctx->r14 = ctx->r14 | 0XFFF;
    // 0x802207A4: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802207A8: sw          $t6, 0x434C($at)
    MEM_W(0X434C, ctx->r1) = ctx->r14;
    // 0x802207AC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802207B0: sw          $zero, -0x17B8($at)
    MEM_W(-0X17B8, ctx->r1) = 0;
    // 0x802207B4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802207B8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x802207BC: sw          $t7, -0x17B4($at)
    MEM_W(-0X17B4, ctx->r1) = ctx->r15;
    // 0x802207C0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802207C4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x802207C8: sb          $t8, -0x175C($at)
    MEM_B(-0X175C, ctx->r1) = ctx->r24;
    // 0x802207CC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802207D0: jal         0x80220534
    // 0x802207D4: lwc1        $f12, -0x1790($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1790);
    func_80220534(rdram, ctx);
        goto after_1;
    // 0x802207D4: lwc1        $f12, -0x1790($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1790);
    after_1:
    // 0x802207D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802207DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802207E0: jr          $ra
    // 0x802207E4: nop

    return;
    // 0x802207E4: nop

;}
RECOMP_FUNC void func_80234990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234990: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80234994: jr          $ra
    // 0x80234998: sw          $a0, 0x900($at)
    MEM_W(0X900, ctx->r1) = ctx->r4;
    return;
    // 0x80234998: sw          $a0, 0x900($at)
    MEM_W(0X900, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80236CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80236CD0: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x80236CD4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80236CD8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80236CDC: multu       $a3, $t6
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80236CE0: lw          $t9, 0x8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X8);
    // 0x80236CE4: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80236CE8: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x80236CEC: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80236CF0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80236CF4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80236CF8: mflo        $v0
    ctx->r2 = lo;
    // 0x80236CFC: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x80236D00: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x80236D04: addu        $t1, $a0, $t7
    ctx->r9 = ADD32(ctx->r4, ctx->r15);
    // 0x80236D08: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x80236D0C: bne         $at, $zero, L_80236D1C
    if (ctx->r1 != 0) {
        // 0x80236D10: addu        $t2, $a0, $t7
        ctx->r10 = ADD32(ctx->r4, ctx->r15);
            goto L_80236D1C;
    }
    // 0x80236D10: addu        $t2, $a0, $t7
    ctx->r10 = ADD32(ctx->r4, ctx->r15);
    // 0x80236D14: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80236D18: sw          $t2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r10;
L_80236D1C:
    // 0x80236D1C: jr          $ra
    // 0x80236D20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80236D20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80249FD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249FD8: addiu       $v1, $a1, -0x2
    ctx->r3 = ADD32(ctx->r5, -0X2);
    // 0x80249FDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80249FE0: andi        $t6, $v1, 0x7
    ctx->r14 = ctx->r3 & 0X7;
    // 0x80249FE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80249FE8: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x80249FEC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80249FF0: beq         $at, $zero, L_8024A220
    if (ctx->r1 == 0) {
        // 0x80249FF4: lw          $t0, 0x0($a2)
        ctx->r8 = MEM_W(ctx->r6, 0X0);
            goto L_8024A220;
    }
    // 0x80249FF4: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x80249FF8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80249FFC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A000: addu        $at, $at, $t6
    gpr jr_addend_8024A008 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8024A004: lw          $t6, 0x5A80($at)
    ctx->r14 = ADD32(ctx->r1, 0X5A80);
    // 0x8024A008: jr          $t6
    // 0x8024A00C: nop

    switch (jr_addend_8024A008 >> 2) {
        case 0: goto L_8024A010; break;
        case 1: goto L_8024A044; break;
        case 2: goto L_8024A0A4; break;
        case 3: goto L_8024A078; break;
        case 4: goto L_8024A0D0; break;
        case 5: goto L_8024A0FC; break;
        case 6: goto L_8024A164; break;
        case 7: goto L_8024A1DC; break;
        default: switch_error(__func__, 0x8024A008, 0x80255A80);
    }
    // 0x8024A00C: nop

L_8024A010:
    // 0x8024A010: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8024A014: and         $t7, $t0, $at
    ctx->r15 = ctx->r8 & ctx->r1;
    // 0x8024A018: lw          $t8, 0x20($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X20);
    // 0x8024A01C: bgez        $v1, L_8024A02C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8024A020: sra         $t9, $v1, 3
        ctx->r25 = S32(SIGNED(ctx->r3) >> 3);
            goto L_8024A02C;
    }
    // 0x8024A020: sra         $t9, $v1, 3
    ctx->r25 = S32(SIGNED(ctx->r3) >> 3);
    // 0x8024A024: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x8024A028: sra         $t9, $at, 3
    ctx->r25 = S32(SIGNED(ctx->r1) >> 3);
L_8024A02C:
    // 0x8024A02C: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8024A030: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8024A034: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8024A038: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x8024A03C: b           L_8024A220
    // 0x8024A040: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
        goto L_8024A220;
    // 0x8024A040: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
L_8024A044:
    // 0x8024A044: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8024A048: and         $t3, $t0, $at
    ctx->r11 = ctx->r8 & ctx->r1;
    // 0x8024A04C: lw          $t4, 0x20($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X20);
    // 0x8024A050: bgez        $v1, L_8024A060
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8024A054: sra         $t5, $v1, 3
        ctx->r13 = S32(SIGNED(ctx->r3) >> 3);
            goto L_8024A060;
    }
    // 0x8024A054: sra         $t5, $v1, 3
    ctx->r13 = S32(SIGNED(ctx->r3) >> 3);
    // 0x8024A058: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x8024A05C: sra         $t5, $at, 3
    ctx->r13 = S32(SIGNED(ctx->r1) >> 3);
L_8024A060:
    // 0x8024A060: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8024A064: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8024A068: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8024A06C: addu        $t9, $t4, $t6
    ctx->r25 = ADD32(ctx->r12, ctx->r14);
    // 0x8024A070: b           L_8024A220
    // 0x8024A074: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
        goto L_8024A220;
    // 0x8024A074: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
L_8024A078:
    // 0x8024A078: lw          $t8, 0x20($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X20);
    // 0x8024A07C: bgez        $v1, L_8024A08C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8024A080: sra         $t1, $v1, 3
        ctx->r9 = S32(SIGNED(ctx->r3) >> 3);
            goto L_8024A08C;
    }
    // 0x8024A080: sra         $t1, $v1, 3
    ctx->r9 = S32(SIGNED(ctx->r3) >> 3);
    // 0x8024A084: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x8024A088: sra         $t1, $at, 3
    ctx->r9 = S32(SIGNED(ctx->r1) >> 3);
L_8024A08C:
    // 0x8024A08C: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x8024A090: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x8024A094: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8024A098: addu        $t2, $t8, $t7
    ctx->r10 = ADD32(ctx->r24, ctx->r15);
    // 0x8024A09C: b           L_8024A220
    // 0x8024A0A0: sh          $t0, 0x8($t2)
    MEM_H(0X8, ctx->r10) = ctx->r8;
        goto L_8024A220;
    // 0x8024A0A0: sh          $t0, 0x8($t2)
    MEM_H(0X8, ctx->r10) = ctx->r8;
L_8024A0A4:
    // 0x8024A0A4: lw          $t5, 0x20($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X20);
    // 0x8024A0A8: bgez        $v1, L_8024A0B8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8024A0AC: sra         $t4, $v1, 3
        ctx->r12 = S32(SIGNED(ctx->r3) >> 3);
            goto L_8024A0B8;
    }
    // 0x8024A0AC: sra         $t4, $v1, 3
    ctx->r12 = S32(SIGNED(ctx->r3) >> 3);
    // 0x8024A0B0: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x8024A0B4: sra         $t4, $at, 3
    ctx->r12 = S32(SIGNED(ctx->r1) >> 3);
L_8024A0B8:
    // 0x8024A0B8: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8024A0BC: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8024A0C0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8024A0C4: addu        $t3, $t5, $t6
    ctx->r11 = ADD32(ctx->r13, ctx->r14);
    // 0x8024A0C8: b           L_8024A220
    // 0x8024A0CC: sh          $t0, 0xA($t3)
    MEM_H(0XA, ctx->r11) = ctx->r8;
        goto L_8024A220;
    // 0x8024A0CC: sh          $t0, 0xA($t3)
    MEM_H(0XA, ctx->r11) = ctx->r8;
L_8024A0D0:
    // 0x8024A0D0: lw          $t9, 0x20($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X20);
    // 0x8024A0D4: bgez        $v1, L_8024A0E4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8024A0D8: sra         $t1, $v1, 3
        ctx->r9 = S32(SIGNED(ctx->r3) >> 3);
            goto L_8024A0E4;
    }
    // 0x8024A0D8: sra         $t1, $v1, 3
    ctx->r9 = S32(SIGNED(ctx->r3) >> 3);
    // 0x8024A0DC: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x8024A0E0: sra         $t1, $at, 3
    ctx->r9 = S32(SIGNED(ctx->r1) >> 3);
L_8024A0E4:
    // 0x8024A0E4: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x8024A0E8: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x8024A0EC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8024A0F0: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x8024A0F4: b           L_8024A220
    // 0x8024A0F8: sh          $t0, 0xC($t7)
    MEM_H(0XC, ctx->r15) = ctx->r8;
        goto L_8024A220;
    // 0x8024A0F8: sh          $t0, 0xC($t7)
    MEM_H(0XC, ctx->r15) = ctx->r8;
L_8024A0FC:
    // 0x8024A0FC: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8024A100: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8024A104: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8024A108: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8024A10C: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x8024A110: lw          $t2, 0x910($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X910);
    // 0x8024A114: lw          $t5, 0x20($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X20);
    // 0x8024A118: lw          $t4, 0x44($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X44);
    // 0x8024A11C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8024A120: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8024A124: nop

    // 0x8024A128: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x8024A12C: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x8024A130: add.d       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f0.d + ctx->f0.d;
    // 0x8024A134: div.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f16.d, ctx->f4.d);
    // 0x8024A138: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8024A13C: bgez        $v1, L_8024A14C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8024A140: sra         $t6, $v1, 3
        ctx->r14 = S32(SIGNED(ctx->r3) >> 3);
            goto L_8024A14C;
    }
    // 0x8024A140: sra         $t6, $v1, 3
    ctx->r14 = S32(SIGNED(ctx->r3) >> 3);
    // 0x8024A144: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x8024A148: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_8024A14C:
    // 0x8024A14C: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x8024A150: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x8024A154: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8024A158: addu        $t1, $t5, $t3
    ctx->r9 = ADD32(ctx->r13, ctx->r11);
    // 0x8024A15C: b           L_8024A220
    // 0x8024A160: swc1        $f8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f8.u32l;
        goto L_8024A220;
    // 0x8024A160: swc1        $f8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f8.u32l;
L_8024A164:
    // 0x8024A164: lw          $t9, 0x20($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X20);
    // 0x8024A168: bgez        $v1, L_8024A178
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8024A16C: sra         $t8, $v1, 3
        ctx->r24 = S32(SIGNED(ctx->r3) >> 3);
            goto L_8024A178;
    }
    // 0x8024A16C: sra         $t8, $v1, 3
    ctx->r24 = S32(SIGNED(ctx->r3) >> 3);
    // 0x8024A170: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x8024A174: sra         $t8, $at, 3
    ctx->r24 = S32(SIGNED(ctx->r1) >> 3);
L_8024A178:
    // 0x8024A178: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8024A17C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8024A180: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8024A184: addu        $v0, $t9, $t7
    ctx->r2 = ADD32(ctx->r25, ctx->r15);
    // 0x8024A188: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x8024A18C: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x8024A190: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8024A194: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8024A198: subu        $t6, $t2, $t4
    ctx->r14 = SUB32(ctx->r10, ctx->r12);
    // 0x8024A19C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8024A1A0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8024A1A4: bgez        $t6, L_8024A1BC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8024A1A8: cvt.d.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.d = CVT_D_W(ctx->f10.u32l);
            goto L_8024A1BC;
    }
    // 0x8024A1A8: cvt.d.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.d = CVT_D_W(ctx->f10.u32l);
    // 0x8024A1AC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8024A1B0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8024A1B4: nop

    // 0x8024A1B8: add.d       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f18.d + ctx->f16.d;
L_8024A1BC:
    // 0x8024A1BC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A1C0: ldc1        $f10, 0x5AA0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X5AA0);
    // 0x8024A1C4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8024A1C8: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x8024A1CC: mul.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f16.d);
    // 0x8024A1D0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8024A1D4: b           L_8024A220
    // 0x8024A1D8: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
        goto L_8024A220;
    // 0x8024A1D8: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
L_8024A1DC:
    // 0x8024A1DC: bgez        $v1, L_8024A1EC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8024A1E0: sra         $v0, $v1, 3
        ctx->r2 = S32(SIGNED(ctx->r3) >> 3);
            goto L_8024A1EC;
    }
    // 0x8024A1E0: sra         $v0, $v1, 3
    ctx->r2 = S32(SIGNED(ctx->r3) >> 3);
    // 0x8024A1E4: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x8024A1E8: sra         $v0, $at, 3
    ctx->r2 = S32(SIGNED(ctx->r1) >> 3);
L_8024A1EC:
    // 0x8024A1EC: lw          $t3, 0x20($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X20);
    // 0x8024A1F0: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x8024A1F4: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x8024A1F8: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x8024A1FC: addu        $t1, $t3, $t5
    ctx->r9 = ADD32(ctx->r11, ctx->r13);
    // 0x8024A200: lw          $a1, 0x20($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X20);
    // 0x8024A204: beql        $a1, $zero, L_8024A224
    if (ctx->r5 == 0) {
        // 0x8024A208: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8024A224;
    }
    goto skip_0;
    // 0x8024A208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8024A20C: sh          $t0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r8;
    // 0x8024A210: lw          $t8, 0x20($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X20);
    // 0x8024A214: addu        $t9, $t8, $t5
    ctx->r25 = ADD32(ctx->r24, ctx->r13);
    // 0x8024A218: jal         0x802425F0
    // 0x8024A21C: lw          $a0, 0x20($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X20);
    func_802425F0(rdram, ctx);
        goto after_0;
    // 0x8024A21C: lw          $a0, 0x20($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X20);
    after_0:
L_8024A220:
    // 0x8024A220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8024A224:
    // 0x8024A224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8024A228: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8024A22C: jr          $ra
    // 0x8024A230: nop

    return;
    // 0x8024A230: nop

;}
RECOMP_FUNC void func_8023E330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E330: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023E334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023E338: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8023E33C: jal         0x80245AD0
    // 0x8023E340: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80245AD0(rdram, ctx);
        goto after_0;
    // 0x8023E340: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x8023E344: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8023E348: jal         0x80247AEC
    // 0x8023E34C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80247AEC(rdram, ctx);
        goto after_1;
    // 0x8023E34C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x8023E350: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023E354: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8023E358: bne         $t6, $zero, L_8023E37C
    if (ctx->r14 != 0) {
        // 0x8023E35C: nop
    
            goto L_8023E37C;
    }
    // 0x8023E35C: nop

    // 0x8023E360: lhu         $t7, 0x18($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X18);
    // 0x8023E364: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x8023E368: beq         $t8, $zero, L_8023E37C
    if (ctx->r24 == 0) {
        // 0x8023E36C: nop
    
            goto L_8023E37C;
    }
    // 0x8023E36C: nop

    // 0x8023E370: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8023E374: b           L_8023E380
    // 0x8023E378: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_8023E380;
    // 0x8023E378: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_8023E37C:
    // 0x8023E37C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8023E380:
    // 0x8023E380: jal         0x80245B14
    // 0x8023E384: nop

    func_80245B14(rdram, ctx);
        goto after_2;
    // 0x8023E384: nop

    after_2:
    // 0x8023E388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023E38C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8023E390: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023E394: jr          $ra
    // 0x8023E398: nop

    return;
    // 0x8023E398: nop

;}
RECOMP_FUNC void func_8021DF38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021DF38: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8021DF3C: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x8021DF40: lw          $t8, -0x3A00($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A00);
    // 0x8021DF44: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8021DF48: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x8021DF4C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8021DF50: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8021DF54: addu        $s3, $t7, $t8
    ctx->r19 = ADD32(ctx->r15, ctx->r24);
    // 0x8021DF58: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8021DF5C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8021DF60: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8021DF64: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8021DF68: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021DF6C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021DF70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021DF74: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8021DF78: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8021DF7C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8021DF80: beq         $s3, $zero, L_8021DF94
    if (ctx->r19 == 0) {
        // 0x8021DF84: sw          $a3, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r7;
            goto L_8021DF94;
    }
    // 0x8021DF84: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8021DF88: addiu       $s1, $s3, 0x8
    ctx->r17 = ADD32(ctx->r19, 0X8);
    // 0x8021DF8C: bne         $s1, $zero, L_8021DFAC
    if (ctx->r17 != 0) {
        // 0x8021DF90: addiu       $s0, $sp, 0x44
        ctx->r16 = ADD32(ctx->r29, 0X44);
            goto L_8021DFAC;
    }
    // 0x8021DF90: addiu       $s0, $sp, 0x44
    ctx->r16 = ADD32(ctx->r29, 0X44);
L_8021DF94:
    // 0x8021DF94: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021DF98: addiu       $a0, $a0, 0x35FC
    ctx->r4 = ADD32(ctx->r4, 0X35FC);
    // 0x8021DF9C: jal         0x80231A24
    // 0x8021DFA0: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021DFA0: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    after_0:
    // 0x8021DFA4: b           L_8021E0E0
    // 0x8021DFA8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8021E0E0;
    // 0x8021DFA8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8021DFAC:
    // 0x8021DFAC: lui         $s6, 0x8025
    ctx->r22 = S32(0X8025 << 16);
    // 0x8021DFB0: lui         $s5, 0x8025
    ctx->r21 = S32(0X8025 << 16);
    // 0x8021DFB4: addiu       $s5, $s5, 0x3620
    ctx->r21 = ADD32(ctx->r21, 0X3620);
    // 0x8021DFB8: addiu       $s6, $s6, 0x3644
    ctx->r22 = ADD32(ctx->r22, 0X3644);
    // 0x8021DFBC: addiu       $s4, $zero, -0x8
    ctx->r20 = ADD32(0, -0X8);
    // 0x8021DFC0: addiu       $s2, $zero, -0x4
    ctx->r18 = ADD32(0, -0X4);
L_8021DFC4:
    // 0x8021DFC4: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8021DFC8:
    // 0x8021DFC8: and         $s0, $t9, $s2
    ctx->r16 = ctx->r25 & ctx->r18;
    // 0x8021DFCC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8021DFD0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021DFD4: sltiu       $at, $a1, 0x6
    ctx->r1 = ctx->r5 < 0X6 ? 1 : 0;
    // 0x8021DFD8: beq         $at, $zero, L_8021E0CC
    if (ctx->r1 == 0) {
        // 0x8021DFDC: sll         $t0, $a1, 2
        ctx->r8 = S32(ctx->r5 << 2);
            goto L_8021E0CC;
    }
    // 0x8021DFDC: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    // 0x8021DFE0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021DFE4: addu        $at, $at, $t0
    gpr jr_addend_8021DFEC = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8021DFE8: lw          $t0, 0x3680($at)
    ctx->r8 = ADD32(ctx->r1, 0X3680);
    // 0x8021DFEC: jr          $t0
    // 0x8021DFF0: nop

    switch (jr_addend_8021DFEC >> 2) {
        case 0: goto L_8021E0DC; break;
        case 1: goto L_8021DFF4; break;
        case 2: goto L_8021E044; break;
        case 3: goto L_8021E00C; break;
        case 4: goto L_8021E080; break;
        case 5: goto L_8021E05C; break;
        default: switch_error(__func__, 0x8021DFEC, 0x80253680);
    }
    // 0x8021DFF0: nop

L_8021DFF4:
    // 0x8021DFF4: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
    // 0x8021DFF8: and         $s0, $t1, $s2
    ctx->r16 = ctx->r9 & ctx->r18;
    // 0x8021DFFC: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x8021E000: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021E004: b           L_8021DFC4
    // 0x8021E008: sb          $t2, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r10;
        goto L_8021DFC4;
    // 0x8021E008: sb          $t2, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r10;
L_8021E00C:
    // 0x8021E00C: addiu       $t3, $s0, 0x3
    ctx->r11 = ADD32(ctx->r16, 0X3);
    // 0x8021E010: and         $s0, $t3, $s2
    ctx->r16 = ctx->r11 & ctx->r18;
    // 0x8021E014: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8021E018: lbu         $t4, 0x0($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X0);
    // 0x8021E01C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021E020: slt         $at, $v0, $t4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8021E024: bne         $at, $zero, L_8021E03C
    if (ctx->r1 != 0) {
        // 0x8021E028: nop
    
            goto L_8021E03C;
    }
    // 0x8021E028: nop

    // 0x8021E02C: jal         0x80231A24
    // 0x8021E030: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8021E030: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_1:
    // 0x8021E034: b           L_8021DFC8
    // 0x8021E038: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8021DFC8;
    // 0x8021E038: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8021E03C:
    // 0x8021E03C: b           L_8021DFC4
    // 0x8021E040: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
        goto L_8021DFC4;
    // 0x8021E040: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
L_8021E044:
    // 0x8021E044: addiu       $t5, $s0, 0x3
    ctx->r13 = ADD32(ctx->r16, 0X3);
    // 0x8021E048: and         $s0, $t5, $s2
    ctx->r16 = ctx->r13 & ctx->r18;
    // 0x8021E04C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8021E050: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021E054: b           L_8021DFC4
    // 0x8021E058: sb          $t6, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r14;
        goto L_8021DFC4;
    // 0x8021E058: sb          $t6, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r14;
L_8021E05C:
    // 0x8021E05C: addiu       $t7, $s0, 0x3
    ctx->r15 = ADD32(ctx->r16, 0X3);
    // 0x8021E060: and         $s0, $t7, $s2
    ctx->r16 = ctx->r15 & ctx->r18;
    // 0x8021E064: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8021E068: lbu         $t9, 0x0($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X0);
    // 0x8021E06C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021E070: sb          $t8, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r24;
    // 0x8021E074: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8021E078: b           L_8021DFC4
    // 0x8021E07C: sb          $t0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r8;
        goto L_8021DFC4;
    // 0x8021E07C: sb          $t0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r8;
L_8021E080:
    // 0x8021E080: andi        $t1, $s0, 0x1
    ctx->r9 = ctx->r16 & 0X1;
    // 0x8021E084: beq         $t1, $zero, L_8021E098
    if (ctx->r9 == 0) {
        // 0x8021E088: andi        $t2, $s0, 0x2
        ctx->r10 = ctx->r16 & 0X2;
            goto L_8021E098;
    }
    // 0x8021E088: andi        $t2, $s0, 0x2
    ctx->r10 = ctx->r16 & 0X2;
    // 0x8021E08C: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8021E090: b           L_8021E0BC
    // 0x8021E094: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8021E0BC;
    // 0x8021E094: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8021E098:
    // 0x8021E098: beq         $t2, $zero, L_8021E0AC
    if (ctx->r10 == 0) {
        // 0x8021E09C: addiu       $t3, $s0, 0x7
        ctx->r11 = ADD32(ctx->r16, 0X7);
            goto L_8021E0AC;
    }
    // 0x8021E09C: addiu       $t3, $s0, 0x7
    ctx->r11 = ADD32(ctx->r16, 0X7);
    // 0x8021E0A0: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8021E0A4: b           L_8021E0B8
    // 0x8021E0A8: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8021E0B8;
    // 0x8021E0A8: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8021E0AC:
    // 0x8021E0AC: and         $s0, $t3, $s4
    ctx->r16 = ctx->r11 & ctx->r20;
    // 0x8021E0B0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8021E0B4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8021E0B8:
    // 0x8021E0B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8021E0BC:
    // 0x8021E0BC: ldc1        $f4, -0x8($v0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r2, -0X8);
    // 0x8021E0C0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8021E0C4: b           L_8021DFC4
    // 0x8021E0C8: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
        goto L_8021DFC4;
    // 0x8021E0C8: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
L_8021E0CC:
    // 0x8021E0CC: jal         0x80231A24
    // 0x8021E0D0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x8021E0D0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_2:
    // 0x8021E0D4: b           L_8021DFC8
    // 0x8021E0D8: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8021DFC8;
    // 0x8021E0D8: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8021E0DC:
    // 0x8021E0DC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8021E0E0:
    // 0x8021E0E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021E0E4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021E0E8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021E0EC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8021E0F0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8021E0F4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8021E0F8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8021E0FC: jr          $ra
    // 0x8021E100: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8021E100: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80223600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80223604: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80223608: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022360C: beq         $a0, $zero, L_80223624
    if (ctx->r4 == 0) {
        // 0x80223610: sw          $a0, -0x17AC($at)
        MEM_W(-0X17AC, ctx->r1) = ctx->r4;
            goto L_80223624;
    }
    // 0x80223610: sw          $a0, -0x17AC($at)
    MEM_W(-0X17AC, ctx->r1) = ctx->r4;
    // 0x80223614: jal         0x8023CF00
    // 0x80223618: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8023CF00(rdram, ctx);
        goto after_0;
    // 0x80223618: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8022361C: b           L_80223630
    // 0x80223620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80223630;
    // 0x80223620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80223624:
    // 0x80223624: jal         0x8023CF00
    // 0x80223628: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8023CF00(rdram, ctx);
        goto after_1;
    // 0x80223628: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x8022362C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80223630:
    // 0x80223630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80223634: jr          $ra
    // 0x80223638: nop

    return;
    // 0x80223638: nop

;}
RECOMP_FUNC void func_8024612C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024612C: addiu       $sp, $sp, -0x168
    ctx->r29 = ADD32(ctx->r29, -0X168);
    // 0x80246130: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80246134: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80246138: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8024613C: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x80246140: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80246144: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80246148: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8024614C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80246150: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80246154: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80246158: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8024615C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80246160: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    // 0x80246164: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80246168: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_8024616C:
    // 0x8024616C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80246170: sb          $zero, 0x102($v1)
    MEM_B(0X102, ctx->r3) = 0;
    // 0x80246174: sb          $zero, 0x103($v1)
    MEM_B(0X103, ctx->r3) = 0;
    // 0x80246178: sb          $zero, 0x104($v1)
    MEM_B(0X104, ctx->r3) = 0;
    // 0x8024617C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80246180: bne         $v0, $a0, L_8024616C
    if (ctx->r2 != ctx->r4) {
        // 0x80246184: sb          $zero, 0xFD($v1)
        MEM_B(0XFD, ctx->r3) = 0;
            goto L_8024616C;
    }
    // 0x80246184: sb          $zero, 0xFD($v1)
    MEM_B(0XFD, ctx->r3) = 0;
    // 0x80246188: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8024618C: sb          $t6, 0x100($s4)
    MEM_B(0X100, ctx->r20) = ctx->r14;
    // 0x80246190: lbu         $t7, 0x64($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X64);
    // 0x80246194: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80246198: blez        $t7, L_802463DC
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8024619C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_802463DC;
    }
    // 0x8024619C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802461A0: addiu       $fp, $zero, 0x80
    ctx->r30 = ADD32(0, 0X80);
    // 0x802461A4: addiu       $s6, $sp, 0x15A
    ctx->r22 = ADD32(ctx->r29, 0X15A);
    // 0x802461A8: addiu       $s5, $sp, 0x58
    ctx->r21 = ADD32(ctx->r29, 0X58);
    // 0x802461AC: addiu       $s2, $sp, 0x158
    ctx->r18 = ADD32(ctx->r29, 0X158);
L_802461B0:
    // 0x802461B0: blez        $s0, L_802461C0
    if (SIGNED(ctx->r16) <= 0) {
        // 0x802461B4: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_802461C0;
    }
    // 0x802461B4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802461B8: b           L_802461C8
    // 0x802461BC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_802461C8;
    // 0x802461BC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_802461C0:
    // 0x802461C0: lw          $s1, 0x60($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X60);
    // 0x802461C4: nop

L_802461C8:
    // 0x802461C8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802461CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802461D0: jal         0x80245404
    // 0x802461D4: andi        $a3, $s7, 0xFF
    ctx->r7 = ctx->r23 & 0XFF;
    func_80245404(rdram, ctx);
        goto after_0;
    // 0x802461D4: andi        $a3, $s7, 0xFF
    ctx->r7 = ctx->r23 & 0XFF;
    after_0:
    // 0x802461D8: beq         $v0, $zero, L_802461F0
    if (ctx->r2 == 0) {
        // 0x802461DC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802461F0;
    }
    // 0x802461DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802461E0: beq         $v0, $at, L_802461F4
    if (ctx->r2 == ctx->r1) {
        // 0x802461E4: slti        $at, $s1, 0x80
        ctx->r1 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
            goto L_802461F4;
    }
    // 0x802461E4: slti        $at, $s1, 0x80
    ctx->r1 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
    // 0x802461E8: b           L_802463E4
    // 0x802461EC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_802463E4;
    // 0x802461EC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_802461F0:
    // 0x802461F0: slti        $at, $s1, 0x80
    ctx->r1 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
L_802461F4:
    // 0x802461F4: beq         $at, $zero, L_802463C4
    if (ctx->r1 == 0) {
        // 0x802461F8: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_802463C4;
    }
    // 0x802461F8: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x802461FC: subu        $v1, $fp, $s1
    ctx->r3 = SUB32(ctx->r30, ctx->r17);
    // 0x80246200: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x80246204: beq         $t8, $zero, L_802462A0
    if (ctx->r24 == 0) {
        // 0x80246208: sll         $t9, $s1, 1
        ctx->r25 = S32(ctx->r17 << 1);
            goto L_802462A0;
    }
    // 0x80246208: sll         $t9, $s1, 1
    ctx->r25 = S32(ctx->r17 << 1);
    // 0x8024620C: addu        $t0, $s5, $t9
    ctx->r8 = ADD32(ctx->r21, ctx->r25);
    // 0x80246210: lhu         $at, 0x0($t0)
    ctx->r1 = MEM_HU(ctx->r8, 0X0);
    // 0x80246214: nop

    // 0x80246218: sh          $at, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r1;
    // 0x8024621C: lw          $t4, 0x60($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X60);
    // 0x80246220: lhu         $t3, 0x158($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X158);
    // 0x80246224: lbu         $t5, 0x158($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X158);
    // 0x80246228: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8024622C: bne         $at, $zero, L_8024629C
    if (ctx->r1 != 0) {
        // 0x80246230: addiu       $v0, $s1, 0x1
        ctx->r2 = ADD32(ctx->r17, 0X1);
            goto L_8024629C;
    }
    // 0x80246230: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x80246234: beq         $s0, $t5, L_8024629C
    if (ctx->r16 == ctx->r13) {
        // 0x80246238: addiu       $v0, $s1, 0x1
        ctx->r2 = ADD32(ctx->r17, 0X1);
            goto L_8024629C;
    }
    // 0x80246238: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8024623C: lbu         $t6, 0x159($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X159);
    // 0x80246240: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80246244: bgez        $t6, L_80246254
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80246248: sra         $t7, $t6, 2
        ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
            goto L_80246254;
    }
    // 0x80246248: sra         $t7, $t6, 2
    ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
    // 0x8024624C: addiu       $at, $t6, 0x3
    ctx->r1 = ADD32(ctx->r14, 0X3);
    // 0x80246250: sra         $t7, $at, 2
    ctx->r15 = S32(SIGNED(ctx->r1) >> 2);
L_80246254:
    // 0x80246254: bgez        $t5, L_80246268
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80246258: andi        $t8, $t5, 0x7
        ctx->r24 = ctx->r13 & 0X7;
            goto L_80246268;
    }
    // 0x80246258: andi        $t8, $t5, 0x7
    ctx->r24 = ctx->r13 & 0X7;
    // 0x8024625C: beq         $t8, $zero, L_80246268
    if (ctx->r24 == 0) {
        // 0x80246260: nop
    
            goto L_80246268;
    }
    // 0x80246260: nop

    // 0x80246264: addiu       $t8, $t8, -0x8
    ctx->r24 = ADD32(ctx->r24, -0X8);
L_80246268:
    // 0x80246268: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x8024626C: addu        $v1, $t7, $t9
    ctx->r3 = ADD32(ctx->r15, ctx->r25);
    // 0x80246270: addu        $v0, $s4, $v1
    ctx->r2 = ADD32(ctx->r20, ctx->r3);
    // 0x80246274: lbu         $t1, 0x101($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X101);
    // 0x80246278: bgez        $s0, L_8024628C
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8024627C: andi        $t0, $s0, 0x7
        ctx->r8 = ctx->r16 & 0X7;
            goto L_8024628C;
    }
    // 0x8024627C: andi        $t0, $s0, 0x7
    ctx->r8 = ctx->r16 & 0X7;
    // 0x80246280: beq         $t0, $zero, L_8024628C
    if (ctx->r8 == 0) {
        // 0x80246284: nop
    
            goto L_8024628C;
    }
    // 0x80246284: nop

    // 0x80246288: addiu       $t0, $t0, -0x8
    ctx->r8 = ADD32(ctx->r8, -0X8);
L_8024628C:
    // 0x8024628C: sllv        $t3, $t2, $t0
    ctx->r11 = S32(ctx->r10 << (ctx->r8 & 31));
    // 0x80246290: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x80246294: sb          $t4, 0x101($v0)
    MEM_B(0X101, ctx->r2) = ctx->r12;
    // 0x80246298: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
L_8024629C:
    // 0x8024629C: beq         $v0, $fp, L_802463C4
    if (ctx->r2 == ctx->r30) {
        // 0x802462A0: sll         $t6, $v0, 1
        ctx->r14 = S32(ctx->r2 << 1);
            goto L_802463C4;
    }
L_802462A0:
    // 0x802462A0: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x802462A4: addu        $a1, $s5, $t6
    ctx->r5 = ADD32(ctx->r21, ctx->r14);
    // 0x802462A8: addiu       $a0, $a1, 0x2
    ctx->r4 = ADD32(ctx->r5, 0X2);
L_802462AC:
    // 0x802462AC: lhu         $at, 0x0($a1)
    ctx->r1 = MEM_HU(ctx->r5, 0X0);
    // 0x802462B0: nop

    // 0x802462B4: sh          $at, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r1;
    // 0x802462B8: lw          $t9, 0x60($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X60);
    // 0x802462BC: lhu         $t7, 0x158($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X158);
    // 0x802462C0: lbu         $t2, 0x158($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X158);
    // 0x802462C4: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x802462C8: bne         $at, $zero, L_80246334
    if (ctx->r1 != 0) {
        // 0x802462CC: nop
    
            goto L_80246334;
    }
    // 0x802462CC: nop

    // 0x802462D0: beq         $s0, $t2, L_80246334
    if (ctx->r16 == ctx->r10) {
        // 0x802462D4: nop
    
            goto L_80246334;
    }
    // 0x802462D4: nop

    // 0x802462D8: lbu         $t0, 0x159($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X159);
    // 0x802462DC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802462E0: bgez        $t0, L_802462F0
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802462E4: sra         $t1, $t0, 2
        ctx->r9 = S32(SIGNED(ctx->r8) >> 2);
            goto L_802462F0;
    }
    // 0x802462E4: sra         $t1, $t0, 2
    ctx->r9 = S32(SIGNED(ctx->r8) >> 2);
    // 0x802462E8: addiu       $at, $t0, 0x3
    ctx->r1 = ADD32(ctx->r8, 0X3);
    // 0x802462EC: sra         $t1, $at, 2
    ctx->r9 = S32(SIGNED(ctx->r1) >> 2);
L_802462F0:
    // 0x802462F0: bgez        $t2, L_80246304
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802462F4: andi        $t3, $t2, 0x7
        ctx->r11 = ctx->r10 & 0X7;
            goto L_80246304;
    }
    // 0x802462F4: andi        $t3, $t2, 0x7
    ctx->r11 = ctx->r10 & 0X7;
    // 0x802462F8: beq         $t3, $zero, L_80246304
    if (ctx->r11 == 0) {
        // 0x802462FC: nop
    
            goto L_80246304;
    }
    // 0x802462FC: nop

    // 0x80246300: addiu       $t3, $t3, -0x8
    ctx->r11 = ADD32(ctx->r11, -0X8);
L_80246304:
    // 0x80246304: sll         $t4, $t3, 5
    ctx->r12 = S32(ctx->r11 << 5);
    // 0x80246308: addu        $v1, $t1, $t4
    ctx->r3 = ADD32(ctx->r9, ctx->r12);
    // 0x8024630C: addu        $v0, $s4, $v1
    ctx->r2 = ADD32(ctx->r20, ctx->r3);
    // 0x80246310: lbu         $t6, 0x101($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X101);
    // 0x80246314: bgez        $s0, L_80246328
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80246318: andi        $t5, $s0, 0x7
        ctx->r13 = ctx->r16 & 0X7;
            goto L_80246328;
    }
    // 0x80246318: andi        $t5, $s0, 0x7
    ctx->r13 = ctx->r16 & 0X7;
    // 0x8024631C: beq         $t5, $zero, L_80246328
    if (ctx->r13 == 0) {
        // 0x80246320: nop
    
            goto L_80246328;
    }
    // 0x80246320: nop

    // 0x80246324: addiu       $t5, $t5, -0x8
    ctx->r13 = ADD32(ctx->r13, -0X8);
L_80246328:
    // 0x80246328: sllv        $t7, $t8, $t5
    ctx->r15 = S32(ctx->r24 << (ctx->r13 & 31));
    // 0x8024632C: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x80246330: sb          $t9, 0x101($v0)
    MEM_B(0X101, ctx->r2) = ctx->r25;
L_80246334:
    // 0x80246334: lhu         $at, 0x0($a0)
    ctx->r1 = MEM_HU(ctx->r4, 0X0);
    // 0x80246338: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8024633C: sh          $at, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r1;
    // 0x80246340: lw          $t1, 0x60($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X60);
    // 0x80246344: lhu         $t3, 0x158($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X158);
    // 0x80246348: lbu         $t4, 0x158($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X158);
    // 0x8024634C: slt         $at, $t3, $t1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80246350: bne         $at, $zero, L_802463BC
    if (ctx->r1 != 0) {
        // 0x80246354: nop
    
            goto L_802463BC;
    }
    // 0x80246354: nop

    // 0x80246358: beq         $s0, $t4, L_802463BC
    if (ctx->r16 == ctx->r12) {
        // 0x8024635C: nop
    
            goto L_802463BC;
    }
    // 0x8024635C: nop

    // 0x80246360: lbu         $t8, 0x159($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X159);
    // 0x80246364: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80246368: bgez        $t8, L_80246378
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8024636C: sra         $t5, $t8, 2
        ctx->r13 = S32(SIGNED(ctx->r24) >> 2);
            goto L_80246378;
    }
    // 0x8024636C: sra         $t5, $t8, 2
    ctx->r13 = S32(SIGNED(ctx->r24) >> 2);
    // 0x80246370: addiu       $at, $t8, 0x3
    ctx->r1 = ADD32(ctx->r24, 0X3);
    // 0x80246374: sra         $t5, $at, 2
    ctx->r13 = S32(SIGNED(ctx->r1) >> 2);
L_80246378:
    // 0x80246378: bgez        $t4, L_8024638C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8024637C: andi        $t6, $t4, 0x7
        ctx->r14 = ctx->r12 & 0X7;
            goto L_8024638C;
    }
    // 0x8024637C: andi        $t6, $t4, 0x7
    ctx->r14 = ctx->r12 & 0X7;
    // 0x80246380: beq         $t6, $zero, L_8024638C
    if (ctx->r14 == 0) {
        // 0x80246384: nop
    
            goto L_8024638C;
    }
    // 0x80246384: nop

    // 0x80246388: addiu       $t6, $t6, -0x8
    ctx->r14 = ADD32(ctx->r14, -0X8);
L_8024638C:
    // 0x8024638C: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x80246390: addu        $v1, $t5, $t7
    ctx->r3 = ADD32(ctx->r13, ctx->r15);
    // 0x80246394: addu        $v0, $s4, $v1
    ctx->r2 = ADD32(ctx->r20, ctx->r3);
    // 0x80246398: lbu         $t9, 0x101($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X101);
    // 0x8024639C: bgez        $s0, L_802463B0
    if (SIGNED(ctx->r16) >= 0) {
        // 0x802463A0: andi        $t0, $s0, 0x7
        ctx->r8 = ctx->r16 & 0X7;
            goto L_802463B0;
    }
    // 0x802463A0: andi        $t0, $s0, 0x7
    ctx->r8 = ctx->r16 & 0X7;
    // 0x802463A4: beq         $t0, $zero, L_802463B0
    if (ctx->r8 == 0) {
        // 0x802463A8: nop
    
            goto L_802463B0;
    }
    // 0x802463A8: nop

    // 0x802463AC: addiu       $t0, $t0, -0x8
    ctx->r8 = ADD32(ctx->r8, -0X8);
L_802463B0:
    // 0x802463B0: sllv        $t3, $t2, $t0
    ctx->r11 = S32(ctx->r10 << (ctx->r8 & 31));
    // 0x802463B4: or          $t1, $t9, $t3
    ctx->r9 = ctx->r25 | ctx->r11;
    // 0x802463B8: sb          $t1, 0x101($v0)
    MEM_B(0X101, ctx->r2) = ctx->r9;
L_802463BC:
    // 0x802463BC: bne         $a0, $s6, L_802462AC
    if (ctx->r4 != ctx->r22) {
        // 0x802463C0: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_802462AC;
    }
    // 0x802463C0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_802463C4:
    // 0x802463C4: lbu         $t4, 0x64($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X64);
    // 0x802463C8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x802463CC: andi        $s0, $s7, 0xFF
    ctx->r16 = ctx->r23 & 0XFF;
    // 0x802463D0: slt         $at, $s0, $t4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x802463D4: bne         $at, $zero, L_802461B0
    if (ctx->r1 != 0) {
        // 0x802463D8: or          $s7, $s0, $zero
        ctx->r23 = ctx->r16 | 0;
            goto L_802461B0;
    }
    // 0x802463D8: or          $s7, $s0, $zero
    ctx->r23 = ctx->r16 | 0;
L_802463DC:
    // 0x802463DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802463E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_802463E4:
    // 0x802463E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802463E8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802463EC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802463F0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802463F4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802463F8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802463FC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80246400: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80246404: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80246408: jr          $ra
    // 0x8024640C: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    // 0x8024640C: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
RECOMP_FUNC void func_80247060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247060: lui         $t6, 0xA404
    ctx->r14 = S32(0XA404 << 16);
    // 0x80247064: lw          $a0, 0x10($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X10);
    // 0x80247068: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8024706C: andi        $t7, $a0, 0x1C
    ctx->r15 = ctx->r4 & 0X1C;
    // 0x80247070: beq         $t7, $zero, L_80247080
    if (ctx->r15 == 0) {
        // 0x80247074: nop
    
            goto L_80247080;
    }
    // 0x80247074: nop

    // 0x80247078: b           L_80247084
    // 0x8024707C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80247084;
    // 0x8024707C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80247080:
    // 0x80247080: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80247084:
    // 0x80247084: jr          $ra
    // 0x80247088: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80247088: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80203930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80203930: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80203934: addiu       $a0, $t6, 0x6EA0
    ctx->r4 = ADD32(ctx->r14, 0X6EA0);
    // 0x80203938: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8020393C: addiu       $v0, $v0, 0x72D8
    ctx->r2 = ADD32(ctx->r2, 0X72D8);
    // 0x80203940: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80203944:
    // 0x80203944: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    // 0x80203948: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x8020394C: sw          $zero, -0x1C($a0)
    MEM_W(-0X1C, ctx->r4) = 0;
    // 0x80203950: sw          $zero, -0x18($a0)
    MEM_W(-0X18, ctx->r4) = 0;
    // 0x80203954: sw          $zero, -0x14($a0)
    MEM_W(-0X14, ctx->r4) = 0;
    // 0x80203958: sw          $zero, -0x10($a0)
    MEM_W(-0X10, ctx->r4) = 0;
    // 0x8020395C: sw          $zero, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = 0;
    // 0x80203960: sw          $zero, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = 0;
    // 0x80203964: sw          $zero, -0x24($a0)
    MEM_W(-0X24, ctx->r4) = 0;
    // 0x80203968: sw          $zero, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = 0;
    // 0x8020396C: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
    // 0x80203970: bne         $at, $zero, L_80203944
    if (ctx->r1 != 0) {
        // 0x80203974: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_80203944;
    }
    // 0x80203974: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x80203978: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8020397C: addiu       $a1, $t7, 0x7390
    ctx->r5 = ADD32(ctx->r15, 0X7390);
    // 0x80203980: lui         $a3, 0x8025
    ctx->r7 = S32(0X8025 << 16);
    // 0x80203984: addiu       $a3, $a3, 0x7534
    ctx->r7 = ADD32(ctx->r7, 0X7534);
    // 0x80203988: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020398C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_80203990:
    // 0x80203990: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x80203994: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x80203998: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x8020399C: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x802039A0: sw          $zero, 0x50($v1)
    MEM_W(0X50, ctx->r3) = 0;
    // 0x802039A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802039A8: addiu       $a0, $v1, 0x10
    ctx->r4 = ADD32(ctx->r3, 0X10);
L_802039AC:
    // 0x802039AC: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x802039B0: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x802039B4: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x802039B8: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x802039BC: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x802039C0: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x802039C4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802039C8: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x802039CC: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x802039D0: sw          $zero, 0x50($v1)
    MEM_W(0X50, ctx->r3) = 0;
    // 0x802039D4: bne         $v0, $a2, L_802039AC
    if (ctx->r2 != ctx->r6) {
        // 0x802039D8: addiu       $a0, $a0, 0x20
        ctx->r4 = ADD32(ctx->r4, 0X20);
            goto L_802039AC;
    }
    // 0x802039D8: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x802039DC: addiu       $a1, $a1, 0x54
    ctx->r5 = ADD32(ctx->r5, 0X54);
    // 0x802039E0: bne         $a1, $a3, L_80203990
    if (ctx->r5 != ctx->r7) {
        // 0x802039E4: addiu       $v1, $v1, 0x54
        ctx->r3 = ADD32(ctx->r3, 0X54);
            goto L_80203990;
    }
    // 0x802039E4: addiu       $v1, $v1, 0x54
    ctx->r3 = ADD32(ctx->r3, 0X54);
    // 0x802039E8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802039EC: addiu       $v1, $v1, 0x6EA0
    ctx->r3 = ADD32(ctx->r3, 0X6EA0);
    // 0x802039F0: lw          $t9, 0x20($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X20);
    // 0x802039F4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802039F8: addiu       $v0, $v0, 0x7538
    ctx->r2 = ADD32(ctx->r2, 0X7538);
    // 0x802039FC: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x80203A00: addiu       $t8, $t8, 0x3FC4
    ctx->r24 = ADD32(ctx->r24, 0X3FC4);
    // 0x80203A04: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x80203A08: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80203A0C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80203A10: addu        $t1, $v1, $t0
    ctx->r9 = ADD32(ctx->r3, ctx->r8);
    // 0x80203A14: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x80203A18: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x80203A1C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203A20: addiu       $a0, $a0, 0x7540
    ctx->r4 = ADD32(ctx->r4, 0X7540);
    // 0x80203A24: sw          $t3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r11;
    // 0x80203A28: lw          $t4, 0x20($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X20);
    // 0x80203A2C: lw          $t7, 0x44($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X44);
    // 0x80203A30: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x80203A34: addiu       $t6, $t6, 0x4190
    ctx->r14 = ADD32(ctx->r14, 0X4190);
    // 0x80203A38: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80203A3C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80203A40: sw          $t5, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r13;
    // 0x80203A44: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80203A48: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80203A4C: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x80203A50: sw          $t6, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r14;
    // 0x80203A54: lw          $t2, 0x4($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X4);
    // 0x80203A58: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80203A5C: addiu       $a1, $a1, 0x7548
    ctx->r5 = ADD32(ctx->r5, 0X7548);
    // 0x80203A60: sw          $t2, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->r10;
    // 0x80203A64: lw          $t1, 0x44($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X44);
    // 0x80203A68: lw          $t5, 0x68($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X68);
    // 0x80203A6C: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x80203A70: addiu       $t4, $t4, 0x4360
    ctx->r12 = ADD32(ctx->r12, 0X4360);
    // 0x80203A74: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x80203A78: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80203A7C: sw          $t3, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r11;
    // 0x80203A80: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x80203A84: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x80203A88: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x80203A8C: sw          $t4, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->r12;
    // 0x80203A90: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x80203A94: sw          $t0, 0x4C($t7)
    MEM_W(0X4C, ctx->r15) = ctx->r8;
    // 0x80203A98: lw          $t9, 0x68($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X68);
    // 0x80203A9C: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x80203AA0: jr          $ra
    // 0x80203AA4: sw          $t2, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->r10;
    return;
    // 0x80203AA4: sw          $t2, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->r10;
;}
RECOMP_FUNC void func_80228D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228D9C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80228DA0: addiu       $v1, $v1, 0x8C0
    ctx->r3 = ADD32(ctx->r3, 0X8C0);
    // 0x80228DA4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80228DA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228DAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228DB0: bgez        $v0, L_80228DCC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228DB4: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_80228DCC;
    }
    // 0x80228DB4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80228DB8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80228DBC: jal         0x80231A24
    // 0x80228DC0: addiu       $a0, $a0, 0x3E20
    ctx->r4 = ADD32(ctx->r4, 0X3E20);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80228DC0: addiu       $a0, $a0, 0x3E20
    ctx->r4 = ADD32(ctx->r4, 0X3E20);
    after_0:
    // 0x80228DC4: b           L_80228DD4
    // 0x80228DC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80228DD4;
    // 0x80228DC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80228DCC:
    // 0x80228DCC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80228DD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80228DD4:
    // 0x80228DD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80228DD8: jr          $ra
    // 0x80228DDC: nop

    return;
    // 0x80228DDC: nop

;}
RECOMP_FUNC void func_8023FC40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FC40: mfc0        $t4, Status
    ctx->r12 = cop0_status_read(ctx);
    // 0x8023FC44: andi        $v0, $t4, 0xFF01
    ctx->r2 = ctx->r12 & 0XFF01;
    // 0x8023FC48: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x8023FC4C: addiu       $t0, $t0, 0x168C
    ctx->r8 = ADD32(ctx->r8, 0X168C);
    // 0x8023FC50: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x8023FC54: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023FC58: xor         $t0, $t3, $at
    ctx->r8 = ctx->r11 ^ ctx->r1;
    // 0x8023FC5C: andi        $t0, $t0, 0xFF00
    ctx->r8 = ctx->r8 & 0XFF00;
    // 0x8023FC60: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x8023FC64: lui         $t2, 0xA430
    ctx->r10 = S32(0XA430 << 16);
    // 0x8023FC68: lw          $t2, 0xC($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XC);
    // 0x8023FC6C: beq         $t2, $zero, L_8023FC84
    if (ctx->r10 == 0) {
        // 0x8023FC70: srl         $t1, $t3, 16
        ctx->r9 = S32(U32(ctx->r11) >> 16);
            goto L_8023FC84;
    }
    // 0x8023FC70: srl         $t1, $t3, 16
    ctx->r9 = S32(U32(ctx->r11) >> 16);
    // 0x8023FC74: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023FC78: xor         $t1, $t1, $at
    ctx->r9 = ctx->r9 ^ ctx->r1;
    // 0x8023FC7C: andi        $t1, $t1, 0x3F
    ctx->r9 = ctx->r9 & 0X3F;
    // 0x8023FC80: or          $t2, $t2, $t1
    ctx->r10 = ctx->r10 | ctx->r9;
L_8023FC84:
    // 0x8023FC84: sll         $t2, $t2, 16
    ctx->r10 = S32(ctx->r10 << 16);
    // 0x8023FC88: or          $v0, $v0, $t2
    ctx->r2 = ctx->r2 | ctx->r10;
    // 0x8023FC8C: lui         $at, 0x3F
    ctx->r1 = S32(0X3F << 16);
    // 0x8023FC90: and         $t0, $a0, $at
    ctx->r8 = ctx->r4 & ctx->r1;
    // 0x8023FC94: and         $t0, $t0, $t3
    ctx->r8 = ctx->r8 & ctx->r11;
    // 0x8023FC98: srl         $t0, $t0, 15
    ctx->r8 = S32(U32(ctx->r8) >> 15);
    // 0x8023FC9C: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x8023FCA0: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8023FCA4: lhu         $t2, 0x5670($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X5670);
    // 0x8023FCA8: lui         $at, 0xA430
    ctx->r1 = S32(0XA430 << 16);
    // 0x8023FCAC: sw          $t2, 0xC($at)
    MEM_W(0XC, ctx->r1) = ctx->r10;
    // 0x8023FCB0: andi        $t0, $a0, 0xFF01
    ctx->r8 = ctx->r4 & 0XFF01;
    // 0x8023FCB4: andi        $t1, $t3, 0xFF00
    ctx->r9 = ctx->r11 & 0XFF00;
    // 0x8023FCB8: and         $t0, $t0, $t1
    ctx->r8 = ctx->r8 & ctx->r9;
    // 0x8023FCBC: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x8023FCC0: ori         $at, $at, 0xFF
    ctx->r1 = ctx->r1 | 0XFF;
    // 0x8023FCC4: and         $t4, $t4, $at
    ctx->r12 = ctx->r12 & ctx->r1;
    // 0x8023FCC8: or          $t4, $t4, $t0
    ctx->r12 = ctx->r12 | ctx->r8;
    // 0x8023FCCC: mtc0        $t4, Status
    cop0_status_write(ctx, ctx->r12);    // 0x8023FCD0: nop

    // 0x8023FCD4: nop

    // 0x8023FCD8: jr          $ra
    // 0x8023FCDC: nop

    return;
    // 0x8023FCDC: nop

;}
RECOMP_FUNC void func_80237738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237738: lw          $t6, 0x44($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X44);
    // 0x8023773C: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x80237740: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80237744: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80237748: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8023774C: ldc1        $f4, 0x5640($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X5640);
    // 0x80237750: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80237754: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80237758: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x8023775C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80237760: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80237764: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80237768: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8023776C: div.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x80237770: add.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d + ctx->f6.d;
    // 0x80237774: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x80237778: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8023777C: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x80237780: nop

    // 0x80237784: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x80237788: jr          $ra
    // 0x8023778C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x8023778C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void func_80208128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80208128: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8020812C: lwc1        $f0, 0x2B10($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2B10);
    // 0x80208130: lbu         $a2, 0x2A8($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X2A8);
    // 0x80208134: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80208138: lwc1        $f2, 0x2B14($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2B14);
    // 0x8020813C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80208140: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x80208144: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
    // 0x80208148: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x8020814C: swc1        $f2, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f2.u32l;
    // 0x80208150: swc1        $f2, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f2.u32l;
    // 0x80208154: blez        $a2, L_80208220
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80208158: swc1        $f2, 0xC($a1)
        MEM_W(0XC, ctx->r5) = ctx->f2.u32l;
            goto L_80208220;
    }
    // 0x80208158: swc1        $f2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f2.u32l;
    // 0x8020815C: addiu       $v0, $a0, 0x260
    ctx->r2 = ADD32(ctx->r4, 0X260);
    // 0x80208160: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
L_80208164:
    // 0x80208164: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80208168: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8020816C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80208170: andi        $t7, $v1, 0xFFFF
    ctx->r15 = ctx->r3 & 0XFFFF;
    // 0x80208174: slt         $at, $t7, $a2
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80208178: mflo        $t6
    ctx->r14 = lo;
    // 0x8020817C: addu        $a0, $v0, $t6
    ctx->r4 = ADD32(ctx->r2, ctx->r14);
    // 0x80208180: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80208184: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80208188: lwc1        $f12, 0x8($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8020818C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80208190: nop

    // 0x80208194: bc1fl       L_802081A4
    if (!c1cs) {
        // 0x80208198: lwc1        $f6, 0xC($a1)
        ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
            goto L_802081A4;
    }
    goto skip_0;
    // 0x80208198: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    skip_0:
    // 0x8020819C: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x802081A0: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
L_802081A4:
    // 0x802081A4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x802081A8: nop

    // 0x802081AC: bc1fl       L_802081BC
    if (!c1cs) {
        // 0x802081B0: lwc1        $f8, 0x4($a1)
        ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
            goto L_802081BC;
    }
    goto skip_1;
    // 0x802081B0: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    skip_1:
    // 0x802081B4: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x802081B8: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
L_802081BC:
    // 0x802081BC: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x802081C0: nop

    // 0x802081C4: bc1fl       L_802081D4
    if (!c1cs) {
        // 0x802081C8: lwc1        $f10, 0x10($a1)
        ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
            goto L_802081D4;
    }
    goto skip_2;
    // 0x802081C8: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    skip_2:
    // 0x802081CC: swc1        $f2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f2.u32l;
    // 0x802081D0: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
L_802081D4:
    // 0x802081D4: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x802081D8: nop

    // 0x802081DC: bc1fl       L_802081EC
    if (!c1cs) {
        // 0x802081E0: lwc1        $f16, 0x8($a1)
        ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
            goto L_802081EC;
    }
    goto skip_3;
    // 0x802081E0: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    skip_3:
    // 0x802081E4: swc1        $f2, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f2.u32l;
    // 0x802081E8: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
L_802081EC:
    // 0x802081EC: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x802081F0: nop

    // 0x802081F4: bc1fl       L_80208204
    if (!c1cs) {
        // 0x802081F8: lwc1        $f18, 0x14($a1)
        ctx->f18.u32l = MEM_W(ctx->r5, 0X14);
            goto L_80208204;
    }
    goto skip_4;
    // 0x802081F8: lwc1        $f18, 0x14($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X14);
    skip_4:
    // 0x802081FC: swc1        $f12, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f12.u32l;
    // 0x80208200: lwc1        $f18, 0x14($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X14);
L_80208204:
    // 0x80208204: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x80208208: nop

    // 0x8020820C: bc1f        L_80208218
    if (!c1cs) {
        // 0x80208210: nop
    
            goto L_80208218;
    }
    // 0x80208210: nop

    // 0x80208214: swc1        $f12, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f12.u32l;
L_80208218:
    // 0x80208218: bne         $at, $zero, L_80208164
    if (ctx->r1 != 0) {
        // 0x8020821C: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_80208164;
    }
    // 0x8020821C: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_80208220:
    // 0x80208220: jr          $ra
    // 0x80208224: nop

    return;
    // 0x80208224: nop

;}
RECOMP_FUNC void func_8022EDCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022EDCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EDD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EDD4: bltz        $a0, L_8022EDF4
    if (SIGNED(ctx->r4) < 0) {
        // 0x8022EDD8: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_8022EDF4;
    }
    // 0x8022EDD8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8022EDDC: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8022EDE0: lhu         $t6, 0xC06($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XC06);
    // 0x8022EDE4: sll         $v0, $a1, 4
    ctx->r2 = S32(ctx->r5 << 4);
    // 0x8022EDE8: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8022EDEC: bne         $at, $zero, L_8022EE08
    if (ctx->r1 != 0) {
        // 0x8022EDF0: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_8022EE08;
    }
    // 0x8022EDF0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
L_8022EDF4:
    // 0x8022EDF4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022EDF8: jal         0x80231A24
    // 0x8022EDFC: addiu       $a0, $a0, 0x49AC
    ctx->r4 = ADD32(ctx->r4, 0X49AC);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022EDFC: addiu       $a0, $a0, 0x49AC
    ctx->r4 = ADD32(ctx->r4, 0X49AC);
    after_0:
    // 0x8022EE00: b           L_8022EE50
    // 0x8022EE04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022EE50;
    // 0x8022EE04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022EE08:
    // 0x8022EE08: addiu       $a0, $a0, 0x8D0
    ctx->r4 = ADD32(ctx->r4, 0X8D0);
    // 0x8022EE0C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8022EE10: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022EE14: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022EE18: addu        $v1, $t7, $v0
    ctx->r3 = ADD32(ctx->r15, ctx->r2);
    // 0x8022EE1C: lbu         $t8, 0x1($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X1);
    // 0x8022EE20: bnel        $t8, $zero, L_8022EE40
    if (ctx->r24 != 0) {
        // 0x8022EE24: sb          $zero, 0x3($v1)
        MEM_B(0X3, ctx->r3) = 0;
            goto L_8022EE40;
    }
    goto skip_0;
    // 0x8022EE24: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    skip_0:
    // 0x8022EE28: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022EE2C: jal         0x80231A24
    // 0x8022EE30: addiu       $a0, $a0, 0x49CC
    ctx->r4 = ADD32(ctx->r4, 0X49CC);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022EE30: addiu       $a0, $a0, 0x49CC
    ctx->r4 = ADD32(ctx->r4, 0X49CC);
    after_1:
    // 0x8022EE34: b           L_8022EE50
    // 0x8022EE38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022EE50;
    // 0x8022EE38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EE3C: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
L_8022EE40:
    // 0x8022EE40: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8022EE44: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x8022EE48: sb          $zero, 0x1($t0)
    MEM_B(0X1, ctx->r8) = 0;
    // 0x8022EE4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022EE50:
    // 0x8022EE50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022EE54: jr          $ra
    // 0x8022EE58: nop

    return;
    // 0x8022EE58: nop

;}
RECOMP_FUNC void func_802306FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802306FC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80230700: slti        $at, $t6, 0x30
    ctx->r1 = SIGNED(ctx->r14) < 0X30 ? 1 : 0;
    // 0x80230704: bne         $at, $zero, L_80230720
    if (ctx->r1 != 0) {
        // 0x80230708: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_80230720;
    }
    // 0x80230708: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8023070C: slti        $at, $t6, 0x3A
    ctx->r1 = SIGNED(ctx->r14) < 0X3A ? 1 : 0;
    // 0x80230710: beql        $at, $zero, L_80230724
    if (ctx->r1 == 0) {
        // 0x80230714: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80230724;
    }
    goto skip_0;
    // 0x80230714: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80230718: jr          $ra
    // 0x8023071C: addiu       $v0, $t6, -0x30
    ctx->r2 = ADD32(ctx->r14, -0X30);
    return;
    // 0x8023071C: addiu       $v0, $t6, -0x30
    ctx->r2 = ADD32(ctx->r14, -0X30);
L_80230720:
    // 0x80230720: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230724:
    // 0x80230724: jr          $ra
    // 0x80230728: nop

    return;
    // 0x80230728: nop

;}
RECOMP_FUNC void func_80232004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80232004: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80232008: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8023200C: lw          $v1, 0x3930($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3930);
    // 0x80232010: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80232014: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x80232018: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8023201C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80232020: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80232024: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80232028: blez        $v1, L_8023209C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8023202C: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_8023209C;
    }
    // 0x8023202C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80232030: lui         $s0, 0x8028
    ctx->r16 = S32(0X8028 << 16);
    // 0x80232034: addiu       $s0, $s0, 0x3530
    ctx->r16 = ADD32(ctx->r16, 0X3530);
    // 0x80232038: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
L_8023203C:
    // 0x8023203C: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80232040: addiu       $t7, $t7, 0x3530
    ctx->r15 = ADD32(ctx->r15, 0X3530);
    // 0x80232044: c.le.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl <= ctx->f4.fl;
    // 0x80232048: sll         $t6, $v1, 4
    ctx->r14 = S32(ctx->r3 << 4);
    // 0x8023204C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80232050: bc1fl       L_80232064
    if (!c1cs) {
        // 0x80232054: lw          $a1, 0x0($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X0);
            goto L_80232064;
    }
    goto skip_0;
    // 0x80232054: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x80232058: b           L_8023208C
    // 0x8023205C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
        goto L_8023208C;
    // 0x8023205C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80232060: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
L_80232064:
    // 0x80232064: lhu         $a2, 0x6($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X6);
    // 0x80232068: lbu         $a3, 0x4($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X4);
    // 0x8023206C: jal         0x80232EE0
    // 0x80232070: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80232EE0(rdram, ctx);
        goto after_0;
    // 0x80232070: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x80232074: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80232078: lw          $v1, 0x3930($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3930);
    // 0x8023207C: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80232080: addiu       $t9, $t9, 0x3530
    ctx->r25 = ADD32(ctx->r25, 0X3530);
    // 0x80232084: sll         $t8, $v1, 4
    ctx->r24 = S32(ctx->r3 << 4);
    // 0x80232088: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
L_8023208C:
    // 0x8023208C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x80232090: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x80232094: bnel        $at, $zero, L_8023203C
    if (ctx->r1 != 0) {
        // 0x80232098: lwc1        $f4, 0x8($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
            goto L_8023203C;
    }
    goto skip_1;
    // 0x80232098: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    skip_1:
L_8023209C:
    // 0x8023209C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802320A0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802320A4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x802320A8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x802320AC: jr          $ra
    // 0x802320B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802320B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
