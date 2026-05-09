#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80223F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223F70: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80223F74: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80223F78: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80223F7C: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x80223F80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80223F84: lw          $t7, 0x5140($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5140);
    // 0x80223F88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80223F8C: and         $t8, $t7, $a1
    ctx->r24 = ctx->r15 & ctx->r5;
    // 0x80223F90: beq         $t8, $zero, L_80223FA0
    if (ctx->r24 == 0) {
        // 0x80223F94: nop
    
            goto L_80223FA0;
    }
    // 0x80223F94: nop

    // 0x80223F98: jr          $ra
    // 0x80223F9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80223F9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80223FA0:
    // 0x80223FA0: jr          $ra
    // 0x80223FA4: nop

    return;
    // 0x80223FA4: nop

;}
RECOMP_FUNC void func_8023D128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D128: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8023D12C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8023D130: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023D134: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023D138: ld          $t7, 0x8($sp)
    ctx->r15 = LD(ctx->r29, 0X8);
    // 0x8023D13C: ld          $t6, 0x0($sp)
    ctx->r14 = LD(ctx->r29, 0X0);
    // 0x8023D140: ddivu       $zero, $t6, $t7
    DDIVU(U64(ctx->r14), U64(ctx->r15), &lo, &hi);
    // 0x8023D144: bne         $t7, $zero, L_8023D150
    if (ctx->r15 != 0) {
        // 0x8023D148: nop
    
            goto L_8023D150;
    }
    // 0x8023D148: nop

    // 0x8023D14C: break       7
    do_break(2149830988);
L_8023D150:
    // 0x8023D150: mflo        $v0
    ctx->r2 = lo;
    // 0x8023D154: dsll32      $v1, $v0, 0
    ctx->r3 = ctx->r2 << (0 + 32);
    // 0x8023D158: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x8023D15C: jr          $ra
    // 0x8023D160: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x8023D160: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void func_80241670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80241670: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80241674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80241678: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8024167C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80241680: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80241684: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x80241688: beql        $t6, $zero, L_80241748
    if (ctx->r14 == 0) {
        // 0x8024168C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80241748;
    }
    goto skip_0;
    // 0x8024168C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80241690: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80241694: jal         0x80237840
    // 0x80241698: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80237840(rdram, ctx);
        goto after_0;
    // 0x80241698: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8024169C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802416A0: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x802416A4: beq         $v0, $zero, L_80241744
    if (ctx->r2 == 0) {
        // 0x802416A8: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80241744;
    }
    // 0x802416A8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x802416AC: lbu         $v1, 0x3B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X3B);
    // 0x802416B0: bgez        $v1, L_802416C4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x802416B4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_802416C4;
    }
    // 0x802416B4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802416B8: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
    // 0x802416BC: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x802416C0: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_802416C4:
    // 0x802416C4: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x802416C8: lw          $t8, 0x1C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1C);
    // 0x802416CC: addiu       $t2, $zero, 0xD
    ctx->r10 = ADD32(0, 0XD);
    // 0x802416D0: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x802416D4: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x802416D8: sh          $t2, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r10;
    // 0x802416DC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x802416E0: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x802416E4: lh          $t3, 0x1A($a3)
    ctx->r11 = MEM_H(ctx->r7, 0X1A);
    // 0x802416E8: sh          $t3, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r11;
    // 0x802416EC: lbu         $t4, 0x37($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X37);
    // 0x802416F0: sb          $t4, 0x12($a2)
    MEM_B(0X12, ctx->r6) = ctx->r12;
    // 0x802416F4: lh          $t5, 0x32($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X32);
    // 0x802416F8: sb          $v1, 0x13($a2)
    MEM_B(0X13, ctx->r6) = ctx->r3;
    // 0x802416FC: sh          $t5, 0x10($a2)
    MEM_H(0X10, ctx->r6) = ctx->r13;
    // 0x80241700: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80241704: swc1        $f4, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f4.u32l;
    // 0x80241708: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8024170C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x80241710: jal         0x80237738
    // 0x80241714: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_80237738(rdram, ctx);
        goto after_1;
    // 0x80241714: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_1:
    // 0x80241718: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8024171C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80241720: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80241724: sw          $v0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r2;
    // 0x80241728: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8024172C: sw          $t6, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r14;
    // 0x80241730: lw          $t7, 0x8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X8);
    // 0x80241734: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    // 0x80241738: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8024173C: jalr        $t9
    // 0x80241740: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80241740: nop

    after_2:
L_80241744:
    // 0x80241744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80241748:
    // 0x80241748: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8024174C: jr          $ra
    // 0x80241750: nop

    return;
    // 0x80241750: nop

;}
RECOMP_FUNC void func_8023D0C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D0C0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8023D0C4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8023D0C8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023D0CC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023D0D0: ld          $t7, 0x8($sp)
    ctx->r15 = LD(ctx->r29, 0X8);
    // 0x8023D0D4: ld          $t6, 0x0($sp)
    ctx->r14 = LD(ctx->r29, 0X0);
    // 0x8023D0D8: dsrlv       $v0, $t6, $t7
    ctx->r2 = ctx->r14 >> (ctx->r15 & 63);
    // 0x8023D0DC: dsll32      $v1, $v0, 0
    ctx->r3 = ctx->r2 << (0 + 32);
    // 0x8023D0E0: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x8023D0E4: jr          $ra
    // 0x8023D0E8: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x8023D0E8: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void func_8022CE68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022CE68: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8022CE6C: addiu       $v1, $v1, -0x78D7
    ctx->r3 = ADD32(ctx->r3, -0X78D7);
    // 0x8022CE70: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022CE74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CE78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CE7C: bne         $v0, $zero, L_8022CE98
    if (ctx->r2 != 0) {
        // 0x8022CE80: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_8022CE98;
    }
    // 0x8022CE80: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022CE84: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022CE88: jal         0x80231A24
    // 0x8022CE8C: addiu       $a0, $a0, 0x45C4
    ctx->r4 = ADD32(ctx->r4, 0X45C4);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022CE8C: addiu       $a0, $a0, 0x45C4
    ctx->r4 = ADD32(ctx->r4, 0X45C4);
    after_0:
    // 0x8022CE90: b           L_8022CFA0
    // 0x8022CE94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022CFA0;
    // 0x8022CE94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022CE98:
    // 0x8022CE98: sb          $zero, -0x78D0($at)
    MEM_B(-0X78D0, ctx->r1) = 0;
    // 0x8022CE9C: addiu       $at, $zero, 0x61
    ctx->r1 = ADD32(0, 0X61);
    // 0x8022CEA0: bne         $v0, $at, L_8022CEB8
    if (ctx->r2 != ctx->r1) {
        // 0x8022CEA4: lui         $t6, 0x8028
        ctx->r14 = S32(0X8028 << 16);
            goto L_8022CEB8;
    }
    // 0x8022CEA4: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8022CEA8: jal         0x8022C584
    // 0x8022CEAC: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    func_8022C584(rdram, ctx);
        goto after_1;
    // 0x8022CEAC: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    after_1:
    // 0x8022CEB0: b           L_8022CFA0
    // 0x8022CEB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022CFA0;
    // 0x8022CEB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022CEB8:
    // 0x8022CEB8: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x8022CEBC: lbu         $t6, -0x78D5($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X78D5);
    // 0x8022CEC0: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8022CEC4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022CEC8: beq         $t6, $zero, L_8022CF68
    if (ctx->r14 == 0) {
        // 0x8022CECC: nop
    
            goto L_8022CF68;
    }
    // 0x8022CECC: nop

    // 0x8022CED0: lbu         $t7, -0x78D2($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X78D2);
    // 0x8022CED4: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8022CED8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8022CEDC: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x8022CEE0: lw          $a0, -0x78E0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X78E0);
    // 0x8022CEE4: jal         0x8023E030
    // 0x8022CEE8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_8023E030(rdram, ctx);
        goto after_2;
    // 0x8022CEE8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_2:
    // 0x8022CEEC: beq         $v0, $zero, L_8022CF38
    if (ctx->r2 == 0) {
        // 0x8022CEF0: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8022CF38;
    }
    // 0x8022CEF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022CEF4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8022CEF8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022CEFC: sb          $t9, -0x78D4($at)
    MEM_B(-0X78D4, ctx->r1) = ctx->r25;
    // 0x8022CF00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022CF04: jal         0x8022D560
    // 0x8022CF08: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    func_8022D560(rdram, ctx);
        goto after_3;
    // 0x8022CF08: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    after_3:
    // 0x8022CF0C: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8022CF10: lw          $t0, -0x78C0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X78C0);
    // 0x8022CF14: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022CF18: beq         $t0, $zero, L_8022CF40
    if (ctx->r8 == 0) {
        // 0x8022CF1C: nop
    
            goto L_8022CF40;
    }
    // 0x8022CF1C: nop

    // 0x8022CF20: sw          $zero, -0x78E8($at)
    MEM_W(-0X78E8, ctx->r1) = 0;
    // 0x8022CF24: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022CF28: jal         0x8022C6A4
    // 0x8022CF2C: sb          $zero, -0x78D5($at)
    MEM_B(-0X78D5, ctx->r1) = 0;
    func_8022C6A4(rdram, ctx);
        goto after_4;
    // 0x8022CF2C: sb          $zero, -0x78D5($at)
    MEM_B(-0X78D5, ctx->r1) = 0;
    after_4:
    // 0x8022CF30: b           L_8022CFA0
    // 0x8022CF34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022CFA0;
    // 0x8022CF34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022CF38:
    // 0x8022CF38: jal         0x8022D560
    // 0x8022CF3C: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    func_8022D560(rdram, ctx);
        goto after_5;
    // 0x8022CF3C: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    after_5:
L_8022CF40:
    // 0x8022CF40: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x8022CF44: lw          $t1, -0x78E8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X78E8);
    // 0x8022CF48: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022CF4C: sb          $zero, -0x78D5($at)
    MEM_B(-0X78D5, ctx->r1) = 0;
    // 0x8022CF50: beq         $t1, $zero, L_8022CF70
    if (ctx->r9 == 0) {
        // 0x8022CF54: nop
    
            goto L_8022CF70;
    }
    // 0x8022CF54: nop

    // 0x8022CF58: jal         0x8022C620
    // 0x8022CF5C: nop

    func_8022C620(rdram, ctx);
        goto after_6;
    // 0x8022CF5C: nop

    after_6:
    // 0x8022CF60: b           L_8022CF70
    // 0x8022CF64: nop

        goto L_8022CF70;
    // 0x8022CF64: nop

L_8022CF68:
    // 0x8022CF68: jal         0x8022D560
    // 0x8022CF6C: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    func_8022D560(rdram, ctx);
        goto after_7;
    // 0x8022CF6C: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    after_7:
L_8022CF70:
    // 0x8022CF70: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x8022CF74: lbu         $t2, -0x78D7($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X78D7);
    // 0x8022CF78: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
    // 0x8022CF7C: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x8022CF80: beql        $t2, $at, L_8022CFA0
    if (ctx->r10 == ctx->r1) {
        // 0x8022CF84: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022CFA0;
    }
    goto skip_0;
    // 0x8022CF84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8022CF88: lbu         $t3, -0x78D6($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X78D6);
    // 0x8022CF8C: bnel        $t3, $zero, L_8022CFA0
    if (ctx->r11 != 0) {
        // 0x8022CF90: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022CFA0;
    }
    goto skip_1;
    // 0x8022CF90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8022CF94: jal         0x8022C480
    // 0x8022CF98: nop

    func_8022C480(rdram, ctx);
        goto after_8;
    // 0x8022CF98: nop

    after_8:
    // 0x8022CF9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022CFA0:
    // 0x8022CFA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022CFA4: jr          $ra
    // 0x8022CFA8: nop

    return;
    // 0x8022CFA8: nop

;}
RECOMP_FUNC void func_8022B2F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B2F4: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8022B2F8: lw          $a2, 0x5E70($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X5E70);
    // 0x8022B2FC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8022B300: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x8022B304: blez        $a2, L_8022B368
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8022B308: lui         $a3, 0x8027
        ctx->r7 = S32(0X8027 << 16);
            goto L_8022B368;
    }
    // 0x8022B308: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x8022B30C: addiu       $a3, $a3, 0x5E80
    ctx->r7 = ADD32(ctx->r7, 0X5E80);
L_8022B310:
    // 0x8022B310: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x8022B314: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x8022B318: bnel        $at, $zero, L_8022B33C
    if (ctx->r1 != 0) {
        // 0x8022B31C: sltu        $at, $a0, $a1
        ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
            goto L_8022B33C;
    }
    goto skip_0;
    // 0x8022B31C: sltu        $at, $a0, $a1
    ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
    skip_0:
    // 0x8022B320: lw          $t6, 0x4($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X4);
    // 0x8022B324: sltu        $at, $v0, $t6
    ctx->r1 = ctx->r2 < ctx->r14 ? 1 : 0;
    // 0x8022B328: beql        $at, $zero, L_8022B33C
    if (ctx->r1 == 0) {
        // 0x8022B32C: sltu        $at, $a0, $a1
        ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
            goto L_8022B33C;
    }
    goto skip_1;
    // 0x8022B32C: sltu        $at, $a0, $a1
    ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
    skip_1:
    // 0x8022B330: jr          $ra
    // 0x8022B334: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8022B334: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022B338: sltu        $at, $a0, $a1
    ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
L_8022B33C:
    // 0x8022B33C: bne         $at, $zero, L_8022B35C
    if (ctx->r1 != 0) {
        // 0x8022B340: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8022B35C;
    }
    // 0x8022B340: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B344: lw          $t7, 0x4($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X4);
    // 0x8022B348: sltu        $at, $a0, $t7
    ctx->r1 = ctx->r4 < ctx->r15 ? 1 : 0;
    // 0x8022B34C: beql        $at, $zero, L_8022B360
    if (ctx->r1 == 0) {
        // 0x8022B350: slt         $at, $v1, $a2
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_8022B360;
    }
    goto skip_2;
    // 0x8022B350: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    skip_2:
    // 0x8022B354: jr          $ra
    // 0x8022B358: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8022B358: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022B35C:
    // 0x8022B35C: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
L_8022B360:
    // 0x8022B360: bne         $at, $zero, L_8022B310
    if (ctx->r1 != 0) {
        // 0x8022B364: addiu       $a3, $a3, 0x8
        ctx->r7 = ADD32(ctx->r7, 0X8);
            goto L_8022B310;
    }
    // 0x8022B364: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
L_8022B368:
    // 0x8022B368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B36C: jr          $ra
    // 0x8022B370: nop

    return;
    // 0x8022B370: nop

;}
RECOMP_FUNC void func_8022AC20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022AC20: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x8022AC24: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x8022AC28: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8022AC2C: sra         $t6, $v0, 22
    ctx->r14 = S32(SIGNED(ctx->r2) >> 22);
    // 0x8022AC30: andi        $t7, $t6, 0x1FF
    ctx->r15 = ctx->r14 & 0X1FF;
    // 0x8022AC34: slti        $at, $t7, 0x136
    ctx->r1 = SIGNED(ctx->r15) < 0X136 ? 1 : 0;
    // 0x8022AC38: beql        $at, $zero, L_8022AD84
    if (ctx->r1 == 0) {
        // 0x8022AC3C: c.eq.s      $f6, $f6
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f6.fl == ctx->f6.fl;
            goto L_8022AD84;
    }
    goto skip_0;
    // 0x8022AC3C: c.eq.s      $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f6.fl == ctx->f6.fl;
    skip_0:
    // 0x8022AC40: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8022AC44: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8022AC48: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8022AC4C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8022AC50: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8022AC54: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8022AC58: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022AC5C: bc1fl       L_8022AC70
    if (!c1cs) {
        // 0x8022AC60: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_8022AC70;
    }
    goto skip_1;
    // 0x8022AC60: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_1:
    // 0x8022AC64: b           L_8022AC70
    // 0x8022AC68: mov.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = ctx->f6.fl;
        goto L_8022AC70;
    // 0x8022AC68: mov.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = ctx->f6.fl;
    // 0x8022AC6C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8022AC70:
    // 0x8022AC70: ldc1        $f8, 0x3F38($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X3F38);
    // 0x8022AC74: cvt.d.s     $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.d = CVT_D_S(ctx->f0.fl);
    // 0x8022AC78: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8022AC7C: mul.d       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f12.d, ctx->f8.d);
    // 0x8022AC80: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x8022AC84: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8022AC88: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8022AC8C: add.d       $f14, $f10, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f14.d = ctx->f10.d + ctx->f18.d;
    // 0x8022AC90: c.le.d      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.d <= ctx->f14.d;
    // 0x8022AC94: nop

    // 0x8022AC98: bc1fl       L_8022ACC8
    if (!c1cs) {
        // 0x8022AC9C: mtc1        $at, $f5
        ctx->f_odd[(5 - 1) * 2] = ctx->r1;
            goto L_8022ACC8;
    }
    goto skip_2;
    // 0x8022AC9C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    skip_2:
    // 0x8022ACA0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8022ACA4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8022ACA8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8022ACAC: nop

    // 0x8022ACB0: add.d       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f14.d + ctx->f6.d;
    // 0x8022ACB4: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x8022ACB8: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x8022ACBC: b           L_8022ACE4
    // 0x8022ACC0: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
        goto L_8022ACE4;
    // 0x8022ACC0: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x8022ACC4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
L_8022ACC8:
    // 0x8022ACC8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8022ACCC: nop

    // 0x8022ACD0: sub.d       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f14.d - ctx->f4.d;
    // 0x8022ACD4: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x8022ACD8: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x8022ACDC: nop

    // 0x8022ACE0: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
L_8022ACE4:
    // 0x8022ACE4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022ACE8: ldc1        $f6, 0x3F40($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X3F40);
    // 0x8022ACEC: cvt.d.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.d = CVT_D_W(ctx->f10.u32l);
    // 0x8022ACF0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022ACF4: ldc1        $f10, 0x3F48($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X3F48);
    // 0x8022ACF8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022ACFC: addiu       $v1, $v1, 0x3F10
    ctx->r3 = ADD32(ctx->r3, 0X3F10);
    // 0x8022AD00: sub.d       $f0, $f4, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f0.d = ctx->f4.d - ctx->f18.d;
    // 0x8022AD04: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x8022AD08: mul.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x8022AD0C: ldc1        $f6, 0x20($v1)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r3, 0X20);
    // 0x8022AD10: mul.d       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f10.d);
    // 0x8022AD14: ldc1        $f10, 0x18($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X18);
    // 0x8022AD18: sub.d       $f2, $f12, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f8.d); 
    ctx->f2.d = ctx->f12.d - ctx->f8.d;
    // 0x8022AD1C: sub.d       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = ctx->f2.d - ctx->f4.d;
    // 0x8022AD20: mul.d       $f14, $f2, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f14.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x8022AD24: nop

    // 0x8022AD28: mul.d       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f14.d);
    // 0x8022AD2C: add.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f8.d + ctx->f10.d;
    // 0x8022AD30: ldc1        $f8, 0x10($v1)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r3, 0X10);
    // 0x8022AD34: mul.d       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f14.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f14.d);
    // 0x8022AD38: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x8022AD3C: ldc1        $f6, 0x8($v1)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r3, 0X8);
    // 0x8022AD40: mul.d       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f14.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f14.d);
    // 0x8022AD44: bne         $t0, $zero, L_8022AD64
    if (ctx->r8 != 0) {
        // 0x8022AD48: add.d       $f16, $f6, $f4
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = ctx->f6.d + ctx->f4.d;
            goto L_8022AD64;
    }
    // 0x8022AD48: add.d       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = ctx->f6.d + ctx->f4.d;
    // 0x8022AD4C: mul.d       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = MUL_D(ctx->f2.d, ctx->f14.d);
    // 0x8022AD50: nop

    // 0x8022AD54: mul.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x8022AD58: add.d       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f10.d + ctx->f2.d;
    // 0x8022AD5C: jr          $ra
    // 0x8022AD60: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    return;
    // 0x8022AD60: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
L_8022AD64:
    // 0x8022AD64: mul.d       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f14.d); 
    ctx->f4.d = MUL_D(ctx->f2.d, ctx->f14.d);
    // 0x8022AD68: nop

    // 0x8022AD6C: mul.d       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f16.d);
    // 0x8022AD70: add.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f8.d + ctx->f2.d;
    // 0x8022AD74: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x8022AD78: jr          $ra
    // 0x8022AD7C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    return;
    // 0x8022AD7C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8022AD80: c.eq.s      $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f6.fl == ctx->f6.fl;
L_8022AD84:
    // 0x8022AD84: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022AD88: bc1tl       L_8022AD9C
    if (c1cs) {
        // 0x8022AD8C: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8022AD9C;
    }
    goto skip_3;
    // 0x8022AD8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_3:
    // 0x8022AD90: jr          $ra
    // 0x8022AD94: lwc1        $f0, 0x3F58($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3F58);
    return;
    // 0x8022AD94: lwc1        $f0, 0x3F58($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3F58);
    // 0x8022AD98: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_8022AD9C:
    // 0x8022AD9C: nop

    // 0x8022ADA0: jr          $ra
    // 0x8022ADA4: nop

    return;
    // 0x8022ADA4: nop

;}
RECOMP_FUNC void func_80249708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249708: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x8024970C: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80249710: addiu       $t9, $a1, 0x1
    ctx->r25 = ADD32(ctx->r5, 0X1);
    // 0x80249714: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
    // 0x80249718: lbu         $t6, 0x0($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X0);
    // 0x8024971C: sll         $t8, $v1, 8
    ctx->r24 = S32(ctx->r3 << 8);
    // 0x80249720: addiu       $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x80249724: or          $v1, $t8, $t6
    ctx->r3 = ctx->r24 | ctx->r14;
    // 0x80249728: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x8024972C: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80249730: jr          $ra
    // 0x80249734: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
    return;
    // 0x80249734: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_80238AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238AA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80238AA4: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80238AA8: and         $t9, $a1, $at
    ctx->r25 = ctx->r5 & ctx->r1;
    // 0x80238AAC: andi        $t2, $a1, 0xFF00
    ctx->r10 = ctx->r5 & 0XFF00;
    // 0x80238AB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238AB4: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x80238AB8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80238ABC: addiu       $t8, $zero, 0x51
    ctx->r24 = ADD32(0, 0X51);
    // 0x80238AC0: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80238AC4: sra         $t3, $t2, 8
    ctx->r11 = S32(SIGNED(ctx->r10) >> 8);
    // 0x80238AC8: or          $t4, $a1, $zero
    ctx->r12 = ctx->r5 | 0;
    // 0x80238ACC: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80238AD0: sb          $t7, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r15;
    // 0x80238AD4: sb          $t8, 0x21($sp)
    MEM_B(0X21, ctx->r29) = ctx->r24;
    // 0x80238AD8: sb          $t1, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r9;
    // 0x80238ADC: sb          $t3, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r11;
    // 0x80238AE0: sb          $t4, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r12;
    // 0x80238AE4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80238AE8: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x80238AEC: jal         0x8023F37C
    // 0x80238AF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80238AF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80238AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238AF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80238AFC: jr          $ra
    // 0x80238B00: nop

    return;
    // 0x80238B00: nop

;}
RECOMP_FUNC void func_802333A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802333A0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802333A4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802333A8: jr          $ra
    // 0x802333AC: sb          $a0, 0x3954($at)
    MEM_B(0X3954, ctx->r1) = ctx->r4;
    return;
    // 0x802333AC: sb          $a0, 0x3954($at)
    MEM_B(0X3954, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80223230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223230: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80223234: sltiu       $at, $a0, 0x5
    ctx->r1 = ctx->r4 < 0X5 ? 1 : 0;
    // 0x80223238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022323C: beq         $at, $zero, L_802232FC
    if (ctx->r1 == 0) {
        // 0x80223240: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802232FC;
    }
    // 0x80223240: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80223244: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80223248: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022324C: addu        $at, $at, $t6
    gpr jr_addend_80223254 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80223250: lw          $t6, 0x3954($at)
    ctx->r14 = ADD32(ctx->r1, 0X3954);
    // 0x80223254: jr          $t6
    // 0x80223258: nop

    switch (jr_addend_80223254 >> 2) {
        case 0: goto L_8022325C; break;
        case 1: goto L_8022327C; break;
        case 2: goto L_802232BC; break;
        case 3: goto L_802232DC; break;
        case 4: goto L_8022329C; break;
        default: switch_error(__func__, 0x80223254, 0x80253954);
    }
    // 0x80223258: nop

L_8022325C:
    // 0x8022325C: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80223260: lhu         $t7, -0x178C($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X178C);
    // 0x80223264: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x80223268: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8022326C: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x80223270: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x80223274: b           L_8022330C
    // 0x80223278: lw          $v0, 0x3B9C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B9C);
        goto L_8022330C;
    // 0x80223278: lw          $v0, 0x3B9C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B9C);
L_8022327C:
    // 0x8022327C: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x80223280: lhu         $t0, -0x178C($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X178C);
    // 0x80223284: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x80223288: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8022328C: negu        $t2, $t1
    ctx->r10 = SUB32(0, ctx->r9);
    // 0x80223290: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x80223294: b           L_8022330C
    // 0x80223298: lw          $v0, 0x3BA4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3BA4);
        goto L_8022330C;
    // 0x80223298: lw          $v0, 0x3BA4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3BA4);
L_8022329C:
    // 0x8022329C: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x802232A0: lhu         $t3, -0x178C($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X178C);
    // 0x802232A4: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x802232A8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x802232AC: negu        $t5, $t4
    ctx->r13 = SUB32(0, ctx->r12);
    // 0x802232B0: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x802232B4: b           L_8022330C
    // 0x802232B8: lw          $v0, 0x3BAC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3BAC);
        goto L_8022330C;
    // 0x802232B8: lw          $v0, 0x3BAC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3BAC);
L_802232BC:
    // 0x802232BC: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802232C0: lhu         $t6, -0x178C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X178C);
    // 0x802232C4: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x802232C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802232CC: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x802232D0: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x802232D4: b           L_8022330C
    // 0x802232D8: lw          $v0, 0x3BB4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3BB4);
        goto L_8022330C;
    // 0x802232D8: lw          $v0, 0x3BB4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3BB4);
L_802232DC:
    // 0x802232DC: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x802232E0: lhu         $t9, -0x178C($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X178C);
    // 0x802232E4: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x802232E8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x802232EC: negu        $t1, $t0
    ctx->r9 = SUB32(0, ctx->r8);
    // 0x802232F0: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x802232F4: b           L_8022330C
    // 0x802232F8: lw          $v0, 0x3BBC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3BBC);
        goto L_8022330C;
    // 0x802232F8: lw          $v0, 0x3BBC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3BBC);
L_802232FC:
    // 0x802232FC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80223300: jal         0x80231A24
    // 0x80223304: addiu       $a0, $a0, 0x38DC
    ctx->r4 = ADD32(ctx->r4, 0X38DC);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80223304: addiu       $a0, $a0, 0x38DC
    ctx->r4 = ADD32(ctx->r4, 0X38DC);
    after_0:
    // 0x80223308: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022330C:
    // 0x8022330C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80223310: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80223314: jr          $ra
    // 0x80223318: nop

    return;
    // 0x80223318: nop

;}
RECOMP_FUNC void func_8022BA94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022BA94: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8022BA98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BA9C: ori         $at, $at, 0xA800
    ctx->r1 = ctx->r1 | 0XA800;
    // 0x8022BAA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BAA4: beq         $a0, $at, L_8022BACC
    if (ctx->r4 == ctx->r1) {
        // 0x8022BAA8: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_8022BACC;
    }
    // 0x8022BAA8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8022BAAC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8022BAB0: beq         $a0, $at, L_8022BAD8
    if (ctx->r4 == ctx->r1) {
        // 0x8022BAB4: lui         $at, 0x803D
        ctx->r1 = S32(0X803D << 16);
            goto L_8022BAD8;
    }
    // 0x8022BAB4: lui         $at, 0x803D
    ctx->r1 = S32(0X803D << 16);
    // 0x8022BAB8: ori         $at, $at, 0xA800
    ctx->r1 = ctx->r1 | 0XA800;
    // 0x8022BABC: bne         $a0, $at, L_8022BAE4
    if (ctx->r4 != ctx->r1) {
        // 0x8022BAC0: lui         $at, 0x8027
        ctx->r1 = S32(0X8027 << 16);
            goto L_8022BAE4;
    }
    // 0x8022BAC0: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022BAC4: b           L_8022BAF0
    // 0x8022BAC8: sw          $zero, 0x5F70($at)
    MEM_W(0X5F70, ctx->r1) = 0;
        goto L_8022BAF0;
    // 0x8022BAC8: sw          $zero, 0x5F70($at)
    MEM_W(0X5F70, ctx->r1) = 0;
L_8022BACC:
    // 0x8022BACC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022BAD0: b           L_8022BAF0
    // 0x8022BAD4: sw          $zero, 0x5F74($at)
    MEM_W(0X5F74, ctx->r1) = 0;
        goto L_8022BAF0;
    // 0x8022BAD4: sw          $zero, 0x5F74($at)
    MEM_W(0X5F74, ctx->r1) = 0;
L_8022BAD8:
    // 0x8022BAD8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022BADC: b           L_8022BAF0
    // 0x8022BAE0: sw          $zero, 0x5F78($at)
    MEM_W(0X5F78, ctx->r1) = 0;
        goto L_8022BAF0;
    // 0x8022BAE0: sw          $zero, 0x5F78($at)
    MEM_W(0X5F78, ctx->r1) = 0;
L_8022BAE4:
    // 0x8022BAE4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022BAE8: jal         0x80231A24
    // 0x8022BAEC: addiu       $a0, $a0, 0x410C
    ctx->r4 = ADD32(ctx->r4, 0X410C);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022BAEC: addiu       $a0, $a0, 0x410C
    ctx->r4 = ADD32(ctx->r4, 0X410C);
    after_0:
L_8022BAF0:
    // 0x8022BAF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BAF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022BAF8: jr          $ra
    // 0x8022BAFC: nop

    return;
    // 0x8022BAFC: nop

;}
RECOMP_FUNC void func_802402FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802402FC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80240300: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80240304: lw          $v1, 0x64($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X64);
    // 0x80240308: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x8024030C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80240310: beq         $v1, $zero, L_80240364
    if (ctx->r3 == 0) {
        // 0x80240314: andi        $t6, $a1, 0xFF
        ctx->r14 = ctx->r5 & 0XFF;
            goto L_80240364;
    }
    // 0x80240314: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80240318: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8024031C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x80240320: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80240324: lbu         $t8, 0x32($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X32);
L_80240328:
    // 0x80240328: bnel        $v0, $t8, L_8024035C
    if (ctx->r2 != ctx->r24) {
        // 0x8024032C: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_8024035C;
    }
    goto skip_0;
    // 0x8024032C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x80240330: lbu         $t9, 0x31($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X31);
    // 0x80240334: bnel        $a2, $t9, L_8024035C
    if (ctx->r6 != ctx->r25) {
        // 0x80240338: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_8024035C;
    }
    goto skip_1;
    // 0x80240338: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x8024033C: lbu         $a0, 0x35($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X35);
    // 0x80240340: beql        $a1, $a0, L_8024035C
    if (ctx->r5 == ctx->r4) {
        // 0x80240344: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_8024035C;
    }
    goto skip_2;
    // 0x80240344: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_2:
    // 0x80240348: beql        $a3, $a0, L_8024035C
    if (ctx->r7 == ctx->r4) {
        // 0x8024034C: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_8024035C;
    }
    goto skip_3;
    // 0x8024034C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_3:
    // 0x80240350: jr          $ra
    // 0x80240354: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80240354: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80240358: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_8024035C:
    // 0x8024035C: bnel        $v1, $zero, L_80240328
    if (ctx->r3 != 0) {
        // 0x80240360: lbu         $t8, 0x32($v1)
        ctx->r24 = MEM_BU(ctx->r3, 0X32);
            goto L_80240328;
    }
    goto skip_4;
    // 0x80240360: lbu         $t8, 0x32($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X32);
    skip_4:
L_80240364:
    // 0x80240364: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80240368: jr          $ra
    // 0x8024036C: nop

    return;
    // 0x8024036C: nop

;}
RECOMP_FUNC void func_80234F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234F70: lw          $a2, 0x44($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X44);
    // 0x80234F74: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80234F78: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80234F7C: blez        $a2, L_80235000
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80234F80: addiu       $a3, $zero, 0x30
        ctx->r7 = ADD32(0, 0X30);
            goto L_80235000;
    }
    // 0x80234F80: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
L_80234F84:
    // 0x80234F84: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234F88: mflo        $t6
    ctx->r14 = lo;
    // 0x80234F8C: addu        $a0, $v0, $t6
    ctx->r4 = ADD32(ctx->r2, ctx->r14);
    // 0x80234F90: lw          $t7, 0x1C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X1C);
    // 0x80234F94: bne         $t7, $zero, L_80234FE8
    if (ctx->r15 != 0) {
        // 0x80234F98: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80234FE8;
    }
    // 0x80234F98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80234F9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80234FA0: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80234FA4: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x80234FA8: sw          $a1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r5;
    // 0x80234FAC: sh          $t8, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r24;
    // 0x80234FB0: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x80234FB4: sb          $t9, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = ctx->r25;
    // 0x80234FB8: sb          $zero, 0x2F($a0)
    MEM_B(0X2F, ctx->r4) = 0;
    // 0x80234FBC: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x80234FC0: lbu         $t0, 0xD($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0XD);
    // 0x80234FC4: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x80234FC8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80234FCC: sll         $t1, $t0, 15
    ctx->r9 = S32(ctx->r8 << 15);
    // 0x80234FD0: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80234FD4: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x80234FD8: mflo        $t2
    ctx->r10 = lo;
    // 0x80234FDC: sh          $t2, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r10;
    // 0x80234FE0: jr          $ra
    // 0x80234FE4: nop

    return;
    // 0x80234FE4: nop

L_80234FE8:
    // 0x80234FE8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80234FEC: sll         $t3, $v1, 16
    ctx->r11 = S32(ctx->r3 << 16);
    // 0x80234FF0: sra         $v1, $t3, 16
    ctx->r3 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80234FF4: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80234FF8: bne         $at, $zero, L_80234F84
    if (ctx->r1 != 0) {
        // 0x80234FFC: nop
    
            goto L_80234F84;
    }
    // 0x80234FFC: nop

L_80235000:
    // 0x80235000: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80235004: jr          $ra
    // 0x80235008: nop

    return;
    // 0x80235008: nop

;}
RECOMP_FUNC void func_80207130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80207130: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80207134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80207138: jal         0x80207040
    // 0x8020713C: nop

    func_80207040(rdram, ctx);
        goto after_0;
    // 0x8020713C: nop

    after_0:
    // 0x80207140: bne         $v0, $zero, L_80207158
    if (ctx->r2 != 0) {
        // 0x80207144: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80207158;
    }
    // 0x80207144: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80207148: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x8020714C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80207150: b           L_80207204
    // 0x80207154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80207204;
    // 0x80207154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80207158:
    // 0x80207158: jal         0x802070D4
    // 0x8020715C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_802070D4(rdram, ctx);
        goto after_1;
    // 0x8020715C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x80207160: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80207164: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x80207168: lw          $t6, -0x3D3C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3D3C);
    // 0x8020716C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80207170: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80207174: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x80207178: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x8020717C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80207180: bgez        $t8, L_80207198
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80207184: cvt.d.w     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.d = CVT_D_W(ctx->f4.u32l);
            goto L_80207198;
    }
    // 0x80207184: cvt.d.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.d = CVT_D_W(ctx->f4.u32l);
    // 0x80207188: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8020718C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80207190: nop

    // 0x80207194: add.d       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f6.d); 
    ctx->f2.d = ctx->f2.d + ctx->f6.d;
L_80207198:
    // 0x80207198: lw          $t9, -0x3D40($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3D40);
    // 0x8020719C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802071A0: ldc1        $f8, 0x2AF0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X2AF0);
    // 0x802071A4: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x802071A8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802071AC: mul.d       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f8.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f8.d);
    // 0x802071B0: bgez        $t9, L_802071C8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802071B4: cvt.d.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
            goto L_802071C8;
    }
    // 0x802071B4: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x802071B8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802071BC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802071C0: nop

    // 0x802071C4: add.d       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f16.d + ctx->f18.d;
L_802071C8:
    // 0x802071C8: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x802071CC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802071D0: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x802071D4: bgez        $t0, L_802071EC
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802071D8: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_802071EC;
    }
    // 0x802071D8: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x802071DC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802071E0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802071E4: nop

    // 0x802071E8: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_802071EC:
    // 0x802071EC: sub.d       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f16.d - ctx->f6.d;
    // 0x802071F0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802071F4: ldc1        $f18, 0x2AF8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X2AF8);
    // 0x802071F8: div.d       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f12.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x802071FC: add.d       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = ctx->f2.d + ctx->f12.d;
    // 0x80207200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80207204:
    // 0x80207204: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80207208: jr          $ra
    // 0x8020720C: nop

    return;
    // 0x8020720C: nop

;}
RECOMP_FUNC void func_802223E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802223E0: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802223E4: addiu       $a1, $a1, 0x3B90
    ctx->r5 = ADD32(ctx->r5, 0X3B90);
    // 0x802223E8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802223EC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802223F0: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x802223F4: lw          $t8, 0x4398($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4398);
    // 0x802223F8: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x802223FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80222400: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80222404: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80222408: lui         $a2, 0xE700
    ctx->r6 = S32(0XE700 << 16);
    // 0x8022240C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80222410: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222414: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222418: sll         $t7, $a0, 5
    ctx->r15 = S32(ctx->r4 << 5);
    // 0x8022241C: addu        $t5, $t7, $t8
    ctx->r13 = ADD32(ctx->r15, ctx->r24);
    // 0x80222420: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80222424: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80222428: lui         $t8, 0xF0A
    ctx->r24 = S32(0XF0A << 16);
    // 0x8022242C: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x80222430: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x80222434: ori         $t8, $t8, 0x4000
    ctx->r24 = ctx->r24 | 0X4000;
    // 0x80222438: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8022243C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80222440: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222444: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x80222448: ori         $t7, $t7, 0x1402
    ctx->r15 = ctx->r15 | 0X1402;
    // 0x8022244C: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80222450: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80222454: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80222458: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8022245C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222460: lui         $t8, 0x30
    ctx->r24 = S32(0X30 << 16);
    // 0x80222464: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80222468: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8022246C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80222470: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80222474: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80222478: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022247C: lui         $t8, 0xFFFC
    ctx->r24 = S32(0XFFFC << 16);
    // 0x80222480: ori         $t8, $t8, 0xFFFC
    ctx->r24 = ctx->r24 | 0XFFFC;
    // 0x80222484: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80222488: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8022248C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80222490: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222494: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222498: lui         $t7, 0xF700
    ctx->r15 = S32(0XF700 << 16);
    // 0x8022249C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802224A0: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802224A4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802224A8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x802224AC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802224B0: lui         $t7, 0xFF10
    ctx->r15 = S32(0XFF10 << 16);
    // 0x802224B4: ori         $t7, $t7, 0x13F
    ctx->r15 = ctx->r15 | 0X13F;
    // 0x802224B8: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x802224BC: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x802224C0: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x802224C4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802224C8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802224CC: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802224D0: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802224D4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802224D8: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    // 0x802224DC: lw          $a0, 0x4388($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4388);
    // 0x802224E0: jal         0x802375F0
    // 0x802224E4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    func_802375F0(rdram, ctx);
        goto after_0;
    // 0x802224E4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_0:
    // 0x802224E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802224EC: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x802224F0: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802224F4: addiu       $a1, $a1, 0x3B90
    ctx->r5 = ADD32(ctx->r5, 0X3B90);
    // 0x802224F8: sw          $v0, 0x4($ra)
    MEM_W(0X4, ctx->r31) = ctx->r2;
    // 0x802224FC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222500: lui         $a2, 0xE700
    ctx->r6 = S32(0XE700 << 16);
    // 0x80222504: addiu       $t3, $zero, 0xF0
    ctx->r11 = ADD32(0, 0XF0);
    // 0x80222508: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8022250C: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80222510: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80222514: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222518: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022251C: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x80222520: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80222524: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80222528: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8022252C: lh          $t6, 0xA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA);
    // 0x80222530: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x80222534: lh          $t6, 0xC($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC);
    // 0x80222538: sll         $t8, $t7, 14
    ctx->r24 = S32(ctx->r15 << 14);
    // 0x8022253C: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80222540: subu        $t7, $t3, $t6
    ctx->r15 = SUB32(ctx->r11, ctx->r14);
    // 0x80222544: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x80222548: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8022254C: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x80222550: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80222554: lh          $t8, 0x8($t5)
    ctx->r24 = MEM_H(ctx->r13, 0X8);
    // 0x80222558: lh          $t7, 0xE($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE);
    // 0x8022255C: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x80222560: sll         $t6, $t9, 14
    ctx->r14 = S32(ctx->r25 << 14);
    // 0x80222564: subu        $t8, $t3, $t7
    ctx->r24 = SUB32(ctx->r11, ctx->r15);
    // 0x80222568: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x8022256C: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80222570: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80222574: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80222578: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022257C: lui         $t7, 0xFF10
    ctx->r15 = S32(0XFF10 << 16);
    // 0x80222580: ori         $t7, $t7, 0x13F
    ctx->r15 = ctx->r15 | 0X13F;
    // 0x80222584: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80222588: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8022258C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80222590: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222594: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222598: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8022259C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802225A0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802225A4: lw          $a0, -0x17A8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X17A8);
    // 0x802225A8: jal         0x802375F0
    // 0x802225AC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_802375F0(rdram, ctx);
        goto after_1;
    // 0x802225AC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x802225B0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x802225B4: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802225B8: addiu       $a1, $a1, 0x3B90
    ctx->r5 = ADD32(ctx->r5, 0X3B90);
    // 0x802225BC: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x802225C0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802225C4: lui         $a2, 0xE700
    ctx->r6 = S32(0XE700 << 16);
    // 0x802225C8: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x802225CC: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x802225D0: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x802225D4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802225D8: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x802225DC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802225E0: ori         $t6, $t6, 0x1402
    ctx->r14 = ctx->r14 | 0X1402;
    // 0x802225E4: lui         $t7, 0x10
    ctx->r15 = S32(0X10 << 16);
    // 0x802225E8: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x802225EC: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x802225F0: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x802225F4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802225F8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802225FC: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80222600: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80222604: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222608: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x8022260C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80222610: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80222614: jr          $ra
    // 0x80222618: nop

    return;
    // 0x80222618: nop

;}
RECOMP_FUNC void func_80248994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248994: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80248998: lw          $t6, 0x71E4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X71E4);
    // 0x8024899C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802489A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802489A4: addiu       $t7, $t6, 0x14
    ctx->r15 = ADD32(ctx->r14, 0X14);
    // 0x802489A8: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802489AC: lui         $t8, 0xA460
    ctx->r24 = S32(0XA460 << 16);
    // 0x802489B0: lw          $t9, 0x10($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X10);
    // 0x802489B4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802489B8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x802489BC: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x802489C0: beq         $t1, $zero, L_802489E4
    if (ctx->r9 == 0) {
        // 0x802489C4: nop
    
            goto L_802489E4;
    }
    // 0x802489C4: nop

L_802489C8:
    // 0x802489C8: lui         $t2, 0xA460
    ctx->r10 = S32(0XA460 << 16);
    // 0x802489CC: lw          $t3, 0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X10);
    // 0x802489D0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802489D4: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x802489D8: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x802489DC: bne         $t5, $zero, L_802489C8
    if (ctx->r13 != 0) {
        // 0x802489E0: nop
    
            goto L_802489C8;
    }
    // 0x802489E0: nop

L_802489E4:
    // 0x802489E4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802489E8: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x802489EC: lui         $t9, 0xA500
    ctx->r25 = S32(0XA500 << 16);
    // 0x802489F0: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x802489F4: lui         $t0, 0xA460
    ctx->r8 = S32(0XA460 << 16);
    // 0x802489F8: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x802489FC: sw          $t8, 0x510($t9)
    MEM_W(0X510, ctx->r25) = ctx->r24;
    // 0x80248A00: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x80248A04: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80248A08: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80248A0C: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x80248A10: beq         $t3, $zero, L_80248A34
    if (ctx->r11 == 0) {
        // 0x80248A14: nop
    
            goto L_80248A34;
    }
    // 0x80248A14: nop

L_80248A18:
    // 0x80248A18: lui         $t4, 0xA460
    ctx->r12 = S32(0XA460 << 16);
    // 0x80248A1C: lw          $t5, 0x10($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X10);
    // 0x80248A20: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80248A24: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80248A28: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80248A2C: bne         $t7, $zero, L_80248A18
    if (ctx->r15 != 0) {
        // 0x80248A30: nop
    
            goto L_80248A18;
    }
    // 0x80248A30: nop

L_80248A34:
    // 0x80248A34: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80248A38: lui         $t0, 0xA500
    ctx->r8 = S32(0XA500 << 16);
    // 0x80248A3C: lw          $t9, 0x10($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X10);
    // 0x80248A40: jal         0x80248A7C
    // 0x80248A44: sw          $t9, 0x510($t0)
    MEM_W(0X510, ctx->r8) = ctx->r25;
    func_80248A7C(rdram, ctx);
        goto after_0;
    // 0x80248A44: sw          $t9, 0x510($t0)
    MEM_W(0X510, ctx->r8) = ctx->r25;
    after_0:
    // 0x80248A48: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80248A4C: lui         $t2, 0xA460
    ctx->r10 = S32(0XA460 << 16);
    // 0x80248A50: sw          $t1, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r9;
    // 0x80248A54: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x80248A58: lw          $t3, 0x168C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X168C);
    // 0x80248A5C: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x80248A60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80248A64: ori         $at, $at, 0x401
    ctx->r1 = ctx->r1 | 0X401;
    // 0x80248A68: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x80248A6C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80248A70: sw          $t4, 0x168C($at)
    MEM_W(0X168C, ctx->r1) = ctx->r12;
    // 0x80248A74: jr          $ra
    // 0x80248A78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80248A78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023288C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023288C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232890: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80232894: lwc1        $f6, 0x5180($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5180);
    // 0x80232898: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8023289C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x802328A0: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802328A4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x802328A8: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802328AC: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802328B0: bc1fl       L_80232978
    if (!c1cs) {
        // 0x802328B4: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_80232978;
    }
    goto skip_0;
    // 0x802328B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x802328B8: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x802328BC: lbu         $t6, 0x43($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X43);
    // 0x802328C0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x802328C4: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802328C8: bc1fl       L_802328E8
    if (!c1cs) {
        // 0x802328CC: c.le.s      $f10, $f0
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
            goto L_802328E8;
    }
    goto skip_1;
    // 0x802328CC: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    skip_1:
    // 0x802328D0: beq         $t6, $zero, L_802328DC
    if (ctx->r14 == 0) {
        // 0x802328D4: nop
    
            goto L_802328DC;
    }
    // 0x802328D4: nop

    // 0x802328D8: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
L_802328DC:
    // 0x802328DC: b           L_80232ED8
    // 0x802328E0: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
        goto L_80232ED8;
    // 0x802328E0: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x802328E4: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
L_802328E8:
    // 0x802328E8: lbu         $t8, 0x43($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X43);
    // 0x802328EC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x802328F0: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802328F4: bc1fl       L_80232914
    if (!c1cs) {
        // 0x802328F8: sub.s       $f6, $f0, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
            goto L_80232914;
    }
    goto skip_2;
    // 0x802328F8: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    skip_2:
    // 0x802328FC: bne         $t8, $zero, L_80232908
    if (ctx->r24 != 0) {
        // 0x80232900: nop
    
            goto L_80232908;
    }
    // 0x80232900: nop

    // 0x80232904: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
L_80232908:
    // 0x80232908: b           L_80232ED8
    // 0x8023290C: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
        goto L_80232ED8;
    // 0x8023290C: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
    // 0x80232910: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
L_80232914:
    // 0x80232914: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80232918: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8023291C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80232920: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80232924: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x80232928: nop

    // 0x8023292C: bc1fl       L_80232948
    if (!c1cs) {
        // 0x80232930: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_80232948;
    }
    goto skip_3;
    // 0x80232930: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_3:
    // 0x80232934: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80232938: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8023293C: b           L_80232950
    // 0x80232940: add.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f18.fl;
        goto L_80232950;
    // 0x80232940: add.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x80232944: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_80232948:
    // 0x80232948: nop

    // 0x8023294C: sub.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f18.fl;
L_80232950:
    // 0x80232950: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232954: addiu       $t3, $zero, 0x2F
    ctx->r11 = ADD32(0, 0X2F);
    // 0x80232958: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x8023295C: nop

    // 0x80232960: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
    // 0x80232964: lh          $t2, 0x0($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X0);
    // 0x80232968: subu        $t4, $t3, $t2
    ctx->r12 = SUB32(ctx->r11, ctx->r10);
    // 0x8023296C: b           L_80232ED8
    // 0x80232970: sh          $t4, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r12;
        goto L_80232ED8;
    // 0x80232970: sh          $t4, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r12;
    // 0x80232974: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_80232978:
    // 0x80232978: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8023297C: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x80232980: nop

    // 0x80232984: bc1fl       L_80232A8C
    if (!c1cs) {
        // 0x80232988: lwc1        $f6, 0x38($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
            goto L_80232A8C;
    }
    goto skip_4;
    // 0x80232988: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    skip_4:
    // 0x8023298C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80232990: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80232994: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80232998: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8023299C: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802329A0: lbu         $t5, 0x43($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X43);
    // 0x802329A4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x802329A8: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802329AC: c.le.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl <= ctx->f14.fl;
    // 0x802329B0: nop

    // 0x802329B4: bc1fl       L_802329D4
    if (!c1cs) {
        // 0x802329B8: c.le.s      $f16, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
            goto L_802329D4;
    }
    goto skip_5;
    // 0x802329B8: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    skip_5:
    // 0x802329BC: bne         $t5, $zero, L_802329C8
    if (ctx->r13 != 0) {
        // 0x802329C0: nop
    
            goto L_802329C8;
    }
    // 0x802329C0: nop

    // 0x802329C4: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
L_802329C8:
    // 0x802329C8: b           L_80232ED8
    // 0x802329CC: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
        goto L_80232ED8;
    // 0x802329CC: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802329D0: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
L_802329D4:
    // 0x802329D4: lbu         $t7, 0x43($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X43);
    // 0x802329D8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x802329DC: bc1fl       L_802329FC
    if (!c1cs) {
        // 0x802329E0: sub.s       $f6, $f12, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f14.fl;
            goto L_802329FC;
    }
    goto skip_6;
    // 0x802329E0: sub.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f14.fl;
    skip_6:
    // 0x802329E4: beq         $t7, $zero, L_802329F0
    if (ctx->r15 == 0) {
        // 0x802329E8: nop
    
            goto L_802329F0;
    }
    // 0x802329E8: nop

    // 0x802329EC: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
L_802329F0:
    // 0x802329F0: b           L_80232ED8
    // 0x802329F4: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
        goto L_80232ED8;
    // 0x802329F4: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
    // 0x802329F8: sub.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f14.fl;
L_802329FC:
    // 0x802329FC: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80232A00: lui         $at, 0x427C
    ctx->r1 = S32(0X427C << 16);
    // 0x80232A04: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80232A08: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80232A0C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80232A10: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    // 0x80232A14: nop

    // 0x80232A18: bc1fl       L_80232A38
    if (!c1cs) {
        // 0x80232A1C: sub.s       $f4, $f16, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f2.fl;
            goto L_80232A38;
    }
    goto skip_7;
    // 0x80232A1C: sub.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f2.fl;
    skip_7:
    // 0x80232A20: sub.s       $f10, $f16, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x80232A24: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80232A28: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80232A2C: b           L_80232A44
    // 0x80232A30: add.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f18.fl;
        goto L_80232A44;
    // 0x80232A30: add.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80232A34: sub.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f2.fl;
L_80232A38:
    // 0x80232A38: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80232A3C: nop

    // 0x80232A40: sub.s       $f0, $f4, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f18.fl;
L_80232A44:
    // 0x80232A44: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80232A48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80232A4C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80232A50: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232A54: add.s       $f12, $f2, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x80232A58: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x80232A5C: c.le.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl <= ctx->f12.fl;
    // 0x80232A60: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
    // 0x80232A64: bc1fl       L_80232A78
    if (!c1cs) {
        // 0x80232A68: sub.s       $f0, $f12, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
            goto L_80232A78;
    }
    goto skip_8;
    // 0x80232A68: sub.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
    skip_8:
    // 0x80232A6C: b           L_80232A78
    // 0x80232A70: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
        goto L_80232A78;
    // 0x80232A70: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x80232A74: sub.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
L_80232A78:
    // 0x80232A78: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232A7C: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x80232A80: b           L_80232ED8
    // 0x80232A84: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
        goto L_80232ED8;
    // 0x80232A84: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
    // 0x80232A88: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
L_80232A8C:
    // 0x80232A8C: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80232A90: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80232A94: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80232A98: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80232A9C: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80232AA0: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x80232AA4: nop

    // 0x80232AA8: bc1fl       L_80232BF0
    if (!c1cs) {
        // 0x80232AAC: c.le.s      $f14, $f12
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
            goto L_80232BF0;
    }
    goto skip_9;
    // 0x80232AAC: c.le.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
    skip_9:
    // 0x80232AB0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80232AB4: lbu         $t2, 0x43($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X43);
    // 0x80232AB8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x80232ABC: add.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80232AC0: c.le.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl <= ctx->f14.fl;
    // 0x80232AC4: nop

    // 0x80232AC8: bc1fl       L_80232AE8
    if (!c1cs) {
        // 0x80232ACC: sub.s       $f6, $f14, $f12
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f12.fl;
            goto L_80232AE8;
    }
    goto skip_10;
    // 0x80232ACC: sub.s       $f6, $f14, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f12.fl;
    skip_10:
    // 0x80232AD0: bne         $t2, $zero, L_80232ADC
    if (ctx->r10 != 0) {
        // 0x80232AD4: nop
    
            goto L_80232ADC;
    }
    // 0x80232AD4: nop

    // 0x80232AD8: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
L_80232ADC:
    // 0x80232ADC: b           L_80232ED8
    // 0x80232AE0: sh          $t4, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r12;
        goto L_80232ED8;
    // 0x80232AE0: sh          $t4, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r12;
    // 0x80232AE4: sub.s       $f6, $f14, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f12.fl;
L_80232AE8:
    // 0x80232AE8: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80232AEC: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80232AF0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80232AF4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80232AF8: nop

    // 0x80232AFC: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80232B00: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x80232B04: nop

    // 0x80232B08: bc1f        L_80232B20
    if (!c1cs) {
        // 0x80232B0C: nop
    
            goto L_80232B20;
    }
    // 0x80232B0C: nop

    // 0x80232B10: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80232B14: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80232B18: b           L_80232B2C
    // 0x80232B1C: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
        goto L_80232B2C;
    // 0x80232B1C: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
L_80232B20:
    // 0x80232B20: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80232B24: nop

    // 0x80232B28: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
L_80232B2C:
    // 0x80232B2C: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80232B30: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232B34: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    // 0x80232B38: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80232B3C: bc1f        L_80232B88
    if (!c1cs) {
        // 0x80232B40: sh          $t6, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r14;
            goto L_80232B88;
    }
    // 0x80232B40: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x80232B44: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80232B48: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80232B4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80232B50: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80232B54: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x80232B58: nop

    // 0x80232B5C: bc1fl       L_80232B70
    if (!c1cs) {
        // 0x80232B60: sub.s       $f0, $f12, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
            goto L_80232B70;
    }
    goto skip_11;
    // 0x80232B60: sub.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
    skip_11:
    // 0x80232B64: b           L_80232B70
    // 0x80232B68: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
        goto L_80232B70;
    // 0x80232B68: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x80232B6C: sub.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
L_80232B70:
    // 0x80232B70: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232B74: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80232B78: nop

    // 0x80232B7C: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x80232B80: b           L_80232ED8
    // 0x80232B84: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
        goto L_80232ED8;
    // 0x80232B84: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
L_80232B88:
    // 0x80232B88: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x80232B8C: nop

    // 0x80232B90: bc1f        L_80232ED8
    if (!c1cs) {
        // 0x80232B94: nop
    
            goto L_80232ED8;
    }
    // 0x80232B94: nop

    // 0x80232B98: sub.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x80232B9C: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80232BA0: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80232BA4: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80232BA8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80232BAC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80232BB0: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80232BB4: swc1        $f8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f8.u32l;
    // 0x80232BB8: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80232BBC: bc1fl       L_80232BD0
    if (!c1cs) {
        // 0x80232BC0: sub.s       $f0, $f4, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f18.fl;
            goto L_80232BD0;
    }
    goto skip_12;
    // 0x80232BC0: sub.s       $f0, $f4, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f18.fl;
    skip_12:
    // 0x80232BC4: b           L_80232BD0
    // 0x80232BC8: add.s       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f18.fl;
        goto L_80232BD0;
    // 0x80232BC8: add.s       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80232BCC: sub.s       $f0, $f4, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f18.fl;
L_80232BD0:
    // 0x80232BD0: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232BD4: addiu       $t3, $zero, 0x2F
    ctx->r11 = ADD32(0, 0X2F);
    // 0x80232BD8: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x80232BDC: nop

    // 0x80232BE0: subu        $t2, $t3, $t1
    ctx->r10 = SUB32(ctx->r11, ctx->r9);
    // 0x80232BE4: b           L_80232ED8
    // 0x80232BE8: sh          $t2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r10;
        goto L_80232ED8;
    // 0x80232BE8: sh          $t2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r10;
    // 0x80232BEC: c.le.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
L_80232BF0:
    // 0x80232BF0: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80232BF4: bc1fl       L_80232D84
    if (!c1cs) {
        // 0x80232BF8: lwc1        $f16, 0x2C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_80232D84;
    }
    goto skip_13;
    // 0x80232BF8: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    skip_13:
    // 0x80232BFC: c.le.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl <= ctx->f16.fl;
    // 0x80232C00: nop

    // 0x80232C04: bc1fl       L_80232D84
    if (!c1cs) {
        // 0x80232C08: lwc1        $f16, 0x2C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_80232D84;
    }
    goto skip_14;
    // 0x80232C08: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    skip_14:
    // 0x80232C0C: sub.s       $f10, $f12, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x80232C10: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80232C14: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80232C18: mul.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80232C1C: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x80232C20: nop

    // 0x80232C24: bc1fl       L_80232C40
    if (!c1cs) {
        // 0x80232C28: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_80232C40;
    }
    goto skip_15;
    // 0x80232C28: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_15:
    // 0x80232C2C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80232C30: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80232C34: b           L_80232C48
    // 0x80232C38: add.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f18.fl;
        goto L_80232C48;
    // 0x80232C38: add.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x80232C3C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_80232C40:
    // 0x80232C40: nop

    // 0x80232C44: sub.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f18.fl;
L_80232C48:
    // 0x80232C48: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232C4C: addiu       $t6, $zero, 0x3F
    ctx->r14 = ADD32(0, 0X3F);
    // 0x80232C50: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x80232C54: nop

    // 0x80232C58: subu        $t7, $t6, $t5
    ctx->r15 = SUB32(ctx->r14, ctx->r13);
    // 0x80232C5C: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x80232C60: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80232C64: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80232C68: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80232C6C: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80232C70: add.s       $f2, $f8, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80232C74: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80232C78: nop

    // 0x80232C7C: bc1fl       L_80232CCC
    if (!c1cs) {
        // 0x80232C80: c.le.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
            goto L_80232CCC;
    }
    goto skip_16;
    // 0x80232C80: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    skip_16:
    // 0x80232C84: sub.s       $f6, $f14, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x80232C88: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80232C8C: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80232C90: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80232C94: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80232C98: mul.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80232C9C: c.le.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl <= ctx->f16.fl;
    // 0x80232CA0: nop

    // 0x80232CA4: bc1fl       L_80232CB8
    if (!c1cs) {
        // 0x80232CA8: sub.s       $f0, $f16, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
            goto L_80232CB8;
    }
    goto skip_17;
    // 0x80232CA8: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
    skip_17:
    // 0x80232CAC: b           L_80232CB8
    // 0x80232CB0: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
        goto L_80232CB8;
    // 0x80232CB0: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80232CB4: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
L_80232CB8:
    // 0x80232CB8: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232CBC: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x80232CC0: b           L_80232ED8
    // 0x80232CC4: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
        goto L_80232ED8;
    // 0x80232CC4: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
    // 0x80232CC8: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
L_80232CCC:
    // 0x80232CCC: nop

    // 0x80232CD0: bc1fl       L_80232D20
    if (!c1cs) {
        // 0x80232CD4: c.lt.s      $f16, $f2
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
            goto L_80232D20;
    }
    goto skip_18;
    // 0x80232CD4: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    skip_18:
    // 0x80232CD8: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80232CDC: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80232CE0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80232CE4: mul.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80232CE8: c.le.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl <= ctx->f12.fl;
    // 0x80232CEC: nop

    // 0x80232CF0: bc1fl       L_80232D04
    if (!c1cs) {
        // 0x80232CF4: sub.s       $f0, $f12, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
            goto L_80232D04;
    }
    goto skip_19;
    // 0x80232CF4: sub.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
    skip_19:
    // 0x80232CF8: b           L_80232D04
    // 0x80232CFC: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
        goto L_80232D04;
    // 0x80232CFC: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x80232D00: sub.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
L_80232D04:
    // 0x80232D04: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232D08: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x80232D0C: nop

    // 0x80232D10: addiu       $t1, $t3, 0x10
    ctx->r9 = ADD32(ctx->r11, 0X10);
    // 0x80232D14: b           L_80232ED8
    // 0x80232D18: sh          $t1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r9;
        goto L_80232ED8;
    // 0x80232D18: sh          $t1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r9;
    // 0x80232D1C: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
L_80232D20:
    // 0x80232D20: nop

    // 0x80232D24: bc1f        L_80232ED8
    if (!c1cs) {
        // 0x80232D28: nop
    
            goto L_80232ED8;
    }
    // 0x80232D28: nop

    // 0x80232D2C: sub.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x80232D30: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80232D34: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80232D38: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80232D3C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80232D40: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80232D44: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x80232D48: swc1        $f8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f8.u32l;
    // 0x80232D4C: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80232D50: bc1fl       L_80232D64
    if (!c1cs) {
        // 0x80232D54: sub.s       $f0, $f6, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f18.fl;
            goto L_80232D64;
    }
    goto skip_20;
    // 0x80232D54: sub.s       $f0, $f6, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f18.fl;
    skip_20:
    // 0x80232D58: b           L_80232D64
    // 0x80232D5C: add.s       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f18.fl;
        goto L_80232D64;
    // 0x80232D5C: add.s       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80232D60: sub.s       $f0, $f6, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f18.fl;
L_80232D64:
    // 0x80232D64: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232D68: addiu       $t6, $zero, 0x2F
    ctx->r14 = ADD32(0, 0X2F);
    // 0x80232D6C: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x80232D70: nop

    // 0x80232D74: subu        $t5, $t6, $t4
    ctx->r13 = SUB32(ctx->r14, ctx->r12);
    // 0x80232D78: b           L_80232ED8
    // 0x80232D7C: sh          $t5, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r13;
        goto L_80232ED8;
    // 0x80232D7C: sh          $t5, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r13;
    // 0x80232D80: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
L_80232D84:
    // 0x80232D84: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80232D88: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80232D8C: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x80232D90: nop

    // 0x80232D94: bc1f        L_80232ED8
    if (!c1cs) {
        // 0x80232D98: nop
    
            goto L_80232ED8;
    }
    // 0x80232D98: nop

    // 0x80232D9C: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80232DA0: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80232DA4: lbu         $t7, 0x43($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X43);
    // 0x80232DA8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80232DAC: add.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80232DB0: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x80232DB4: nop

    // 0x80232DB8: bc1fl       L_80232DD8
    if (!c1cs) {
        // 0x80232DBC: sub.s       $f4, $f16, $f12
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f12.fl;
            goto L_80232DD8;
    }
    goto skip_21;
    // 0x80232DBC: sub.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f12.fl;
    skip_21:
    // 0x80232DC0: beq         $t7, $zero, L_80232DCC
    if (ctx->r15 == 0) {
        // 0x80232DC4: nop
    
            goto L_80232DCC;
    }
    // 0x80232DC4: nop

    // 0x80232DC8: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
L_80232DCC:
    // 0x80232DCC: b           L_80232ED8
    // 0x80232DD0: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
        goto L_80232ED8;
    // 0x80232DD0: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
    // 0x80232DD4: sub.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f12.fl;
L_80232DD8:
    // 0x80232DD8: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80232DDC: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80232DE0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80232DE4: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80232DE8: nop

    // 0x80232DEC: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80232DF0: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x80232DF4: swc1        $f4, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f4.u32l;
    // 0x80232DF8: lwc1        $f8, 0x0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80232DFC: bc1f        L_80232E14
    if (!c1cs) {
        // 0x80232E00: nop
    
            goto L_80232E14;
    }
    // 0x80232E00: nop

    // 0x80232E04: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80232E08: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80232E0C: b           L_80232E20
    // 0x80232E10: add.s       $f0, $f4, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f18.fl;
        goto L_80232E20;
    // 0x80232E10: add.s       $f0, $f4, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f18.fl;
L_80232E14:
    // 0x80232E14: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80232E18: nop

    // 0x80232E1C: sub.s       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f18.fl;
L_80232E20:
    // 0x80232E20: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232E24: addiu       $t3, $zero, 0x2F
    ctx->r11 = ADD32(0, 0X2F);
    // 0x80232E28: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x80232E2C: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x80232E30: nop

    // 0x80232E34: subu        $t1, $t3, $t0
    ctx->r9 = SUB32(ctx->r11, ctx->r8);
    // 0x80232E38: bc1f        L_80232E84
    if (!c1cs) {
        // 0x80232E3C: sh          $t1, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r9;
            goto L_80232E84;
    }
    // 0x80232E3C: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
    // 0x80232E40: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80232E44: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80232E48: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80232E4C: mul.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80232E50: c.le.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl <= ctx->f12.fl;
    // 0x80232E54: nop

    // 0x80232E58: bc1fl       L_80232E6C
    if (!c1cs) {
        // 0x80232E5C: sub.s       $f0, $f12, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
            goto L_80232E6C;
    }
    goto skip_22;
    // 0x80232E5C: sub.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
    skip_22:
    // 0x80232E60: b           L_80232E6C
    // 0x80232E64: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
        goto L_80232E6C;
    // 0x80232E64: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x80232E68: sub.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
L_80232E6C:
    // 0x80232E6C: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232E70: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80232E74: nop

    // 0x80232E78: addiu       $t4, $t6, 0x10
    ctx->r12 = ADD32(ctx->r14, 0X10);
    // 0x80232E7C: b           L_80232ED8
    // 0x80232E80: sh          $t4, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r12;
        goto L_80232ED8;
    // 0x80232E80: sh          $t4, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r12;
L_80232E84:
    // 0x80232E84: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80232E88: nop

    // 0x80232E8C: bc1f        L_80232ED8
    if (!c1cs) {
        // 0x80232E90: nop
    
            goto L_80232ED8;
    }
    // 0x80232E90: nop

    // 0x80232E94: sub.s       $f10, $f14, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x80232E98: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80232E9C: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80232EA0: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80232EA4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80232EA8: mul.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x80232EAC: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x80232EB0: nop

    // 0x80232EB4: bc1fl       L_80232EC8
    if (!c1cs) {
        // 0x80232EB8: sub.s       $f0, $f16, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
            goto L_80232EC8;
    }
    goto skip_23;
    // 0x80232EB8: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
    skip_23:
    // 0x80232EBC: b           L_80232EC8
    // 0x80232EC0: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
        goto L_80232EC8;
    // 0x80232EC0: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80232EC4: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
L_80232EC8:
    // 0x80232EC8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232ECC: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x80232ED0: nop

    // 0x80232ED4: sh          $t7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r15;
L_80232ED8:
    // 0x80232ED8: jr          $ra
    // 0x80232EDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80232EDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234B80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234B84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234B88: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80234B8C: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80234B90: lwc1        $f14, 0x8($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80234B94: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80234B98: nop

    // 0x80234B9C: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80234BA0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80234BA4: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80234BA8: jal         0x8022AA40
    // 0x80234BAC: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    func_8022AA40(rdram, ctx);
        goto after_0;
    // 0x80234BAC: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x80234BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234BB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80234BB8: jr          $ra
    // 0x80234BBC: nop

    return;
    // 0x80234BBC: nop

;}
RECOMP_FUNC void func_8020835C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020835C: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80208360: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80208364: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x80208368: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8020836C: or          $fp, $sp, $zero
    ctx->r30 = ctx->r29 | 0;
    // 0x80208370: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80208374: bne         $a3, $zero, L_80208380
    if (ctx->r7 != 0) {
        // 0x80208378: sw          $a1, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r5;
            goto L_80208380;
    }
    // 0x80208378: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x8020837C: addiu       $a3, $fp, 0x84
    ctx->r7 = ADD32(ctx->r30, 0X84);
L_80208380:
    // 0x80208380: jal         0x80208230
    // 0x80208384: sw          $a3, 0x94($fp)
    MEM_W(0X94, ctx->r30) = ctx->r7;
    func_80208230(rdram, ctx);
        goto after_0;
    // 0x80208384: sw          $a3, 0x94($fp)
    MEM_W(0X94, ctx->r30) = ctx->r7;
    after_0:
    // 0x80208388: beq         $v0, $zero, L_8020839C
    if (ctx->r2 == 0) {
        // 0x8020838C: nop
    
            goto L_8020839C;
    }
    // 0x8020838C: nop

    // 0x80208390: lw          $t6, 0x94($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X94);
    // 0x80208394: b           L_80208534
    // 0x80208398: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
        goto L_80208534;
    // 0x80208398: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
L_8020839C:
    // 0x8020839C: jal         0x8020833C
    // 0x802083A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8020833C(rdram, ctx);
        goto after_1;
    // 0x802083A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802083A4: addiu       $t7, $v0, 0x7
    ctx->r15 = ADD32(ctx->r2, 0X7);
    // 0x802083A8: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x802083AC: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x802083B0: subu        $sp, $sp, $t8
    ctx->r29 = SUB32(ctx->r29, ctx->r24);
    // 0x802083B4: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x802083B8: addiu       $t1, $sp, 0x20
    ctx->r9 = ADD32(ctx->r29, 0X20);
    // 0x802083BC: blez        $s0, L_80208434
    if (SIGNED(ctx->r16) <= 0) {
        // 0x802083C0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80208434;
    }
    // 0x802083C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802083C4: andi        $a3, $s0, 0x3
    ctx->r7 = ctx->r16 & 0X3;
    // 0x802083C8: beq         $a3, $zero, L_802083F8
    if (ctx->r7 == 0) {
        // 0x802083CC: or          $a2, $a3, $zero
        ctx->r6 = ctx->r7 | 0;
            goto L_802083F8;
    }
    // 0x802083CC: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x802083D0: addu        $a0, $t1, $zero
    ctx->r4 = ADD32(ctx->r9, 0);
    // 0x802083D4: lw          $v1, 0x8C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X8C);
L_802083D8:
    // 0x802083D8: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x802083DC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x802083E0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802083E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802083E8: bne         $a2, $a1, L_802083D8
    if (ctx->r6 != ctx->r5) {
        // 0x802083EC: sb          $t2, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r10;
            goto L_802083D8;
    }
    // 0x802083EC: sb          $t2, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r10;
    // 0x802083F0: beql        $a1, $s0, L_80208438
    if (ctx->r5 == ctx->r16) {
        // 0x802083F4: sltu        $at, $a1, $v0
        ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
            goto L_80208438;
    }
    goto skip_0;
    // 0x802083F4: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    skip_0:
L_802083F8:
    // 0x802083F8: lw          $t3, 0x8C($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X8C);
    // 0x802083FC: addu        $a0, $t1, $a1
    ctx->r4 = ADD32(ctx->r9, ctx->r5);
    // 0x80208400: addu        $v1, $t3, $a1
    ctx->r3 = ADD32(ctx->r11, ctx->r5);
L_80208404:
    // 0x80208404: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x80208408: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8020840C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80208410: sb          $t4, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r12;
    // 0x80208414: lbu         $t5, 0x1($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X1);
    // 0x80208418: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8020841C: sb          $t5, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r13;
    // 0x80208420: lbu         $t6, -0x2($v1)
    ctx->r14 = MEM_BU(ctx->r3, -0X2);
    // 0x80208424: sb          $t6, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r14;
    // 0x80208428: lbu         $t7, -0x1($v1)
    ctx->r15 = MEM_BU(ctx->r3, -0X1);
    // 0x8020842C: bne         $a1, $s0, L_80208404
    if (ctx->r5 != ctx->r16) {
        // 0x80208430: sb          $t7, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r15;
            goto L_80208404;
    }
    // 0x80208430: sb          $t7, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r15;
L_80208434:
    // 0x80208434: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
L_80208438:
    // 0x80208438: beq         $at, $zero, L_80208458
    if (ctx->r1 == 0) {
        // 0x8020843C: lui         $s0, 0x8026
        ctx->r16 = S32(0X8026 << 16);
            goto L_80208458;
    }
    // 0x8020843C: lui         $s0, 0x8026
    ctx->r16 = S32(0X8026 << 16);
    // 0x80208440: addu        $a0, $t1, $a1
    ctx->r4 = ADD32(ctx->r9, ctx->r5);
L_80208444:
    // 0x80208444: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80208448: sltu        $at, $a1, $t0
    ctx->r1 = ctx->r5 < ctx->r8 ? 1 : 0;
    // 0x8020844C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80208450: bne         $at, $zero, L_80208444
    if (ctx->r1 != 0) {
        // 0x80208454: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_80208444;
    }
    // 0x80208454: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_80208458:
    // 0x80208458: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x8020845C: addiu       $t8, $t8, -0x1900
    ctx->r24 = ADD32(ctx->r24, -0X1900);
    // 0x80208460: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x80208464: addiu       $t9, $fp, 0x58
    ctx->r25 = ADD32(ctx->r30, 0X58);
    // 0x80208468: addiu       $s0, $s0, -0x3CE0
    ctx->r16 = ADD32(ctx->r16, -0X3CE0);
    // 0x8020846C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80208470: lw          $a2, -0x18FC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X18FC);
    // 0x80208474: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80208478: lui         $a3, 0x8025
    ctx->r7 = S32(0X8025 << 16);
    // 0x8020847C: addiu       $a3, $a3, -0x1910
    ctx->r7 = ADD32(ctx->r7, -0X1910);
    // 0x80208480: sw          $t1, 0x60($fp)
    MEM_W(0X60, ctx->r30) = ctx->r9;
    // 0x80208484: sw          $t0, 0x5C($fp)
    MEM_W(0X5C, ctx->r30) = ctx->r8;
    // 0x80208488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020848C: jal         0x80239120
    // 0x80208490: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    func_80239120(rdram, ctx);
        goto after_2;
    // 0x80208490: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_2:
    // 0x80208494: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x80208498: addiu       $t2, $t2, -0x1900
    ctx->r10 = ADD32(ctx->r10, -0X1900);
    // 0x8020849C: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x802084A0: lui         $a3, 0x8025
    ctx->r7 = S32(0X8025 << 16);
    // 0x802084A4: addiu       $a3, $a3, -0x1910
    ctx->r7 = ADD32(ctx->r7, -0X1910);
    // 0x802084A8: lw          $a2, -0x18FC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X18FC);
    // 0x802084AC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802084B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802084B4: jal         0x802399C0
    // 0x802084B8: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    func_802399C0(rdram, ctx);
        goto after_3;
    // 0x802084B8: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_3:
    // 0x802084BC: lw          $t0, 0x5C($fp)
    ctx->r8 = MEM_W(ctx->r30, 0X5C);
    // 0x802084C0: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x802084C4: addiu       $t3, $t3, -0x1900
    ctx->r11 = ADD32(ctx->r11, -0X1900);
    // 0x802084C8: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x802084CC: lui         $a3, 0x8025
    ctx->r7 = S32(0X8025 << 16);
    // 0x802084D0: addiu       $t4, $fp, 0x58
    ctx->r12 = ADD32(ctx->r30, 0X58);
    // 0x802084D4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802084D8: addiu       $a3, $a3, -0x1910
    ctx->r7 = ADD32(ctx->r7, -0X1910);
    // 0x802084DC: lw          $a2, -0x18FC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X18FC);
    // 0x802084E0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x802084E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802084E8: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    // 0x802084EC: jal         0x80239F30
    // 0x802084F0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_80239F30(rdram, ctx);
        goto after_4;
    // 0x802084F0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_4:
    // 0x802084F4: lw          $t0, 0x5C($fp)
    ctx->r8 = MEM_W(ctx->r30, 0X5C);
    // 0x802084F8: lw          $t1, 0x60($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X60);
    // 0x802084FC: lw          $a1, 0x58($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X58);
    // 0x80208500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80208504: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80208508: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8020850C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80208510: jal         0x80239650
    // 0x80208514: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_80239650(rdram, ctx);
        goto after_5;
    // 0x80208514: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_5:
    // 0x80208518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020851C: lw          $a1, 0x58($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X58);
    // 0x80208520: jal         0x802392C0
    // 0x80208524: addiu       $a2, $fp, 0x64
    ctx->r6 = ADD32(ctx->r30, 0X64);
    func_802392C0(rdram, ctx);
        goto after_6;
    // 0x80208524: addiu       $a2, $fp, 0x64
    ctx->r6 = ADD32(ctx->r30, 0X64);
    after_6:
    // 0x80208528: lw          $t5, 0x64($fp)
    ctx->r13 = MEM_W(ctx->r30, 0X64);
    // 0x8020852C: lw          $t6, 0x94($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X94);
    // 0x80208530: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
L_80208534:
    // 0x80208534: lw          $ra, 0x3C($fp)
    ctx->r31 = MEM_W(ctx->r30, 0X3C);
    // 0x80208538: or          $sp, $fp, $zero
    ctx->r29 = ctx->r30 | 0;
    // 0x8020853C: lw          $s0, 0x34($fp)
    ctx->r16 = MEM_W(ctx->r30, 0X34);
    // 0x80208540: lw          $fp, 0x38($fp)
    ctx->r30 = MEM_W(ctx->r30, 0X38);
    // 0x80208544: jr          $ra
    // 0x80208548: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80208548: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80248090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248090: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80248094: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80248098: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8024809C: jal         0x8024A710
    // 0x802480A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8024A710(rdram, ctx);
        goto after_0;
    // 0x802480A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802480A4: beq         $v0, $zero, L_802480B4
    if (ctx->r2 == 0) {
        // 0x802480A8: nop
    
            goto L_802480B4;
    }
    // 0x802480A8: nop

    // 0x802480AC: b           L_802480CC
    // 0x802480B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_802480CC;
    // 0x802480B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_802480B4:
    // 0x802480B4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x802480B8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802480BC: lui         $at, 0xA000
    ctx->r1 = S32(0XA000 << 16);
    // 0x802480C0: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x802480C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802480C8: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
L_802480CC:
    // 0x802480CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802480D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802480D4: jr          $ra
    // 0x802480D8: nop

    return;
    // 0x802480D8: nop

;}
RECOMP_FUNC void func_80223108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223108: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8022310C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80223110: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80223114: jal         0x80228DE0
    // 0x80223118: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x80223118: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x8022311C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80223120: lwc1        $f2, 0x3948($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3948);
    // 0x80223124: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80223128: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022312C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80223130: nop

    // 0x80223134: bc1f        L_8022314C
    if (!c1cs) {
        // 0x80223138: nop
    
            goto L_8022314C;
    }
    // 0x80223138: nop

    // 0x8022313C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80223140: lwc1        $f0, 0x394C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x80223144: b           L_80223164
    // 0x80223148: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
        goto L_80223164;
    // 0x80223148: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
L_8022314C:
    // 0x8022314C: lwc1        $f0, 0x3950($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3950);
    // 0x80223150: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80223154: nop

    // 0x80223158: bc1fl       L_80223168
    if (!c1cs) {
        // 0x8022315C: lwc1        $f12, 0x5C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
            goto L_80223168;
    }
    goto skip_0;
    // 0x8022315C: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    skip_0:
    // 0x80223160: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
L_80223164:
    // 0x80223164: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
L_80223168:
    // 0x80223168: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8022316C: nop

    // 0x80223170: bc1fl       L_80223184
    if (!c1cs) {
        // 0x80223174: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_80223184;
    }
    goto skip_1;
    // 0x80223174: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_1:
    // 0x80223178: b           L_80223194
    // 0x8022317C: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
        goto L_80223194;
    // 0x8022317C: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x80223180: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_80223184:
    // 0x80223184: nop

    // 0x80223188: bc1fl       L_80223198
    if (!c1cs) {
        // 0x8022318C: lwc1        $f12, 0x60($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
            goto L_80223198;
    }
    goto skip_2;
    // 0x8022318C: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    skip_2:
    // 0x80223190: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
L_80223194:
    // 0x80223194: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
L_80223198:
    // 0x80223198: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8022319C: nop

    // 0x802231A0: bc1fl       L_802231B4
    if (!c1cs) {
        // 0x802231A4: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_802231B4;
    }
    goto skip_3;
    // 0x802231A4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_3:
    // 0x802231A8: b           L_802231C4
    // 0x802231AC: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
        goto L_802231C4;
    // 0x802231AC: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    // 0x802231B0: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_802231B4:
    // 0x802231B4: nop

    // 0x802231B8: bc1f        L_802231C4
    if (!c1cs) {
        // 0x802231BC: nop
    
            goto L_802231C4;
    }
    // 0x802231BC: nop

    // 0x802231C0: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
L_802231C4:
    // 0x802231C4: jal         0x80222CBC
    // 0x802231C8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_80222CBC(rdram, ctx);
        goto after_1;
    // 0x802231C8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x802231CC: jal         0x80222E24
    // 0x802231D0: nop

    func_80222E24(rdram, ctx);
        goto after_2;
    // 0x802231D0: nop

    after_2:
    // 0x802231D4: jal         0x802375F0
    // 0x802231D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_802375F0(rdram, ctx);
        goto after_3;
    // 0x802231D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x802231DC: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x802231E0: addiu       $a2, $a2, 0x3B90
    ctx->r6 = ADD32(ctx->r6, 0X3B90);
    // 0x802231E4: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x802231E8: lui         $t7, 0x106
    ctx->r15 = S32(0X106 << 16);
    // 0x802231EC: ori         $t7, $t7, 0x40
    ctx->r15 = ctx->r15 | 0X40;
    // 0x802231F0: addiu       $t6, $a0, 0x8
    ctx->r14 = ADD32(ctx->r4, 0X8);
    // 0x802231F4: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x802231F8: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x802231FC: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80223200: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80223204: lhu         $t8, -0x178C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X178C);
    // 0x80223208: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x8022320C: addiu       $t0, $t0, 0x3BB0
    ctx->r8 = ADD32(ctx->r8, 0X3BB0);
    // 0x80223210: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80223214: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x80223218: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x8022321C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80223220: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80223224: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80223228: jr          $ra
    // 0x8022322C: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    return;
    // 0x8022322C: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
;}
RECOMP_FUNC void func_802096F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802096F4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802096F8: lwc1        $f4, 0x30A0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X30A0);
    // 0x802096FC: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80209700: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x80209704: c.le.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl <= ctx->f4.fl;
    // 0x80209708: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x8020970C: bc1fl       L_80209730
    if (!c1cs) {
        // 0x80209710: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_80209730;
    }
    goto skip_0;
    // 0x80209710: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_0:
    // 0x80209714: swc1        $f20, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f20.u32l;
    // 0x80209718: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8020971C: swc1        $f20, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f20.u32l;
    // 0x80209720: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80209724: b           L_80209908
    // 0x80209728: swc1        $f20, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f20.u32l;
        goto L_80209908;
    // 0x80209728: swc1        $f20, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f20.u32l;
    // 0x8020972C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_80209730:
    // 0x80209730: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80209734: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80209738: nop

    // 0x8020973C: bc1fl       L_80209754
    if (!c1cs) {
        // 0x80209740: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80209754;
    }
    goto skip_1;
    // 0x80209740: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_1:
    // 0x80209744: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80209748: nop

    // 0x8020974C: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x80209750: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_80209754:
    // 0x80209754: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80209758: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8020975C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80209760: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x80209764: nop

    // 0x80209768: bc1f        L_80209778
    if (!c1cs) {
        // 0x8020976C: nop
    
            goto L_80209778;
    }
    // 0x8020976C: nop

    // 0x80209770: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80209774: nop

L_80209778:
    // 0x80209778: mul.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x8020977C: trunc.w.s   $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    ctx->f10.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x80209780: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x80209784: nop

    // 0x80209788: sltiu       $at, $v0, 0x6
    ctx->r1 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x8020978C: beq         $at, $zero, L_80209908
    if (ctx->r1 == 0) {
        // 0x80209790: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_80209908;
    }
    // 0x80209790: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80209794: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80209798: addu        $at, $at, $t9
    gpr jr_addend_802097A0 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8020979C: lw          $t9, 0x30A4($at)
    ctx->r25 = ADD32(ctx->r1, 0X30A4);
    // 0x802097A0: jr          $t9
    // 0x802097A4: nop

    switch (jr_addend_802097A0 >> 2) {
        case 0: goto L_802097A8; break;
        case 1: goto L_802097E4; break;
        case 2: goto L_80209820; break;
        case 3: goto L_8020985C; break;
        case 4: goto L_80209894; break;
        case 5: goto L_802098D4; break;
        default: switch_error(__func__, 0x802097A0, 0x802530A4);
    }
    // 0x802097A4: nop

L_802097A8:
    // 0x802097A8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x802097AC: swc1        $f20, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f20.u32l;
    // 0x802097B0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x802097B4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802097B8: sub.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f18.fl;
    // 0x802097BC: sub.s       $f18, $f0, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x802097C0: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802097C4: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x802097C8: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x802097CC: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x802097D0: swc1        $f16, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f16.u32l;
    // 0x802097D4: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x802097D8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x802097DC: b           L_80209908
    // 0x802097E0: swc1        $f4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f4.u32l;
        goto L_80209908;
    // 0x802097E0: swc1        $f4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f4.u32l;
L_802097E4:
    // 0x802097E4: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x802097E8: nop

    // 0x802097EC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802097F0: sub.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x802097F4: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x802097F8: mul.s       $f16, $f14, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x802097FC: sub.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x80209800: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x80209804: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
    // 0x80209808: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8020980C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80209810: swc1        $f20, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f20.u32l;
    // 0x80209814: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80209818: b           L_80209908
    // 0x8020981C: swc1        $f8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f8.u32l;
        goto L_80209908;
    // 0x8020981C: swc1        $f8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f8.u32l;
L_80209820:
    // 0x80209820: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x80209824: sub.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80209828: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020982C: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80209830: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x80209834: swc1        $f16, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f16.u32l;
    // 0x80209838: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8020983C: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x80209840: swc1        $f20, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f20.u32l;
    // 0x80209844: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80209848: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8020984C: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80209850: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80209854: b           L_80209908
    // 0x80209858: swc1        $f18, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f18.u32l;
        goto L_80209908;
    // 0x80209858: swc1        $f18, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f18.u32l;
L_8020985C:
    // 0x8020985C: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80209860: sub.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80209864: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80209868: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8020986C: sub.s       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x80209870: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
    // 0x80209874: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80209878: mul.s       $f18, $f14, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x8020987C: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x80209880: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80209884: swc1        $f6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
    // 0x80209888: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8020988C: b           L_80209908
    // 0x80209890: swc1        $f20, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f20.u32l;
        goto L_80209908;
    // 0x80209890: swc1        $f20, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f20.u32l;
L_80209894:
    // 0x80209894: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80209898: nop

    // 0x8020989C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802098A0: sub.s       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x802098A4: sub.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x802098A8: sub.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x802098AC: mul.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x802098B0: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802098B4: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x802098B8: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    // 0x802098BC: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x802098C0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x802098C4: swc1        $f16, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f16.u32l;
    // 0x802098C8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x802098CC: b           L_80209908
    // 0x802098D0: swc1        $f20, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f20.u32l;
        goto L_80209908;
    // 0x802098D0: swc1        $f20, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f20.u32l;
L_802098D4:
    // 0x802098D4: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x802098D8: sub.s       $f18, $f0, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x802098DC: swc1        $f20, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f20.u32l;
    // 0x802098E0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x802098E4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802098E8: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x802098EC: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x802098F0: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
    // 0x802098F4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x802098F8: mul.s       $f16, $f14, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x802098FC: sub.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x80209900: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x80209904: swc1        $f4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f4.u32l;
L_80209908:
    // 0x80209908: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8020990C: jr          $ra
    // 0x80209910: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80209910: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8024241C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024241C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80242420: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80242424: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80242428: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8024242C: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x80242430: addiu       $a2, $a2, 0x3810
    ctx->r6 = ADD32(ctx->r6, 0X3810);
    // 0x80242434: addiu       $a1, $a1, 0x38FC
    ctx->r5 = ADD32(ctx->r5, 0X38FC);
    // 0x80242438: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8024243C: jal         0x80249920
    // 0x80242440: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80249920(rdram, ctx);
        goto after_0;
    // 0x80242440: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80242444: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x80242448: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8024244C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80242450: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80242454: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80242458: jal         0x80236CD0
    // 0x8024245C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80236CD0(rdram, ctx);
        goto after_1;
    // 0x8024245C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80242460: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80242464: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80242468: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8024246C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80242470: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80242474: sw          $v0, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r2;
    // 0x80242478: sw          $t7, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r15;
    // 0x8024247C: sw          $zero, 0x30($t0)
    MEM_W(0X30, ctx->r8) = 0;
    // 0x80242480: sw          $zero, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = 0;
    // 0x80242484: sw          $zero, 0x28($t0)
    MEM_W(0X28, ctx->r8) = 0;
    // 0x80242488: sw          $zero, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = 0;
    // 0x8024248C: swc1        $f4, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f4.u32l;
    // 0x80242490: swc1        $f6, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f6.u32l;
    // 0x80242494: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80242498: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8024249C: jr          $ra
    // 0x802424A0: nop

    return;
    // 0x802424A0: nop

;}
RECOMP_FUNC void func_8023D190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D190: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8023D194: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8023D198: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023D19C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023D1A0: ld          $t7, 0x8($sp)
    ctx->r15 = LD(ctx->r29, 0X8);
    // 0x8023D1A4: ld          $t6, 0x0($sp)
    ctx->r14 = LD(ctx->r29, 0X0);
    // 0x8023D1A8: ddivu       $zero, $t6, $t7
    DDIVU(U64(ctx->r14), U64(ctx->r15), &lo, &hi);
    // 0x8023D1AC: bne         $t7, $zero, L_8023D1B8
    if (ctx->r15 != 0) {
        // 0x8023D1B0: nop
    
            goto L_8023D1B8;
    }
    // 0x8023D1B0: nop

    // 0x8023D1B4: break       7
    do_break(2149831092);
L_8023D1B8:
    // 0x8023D1B8: mfhi        $v0
    ctx->r2 = hi;
    // 0x8023D1BC: dsll32      $v1, $v0, 0
    ctx->r3 = ctx->r2 << (0 + 32);
    // 0x8023D1C0: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x8023D1C4: jr          $ra
    // 0x8023D1C8: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x8023D1C8: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void func_8021C52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021C52C: lbu         $v1, 0x10($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X10);
    // 0x8021C530: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x8021C534: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021C538: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8021C53C: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x8021C540: lwc1        $f4, -0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, -0X4);
    // 0x8021C544: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x8021C548: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x8021C54C: nop

    // 0x8021C550: bc1f        L_8021C560
    if (!c1cs) {
        // 0x8021C554: nop
    
            goto L_8021C560;
    }
    // 0x8021C554: nop

    // 0x8021C558: jr          $ra
    // 0x8021C55C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    return;
    // 0x8021C55C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8021C560:
    // 0x8021C560: blez        $a1, L_8021C5A0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8021C564: andi        $a0, $v1, 0xFF
        ctx->r4 = ctx->r3 & 0XFF;
            goto L_8021C5A0;
    }
    // 0x8021C564: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x8021C568: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8021C56C:
    // 0x8021C56C: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x8021C570: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x8021C574: lwc1        $f6, -0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, -0X4);
    // 0x8021C578: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x8021C57C: nop

    // 0x8021C580: bc1fl       L_8021C594
    if (!c1cs) {
        // 0x8021C584: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_8021C594;
    }
    goto skip_0;
    // 0x8021C584: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    skip_0:
    // 0x8021C588: jr          $ra
    // 0x8021C58C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8021C58C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8021C590: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_8021C594:
    // 0x8021C594: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8021C598: bgtz        $v1, L_8021C56C
    if (SIGNED(ctx->r3) > 0) {
        // 0x8021C59C: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_8021C56C;
    }
    // 0x8021C59C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_8021C5A0:
    // 0x8021C5A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021C5A4: jr          $ra
    // 0x8021C5A8: nop

    return;
    // 0x8021C5A8: nop

;}
RECOMP_FUNC void func_8023CD60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023CD60: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8023CD64: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023CD68: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023CD6C: sb          $a1, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r5;
    // 0x8023CD70: sb          $a2, 0x19($a0)
    MEM_B(0X19, ctx->r4) = ctx->r6;
    // 0x8023CD74: sb          $a3, 0x1A($a0)
    MEM_B(0X1A, ctx->r4) = ctx->r7;
    // 0x8023CD78: lbu         $t9, 0x13($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X13);
    // 0x8023CD7C: jr          $ra
    // 0x8023CD80: sb          $t9, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r25;
    return;
    // 0x8023CD80: sb          $t9, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_8022BA58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022BA58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BA5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BA60: jal         0x8022B948
    // 0x8022BA64: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8022B948(rdram, ctx);
        goto after_0;
    // 0x8022BA64: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x8022BA68: beq         $v0, $zero, L_8022BA80
    if (ctx->r2 == 0) {
        // 0x8022BA6C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8022BA80;
    }
    // 0x8022BA6C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8022BA70: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8022BA74: lw          $t6, 0x5F7C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5F7C);
    // 0x8022BA78: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022BA7C: sw          $t6, 0x5F84($at)
    MEM_W(0X5F84, ctx->r1) = ctx->r14;
L_8022BA80:
    // 0x8022BA80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BA84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022BA88: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8022BA8C: jr          $ra
    // 0x8022BA90: nop

    return;
    // 0x8022BA90: nop

;}
RECOMP_FUNC void func_802403E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802403E0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802403E4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802403E8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802403EC: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x802403F0: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x802403F4: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x802403F8: addu        $t4, $t8, $t9
    ctx->r12 = ADD32(ctx->r24, ctx->r25);
    // 0x802403FC: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x80240400: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80240404: andi        $t3, $a2, 0xFF
    ctx->r11 = ctx->r6 & 0XFF;
    // 0x80240408: lh          $t0, 0xE($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XE);
    // 0x8024040C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80240410: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x80240414: blez        $t0, L_802404D0
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80240418: addu        $a1, $v1, $t0
        ctx->r5 = ADD32(ctx->r3, ctx->r8);
            goto L_802404D0;
    }
    // 0x80240418: addu        $a1, $v1, $t0
    ctx->r5 = ADD32(ctx->r3, ctx->r8);
L_8024041C:
    // 0x8024041C: bgez        $a1, L_8024042C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80240420: sra         $t5, $a1, 1
        ctx->r13 = S32(SIGNED(ctx->r5) >> 1);
            goto L_8024042C;
    }
    // 0x80240420: sra         $t5, $a1, 1
    ctx->r13 = S32(SIGNED(ctx->r5) >> 1);
    // 0x80240424: addiu       $at, $a1, 0x1
    ctx->r1 = ADD32(ctx->r5, 0X1);
    // 0x80240428: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_8024042C:
    // 0x8024042C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80240430: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x80240434: lw          $a3, 0xC($t7)
    ctx->r7 = MEM_W(ctx->r15, 0XC);
    // 0x80240438: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x8024043C: lw          $a2, 0x4($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X4);
    // 0x80240440: lbu         $t2, 0x2($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X2);
    // 0x80240444: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80240448: bnel        $at, $zero, L_80240490
    if (ctx->r1 != 0) {
        // 0x8024044C: slt         $at, $t1, $t2
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_80240490;
    }
    goto skip_0;
    // 0x8024044C: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    skip_0:
    // 0x80240450: lbu         $t8, 0x3($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X3);
    // 0x80240454: slt         $at, $t8, $t1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80240458: bnel        $at, $zero, L_80240490
    if (ctx->r1 != 0) {
        // 0x8024045C: slt         $at, $t1, $t2
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_80240490;
    }
    goto skip_1;
    // 0x8024045C: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    skip_1:
    // 0x80240460: lbu         $t9, 0x0($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X0);
    // 0x80240464: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x80240468: slt         $at, $t3, $t9
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8024046C: bnel        $at, $zero, L_80240490
    if (ctx->r1 != 0) {
        // 0x80240470: slt         $at, $t1, $t2
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_80240490;
    }
    goto skip_2;
    // 0x80240470: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    skip_2:
    // 0x80240474: lbu         $t4, 0x1($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0X1);
    // 0x80240478: slt         $at, $t4, $a1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8024047C: bnel        $at, $zero, L_80240490
    if (ctx->r1 != 0) {
        // 0x80240480: slt         $at, $t1, $t2
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_80240490;
    }
    goto skip_3;
    // 0x80240480: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    skip_3:
    // 0x80240484: jr          $ra
    // 0x80240488: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x80240488: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x8024048C: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
L_80240490:
    // 0x80240490: bne         $at, $zero, L_802404B8
    if (ctx->r1 != 0) {
        // 0x80240494: nop
    
            goto L_802404B8;
    }
    // 0x80240494: nop

    // 0x80240498: lbu         $t5, 0x0($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X0);
    // 0x8024049C: slt         $at, $t3, $t5
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x802404A0: beql        $at, $zero, L_802404C4
    if (ctx->r1 == 0) {
        // 0x802404A4: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_802404C4;
    }
    goto skip_4;
    // 0x802404A4: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    skip_4:
    // 0x802404A8: lbu         $t6, 0x3($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X3);
    // 0x802404AC: slt         $at, $t6, $t1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x802404B0: bnel        $at, $zero, L_802404C4
    if (ctx->r1 != 0) {
        // 0x802404B4: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_802404C4;
    }
    goto skip_5;
    // 0x802404B4: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    skip_5:
L_802404B8:
    // 0x802404B8: b           L_802404C4
    // 0x802404BC: addiu       $t0, $a0, -0x1
    ctx->r8 = ADD32(ctx->r4, -0X1);
        goto L_802404C4;
    // 0x802404BC: addiu       $t0, $a0, -0x1
    ctx->r8 = ADD32(ctx->r4, -0X1);
    // 0x802404C0: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
L_802404C4:
    // 0x802404C4: slt         $at, $t0, $v1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802404C8: beql        $at, $zero, L_8024041C
    if (ctx->r1 == 0) {
        // 0x802404CC: addu        $a1, $v1, $t0
        ctx->r5 = ADD32(ctx->r3, ctx->r8);
            goto L_8024041C;
    }
    goto skip_6;
    // 0x802404CC: addu        $a1, $v1, $t0
    ctx->r5 = ADD32(ctx->r3, ctx->r8);
    skip_6:
L_802404D0:
    // 0x802404D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802404D4: jr          $ra
    // 0x802404D8: nop

    return;
    // 0x802404D8: nop

;}
RECOMP_FUNC void func_8022A4F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A4F4: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8022A4F8: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8022A4FC: lwc1        $f2, 0x4($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8022A500: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8022A504: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8022A508: lwc1        $f12, 0x8($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8022A50C: lwc1        $f18, 0x20($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8022A510: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8022A514: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8022A518: mul.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x8022A51C: lwc1        $f6, 0x30($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X30);
    // 0x8022A520: add.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8022A524: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8022A528: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
    // 0x8022A52C: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8022A530: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8022A534: lwc1        $f10, 0x24($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8022A538: mul.s       $f16, $f0, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8022A53C: nop

    // 0x8022A540: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8022A544: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x8022A548: mul.s       $f18, $f12, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x8022A54C: lwc1        $f16, 0x34($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X34);
    // 0x8022A550: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8022A554: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8022A558: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x8022A55C: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8022A560: lwc1        $f18, 0x18($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8022A564: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8022A568: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8022A56C: nop

    // 0x8022A570: mul.s       $f16, $f2, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8022A574: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8022A578: mul.s       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x8022A57C: lwc1        $f8, 0x38($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X38);
    // 0x8022A580: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8022A584: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8022A588: jr          $ra
    // 0x8022A58C: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
    return;
    // 0x8022A58C: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_80226D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80226D14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226D18: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80226D1C: lui         $s0, 0x8027
    ctx->r16 = S32(0X8027 << 16);
    // 0x80226D20: lw          $s0, 0x5A24($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5A24);
    // 0x80226D24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226D28: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80226D2C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80226D30: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80226D34: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80226D38: jal         0x80225424
    // 0x80226D3C: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    func_80225424(rdram, ctx);
        goto after_0;
    // 0x80226D3C: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    after_0:
    // 0x80226D40: lui         $s1, 0x8027
    ctx->r17 = S32(0X8027 << 16);
    // 0x80226D44: addiu       $s1, $s1, 0x5A20
    ctx->r17 = ADD32(ctx->r17, 0X5A20);
    // 0x80226D48: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80226D4C: lhu         $t8, 0x4($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X4);
    // 0x80226D50: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x80226D54: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80226D58: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80226D5C: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80226D60: addiu       $t2, $t2, 0x5A20
    ctx->r10 = ADD32(ctx->r10, 0X5A20);
    // 0x80226D64: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80226D68: sltu        $at, $t0, $t2
    ctx->r1 = ctx->r8 < ctx->r10 ? 1 : 0;
    // 0x80226D6C: bne         $at, $zero, L_80226D80
    if (ctx->r1 != 0) {
        // 0x80226D70: sw          $t0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r8;
            goto L_80226D80;
    }
    // 0x80226D70: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x80226D74: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80226D78: jal         0x80231A24
    // 0x80226D7C: addiu       $a0, $a0, 0x3C98
    ctx->r4 = ADD32(ctx->r4, 0X3C98);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x80226D7C: addiu       $a0, $a0, 0x3C98
    ctx->r4 = ADD32(ctx->r4, 0X3C98);
    after_1:
L_80226D80:
    // 0x80226D80: lhu         $a2, 0x4($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X4);
    // 0x80226D84: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80226D88: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80226D8C: sll         $t3, $a2, 1
    ctx->r11 = S32(ctx->r6 << 1);
    // 0x80226D90: jal         0x8022B460
    // 0x80226D94: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    func_8022B460(rdram, ctx);
        goto after_2;
    // 0x80226D94: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_2:
    // 0x80226D98: lhu         $t5, 0x4($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X4);
    // 0x80226D9C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80226DA0: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x80226DA4: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80226DA8: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x80226DAC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80226DB0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80226DB4: jal         0x80225424
    // 0x80226DB8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_3;
    // 0x80226DB8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x80226DBC: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80226DC0: lhu         $t0, 0xC($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XC);
    // 0x80226DC4: lui         $t5, 0x8027
    ctx->r13 = S32(0X8027 << 16);
    // 0x80226DC8: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    // 0x80226DCC: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80226DD0: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80226DD4: addiu       $t5, $t5, 0x5A20
    ctx->r13 = ADD32(ctx->r13, 0X5A20);
    // 0x80226DD8: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80226DDC: sltu        $at, $t2, $t5
    ctx->r1 = ctx->r10 < ctx->r13 ? 1 : 0;
    // 0x80226DE0: bne         $at, $zero, L_80226DF4
    if (ctx->r1 != 0) {
        // 0x80226DE4: sw          $t2, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r10;
            goto L_80226DF4;
    }
    // 0x80226DE4: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
    // 0x80226DE8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80226DEC: jal         0x80231A24
    // 0x80226DF0: addiu       $a0, $a0, 0x3CA8
    ctx->r4 = ADD32(ctx->r4, 0X3CA8);
    func_80231A24(rdram, ctx);
        goto after_4;
    // 0x80226DF0: addiu       $a0, $a0, 0x3CA8
    ctx->r4 = ADD32(ctx->r4, 0X3CA8);
    after_4:
L_80226DF4:
    // 0x80226DF4: lhu         $a2, 0xC($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XC);
    // 0x80226DF8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80226DFC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80226E00: sll         $t4, $a2, 1
    ctx->r12 = S32(ctx->r6 << 1);
    // 0x80226E04: jal         0x8022B460
    // 0x80226E08: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    func_8022B460(rdram, ctx);
        goto after_5;
    // 0x80226E08: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_5:
    // 0x80226E0C: lhu         $t8, 0xC($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XC);
    // 0x80226E10: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80226E14: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80226E18: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x80226E1C: addu        $t0, $t6, $t7
    ctx->r8 = ADD32(ctx->r14, ctx->r15);
    // 0x80226E20: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80226E24: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80226E28: jal         0x80225424
    // 0x80226E2C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_6;
    // 0x80226E2C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_6:
    // 0x80226E30: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80226E34: lhu         $t2, 0x14($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X14);
    // 0x80226E38: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x80226E3C: sw          $t9, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r25;
    // 0x80226E40: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x80226E44: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80226E48: addiu       $t8, $t8, 0x5A20
    ctx->r24 = ADD32(ctx->r24, 0X5A20);
    // 0x80226E4C: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x80226E50: sltu        $at, $t5, $t8
    ctx->r1 = ctx->r13 < ctx->r24 ? 1 : 0;
    // 0x80226E54: bne         $at, $zero, L_80226E68
    if (ctx->r1 != 0) {
        // 0x80226E58: sw          $t5, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r13;
            goto L_80226E68;
    }
    // 0x80226E58: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x80226E5C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80226E60: jal         0x80231A24
    // 0x80226E64: addiu       $a0, $a0, 0x3CB8
    ctx->r4 = ADD32(ctx->r4, 0X3CB8);
    func_80231A24(rdram, ctx);
        goto after_7;
    // 0x80226E64: addiu       $a0, $a0, 0x3CB8
    ctx->r4 = ADD32(ctx->r4, 0X3CB8);
    after_7:
L_80226E68:
    // 0x80226E68: lhu         $a2, 0x14($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X14);
    // 0x80226E6C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x80226E70: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80226E74: sll         $t6, $a2, 1
    ctx->r14 = S32(ctx->r6 << 1);
    // 0x80226E78: jal         0x8022B460
    // 0x80226E7C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_8022B460(rdram, ctx);
        goto after_8;
    // 0x80226E7C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_8:
    // 0x80226E80: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    // 0x80226E84: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80226E88: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80226E8C: sll         $t9, $t0, 1
    ctx->r25 = S32(ctx->r8 << 1);
    // 0x80226E90: addu        $t2, $t7, $t9
    ctx->r10 = ADD32(ctx->r15, ctx->r25);
    // 0x80226E94: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80226E98: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80226E9C: jal         0x80225424
    // 0x80226EA0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_9;
    // 0x80226EA0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_9:
    // 0x80226EA4: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x80226EA8: lhu         $t5, 0x1C($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X1C);
    // 0x80226EAC: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80226EB0: sw          $t1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r9;
    // 0x80226EB4: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x80226EB8: sll         $t4, $t5, 1
    ctx->r12 = S32(ctx->r13 << 1);
    // 0x80226EBC: addiu       $t0, $t0, 0x5A20
    ctx->r8 = ADD32(ctx->r8, 0X5A20);
    // 0x80226EC0: addu        $t8, $t3, $t4
    ctx->r24 = ADD32(ctx->r11, ctx->r12);
    // 0x80226EC4: sltu        $at, $t8, $t0
    ctx->r1 = ctx->r24 < ctx->r8 ? 1 : 0;
    // 0x80226EC8: bne         $at, $zero, L_80226EDC
    if (ctx->r1 != 0) {
        // 0x80226ECC: sw          $t8, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r24;
            goto L_80226EDC;
    }
    // 0x80226ECC: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x80226ED0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80226ED4: jal         0x80231A24
    // 0x80226ED8: addiu       $a0, $a0, 0x3CC8
    ctx->r4 = ADD32(ctx->r4, 0X3CC8);
    func_80231A24(rdram, ctx);
        goto after_10;
    // 0x80226ED8: addiu       $a0, $a0, 0x3CC8
    ctx->r4 = ADD32(ctx->r4, 0X3CC8);
    after_10:
L_80226EDC:
    // 0x80226EDC: lhu         $a2, 0x1C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X1C);
    // 0x80226EE0: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x80226EE4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80226EE8: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x80226EEC: jal         0x8022B460
    // 0x80226EF0: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    func_8022B460(rdram, ctx);
        goto after_11;
    // 0x80226EF0: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_11:
    // 0x80226EF4: lhu         $t2, 0x1C($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X1C);
    // 0x80226EF8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80226EFC: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x80226F00: sll         $t1, $t2, 1
    ctx->r9 = S32(ctx->r10 << 1);
    // 0x80226F04: addu        $t5, $t9, $t1
    ctx->r13 = ADD32(ctx->r25, ctx->r9);
    // 0x80226F08: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80226F0C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80226F10: jal         0x80225424
    // 0x80226F14: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_12;
    // 0x80226F14: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_12:
    // 0x80226F18: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x80226F1C: lhu         $t8, 0x24($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X24);
    // 0x80226F20: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x80226F24: sw          $t3, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r11;
    // 0x80226F28: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x80226F2C: sll         $t6, $t8, 1
    ctx->r14 = S32(ctx->r24 << 1);
    // 0x80226F30: addiu       $t2, $t2, 0x5A20
    ctx->r10 = ADD32(ctx->r10, 0X5A20);
    // 0x80226F34: addu        $t0, $t4, $t6
    ctx->r8 = ADD32(ctx->r12, ctx->r14);
    // 0x80226F38: sltu        $at, $t0, $t2
    ctx->r1 = ctx->r8 < ctx->r10 ? 1 : 0;
    // 0x80226F3C: bne         $at, $zero, L_80226F50
    if (ctx->r1 != 0) {
        // 0x80226F40: sw          $t0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r8;
            goto L_80226F50;
    }
    // 0x80226F40: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x80226F44: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80226F48: jal         0x80231A24
    // 0x80226F4C: addiu       $a0, $a0, 0x3CD8
    ctx->r4 = ADD32(ctx->r4, 0X3CD8);
    func_80231A24(rdram, ctx);
        goto after_13;
    // 0x80226F4C: addiu       $a0, $a0, 0x3CD8
    ctx->r4 = ADD32(ctx->r4, 0X3CD8);
    after_13:
L_80226F50:
    // 0x80226F50: lhu         $a2, 0x24($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X24);
    // 0x80226F54: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x80226F58: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80226F5C: sll         $t9, $a2, 1
    ctx->r25 = S32(ctx->r6 << 1);
    // 0x80226F60: jal         0x8022B460
    // 0x80226F64: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    func_8022B460(rdram, ctx);
        goto after_14;
    // 0x80226F64: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_14:
    // 0x80226F68: lhu         $t5, 0x24($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X24);
    // 0x80226F6C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80226F70: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80226F74: sll         $t3, $t5, 1
    ctx->r11 = S32(ctx->r13 << 1);
    // 0x80226F78: addu        $t8, $t1, $t3
    ctx->r24 = ADD32(ctx->r9, ctx->r11);
    // 0x80226F7C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80226F80: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80226F84: jal         0x80225424
    // 0x80226F88: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_15;
    // 0x80226F88: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_15:
    // 0x80226F8C: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x80226F90: lhu         $t0, 0x2C($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X2C);
    // 0x80226F94: lui         $t5, 0x8027
    ctx->r13 = S32(0X8027 << 16);
    // 0x80226F98: sw          $t4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r12;
    // 0x80226F9C: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80226FA0: sll         $t7, $t0, 1
    ctx->r15 = S32(ctx->r8 << 1);
    // 0x80226FA4: addiu       $t5, $t5, 0x5A20
    ctx->r13 = ADD32(ctx->r13, 0X5A20);
    // 0x80226FA8: addu        $t2, $t6, $t7
    ctx->r10 = ADD32(ctx->r14, ctx->r15);
    // 0x80226FAC: sltu        $at, $t2, $t5
    ctx->r1 = ctx->r10 < ctx->r13 ? 1 : 0;
    // 0x80226FB0: bne         $at, $zero, L_80226FC4
    if (ctx->r1 != 0) {
        // 0x80226FB4: sw          $t2, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r10;
            goto L_80226FC4;
    }
    // 0x80226FB4: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
    // 0x80226FB8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80226FBC: jal         0x80231A24
    // 0x80226FC0: addiu       $a0, $a0, 0x3CE8
    ctx->r4 = ADD32(ctx->r4, 0X3CE8);
    func_80231A24(rdram, ctx);
        goto after_16;
    // 0x80226FC0: addiu       $a0, $a0, 0x3CE8
    ctx->r4 = ADD32(ctx->r4, 0X3CE8);
    after_16:
L_80226FC4:
    // 0x80226FC4: lhu         $a2, 0x2C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X2C);
    // 0x80226FC8: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80226FCC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80226FD0: sll         $t1, $a2, 1
    ctx->r9 = S32(ctx->r6 << 1);
    // 0x80226FD4: jal         0x8022B460
    // 0x80226FD8: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    func_8022B460(rdram, ctx);
        goto after_17;
    // 0x80226FD8: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    after_17:
    // 0x80226FDC: lhu         $t8, 0x2C($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2C);
    // 0x80226FE0: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80226FE4: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80226FE8: sll         $t4, $t8, 1
    ctx->r12 = S32(ctx->r24 << 1);
    // 0x80226FEC: addu        $t0, $t3, $t4
    ctx->r8 = ADD32(ctx->r11, ctx->r12);
    // 0x80226FF0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80226FF4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80226FF8: jal         0x80225424
    // 0x80226FFC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_18;
    // 0x80226FFC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_18:
    // 0x80227000: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80227004: lhu         $t2, 0x34($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X34);
    // 0x80227008: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x8022700C: sw          $t6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r14;
    // 0x80227010: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80227014: sll         $t9, $t2, 1
    ctx->r25 = S32(ctx->r10 << 1);
    // 0x80227018: addiu       $t8, $t8, 0x5A20
    ctx->r24 = ADD32(ctx->r24, 0X5A20);
    // 0x8022701C: addu        $t5, $t7, $t9
    ctx->r13 = ADD32(ctx->r15, ctx->r25);
    // 0x80227020: sltu        $at, $t5, $t8
    ctx->r1 = ctx->r13 < ctx->r24 ? 1 : 0;
    // 0x80227024: bne         $at, $zero, L_80227038
    if (ctx->r1 != 0) {
        // 0x80227028: sw          $t5, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r13;
            goto L_80227038;
    }
    // 0x80227028: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x8022702C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80227030: jal         0x80231A24
    // 0x80227034: addiu       $a0, $a0, 0x3CF8
    ctx->r4 = ADD32(ctx->r4, 0X3CF8);
    func_80231A24(rdram, ctx);
        goto after_19;
    // 0x80227034: addiu       $a0, $a0, 0x3CF8
    ctx->r4 = ADD32(ctx->r4, 0X3CF8);
    after_19:
L_80227038:
    // 0x80227038: lhu         $a2, 0x34($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X34);
    // 0x8022703C: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80227040: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80227044: sll         $t3, $a2, 1
    ctx->r11 = S32(ctx->r6 << 1);
    // 0x80227048: jal         0x8022B460
    // 0x8022704C: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    func_8022B460(rdram, ctx);
        goto after_20;
    // 0x8022704C: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_20:
    // 0x80227050: lhu         $t0, 0x34($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X34);
    // 0x80227054: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80227058: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    // 0x8022705C: sll         $t6, $t0, 1
    ctx->r14 = S32(ctx->r8 << 1);
    // 0x80227060: addu        $t2, $t4, $t6
    ctx->r10 = ADD32(ctx->r12, ctx->r14);
    // 0x80227064: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80227068: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8022706C: jal         0x80225424
    // 0x80227070: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_21;
    // 0x80227070: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_21:
    // 0x80227074: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80227078: lhu         $t5, 0x3C($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X3C);
    // 0x8022707C: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80227080: sw          $t7, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r15;
    // 0x80227084: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80227088: sll         $t1, $t5, 1
    ctx->r9 = S32(ctx->r13 << 1);
    // 0x8022708C: addiu       $t0, $t0, 0x5A20
    ctx->r8 = ADD32(ctx->r8, 0X5A20);
    // 0x80227090: addu        $t8, $t9, $t1
    ctx->r24 = ADD32(ctx->r25, ctx->r9);
    // 0x80227094: sltu        $at, $t8, $t0
    ctx->r1 = ctx->r24 < ctx->r8 ? 1 : 0;
    // 0x80227098: bne         $at, $zero, L_802270AC
    if (ctx->r1 != 0) {
        // 0x8022709C: sw          $t8, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r24;
            goto L_802270AC;
    }
    // 0x8022709C: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x802270A0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802270A4: jal         0x80231A24
    // 0x802270A8: addiu       $a0, $a0, 0x3D08
    ctx->r4 = ADD32(ctx->r4, 0X3D08);
    func_80231A24(rdram, ctx);
        goto after_22;
    // 0x802270A8: addiu       $a0, $a0, 0x3D08
    ctx->r4 = ADD32(ctx->r4, 0X3D08);
    after_22:
L_802270AC:
    // 0x802270AC: lhu         $a2, 0x3C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X3C);
    // 0x802270B0: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x802270B4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802270B8: sll         $t4, $a2, 1
    ctx->r12 = S32(ctx->r6 << 1);
    // 0x802270BC: jal         0x8022B460
    // 0x802270C0: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    func_8022B460(rdram, ctx);
        goto after_23;
    // 0x802270C0: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_23:
    // 0x802270C4: lhu         $t2, 0x3C($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X3C);
    // 0x802270C8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x802270CC: addiu       $a0, $s0, 0x44
    ctx->r4 = ADD32(ctx->r16, 0X44);
    // 0x802270D0: sll         $t7, $t2, 1
    ctx->r15 = S32(ctx->r10 << 1);
    // 0x802270D4: addu        $t5, $t6, $t7
    ctx->r13 = ADD32(ctx->r14, ctx->r15);
    // 0x802270D8: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x802270DC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802270E0: jal         0x80225424
    // 0x802270E4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_24;
    // 0x802270E4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_24:
    // 0x802270E8: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x802270EC: lhu         $t8, 0x44($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X44);
    // 0x802270F0: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x802270F4: sw          $t9, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r25;
    // 0x802270F8: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x802270FC: sll         $t3, $t8, 1
    ctx->r11 = S32(ctx->r24 << 1);
    // 0x80227100: addiu       $t2, $t2, 0x5A20
    ctx->r10 = ADD32(ctx->r10, 0X5A20);
    // 0x80227104: addu        $t0, $t1, $t3
    ctx->r8 = ADD32(ctx->r9, ctx->r11);
    // 0x80227108: sltu        $at, $t0, $t2
    ctx->r1 = ctx->r8 < ctx->r10 ? 1 : 0;
    // 0x8022710C: bne         $at, $zero, L_80227120
    if (ctx->r1 != 0) {
        // 0x80227110: sw          $t0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r8;
            goto L_80227120;
    }
    // 0x80227110: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x80227114: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80227118: jal         0x80231A24
    // 0x8022711C: addiu       $a0, $a0, 0x3D18
    ctx->r4 = ADD32(ctx->r4, 0X3D18);
    func_80231A24(rdram, ctx);
        goto after_25;
    // 0x8022711C: addiu       $a0, $a0, 0x3D18
    ctx->r4 = ADD32(ctx->r4, 0X3D18);
    after_25:
L_80227120:
    // 0x80227120: lhu         $a2, 0x44($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X44);
    // 0x80227124: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    // 0x80227128: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8022712C: sll         $t6, $a2, 1
    ctx->r14 = S32(ctx->r6 << 1);
    // 0x80227130: jal         0x8022B460
    // 0x80227134: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_8022B460(rdram, ctx);
        goto after_26;
    // 0x80227134: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_26:
    // 0x80227138: lhu         $t5, 0x44($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X44);
    // 0x8022713C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80227140: addiu       $a0, $s0, 0x4C
    ctx->r4 = ADD32(ctx->r16, 0X4C);
    // 0x80227144: sll         $t9, $t5, 1
    ctx->r25 = S32(ctx->r13 << 1);
    // 0x80227148: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x8022714C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80227150: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80227154: jal         0x80225424
    // 0x80227158: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_27;
    // 0x80227158: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_27:
    // 0x8022715C: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x80227160: lhu         $t0, 0x4C($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X4C);
    // 0x80227164: lui         $t5, 0x8027
    ctx->r13 = S32(0X8027 << 16);
    // 0x80227168: sw          $t1, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r9;
    // 0x8022716C: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x80227170: sll         $t4, $t0, 1
    ctx->r12 = S32(ctx->r8 << 1);
    // 0x80227174: addiu       $t5, $t5, 0x5A20
    ctx->r13 = ADD32(ctx->r13, 0X5A20);
    // 0x80227178: addu        $t2, $t3, $t4
    ctx->r10 = ADD32(ctx->r11, ctx->r12);
    // 0x8022717C: sltu        $at, $t2, $t5
    ctx->r1 = ctx->r10 < ctx->r13 ? 1 : 0;
    // 0x80227180: bne         $at, $zero, L_80227194
    if (ctx->r1 != 0) {
        // 0x80227184: sw          $t2, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r10;
            goto L_80227194;
    }
    // 0x80227184: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
    // 0x80227188: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022718C: jal         0x80231A24
    // 0x80227190: addiu       $a0, $a0, 0x3D28
    ctx->r4 = ADD32(ctx->r4, 0X3D28);
    func_80231A24(rdram, ctx);
        goto after_28;
    // 0x80227190: addiu       $a0, $a0, 0x3D28
    ctx->r4 = ADD32(ctx->r4, 0X3D28);
    after_28:
L_80227194:
    // 0x80227194: lhu         $a2, 0x4C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X4C);
    // 0x80227198: lw          $a0, 0x48($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X48);
    // 0x8022719C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802271A0: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x802271A4: jal         0x8022B460
    // 0x802271A8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    func_8022B460(rdram, ctx);
        goto after_29;
    // 0x802271A8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_29:
    // 0x802271AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802271B0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802271B4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802271B8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802271BC: jr          $ra
    // 0x802271C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802271C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8020D790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020D790: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x8020D794: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x8020D798: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020D79C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8020D7A0: lwc1        $f22, 0xDC($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020D7A4: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x8020D7A8: lwc1        $f24, 0xE0($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8020D7AC: sub.s       $f4, $f12, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f22.fl;
    // 0x8020D7B0: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x8020D7B4: mtc1        $a2, $f30
    ctx->f30.u32l = ctx->r6;
    // 0x8020D7B8: sub.s       $f6, $f12, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f24.fl;
    // 0x8020D7BC: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8020D7C0: mul.s       $f0, $f4, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x8020D7C4: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x8020D7C8: lwc1        $f26, 0xE4($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8020D7CC: mul.s       $f2, $f6, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8020D7D0: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x8020D7D4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x8020D7D8: mul.s       $f8, $f26, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f26.fl, ctx->f26.fl);
    // 0x8020D7DC: lwc1        $f20, 0xD8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8020D7E0: sub.s       $f18, $f12, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f26.fl;
    // 0x8020D7E4: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x8020D7E8: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x8020D7EC: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8020D7F0: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x8020D7F4: mul.s       $f28, $f8, $f26
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f28.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x8020D7F8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8020D7FC: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x8020D800: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x8020D804: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x8020D808: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x8020D80C: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x8020D810: sub.s       $f10, $f12, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f28.fl;
    // 0x8020D814: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x8020D818: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8020D81C: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x8020D820: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8020D824: swc1        $f2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f2.u32l;
    // 0x8020D828: mov.s       $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    ctx->f30.fl = ctx->f0.fl;
    // 0x8020D82C: mul.s       $f20, $f18, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x8020D830: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x8020D834: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8020D838: blez        $a1, L_8020DB30
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8020D83C: swc1        $f16, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
            goto L_8020DB30;
    }
    // 0x8020D83C: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    // 0x8020D840: swc1        $f20, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f20.u32l;
    // 0x8020D844: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8020D848: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8020D84C: swc1        $f14, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f14.u32l;
    // 0x8020D850: addiu       $fp, $sp, 0xA4
    ctx->r30 = ADD32(ctx->r29, 0XA4);
    // 0x8020D854: addiu       $s7, $sp, 0xB4
    ctx->r23 = ADD32(ctx->r29, 0XB4);
    // 0x8020D858: addiu       $s6, $sp, 0xB8
    ctx->r22 = ADD32(ctx->r29, 0XB8);
    // 0x8020D85C: addiu       $s5, $sp, 0xBC
    ctx->r21 = ADD32(ctx->r29, 0XBC);
L_8020D860:
    // 0x8020D860: sll         $t6, $s1, 4
    ctx->r14 = S32(ctx->r17 << 4);
    // 0x8020D864: addu        $s0, $t6, $s4
    ctx->r16 = ADD32(ctx->r14, ctx->r20);
    // 0x8020D868: lbu         $t7, 0xC($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XC);
    // 0x8020D86C: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
    // 0x8020D870: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D874: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8020D878: bgez        $t7, L_8020D88C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8020D87C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020D88C;
    }
    // 0x8020D87C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020D880: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020D884: nop

    // 0x8020D888: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8020D88C:
    // 0x8020D88C: lbu         $t8, 0xD($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XD);
    // 0x8020D890: div.s       $f12, $f6, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8020D894: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D898: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8020D89C: bgez        $t8, L_8020D8B0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8020D8A0: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020D8B0;
    }
    // 0x8020D8A0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020D8A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020D8A8: nop

    // 0x8020D8AC: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_8020D8B0:
    // 0x8020D8B0: lbu         $t9, 0xE($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XE);
    // 0x8020D8B4: div.s       $f14, $f16, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = DIV_S(ctx->f16.fl, ctx->f20.fl);
    // 0x8020D8B8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D8BC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8020D8C0: bgez        $t9, L_8020D8D4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8020D8C4: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020D8D4;
    }
    // 0x8020D8C4: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020D8C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020D8CC: nop

    // 0x8020D8D0: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_8020D8D4:
    // 0x8020D8D4: div.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x8020D8D8: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x8020D8DC: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x8020D8E0: sw          $s7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r23;
    // 0x8020D8E4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8020D8E8: jal         0x80209914
    // 0x8020D8EC: nop

    func_80209914(rdram, ctx);
        goto after_0;
    // 0x8020D8EC: nop

    after_0:
    // 0x8020D8F0: lhu         $t0, 0x6($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X6);
    // 0x8020D8F4: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x8020D8F8: addiu       $t1, $sp, 0xA0
    ctx->r9 = ADD32(ctx->r29, 0XA0);
    // 0x8020D8FC: beq         $t0, $zero, L_8020D938
    if (ctx->r8 == 0) {
        // 0x8020D900: addiu       $t2, $sp, 0x9C
        ctx->r10 = ADD32(ctx->r29, 0X9C);
            goto L_8020D938;
    }
    // 0x8020D900: addiu       $t2, $sp, 0x9C
    ctx->r10 = ADD32(ctx->r29, 0X9C);
    // 0x8020D904: lwc1        $f18, 0xBC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x8020D908: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8020D90C: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x8020D910: mul.s       $f16, $f22, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f22.fl, ctx->f18.fl);
    // 0x8020D914: lwc1        $f8, 0xD4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8020D918: mul.s       $f6, $f24, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f4.fl);
    // 0x8020D91C: nop

    // 0x8020D920: mul.s       $f18, $f26, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f26.fl, ctx->f10.fl);
    // 0x8020D924: add.s       $f12, $f16, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f30.fl;
    // 0x8020D928: lwc1        $f16, 0xD8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8020D92C: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8020D930: b           L_8020D968
    // 0x8020D934: add.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f16.fl;
        goto L_8020D968;
    // 0x8020D934: add.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f16.fl;
L_8020D938:
    // 0x8020D938: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x8020D93C: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8020D940: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8020D944: mul.s       $f6, $f22, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f4.fl);
    // 0x8020D948: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x8020D94C: lwc1        $f16, 0x90($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8020D950: mul.s       $f18, $f24, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f24.fl, ctx->f10.fl);
    // 0x8020D954: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8020D958: mul.s       $f6, $f28, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f28.fl, ctx->f4.fl);
    // 0x8020D95C: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8020D960: add.s       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x8020D964: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
L_8020D968:
    // 0x8020D968: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8020D96C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8020D970: jal         0x802096F4
    // 0x8020D974: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_802096F4(rdram, ctx);
        goto after_1;
    // 0x8020D974: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_1:
    // 0x8020D978: lwc1        $f10, 0xA4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x8020D97C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020D980: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8020D984: mul.s       $f18, $f10, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8020D988: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020D98C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020D990: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020D994: nop

    // 0x8020D998: cvt.w.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8020D99C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020D9A0: nop

    // 0x8020D9A4: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020D9A8: beql        $t4, $zero, L_8020D9F8
    if (ctx->r12 == 0) {
        // 0x8020D9AC: mfc1        $t4, $f16
        ctx->r12 = (int32_t)ctx->f16.u32l;
            goto L_8020D9F8;
    }
    goto skip_0;
    // 0x8020D9AC: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x8020D9B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020D9B4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020D9B8: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x8020D9BC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020D9C0: nop

    // 0x8020D9C4: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8020D9C8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020D9CC: nop

    // 0x8020D9D0: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020D9D4: bne         $t4, $zero, L_8020D9EC
    if (ctx->r12 != 0) {
        // 0x8020D9D8: nop
    
            goto L_8020D9EC;
    }
    // 0x8020D9D8: nop

    // 0x8020D9DC: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x8020D9E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D9E4: b           L_8020DA04
    // 0x8020D9E8: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_8020DA04;
    // 0x8020D9E8: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_8020D9EC:
    // 0x8020D9EC: b           L_8020DA04
    // 0x8020D9F0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_8020DA04;
    // 0x8020D9F0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8020D9F4: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
L_8020D9F8:
    // 0x8020D9F8: nop

    // 0x8020D9FC: bltz        $t4, L_8020D9EC
    if (SIGNED(ctx->r12) < 0) {
        // 0x8020DA00: nop
    
            goto L_8020D9EC;
    }
    // 0x8020DA00: nop

L_8020DA04:
    // 0x8020DA04: sb          $t4, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r12;
    // 0x8020DA08: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020DA0C: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8020DA10: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8020DA14: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020DA18: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8020DA1C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020DA20: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020DA24: nop

    // 0x8020DA28: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020DA2C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020DA30: nop

    // 0x8020DA34: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8020DA38: beql        $t6, $zero, L_8020DA88
    if (ctx->r14 == 0) {
        // 0x8020DA3C: mfc1        $t6, $f8
        ctx->r14 = (int32_t)ctx->f8.u32l;
            goto L_8020DA88;
    }
    goto skip_1;
    // 0x8020DA3C: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    skip_1:
    // 0x8020DA40: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020DA44: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8020DA48: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020DA4C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020DA50: nop

    // 0x8020DA54: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020DA58: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020DA5C: nop

    // 0x8020DA60: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8020DA64: bne         $t6, $zero, L_8020DA7C
    if (ctx->r14 != 0) {
        // 0x8020DA68: nop
    
            goto L_8020DA7C;
    }
    // 0x8020DA68: nop

    // 0x8020DA6C: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8020DA70: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020DA74: b           L_8020DA94
    // 0x8020DA78: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8020DA94;
    // 0x8020DA78: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8020DA7C:
    // 0x8020DA7C: b           L_8020DA94
    // 0x8020DA80: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8020DA94;
    // 0x8020DA80: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8020DA84: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
L_8020DA88:
    // 0x8020DA88: nop

    // 0x8020DA8C: bltz        $t6, L_8020DA7C
    if (SIGNED(ctx->r14) < 0) {
        // 0x8020DA90: nop
    
            goto L_8020DA7C;
    }
    // 0x8020DA90: nop

L_8020DA94:
    // 0x8020DA94: sb          $t6, 0xD($s2)
    MEM_B(0XD, ctx->r18) = ctx->r14;
    // 0x8020DA98: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020DA9C: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8020DAA0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020DAA4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020DAA8: mul.s       $f18, $f10, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8020DAAC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020DAB0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020DAB4: nop

    // 0x8020DAB8: cvt.w.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8020DABC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020DAC0: nop

    // 0x8020DAC4: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020DAC8: beql        $t8, $zero, L_8020DB18
    if (ctx->r24 == 0) {
        // 0x8020DACC: mfc1        $t8, $f16
        ctx->r24 = (int32_t)ctx->f16.u32l;
            goto L_8020DB18;
    }
    goto skip_2;
    // 0x8020DACC: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    skip_2:
    // 0x8020DAD0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020DAD4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020DAD8: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x8020DADC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020DAE0: nop

    // 0x8020DAE4: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8020DAE8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020DAEC: nop

    // 0x8020DAF0: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020DAF4: bne         $t8, $zero, L_8020DB0C
    if (ctx->r24 != 0) {
        // 0x8020DAF8: nop
    
            goto L_8020DB0C;
    }
    // 0x8020DAF8: nop

    // 0x8020DAFC: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x8020DB00: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020DB04: b           L_8020DB24
    // 0x8020DB08: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8020DB24;
    // 0x8020DB08: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8020DB0C:
    // 0x8020DB0C: b           L_8020DB24
    // 0x8020DB10: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8020DB24;
    // 0x8020DB10: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8020DB14: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
L_8020DB18:
    // 0x8020DB18: nop

    // 0x8020DB1C: bltz        $t8, L_8020DB0C
    if (SIGNED(ctx->r24) < 0) {
        // 0x8020DB20: nop
    
            goto L_8020DB0C;
    }
    // 0x8020DB20: nop

L_8020DB24:
    // 0x8020DB24: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020DB28: bne         $s1, $s3, L_8020D860
    if (ctx->r17 != ctx->r19) {
        // 0x8020DB2C: sb          $t8, 0xE($s2)
        MEM_B(0XE, ctx->r18) = ctx->r24;
            goto L_8020D860;
    }
    // 0x8020DB2C: sb          $t8, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r24;
L_8020DB30:
    // 0x8020DB30: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x8020DB34: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x8020DB38: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x8020DB3C: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x8020DB40: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x8020DB44: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x8020DB48: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x8020DB4C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8020DB50: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8020DB54: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x8020DB58: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x8020DB5C: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x8020DB60: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x8020DB64: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x8020DB68: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x8020DB6C: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x8020DB70: jr          $ra
    // 0x8020DB74: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x8020DB74: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_8023D820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023D824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023D828: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8023D82C: addiu       $a1, $a1, 0x39B0
    ctx->r5 = ADD32(ctx->r5, 0X39B0);
    // 0x8023D830: jal         0x80246C70
    // 0x8023D834: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_80246C70(rdram, ctx);
        goto after_0;
    // 0x8023D834: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8023D838: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023D83C: lw          $a0, 0x39C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X39C0);
    // 0x8023D840: beq         $a0, $zero, L_8023D858
    if (ctx->r4 == 0) {
        // 0x8023D844: nop
    
            goto L_8023D858;
    }
    // 0x8023D844: nop

    // 0x8023D848: jal         0x802375F0
    // 0x8023D84C: nop

    func_802375F0(rdram, ctx);
        goto after_1;
    // 0x8023D84C: nop

    after_1:
    // 0x8023D850: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023D854: sw          $v0, 0x39C0($at)
    MEM_W(0X39C0, ctx->r1) = ctx->r2;
L_8023D858:
    // 0x8023D858: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023D85C: lw          $a0, 0x39C8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X39C8);
    // 0x8023D860: beq         $a0, $zero, L_8023D878
    if (ctx->r4 == 0) {
        // 0x8023D864: nop
    
            goto L_8023D878;
    }
    // 0x8023D864: nop

    // 0x8023D868: jal         0x802375F0
    // 0x8023D86C: nop

    func_802375F0(rdram, ctx);
        goto after_2;
    // 0x8023D86C: nop

    after_2:
    // 0x8023D870: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023D874: sw          $v0, 0x39C8($at)
    MEM_W(0X39C8, ctx->r1) = ctx->r2;
L_8023D878:
    // 0x8023D878: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023D87C: lw          $a0, 0x39D0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X39D0);
    // 0x8023D880: beq         $a0, $zero, L_8023D898
    if (ctx->r4 == 0) {
        // 0x8023D884: nop
    
            goto L_8023D898;
    }
    // 0x8023D884: nop

    // 0x8023D888: jal         0x802375F0
    // 0x8023D88C: nop

    func_802375F0(rdram, ctx);
        goto after_3;
    // 0x8023D88C: nop

    after_3:
    // 0x8023D890: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023D894: sw          $v0, 0x39D0($at)
    MEM_W(0X39D0, ctx->r1) = ctx->r2;
L_8023D898:
    // 0x8023D898: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023D89C: lw          $a0, 0x39D8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X39D8);
    // 0x8023D8A0: beq         $a0, $zero, L_8023D8B8
    if (ctx->r4 == 0) {
        // 0x8023D8A4: nop
    
            goto L_8023D8B8;
    }
    // 0x8023D8A4: nop

    // 0x8023D8A8: jal         0x802375F0
    // 0x8023D8AC: nop

    func_802375F0(rdram, ctx);
        goto after_4;
    // 0x8023D8AC: nop

    after_4:
    // 0x8023D8B0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023D8B4: sw          $v0, 0x39D8($at)
    MEM_W(0X39D8, ctx->r1) = ctx->r2;
L_8023D8B8:
    // 0x8023D8B8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023D8BC: lw          $a0, 0x39DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X39DC);
    // 0x8023D8C0: beq         $a0, $zero, L_8023D8D8
    if (ctx->r4 == 0) {
        // 0x8023D8C4: nop
    
            goto L_8023D8D8;
    }
    // 0x8023D8C4: nop

    // 0x8023D8C8: jal         0x802375F0
    // 0x8023D8CC: nop

    func_802375F0(rdram, ctx);
        goto after_5;
    // 0x8023D8CC: nop

    after_5:
    // 0x8023D8D0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023D8D4: sw          $v0, 0x39DC($at)
    MEM_W(0X39DC, ctx->r1) = ctx->r2;
L_8023D8D8:
    // 0x8023D8D8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023D8DC: lw          $a0, 0x39E0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X39E0);
    // 0x8023D8E0: beq         $a0, $zero, L_8023D8F8
    if (ctx->r4 == 0) {
        // 0x8023D8E4: nop
    
            goto L_8023D8F8;
    }
    // 0x8023D8E4: nop

    // 0x8023D8E8: jal         0x802375F0
    // 0x8023D8EC: nop

    func_802375F0(rdram, ctx);
        goto after_6;
    // 0x8023D8EC: nop

    after_6:
    // 0x8023D8F0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023D8F4: sw          $v0, 0x39E0($at)
    MEM_W(0X39E0, ctx->r1) = ctx->r2;
L_8023D8F8:
    // 0x8023D8F8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023D8FC: lw          $a0, 0x39E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X39E8);
    // 0x8023D900: beql        $a0, $zero, L_8023D91C
    if (ctx->r4 == 0) {
        // 0x8023D904: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8023D91C;
    }
    goto skip_0;
    // 0x8023D904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023D908: jal         0x802375F0
    // 0x8023D90C: nop

    func_802375F0(rdram, ctx);
        goto after_7;
    // 0x8023D90C: nop

    after_7:
    // 0x8023D910: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023D914: sw          $v0, 0x39E8($at)
    MEM_W(0X39E8, ctx->r1) = ctx->r2;
    // 0x8023D918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023D91C:
    // 0x8023D91C: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8023D920: addiu       $v0, $v0, 0x39B0
    ctx->r2 = ADD32(ctx->r2, 0X39B0);
    // 0x8023D924: jr          $ra
    // 0x8023D928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8023D928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234B48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234B48: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80234B4C: nop

    // 0x80234B50: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x80234B54: nop

    // 0x80234B58: bc1fl       L_80234B6C
    if (!c1cs) {
        // 0x80234B5C: neg.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
            goto L_80234B6C;
    }
    goto skip_0;
    // 0x80234B5C: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
    skip_0:
    // 0x80234B60: jr          $ra
    // 0x80234B64: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x80234B64: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x80234B68: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
L_80234B6C:
    // 0x80234B6C: jr          $ra
    // 0x80234B70: nop

    return;
    // 0x80234B70: nop

;}
RECOMP_FUNC void func_80208230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80208230: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80208234: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80208238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020823C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80208240: lui         $a1, 0x8026
    ctx->r5 = S32(0X8026 << 16);
    // 0x80208244: addiu       $a1, $a1, -0x3CE0
    ctx->r5 = ADD32(ctx->r5, -0X3CE0);
    // 0x80208248: jal         0x80238D94
    // 0x8020824C: addiu       $a0, $a0, 0xC58
    ctx->r4 = ADD32(ctx->r4, 0XC58);
    func_80238D94(rdram, ctx);
        goto after_0;
    // 0x8020824C: addiu       $a0, $a0, 0xC58
    ctx->r4 = ADD32(ctx->r4, 0XC58);
    after_0:
    // 0x80208250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80208254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80208258: jr          $ra
    // 0x8020825C: nop

    return;
    // 0x8020825C: nop

;}
RECOMP_FUNC void func_80204C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80204C90: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80204C94: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80204C98: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80204C9C: addiu       $s2, $sp, 0x54
    ctx->r18 = ADD32(ctx->r29, 0X54);
    // 0x80204CA0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80204CA4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80204CA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80204CAC: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80204CB0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80204CB4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80204CB8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80204CBC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80204CC0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80204CC4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80204CC8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80204CCC: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x80204CD0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80204CD4: addiu       $a0, $a0, -0x4708
    ctx->r4 = ADD32(ctx->r4, -0X4708);
    // 0x80204CD8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80204CDC: jal         0x802374B0
    // 0x80204CE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_0;
    // 0x80204CE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80204CE4: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80204CE8: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x80204CEC: addiu       $a2, $a2, 0x77F0
    ctx->r6 = ADD32(ctx->r6, 0X77F0);
    // 0x80204CF0: addiu       $a0, $a0, 0x1218
    ctx->r4 = ADD32(ctx->r4, 0X1218);
    // 0x80204CF4: jal         0x8022CA14
    // 0x80204CF8: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_8022CA14(rdram, ctx);
        goto after_1;
    // 0x80204CF8: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_1:
    // 0x80204CFC: lui         $s7, 0x8026
    ctx->r23 = S32(0X8026 << 16);
    // 0x80204D00: lui         $s6, 0x8025
    ctx->r22 = S32(0X8025 << 16);
    // 0x80204D04: addiu       $s6, $s6, 0x7628
    ctx->r22 = ADD32(ctx->r22, 0X7628);
    // 0x80204D08: addiu       $s7, $s7, -0x4740
    ctx->r23 = ADD32(ctx->r23, -0X4740);
    // 0x80204D0C: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x80204D10: addiu       $s5, $zero, 0xA
    ctx->r21 = ADD32(0, 0XA);
    // 0x80204D14: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
    // 0x80204D18: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80204D1C:
    // 0x80204D1C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80204D20: addiu       $a0, $a0, 0x77F0
    ctx->r4 = ADD32(ctx->r4, 0X77F0);
    // 0x80204D24: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80204D28: jal         0x802374B0
    // 0x80204D2C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_802374B0(rdram, ctx);
        goto after_2;
    // 0x80204D2C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_2:
    // 0x80204D30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80204D34: jal         0x8022D560
    // 0x80204D38: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    func_8022D560(rdram, ctx);
        goto after_3;
    // 0x80204D38: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_3:
    // 0x80204D3C: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80204D40: lh          $v0, 0x0($t6)
    ctx->r2 = MEM_H(ctx->r14, 0X0);
    // 0x80204D44: beql        $v0, $s3, L_80204D68
    if (ctx->r2 == ctx->r19) {
        // 0x80204D48: lw          $t7, 0x0($s7)
        ctx->r15 = MEM_W(ctx->r23, 0X0);
            goto L_80204D68;
    }
    goto skip_0;
    // 0x80204D48: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    skip_0:
    // 0x80204D4C: beq         $v0, $s4, L_80204DC8
    if (ctx->r2 == ctx->r20) {
        // 0x80204D50: nop
    
            goto L_80204DC8;
    }
    // 0x80204D50: nop

    // 0x80204D54: beql        $v0, $s5, L_80204DC8
    if (ctx->r2 == ctx->r21) {
        // 0x80204D58: or          $s1, $s3, $zero
        ctx->r17 = ctx->r19 | 0;
            goto L_80204DC8;
    }
    goto skip_1;
    // 0x80204D58: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    skip_1:
    // 0x80204D5C: b           L_80204DC8
    // 0x80204D60: nop

        goto L_80204DC8;
    // 0x80204D60: nop

    // 0x80204D64: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
L_80204D68:
    // 0x80204D68: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80204D6C: divu        $zero, $t7, $fp
    lo = S32(U32(ctx->r15) / U32(ctx->r30)); hi = S32(U32(ctx->r15) % U32(ctx->r30));
    // 0x80204D70: mfhi        $t8
    ctx->r24 = hi;
    // 0x80204D74: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80204D78: addu        $t0, $s6, $t9
    ctx->r8 = ADD32(ctx->r22, ctx->r25);
    // 0x80204D7C: bne         $fp, $zero, L_80204D88
    if (ctx->r30 != 0) {
        // 0x80204D80: nop
    
            goto L_80204D88;
    }
    // 0x80204D80: nop

    // 0x80204D84: break       7
    do_break(2149600644);
L_80204D88:
    // 0x80204D88: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    // 0x80204D8C: jal         0x80204E0C
    // 0x80204D90: nop

    func_80204E0C(rdram, ctx);
        goto after_4;
    // 0x80204D90: nop

    after_4:
    // 0x80204D94: beq         $v0, $zero, L_80204DC8
    if (ctx->r2 == 0) {
        // 0x80204D98: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80204DC8;
    }
    // 0x80204D98: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80204D9C: addiu       $a0, $a0, 0x7828
    ctx->r4 = ADD32(ctx->r4, 0X7828);
    // 0x80204DA0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80204DA4: jal         0x802374B0
    // 0x80204DA8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_802374B0(rdram, ctx);
        goto after_5;
    // 0x80204DA8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_5:
    // 0x80204DAC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80204DB0: jal         0x80205010
    // 0x80204DB4: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    func_80205010(rdram, ctx);
        goto after_6;
    // 0x80204DB4: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    after_6:
    // 0x80204DB8: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80204DBC: b           L_80204DC8
    // 0x80204DC0: lw          $s0, 0x4($t2)
    ctx->r16 = MEM_W(ctx->r10, 0X4);
        goto L_80204DC8;
    // 0x80204DC0: lw          $s0, 0x4($t2)
    ctx->r16 = MEM_W(ctx->r10, 0X4);
    // 0x80204DC4: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
L_80204DC8:
    // 0x80204DC8: beq         $s1, $zero, L_80204D1C
    if (ctx->r17 == 0) {
        // 0x80204DCC: nop
    
            goto L_80204D1C;
    }
    // 0x80204DCC: nop

    // 0x80204DD0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80204DD4: jal         0x80237174
    // 0x80204DD8: addiu       $a0, $a0, 0x7860
    ctx->r4 = ADD32(ctx->r4, 0X7860);
    func_80237174(rdram, ctx);
        goto after_7;
    // 0x80204DD8: addiu       $a0, $a0, 0x7860
    ctx->r4 = ADD32(ctx->r4, 0X7860);
    after_7:
    // 0x80204DDC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80204DE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80204DE4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80204DE8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80204DEC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80204DF0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80204DF4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80204DF8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80204DFC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80204E00: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80204E04: jr          $ra
    // 0x80204E08: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80204E08: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80235080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80235080: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80235084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235088: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8023508C: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80235090: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80235094: sh          $t7, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r15;
    // 0x80235098: lw          $t8, 0x3C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3C);
    // 0x8023509C: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x802350A0: sh          $t6, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r14;
    // 0x802350A4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x802350A8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x802350AC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x802350B0: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x802350B4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x802350B8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802350BC: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x802350C0: jal         0x8023F37C
    // 0x802350C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8023F37C(rdram, ctx);
        goto after_0;
    // 0x802350C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802350C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802350CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802350D0: jr          $ra
    // 0x802350D4: nop

    return;
    // 0x802350D4: nop

;}
RECOMP_FUNC void func_80222FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222FE0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80222FE4: addiu       $t6, $sp, 0x50
    ctx->r14 = ADD32(ctx->r29, 0X50);
    // 0x80222FE8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80222FEC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80222FF0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80222FF4: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80222FF8: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80222FFC: addiu       $t8, $t6, 0x3C
    ctx->r24 = ADD32(ctx->r14, 0X3C);
    // 0x80223000: or          $t9, $sp, $zero
    ctx->r25 = ctx->r29 | 0;
L_80223004:
    // 0x80223004: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80223008: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8022300C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80223010: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x80223014: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x80223018: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x8022301C: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x80223020: bne         $t6, $t8, L_80223004
    if (ctx->r14 != ctx->r24) {
        // 0x80223024: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_80223004;
    }
    // 0x80223024: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x80223028: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8022302C: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x80223030: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80223034: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80223038: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8022303C: jal         0x80222D4C
    // 0x80223040: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    func_80222D4C(rdram, ctx);
        goto after_0;
    // 0x80223040: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    after_0:
    // 0x80223044: lbu         $t2, 0x93($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X93);
    // 0x80223048: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8022304C: beq         $t2, $zero, L_8022305C
    if (ctx->r10 == 0) {
        // 0x80223050: nop
    
            goto L_8022305C;
    }
    // 0x80223050: nop

    // 0x80223054: b           L_8022305C
    // 0x80223058: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
        goto L_8022305C;
    // 0x80223058: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
L_8022305C:
    // 0x8022305C: jal         0x80222E24
    // 0x80223060: sb          $t0, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r8;
    func_80222E24(rdram, ctx);
        goto after_1;
    // 0x80223060: sb          $t0, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r8;
    after_1:
    // 0x80223064: jal         0x802375F0
    // 0x80223068: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_802375F0(rdram, ctx);
        goto after_2;
    // 0x80223068: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x8022306C: lui         $t1, 0x8027
    ctx->r9 = S32(0X8027 << 16);
    // 0x80223070: addiu       $t1, $t1, 0x3B90
    ctx->r9 = ADD32(ctx->r9, 0X3B90);
    // 0x80223074: lbu         $t4, 0x4B($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X4B);
    // 0x80223078: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x8022307C: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x80223080: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x80223084: addiu       $t3, $a0, 0x8
    ctx->r11 = ADD32(ctx->r4, 0X8);
    // 0x80223088: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
    // 0x8022308C: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x80223090: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x80223094: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80223098: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8022309C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x802230A0: lhu         $a1, -0x178C($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X178C);
    // 0x802230A4: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x802230A8: lui         $t4, 0x8027
    ctx->r12 = S32(0X8027 << 16);
    // 0x802230AC: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x802230B0: addiu       $t9, $t9, 0x3BB0
    ctx->r25 = ADD32(ctx->r25, 0X3BB0);
    // 0x802230B4: addiu       $t4, $t4, 0x3BB8
    ctx->r12 = ADD32(ctx->r12, 0X3BB8);
    // 0x802230B8: addu        $a2, $t6, $t9
    ctx->r6 = ADD32(ctx->r14, ctx->r25);
    // 0x802230BC: addu        $a3, $t6, $t4
    ctx->r7 = ADD32(ctx->r14, ctx->r12);
    // 0x802230C0: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x802230C4: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x802230C8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802230CC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x802230D0: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x802230D4: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x802230D8: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x802230DC: jr          $ra
    // 0x802230E0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x802230E0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80209914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80209914: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x80209918: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8020991C: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x80209920: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x80209924: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x80209928: bc1f        L_80209934
    if (!c1cs) {
        // 0x8020992C: mov.s       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
            goto L_80209934;
    }
    // 0x8020992C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x80209930: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_80209934:
    // 0x80209934: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x80209938: nop

    // 0x8020993C: bc1fl       L_8020994C
    if (!c1cs) {
        // 0x80209940: c.lt.s      $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
            goto L_8020994C;
    }
    goto skip_0;
    // 0x80209940: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    skip_0:
    // 0x80209944: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x80209948: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
L_8020994C:
    // 0x8020994C: nop

    // 0x80209950: bc1fl       L_80209960
    if (!c1cs) {
        // 0x80209954: c.lt.s      $f20, $f2
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
            goto L_80209960;
    }
    goto skip_1;
    // 0x80209954: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    skip_1:
    // 0x80209958: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x8020995C: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
L_80209960:
    // 0x80209960: nop

    // 0x80209964: bc1fl       L_80209974
    if (!c1cs) {
        // 0x80209968: c.eq.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
            goto L_80209974;
    }
    goto skip_2;
    // 0x80209968: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    skip_2:
    // 0x8020996C: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    // 0x80209970: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
L_80209974:
    // 0x80209974: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80209978: bc1f        L_8020999C
    if (!c1cs) {
        // 0x8020997C: swc1        $f0, 0x0($t6)
        MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
            goto L_8020999C;
    }
    // 0x8020997C: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x80209980: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80209984: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80209988: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8020998C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80209990: swc1        $f4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f4.u32l;
    // 0x80209994: b           L_80209A94
    // 0x80209998: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
        goto L_80209A94;
    // 0x80209998: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
L_8020999C:
    // 0x8020999C: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x802099A0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x802099A4: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x802099A8: div.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802099AC: bc1f        L_802099D0
    if (!c1cs) {
        // 0x802099B0: swc1        $f8, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
            goto L_802099D0;
    }
    // 0x802099B0: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
    // 0x802099B4: sub.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x802099B8: sub.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x802099BC: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802099C0: div.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x802099C4: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x802099C8: b           L_80209A3C
    // 0x802099CC: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
        goto L_80209A3C;
    // 0x802099CC: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
L_802099D0:
    // 0x802099D0: c.eq.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl == ctx->f0.fl;
    // 0x802099D4: nop

    // 0x802099D8: bc1fl       L_80209A0C
    if (!c1cs) {
        // 0x802099DC: c.eq.s      $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
            goto L_80209A0C;
    }
    goto skip_3;
    // 0x802099DC: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    skip_3:
    // 0x802099E0: sub.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x802099E4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802099E8: sub.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x802099EC: div.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802099F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802099F4: div.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f16.fl);
    // 0x802099F8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802099FC: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80209A00: b           L_80209A3C
    // 0x80209A04: swc1        $f18, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f18.u32l;
        goto L_80209A3C;
    // 0x80209A04: swc1        $f18, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f18.u32l;
    // 0x80209A08: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
L_80209A0C:
    // 0x80209A0C: nop

    // 0x80209A10: bc1fl       L_80209A40
    if (!c1cs) {
        // 0x80209A14: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_80209A40;
    }
    goto skip_4;
    // 0x80209A14: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    skip_4:
    // 0x80209A18: sub.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80209A1C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80209A20: sub.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x80209A24: div.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x80209A28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80209A2C: div.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80209A30: sub.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80209A34: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80209A38: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
L_80209A3C:
    // 0x80209A3C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
L_80209A40:
    // 0x80209A40: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80209A44: lwc1        $f6, 0x0($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80209A48: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80209A4C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80209A50: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80209A54: swc1        $f18, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f18.u32l;
    // 0x80209A58: lwc1        $f0, 0x0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80209A5C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80209A60: nop

    // 0x80209A64: bc1fl       L_80209A84
    if (!c1cs) {
        // 0x80209A68: lui         $at, 0x43B4
        ctx->r1 = S32(0X43B4 << 16);
            goto L_80209A84;
    }
    goto skip_5;
    // 0x80209A68: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    skip_5:
    // 0x80209A6C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80209A70: nop

    // 0x80209A74: add.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x80209A78: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
    // 0x80209A7C: lwc1        $f0, 0x0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80209A80: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
L_80209A84:
    // 0x80209A84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80209A88: nop

    // 0x80209A8C: div.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80209A90: swc1        $f18, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f18.u32l;
L_80209A94:
    // 0x80209A94: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x80209A98: jr          $ra
    // 0x80209A9C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80209A9C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80237210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237210: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80237214: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80237218: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8023721C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80237220: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80237224: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80237228: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8023722C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80237230: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80237234: sw          $t6, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r14;
    // 0x80237238: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8023723C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80237240: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x80237244: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80237248: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x8023724C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80237250: sw          $zero, 0x8($t1)
    MEM_W(0X8, ctx->r9) = 0;
    // 0x80237254: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80237258: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8023725C: sw          $t2, 0x11C($t3)
    MEM_W(0X11C, ctx->r11) = ctx->r10;
    // 0x80237260: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80237264: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80237268: or          $t7, $t4, $zero
    ctx->r15 = ctx->r12 | 0;
    // 0x8023726C: sra         $t6, $t4, 31
    ctx->r14 = S32(SIGNED(ctx->r12) >> 31);
    // 0x80237270: sw          $t6, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r14;
    // 0x80237274: sw          $t7, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->r15;
    // 0x80237278: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8023727C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80237280: lui         $t4, 0x8024
    ctx->r12 = S32(0X8024 << 16);
    // 0x80237284: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x80237288: sltiu       $at, $t1, 0x10
    ctx->r1 = ctx->r9 < 0X10 ? 1 : 0;
    // 0x8023728C: sra         $t0, $t8, 31
    ctx->r8 = S32(SIGNED(ctx->r24) >> 31);
    // 0x80237290: subu        $t2, $t0, $at
    ctx->r10 = SUB32(ctx->r8, ctx->r1);
    // 0x80237294: addiu       $t3, $t1, -0x10
    ctx->r11 = ADD32(ctx->r9, -0X10);
    // 0x80237298: sw          $t3, 0xF4($t9)
    MEM_W(0XF4, ctx->r25) = ctx->r11;
    // 0x8023729C: sw          $t2, 0xF0($t9)
    MEM_W(0XF0, ctx->r25) = ctx->r10;
    // 0x802372A0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x802372A4: addiu       $t4, $t4, 0x20D0
    ctx->r12 = ADD32(ctx->r12, 0X20D0);
    // 0x802372A8: or          $t7, $t4, $zero
    ctx->r15 = ctx->r12 | 0;
    // 0x802372AC: sra         $t6, $t4, 31
    ctx->r14 = S32(SIGNED(ctx->r12) >> 31);
    // 0x802372B0: sw          $t6, 0x100($t5)
    MEM_W(0X100, ctx->r13) = ctx->r14;
    // 0x802372B4: sw          $t7, 0x104($t5)
    MEM_W(0X104, ctx->r13) = ctx->r15;
    // 0x802372B8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x802372BC: lui         $t8, 0x3F
    ctx->r24 = S32(0X3F << 16);
    // 0x802372C0: ori         $t8, $t8, 0xFF01
    ctx->r24 = ctx->r24 | 0XFF01;
    // 0x802372C4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x802372C8: ori         $t0, $zero, 0xFF03
    ctx->r8 = 0 | 0XFF03;
    // 0x802372CC: sw          $t0, 0x118($t1)
    MEM_W(0X118, ctx->r9) = ctx->r8;
    // 0x802372D0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x802372D4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x802372D8: lui         $at, 0x3F
    ctx->r1 = S32(0X3F << 16);
    // 0x802372DC: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x802372E0: srl         $t9, $t3, 16
    ctx->r25 = S32(U32(ctx->r11) >> 16);
    // 0x802372E4: sw          $t9, 0x128($t4)
    MEM_W(0X128, ctx->r12) = ctx->r25;
    // 0x802372E8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x802372EC: lui         $t6, 0x100
    ctx->r14 = S32(0X100 << 16);
    // 0x802372F0: ori         $t6, $t6, 0x800
    ctx->r14 = ctx->r14 | 0X800;
    // 0x802372F4: sw          $t6, 0x12C($t7)
    MEM_W(0X12C, ctx->r15) = ctx->r14;
    // 0x802372F8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x802372FC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80237300: sw          $zero, 0x18($t5)
    MEM_W(0X18, ctx->r13) = 0;
    // 0x80237304: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80237308: sh          $t8, 0x10($t0)
    MEM_H(0X10, ctx->r8) = ctx->r24;
    // 0x8023730C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80237310: jal         0x80241760
    // 0x80237314: sh          $zero, 0x12($t1)
    MEM_H(0X12, ctx->r9) = 0;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x80237314: sh          $zero, 0x12($t1)
    MEM_H(0X12, ctx->r9) = 0;
    after_0:
    // 0x80237318: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x8023731C: lw          $t2, 0x16DC($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X16DC);
    // 0x80237320: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80237324: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80237328: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023732C: sw          $t2, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r10;
    // 0x80237330: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80237334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80237338: jal         0x80241780
    // 0x8023733C: sw          $t9, 0x16DC($at)
    MEM_W(0X16DC, ctx->r1) = ctx->r25;
    func_80241780(rdram, ctx);
        goto after_1;
    // 0x8023733C: sw          $t9, 0x16DC($at)
    MEM_W(0X16DC, ctx->r1) = ctx->r25;
    after_1:
    // 0x80237340: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80237344: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80237348: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8023734C: jr          $ra
    // 0x80237350: nop

    return;
    // 0x80237350: nop

;}
RECOMP_FUNC void func_80232EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80232EE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80232EE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80232EE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80232EEC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80232EF0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80232EF4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80232EF8: lw          $t6, 0x40($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X40);
    // 0x80232EFC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80232F00: beql        $t6, $zero, L_80232FCC
    if (ctx->r14 == 0) {
        // 0x80232F04: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80232FCC;
    }
    goto skip_0;
    // 0x80232F04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80232F08: lw          $t7, 0x44($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X44);
    // 0x80232F0C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80232F10: addiu       $a0, $a0, 0x3B90
    ctx->r4 = ADD32(ctx->r4, 0X3B90);
    // 0x80232F14: beq         $t7, $zero, L_80232F40
    if (ctx->r15 == 0) {
        // 0x80232F18: nop
    
            goto L_80232F40;
    }
    // 0x80232F18: nop

    // 0x80232F1C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80232F20: lui         $t9, 0x106
    ctx->r25 = S32(0X106 << 16);
    // 0x80232F24: ori         $t9, $t9, 0x40
    ctx->r25 = ctx->r25 | 0X40;
    // 0x80232F28: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80232F2C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80232F30: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80232F34: lw          $t0, 0x44($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X44);
    // 0x80232F38: b           L_80232F7C
    // 0x80232F3C: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
        goto L_80232F7C;
    // 0x80232F3C: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
L_80232F40:
    // 0x80232F40: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x80232F44: addiu       $v0, $v0, 0x44B4
    ctx->r2 = ADD32(ctx->r2, 0X44B4);
    // 0x80232F48: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80232F4C: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x80232F50: lw          $t2, 0x44B8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X44B8);
    // 0x80232F54: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80232F58: addiu       $t1, $s0, 0x44
    ctx->r9 = ADD32(ctx->r16, 0X44);
    // 0x80232F5C: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x80232F60: sw          $t1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r9;
    // 0x80232F64: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80232F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80232F6C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80232F70: jal         0x80223108
    // 0x80232F74: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80223108(rdram, ctx);
        goto after_0;
    // 0x80232F74: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_0:
    // 0x80232F78: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
L_80232F7C:
    // 0x80232F7C: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x80232F80: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80232F84: lhu         $a1, 0x32($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X32);
    // 0x80232F88: lhu         $t8, 0xC($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XC);
    // 0x80232F8C: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x80232F90: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80232F94: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80232F98: lbu         $t9, 0x48($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X48);
    // 0x80232F9C: jal         0x80232FE0
    // 0x80232FA0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_80232FE0(rdram, ctx);
        goto after_1;
    // 0x80232FA0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_1:
    // 0x80232FA4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80232FA8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80232FAC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80232FB0: lhu         $a2, 0x32($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X32);
    // 0x80232FB4: lhu         $a3, 0x36($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X36);
    // 0x80232FB8: jal         0x8022EFE0
    // 0x80232FBC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_8022EFE0(rdram, ctx);
        goto after_2;
    // 0x80232FBC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_2:
    // 0x80232FC0: jal         0x802230E4
    // 0x80232FC4: nop

    func_802230E4(rdram, ctx);
        goto after_3;
    // 0x80232FC4: nop

    after_3:
    // 0x80232FC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80232FCC:
    // 0x80232FCC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80232FD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80232FD4: jr          $ra
    // 0x80232FD8: nop

    return;
    // 0x80232FD8: nop

;}
RECOMP_FUNC void func_8021EDB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021EDB0: addiu       $sp, $sp, -0x140
    ctx->r29 = ADD32(ctx->r29, -0X140);
    // 0x8021EDB4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8021EDB8: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x8021EDBC: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x8021EDC0: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8021EDC4: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8021EDC8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8021EDCC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8021EDD0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8021EDD4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8021EDD8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8021EDDC: sw          $a0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r4;
    // 0x8021EDE0: sw          $a1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r5;
    // 0x8021EDE4: sw          $a2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r6;
    // 0x8021EDE8: sw          $a3, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r7;
    // 0x8021EDEC: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x8021EDF0: addiu       $s1, $sp, 0x14C
    ctx->r17 = ADD32(ctx->r29, 0X14C);
    // 0x8021EDF4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8021EDF8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021EDFC: sw          $zero, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = 0;
    // 0x8021EE00: beq         $v1, $zero, L_8021F158
    if (ctx->r3 == 0) {
        // 0x8021EE04: or          $a3, $v1, $zero
        ctx->r7 = ctx->r3 | 0;
            goto L_8021F158;
    }
    // 0x8021EE04: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8021EE08: addiu       $fp, $sp, 0xE4
    ctx->r30 = ADD32(ctx->r29, 0XE4);
    // 0x8021EE0C: addiu       $s7, $zero, -0x4
    ctx->r23 = ADD32(0, -0X4);
    // 0x8021EE10: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x8021EE14: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x8021EE18: addiu       $s4, $sp, 0xF0
    ctx->r20 = ADD32(ctx->r29, 0XF0);
    // 0x8021EE1C: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
L_8021EE20:
    // 0x8021EE20: bne         $s2, $zero, L_8021EE64
    if (ctx->r18 != 0) {
        // 0x8021EE24: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_8021EE64;
    }
    // 0x8021EE24: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x8021EE28: lw          $t7, 0x148($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X148);
    // 0x8021EE2C: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x8021EE30: bne         $a3, $at, L_8021EE4C
    if (ctx->r7 != ctx->r1) {
        // 0x8021EE34: addu        $a1, $t7, $s0
        ctx->r5 = ADD32(ctx->r15, ctx->r16);
            goto L_8021EE4C;
    }
    // 0x8021EE34: addu        $a1, $t7, $s0
    ctx->r5 = ADD32(ctx->r15, ctx->r16);
    // 0x8021EE38: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x8021EE3C: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8021EE40: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8021EE44: b           L_8021F138
    // 0x8021EE48: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_8021F138;
    // 0x8021EE48: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_8021EE4C:
    // 0x8021EE4C: lw          $t8, 0xE4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE4);
    // 0x8021EE50: addu        $t9, $s4, $t8
    ctx->r25 = ADD32(ctx->r20, ctx->r24);
    // 0x8021EE54: sb          $v1, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r3;
    // 0x8021EE58: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x8021EE5C: b           L_8021F138
    // 0x8021EE60: sw          $t0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r8;
        goto L_8021F138;
    // 0x8021EE60: sw          $t0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r8;
L_8021EE64:
    // 0x8021EE64: bne         $a3, $at, L_8021EE80
    if (ctx->r7 != ctx->r1) {
        // 0x8021EE68: lw          $t1, 0x148($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X148);
            goto L_8021EE80;
    }
    // 0x8021EE68: lw          $t1, 0x148($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X148);
    // 0x8021EE6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021EE70: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x8021EE74: lbu         $v1, 0x0($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0X0);
    // 0x8021EE78: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x8021EE7C: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_8021EE80:
    // 0x8021EE80: beq         $a3, $zero, L_8021F158
    if (ctx->r7 == 0) {
        // 0x8021EE84: addiu       $at, $zero, 0x30
        ctx->r1 = ADD32(0, 0X30);
            goto L_8021F158;
    }
    // 0x8021EE84: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x8021EE88: bne         $a3, $at, L_8021EEA4
    if (ctx->r7 != ctx->r1) {
        // 0x8021EE8C: lw          $t3, 0x148($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X148);
            goto L_8021EEA4;
    }
    // 0x8021EE8C: lw          $t3, 0x148($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X148);
    // 0x8021EE90: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021EE94: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x8021EE98: lbu         $v1, 0x0($t4)
    ctx->r3 = MEM_BU(ctx->r12, 0X0);
    // 0x8021EE9C: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x8021EEA0: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_8021EEA4:
    // 0x8021EEA4: beq         $a3, $zero, L_8021F158
    if (ctx->r7 == 0) {
        // 0x8021EEA8: slti        $at, $a3, 0x31
        ctx->r1 = SIGNED(ctx->r7) < 0X31 ? 1 : 0;
            goto L_8021F158;
    }
    // 0x8021EEA8: slti        $at, $a3, 0x31
    ctx->r1 = SIGNED(ctx->r7) < 0X31 ? 1 : 0;
    // 0x8021EEAC: bne         $at, $zero, L_8021EF28
    if (ctx->r1 != 0) {
        // 0x8021EEB0: slti        $at, $a3, 0x3A
        ctx->r1 = SIGNED(ctx->r7) < 0X3A ? 1 : 0;
            goto L_8021EF28;
    }
    // 0x8021EEB0: slti        $at, $a3, 0x3A
    ctx->r1 = SIGNED(ctx->r7) < 0X3A ? 1 : 0;
    // 0x8021EEB4: beq         $at, $zero, L_8021EF28
    if (ctx->r1 == 0) {
        // 0x8021EEB8: addiu       $a0, $sp, 0x88
        ctx->r4 = ADD32(ctx->r29, 0X88);
            goto L_8021EF28;
    }
    // 0x8021EEB8: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x8021EEBC: slti        $at, $a3, 0x30
    ctx->r1 = SIGNED(ctx->r7) < 0X30 ? 1 : 0;
    // 0x8021EEC0: bne         $at, $zero, L_8021EF10
    if (ctx->r1 != 0) {
        // 0x8021EEC4: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8021EF10;
    }
    // 0x8021EEC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021EEC8: slti        $at, $a3, 0x3A
    ctx->r1 = SIGNED(ctx->r7) < 0X3A ? 1 : 0;
    // 0x8021EECC: beq         $at, $zero, L_8021EF10
    if (ctx->r1 == 0) {
        // 0x8021EED0: lw          $t5, 0x148($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X148);
            goto L_8021EF10;
    }
    // 0x8021EED0: lw          $t5, 0x148($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X148);
    // 0x8021EED4: addiu       $t6, $sp, 0x88
    ctx->r14 = ADD32(ctx->r29, 0X88);
    // 0x8021EED8: addu        $v0, $zero, $t6
    ctx->r2 = ADD32(0, ctx->r14);
    // 0x8021EEDC: addu        $a1, $t5, $s0
    ctx->r5 = ADD32(ctx->r13, ctx->r16);
    // 0x8021EEE0: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_8021EEE4:
    // 0x8021EEE4: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x8021EEE8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021EEEC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8021EEF0: slti        $at, $v1, 0x30
    ctx->r1 = SIGNED(ctx->r3) < 0X30 ? 1 : 0;
    // 0x8021EEF4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8021EEF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8021EEFC: bne         $at, $zero, L_8021EF10
    if (ctx->r1 != 0) {
        // 0x8021EF00: or          $a3, $v1, $zero
        ctx->r7 = ctx->r3 | 0;
            goto L_8021EF10;
    }
    // 0x8021EF00: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8021EF04: slti        $at, $v1, 0x3A
    ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
    // 0x8021EF08: bnel        $at, $zero, L_8021EEE4
    if (ctx->r1 != 0) {
        // 0x8021EF0C: sb          $v1, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r3;
            goto L_8021EEE4;
    }
    goto skip_0;
    // 0x8021EF0C: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    skip_0:
L_8021EF10:
    // 0x8021EF10: addu        $t7, $a0, $a2
    ctx->r15 = ADD32(ctx->r4, ctx->r6);
    // 0x8021EF14: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x8021EF18: jal         0x80230AF4
    // 0x8021EF1C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    func_80230AF4(rdram, ctx);
        goto after_0;
    // 0x8021EF1C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8021EF20: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x8021EF24: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
L_8021EF28:
    // 0x8021EF28: beq         $a3, $zero, L_8021F158
    if (ctx->r7 == 0) {
        // 0x8021EF2C: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_8021F158;
    }
    // 0x8021EF2C: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x8021EF30: bne         $a3, $at, L_8021EF9C
    if (ctx->r7 != ctx->r1) {
        // 0x8021EF34: lw          $t9, 0x148($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X148);
            goto L_8021EF9C;
    }
    // 0x8021EF34: lw          $t9, 0x148($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X148);
    // 0x8021EF38: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021EF3C: addu        $a1, $t9, $s0
    ctx->r5 = ADD32(ctx->r25, ctx->r16);
    // 0x8021EF40: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8021EF44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021EF48: slti        $at, $v1, 0x30
    ctx->r1 = SIGNED(ctx->r3) < 0X30 ? 1 : 0;
    // 0x8021EF4C: bne         $at, $zero, L_8021EF94
    if (ctx->r1 != 0) {
        // 0x8021EF50: or          $a3, $v1, $zero
        ctx->r7 = ctx->r3 | 0;
            goto L_8021EF94;
    }
    // 0x8021EF50: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8021EF54: slti        $at, $v1, 0x3A
    ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
    // 0x8021EF58: beq         $at, $zero, L_8021EF94
    if (ctx->r1 == 0) {
        // 0x8021EF5C: addiu       $t8, $sp, 0x88
        ctx->r24 = ADD32(ctx->r29, 0X88);
            goto L_8021EF94;
    }
    // 0x8021EF5C: addiu       $t8, $sp, 0x88
    ctx->r24 = ADD32(ctx->r29, 0X88);
    // 0x8021EF60: addu        $v0, $zero, $t8
    ctx->r2 = ADD32(0, ctx->r24);
    // 0x8021EF64: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_8021EF68:
    // 0x8021EF68: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x8021EF6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021EF70: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8021EF74: slti        $at, $v1, 0x30
    ctx->r1 = SIGNED(ctx->r3) < 0X30 ? 1 : 0;
    // 0x8021EF78: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8021EF7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8021EF80: bne         $at, $zero, L_8021EF94
    if (ctx->r1 != 0) {
        // 0x8021EF84: or          $a3, $v1, $zero
        ctx->r7 = ctx->r3 | 0;
            goto L_8021EF94;
    }
    // 0x8021EF84: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8021EF88: slti        $at, $v1, 0x3A
    ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
    // 0x8021EF8C: bnel        $at, $zero, L_8021EF68
    if (ctx->r1 != 0) {
        // 0x8021EF90: sb          $v1, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r3;
            goto L_8021EF68;
    }
    goto skip_1;
    // 0x8021EF90: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    skip_1:
L_8021EF94:
    // 0x8021EF94: addu        $t0, $sp, $a2
    ctx->r8 = ADD32(ctx->r29, ctx->r6);
    // 0x8021EF98: sb          $zero, 0x88($t0)
    MEM_B(0X88, ctx->r8) = 0;
L_8021EF9C:
    // 0x8021EF9C: beq         $a3, $zero, L_8021F158
    if (ctx->r7 == 0) {
        // 0x8021EFA0: addiu       $at, $zero, 0x78
        ctx->r1 = ADD32(0, 0X78);
            goto L_8021F158;
    }
    // 0x8021EFA0: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x8021EFA4: bne         $a3, $at, L_8021EFE4
    if (ctx->r7 != ctx->r1) {
        // 0x8021EFA8: addiu       $t1, $s1, 0x3
        ctx->r9 = ADD32(ctx->r17, 0X3);
            goto L_8021EFE4;
    }
    // 0x8021EFA8: addiu       $t1, $s1, 0x3
    ctx->r9 = ADD32(ctx->r17, 0X3);
    // 0x8021EFAC: and         $s1, $t1, $s7
    ctx->r17 = ctx->r9 & ctx->r23;
    // 0x8021EFB0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8021EFB4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8021EFB8: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x8021EFBC: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x8021EFC0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x8021EFC4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8021EFC8: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x8021EFCC: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x8021EFD0: jal         0x80230164
    // 0x8021EFD4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    func_80230164(rdram, ctx);
        goto after_1;
    // 0x8021EFD4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_1:
    // 0x8021EFD8: lw          $t2, 0x148($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X148);
    // 0x8021EFDC: b           L_8021F138
    // 0x8021EFE0: addu        $a1, $t2, $s0
    ctx->r5 = ADD32(ctx->r10, ctx->r16);
        goto L_8021F138;
    // 0x8021EFE0: addu        $a1, $t2, $s0
    ctx->r5 = ADD32(ctx->r10, ctx->r16);
L_8021EFE4:
    // 0x8021EFE4: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x8021EFE8: bne         $a3, $at, L_8021F028
    if (ctx->r7 != ctx->r1) {
        // 0x8021EFEC: addiu       $t3, $s1, 0x3
        ctx->r11 = ADD32(ctx->r17, 0X3);
            goto L_8021F028;
    }
    // 0x8021EFEC: addiu       $t3, $s1, 0x3
    ctx->r11 = ADD32(ctx->r17, 0X3);
    // 0x8021EFF0: and         $s1, $t3, $s7
    ctx->r17 = ctx->r11 & ctx->r23;
    // 0x8021EFF4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8021EFF8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8021EFFC: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x8021F000: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x8021F004: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x8021F008: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8021F00C: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x8021F010: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x8021F014: jal         0x80230164
    // 0x8021F018: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    func_80230164(rdram, ctx);
        goto after_2;
    // 0x8021F018: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_2:
    // 0x8021F01C: lw          $t4, 0x148($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X148);
    // 0x8021F020: b           L_8021F138
    // 0x8021F024: addu        $a1, $t4, $s0
    ctx->r5 = ADD32(ctx->r12, ctx->r16);
        goto L_8021F138;
    // 0x8021F024: addu        $a1, $t4, $s0
    ctx->r5 = ADD32(ctx->r12, ctx->r16);
L_8021F028:
    // 0x8021F028: addiu       $at, $zero, 0x62
    ctx->r1 = ADD32(0, 0X62);
    // 0x8021F02C: bne         $a3, $at, L_8021F06C
    if (ctx->r7 != ctx->r1) {
        // 0x8021F030: addiu       $t5, $s1, 0x3
        ctx->r13 = ADD32(ctx->r17, 0X3);
            goto L_8021F06C;
    }
    // 0x8021F030: addiu       $t5, $s1, 0x3
    ctx->r13 = ADD32(ctx->r17, 0X3);
    // 0x8021F034: and         $s1, $t5, $s7
    ctx->r17 = ctx->r13 & ctx->r23;
    // 0x8021F038: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8021F03C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8021F040: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x8021F044: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x8021F048: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x8021F04C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8021F050: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x8021F054: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x8021F058: jal         0x80230164
    // 0x8021F05C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    func_80230164(rdram, ctx);
        goto after_3;
    // 0x8021F05C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_3:
    // 0x8021F060: lw          $t6, 0x148($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X148);
    // 0x8021F064: b           L_8021F138
    // 0x8021F068: addu        $a1, $t6, $s0
    ctx->r5 = ADD32(ctx->r14, ctx->r16);
        goto L_8021F138;
    // 0x8021F068: addu        $a1, $t6, $s0
    ctx->r5 = ADD32(ctx->r14, ctx->r16);
L_8021F06C:
    // 0x8021F06C: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x8021F070: bne         $a3, $at, L_8021F0DC
    if (ctx->r7 != ctx->r1) {
        // 0x8021F074: lw          $t1, 0x148($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X148);
            goto L_8021F0DC;
    }
    // 0x8021F074: lw          $t1, 0x148($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X148);
    // 0x8021F078: andi        $t7, $s1, 0x1
    ctx->r15 = ctx->r17 & 0X1;
    // 0x8021F07C: beq         $t7, $zero, L_8021F090
    if (ctx->r15 == 0) {
        // 0x8021F080: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8021F090;
    }
    // 0x8021F080: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8021F084: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x8021F088: b           L_8021F0BC
    // 0x8021F08C: addiu       $v0, $s1, -0x16
    ctx->r2 = ADD32(ctx->r17, -0X16);
        goto L_8021F0BC;
    // 0x8021F08C: addiu       $v0, $s1, -0x16
    ctx->r2 = ADD32(ctx->r17, -0X16);
L_8021F090:
    // 0x8021F090: andi        $t9, $s1, 0x2
    ctx->r25 = ctx->r17 & 0X2;
    // 0x8021F094: beq         $t9, $zero, L_8021F0A8
    if (ctx->r25 == 0) {
        // 0x8021F098: addiu       $at, $zero, -0x8
        ctx->r1 = ADD32(0, -0X8);
            goto L_8021F0A8;
    }
    // 0x8021F098: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8021F09C: addiu       $s1, $s1, 0xA
    ctx->r17 = ADD32(ctx->r17, 0XA);
    // 0x8021F0A0: b           L_8021F0B8
    // 0x8021F0A4: addiu       $v1, $s1, -0x28
    ctx->r3 = ADD32(ctx->r17, -0X28);
        goto L_8021F0B8;
    // 0x8021F0A4: addiu       $v1, $s1, -0x28
    ctx->r3 = ADD32(ctx->r17, -0X28);
L_8021F0A8:
    // 0x8021F0A8: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x8021F0AC: and         $t8, $s1, $at
    ctx->r24 = ctx->r17 & ctx->r1;
    // 0x8021F0B0: addiu       $s1, $t8, 0x8
    ctx->r17 = ADD32(ctx->r24, 0X8);
    // 0x8021F0B4: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
L_8021F0B8:
    // 0x8021F0B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8021F0BC:
    // 0x8021F0BC: ldc1        $f4, -0x8($v0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r2, -0X8);
    // 0x8021F0C0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x8021F0C4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8021F0C8: jal         0x802304A0
    // 0x8021F0CC: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    func_802304A0(rdram, ctx);
        goto after_4;
    // 0x8021F0CC: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_4:
    // 0x8021F0D0: lw          $t0, 0x148($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X148);
    // 0x8021F0D4: b           L_8021F138
    // 0x8021F0D8: addu        $a1, $t0, $s0
    ctx->r5 = ADD32(ctx->r8, ctx->r16);
        goto L_8021F138;
    // 0x8021F0D8: addu        $a1, $t0, $s0
    ctx->r5 = ADD32(ctx->r8, ctx->r16);
L_8021F0DC:
    // 0x8021F0DC: addiu       $at, $zero, 0x73
    ctx->r1 = ADD32(0, 0X73);
    // 0x8021F0E0: bne         $a3, $at, L_8021F138
    if (ctx->r7 != ctx->r1) {
        // 0x8021F0E4: addu        $a1, $t1, $s0
        ctx->r5 = ADD32(ctx->r9, ctx->r16);
            goto L_8021F138;
    }
    // 0x8021F0E4: addu        $a1, $t1, $s0
    ctx->r5 = ADD32(ctx->r9, ctx->r16);
    // 0x8021F0E8: addiu       $t2, $s1, 0x3
    ctx->r10 = ADD32(ctx->r17, 0X3);
    // 0x8021F0EC: and         $s1, $t2, $s7
    ctx->r17 = ctx->r10 & ctx->r23;
    // 0x8021F0F0: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8021F0F4: lw          $t4, 0xE4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE4);
    // 0x8021F0F8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8021F0FC: lbu         $t3, 0x0($a2)
    ctx->r11 = MEM_BU(ctx->r6, 0X0);
    // 0x8021F100: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8021F104: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8021F108: beq         $t3, $zero, L_8021F138
    if (ctx->r11 == 0) {
        // 0x8021F10C: addu        $v1, $s4, $t4
        ctx->r3 = ADD32(ctx->r20, ctx->r12);
            goto L_8021F138;
    }
    // 0x8021F10C: addu        $v1, $s4, $t4
    ctx->r3 = ADD32(ctx->r20, ctx->r12);
    // 0x8021F110: lbu         $a0, 0x0($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X0);
    // 0x8021F114: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
L_8021F118:
    // 0x8021F118: lw          $t5, 0xE4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE4);
    // 0x8021F11C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8021F120: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8021F124: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8021F128: sw          $t6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r14;
    // 0x8021F12C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8021F130: bnel        $a0, $zero, L_8021F118
    if (ctx->r4 != 0) {
        // 0x8021F134: sb          $a0, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r4;
            goto L_8021F118;
    }
    goto skip_2;
    // 0x8021F134: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
    skip_2:
L_8021F138:
    // 0x8021F138: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x8021F13C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021F140: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8021F144: bne         $v1, $zero, L_8021EE20
    if (ctx->r3 != 0) {
        // 0x8021F148: or          $a3, $v1, $zero
        ctx->r7 = ctx->r3 | 0;
            goto L_8021EE20;
    }
    // 0x8021F148: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8021F14C: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x8021F150: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x8021F154: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
L_8021F158:
    // 0x8021F158: lw          $t7, 0xE4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE4);
    // 0x8021F15C: addiu       $a2, $sp, 0xF0
    ctx->r6 = ADD32(ctx->r29, 0XF0);
    // 0x8021F160: addu        $t9, $a2, $t7
    ctx->r25 = ADD32(ctx->r6, ctx->r15);
    // 0x8021F164: sb          $zero, 0x0($t9)
    MEM_B(0X0, ctx->r25) = 0;
    // 0x8021F168: lw          $a1, 0x144($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X144);
    // 0x8021F16C: jal         0x8021E87C
    // 0x8021F170: lw          $a0, 0x140($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X140);
    func_8021E87C(rdram, ctx);
        goto after_5;
    // 0x8021F170: lw          $a0, 0x140($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X140);
    after_5:
    // 0x8021F174: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8021F178: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8021F17C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8021F180: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8021F184: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8021F188: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8021F18C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8021F190: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8021F194: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8021F198: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x8021F19C: jr          $ra
    // 0x8021F1A0: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    return;
    // 0x8021F1A0: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
;}
RECOMP_FUNC void func_80207040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80207040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80207044: slti        $at, $a0, 0x64
    ctx->r1 = SIGNED(ctx->r4) < 0X64 ? 1 : 0;
    // 0x80207048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020704C: bne         $at, $zero, L_8020706C
    if (ctx->r1 != 0) {
        // 0x80207050: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_8020706C;
    }
    // 0x80207050: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80207054: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80207058: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x8020705C: addiu       $t8, $t8, -0x3D20
    ctx->r24 = ADD32(ctx->r24, -0X3D20);
    // 0x80207060: addiu       $t7, $t6, -0x320
    ctx->r15 = ADD32(ctx->r14, -0X320);
    // 0x80207064: b           L_80207098
    // 0x80207068: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
        goto L_80207098;
    // 0x80207068: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
L_8020706C:
    // 0x8020706C: slti        $at, $a1, 0x3
    ctx->r1 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x80207070: bne         $at, $zero, L_8020708C
    if (ctx->r1 != 0) {
        // 0x80207074: sll         $t9, $a1, 3
        ctx->r25 = S32(ctx->r5 << 3);
            goto L_8020708C;
    }
    // 0x80207074: sll         $t9, $a1, 3
    ctx->r25 = S32(ctx->r5 << 3);
    // 0x80207078: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8020707C: jal         0x80231A24
    // 0x80207080: addiu       $a0, $a0, 0x2AD0
    ctx->r4 = ADD32(ctx->r4, 0X2AD0);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80207080: addiu       $a0, $a0, 0x2AD0
    ctx->r4 = ADD32(ctx->r4, 0X2AD0);
    after_0:
    // 0x80207084: b           L_80207098
    // 0x80207088: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80207098;
    // 0x80207088: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020708C:
    // 0x8020708C: lui         $t0, 0x8026
    ctx->r8 = S32(0X8026 << 16);
    // 0x80207090: addiu       $t0, $t0, -0x3D38
    ctx->r8 = ADD32(ctx->r8, -0X3D38);
    // 0x80207094: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
L_80207098:
    // 0x80207098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020709C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802070A0: jr          $ra
    // 0x802070A4: nop

    return;
    // 0x802070A4: nop

;}
RECOMP_FUNC void func_8020F3BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020F3BC: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x8020F3C0: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8020F3C4: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x8020F3C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020F3CC: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8020F3D0: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x8020F3D4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8020F3D8: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8020F3DC: beq         $a0, $at, L_8020FEA8
    if (ctx->r4 == ctx->r1) {
        // 0x8020F3E0: sdc1        $f20, 0x18($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
            goto L_8020FEA8;
    }
    // 0x8020F3E0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8020F3E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8020F3E8: beq         $a0, $at, L_8020F538
    if (ctx->r4 == ctx->r1) {
        // 0x8020F3EC: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8020F538;
    }
    // 0x8020F3EC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020F3F0: bne         $a0, $at, L_80210A28
    if (ctx->r4 != ctx->r1) {
        // 0x8020F3F4: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_80210A28;
    }
    // 0x8020F3F4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020F3F8: bgez        $s0, L_8020F408
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8020F3FC: sra         $a0, $s0, 1
        ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
            goto L_8020F408;
    }
    // 0x8020F3FC: sra         $a0, $s0, 1
    ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
    // 0x8020F400: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x8020F404: sra         $a0, $at, 1
    ctx->r4 = S32(SIGNED(ctx->r1) >> 1);
L_8020F408:
    // 0x8020F408: blez        $a0, L_80210A28
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8020F40C: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80210A28;
    }
    // 0x8020F40C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8020F410: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
    // 0x8020F414: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8020F418: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
L_8020F41C:
    // 0x8020F41C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8020F420: addiu       $t3, $sp, 0x8C
    ctx->r11 = ADD32(ctx->r29, 0X8C);
    // 0x8020F424: addiu       $t4, $sp, 0x88
    ctx->r12 = ADD32(ctx->r29, 0X88);
    // 0x8020F428: andi        $t1, $v0, 0x3E
    ctx->r9 = ctx->r2 & 0X3E;
    // 0x8020F42C: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8020F430: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8020F434: andi        $t6, $v0, 0xF800
    ctx->r14 = ctx->r2 & 0XF800;
    // 0x8020F438: sra         $t7, $t6, 11
    ctx->r15 = S32(SIGNED(ctx->r14) >> 11);
    // 0x8020F43C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F440: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8020F444: andi        $t8, $v0, 0x7C0
    ctx->r24 = ctx->r2 & 0X7C0;
    // 0x8020F448: sra         $t9, $t8, 6
    ctx->r25 = S32(SIGNED(ctx->r24) >> 6);
    // 0x8020F44C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8020F450: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020F454: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8020F458: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8020F45C: sw          $t0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r8;
    // 0x8020F460: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8020F464: div.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f22.fl);
    // 0x8020F468: addiu       $a3, $sp, 0x90
    ctx->r7 = ADD32(ctx->r29, 0X90);
    // 0x8020F46C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020F470: div.s       $f14, $f10, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = DIV_S(ctx->f10.fl, ctx->f22.fl);
    // 0x8020F474: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8020F478: jal         0x80209914
    // 0x8020F47C: div.s       $f12, $f6, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
    func_80209914(rdram, ctx);
        goto after_0;
    // 0x8020F47C: div.s       $f12, $f6, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
    after_0:
    // 0x8020F480: lwc1        $f18, 0x88($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8020F484: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8020F488: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8020F48C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F490: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x8020F494: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8020F498: mul.s       $f12, $f16, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8020F49C: addiu       $t5, $sp, 0x6C
    ctx->r13 = ADD32(ctx->r29, 0X6C);
    // 0x8020F4A0: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x8020F4A4: mul.s       $f14, $f8, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8020F4A8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x8020F4AC: addiu       $a3, $sp, 0x70
    ctx->r7 = ADD32(ctx->r29, 0X70);
    // 0x8020F4B0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8020F4B4: jal         0x802096F4
    // 0x8020F4B8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_802096F4(rdram, ctx);
        goto after_1;
    // 0x8020F4B8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_1:
    // 0x8020F4BC: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8020F4C0: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8020F4C4: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8020F4C8: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x8020F4CC: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x8020F4D0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8020F4D4: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x8020F4D8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020F4DC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8020F4E0: mul.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x8020F4E4: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x8020F4E8: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x8020F4EC: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8020F4F0: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x8020F4F4: lhu         $t7, -0x2($s0)
    ctx->r15 = MEM_HU(ctx->r16, -0X2);
    // 0x8020F4F8: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020F4FC: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x8020F500: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8020F504: trunc.w.s   $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8020F508: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x8020F50C: sll         $t2, $t1, 11
    ctx->r10 = S32(ctx->r9 << 11);
    // 0x8020F510: or          $t3, $t8, $t2
    ctx->r11 = ctx->r24 | ctx->r10;
    // 0x8020F514: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020F518: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x8020F51C: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x8020F520: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x8020F524: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x8020F528: bne         $t0, $a0, L_8020F41C
    if (ctx->r8 != ctx->r4) {
        // 0x8020F52C: sh          $t2, -0x2($s0)
        MEM_H(-0X2, ctx->r16) = ctx->r10;
            goto L_8020F41C;
    }
    // 0x8020F52C: sh          $t2, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r10;
    // 0x8020F530: b           L_80210A2C
    // 0x8020F534: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80210A2C;
    // 0x8020F534: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020F538:
    // 0x8020F538: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020F53C: beq         $a1, $at, L_8020F55C
    if (ctx->r5 == ctx->r1) {
        // 0x8020F540: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8020F55C;
    }
    // 0x8020F540: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8020F544: beq         $a1, $at, L_8020F9B0
    if (ctx->r5 == ctx->r1) {
        // 0x8020F548: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8020F9B0;
    }
    // 0x8020F548: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8020F54C: beq         $a1, $at, L_8020FC24
    if (ctx->r5 == ctx->r1) {
        // 0x8020F550: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8020FC24;
    }
    // 0x8020F550: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020F554: b           L_80210A2C
    // 0x8020F558: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80210A2C;
    // 0x8020F558: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020F55C:
    // 0x8020F55C: blez        $s0, L_80210A28
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8020F560: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_80210A28;
    }
    // 0x8020F560: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020F564: andi        $a1, $s0, 0x3
    ctx->r5 = ctx->r16 & 0X3;
    // 0x8020F568: beq         $a1, $zero, L_8020F66C
    if (ctx->r5 == 0) {
        // 0x8020F56C: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8020F66C;
    }
    // 0x8020F56C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8020F570: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8020F574: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8020F578: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020F57C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020F580: andi        $t4, $v1, 0xE
    ctx->r12 = ctx->r3 & 0XE;
    // 0x8020F584: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020F588: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8020F58C: nop

    // 0x8020F590: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F594: mul.s       $f22, $f20, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F598: beql        $a0, $t0, L_8020F618
    if (ctx->r4 == ctx->r8) {
        // 0x8020F59C: trunc.w.s   $f18, $f22
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
            goto L_8020F618;
    }
    goto skip_0;
    // 0x8020F59C: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
    skip_0:
    // 0x8020F5A0: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
L_8020F5A4:
    // 0x8020F5A4: andi        $t3, $v1, 0xF1
    ctx->r11 = ctx->r3 & 0XF1;
    // 0x8020F5A8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020F5AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020F5B0: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020F5B4: nop

    // 0x8020F5B8: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x8020F5BC: or          $v1, $t3, $t1
    ctx->r3 = ctx->r11 | ctx->r9;
    // 0x8020F5C0: andi        $t8, $v1, 0xE0
    ctx->r24 = ctx->r3 & 0XE0;
    // 0x8020F5C4: sra         $t2, $t8, 5
    ctx->r10 = S32(SIGNED(ctx->r24) >> 5);
    // 0x8020F5C8: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x8020F5CC: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x8020F5D0: andi        $t4, $v1, 0x1F
    ctx->r12 = ctx->r3 & 0X1F;
    // 0x8020F5D4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F5D8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020F5DC: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F5E0: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020F5E4: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x8020F5E8: nop

    // 0x8020F5EC: sll         $t9, $t6, 5
    ctx->r25 = S32(ctx->r14 << 5);
    // 0x8020F5F0: or          $t3, $t4, $t9
    ctx->r11 = ctx->r12 | ctx->r25;
    // 0x8020F5F4: andi        $t4, $v1, 0xE
    ctx->r12 = ctx->r3 & 0XE;
    // 0x8020F5F8: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020F5FC: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8020F600: sb          $t3, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r11;
    // 0x8020F604: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F608: mul.s       $f22, $f20, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F60C: bnel        $a0, $t0, L_8020F5A4
    if (ctx->r4 != ctx->r8) {
        // 0x8020F610: trunc.w.s   $f18, $f22
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
            goto L_8020F5A4;
    }
    goto skip_1;
    // 0x8020F610: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
    skip_1:
    // 0x8020F614: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
L_8020F618:
    // 0x8020F618: andi        $t3, $v1, 0xF1
    ctx->r11 = ctx->r3 & 0XF1;
    // 0x8020F61C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020F620: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020F624: nop

    // 0x8020F628: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x8020F62C: or          $v1, $t3, $t1
    ctx->r3 = ctx->r11 | ctx->r9;
    // 0x8020F630: andi        $t8, $v1, 0xE0
    ctx->r24 = ctx->r3 & 0XE0;
    // 0x8020F634: sra         $t2, $t8, 5
    ctx->r10 = S32(SIGNED(ctx->r24) >> 5);
    // 0x8020F638: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x8020F63C: andi        $t4, $v1, 0x1F
    ctx->r12 = ctx->r3 & 0X1F;
    // 0x8020F640: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x8020F644: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F648: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F64C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020F650: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x8020F654: nop

    // 0x8020F658: sll         $t9, $t6, 5
    ctx->r25 = S32(ctx->r14 << 5);
    // 0x8020F65C: or          $t3, $t4, $t9
    ctx->r11 = ctx->r12 | ctx->r25;
    // 0x8020F660: sb          $t3, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r11;
    // 0x8020F664: beql        $t0, $s0, L_80210A2C
    if (ctx->r8 == ctx->r16) {
        // 0x8020F668: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80210A2C;
    }
    goto skip_2;
    // 0x8020F668: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_2:
L_8020F66C:
    // 0x8020F66C: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8020F670: addu        $v0, $s1, $t0
    ctx->r2 = ADD32(ctx->r17, ctx->r8);
    // 0x8020F674: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020F678: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020F67C: andi        $t1, $v1, 0xE
    ctx->r9 = ctx->r3 & 0XE;
    // 0x8020F680: sra         $t7, $t1, 1
    ctx->r15 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8020F684: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8020F688: nop

    // 0x8020F68C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F690: mul.s       $f22, $f20, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F694: beql        $t0, $s0, L_8020F840
    if (ctx->r8 == ctx->r16) {
        // 0x8020F698: trunc.w.s   $f18, $f22
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
            goto L_8020F840;
    }
    goto skip_3;
    // 0x8020F698: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
    skip_3:
    // 0x8020F69C: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
L_8020F6A0:
    // 0x8020F6A0: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020F6A4: andi        $t8, $v1, 0xF1
    ctx->r24 = ctx->r3 & 0XF1;
    // 0x8020F6A8: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020F6AC: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x8020F6B0: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020F6B4: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020F6B8: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8020F6BC: or          $v1, $t8, $t6
    ctx->r3 = ctx->r24 | ctx->r14;
    // 0x8020F6C0: andi        $t9, $v1, 0xE0
    ctx->r25 = ctx->r3 & 0XE0;
    // 0x8020F6C4: sra         $t3, $t9, 5
    ctx->r11 = S32(SIGNED(ctx->r25) >> 5);
    // 0x8020F6C8: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8020F6CC: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x8020F6D0: andi        $t1, $v1, 0x1F
    ctx->r9 = ctx->r3 & 0X1F;
    // 0x8020F6D4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F6D8: andi        $t6, $a0, 0xE
    ctx->r14 = ctx->r4 & 0XE;
    // 0x8020F6DC: sra         $t4, $t6, 1
    ctx->r12 = S32(SIGNED(ctx->r14) >> 1);
    // 0x8020F6E0: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020F6E4: andi        $t9, $a0, 0xF1
    ctx->r25 = ctx->r4 & 0XF1;
    // 0x8020F6E8: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
    // 0x8020F6EC: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F6F0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020F6F4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F6F8: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020F6FC: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F700: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x8020F704: nop

    // 0x8020F708: sll         $t5, $t2, 5
    ctx->r13 = S32(ctx->r10 << 5);
    // 0x8020F70C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020F710: or          $t8, $t1, $t5
    ctx->r24 = ctx->r9 | ctx->r13;
    // 0x8020F714: sb          $t8, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r24;
    // 0x8020F718: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020F71C: nop

    // 0x8020F720: sll         $t2, $t7, 1
    ctx->r10 = S32(ctx->r15 << 1);
    // 0x8020F724: or          $a0, $t9, $t2
    ctx->r4 = ctx->r25 | ctx->r10;
    // 0x8020F728: andi        $t5, $a0, 0xE0
    ctx->r13 = ctx->r4 & 0XE0;
    // 0x8020F72C: sra         $t8, $t5, 5
    ctx->r24 = S32(SIGNED(ctx->r13) >> 5);
    // 0x8020F730: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8020F734: sb          $a0, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r4;
    // 0x8020F738: andi        $t2, $a1, 0xE
    ctx->r10 = ctx->r5 & 0XE;
    // 0x8020F73C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F740: sra         $t1, $t2, 1
    ctx->r9 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8020F744: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8020F748: andi        $t6, $a0, 0x1F
    ctx->r14 = ctx->r4 & 0X1F;
    // 0x8020F74C: andi        $t5, $a1, 0xF1
    ctx->r13 = ctx->r5 & 0XF1;
    // 0x8020F750: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F754: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F758: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020F75C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F760: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8020F764: nop

    // 0x8020F768: sll         $t7, $t3, 5
    ctx->r15 = S32(ctx->r11 << 5);
    // 0x8020F76C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020F770: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x8020F774: sb          $t9, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r25;
    // 0x8020F778: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x8020F77C: nop

    // 0x8020F780: sll         $t3, $t4, 1
    ctx->r11 = S32(ctx->r12 << 1);
    // 0x8020F784: or          $a1, $t5, $t3
    ctx->r5 = ctx->r13 | ctx->r11;
    // 0x8020F788: andi        $t7, $a1, 0xE0
    ctx->r15 = ctx->r5 & 0XE0;
    // 0x8020F78C: sra         $t9, $t7, 5
    ctx->r25 = S32(SIGNED(ctx->r15) >> 5);
    // 0x8020F790: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8020F794: andi        $t3, $a2, 0xE
    ctx->r11 = ctx->r6 & 0XE;
    // 0x8020F798: sra         $t6, $t3, 1
    ctx->r14 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8020F79C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F7A0: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8020F7A4: sb          $a1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r5;
    // 0x8020F7A8: andi        $t2, $a1, 0x1F
    ctx->r10 = ctx->r5 & 0X1F;
    // 0x8020F7AC: andi        $t7, $a2, 0xF1
    ctx->r15 = ctx->r6 & 0XF1;
    // 0x8020F7B0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F7B4: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F7B8: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020F7BC: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F7C0: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x8020F7C4: nop

    // 0x8020F7C8: sll         $t4, $t8, 5
    ctx->r12 = S32(ctx->r24 << 5);
    // 0x8020F7CC: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020F7D0: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8020F7D4: sb          $t5, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r13;
    // 0x8020F7D8: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8020F7DC: nop

    // 0x8020F7E0: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x8020F7E4: or          $a2, $t7, $t8
    ctx->r6 = ctx->r15 | ctx->r24;
    // 0x8020F7E8: andi        $t4, $a2, 0xE0
    ctx->r12 = ctx->r6 & 0XE0;
    // 0x8020F7EC: sra         $t5, $t4, 5
    ctx->r13 = S32(SIGNED(ctx->r12) >> 5);
    // 0x8020F7F0: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8020F7F4: sb          $a2, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r6;
    // 0x8020F7F8: andi        $t3, $a2, 0x1F
    ctx->r11 = ctx->r6 & 0X1F;
    // 0x8020F7FC: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F800: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F804: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020F808: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020F80C: nop

    // 0x8020F810: sll         $t1, $t9, 5
    ctx->r9 = S32(ctx->r25 << 5);
    // 0x8020F814: or          $t7, $t3, $t1
    ctx->r15 = ctx->r11 | ctx->r9;
    // 0x8020F818: sb          $t7, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r15;
    // 0x8020F81C: andi        $t1, $v1, 0xE
    ctx->r9 = ctx->r3 & 0XE;
    // 0x8020F820: sra         $t7, $t1, 1
    ctx->r15 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8020F824: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8020F828: nop

    // 0x8020F82C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F830: mul.s       $f22, $f20, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F834: bnel        $t0, $s0, L_8020F6A0
    if (ctx->r8 != ctx->r16) {
        // 0x8020F838: trunc.w.s   $f18, $f22
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
            goto L_8020F6A0;
    }
    goto skip_4;
    // 0x8020F838: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
    skip_4:
    // 0x8020F83C: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
L_8020F840:
    // 0x8020F840: andi        $t8, $v1, 0xF1
    ctx->r24 = ctx->r3 & 0XF1;
    // 0x8020F844: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020F848: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020F84C: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x8020F850: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020F854: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020F858: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8020F85C: or          $v1, $t8, $t6
    ctx->r3 = ctx->r24 | ctx->r14;
    // 0x8020F860: andi        $t9, $v1, 0xE0
    ctx->r25 = ctx->r3 & 0XE0;
    // 0x8020F864: sra         $t3, $t9, 5
    ctx->r11 = S32(SIGNED(ctx->r25) >> 5);
    // 0x8020F868: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8020F86C: andi        $t6, $a0, 0xE
    ctx->r14 = ctx->r4 & 0XE;
    // 0x8020F870: sra         $t4, $t6, 1
    ctx->r12 = S32(SIGNED(ctx->r14) >> 1);
    // 0x8020F874: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F878: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020F87C: andi        $t1, $v1, 0x1F
    ctx->r9 = ctx->r3 & 0X1F;
    // 0x8020F880: andi        $t9, $a0, 0xF1
    ctx->r25 = ctx->r4 & 0XF1;
    // 0x8020F884: sb          $v1, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r3;
    // 0x8020F888: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F88C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F890: nop

    // 0x8020F894: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F898: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020F89C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020F8A0: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x8020F8A4: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020F8A8: sll         $t5, $t2, 5
    ctx->r13 = S32(ctx->r10 << 5);
    // 0x8020F8AC: or          $t8, $t1, $t5
    ctx->r24 = ctx->r9 | ctx->r13;
    // 0x8020F8B0: sll         $t2, $t7, 1
    ctx->r10 = S32(ctx->r15 << 1);
    // 0x8020F8B4: or          $a0, $t9, $t2
    ctx->r4 = ctx->r25 | ctx->r10;
    // 0x8020F8B8: andi        $t5, $a0, 0xE0
    ctx->r13 = ctx->r4 & 0XE0;
    // 0x8020F8BC: sb          $t8, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r24;
    // 0x8020F8C0: sra         $t8, $t5, 5
    ctx->r24 = S32(SIGNED(ctx->r13) >> 5);
    // 0x8020F8C4: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8020F8C8: andi        $t2, $a1, 0xE
    ctx->r10 = ctx->r5 & 0XE;
    // 0x8020F8CC: sra         $t1, $t2, 1
    ctx->r9 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8020F8D0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F8D4: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8020F8D8: andi        $t6, $a0, 0x1F
    ctx->r14 = ctx->r4 & 0X1F;
    // 0x8020F8DC: andi        $t5, $a1, 0xF1
    ctx->r13 = ctx->r5 & 0XF1;
    // 0x8020F8E0: sb          $a0, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r4;
    // 0x8020F8E4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F8E8: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F8EC: nop

    // 0x8020F8F0: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F8F4: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020F8F8: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020F8FC: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8020F900: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x8020F904: sll         $t7, $t3, 5
    ctx->r15 = S32(ctx->r11 << 5);
    // 0x8020F908: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x8020F90C: sll         $t3, $t4, 1
    ctx->r11 = S32(ctx->r12 << 1);
    // 0x8020F910: or          $a1, $t5, $t3
    ctx->r5 = ctx->r13 | ctx->r11;
    // 0x8020F914: andi        $t7, $a1, 0xE0
    ctx->r15 = ctx->r5 & 0XE0;
    // 0x8020F918: sb          $t9, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r25;
    // 0x8020F91C: sra         $t9, $t7, 5
    ctx->r25 = S32(SIGNED(ctx->r15) >> 5);
    // 0x8020F920: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8020F924: andi        $t3, $a2, 0xE
    ctx->r11 = ctx->r6 & 0XE;
    // 0x8020F928: sra         $t6, $t3, 1
    ctx->r14 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8020F92C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F930: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8020F934: andi        $t2, $a1, 0x1F
    ctx->r10 = ctx->r5 & 0X1F;
    // 0x8020F938: andi        $t7, $a2, 0xF1
    ctx->r15 = ctx->r6 & 0XF1;
    // 0x8020F93C: sb          $a1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r5;
    // 0x8020F940: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F944: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F948: nop

    // 0x8020F94C: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F950: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020F954: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020F958: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x8020F95C: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8020F960: sll         $t4, $t8, 5
    ctx->r12 = S32(ctx->r24 << 5);
    // 0x8020F964: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8020F968: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x8020F96C: or          $a2, $t7, $t8
    ctx->r6 = ctx->r15 | ctx->r24;
    // 0x8020F970: andi        $t4, $a2, 0xE0
    ctx->r12 = ctx->r6 & 0XE0;
    // 0x8020F974: sb          $t5, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r13;
    // 0x8020F978: sra         $t5, $t4, 5
    ctx->r13 = S32(SIGNED(ctx->r12) >> 5);
    // 0x8020F97C: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8020F980: andi        $t3, $a2, 0x1F
    ctx->r11 = ctx->r6 & 0X1F;
    // 0x8020F984: sb          $a2, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r6;
    // 0x8020F988: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F98C: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F990: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020F994: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020F998: nop

    // 0x8020F99C: sll         $t1, $t9, 5
    ctx->r9 = S32(ctx->r25 << 5);
    // 0x8020F9A0: or          $t7, $t3, $t1
    ctx->r15 = ctx->r11 | ctx->r9;
    // 0x8020F9A4: sb          $t7, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r15;
    // 0x8020F9A8: b           L_80210A2C
    // 0x8020F9AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80210A2C;
    // 0x8020F9AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020F9B0:
    // 0x8020F9B0: blez        $s0, L_80210A28
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8020F9B4: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_80210A28;
    }
    // 0x8020F9B4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020F9B8: andi        $a1, $s0, 0x3
    ctx->r5 = ctx->r16 & 0X3;
    // 0x8020F9BC: beq         $a1, $zero, L_8020FA58
    if (ctx->r5 == 0) {
        // 0x8020F9C0: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8020FA58;
    }
    // 0x8020F9C0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8020F9C4: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8020F9C8: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8020F9CC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020F9D0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020F9D4: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020F9D8: sra         $t2, $t8, 4
    ctx->r10 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020F9DC: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8020F9E0: beq         $a0, $t0, L_8020FA2C
    if (ctx->r4 == ctx->r8) {
        // 0x8020F9E4: cvt.s.w     $f22, $f16
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8020FA2C;
    }
    // 0x8020F9E4: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
L_8020F9E8:
    // 0x8020F9E8: mul.s       $f18, $f20, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020F9EC: andi        $t4, $v1, 0xF
    ctx->r12 = ctx->r3 & 0XF;
    // 0x8020F9F0: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x8020F9F4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020F9F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020F9FC: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020FA00: sra         $t2, $t8, 4
    ctx->r10 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020FA04: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020FA08: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8020FA0C: nop

    // 0x8020FA10: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FA14: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020FA18: nop

    // 0x8020FA1C: sll         $t3, $t9, 4
    ctx->r11 = S32(ctx->r25 << 4);
    // 0x8020FA20: or          $t1, $t4, $t3
    ctx->r9 = ctx->r12 | ctx->r11;
    // 0x8020FA24: bne         $a0, $t0, L_8020F9E8
    if (ctx->r4 != ctx->r8) {
        // 0x8020FA28: sb          $t1, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r9;
            goto L_8020F9E8;
    }
    // 0x8020FA28: sb          $t1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r9;
L_8020FA2C:
    // 0x8020FA2C: mul.s       $f18, $f20, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020FA30: andi        $t4, $v1, 0xF
    ctx->r12 = ctx->r3 & 0XF;
    // 0x8020FA34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020FA38: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020FA3C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020FA40: nop

    // 0x8020FA44: sll         $t3, $t9, 4
    ctx->r11 = S32(ctx->r25 << 4);
    // 0x8020FA48: or          $t1, $t4, $t3
    ctx->r9 = ctx->r12 | ctx->r11;
    // 0x8020FA4C: sb          $t1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r9;
    // 0x8020FA50: beql        $t0, $s0, L_80210A2C
    if (ctx->r8 == ctx->r16) {
        // 0x8020FA54: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80210A2C;
    }
    goto skip_5;
    // 0x8020FA54: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_5:
L_8020FA58:
    // 0x8020FA58: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8020FA5C: addu        $v0, $s1, $t0
    ctx->r2 = ADD32(ctx->r17, ctx->r8);
    // 0x8020FA60: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020FA64: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020FA68: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020FA6C: andi        $t7, $v1, 0xF0
    ctx->r15 = ctx->r3 & 0XF0;
    // 0x8020FA70: sra         $t8, $t7, 4
    ctx->r24 = S32(SIGNED(ctx->r15) >> 4);
    // 0x8020FA74: mtc1        $t8, $f14
    ctx->f14.u32l = ctx->r24;
    // 0x8020FA78: andi        $t1, $a0, 0xF0
    ctx->r9 = ctx->r4 & 0XF0;
    // 0x8020FA7C: sra         $t7, $t1, 4
    ctx->r15 = S32(SIGNED(ctx->r9) >> 4);
    // 0x8020FA80: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020FA84: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8020FA88: nop

    // 0x8020FA8C: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FA90: mul.s       $f18, $f20, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020FA94: beq         $t0, $s0, L_8020FB78
    if (ctx->r8 == ctx->r16) {
        // 0x8020FA98: nop
    
            goto L_8020FB78;
    }
    // 0x8020FA98: nop

L_8020FA9C:
    // 0x8020FA9C: mul.s       $f16, $f20, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020FAA0: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020FAA4: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020FAA8: andi        $t2, $v1, 0xF
    ctx->r10 = ctx->r3 & 0XF;
    // 0x8020FAAC: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x8020FAB0: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
    // 0x8020FAB4: trunc.w.s   $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020FAB8: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x8020FABC: lbu         $a0, 0x5($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X5);
    // 0x8020FAC0: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020FAC4: mfc1        $t9, $f14
    ctx->r25 = (int32_t)ctx->f14.u32l;
    // 0x8020FAC8: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020FACC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020FAD0: sll         $t4, $t9, 4
    ctx->r12 = S32(ctx->r25 << 4);
    // 0x8020FAD4: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020FAD8: or          $t3, $t2, $t4
    ctx->r11 = ctx->r10 | ctx->r12;
    // 0x8020FADC: sb          $t3, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r11;
    // 0x8020FAE0: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x8020FAE4: or          $t4, $t8, $t2
    ctx->r12 = ctx->r24 | ctx->r10;
    // 0x8020FAE8: andi        $t3, $a1, 0xF0
    ctx->r11 = ctx->r5 & 0XF0;
    // 0x8020FAEC: sb          $t4, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r12;
    // 0x8020FAF0: sra         $t1, $t3, 4
    ctx->r9 = S32(SIGNED(ctx->r11) >> 4);
    // 0x8020FAF4: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x8020FAF8: andi        $t4, $a2, 0xF0
    ctx->r12 = ctx->r6 & 0XF0;
    // 0x8020FAFC: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020FB00: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FB04: mtc1        $t3, $f14
    ctx->f14.u32l = ctx->r11;
    // 0x8020FB08: andi        $t1, $a2, 0xF
    ctx->r9 = ctx->r6 & 0XF;
    // 0x8020FB0C: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020FB10: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020FB14: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020FB18: mul.s       $f14, $f20, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020FB1C: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020FB20: nop

    // 0x8020FB24: sll         $t8, $t9, 4
    ctx->r24 = S32(ctx->r25 << 4);
    // 0x8020FB28: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020FB2C: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x8020FB30: sb          $t2, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r10;
    // 0x8020FB34: mfc1        $t9, $f14
    ctx->r25 = (int32_t)ctx->f14.u32l;
    // 0x8020FB38: nop

    // 0x8020FB3C: sll         $t7, $t9, 4
    ctx->r15 = S32(ctx->r25 << 4);
    // 0x8020FB40: or          $t8, $t1, $t7
    ctx->r24 = ctx->r9 | ctx->r15;
    // 0x8020FB44: sb          $t8, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r24;
    // 0x8020FB48: andi        $t7, $v1, 0xF0
    ctx->r15 = ctx->r3 & 0XF0;
    // 0x8020FB4C: sra         $t8, $t7, 4
    ctx->r24 = S32(SIGNED(ctx->r15) >> 4);
    // 0x8020FB50: mtc1        $t8, $f14
    ctx->f14.u32l = ctx->r24;
    // 0x8020FB54: andi        $t1, $a0, 0xF0
    ctx->r9 = ctx->r4 & 0XF0;
    // 0x8020FB58: sra         $t7, $t1, 4
    ctx->r15 = S32(SIGNED(ctx->r9) >> 4);
    // 0x8020FB5C: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020FB60: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8020FB64: nop

    // 0x8020FB68: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FB6C: mul.s       $f18, $f20, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020FB70: bne         $t0, $s0, L_8020FA9C
    if (ctx->r8 != ctx->r16) {
        // 0x8020FB74: nop
    
            goto L_8020FA9C;
    }
    // 0x8020FB74: nop

L_8020FB78:
    // 0x8020FB78: mul.s       $f16, $f20, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020FB7C: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020FB80: andi        $t2, $v1, 0xF
    ctx->r10 = ctx->r3 & 0XF;
    // 0x8020FB84: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020FB88: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x8020FB8C: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x8020FB90: trunc.w.s   $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020FB94: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020FB98: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020FB9C: mfc1        $t9, $f14
    ctx->r25 = (int32_t)ctx->f14.u32l;
    // 0x8020FBA0: nop

    // 0x8020FBA4: sll         $t4, $t9, 4
    ctx->r12 = S32(ctx->r25 << 4);
    // 0x8020FBA8: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020FBAC: or          $t3, $t2, $t4
    ctx->r11 = ctx->r10 | ctx->r12;
    // 0x8020FBB0: sb          $t3, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r11;
    // 0x8020FBB4: andi        $t3, $a1, 0xF0
    ctx->r11 = ctx->r5 & 0XF0;
    // 0x8020FBB8: sra         $t1, $t3, 4
    ctx->r9 = S32(SIGNED(ctx->r11) >> 4);
    // 0x8020FBBC: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x8020FBC0: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x8020FBC4: or          $t4, $t8, $t2
    ctx->r12 = ctx->r24 | ctx->r10;
    // 0x8020FBC8: sb          $t4, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r12;
    // 0x8020FBCC: andi        $t4, $a2, 0xF0
    ctx->r12 = ctx->r6 & 0XF0;
    // 0x8020FBD0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FBD4: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020FBD8: mtc1        $t3, $f14
    ctx->f14.u32l = ctx->r11;
    // 0x8020FBDC: andi        $t1, $a2, 0xF
    ctx->r9 = ctx->r6 & 0XF;
    // 0x8020FBE0: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020FBE4: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020FBE8: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020FBEC: mul.s       $f14, $f20, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020FBF0: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020FBF4: nop

    // 0x8020FBF8: sll         $t8, $t9, 4
    ctx->r24 = S32(ctx->r25 << 4);
    // 0x8020FBFC: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020FC00: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x8020FC04: sb          $t2, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r10;
    // 0x8020FC08: mfc1        $t9, $f14
    ctx->r25 = (int32_t)ctx->f14.u32l;
    // 0x8020FC0C: nop

    // 0x8020FC10: sll         $t7, $t9, 4
    ctx->r15 = S32(ctx->r25 << 4);
    // 0x8020FC14: or          $t8, $t1, $t7
    ctx->r24 = ctx->r9 | ctx->r15;
    // 0x8020FC18: sb          $t8, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r24;
    // 0x8020FC1C: b           L_80210A2C
    // 0x8020FC20: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80210A2C;
    // 0x8020FC20: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020FC24:
    // 0x8020FC24: bgez        $s0, L_8020FC34
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8020FC28: sra         $a0, $s0, 1
        ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
            goto L_8020FC34;
    }
    // 0x8020FC28: sra         $a0, $s0, 1
    ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
    // 0x8020FC2C: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x8020FC30: sra         $a0, $at, 1
    ctx->r4 = S32(SIGNED(ctx->r1) >> 1);
L_8020FC34:
    // 0x8020FC34: blez        $a0, L_80210A28
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8020FC38: andi        $a1, $a0, 0x3
        ctx->r5 = ctx->r4 & 0X3;
            goto L_80210A28;
    }
    // 0x8020FC38: andi        $a1, $a0, 0x3
    ctx->r5 = ctx->r4 & 0X3;
    // 0x8020FC3C: beq         $a1, $zero, L_8020FCD8
    if (ctx->r5 == 0) {
        // 0x8020FC40: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8020FCD8;
    }
    // 0x8020FC40: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020FC44: sll         $t2, $t0, 1
    ctx->r10 = S32(ctx->r8 << 1);
    // 0x8020FC48: addu        $s0, $s1, $t2
    ctx->r16 = ADD32(ctx->r17, ctx->r10);
    // 0x8020FC4C: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8020FC50: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8020FC54: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020FC58: andi        $t4, $v0, 0xFF00
    ctx->r12 = ctx->r2 & 0XFF00;
    // 0x8020FC5C: sra         $t3, $t4, 8
    ctx->r11 = S32(SIGNED(ctx->r12) >> 8);
    // 0x8020FC60: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8020FC64: beq         $v1, $t0, L_8020FCB0
    if (ctx->r3 == ctx->r8) {
        // 0x8020FC68: cvt.s.w     $f22, $f16
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8020FCB0;
    }
    // 0x8020FC68: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
L_8020FC6C:
    // 0x8020FC6C: mul.s       $f18, $f20, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020FC70: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x8020FC74: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x8020FC78: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020FC7C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8020FC80: andi        $t4, $v0, 0xFF00
    ctx->r12 = ctx->r2 & 0XFF00;
    // 0x8020FC84: sra         $t3, $t4, 8
    ctx->r11 = S32(SIGNED(ctx->r12) >> 8);
    // 0x8020FC88: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020FC8C: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8020FC90: nop

    // 0x8020FC94: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FC98: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020FC9C: nop

    // 0x8020FCA0: sll         $t7, $t1, 8
    ctx->r15 = S32(ctx->r9 << 8);
    // 0x8020FCA4: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x8020FCA8: bne         $v1, $t0, L_8020FC6C
    if (ctx->r3 != ctx->r8) {
        // 0x8020FCAC: sh          $t8, -0x2($s0)
        MEM_H(-0X2, ctx->r16) = ctx->r24;
            goto L_8020FC6C;
    }
    // 0x8020FCAC: sh          $t8, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r24;
L_8020FCB0:
    // 0x8020FCB0: mul.s       $f18, $f20, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020FCB4: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x8020FCB8: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8020FCBC: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020FCC0: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020FCC4: nop

    // 0x8020FCC8: sll         $t7, $t1, 8
    ctx->r15 = S32(ctx->r9 << 8);
    // 0x8020FCCC: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x8020FCD0: sh          $t8, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r24;
    // 0x8020FCD4: beq         $t0, $a0, L_80210A28
    if (ctx->r8 == ctx->r4) {
        // 0x8020FCD8: sll         $t2, $a0, 1
        ctx->r10 = S32(ctx->r4 << 1);
            goto L_80210A28;
    }
L_8020FCD8:
    // 0x8020FCD8: sll         $t2, $a0, 1
    ctx->r10 = S32(ctx->r4 << 1);
    // 0x8020FCDC: sll         $t4, $t0, 1
    ctx->r12 = S32(ctx->r8 << 1);
    // 0x8020FCE0: addu        $s0, $s1, $t4
    ctx->r16 = ADD32(ctx->r17, ctx->r12);
    // 0x8020FCE4: addu        $a2, $t2, $s1
    ctx->r6 = ADD32(ctx->r10, ctx->r17);
    // 0x8020FCE8: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8020FCEC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8020FCF0: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x8020FCF4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8020FCF8: andi        $t3, $v0, 0xFF00
    ctx->r11 = ctx->r2 & 0XFF00;
    // 0x8020FCFC: sra         $t6, $t3, 8
    ctx->r14 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020FD00: mtc1        $t6, $f14
    ctx->f14.u32l = ctx->r14;
    // 0x8020FD04: andi        $t4, $v1, 0xFF00
    ctx->r12 = ctx->r3 & 0XFF00;
    // 0x8020FD08: sra         $t3, $t4, 8
    ctx->r11 = S32(SIGNED(ctx->r12) >> 8);
    // 0x8020FD0C: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020FD10: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8020FD14: nop

    // 0x8020FD18: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FD1C: mul.s       $f18, $f20, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020FD20: beq         $s0, $a2, L_8020FE00
    if (ctx->r16 == ctx->r6) {
        // 0x8020FD24: nop
    
            goto L_8020FE00;
    }
    // 0x8020FD24: nop

L_8020FD28:
    // 0x8020FD28: mul.s       $f16, $f20, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020FD2C: lhu         $a0, -0x4($s0)
    ctx->r4 = MEM_HU(ctx->r16, -0X4);
    // 0x8020FD30: lhu         $a1, -0x2($s0)
    ctx->r5 = MEM_HU(ctx->r16, -0X2);
    // 0x8020FD34: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8020FD38: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x8020FD3C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8020FD40: trunc.w.s   $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020FD44: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x8020FD48: andi        $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 & 0XFF;
    // 0x8020FD4C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020FD50: mfc1        $t7, $f14
    ctx->r15 = (int32_t)ctx->f14.u32l;
    // 0x8020FD54: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8020FD58: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8020FD5C: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020FD60: or          $t2, $t9, $t8
    ctx->r10 = ctx->r25 | ctx->r24;
    // 0x8020FD64: sh          $t2, -0x10($s0)
    MEM_H(-0X10, ctx->r16) = ctx->r10;
    // 0x8020FD68: sll         $t9, $t7, 8
    ctx->r25 = S32(ctx->r15 << 8);
    // 0x8020FD6C: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8020FD70: andi        $t2, $a0, 0xFF00
    ctx->r10 = ctx->r4 & 0XFF00;
    // 0x8020FD74: sh          $t8, -0xE($s0)
    MEM_H(-0XE, ctx->r16) = ctx->r24;
    // 0x8020FD78: sra         $t4, $t2, 8
    ctx->r12 = S32(SIGNED(ctx->r10) >> 8);
    // 0x8020FD7C: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020FD80: andi        $t8, $a1, 0xFF00
    ctx->r24 = ctx->r5 & 0XFF00;
    // 0x8020FD84: sra         $t2, $t8, 8
    ctx->r10 = S32(SIGNED(ctx->r24) >> 8);
    // 0x8020FD88: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FD8C: mtc1        $t2, $f14
    ctx->f14.u32l = ctx->r10;
    // 0x8020FD90: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x8020FD94: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020FD98: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020FD9C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020FDA0: mul.s       $f14, $f20, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020FDA4: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020FDA8: nop

    // 0x8020FDAC: sll         $t6, $t7, 8
    ctx->r14 = S32(ctx->r15 << 8);
    // 0x8020FDB0: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020FDB4: or          $t9, $t3, $t6
    ctx->r25 = ctx->r11 | ctx->r14;
    // 0x8020FDB8: sh          $t9, -0xC($s0)
    MEM_H(-0XC, ctx->r16) = ctx->r25;
    // 0x8020FDBC: mfc1        $t7, $f14
    ctx->r15 = (int32_t)ctx->f14.u32l;
    // 0x8020FDC0: nop

    // 0x8020FDC4: sll         $t3, $t7, 8
    ctx->r11 = S32(ctx->r15 << 8);
    // 0x8020FDC8: or          $t6, $t4, $t3
    ctx->r14 = ctx->r12 | ctx->r11;
    // 0x8020FDCC: sh          $t6, -0xA($s0)
    MEM_H(-0XA, ctx->r16) = ctx->r14;
    // 0x8020FDD0: andi        $t3, $v0, 0xFF00
    ctx->r11 = ctx->r2 & 0XFF00;
    // 0x8020FDD4: sra         $t6, $t3, 8
    ctx->r14 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020FDD8: mtc1        $t6, $f14
    ctx->f14.u32l = ctx->r14;
    // 0x8020FDDC: andi        $t4, $v1, 0xFF00
    ctx->r12 = ctx->r3 & 0XFF00;
    // 0x8020FDE0: sra         $t3, $t4, 8
    ctx->r11 = S32(SIGNED(ctx->r12) >> 8);
    // 0x8020FDE4: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020FDE8: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8020FDEC: nop

    // 0x8020FDF0: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FDF4: mul.s       $f18, $f20, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020FDF8: bne         $s0, $a2, L_8020FD28
    if (ctx->r16 != ctx->r6) {
        // 0x8020FDFC: nop
    
            goto L_8020FD28;
    }
    // 0x8020FDFC: nop

L_8020FE00:
    // 0x8020FE00: mul.s       $f16, $f20, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020FE04: lhu         $a0, -0x4($s0)
    ctx->r4 = MEM_HU(ctx->r16, -0X4);
    // 0x8020FE08: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8020FE0C: lhu         $a1, -0x2($s0)
    ctx->r5 = MEM_HU(ctx->r16, -0X2);
    // 0x8020FE10: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x8020FE14: andi        $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 & 0XFF;
    // 0x8020FE18: trunc.w.s   $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020FE1C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020FE20: mfc1        $t7, $f14
    ctx->r15 = (int32_t)ctx->f14.u32l;
    // 0x8020FE24: nop

    // 0x8020FE28: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8020FE2C: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020FE30: or          $t2, $t9, $t8
    ctx->r10 = ctx->r25 | ctx->r24;
    // 0x8020FE34: sh          $t2, -0x8($s0)
    MEM_H(-0X8, ctx->r16) = ctx->r10;
    // 0x8020FE38: andi        $t2, $a0, 0xFF00
    ctx->r10 = ctx->r4 & 0XFF00;
    // 0x8020FE3C: sra         $t4, $t2, 8
    ctx->r12 = S32(SIGNED(ctx->r10) >> 8);
    // 0x8020FE40: sll         $t9, $t7, 8
    ctx->r25 = S32(ctx->r15 << 8);
    // 0x8020FE44: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020FE48: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8020FE4C: sh          $t8, -0x6($s0)
    MEM_H(-0X6, ctx->r16) = ctx->r24;
    // 0x8020FE50: andi        $t8, $a1, 0xFF00
    ctx->r24 = ctx->r5 & 0XFF00;
    // 0x8020FE54: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FE58: sra         $t2, $t8, 8
    ctx->r10 = S32(SIGNED(ctx->r24) >> 8);
    // 0x8020FE5C: mtc1        $t2, $f14
    ctx->f14.u32l = ctx->r10;
    // 0x8020FE60: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x8020FE64: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020FE68: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020FE6C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020FE70: mul.s       $f14, $f20, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020FE74: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020FE78: nop

    // 0x8020FE7C: sll         $t6, $t7, 8
    ctx->r14 = S32(ctx->r15 << 8);
    // 0x8020FE80: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020FE84: or          $t9, $t3, $t6
    ctx->r25 = ctx->r11 | ctx->r14;
    // 0x8020FE88: sh          $t9, -0x4($s0)
    MEM_H(-0X4, ctx->r16) = ctx->r25;
    // 0x8020FE8C: mfc1        $t7, $f14
    ctx->r15 = (int32_t)ctx->f14.u32l;
    // 0x8020FE90: nop

    // 0x8020FE94: sll         $t3, $t7, 8
    ctx->r11 = S32(ctx->r15 << 8);
    // 0x8020FE98: or          $t6, $t4, $t3
    ctx->r14 = ctx->r12 | ctx->r11;
    // 0x8020FE9C: sh          $t6, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r14;
    // 0x8020FEA0: b           L_80210A2C
    // 0x8020FEA4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80210A2C;
    // 0x8020FEA4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020FEA8:
    // 0x8020FEA8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020FEAC: beq         $a1, $at, L_8020FECC
    if (ctx->r5 == ctx->r1) {
        // 0x8020FEB0: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8020FECC;
    }
    // 0x8020FEB0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8020FEB4: beq         $a1, $at, L_802102CC
    if (ctx->r5 == ctx->r1) {
        // 0x8020FEB8: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_802102CC;
    }
    // 0x8020FEB8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8020FEBC: beq         $a1, $at, L_80210674
    if (ctx->r5 == ctx->r1) {
        // 0x8020FEC0: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_80210674;
    }
    // 0x8020FEC0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020FEC4: b           L_80210A2C
    // 0x8020FEC8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80210A2C;
    // 0x8020FEC8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020FECC:
    // 0x8020FECC: blez        $s0, L_80210A28
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8020FED0: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_80210A28;
    }
    // 0x8020FED0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020FED4: andi        $a1, $s0, 0x3
    ctx->r5 = ctx->r16 & 0X3;
    // 0x8020FED8: beq         $a1, $zero, L_8020FFC4
    if (ctx->r5 == 0) {
        // 0x8020FEDC: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8020FFC4;
    }
    // 0x8020FEDC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8020FEE0: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8020FEE4: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8020FEE8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020FEEC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020FEF0: andi        $t9, $v1, 0xF
    ctx->r25 = ctx->r3 & 0XF;
    // 0x8020FEF4: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8020FEF8: nop

    // 0x8020FEFC: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FF00: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020FF04: beq         $a0, $t0, L_8020FF74
    if (ctx->r4 == ctx->r8) {
        // 0x8020FF08: trunc.w.s   $f22, $f16
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.u32l = TRUNC_W_S(ctx->f16.fl);
            goto L_8020FF74;
    }
    // 0x8020FF08: trunc.w.s   $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.u32l = TRUNC_W_S(ctx->f16.fl);
L_8020FF0C:
    // 0x8020FF0C: mfc1        $t1, $f22
    ctx->r9 = (int32_t)ctx->f22.u32l;
    // 0x8020FF10: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020FF14: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020FF18: andi        $t5, $t1, 0xF
    ctx->r13 = ctx->r9 & 0XF;
    // 0x8020FF1C: or          $v1, $t8, $t5
    ctx->r3 = ctx->r24 | ctx->r13;
    // 0x8020FF20: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020FF24: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020FF28: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8020FF2C: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x8020FF30: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020FF34: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020FF38: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x8020FF3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020FF40: andi        $t9, $v1, 0xF
    ctx->r25 = ctx->r3 & 0XF;
    // 0x8020FF44: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8020FF48: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020FF4C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FF50: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020FF54: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020FF58: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020FF5C: nop

    // 0x8020FF60: sll         $t8, $t1, 4
    ctx->r24 = S32(ctx->r9 << 4);
    // 0x8020FF64: trunc.w.s   $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020FF68: or          $t5, $t6, $t8
    ctx->r13 = ctx->r14 | ctx->r24;
    // 0x8020FF6C: bne         $a0, $t0, L_8020FF0C
    if (ctx->r4 != ctx->r8) {
        // 0x8020FF70: sb          $t5, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r13;
            goto L_8020FF0C;
    }
    // 0x8020FF70: sb          $t5, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r13;
L_8020FF74:
    // 0x8020FF74: mfc1        $t1, $f22
    ctx->r9 = (int32_t)ctx->f22.u32l;
    // 0x8020FF78: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020FF7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020FF80: andi        $t5, $t1, 0xF
    ctx->r13 = ctx->r9 & 0XF;
    // 0x8020FF84: or          $v1, $t8, $t5
    ctx->r3 = ctx->r24 | ctx->r13;
    // 0x8020FF88: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020FF8C: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020FF90: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8020FF94: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020FF98: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x8020FF9C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020FFA0: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020FFA4: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020FFA8: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020FFAC: nop

    // 0x8020FFB0: sll         $t8, $t1, 4
    ctx->r24 = S32(ctx->r9 << 4);
    // 0x8020FFB4: or          $t5, $t6, $t8
    ctx->r13 = ctx->r14 | ctx->r24;
    // 0x8020FFB8: sb          $t5, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r13;
    // 0x8020FFBC: beql        $t0, $s0, L_80210A2C
    if (ctx->r8 == ctx->r16) {
        // 0x8020FFC0: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80210A2C;
    }
    goto skip_6;
    // 0x8020FFC0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_6:
L_8020FFC4:
    // 0x8020FFC4: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8020FFC8: addu        $v0, $s1, $t0
    ctx->r2 = ADD32(ctx->r17, ctx->r8);
    // 0x8020FFCC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020FFD0: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020FFD4: andi        $t7, $v1, 0xF
    ctx->r15 = ctx->r3 & 0XF;
    // 0x8020FFD8: mtc1        $t7, $f14
    ctx->f14.u32l = ctx->r15;
    // 0x8020FFDC: nop

    // 0x8020FFE0: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020FFE4: mul.s       $f14, $f20, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020FFE8: beq         $t0, $s0, L_8021016C
    if (ctx->r8 == ctx->r16) {
        // 0x8020FFEC: trunc.w.s   $f22, $f14
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.u32l = TRUNC_W_S(ctx->f14.fl);
            goto L_8021016C;
    }
    // 0x8020FFEC: trunc.w.s   $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.u32l = TRUNC_W_S(ctx->f14.fl);
L_8020FFF0:
    // 0x8020FFF0: mfc1        $t9, $f22
    ctx->r25 = (int32_t)ctx->f22.u32l;
    // 0x8020FFF4: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020FFF8: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020FFFC: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x80210000: andi        $t2, $t9, 0xF
    ctx->r10 = ctx->r25 & 0XF;
    // 0x80210004: or          $v1, $t4, $t2
    ctx->r3 = ctx->r12 | ctx->r10;
    // 0x80210008: andi        $t6, $v1, 0xF0
    ctx->r14 = ctx->r3 & 0XF0;
    // 0x8021000C: sra         $t8, $t6, 4
    ctx->r24 = S32(SIGNED(ctx->r14) >> 4);
    // 0x80210010: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80210014: andi        $t5, $v1, 0xF
    ctx->r13 = ctx->r3 & 0XF;
    // 0x80210018: andi        $t1, $a0, 0xF
    ctx->r9 = ctx->r4 & 0XF;
    // 0x8021001C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80210020: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x80210024: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x80210028: andi        $t6, $a0, 0xF0
    ctx->r14 = ctx->r4 & 0XF0;
    // 0x8021002C: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x80210030: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80210034: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x80210038: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
    // 0x8021003C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80210040: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80210044: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x80210048: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8021004C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80210050: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80210054: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x80210058: sll         $t4, $t9, 4
    ctx->r12 = S32(ctx->r25 << 4);
    // 0x8021005C: or          $t2, $t5, $t4
    ctx->r10 = ctx->r13 | ctx->r12;
    // 0x80210060: andi        $t3, $t7, 0xF
    ctx->r11 = ctx->r15 & 0XF;
    // 0x80210064: or          $a0, $t6, $t3
    ctx->r4 = ctx->r14 | ctx->r11;
    // 0x80210068: sb          $t2, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r10;
    // 0x8021006C: andi        $t5, $a0, 0xF0
    ctx->r13 = ctx->r4 & 0XF0;
    // 0x80210070: sra         $t4, $t5, 4
    ctx->r12 = S32(SIGNED(ctx->r13) >> 4);
    // 0x80210074: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80210078: andi        $t9, $a1, 0xF
    ctx->r25 = ctx->r5 & 0XF;
    // 0x8021007C: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x80210080: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80210084: andi        $t2, $a0, 0xF
    ctx->r10 = ctx->r4 & 0XF;
    // 0x80210088: andi        $t5, $a1, 0xF0
    ctx->r13 = ctx->r5 & 0XF0;
    // 0x8021008C: sb          $a0, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r4;
    // 0x80210090: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80210094: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x80210098: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8021009C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x802100A0: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x802100A4: nop

    // 0x802100A8: sll         $t6, $t7, 4
    ctx->r14 = S32(ctx->r15 << 4);
    // 0x802100AC: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802100B0: or          $t3, $t2, $t6
    ctx->r11 = ctx->r10 | ctx->r14;
    // 0x802100B4: sb          $t3, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r11;
    // 0x802100B8: andi        $t7, $a2, 0xF
    ctx->r15 = ctx->r6 & 0XF;
    // 0x802100BC: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x802100C0: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x802100C4: andi        $t7, $v1, 0xF
    ctx->r15 = ctx->r3 & 0XF;
    // 0x802100C8: andi        $t8, $t1, 0xF
    ctx->r24 = ctx->r9 & 0XF;
    // 0x802100CC: or          $a1, $t5, $t8
    ctx->r5 = ctx->r13 | ctx->r24;
    // 0x802100D0: andi        $t2, $a1, 0xF0
    ctx->r10 = ctx->r5 & 0XF0;
    // 0x802100D4: sra         $t6, $t2, 4
    ctx->r14 = S32(SIGNED(ctx->r10) >> 4);
    // 0x802100D8: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x802100DC: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x802100E0: mtc1        $t7, $f14
    ctx->f14.u32l = ctx->r15;
    // 0x802100E4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802100E8: andi        $t2, $a2, 0xF0
    ctx->r10 = ctx->r6 & 0XF0;
    // 0x802100EC: sb          $a1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r5;
    // 0x802100F0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802100F4: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x802100F8: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x802100FC: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x80210100: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x80210104: nop

    // 0x80210108: sll         $t5, $t1, 4
    ctx->r13 = S32(ctx->r9 << 4);
    // 0x8021010C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80210110: or          $t8, $t3, $t5
    ctx->r24 = ctx->r11 | ctx->r13;
    // 0x80210114: sb          $t8, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r24;
    // 0x80210118: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8021011C: nop

    // 0x80210120: andi        $t4, $t9, 0xF
    ctx->r12 = ctx->r25 & 0XF;
    // 0x80210124: or          $a2, $t2, $t4
    ctx->r6 = ctx->r10 | ctx->r12;
    // 0x80210128: andi        $t3, $a2, 0xF0
    ctx->r11 = ctx->r6 & 0XF0;
    // 0x8021012C: sra         $t5, $t3, 4
    ctx->r13 = S32(SIGNED(ctx->r11) >> 4);
    // 0x80210130: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x80210134: andi        $t8, $a2, 0xF
    ctx->r24 = ctx->r6 & 0XF;
    // 0x80210138: sb          $a2, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r6;
    // 0x8021013C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80210140: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x80210144: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x80210148: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8021014C: mul.s       $f14, $f20, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x80210150: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80210154: nop

    // 0x80210158: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x8021015C: trunc.w.s   $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x80210160: or          $t4, $t8, $t2
    ctx->r12 = ctx->r24 | ctx->r10;
    // 0x80210164: bne         $t0, $s0, L_8020FFF0
    if (ctx->r8 != ctx->r16) {
        // 0x80210168: sb          $t4, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r12;
            goto L_8020FFF0;
    }
    // 0x80210168: sb          $t4, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r12;
L_8021016C:
    // 0x8021016C: mfc1        $t9, $f22
    ctx->r25 = (int32_t)ctx->f22.u32l;
    // 0x80210170: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x80210174: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x80210178: andi        $t2, $t9, 0xF
    ctx->r10 = ctx->r25 & 0XF;
    // 0x8021017C: or          $v1, $t4, $t2
    ctx->r3 = ctx->r12 | ctx->r10;
    // 0x80210180: andi        $t6, $v1, 0xF0
    ctx->r14 = ctx->r3 & 0XF0;
    // 0x80210184: sra         $t8, $t6, 4
    ctx->r24 = S32(SIGNED(ctx->r14) >> 4);
    // 0x80210188: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x8021018C: andi        $t1, $a0, 0xF
    ctx->r9 = ctx->r4 & 0XF;
    // 0x80210190: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x80210194: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80210198: andi        $t5, $v1, 0xF
    ctx->r13 = ctx->r3 & 0XF;
    // 0x8021019C: andi        $t6, $a0, 0xF0
    ctx->r14 = ctx->r4 & 0XF0;
    // 0x802101A0: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x802101A4: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x802101A8: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802101AC: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x802101B0: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x802101B4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802101B8: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x802101BC: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802101C0: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x802101C4: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x802101C8: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x802101CC: sll         $t4, $t9, 4
    ctx->r12 = S32(ctx->r25 << 4);
    // 0x802101D0: or          $t2, $t5, $t4
    ctx->r10 = ctx->r13 | ctx->r12;
    // 0x802101D4: andi        $t3, $t7, 0xF
    ctx->r11 = ctx->r15 & 0XF;
    // 0x802101D8: or          $a0, $t6, $t3
    ctx->r4 = ctx->r14 | ctx->r11;
    // 0x802101DC: andi        $t5, $a0, 0xF0
    ctx->r13 = ctx->r4 & 0XF0;
    // 0x802101E0: sra         $t4, $t5, 4
    ctx->r12 = S32(SIGNED(ctx->r13) >> 4);
    // 0x802101E4: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x802101E8: andi        $t9, $a1, 0xF
    ctx->r25 = ctx->r5 & 0XF;
    // 0x802101EC: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x802101F0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802101F4: sb          $t2, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r10;
    // 0x802101F8: andi        $t2, $a0, 0xF
    ctx->r10 = ctx->r4 & 0XF;
    // 0x802101FC: andi        $t5, $a1, 0xF0
    ctx->r13 = ctx->r5 & 0XF0;
    // 0x80210200: sb          $a0, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r4;
    // 0x80210204: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80210208: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8021020C: nop

    // 0x80210210: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x80210214: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80210218: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8021021C: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x80210220: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x80210224: sll         $t6, $t7, 4
    ctx->r14 = S32(ctx->r15 << 4);
    // 0x80210228: or          $t3, $t2, $t6
    ctx->r11 = ctx->r10 | ctx->r14;
    // 0x8021022C: andi        $t8, $t1, 0xF
    ctx->r24 = ctx->r9 & 0XF;
    // 0x80210230: or          $a1, $t5, $t8
    ctx->r5 = ctx->r13 | ctx->r24;
    // 0x80210234: andi        $t2, $a1, 0xF0
    ctx->r10 = ctx->r5 & 0XF0;
    // 0x80210238: sra         $t6, $t2, 4
    ctx->r14 = S32(SIGNED(ctx->r10) >> 4);
    // 0x8021023C: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x80210240: andi        $t7, $a2, 0xF
    ctx->r15 = ctx->r6 & 0XF;
    // 0x80210244: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80210248: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8021024C: sb          $t3, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r11;
    // 0x80210250: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x80210254: andi        $t2, $a2, 0xF0
    ctx->r10 = ctx->r6 & 0XF0;
    // 0x80210258: sb          $a1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r5;
    // 0x8021025C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80210260: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x80210264: nop

    // 0x80210268: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8021026C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80210270: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80210274: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x80210278: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8021027C: sll         $t5, $t1, 4
    ctx->r13 = S32(ctx->r9 << 4);
    // 0x80210280: or          $t8, $t3, $t5
    ctx->r24 = ctx->r11 | ctx->r13;
    // 0x80210284: andi        $t4, $t9, 0xF
    ctx->r12 = ctx->r25 & 0XF;
    // 0x80210288: or          $a2, $t2, $t4
    ctx->r6 = ctx->r10 | ctx->r12;
    // 0x8021028C: andi        $t3, $a2, 0xF0
    ctx->r11 = ctx->r6 & 0XF0;
    // 0x80210290: sra         $t5, $t3, 4
    ctx->r13 = S32(SIGNED(ctx->r11) >> 4);
    // 0x80210294: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x80210298: sb          $t8, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r24;
    // 0x8021029C: andi        $t8, $a2, 0xF
    ctx->r24 = ctx->r6 & 0XF;
    // 0x802102A0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802102A4: sb          $a2, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r6;
    // 0x802102A8: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x802102AC: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802102B0: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x802102B4: nop

    // 0x802102B8: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x802102BC: or          $t4, $t8, $t2
    ctx->r12 = ctx->r24 | ctx->r10;
    // 0x802102C0: sb          $t4, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r12;
    // 0x802102C4: b           L_80210A2C
    // 0x802102C8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80210A2C;
    // 0x802102C8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802102CC:
    // 0x802102CC: blez        $s0, L_80210A28
    if (SIGNED(ctx->r16) <= 0) {
        // 0x802102D0: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_80210A28;
    }
    // 0x802102D0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x802102D4: andi        $a1, $s0, 0x3
    ctx->r5 = ctx->r16 & 0X3;
    // 0x802102D8: beq         $a1, $zero, L_802103A8
    if (ctx->r5 == 0) {
        // 0x802102DC: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_802103A8;
    }
    // 0x802102DC: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x802102E0: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x802102E4: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
L_802102E8:
    // 0x802102E8: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x802102EC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x802102F0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802102F4: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x802102F8: bgez        $t1, L_8021030C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x802102FC: cvt.s.w     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8021030C;
    }
    // 0x802102FC: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80210300: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80210304: nop

    // 0x80210308: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_8021030C:
    // 0x8021030C: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x80210310: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80210314: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210318: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8021031C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80210320: nop

    // 0x80210324: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80210328: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8021032C: nop

    // 0x80210330: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80210334: beql        $t5, $zero, L_80210384
    if (ctx->r13 == 0) {
        // 0x80210338: mfc1        $t5, $f10
        ctx->r13 = (int32_t)ctx->f10.u32l;
            goto L_80210384;
    }
    goto skip_7;
    // 0x80210338: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    skip_7:
    // 0x8021033C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210340: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80210344: sub.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x80210348: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8021034C: nop

    // 0x80210350: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80210354: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80210358: nop

    // 0x8021035C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80210360: bne         $t5, $zero, L_80210378
    if (ctx->r13 != 0) {
        // 0x80210364: nop
    
            goto L_80210378;
    }
    // 0x80210364: nop

    // 0x80210368: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x8021036C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210370: b           L_80210390
    // 0x80210374: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_80210390;
    // 0x80210374: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_80210378:
    // 0x80210378: b           L_80210390
    // 0x8021037C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_80210390;
    // 0x8021037C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80210380: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
L_80210384:
    // 0x80210384: nop

    // 0x80210388: bltz        $t5, L_80210378
    if (SIGNED(ctx->r13) < 0) {
        // 0x8021038C: nop
    
            goto L_80210378;
    }
    // 0x8021038C: nop

L_80210390:
    // 0x80210390: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80210394: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    // 0x80210398: bne         $v1, $t0, L_802102E8
    if (ctx->r3 != ctx->r8) {
        // 0x8021039C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_802102E8;
    }
    // 0x8021039C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802103A0: beql        $t0, $s0, L_80210A2C
    if (ctx->r8 == ctx->r16) {
        // 0x802103A4: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80210A2C;
    }
    goto skip_8;
    // 0x802103A4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_8:
L_802103A8:
    // 0x802103A8: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x802103AC: addu        $v0, $s1, $t0
    ctx->r2 = ADD32(ctx->r17, ctx->r8);
L_802103B0:
    // 0x802103B0: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x802103B4: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x802103B8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802103BC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x802103C0: bgez        $t7, L_802103D4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802103C4: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802103D4;
    }
    // 0x802103C4: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802103C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802103CC: nop

    // 0x802103D0: add.s       $f0, $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f18.fl;
L_802103D4:
    // 0x802103D4: mul.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x802103D8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802103DC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802103E0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802103E4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802103E8: nop

    // 0x802103EC: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802103F0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802103F4: nop

    // 0x802103F8: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x802103FC: beql        $t9, $zero, L_8021044C
    if (ctx->r25 == 0) {
        // 0x80210400: mfc1        $t9, $f6
        ctx->r25 = (int32_t)ctx->f6.u32l;
            goto L_8021044C;
    }
    goto skip_9;
    // 0x80210400: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    skip_9:
    // 0x80210404: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80210408: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8021040C: sub.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80210410: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80210414: nop

    // 0x80210418: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8021041C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80210420: nop

    // 0x80210424: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80210428: bne         $t9, $zero, L_80210440
    if (ctx->r25 != 0) {
        // 0x8021042C: nop
    
            goto L_80210440;
    }
    // 0x8021042C: nop

    // 0x80210430: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80210434: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210438: b           L_80210458
    // 0x8021043C: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_80210458;
    // 0x8021043C: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_80210440:
    // 0x80210440: b           L_80210458
    // 0x80210444: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_80210458;
    // 0x80210444: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80210448: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
L_8021044C:
    // 0x8021044C: nop

    // 0x80210450: bltz        $t9, L_80210440
    if (SIGNED(ctx->r25) < 0) {
        // 0x80210454: nop
    
            goto L_80210440;
    }
    // 0x80210454: nop

L_80210458:
    // 0x80210458: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x8021045C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80210460: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210464: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80210468: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x8021046C: bgez        $t8, L_80210480
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80210470: cvt.s.w     $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80210480;
    }
    // 0x80210470: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80210474: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210478: nop

    // 0x8021047C: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
L_80210480:
    // 0x80210480: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x80210484: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80210488: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021048C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80210490: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80210494: nop

    // 0x80210498: cvt.w.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8021049C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802104A0: nop

    // 0x802104A4: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x802104A8: beql        $t4, $zero, L_802104F8
    if (ctx->r12 == 0) {
        // 0x802104AC: mfc1        $t4, $f18
        ctx->r12 = (int32_t)ctx->f18.u32l;
            goto L_802104F8;
    }
    goto skip_10;
    // 0x802104AC: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    skip_10:
    // 0x802104B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802104B4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802104B8: sub.s       $f18, $f4, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x802104BC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802104C0: nop

    // 0x802104C4: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x802104C8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802104CC: nop

    // 0x802104D0: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x802104D4: bne         $t4, $zero, L_802104EC
    if (ctx->r12 != 0) {
        // 0x802104D8: nop
    
            goto L_802104EC;
    }
    // 0x802104D8: nop

    // 0x802104DC: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x802104E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802104E4: b           L_80210504
    // 0x802104E8: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_80210504;
    // 0x802104E8: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_802104EC:
    // 0x802104EC: b           L_80210504
    // 0x802104F0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_80210504;
    // 0x802104F0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x802104F4: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
L_802104F8:
    // 0x802104F8: nop

    // 0x802104FC: bltz        $t4, L_802104EC
    if (SIGNED(ctx->r12) < 0) {
        // 0x80210500: nop
    
            goto L_802104EC;
    }
    // 0x80210500: nop

L_80210504:
    // 0x80210504: lbu         $t1, 0x2($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X2);
    // 0x80210508: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8021050C: sb          $t4, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r12;
    // 0x80210510: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80210514: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210518: bgez        $t1, L_8021052C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8021051C: cvt.s.w     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8021052C;
    }
    // 0x8021051C: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80210520: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80210524: nop

    // 0x80210528: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_8021052C:
    // 0x8021052C: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x80210530: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80210534: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210538: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8021053C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80210540: nop

    // 0x80210544: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80210548: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8021054C: nop

    // 0x80210550: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80210554: beql        $t5, $zero, L_802105A4
    if (ctx->r13 == 0) {
        // 0x80210558: mfc1        $t5, $f10
        ctx->r13 = (int32_t)ctx->f10.u32l;
            goto L_802105A4;
    }
    goto skip_11;
    // 0x80210558: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    skip_11:
    // 0x8021055C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210560: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80210564: sub.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x80210568: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8021056C: nop

    // 0x80210570: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80210574: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80210578: nop

    // 0x8021057C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80210580: bne         $t5, $zero, L_80210598
    if (ctx->r13 != 0) {
        // 0x80210584: nop
    
            goto L_80210598;
    }
    // 0x80210584: nop

    // 0x80210588: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x8021058C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210590: b           L_802105B0
    // 0x80210594: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_802105B0;
    // 0x80210594: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_80210598:
    // 0x80210598: b           L_802105B0
    // 0x8021059C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_802105B0;
    // 0x8021059C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x802105A0: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
L_802105A4:
    // 0x802105A4: nop

    // 0x802105A8: bltz        $t5, L_80210598
    if (SIGNED(ctx->r13) < 0) {
        // 0x802105AC: nop
    
            goto L_80210598;
    }
    // 0x802105AC: nop

L_802105B0:
    // 0x802105B0: lbu         $t7, 0x3($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3);
    // 0x802105B4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802105B8: sb          $t5, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r13;
    // 0x802105BC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x802105C0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802105C4: bgez        $t7, L_802105D8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802105C8: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802105D8;
    }
    // 0x802105C8: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802105CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802105D0: nop

    // 0x802105D4: add.s       $f0, $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f18.fl;
L_802105D8:
    // 0x802105D8: mul.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x802105DC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802105E0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802105E4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802105E8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802105EC: nop

    // 0x802105F0: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802105F4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802105F8: nop

    // 0x802105FC: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80210600: beql        $t9, $zero, L_80210650
    if (ctx->r25 == 0) {
        // 0x80210604: mfc1        $t9, $f6
        ctx->r25 = (int32_t)ctx->f6.u32l;
            goto L_80210650;
    }
    goto skip_12;
    // 0x80210604: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    skip_12:
    // 0x80210608: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021060C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80210610: sub.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80210614: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80210618: nop

    // 0x8021061C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80210620: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80210624: nop

    // 0x80210628: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8021062C: bne         $t9, $zero, L_80210644
    if (ctx->r25 != 0) {
        // 0x80210630: nop
    
            goto L_80210644;
    }
    // 0x80210630: nop

    // 0x80210634: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80210638: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021063C: b           L_8021065C
    // 0x80210640: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8021065C;
    // 0x80210640: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_80210644:
    // 0x80210644: b           L_8021065C
    // 0x80210648: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8021065C;
    // 0x80210648: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8021064C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
L_80210650:
    // 0x80210650: nop

    // 0x80210654: bltz        $t9, L_80210644
    if (SIGNED(ctx->r25) < 0) {
        // 0x80210658: nop
    
            goto L_80210644;
    }
    // 0x80210658: nop

L_8021065C:
    // 0x8021065C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80210660: sb          $t9, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r25;
    // 0x80210664: bne         $t0, $s0, L_802103B0
    if (ctx->r8 != ctx->r16) {
        // 0x80210668: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_802103B0;
    }
    // 0x80210668: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8021066C: b           L_80210A2C
    // 0x80210670: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80210A2C;
    // 0x80210670: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80210674:
    // 0x80210674: bgez        $s0, L_80210684
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80210678: sra         $a0, $s0, 1
        ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
            goto L_80210684;
    }
    // 0x80210678: sra         $a0, $s0, 1
    ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
    // 0x8021067C: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x80210680: sra         $a0, $at, 1
    ctx->r4 = S32(SIGNED(ctx->r1) >> 1);
L_80210684:
    // 0x80210684: blez        $a0, L_80210A28
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80210688: andi        $a1, $a0, 0x3
        ctx->r5 = ctx->r4 & 0X3;
            goto L_80210A28;
    }
    // 0x80210688: andi        $a1, $a0, 0x3
    ctx->r5 = ctx->r4 & 0X3;
    // 0x8021068C: beq         $a1, $zero, L_8021075C
    if (ctx->r5 == 0) {
        // 0x80210690: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_8021075C;
    }
    // 0x80210690: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80210694: sll         $t8, $t0, 1
    ctx->r24 = S32(ctx->r8 << 1);
    // 0x80210698: addu        $s0, $s1, $t8
    ctx->r16 = ADD32(ctx->r17, ctx->r24);
    // 0x8021069C: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
L_802106A0:
    // 0x802106A0: lhu         $t2, 0x0($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X0);
    // 0x802106A4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x802106A8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802106AC: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x802106B0: bgez        $t2, L_802106C4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802106B4: cvt.s.w     $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
            goto L_802106C4;
    }
    // 0x802106B4: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802106B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802106BC: nop

    // 0x802106C0: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
L_802106C4:
    // 0x802106C4: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x802106C8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802106CC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802106D0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802106D4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802106D8: nop

    // 0x802106DC: cvt.w.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802106E0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802106E4: nop

    // 0x802106E8: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x802106EC: beql        $t1, $zero, L_8021073C
    if (ctx->r9 == 0) {
        // 0x802106F0: mfc1        $t1, $f18
        ctx->r9 = (int32_t)ctx->f18.u32l;
            goto L_8021073C;
    }
    goto skip_13;
    // 0x802106F0: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    skip_13:
    // 0x802106F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802106F8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802106FC: sub.s       $f18, $f4, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x80210700: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80210704: nop

    // 0x80210708: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8021070C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80210710: nop

    // 0x80210714: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x80210718: bne         $t1, $zero, L_80210730
    if (ctx->r9 != 0) {
        // 0x8021071C: nop
    
            goto L_80210730;
    }
    // 0x8021071C: nop

    // 0x80210720: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x80210724: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210728: b           L_80210748
    // 0x8021072C: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_80210748;
    // 0x8021072C: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_80210730:
    // 0x80210730: b           L_80210748
    // 0x80210734: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_80210748;
    // 0x80210734: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80210738: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
L_8021073C:
    // 0x8021073C: nop

    // 0x80210740: bltz        $t1, L_80210730
    if (SIGNED(ctx->r9) < 0) {
        // 0x80210744: nop
    
            goto L_80210730;
    }
    // 0x80210744: nop

L_80210748:
    // 0x80210748: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8021074C: sh          $t1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r9;
    // 0x80210750: bne         $v0, $t0, L_802106A0
    if (ctx->r2 != ctx->r8) {
        // 0x80210754: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_802106A0;
    }
    // 0x80210754: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x80210758: beq         $t0, $a0, L_80210A28
    if (ctx->r8 == ctx->r4) {
        // 0x8021075C: sll         $t3, $a0, 1
        ctx->r11 = S32(ctx->r4 << 1);
            goto L_80210A28;
    }
L_8021075C:
    // 0x8021075C: sll         $t3, $a0, 1
    ctx->r11 = S32(ctx->r4 << 1);
    // 0x80210760: sll         $t5, $t0, 1
    ctx->r13 = S32(ctx->r8 << 1);
    // 0x80210764: addu        $s0, $s1, $t5
    ctx->r16 = ADD32(ctx->r17, ctx->r13);
    // 0x80210768: addu        $v0, $t3, $s1
    ctx->r2 = ADD32(ctx->r11, ctx->r17);
    // 0x8021076C: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
L_80210770:
    // 0x80210770: lhu         $t7, 0x0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X0);
    // 0x80210774: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210778: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8021077C: bgez        $t7, L_80210790
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80210780: cvt.s.w     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80210790;
    }
    // 0x80210780: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80210784: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80210788: nop

    // 0x8021078C: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_80210790:
    // 0x80210790: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x80210794: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80210798: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021079C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802107A0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802107A4: nop

    // 0x802107A8: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x802107AC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802107B0: nop

    // 0x802107B4: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x802107B8: beql        $t9, $zero, L_80210808
    if (ctx->r25 == 0) {
        // 0x802107BC: mfc1        $t9, $f10
        ctx->r25 = (int32_t)ctx->f10.u32l;
            goto L_80210808;
    }
    goto skip_14;
    // 0x802107BC: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    skip_14:
    // 0x802107C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802107C4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802107C8: sub.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x802107CC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802107D0: nop

    // 0x802107D4: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802107D8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802107DC: nop

    // 0x802107E0: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x802107E4: bne         $t9, $zero, L_802107FC
    if (ctx->r25 != 0) {
        // 0x802107E8: nop
    
            goto L_802107FC;
    }
    // 0x802107E8: nop

    // 0x802107EC: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x802107F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802107F4: b           L_80210814
    // 0x802107F8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_80210814;
    // 0x802107F8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_802107FC:
    // 0x802107FC: b           L_80210814
    // 0x80210800: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_80210814;
    // 0x80210800: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80210804: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
L_80210808:
    // 0x80210808: nop

    // 0x8021080C: bltz        $t9, L_802107FC
    if (SIGNED(ctx->r25) < 0) {
        // 0x80210810: nop
    
            goto L_802107FC;
    }
    // 0x80210810: nop

L_80210814:
    // 0x80210814: lhu         $t8, 0x2($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2);
    // 0x80210818: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8021081C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210820: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80210824: sh          $t9, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r25;
    // 0x80210828: bgez        $t8, L_8021083C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8021082C: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8021083C;
    }
    // 0x8021082C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80210830: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80210834: nop

    // 0x80210838: add.s       $f0, $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f18.fl;
L_8021083C:
    // 0x8021083C: mul.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x80210840: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80210844: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210848: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8021084C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80210850: nop

    // 0x80210854: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80210858: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8021085C: nop

    // 0x80210860: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x80210864: beql        $t4, $zero, L_802108B4
    if (ctx->r12 == 0) {
        // 0x80210868: mfc1        $t4, $f6
        ctx->r12 = (int32_t)ctx->f6.u32l;
            goto L_802108B4;
    }
    goto skip_15;
    // 0x80210868: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    skip_15:
    // 0x8021086C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80210870: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80210874: sub.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80210878: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8021087C: nop

    // 0x80210880: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80210884: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80210888: nop

    // 0x8021088C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x80210890: bne         $t4, $zero, L_802108A8
    if (ctx->r12 != 0) {
        // 0x80210894: nop
    
            goto L_802108A8;
    }
    // 0x80210894: nop

    // 0x80210898: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8021089C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802108A0: b           L_802108C0
    // 0x802108A4: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_802108C0;
    // 0x802108A4: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_802108A8:
    // 0x802108A8: b           L_802108C0
    // 0x802108AC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_802108C0;
    // 0x802108AC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x802108B0: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
L_802108B4:
    // 0x802108B4: nop

    // 0x802108B8: bltz        $t4, L_802108A8
    if (SIGNED(ctx->r12) < 0) {
        // 0x802108BC: nop
    
            goto L_802108A8;
    }
    // 0x802108BC: nop

L_802108C0:
    // 0x802108C0: lhu         $t1, 0x4($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X4);
    // 0x802108C4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802108C8: sh          $t4, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r12;
    // 0x802108CC: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x802108D0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802108D4: bgez        $t1, L_802108E8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x802108D8: cvt.s.w     $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
            goto L_802108E8;
    }
    // 0x802108D8: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802108DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802108E0: nop

    // 0x802108E4: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
L_802108E8:
    // 0x802108E8: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x802108EC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802108F0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802108F4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802108F8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802108FC: nop

    // 0x80210900: cvt.w.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80210904: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80210908: nop

    // 0x8021090C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80210910: beql        $t5, $zero, L_80210960
    if (ctx->r13 == 0) {
        // 0x80210914: mfc1        $t5, $f18
        ctx->r13 = (int32_t)ctx->f18.u32l;
            goto L_80210960;
    }
    goto skip_16;
    // 0x80210914: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    skip_16:
    // 0x80210918: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8021091C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80210920: sub.s       $f18, $f4, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x80210924: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80210928: nop

    // 0x8021092C: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80210930: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80210934: nop

    // 0x80210938: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8021093C: bne         $t5, $zero, L_80210954
    if (ctx->r13 != 0) {
        // 0x80210940: nop
    
            goto L_80210954;
    }
    // 0x80210940: nop

    // 0x80210944: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x80210948: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021094C: b           L_8021096C
    // 0x80210950: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8021096C;
    // 0x80210950: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_80210954:
    // 0x80210954: b           L_8021096C
    // 0x80210958: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8021096C;
    // 0x80210958: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8021095C: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
L_80210960:
    // 0x80210960: nop

    // 0x80210964: bltz        $t5, L_80210954
    if (SIGNED(ctx->r13) < 0) {
        // 0x80210968: nop
    
            goto L_80210954;
    }
    // 0x80210968: nop

L_8021096C:
    // 0x8021096C: lhu         $t7, 0x6($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X6);
    // 0x80210970: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80210974: sh          $t5, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r13;
    // 0x80210978: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8021097C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210980: bgez        $t7, L_80210994
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80210984: cvt.s.w     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80210994;
    }
    // 0x80210984: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80210988: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021098C: nop

    // 0x80210990: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_80210994:
    // 0x80210994: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x80210998: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8021099C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802109A0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802109A4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802109A8: nop

    // 0x802109AC: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x802109B0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802109B4: nop

    // 0x802109B8: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x802109BC: beql        $t9, $zero, L_80210A0C
    if (ctx->r25 == 0) {
        // 0x802109C0: mfc1        $t9, $f10
        ctx->r25 = (int32_t)ctx->f10.u32l;
            goto L_80210A0C;
    }
    goto skip_17;
    // 0x802109C0: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    skip_17:
    // 0x802109C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802109C8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802109CC: sub.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x802109D0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802109D4: nop

    // 0x802109D8: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802109DC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802109E0: nop

    // 0x802109E4: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x802109E8: bne         $t9, $zero, L_80210A00
    if (ctx->r25 != 0) {
        // 0x802109EC: nop
    
            goto L_80210A00;
    }
    // 0x802109EC: nop

    // 0x802109F0: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x802109F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802109F8: b           L_80210A18
    // 0x802109FC: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_80210A18;
    // 0x802109FC: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_80210A00:
    // 0x80210A00: b           L_80210A18
    // 0x80210A04: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_80210A18;
    // 0x80210A04: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80210A08: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
L_80210A0C:
    // 0x80210A0C: nop

    // 0x80210A10: bltz        $t9, L_80210A00
    if (SIGNED(ctx->r25) < 0) {
        // 0x80210A14: nop
    
            goto L_80210A00;
    }
    // 0x80210A14: nop

L_80210A18:
    // 0x80210A18: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80210A1C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80210A20: bne         $s0, $v0, L_80210770
    if (ctx->r16 != ctx->r2) {
        // 0x80210A24: sh          $t9, -0x2($s0)
        MEM_H(-0X2, ctx->r16) = ctx->r25;
            goto L_80210770;
    }
    // 0x80210A24: sh          $t9, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r25;
L_80210A28:
    // 0x80210A28: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80210A2C:
    // 0x80210A2C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80210A30: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80210A34: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80210A38: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80210A3C: jr          $ra
    // 0x80210A40: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x80210A40: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_8022C7C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C7C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C7CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C7D0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022C7D4: jal         0x80231A24
    // 0x8022C7D8: addiu       $a0, $a0, 0x4464
    ctx->r4 = ADD32(ctx->r4, 0X4464);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022C7D8: addiu       $a0, $a0, 0x4464
    ctx->r4 = ADD32(ctx->r4, 0X4464);
    after_0:
    // 0x8022C7DC: addiu       $t6, $zero, 0x2902
    ctx->r14 = ADD32(0, 0X2902);
    // 0x8022C7E0: lui         $t7, 0xA404
    ctx->r15 = S32(0XA404 << 16);
    // 0x8022C7E4: sw          $t6, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r14;
    // 0x8022C7E8: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8022C7EC: lbu         $t8, -0x78D7($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X78D7);
    // 0x8022C7F0: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8022C7F4: addiu       $a0, $a0, 0x1258
    ctx->r4 = ADD32(ctx->r4, 0X1258);
    // 0x8022C7F8: beq         $t8, $zero, L_8022C808
    if (ctx->r24 == 0) {
        // 0x8022C7FC: addiu       $a1, $zero, 0x29B
        ctx->r5 = ADD32(0, 0X29B);
            goto L_8022C808;
    }
    // 0x8022C7FC: addiu       $a1, $zero, 0x29B
    ctx->r5 = ADD32(0, 0X29B);
    // 0x8022C800: jal         0x80236B80
    // 0x8022C804: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80236B80(rdram, ctx);
        goto after_1;
    // 0x8022C804: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_8022C808:
    // 0x8022C808: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x8022C80C: lbu         $t9, -0x78D6($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X78D6);
    // 0x8022C810: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8022C814: addiu       $a0, $a0, 0x1258
    ctx->r4 = ADD32(ctx->r4, 0X1258);
    // 0x8022C818: beq         $t9, $zero, L_8022C828
    if (ctx->r25 == 0) {
        // 0x8022C81C: addiu       $a1, $zero, 0x29C
        ctx->r5 = ADD32(0, 0X29C);
            goto L_8022C828;
    }
    // 0x8022C81C: addiu       $a1, $zero, 0x29C
    ctx->r5 = ADD32(0, 0X29C);
    // 0x8022C820: jal         0x80236B80
    // 0x8022C824: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80236B80(rdram, ctx);
        goto after_2;
    // 0x8022C824: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8022C828:
    // 0x8022C828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C82C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022C830: jr          $ra
    // 0x8022C834: nop

    return;
    // 0x8022C834: nop

;}
RECOMP_FUNC void func_80231D58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231D58: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80231D5C: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80231D60: lw          $t6, 0x8F8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X8F8);
    // 0x80231D64: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80231D68: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80231D6C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80231D70: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80231D74: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80231D78: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80231D7C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80231D80: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80231D84: beq         $t6, $zero, L_80231D98
    if (ctx->r14 == 0) {
        // 0x80231D88: sw          $a3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r7;
            goto L_80231D98;
    }
    // 0x80231D88: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80231D8C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80231D90: jal         0x80231A24
    // 0x80231D94: addiu       $a0, $a0, 0x50B0
    ctx->r4 = ADD32(ctx->r4, 0X50B0);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80231D94: addiu       $a0, $a0, 0x50B0
    ctx->r4 = ADD32(ctx->r4, 0X50B0);
    after_0:
L_80231D98:
    // 0x80231D98: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80231D9C: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x80231DA0: addiu       $s1, $sp, 0x34
    ctx->r17 = ADD32(ctx->r29, 0X34);
    // 0x80231DA4: beq         $a1, $zero, L_80231EBC
    if (ctx->r5 == 0) {
        // 0x80231DA8: addiu       $s3, $s3, 0x50E0
        ctx->r19 = ADD32(ctx->r19, 0X50E0);
            goto L_80231EBC;
    }
    // 0x80231DA8: addiu       $s3, $s3, 0x50E0
    ctx->r19 = ADD32(ctx->r19, 0X50E0);
    // 0x80231DAC: lui         $s0, 0x8028
    ctx->r16 = S32(0X8028 << 16);
    // 0x80231DB0: addiu       $s0, $s0, 0xBC0
    ctx->r16 = ADD32(ctx->r16, 0XBC0);
    // 0x80231DB4: addiu       $s2, $zero, -0x4
    ctx->r18 = ADD32(0, -0X4);
    // 0x80231DB8: addiu       $t8, $s1, 0x3
    ctx->r24 = ADD32(ctx->r17, 0X3);
L_80231DBC:
    // 0x80231DBC: addiu       $t9, $a1, -0xE
    ctx->r25 = ADD32(ctx->r5, -0XE);
    // 0x80231DC0: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x80231DC4: sltiu       $at, $t9, 0x17
    ctx->r1 = ctx->r25 < 0X17 ? 1 : 0;
    // 0x80231DC8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80231DCC: beq         $at, $zero, L_80231E9C
    if (ctx->r1 == 0) {
        // 0x80231DD0: lw          $v0, -0x4($s1)
        ctx->r2 = MEM_W(ctx->r17, -0X4);
            goto L_80231E9C;
    }
    // 0x80231DD0: lw          $v0, -0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, -0X4);
    // 0x80231DD4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80231DD8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80231DDC: addu        $at, $at, $t9
    gpr jr_addend_80231DE4 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80231DE0: lw          $t9, 0x5104($at)
    ctx->r25 = ADD32(ctx->r1, 0X5104);
    // 0x80231DE4: jr          $t9
    // 0x80231DE8: nop

    switch (jr_addend_80231DE4 >> 2) {
        case 0: goto L_80231DEC; break;
        case 1: goto L_80231DF4; break;
        case 2: goto L_80231DFC; break;
        case 3: goto L_80231E04; break;
        case 4: goto L_80231E0C; break;
        case 5: goto L_80231E14; break;
        case 6: goto L_80231E1C; break;
        case 7: goto L_80231E24; break;
        case 8: goto L_80231E2C; break;
        case 9: goto L_80231E44; break;
        case 10: goto L_80231E4C; break;
        case 11: goto L_80231E54; break;
        case 12: goto L_80231E9C; break;
        case 13: goto L_80231E5C; break;
        case 14: goto L_80231E64; break;
        case 15: goto L_80231E6C; break;
        case 16: goto L_80231E74; break;
        case 17: goto L_80231E7C; break;
        case 18: goto L_80231E84; break;
        case 19: goto L_80231E8C; break;
        case 20: goto L_80231E34; break;
        case 21: goto L_80231E3C; break;
        case 22: goto L_80231E94; break;
        default: switch_error(__func__, 0x80231DE4, 0x80255104);
    }
    // 0x80231DE8: nop

L_80231DEC:
    // 0x80231DEC: b           L_80231EA4
    // 0x80231DF0: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231DF0: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
L_80231DF4:
    // 0x80231DF4: b           L_80231EA4
    // 0x80231DF8: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231DF8: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
L_80231DFC:
    // 0x80231DFC: b           L_80231EA4
    // 0x80231E00: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E00: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80231E04:
    // 0x80231E04: b           L_80231EA4
    // 0x80231E08: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E08: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
L_80231E0C:
    // 0x80231E0C: b           L_80231EA4
    // 0x80231E10: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E10: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
L_80231E14:
    // 0x80231E14: b           L_80231EA4
    // 0x80231E18: sh          $v0, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E18: sh          $v0, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r2;
L_80231E1C:
    // 0x80231E1C: b           L_80231EA4
    // 0x80231E20: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E20: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
L_80231E24:
    // 0x80231E24: b           L_80231EA4
    // 0x80231E28: sh          $v0, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E28: sh          $v0, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r2;
L_80231E2C:
    // 0x80231E2C: b           L_80231EA4
    // 0x80231E30: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E30: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
L_80231E34:
    // 0x80231E34: b           L_80231EA4
    // 0x80231E38: sh          $v0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E38: sh          $v0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r2;
L_80231E3C:
    // 0x80231E3C: b           L_80231EA4
    // 0x80231E40: sh          $v0, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E40: sh          $v0, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r2;
L_80231E44:
    // 0x80231E44: b           L_80231EA4
    // 0x80231E48: sh          $v0, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E48: sh          $v0, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r2;
L_80231E4C:
    // 0x80231E4C: b           L_80231EA4
    // 0x80231E50: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E50: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
L_80231E54:
    // 0x80231E54: b           L_80231EA4
    // 0x80231E58: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E58: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
L_80231E5C:
    // 0x80231E5C: b           L_80231EA4
    // 0x80231E60: sh          $v0, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E60: sh          $v0, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r2;
L_80231E64:
    // 0x80231E64: b           L_80231EA4
    // 0x80231E68: sh          $v0, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E68: sh          $v0, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r2;
L_80231E6C:
    // 0x80231E6C: b           L_80231EA4
    // 0x80231E70: sh          $v0, 0x42($s0)
    MEM_H(0X42, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E70: sh          $v0, 0x42($s0)
    MEM_H(0X42, ctx->r16) = ctx->r2;
L_80231E74:
    // 0x80231E74: b           L_80231EA4
    // 0x80231E78: sh          $v0, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E78: sh          $v0, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r2;
L_80231E7C:
    // 0x80231E7C: b           L_80231EA4
    // 0x80231E80: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E80: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_80231E84:
    // 0x80231E84: b           L_80231EA4
    // 0x80231E88: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E88: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80231E8C:
    // 0x80231E8C: b           L_80231EA4
    // 0x80231E90: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E90: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
L_80231E94:
    // 0x80231E94: b           L_80231EA4
    // 0x80231E98: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
        goto L_80231EA4;
    // 0x80231E98: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_80231E9C:
    // 0x80231E9C: jal         0x80231A24
    // 0x80231EA0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x80231EA0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
L_80231EA4:
    // 0x80231EA4: addiu       $t0, $s1, 0x3
    ctx->r8 = ADD32(ctx->r17, 0X3);
    // 0x80231EA8: and         $s1, $t0, $s2
    ctx->r17 = ctx->r8 & ctx->r18;
    // 0x80231EAC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x80231EB0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80231EB4: bnel        $a1, $zero, L_80231DBC
    if (ctx->r5 != 0) {
        // 0x80231EB8: addiu       $t8, $s1, 0x3
        ctx->r24 = ADD32(ctx->r17, 0X3);
            goto L_80231DBC;
    }
    goto skip_0;
    // 0x80231EB8: addiu       $t8, $s1, 0x3
    ctx->r24 = ADD32(ctx->r17, 0X3);
    skip_0:
L_80231EBC:
    // 0x80231EBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80231EC0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80231EC4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80231EC8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80231ECC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80231ED0: jr          $ra
    // 0x80231ED4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80231ED4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80223FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223FC4: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80223FC8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80223FCC: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x80223FD0: addiu       $t7, $t7, 0x5130
    ctx->r15 = ADD32(ctx->r15, 0X5130);
    // 0x80223FD4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80223FD8: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80223FDC: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x80223FE0: and         $t9, $t8, $a1
    ctx->r25 = ctx->r24 & ctx->r5;
    // 0x80223FE4: beql        $t9, $zero, L_80224008
    if (ctx->r25 == 0) {
        // 0x80223FE8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80224008;
    }
    goto skip_0;
    // 0x80223FE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80223FEC: lw          $t0, 0x14($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X14);
    // 0x80223FF0: and         $t1, $t0, $a1
    ctx->r9 = ctx->r8 & ctx->r5;
    // 0x80223FF4: bnel        $t1, $zero, L_80224008
    if (ctx->r9 != 0) {
        // 0x80223FF8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80224008;
    }
    goto skip_1;
    // 0x80223FF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x80223FFC: jr          $ra
    // 0x80224000: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80224000: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80224004: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80224008:
    // 0x80224008: jr          $ra
    // 0x8022400C: nop

    return;
    // 0x8022400C: nop

;}
RECOMP_FUNC void func_8024A8A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A8A0: lui         $t6, 0xA460
    ctx->r14 = S32(0XA460 << 16);
    // 0x8024A8A4: lw          $a3, 0x10($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X10);
    // 0x8024A8A8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8024A8AC: andi        $t7, $a3, 0x3
    ctx->r15 = ctx->r7 & 0X3;
    // 0x8024A8B0: beq         $t7, $zero, L_8024A8CC
    if (ctx->r15 == 0) {
        // 0x8024A8B4: nop
    
            goto L_8024A8CC;
    }
    // 0x8024A8B4: nop

L_8024A8B8:
    // 0x8024A8B8: lui         $t8, 0xA460
    ctx->r24 = S32(0XA460 << 16);
    // 0x8024A8BC: lw          $a3, 0x10($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X10);
    // 0x8024A8C0: andi        $t9, $a3, 0x3
    ctx->r25 = ctx->r7 & 0X3;
    // 0x8024A8C4: bne         $t9, $zero, L_8024A8B8
    if (ctx->r25 != 0) {
        // 0x8024A8C8: nop
    
            goto L_8024A8B8;
    }
    // 0x8024A8C8: nop

L_8024A8CC:
    // 0x8024A8CC: lw          $t0, 0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC);
    // 0x8024A8D0: lui         $at, 0xA000
    ctx->r1 = S32(0XA000 << 16);
    // 0x8024A8D4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8024A8D8: or          $t1, $t0, $a1
    ctx->r9 = ctx->r8 | ctx->r5;
    // 0x8024A8DC: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x8024A8E0: sw          $a2, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r6;
    // 0x8024A8E4: jr          $ra
    // 0x8024A8E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8024A8E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80231CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231CC4: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80231CC8: addiu       $v0, $v0, 0xBC0
    ctx->r2 = ADD32(ctx->r2, 0XBC0);
    // 0x80231CCC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80231CD0: addiu       $v1, $zero, 0x64
    ctx->r3 = ADD32(0, 0X64);
    // 0x80231CD4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80231CD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80231CDC: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80231CE0: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x80231CE4: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x80231CE8: addiu       $t7, $zero, 0x7D0
    ctx->r15 = ADD32(0, 0X7D0);
    // 0x80231CEC: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80231CF0: addiu       $t9, $zero, 0x3E8
    ctx->r25 = ADD32(0, 0X3E8);
    // 0x80231CF4: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80231CF8: sh          $t6, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r14;
    // 0x80231CFC: sh          $t7, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r15;
    // 0x80231D00: sh          $v1, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r3;
    // 0x80231D04: sh          $v1, 0x24($v0)
    MEM_H(0X24, ctx->r2) = ctx->r3;
    // 0x80231D08: sh          $a0, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r4;
    // 0x80231D0C: sh          $a1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r5;
    // 0x80231D10: sh          $a2, 0x2A($v0)
    MEM_H(0X2A, ctx->r2) = ctx->r6;
    // 0x80231D14: sh          $a3, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = ctx->r7;
    // 0x80231D18: sh          $a2, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r6;
    // 0x80231D1C: sh          $a0, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r4;
    // 0x80231D20: sh          $a0, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = ctx->r4;
    // 0x80231D24: sh          $a1, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r5;
    // 0x80231D28: sh          $a0, 0x3A($v0)
    MEM_H(0X3A, ctx->r2) = ctx->r4;
    // 0x80231D2C: sh          $t8, 0x3C($v0)
    MEM_H(0X3C, ctx->r2) = ctx->r24;
    // 0x80231D30: sh          $t9, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r25;
    // 0x80231D34: sh          $a1, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r5;
    // 0x80231D38: sb          $a3, 0x4A($v0)
    MEM_B(0X4A, ctx->r2) = ctx->r7;
    // 0x80231D3C: sh          $t0, 0x3E($v0)
    MEM_H(0X3E, ctx->r2) = ctx->r8;
    // 0x80231D40: sh          $t0, 0x42($v0)
    MEM_H(0X42, ctx->r2) = ctx->r8;
    // 0x80231D44: sh          $t0, 0x40($v0)
    MEM_H(0X40, ctx->r2) = ctx->r8;
    // 0x80231D48: sh          $a3, 0x44($v0)
    MEM_H(0X44, ctx->r2) = ctx->r7;
    // 0x80231D4C: sh          $v1, 0x46($v0)
    MEM_H(0X46, ctx->r2) = ctx->r3;
    // 0x80231D50: jr          $ra
    // 0x80231D54: sh          $t1, 0x48($v0)
    MEM_H(0X48, ctx->r2) = ctx->r9;
    return;
    // 0x80231D54: sh          $t1, 0x48($v0)
    MEM_H(0X48, ctx->r2) = ctx->r9;
;}
RECOMP_FUNC void func_802351A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802351A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802351A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802351A8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x802351AC: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x802351B0: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x802351B4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802351B8: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x802351BC: sb          $t0, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r8;
    // 0x802351C0: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x802351C4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802351C8: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x802351CC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802351D0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x802351D4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x802351D8: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x802351DC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x802351E0: jal         0x8023F37C
    // 0x802351E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8023F37C(rdram, ctx);
        goto after_0;
    // 0x802351E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802351E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802351EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802351F0: jr          $ra
    // 0x802351F4: nop

    return;
    // 0x802351F4: nop

;}
