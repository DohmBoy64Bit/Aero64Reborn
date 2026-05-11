#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80222E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222E98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80222E9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80222EA0: jal         0x80222CBC
    // 0x80222EA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80222CBC(rdram, ctx);
        goto after_0;
    // 0x80222EA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80222EA8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80222EAC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80222EB0: beq         $t6, $zero, L_80222EC0
    if (ctx->r14 == 0) {
        // 0x80222EB4: nop
    
            goto L_80222EC0;
    }
    // 0x80222EB4: nop

    // 0x80222EB8: b           L_80222EC0
    // 0x80222EBC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
        goto L_80222EC0;
    // 0x80222EBC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_80222EC0:
    // 0x80222EC0: jal         0x80222E24
    // 0x80222EC4: sb          $a2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r6;
    func_80222E24(rdram, ctx);
        goto after_1;
    // 0x80222EC4: sb          $a2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r6;
    after_1:
    // 0x80222EC8: jal         0x802375F0
    // 0x80222ECC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_802375F0(rdram, ctx);
        goto after_2;
    // 0x80222ECC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80222ED0: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x80222ED4: addiu       $a3, $a3, 0x3B90
    ctx->r7 = ADD32(ctx->r7, 0X3B90);
    // 0x80222ED8: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x80222EDC: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x80222EE0: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x80222EE4: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80222EE8: addiu       $t7, $a0, 0x8
    ctx->r15 = ADD32(ctx->r4, 0X8);
    // 0x80222EEC: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x80222EF0: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x80222EF4: ori         $t1, $t0, 0x40
    ctx->r9 = ctx->r8 | 0X40;
    // 0x80222EF8: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x80222EFC: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80222F00: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80222F04: lhu         $t2, -0x178C($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X178C);
    // 0x80222F08: lui         $t4, 0x8027
    ctx->r12 = S32(0X8027 << 16);
    // 0x80222F0C: addiu       $t4, $t4, 0x3BB0
    ctx->r12 = ADD32(ctx->r12, 0X3BB0);
    // 0x80222F10: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80222F14: addu        $a1, $t3, $t4
    ctx->r5 = ADD32(ctx->r11, ctx->r12);
    // 0x80222F18: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x80222F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80222F20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80222F24: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80222F28: jr          $ra
    // 0x80222F2C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    return;
    // 0x80222F2C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void func_8021EAB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021EAB4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8021EAB8: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x8021EABC: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x8021EAC0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8021EAC4: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8021EAC8: lw          $v0, 0x34($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X34);
    // 0x8021EACC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021EAD0: beq         $t3, $t6, L_8021EB84
    if (ctx->r11 == ctx->r14) {
        // 0x8021EAD4: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_8021EB84;
    }
    // 0x8021EAD4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021EAD8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8021EADC: lh          $t0, 0x0($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X0);
    // 0x8021EAE0: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x8021EAE4: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x8021EAE8: addiu       $a1, $zero, -0x3
    ctx->r5 = ADD32(0, -0X3);
    // 0x8021EAEC: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
L_8021EAF0:
    // 0x8021EAF0: beql        $v0, $t0, L_8021EB04
    if (ctx->r2 == ctx->r8) {
        // 0x8021EAF4: lw          $at, 0x0($t2)
        ctx->r1 = MEM_W(ctx->r10, 0X0);
            goto L_8021EB04;
    }
    goto skip_0;
    // 0x8021EAF4: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    skip_0:
    // 0x8021EAF8: bne         $a1, $t0, L_8021EB34
    if (ctx->r5 != ctx->r8) {
        // 0x8021EAFC: sll         $t4, $t0, 4
        ctx->r12 = S32(ctx->r8 << 4);
            goto L_8021EB34;
    }
    // 0x8021EAFC: sll         $t4, $t0, 4
    ctx->r12 = S32(ctx->r8 << 4);
    // 0x8021EB00: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
L_8021EB04:
    // 0x8021EB04: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x8021EB08: lw          $t8, 0x4($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X4);
    // 0x8021EB0C: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x8021EB10: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x8021EB14: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x8021EB18: lw          $t8, 0xC($t2)
    ctx->r24 = MEM_W(ctx->r10, 0XC);
    // 0x8021EB1C: sw          $zero, 0x8($t1)
    MEM_W(0X8, ctx->r9) = 0;
    // 0x8021EB20: sw          $t8, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r24;
    // 0x8021EB24: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x8021EB28: lh          $t9, 0x0($t2)
    ctx->r25 = MEM_H(ctx->r10, 0X0);
    // 0x8021EB2C: b           L_8021EB70
    // 0x8021EB30: addu        $a3, $a3, $t9
    ctx->r7 = ADD32(ctx->r7, ctx->r25);
        goto L_8021EB70;
    // 0x8021EB30: addu        $a3, $a3, $t9
    ctx->r7 = ADD32(ctx->r7, ctx->r25);
L_8021EB34:
    // 0x8021EB34: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8021EB38: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x8021EB3C: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x8021EB40: lw          $t7, 0x4($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X4);
    // 0x8021EB44: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x8021EB48: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x8021EB4C: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x8021EB50: lw          $t7, 0xC($t5)
    ctx->r15 = MEM_W(ctx->r13, 0XC);
    // 0x8021EB54: sw          $t7, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r15;
    // 0x8021EB58: lh          $t8, 0x0($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X0);
    // 0x8021EB5C: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x8021EB60: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8021EB64: addu        $t4, $t2, $t9
    ctx->r12 = ADD32(ctx->r10, ctx->r25);
    // 0x8021EB68: lh          $t6, 0x0($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X0);
    // 0x8021EB6C: addu        $a3, $a3, $t6
    ctx->r7 = ADD32(ctx->r7, ctx->r14);
L_8021EB70:
    // 0x8021EB70: lh          $t0, 0x2($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X2);
    // 0x8021EB74: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8021EB78: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8021EB7C: bne         $t3, $t0, L_8021EAF0
    if (ctx->r11 != ctx->r8) {
        // 0x8021EB80: addiu       $t1, $t1, 0x10
        ctx->r9 = ADD32(ctx->r9, 0X10);
            goto L_8021EAF0;
    }
    // 0x8021EB80: addiu       $t1, $t1, 0x10
    ctx->r9 = ADD32(ctx->r9, 0X10);
L_8021EB84:
    // 0x8021EB84: sh          $v1, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r3;
    // 0x8021EB88: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x8021EB8C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8021EB90: jr          $ra
    // 0x8021EB94: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x8021EB94: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
;}
RECOMP_FUNC void func_80248D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248D30: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80248D34: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80248D38: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80248D3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80248D40: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x80248D44: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x80248D48: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x80248D4C: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
L_80248D50:
    // 0x80248D50: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80248D54: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80248D58: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80248D5C: jal         0x802374B0
    // 0x80248D60: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    func_802374B0(rdram, ctx);
        goto after_0;
    // 0x80248D60: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    after_0:
    // 0x80248D64: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80248D68: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x80248D6C: beq         $t9, $zero, L_80248F04
    if (ctx->r25 == 0) {
        // 0x80248D70: nop
    
            goto L_80248F04;
    }
    // 0x80248D70: nop

    // 0x80248D74: lbu         $t0, 0x4($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X4);
    // 0x80248D78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80248D7C: bne         $t0, $at, L_80248F04
    if (ctx->r8 != ctx->r1) {
        // 0x80248D80: nop
    
            goto L_80248F04;
    }
    // 0x80248D80: nop

    // 0x80248D84: lw          $t1, 0x14($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X14);
    // 0x80248D88: beq         $t1, $zero, L_80248D98
    if (ctx->r9 == 0) {
        // 0x80248D8C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80248D98;
    }
    // 0x80248D8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80248D90: bne         $t1, $at, L_80248F04
    if (ctx->r9 != ctx->r1) {
        // 0x80248D94: nop
    
            goto L_80248F04;
    }
    // 0x80248D94: nop

L_80248D98:
    // 0x80248D98: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80248D9C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80248DA0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80248DA4: lw          $t3, 0x14($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X14);
    // 0x80248DA8: addiu       $t4, $t3, 0x14
    ctx->r12 = ADD32(ctx->r11, 0X14);
    // 0x80248DAC: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80248DB0: lhu         $t5, 0x6($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X6);
    // 0x80248DB4: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80248DB8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80248DBC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80248DC0: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x80248DC4: addiu       $t8, $t7, 0x18
    ctx->r24 = ADD32(ctx->r15, 0X18);
    // 0x80248DC8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80248DCC: sw          $t0, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r8;
    // 0x80248DD0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80248DD4: lhu         $t1, 0x4($t9)
    ctx->r9 = MEM_HU(ctx->r25, 0X4);
    // 0x80248DD8: beq         $t1, $at, L_80248DF4
    if (ctx->r9 == ctx->r1) {
        // 0x80248DDC: nop
    
            goto L_80248DF4;
    }
    // 0x80248DDC: nop

    // 0x80248DE0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80248DE4: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x80248DE8: lw          $t5, 0xC($t2)
    ctx->r13 = MEM_W(ctx->r10, 0XC);
    // 0x80248DEC: subu        $t6, $t3, $t5
    ctx->r14 = SUB32(ctx->r11, ctx->r13);
    // 0x80248DF0: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
L_80248DF4:
    // 0x80248DF4: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80248DF8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80248DFC: lhu         $t8, 0x4($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X4);
    // 0x80248E00: bne         $t8, $at, L_80248E28
    if (ctx->r24 != ctx->r1) {
        // 0x80248E04: nop
    
            goto L_80248E28;
    }
    // 0x80248E04: nop

    // 0x80248E08: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80248E0C: lw          $t4, 0x14($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X14);
    // 0x80248E10: lw          $t9, 0x14($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X14);
    // 0x80248E14: bne         $t9, $zero, L_80248E28
    if (ctx->r25 != 0) {
        // 0x80248E18: nop
    
            goto L_80248E28;
    }
    // 0x80248E18: nop

    // 0x80248E1C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80248E20: b           L_80248E2C
    // 0x80248E24: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
        goto L_80248E2C;
    // 0x80248E24: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
L_80248E28:
    // 0x80248E28: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80248E2C:
    // 0x80248E2C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80248E30: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80248E34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80248E38: jal         0x802374B0
    // 0x80248E3C: lw          $a0, 0x10($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10);
    func_802374B0(rdram, ctx);
        goto after_1;
    // 0x80248E3C: lw          $a0, 0x10($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10);
    after_1:
    // 0x80248E40: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x80248E44: jal         0x8024A840
    // 0x80248E48: ori         $a0, $a0, 0x401
    ctx->r4 = ctx->r4 | 0X401;
    func_8024A840(rdram, ctx);
        goto after_2;
    // 0x80248E48: ori         $a0, $a0, 0x401
    ctx->r4 = ctx->r4 | 0X401;
    after_2:
    // 0x80248E4C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80248E50: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80248E54: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80248E58: lw          $a2, 0x10($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X10);
    // 0x80248E5C: lui         $a1, 0x500
    ctx->r5 = S32(0X500 << 16);
    // 0x80248E60: ori         $a1, $a1, 0x510
    ctx->r5 = ctx->r5 | 0X510;
    // 0x80248E64: or          $t2, $a2, $at
    ctx->r10 = ctx->r6 | ctx->r1;
    // 0x80248E68: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x80248E6C: jal         0x8024A8A0
    // 0x80248E70: lw          $a0, 0x14($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X14);
    func_8024A8A0(rdram, ctx);
        goto after_3;
    // 0x80248E70: lw          $a0, 0x14($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X14);
    after_3:
L_80248E74:
    // 0x80248E74: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80248E78: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80248E7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80248E80: jal         0x802374B0
    // 0x80248E84: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    func_802374B0(rdram, ctx);
        goto after_4;
    // 0x80248E84: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    after_4:
    // 0x80248E88: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80248E8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80248E90: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    // 0x80248E94: jal         0x80236B80
    // 0x80248E98: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80236B80(rdram, ctx);
        goto after_5;
    // 0x80248E98: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_5:
    // 0x80248E9C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80248EA0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80248EA4: bne         $t0, $at, L_80248EC8
    if (ctx->r8 != ctx->r1) {
        // 0x80248EA8: nop
    
            goto L_80248EC8;
    }
    // 0x80248EA8: nop

    // 0x80248EAC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80248EB0: lw          $t9, 0x14($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X14);
    // 0x80248EB4: lw          $t1, 0x2C($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X2C);
    // 0x80248EB8: bne         $t1, $zero, L_80248EC8
    if (ctx->r9 != 0) {
        // 0x80248EBC: nop
    
            goto L_80248EC8;
    }
    // 0x80248EBC: nop

    // 0x80248EC0: b           L_80248E74
    // 0x80248EC4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
        goto L_80248E74;
    // 0x80248EC4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80248EC8:
    // 0x80248EC8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80248ECC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80248ED0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80248ED4: jal         0x80236B80
    // 0x80248ED8: lw          $a0, 0x10($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10);
    func_80236B80(rdram, ctx);
        goto after_6;
    // 0x80248ED8: lw          $a0, 0x10($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10);
    after_6:
    // 0x80248EDC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80248EE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80248EE4: lw          $t6, 0x14($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X14);
    // 0x80248EE8: lhu         $t2, 0x1A($t6)
    ctx->r10 = MEM_HU(ctx->r14, 0X1A);
    // 0x80248EEC: bne         $t2, $at, L_80248D50
    if (ctx->r10 != ctx->r1) {
        // 0x80248EF0: nop
    
            goto L_80248D50;
    }
    // 0x80248EF0: nop

    // 0x80248EF4: jal         0x8024A8F0
    // 0x80248EF8: nop

    func_8024A8F0(rdram, ctx);
        goto after_7;
    // 0x80248EF8: nop

    after_7:
    // 0x80248EFC: b           L_80248D50
    // 0x80248F00: nop

        goto L_80248D50;
    // 0x80248F00: nop

L_80248F04:
    // 0x80248F04: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80248F08: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x80248F0C: addiu       $t0, $t8, -0xA
    ctx->r8 = ADD32(ctx->r24, -0XA);
    // 0x80248F10: sltiu       $at, $t0, 0x7
    ctx->r1 = ctx->r8 < 0X7 ? 1 : 0;
    // 0x80248F14: beq         $at, $zero, L_80249060
    if (ctx->r1 == 0) {
        // 0x80248F18: nop
    
            goto L_80249060;
    }
    // 0x80248F18: nop

    // 0x80248F1C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80248F20: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80248F24: addu        $at, $at, $t0
    gpr jr_addend_80248F2C = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80248F28: lw          $t0, 0x5A50($at)
    ctx->r8 = ADD32(ctx->r1, 0X5A50);
    // 0x80248F2C: jr          $t0
    // 0x80248F30: nop

    switch (jr_addend_80248F2C >> 2) {
        case 0: goto L_80249040; break;
        case 1: goto L_80248F34; break;
        case 2: goto L_80248F74; break;
        case 3: goto L_80249060; break;
        case 4: goto L_80249060; break;
        case 5: goto L_80248FB0; break;
        case 6: goto L_80248FF8; break;
        default: switch_error(__func__, 0x80248F2C, 0x80255A50);
    }
    // 0x80248F30: nop

L_80248F34:
    // 0x80248F34: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80248F38: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80248F3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80248F40: jal         0x802374B0
    // 0x80248F44: lw          $a0, 0x10($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X10);
    func_802374B0(rdram, ctx);
        goto after_8;
    // 0x80248F44: lw          $a0, 0x10($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X10);
    after_8:
    // 0x80248F48: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80248F4C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80248F50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80248F54: lw          $a1, 0xC($t9)
    ctx->r5 = MEM_W(ctx->r25, 0XC);
    // 0x80248F58: lw          $a2, 0x8($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X8);
    // 0x80248F5C: lw          $a3, 0x10($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X10);
    // 0x80248F60: lw          $t9, 0x14($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X14);
    // 0x80248F64: jalr        $t9
    // 0x80248F68: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x80248F68: nop

    after_9:
    // 0x80248F6C: b           L_80249068
    // 0x80248F70: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
        goto L_80249068;
    // 0x80248F70: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
L_80248F74:
    // 0x80248F74: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80248F78: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80248F7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80248F80: jal         0x802374B0
    // 0x80248F84: lw          $a0, 0x10($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10);
    func_802374B0(rdram, ctx);
        goto after_10;
    // 0x80248F84: lw          $a0, 0x10($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10);
    after_10:
    // 0x80248F88: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80248F8C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80248F90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80248F94: lw          $t9, 0x14($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X14);
    // 0x80248F98: lw          $a1, 0xC($t5)
    ctx->r5 = MEM_W(ctx->r13, 0XC);
    // 0x80248F9C: lw          $a2, 0x8($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X8);
    // 0x80248FA0: jalr        $t9
    // 0x80248FA4: lw          $a3, 0x10($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x80248FA4: lw          $a3, 0x10($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X10);
    after_11:
    // 0x80248FA8: b           L_80249068
    // 0x80248FAC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
        goto L_80249068;
    // 0x80248FAC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
L_80248FB0:
    // 0x80248FB0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80248FB4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80248FB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80248FBC: jal         0x802374B0
    // 0x80248FC0: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    func_802374B0(rdram, ctx);
        goto after_12;
    // 0x80248FC0: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    after_12:
    // 0x80248FC4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80248FC8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80248FCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80248FD0: lw          $t8, 0x10($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X10);
    // 0x80248FD4: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    // 0x80248FD8: lw          $a2, 0xC($t7)
    ctx->r6 = MEM_W(ctx->r15, 0XC);
    // 0x80248FDC: lw          $a3, 0x8($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X8);
    // 0x80248FE0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80248FE4: lw          $t9, 0x18($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X18);
    // 0x80248FE8: jalr        $t9
    // 0x80248FEC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x80248FEC: nop

    after_13:
    // 0x80248FF0: b           L_80249068
    // 0x80248FF4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
        goto L_80249068;
    // 0x80248FF4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
L_80248FF8:
    // 0x80248FF8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80248FFC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80249000: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80249004: jal         0x802374B0
    // 0x80249008: lw          $a0, 0x10($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X10);
    func_802374B0(rdram, ctx);
        goto after_14;
    // 0x80249008: lw          $a0, 0x10($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X10);
    after_14:
    // 0x8024900C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80249010: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80249014: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80249018: lw          $t3, 0x10($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X10);
    // 0x8024901C: lw          $a0, 0x14($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X14);
    // 0x80249020: lw          $a2, 0xC($t1)
    ctx->r6 = MEM_W(ctx->r9, 0XC);
    // 0x80249024: lw          $a3, 0x8($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X8);
    // 0x80249028: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8024902C: lw          $t9, 0x18($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X18);
    // 0x80249030: jalr        $t9
    // 0x80249034: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x80249034: nop

    after_15:
    // 0x80249038: b           L_80249068
    // 0x8024903C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
        goto L_80249068;
    // 0x8024903C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
L_80249040:
    // 0x80249040: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80249044: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80249048: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x8024904C: jal         0x80236B80
    // 0x80249050: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80236B80(rdram, ctx);
        goto after_16;
    // 0x80249050: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_16:
    // 0x80249054: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80249058: b           L_80249068
    // 0x8024905C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
        goto L_80249068;
    // 0x8024905C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
L_80249060:
    // 0x80249060: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80249064: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
L_80249068:
    // 0x80249068: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8024906C: bne         $t8, $zero, L_80248D50
    if (ctx->r24 != 0) {
        // 0x80249070: nop
    
            goto L_80248D50;
    }
    // 0x80249070: nop

    // 0x80249074: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80249078: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8024907C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80249080: jal         0x802374B0
    // 0x80249084: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    func_802374B0(rdram, ctx);
        goto after_17;
    // 0x80249084: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    after_17:
    // 0x80249088: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8024908C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80249090: lw          $a0, 0x4($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X4);
    // 0x80249094: jal         0x80236B80
    // 0x80249098: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    func_80236B80(rdram, ctx);
        goto after_18;
    // 0x80249098: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_18:
    // 0x8024909C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x802490A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802490A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802490A8: jal         0x80236B80
    // 0x802490AC: lw          $a0, 0x10($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X10);
    func_80236B80(rdram, ctx);
        goto after_19;
    // 0x802490AC: lw          $a0, 0x10($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X10);
    after_19:
    // 0x802490B0: b           L_80248D50
    // 0x802490B4: nop

        goto L_80248D50;
    // 0x802490B4: nop

    // 0x802490B8: nop

    // 0x802490BC: nop

    // 0x802490C0: nop

    // 0x802490C4: nop

    // 0x802490C8: nop

    // 0x802490CC: nop

    // 0x802490D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802490D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802490D8: jr          $ra
    // 0x802490DC: nop

    return;
    // 0x802490DC: nop

;}
RECOMP_FUNC void func_80244F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80244F84: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80244F88: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80244F8C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80244F90: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80244F94: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80244F98: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80244F9C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80244FA0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80244FA4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80244FA8: lbu         $t6, 0x65($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X65);
    // 0x80244FAC: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80244FB0: beq         $t6, $zero, L_80244FD0
    if (ctx->r14 == 0) {
        // 0x80244FB4: or          $s3, $a0, $zero
        ctx->r19 = ctx->r4 | 0;
            goto L_80244FD0;
    }
    // 0x80244FB4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80244FB8: jal         0x802456A0
    // 0x80244FBC: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    func_802456A0(rdram, ctx);
        goto after_0;
    // 0x80244FBC: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    after_0:
    // 0x80244FC0: beq         $v0, $zero, L_80244FD4
    if (ctx->r2 == 0) {
        // 0x80244FC4: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_80244FD4;
    }
    // 0x80244FC4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80244FC8: b           L_802450C4
    // 0x80244FCC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_802450C4;
    // 0x80244FCC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244FD0:
    // 0x80244FD0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_80244FD4:
    // 0x80244FD4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80244FD8: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80244FDC: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80244FE0: sh          $t7, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r15;
    // 0x80244FE4: sh          $t8, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r24;
    // 0x80244FE8: sh          $t9, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r25;
    // 0x80244FEC: sh          $t0, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r8;
    // 0x80244FF0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80244FF4: addiu       $s0, $sp, 0x5A
    ctx->r16 = ADD32(ctx->r29, 0X5A);
    // 0x80244FF8: addiu       $s6, $sp, 0x50
    ctx->r22 = ADD32(ctx->r29, 0X50);
    // 0x80244FFC: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x80245000: addiu       $s4, $sp, 0x52
    ctx->r20 = ADD32(ctx->r29, 0X52);
L_80245004:
    // 0x80245004: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x80245008: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x8024500C: lhu         $a2, 0x0($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X0);
    // 0x80245010: jal         0x80245710
    // 0x80245014: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_80245710(rdram, ctx);
        goto after_1;
    // 0x80245014: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_1:
    // 0x80245018: beq         $v0, $zero, L_80245028
    if (ctx->r2 == 0) {
        // 0x8024501C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80245028;
    }
    // 0x8024501C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80245020: b           L_802450C4
    // 0x80245024: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_802450C4;
    // 0x80245024: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80245028:
    // 0x80245028: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8024502C: jal         0x80244B3C
    // 0x80245030: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_80244B3C(rdram, ctx);
        goto after_2;
    // 0x80245030: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_2:
    // 0x80245034: lhu         $t1, 0x52($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X52);
    // 0x80245038: lhu         $t2, 0x1C($s2)
    ctx->r10 = MEM_HU(ctx->r18, 0X1C);
    // 0x8024503C: lhu         $t3, 0x50($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X50);
    // 0x80245040: bne         $t1, $t2, L_80245058
    if (ctx->r9 != ctx->r10) {
        // 0x80245044: nop
    
            goto L_80245058;
    }
    // 0x80245044: nop

    // 0x80245048: lhu         $t4, 0x1E($s2)
    ctx->r12 = MEM_HU(ctx->r18, 0X1E);
    // 0x8024504C: nop

    // 0x80245050: beq         $t3, $t4, L_80245064
    if (ctx->r11 == ctx->r12) {
        // 0x80245054: nop
    
            goto L_80245064;
    }
    // 0x80245054: nop

L_80245058:
    // 0x80245058: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8024505C: bne         $s1, $s5, L_80245004
    if (ctx->r17 != ctx->r21) {
        // 0x80245060: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_80245004;
    }
    // 0x80245060: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_80245064:
    // 0x80245064: bne         $s1, $s5, L_80245074
    if (ctx->r17 != ctx->r21) {
        // 0x80245068: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80245074;
    }
    // 0x80245068: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8024506C: b           L_802450C0
    // 0x80245070: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_802450C0;
    // 0x80245070: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80245074:
    // 0x80245074: addiu       $s4, $sp, 0x58
    ctx->r20 = ADD32(ctx->r29, 0X58);
L_80245078:
    // 0x80245078: beq         $s0, $s1, L_802450B0
    if (ctx->r16 == ctx->r17) {
        // 0x8024507C: sll         $t5, $s0, 1
        ctx->r13 = S32(ctx->r16 << 1);
            goto L_802450B0;
    }
    // 0x8024507C: sll         $t5, $s0, 1
    ctx->r13 = S32(ctx->r16 << 1);
    // 0x80245080: addu        $t6, $s4, $t5
    ctx->r14 = ADD32(ctx->r20, ctx->r13);
    // 0x80245084: lhu         $a2, 0x0($t6)
    ctx->r6 = MEM_HU(ctx->r14, 0X0);
    // 0x80245088: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x8024508C: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x80245090: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80245094: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80245098: jal         0x80246660
    // 0x8024509C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_80246660(rdram, ctx);
        goto after_3;
    // 0x8024509C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_3:
    // 0x802450A0: beq         $v0, $zero, L_802450B4
    if (ctx->r2 == 0) {
        // 0x802450A4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_802450B4;
    }
    // 0x802450A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802450A8: b           L_802450C4
    // 0x802450AC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_802450C4;
    // 0x802450AC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_802450B0:
    // 0x802450B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802450B4:
    // 0x802450B4: bne         $s0, $s5, L_80245078
    if (ctx->r16 != ctx->r21) {
        // 0x802450B8: nop
    
            goto L_80245078;
    }
    // 0x802450B8: nop

    // 0x802450BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802450C0:
    // 0x802450C0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_802450C4:
    // 0x802450C4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802450C8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802450CC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802450D0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802450D4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x802450D8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x802450DC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x802450E0: jr          $ra
    // 0x802450E4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x802450E4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80230F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80230F68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230F6C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80230F70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230F74: beq         $t6, $zero, L_80230F9C
    if (ctx->r14 == 0) {
        // 0x80230F78: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80230F9C;
    }
    // 0x80230F78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80230F7C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80230F80: beq         $t6, $at, L_80230FB8
    if (ctx->r14 == ctx->r1) {
        // 0x80230F84: lui         $a0, 0x8028
        ctx->r4 = S32(0X8028 << 16);
            goto L_80230FB8;
    }
    // 0x80230F84: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80230F88: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80230F8C: beq         $t6, $at, L_80230FD0
    if (ctx->r14 == ctx->r1) {
        // 0x80230F90: lui         $a0, 0x8028
        ctx->r4 = S32(0X8028 << 16);
            goto L_80230FD0;
    }
    // 0x80230F90: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80230F94: b           L_80230FEC
    // 0x80230F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80230FEC;
    // 0x80230F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80230F9C:
    // 0x80230F9C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80230FA0: addiu       $a0, $a0, 0xC30
    ctx->r4 = ADD32(ctx->r4, 0XC30);
    // 0x80230FA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80230FA8: jal         0x802374B0
    // 0x80230FAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_0;
    // 0x80230FAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80230FB0: b           L_80230FEC
    // 0x80230FB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80230FEC;
    // 0x80230FB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80230FB8:
    // 0x80230FB8: addiu       $a0, $a0, 0x14C0
    ctx->r4 = ADD32(ctx->r4, 0X14C0);
    // 0x80230FBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80230FC0: jal         0x802374B0
    // 0x80230FC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_1;
    // 0x80230FC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80230FC8: b           L_80230FEC
    // 0x80230FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80230FEC;
    // 0x80230FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80230FD0:
    // 0x80230FD0: addiu       $a0, $a0, 0x1500
    ctx->r4 = ADD32(ctx->r4, 0X1500);
    // 0x80230FD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80230FD8: jal         0x802374B0
    // 0x80230FDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_2;
    // 0x80230FDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80230FE0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80230FE4: sw          $zero, -0x1798($at)
    MEM_W(-0X1798, ctx->r1) = 0;
    // 0x80230FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80230FEC:
    // 0x80230FEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80230FF0: jr          $ra
    // 0x80230FF4: nop

    return;
    // 0x80230FF4: nop

;}
RECOMP_FUNC void func_802350E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802350E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802350E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802350E8: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x802350EC: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x802350F0: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x802350F4: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x802350F8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802350FC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80235100: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80235104: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80235108: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8023510C: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80235110: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80235114: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80235118: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023511C: jal         0x8023F37C
    // 0x80235120: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    func_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80235120: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x80235124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235128: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8023512C: jr          $ra
    // 0x80235130: nop

    return;
    // 0x80235130: nop

;}
RECOMP_FUNC void func_802465B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802465B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802465B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802465B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802465BC: jal         0x8024A710
    // 0x802465C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8024A710(rdram, ctx);
        goto after_0;
    // 0x802465C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802465C4: beq         $v0, $zero, L_802465D4
    if (ctx->r2 == 0) {
        // 0x802465C8: nop
    
            goto L_802465D4;
    }
    // 0x802465C8: nop

    // 0x802465CC: b           L_8024664C
    // 0x802465D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8024664C;
    // 0x802465D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_802465D4:
    // 0x802465D4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x802465D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802465DC: bne         $t6, $at, L_802465F0
    if (ctx->r14 != ctx->r1) {
        // 0x802465E0: nop
    
            goto L_802465F0;
    }
    // 0x802465E0: nop

    // 0x802465E4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802465E8: jal         0x8023CE80
    // 0x802465EC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8023CE80(rdram, ctx);
        goto after_1;
    // 0x802465EC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
L_802465F0:
    // 0x802465F0: jal         0x802375F0
    // 0x802465F4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_802375F0(rdram, ctx);
        goto after_2;
    // 0x802465F4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x802465F8: lui         $t7, 0xA480
    ctx->r15 = S32(0XA480 << 16);
    // 0x802465FC: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x80246600: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80246604: bne         $t8, $zero, L_80246620
    if (ctx->r24 != 0) {
        // 0x80246608: nop
    
            goto L_80246620;
    }
    // 0x80246608: nop

    // 0x8024660C: lui         $t9, 0x1FC0
    ctx->r25 = S32(0X1FC0 << 16);
    // 0x80246610: ori         $t9, $t9, 0x7C0
    ctx->r25 = ctx->r25 | 0X7C0;
    // 0x80246614: lui         $t0, 0xA480
    ctx->r8 = S32(0XA480 << 16);
    // 0x80246618: b           L_80246630
    // 0x8024661C: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
        goto L_80246630;
    // 0x8024661C: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
L_80246620:
    // 0x80246620: lui         $t1, 0x1FC0
    ctx->r9 = S32(0X1FC0 << 16);
    // 0x80246624: ori         $t1, $t1, 0x7C0
    ctx->r9 = ctx->r9 | 0X7C0;
    // 0x80246628: lui         $t2, 0xA480
    ctx->r10 = S32(0XA480 << 16);
    // 0x8024662C: sw          $t1, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r9;
L_80246630:
    // 0x80246630: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80246634: bne         $t3, $zero, L_80246648
    if (ctx->r11 != 0) {
        // 0x80246638: nop
    
            goto L_80246648;
    }
    // 0x80246638: nop

    // 0x8024663C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80246640: jal         0x8023F020
    // 0x80246644: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8023F020(rdram, ctx);
        goto after_3;
    // 0x80246644: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_3:
L_80246648:
    // 0x80246648: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024664C:
    // 0x8024664C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80246650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80246654: jr          $ra
    // 0x80246658: nop

    return;
    // 0x80246658: nop

;}
RECOMP_FUNC void func_8023D0EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D0EC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8023D0F0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8023D0F4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023D0F8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023D0FC: ld          $t7, 0x8($sp)
    ctx->r15 = LD(ctx->r29, 0X8);
    // 0x8023D100: ld          $t6, 0x0($sp)
    ctx->r14 = LD(ctx->r29, 0X0);
    // 0x8023D104: ddivu       $zero, $t6, $t7
    DDIVU(U64(ctx->r14), U64(ctx->r15), &lo, &hi);
    // 0x8023D108: bne         $t7, $zero, L_8023D114
    if (ctx->r15 != 0) {
        // 0x8023D10C: nop
    
            goto L_8023D114;
    }
    // 0x8023D10C: nop

    // 0x8023D110: break       7
    do_break(2149830928);
L_8023D114:
    // 0x8023D114: mfhi        $v0
    ctx->r2 = hi;
    // 0x8023D118: dsll32      $v1, $v0, 0
    ctx->r3 = ctx->r2 << (0 + 32);
    // 0x8023D11C: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x8023D120: jr          $ra
    // 0x8023D124: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x8023D124: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void func_80215AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80215AA8: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x80215AAC: lhu         $t1, 0x106($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X106);
    // 0x80215AB0: sw          $a3, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r7;
    // 0x80215AB4: lw          $a3, 0x100($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X100);
    // 0x80215AB8: lhu         $t6, 0x10A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X10A);
    // 0x80215ABC: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80215AC0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80215AC4: swc1        $f12, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f12.u32l;
    // 0x80215AC8: swc1        $f14, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f14.u32l;
    // 0x80215ACC: sw          $a2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r6;
    // 0x80215AD0: addu        $v0, $a3, $t2
    ctx->r2 = ADD32(ctx->r7, ctx->r10);
    // 0x80215AD4: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80215AD8: lh          $t3, 0x0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X0);
    // 0x80215ADC: addu        $v1, $a3, $t7
    ctx->r3 = ADD32(ctx->r7, ctx->r15);
    // 0x80215AE0: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x80215AE4: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80215AE8: lh          $t4, 0x2($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X2);
    // 0x80215AEC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80215AF0: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80215AF4: lh          $t5, 0x4($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X4);
    // 0x80215AF8: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80215AFC: lhu         $t1, 0x10E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X10E);
    // 0x80215B00: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80215B04: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80215B08: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80215B0C: addu        $a0, $a3, $t2
    ctx->r4 = ADD32(ctx->r7, ctx->r10);
    // 0x80215B10: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80215B14: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80215B18: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x80215B1C: lh          $t9, 0x2($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2);
    // 0x80215B20: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80215B24: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80215B28: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80215B2C: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    // 0x80215B30: lh          $t0, 0x4($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X4);
    // 0x80215B34: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80215B38: nop

    // 0x80215B3C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80215B40: swc1        $f10, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f10.u32l;
    // 0x80215B44: lh          $t3, 0x0($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X0);
    // 0x80215B48: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80215B4C: nop

    // 0x80215B50: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80215B54: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
    // 0x80215B58: lh          $t4, 0x2($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X2);
    // 0x80215B5C: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80215B60: nop

    // 0x80215B64: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80215B68: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80215B6C: swc1        $f10, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f10.u32l;
    // 0x80215B70: lh          $t5, 0x4($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X4);
    // 0x80215B74: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80215B78: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
    // 0x80215B7C: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x80215B80: c.eq.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl == ctx->f10.fl;
    // 0x80215B84: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    // 0x80215B88: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80215B8C: swc1        $f2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f2.u32l;
    // 0x80215B90: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80215B94: bc1t        L_80215C0C
    if (c1cs) {
        // 0x80215B98: swc1        $f8, 0xAC($sp)
        MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
            goto L_80215C0C;
    }
    // 0x80215B98: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    // 0x80215B9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80215BA0: lwc1        $f8, 0xC0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80215BA4: div.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80215BA8: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80215BAC: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80215BB0: nop

    // 0x80215BB4: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80215BB8: nop

    // 0x80215BBC: mul.s       $f18, $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80215BC0: swc1        $f2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f2.u32l;
    // 0x80215BC4: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80215BC8: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80215BCC: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    // 0x80215BD0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80215BD4: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80215BD8: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
    // 0x80215BDC: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x80215BE0: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80215BE4: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80215BE8: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x80215BEC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80215BF0: lwc1        $f4, 0xAC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80215BF4: swc1        $f10, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f10.u32l;
    // 0x80215BF8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80215BFC: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    // 0x80215C00: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80215C04: swc1        $f10, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f10.u32l;
    // 0x80215C08: swc1        $f6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f6.u32l;
L_80215C0C:
    // 0x80215C0C: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80215C10: lwc1        $f4, 0xF4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x80215C14: lwc1        $f12, 0xEC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80215C18: lwc1        $f0, 0xF0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x80215C1C: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x80215C20: lwc1        $f6, 0xF8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x80215C24: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    // 0x80215C28: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x80215C2C: bc1f        L_80215C40
    if (!c1cs) {
        // 0x80215C30: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_80215C40;
    }
    // 0x80215C30: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80215C34: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80215C38: b           L_80215C44
    // 0x80215C3C: mov.s       $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = ctx->f4.fl;
        goto L_80215C44;
    // 0x80215C3C: mov.s       $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = ctx->f4.fl;
L_80215C40:
    // 0x80215C40: lwc1        $f18, 0xF4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF4);
L_80215C44:
    // 0x80215C44: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80215C48: lwc1        $f10, 0xFC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x80215C4C: lwc1        $f4, 0xF0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x80215C50: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80215C54: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80215C58: bc1fl       L_80215C6C
    if (!c1cs) {
        // 0x80215C5C: lwc1        $f14, 0xF8($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_80215C6C;
    }
    goto skip_0;
    // 0x80215C5C: lwc1        $f14, 0xF8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XF8);
    skip_0:
    // 0x80215C60: b           L_80215C6C
    // 0x80215C64: mov.s       $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = ctx->f6.fl;
        goto L_80215C6C;
    // 0x80215C64: mov.s       $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = ctx->f6.fl;
    // 0x80215C68: lwc1        $f14, 0xF8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XF8);
L_80215C6C:
    // 0x80215C6C: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80215C70: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80215C74: bc1fl       L_80215C88
    if (!c1cs) {
        // 0x80215C78: lwc1        $f2, 0xFC($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0XFC);
            goto L_80215C88;
    }
    goto skip_1;
    // 0x80215C78: lwc1        $f2, 0xFC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XFC);
    skip_1:
    // 0x80215C7C: b           L_80215C88
    // 0x80215C80: mov.s       $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = ctx->f10.fl;
        goto L_80215C88;
    // 0x80215C80: mov.s       $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = ctx->f10.fl;
    // 0x80215C84: lwc1        $f2, 0xFC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XFC);
L_80215C88:
    // 0x80215C88: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80215C8C: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80215C90: bc1fl       L_80215CBC
    if (!c1cs) {
        // 0x80215C94: c.lt.s      $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
            goto L_80215CBC;
    }
    goto skip_2;
    // 0x80215C94: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    skip_2:
    // 0x80215C98: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80215C9C: lwc1        $f4, 0xAC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80215CA0: bc1fl       L_80215CBC
    if (!c1cs) {
        // 0x80215CA4: c.lt.s      $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
            goto L_80215CBC;
    }
    goto skip_3;
    // 0x80215CA4: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    skip_3:
    // 0x80215CA8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80215CAC: nop

    // 0x80215CB0: bc1t        L_80215DBC
    if (c1cs) {
        // 0x80215CB4: nop
    
            goto L_80215DBC;
    }
    // 0x80215CB4: nop

    // 0x80215CB8: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
L_80215CBC:
    // 0x80215CBC: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80215CC0: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80215CC4: bc1fl       L_80215CF0
    if (!c1cs) {
        // 0x80215CC8: c.lt.s      $f4, $f12
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
            goto L_80215CF0;
    }
    goto skip_4;
    // 0x80215CC8: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    skip_4:
    // 0x80215CCC: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x80215CD0: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80215CD4: bc1fl       L_80215CF0
    if (!c1cs) {
        // 0x80215CD8: c.lt.s      $f4, $f12
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
            goto L_80215CF0;
    }
    goto skip_5;
    // 0x80215CD8: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    skip_5:
    // 0x80215CDC: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x80215CE0: nop

    // 0x80215CE4: bc1t        L_80215DBC
    if (c1cs) {
        // 0x80215CE8: nop
    
            goto L_80215DBC;
    }
    // 0x80215CE8: nop

    // 0x80215CEC: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
L_80215CF0:
    // 0x80215CF0: lwc1        $f10, 0xBC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80215CF4: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80215CF8: bc1fl       L_80215D24
    if (!c1cs) {
        // 0x80215CFC: c.lt.s      $f14, $f6
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
            goto L_80215D24;
    }
    goto skip_6;
    // 0x80215CFC: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    skip_6:
    // 0x80215D00: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x80215D04: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80215D08: bc1fl       L_80215D24
    if (!c1cs) {
        // 0x80215D0C: c.lt.s      $f14, $f6
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
            goto L_80215D24;
    }
    goto skip_7;
    // 0x80215D0C: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    skip_7:
    // 0x80215D10: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x80215D14: nop

    // 0x80215D18: bc1t        L_80215DBC
    if (c1cs) {
        // 0x80215D1C: nop
    
            goto L_80215DBC;
    }
    // 0x80215D1C: nop

    // 0x80215D20: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
L_80215D24:
    // 0x80215D24: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80215D28: lwc1        $f0, 0xCC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80215D2C: bc1fl       L_80215D58
    if (!c1cs) {
        // 0x80215D30: c.lt.s      $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
            goto L_80215D58;
    }
    goto skip_8;
    // 0x80215D30: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    skip_8:
    // 0x80215D34: c.lt.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl < ctx->f4.fl;
    // 0x80215D38: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80215D3C: bc1fl       L_80215D58
    if (!c1cs) {
        // 0x80215D40: c.lt.s      $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
            goto L_80215D58;
    }
    goto skip_9;
    // 0x80215D40: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    skip_9:
    // 0x80215D44: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x80215D48: nop

    // 0x80215D4C: bc1t        L_80215DBC
    if (c1cs) {
        // 0x80215D50: nop
    
            goto L_80215DBC;
    }
    // 0x80215D50: nop

    // 0x80215D54: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
L_80215D58:
    // 0x80215D58: lwc1        $f2, 0xC0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80215D5C: bc1fl       L_80215D88
    if (!c1cs) {
        // 0x80215D60: c.lt.s      $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
            goto L_80215D88;
    }
    goto skip_10;
    // 0x80215D60: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    skip_10:
    // 0x80215D64: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x80215D68: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80215D6C: bc1fl       L_80215D88
    if (!c1cs) {
        // 0x80215D70: c.lt.s      $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
            goto L_80215D88;
    }
    goto skip_11;
    // 0x80215D70: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    skip_11:
    // 0x80215D74: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x80215D78: nop

    // 0x80215D7C: bc1t        L_80215DBC
    if (c1cs) {
        // 0x80215D80: nop
    
            goto L_80215DBC;
    }
    // 0x80215D80: nop

    // 0x80215D84: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
L_80215D88:
    // 0x80215D88: lwc1        $f2, 0xC0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80215D8C: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80215D90: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x80215D94: bc1fl       L_80215DC8
    if (!c1cs) {
        // 0x80215D98: sub.s       $f18, $f2, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_80215DC8;
    }
    goto skip_12;
    // 0x80215D98: sub.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
    skip_12:
    // 0x80215D9C: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x80215DA0: nop

    // 0x80215DA4: bc1fl       L_80215DC8
    if (!c1cs) {
        // 0x80215DA8: sub.s       $f18, $f2, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_80215DC8;
    }
    goto skip_13;
    // 0x80215DA8: sub.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
    skip_13:
    // 0x80215DAC: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x80215DB0: nop

    // 0x80215DB4: bc1fl       L_80215DC8
    if (!c1cs) {
        // 0x80215DB8: sub.s       $f18, $f2, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_80215DC8;
    }
    goto skip_14;
    // 0x80215DB8: sub.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
    skip_14:
L_80215DBC:
    // 0x80215DBC: b           L_802160DC
    // 0x80215DC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802160DC;
    // 0x80215DC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80215DC4: sub.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
L_80215DC8:
    // 0x80215DC8: lwc1        $f16, 0xC4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80215DCC: lwc1        $f14, 0xC8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80215DD0: sub.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80215DD4: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80215DD8: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80215DDC: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80215DE0: sub.s       $f8, $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x80215DE4: swc1        $f18, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f18.u32l;
    // 0x80215DE8: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80215DEC: sub.s       $f14, $f6, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x80215DF0: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x80215DF4: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    // 0x80215DF8: sub.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x80215DFC: swc1        $f14, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f14.u32l;
    // 0x80215E00: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    // 0x80215E04: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x80215E08: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x80215E0C: addiu       $a2, $sp, 0x94
    ctx->r6 = ADD32(ctx->r29, 0X94);
    // 0x80215E10: jal         0x80234C78
    // 0x80215E14: swc1        $f16, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
    func_80234C78(rdram, ctx);
        goto after_0;
    // 0x80215E14: swc1        $f16, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x80215E18: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x80215E1C: jal         0x80234D30
    // 0x80215E20: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_80234D30(rdram, ctx);
        goto after_1;
    // 0x80215E20: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_1:
    // 0x80215E24: lwc1        $f8, 0xCC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80215E28: lwc1        $f6, 0xE8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80215E2C: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80215E30: lwc1        $f0, 0x90($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80215E34: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80215E38: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x80215E3C: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80215E40: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x80215E44: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80215E48: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80215E4C: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80215E50: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x80215E54: sub.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80215E58: lwc1        $f6, 0xF0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x80215E5C: mul.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80215E60: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80215E64: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80215E68: sub.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80215E6C: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80215E70: add.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80215E74: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80215E78: lwc1        $f8, 0xF4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x80215E7C: swc1        $f14, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f14.u32l;
    // 0x80215E80: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80215E84: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80215E88: lwc1        $f8, 0xF8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x80215E8C: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80215E90: lwc1        $f8, 0xFC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x80215E94: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80215E98: sub.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80215E9C: mul.s       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x80215EA0: nop

    // 0x80215EA4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80215EA8: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    // 0x80215EAC: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80215EB0: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80215EB4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80215EB8: add.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80215EBC: c.eq.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl == ctx->f2.fl;
    // 0x80215EC0: swc1        $f2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f2.u32l;
    // 0x80215EC4: bc1t        L_80215EE0
    if (c1cs) {
        // 0x80215EC8: nop
    
            goto L_80215EE0;
    }
    // 0x80215EC8: nop

    // 0x80215ECC: div.s       $f12, $f14, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f2.fl);
    // 0x80215ED0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80215ED4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80215ED8: b           L_80215EE8
    // 0x80215EDC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_80215EE8;
    // 0x80215EDC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_80215EE0:
    // 0x80215EE0: b           L_802160DC
    // 0x80215EE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802160DC;
    // 0x80215EE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80215EE8:
    // 0x80215EE8: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80215EEC: nop

    // 0x80215EF0: bc1t        L_80215F10
    if (c1cs) {
        // 0x80215EF4: nop
    
            goto L_80215F10;
    }
    // 0x80215EF4: nop

    // 0x80215EF8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80215EFC: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80215F00: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x80215F04: nop

    // 0x80215F08: bc1fl       L_80215F1C
    if (!c1cs) {
        // 0x80215F0C: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_80215F1C;
    }
    goto skip_15;
    // 0x80215F0C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_15:
L_80215F10:
    // 0x80215F10: b           L_802160DC
    // 0x80215F14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802160DC;
    // 0x80215F14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80215F18: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_80215F1C:
    // 0x80215F1C: mov.s       $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = ctx->f4.fl;
    // 0x80215F20: c.eq.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl == ctx->f8.fl;
    // 0x80215F24: nop

    // 0x80215F28: bc1fl       L_80215FF0
    if (!c1cs) {
        // 0x80215F2C: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_80215FF0;
    }
    goto skip_16;
    // 0x80215F2C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_16:
    // 0x80215F30: mul.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80215F34: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80215F38: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80215F3C: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80215F40: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80215F44: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x80215F48: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80215F4C: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80215F50: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80215F54: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80215F58: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80215F5C: add.s       $f14, $f8, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80215F60: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80215F64: lwc1        $f6, 0xF0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x80215F68: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x80215F6C: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80215F70: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80215F74: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80215F78: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80215F7C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x80215F80: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80215F84: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80215F88: lwc1        $f6, 0xBC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80215F8C: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80215F90: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80215F94: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x80215F98: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80215F9C: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80215FA0: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80215FA4: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80215FA8: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80215FAC: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x80215FB0: jal         0x80215880
    // 0x80215FB4: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    func_80215880(rdram, ctx);
        goto after_2;
    // 0x80215FB4: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80215FB8: beq         $v0, $zero, L_80215FDC
    if (ctx->r2 == 0) {
        // 0x80215FBC: lw          $t7, 0x114($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X114);
            goto L_80215FDC;
    }
    // 0x80215FBC: lw          $t7, 0x114($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X114);
    // 0x80215FC0: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80215FC4: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80215FC8: lw          $t6, 0x114($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X114);
    // 0x80215FCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80215FD0: div.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80215FD4: b           L_802160DC
    // 0x80215FD8: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
        goto L_802160DC;
    // 0x80215FD8: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
L_80215FDC:
    // 0x80215FDC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80215FE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80215FE4: b           L_802160DC
    // 0x80215FE8: swc1        $f6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f6.u32l;
        goto L_802160DC;
    // 0x80215FE8: swc1        $f6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f6.u32l;
    // 0x80215FEC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
L_80215FF0:
    // 0x80215FF0: lwc1        $f4, 0xE8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80215FF4: lwc1        $f6, 0xE8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80215FF8: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x80215FFC: nop

    // 0x80216000: bc1f        L_80216074
    if (!c1cs) {
        // 0x80216004: nop
    
            goto L_80216074;
    }
    // 0x80216004: nop

    // 0x80216008: mul.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8021600C: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80216010: lhu         $t8, 0x10A($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X10A);
    // 0x80216014: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80216018: lhu         $t9, 0x10E($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X10E);
    // 0x8021601C: lw          $a2, 0x100($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X100);
    // 0x80216020: lhu         $a3, 0x106($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X106);
    // 0x80216024: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80216028: add.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8021602C: lwc1        $f8, 0x110($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80216030: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80216034: add.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80216038: jal         0x80215578
    // 0x8021603C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_80215578(rdram, ctx);
        goto after_3;
    // 0x8021603C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80216040: beq         $v0, $zero, L_80216064
    if (ctx->r2 == 0) {
        // 0x80216044: lw          $t1, 0x114($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X114);
            goto L_80216064;
    }
    // 0x80216044: lw          $t1, 0x114($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X114);
    // 0x80216048: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8021604C: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80216050: lw          $t0, 0x114($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X114);
    // 0x80216054: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80216058: div.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021605C: b           L_802160DC
    // 0x80216060: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
        goto L_802160DC;
    // 0x80216060: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
L_80216064:
    // 0x80216064: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80216068: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021606C: b           L_802160DC
    // 0x80216070: swc1        $f8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f8.u32l;
        goto L_802160DC;
    // 0x80216070: swc1        $f8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f8.u32l;
L_80216074:
    // 0x80216074: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80216078: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x8021607C: lhu         $t2, 0x10A($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X10A);
    // 0x80216080: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80216084: lhu         $t3, 0x10E($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X10E);
    // 0x80216088: lw          $a2, 0x100($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X100);
    // 0x8021608C: lhu         $a3, 0x106($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X106);
    // 0x80216090: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80216094: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80216098: lwc1        $f4, 0x110($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X110);
    // 0x8021609C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802160A0: add.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x802160A4: jal         0x802156FC
    // 0x802160A8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_802156FC(rdram, ctx);
        goto after_4;
    // 0x802160A8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x802160AC: beq         $v0, $zero, L_802160D0
    if (ctx->r2 == 0) {
        // 0x802160B0: lw          $t5, 0x114($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X114);
            goto L_802160D0;
    }
    // 0x802160B0: lw          $t5, 0x114($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X114);
    // 0x802160B4: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802160B8: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802160BC: lw          $t4, 0x114($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X114);
    // 0x802160C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802160C4: div.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802160C8: b           L_802160DC
    // 0x802160CC: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
        goto L_802160DC;
    // 0x802160CC: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
L_802160D0:
    // 0x802160D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802160D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802160D8: swc1        $f4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f4.u32l;
L_802160DC:
    // 0x802160DC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802160E0: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    // 0x802160E4: jr          $ra
    // 0x802160E8: nop

    return;
    // 0x802160E8: nop

;}
RECOMP_FUNC void func_8023F6D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F6D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023F6DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023F6E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023F6E4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8023F6E8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8023F6EC: lh          $t6, 0x0($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X0);
    // 0x8023F6F0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8023F6F4: sh          $t6, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r14;
    // 0x8023F6F8: lbu         $t7, 0x4($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X4);
    // 0x8023F6FC: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x8023F700: sh          $t7, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r15;
    // 0x8023F704: lh          $t8, 0x2($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X2);
    // 0x8023F708: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x8023F70C: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x8023F710: sh          $t8, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r24;
    // 0x8023F714: lh          $a2, 0x0($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X0);
    // 0x8023F718: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8023F71C: jal         0x8023F5F0
    // 0x8023F720: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8023F5F0(rdram, ctx);
        goto after_0;
    // 0x8023F720: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x8023F724: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8023F728: beql        $t9, $zero, L_8023F800
    if (ctx->r25 == 0) {
        // 0x8023F72C: lw          $v0, 0x2C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X2C);
            goto L_8023F800;
    }
    goto skip_0;
    // 0x8023F72C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x8023F730: beq         $v0, $zero, L_8023F7E4
    if (ctx->r2 == 0) {
        // 0x8023F734: lw          $a0, 0xC($t9)
        ctx->r4 = MEM_W(ctx->r25, 0XC);
            goto L_8023F7E4;
    }
    // 0x8023F734: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x8023F738: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    // 0x8023F73C: sw          $t0, 0xD8($t9)
    MEM_W(0XD8, ctx->r25) = ctx->r8;
    // 0x8023F740: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8023F744: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x8023F748: sw          $zero, 0x8($t2)
    MEM_W(0X8, ctx->r10) = 0;
    // 0x8023F74C: jal         0x80237840
    // 0x8023F750: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_80237840(rdram, ctx);
        goto after_1;
    // 0x8023F750: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_1:
    // 0x8023F754: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8023F758: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8023F75C: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x8023F760: lw          $t4, 0x1C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X1C);
    // 0x8023F764: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
    // 0x8023F768: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x8023F76C: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8023F770: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8023F774: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023F778: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023F77C: lw          $t7, 0xD8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XD8);
    // 0x8023F780: addiu       $t8, $t7, -0x40
    ctx->r24 = ADD32(ctx->r15, -0X40);
    // 0x8023F784: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x8023F788: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8023F78C: jalr        $t9
    // 0x8023F790: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8023F790: nop

    after_2:
    // 0x8023F794: jal         0x80237840
    // 0x8023F798: nop

    func_80237840(rdram, ctx);
        goto after_3;
    // 0x8023F798: nop

    after_3:
    // 0x8023F79C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8023F7A0: beq         $v0, $zero, L_8023F7EC
    if (ctx->r2 == 0) {
        // 0x8023F7A4: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8023F7EC;
    }
    // 0x8023F7A4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023F7A8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8023F7AC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8023F7B0: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x8023F7B4: lw          $t1, 0x1C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X1C);
    // 0x8023F7B8: lw          $t3, 0xD8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XD8);
    // 0x8023F7BC: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
    // 0x8023F7C0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8023F7C4: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8023F7C8: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8023F7CC: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8023F7D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023F7D4: jalr        $t9
    // 0x8023F7D8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x8023F7D8: nop

    after_4:
    // 0x8023F7DC: b           L_8023F7F0
    // 0x8023F7E0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_8023F7F0;
    // 0x8023F7E0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_8023F7E4:
    // 0x8023F7E4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8023F7E8: sw          $zero, 0xD8($t6)
    MEM_W(0XD8, ctx->r14) = 0;
L_8023F7EC:
    // 0x8023F7EC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_8023F7F0:
    // 0x8023F7F0: sw          $s0, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r16;
    // 0x8023F7F4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8023F7F8: sw          $t8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r24;
    // 0x8023F7FC: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_8023F800:
    // 0x8023F800: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F804: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023F808: sltu        $t0, $zero, $v0
    ctx->r8 = 0 < ctx->r2 ? 1 : 0;
    // 0x8023F80C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x8023F810: jr          $ra
    // 0x8023F814: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8023F814: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80244B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80244B3C: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x80244B40: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x80244B44: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80244B48: addiu       $a3, $a0, 0x4
    ctx->r7 = ADD32(ctx->r4, 0X4);
    // 0x80244B4C: addu        $t8, $zero, $v0
    ctx->r24 = ADD32(0, ctx->r2);
    // 0x80244B50: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80244B54: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x80244B58: nor         $t5, $v0, $zero
    ctx->r13 = ~(ctx->r2 | 0);
    // 0x80244B5C: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80244B60: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x80244B64: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x80244B68: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x80244B6C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x80244B70: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80244B74: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80244B78: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x80244B7C: nor         $t5, $v0, $zero
    ctx->r13 = ~(ctx->r2 | 0);
    // 0x80244B80: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80244B84: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x80244B88: addiu       $t1, $a3, 0x2
    ctx->r9 = ADD32(ctx->r7, 0X2);
    // 0x80244B8C: addiu       $t2, $a3, 0x4
    ctx->r10 = ADD32(ctx->r7, 0X4);
    // 0x80244B90: addiu       $t3, $a3, 0x6
    ctx->r11 = ADD32(ctx->r7, 0X6);
    // 0x80244B94: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_80244B98:
    // 0x80244B98: lhu         $v0, 0x0($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X0);
    // 0x80244B9C: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x80244BA0: nor         $t5, $v0, $zero
    ctx->r13 = ~(ctx->r2 | 0);
    // 0x80244BA4: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80244BA8: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80244BAC: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x80244BB0: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80244BB4: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80244BB8: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x80244BBC: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x80244BC0: lhu         $v0, 0x0($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X0);
    // 0x80244BC4: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x80244BC8: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80244BCC: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80244BD0: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x80244BD4: nor         $t5, $v0, $zero
    ctx->r13 = ~(ctx->r2 | 0);
    // 0x80244BD8: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80244BDC: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x80244BE0: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x80244BE4: lhu         $v0, 0x0($t2)
    ctx->r2 = MEM_HU(ctx->r10, 0X0);
    // 0x80244BE8: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x80244BEC: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80244BF0: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80244BF4: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x80244BF8: nor         $t5, $v0, $zero
    ctx->r13 = ~(ctx->r2 | 0);
    // 0x80244BFC: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80244C00: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x80244C04: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x80244C08: lhu         $v0, 0x0($t3)
    ctx->r2 = MEM_HU(ctx->r11, 0X0);
    // 0x80244C0C: addiu       $t2, $t2, 0x8
    ctx->r10 = ADD32(ctx->r10, 0X8);
    // 0x80244C10: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80244C14: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80244C18: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x80244C1C: nor         $t5, $v0, $zero
    ctx->r13 = ~(ctx->r2 | 0);
    // 0x80244C20: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80244C24: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x80244C28: bne         $v1, $a0, L_80244B98
    if (ctx->r3 != ctx->r4) {
        // 0x80244C2C: addiu       $t3, $t3, 0x8
        ctx->r11 = ADD32(ctx->r11, 0X8);
            goto L_80244B98;
    }
    // 0x80244C2C: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x80244C30: jr          $ra
    // 0x80244C34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80244C34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80222B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222B90: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x80222B94: addiu       $a3, $a3, 0x3B90
    ctx->r7 = ADD32(ctx->r7, 0X3B90);
    // 0x80222B98: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x80222B9C: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x80222BA0: lw          $t7, 0x4398($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4398);
    // 0x80222BA4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80222BA8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80222BAC: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x80222BB0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80222BB4: addiu       $t8, $a1, 0x8
    ctx->r24 = ADD32(ctx->r5, 0X8);
    // 0x80222BB8: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x80222BBC: ori         $at, $at, 0x10
    ctx->r1 = ctx->r1 | 0X10;
    // 0x80222BC0: lui         $t9, 0x380
    ctx->r25 = S32(0X380 << 16);
    // 0x80222BC4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80222BC8: addu        $t1, $v0, $at
    ctx->r9 = ADD32(ctx->r2, ctx->r1);
    // 0x80222BCC: ori         $t9, $t9, 0x10
    ctx->r25 = ctx->r25 | 0X10;
    // 0x80222BD0: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80222BD4: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
    // 0x80222BD8: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x80222BDC: addiu       $t0, $zero, 0xF0
    ctx->r8 = ADD32(0, 0XF0);
    // 0x80222BE0: lui         $at, 0xED00
    ctx->r1 = S32(0XED00 << 16);
    // 0x80222BE4: addiu       $t2, $a1, 0x8
    ctx->r10 = ADD32(ctx->r5, 0X8);
    // 0x80222BE8: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x80222BEC: lh          $t3, 0x8($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X8);
    // 0x80222BF0: lh          $t9, 0xE($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XE);
    // 0x80222BF4: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80222BF8: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x80222BFC: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x80222C00: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80222C04: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80222C08: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80222C0C: nop

    // 0x80222C10: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80222C14: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80222C18: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80222C1C: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x80222C20: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x80222C24: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x80222C28: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x80222C2C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80222C30: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x80222C34: or          $t5, $t8, $t4
    ctx->r13 = ctx->r24 | ctx->r12;
    // 0x80222C38: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x80222C3C: lh          $t6, 0xA($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XA);
    // 0x80222C40: lh          $t3, 0xC($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XC);
    // 0x80222C44: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80222C48: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80222C4C: subu        $t8, $t0, $t3
    ctx->r24 = SUB32(ctx->r8, ctx->r11);
    // 0x80222C50: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80222C54: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80222C58: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80222C5C: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80222C60: nop

    // 0x80222C64: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80222C68: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80222C6C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80222C70: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80222C74: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x80222C78: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x80222C7C: sll         $t2, $t1, 12
    ctx->r10 = S32(ctx->r9 << 12);
    // 0x80222C80: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x80222C84: or          $t7, $t2, $t6
    ctx->r15 = ctx->r10 | ctx->r14;
    // 0x80222C88: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x80222C8C: lh          $t9, 0x8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X8);
    // 0x80222C90: sh          $t9, 0x439C($at)
    MEM_H(0X439C, ctx->r1) = ctx->r25;
    // 0x80222C94: lh          $t1, 0xA($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XA);
    // 0x80222C98: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80222C9C: sh          $t1, 0x439E($at)
    MEM_H(0X439E, ctx->r1) = ctx->r9;
    // 0x80222CA0: lh          $t3, 0xC($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XC);
    // 0x80222CA4: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80222CA8: sh          $t3, 0x43A0($at)
    MEM_H(0X43A0, ctx->r1) = ctx->r11;
    // 0x80222CAC: lh          $t8, 0xE($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XE);
    // 0x80222CB0: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80222CB4: jr          $ra
    // 0x80222CB8: sh          $t8, 0x43A2($at)
    MEM_H(0X43A2, ctx->r1) = ctx->r24;
    return;
    // 0x80222CB8: sh          $t8, 0x43A2($at)
    MEM_H(0X43A2, ctx->r1) = ctx->r24;
;}
RECOMP_FUNC void func_802402B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802402B4: lbu         $t7, 0x31($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X31);
    // 0x802402B8: lw          $t6, 0x60($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X60);
    // 0x802402BC: lw          $t1, 0x20($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X20);
    // 0x802402C0: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x802402C4: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x802402C8: lbu         $t0, 0x7($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X7);
    // 0x802402CC: lbu         $t2, 0xC($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0XC);
    // 0x802402D0: addu        $v1, $t0, $t2
    ctx->r3 = ADD32(ctx->r8, ctx->r10);
    // 0x802402D4: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x802402D8: bgtzl       $v1, L_802402E8
    if (SIGNED(ctx->r3) > 0) {
        // 0x802402DC: slti        $at, $v1, 0x7F
        ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
            goto L_802402E8;
    }
    goto skip_0;
    // 0x802402DC: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
    skip_0:
    // 0x802402E0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802402E4: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
L_802402E8:
    // 0x802402E8: bne         $at, $zero, L_802402F4
    if (ctx->r1 != 0) {
        // 0x802402EC: nop
    
            goto L_802402F4;
    }
    // 0x802402EC: nop

    // 0x802402F0: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
L_802402F4:
    // 0x802402F4: jr          $ra
    // 0x802402F8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x802402F8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
RECOMP_FUNC void func_80211204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80211204: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80211208: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x8021120C: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x80211210: mtc1        $a2, $f24
    ctx->f24.u32l = ctx->r6;
    // 0x80211214: mtc1        $a3, $f26
    ctx->f26.u32l = ctx->r7;
    // 0x80211218: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x8021121C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80211220: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80211224: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x80211228: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8021122C: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80211230: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x80211234: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x80211238: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x8021123C: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80211240: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80211244: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80211248: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x8021124C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80211250: blez        $a1, L_8021153C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80211254: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8021153C;
    }
    // 0x80211254: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80211258: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8021125C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80211260: lwc1        $f22, 0xA8($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80211264: addiu       $fp, $sp, 0x74
    ctx->r30 = ADD32(ctx->r29, 0X74);
    // 0x80211268: addiu       $s7, $sp, 0x84
    ctx->r23 = ADD32(ctx->r29, 0X84);
    // 0x8021126C: addiu       $s6, $sp, 0x88
    ctx->r22 = ADD32(ctx->r29, 0X88);
    // 0x80211270: addiu       $s5, $sp, 0x8C
    ctx->r21 = ADD32(ctx->r29, 0X8C);
L_80211274:
    // 0x80211274: sll         $t6, $s1, 4
    ctx->r14 = S32(ctx->r17 << 4);
    // 0x80211278: addu        $s0, $t6, $s4
    ctx->r16 = ADD32(ctx->r14, ctx->r20);
    // 0x8021127C: lbu         $t7, 0xC($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XC);
    // 0x80211280: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
    // 0x80211284: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80211288: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8021128C: bgez        $t7, L_802112A0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80211290: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802112A0;
    }
    // 0x80211290: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80211294: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80211298: nop

    // 0x8021129C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_802112A0:
    // 0x802112A0: lbu         $t8, 0xD($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XD);
    // 0x802112A4: div.s       $f12, $f6, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    // 0x802112A8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802112AC: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x802112B0: bgez        $t8, L_802112C4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x802112B4: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_802112C4;
    }
    // 0x802112B4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802112B8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802112BC: nop

    // 0x802112C0: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_802112C4:
    // 0x802112C4: lbu         $t9, 0xE($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XE);
    // 0x802112C8: div.s       $f14, $f16, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = DIV_S(ctx->f16.fl, ctx->f20.fl);
    // 0x802112CC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802112D0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x802112D4: bgez        $t9, L_802112E8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802112D8: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802112E8;
    }
    // 0x802112D8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802112DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802112E0: nop

    // 0x802112E4: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_802112E8:
    // 0x802112E8: div.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x802112EC: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x802112F0: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x802112F4: sw          $s7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r23;
    // 0x802112F8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802112FC: jal         0x80209914
    // 0x80211300: nop

    func_80209914(rdram, ctx);
        goto after_0;
    // 0x80211300: nop

    after_0:
    // 0x80211304: lhu         $t0, 0x6($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X6);
    // 0x80211308: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x8021130C: addiu       $t1, $sp, 0x70
    ctx->r9 = ADD32(ctx->r29, 0X70);
    // 0x80211310: beq         $t0, $zero, L_80211340
    if (ctx->r8 == 0) {
        // 0x80211314: addiu       $t2, $sp, 0x6C
        ctx->r10 = ADD32(ctx->r29, 0X6C);
            goto L_80211340;
    }
    // 0x80211314: addiu       $t2, $sp, 0x6C
    ctx->r10 = ADD32(ctx->r29, 0X6C);
    // 0x80211318: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8021131C: lwc1        $f16, 0x88($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80211320: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80211324: mul.s       $f12, $f24, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f24.fl, ctx->f18.fl);
    // 0x80211328: nop

    // 0x8021132C: mul.s       $f14, $f26, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = MUL_S(ctx->f26.fl, ctx->f16.fl);
    // 0x80211330: nop

    // 0x80211334: mul.s       $f0, $f22, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f4.fl);
    // 0x80211338: b           L_80211374
    // 0x8021133C: nop

        goto L_80211374;
    // 0x8021133C: nop

L_80211340:
    // 0x80211340: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80211344: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80211348: lwc1        $f16, 0x84($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8021134C: mul.s       $f12, $f24, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f24.fl, ctx->f6.fl);
    // 0x80211350: nop

    // 0x80211354: mul.s       $f14, $f26, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f26.fl, ctx->f8.fl);
    // 0x80211358: nop

    // 0x8021135C: mul.s       $f10, $f22, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x80211360: nop

    // 0x80211364: mul.s       $f18, $f10, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80211368: nop

    // 0x8021136C: mul.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x80211370: nop

L_80211374:
    // 0x80211374: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80211378: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8021137C: jal         0x802096F4
    // 0x80211380: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_802096F4(rdram, ctx);
        goto after_1;
    // 0x80211380: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_1:
    // 0x80211384: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80211388: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8021138C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80211390: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80211394: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80211398: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8021139C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802113A0: nop

    // 0x802113A4: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802113A8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802113AC: nop

    // 0x802113B0: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x802113B4: beql        $t4, $zero, L_80211404
    if (ctx->r12 == 0) {
        // 0x802113B8: mfc1        $t4, $f8
        ctx->r12 = (int32_t)ctx->f8.u32l;
            goto L_80211404;
    }
    goto skip_0;
    // 0x802113B8: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    skip_0:
    // 0x802113BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802113C0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802113C4: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802113C8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802113CC: nop

    // 0x802113D0: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802113D4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802113D8: nop

    // 0x802113DC: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x802113E0: bne         $t4, $zero, L_802113F8
    if (ctx->r12 != 0) {
        // 0x802113E4: nop
    
            goto L_802113F8;
    }
    // 0x802113E4: nop

    // 0x802113E8: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x802113EC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802113F0: b           L_80211410
    // 0x802113F4: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_80211410;
    // 0x802113F4: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_802113F8:
    // 0x802113F8: b           L_80211410
    // 0x802113FC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_80211410;
    // 0x802113FC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x80211400: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
L_80211404:
    // 0x80211404: nop

    // 0x80211408: bltz        $t4, L_802113F8
    if (SIGNED(ctx->r12) < 0) {
        // 0x8021140C: nop
    
            goto L_802113F8;
    }
    // 0x8021140C: nop

L_80211410:
    // 0x80211410: sb          $t4, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r12;
    // 0x80211414: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80211418: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8021141C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80211420: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80211424: mul.s       $f18, $f10, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80211428: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8021142C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80211430: nop

    // 0x80211434: cvt.w.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80211438: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8021143C: nop

    // 0x80211440: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80211444: beql        $t6, $zero, L_80211494
    if (ctx->r14 == 0) {
        // 0x80211448: mfc1        $t6, $f16
        ctx->r14 = (int32_t)ctx->f16.u32l;
            goto L_80211494;
    }
    goto skip_1;
    // 0x80211448: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    skip_1:
    // 0x8021144C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80211450: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80211454: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x80211458: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8021145C: nop

    // 0x80211460: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80211464: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80211468: nop

    // 0x8021146C: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80211470: bne         $t6, $zero, L_80211488
    if (ctx->r14 != 0) {
        // 0x80211474: nop
    
            goto L_80211488;
    }
    // 0x80211474: nop

    // 0x80211478: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x8021147C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80211480: b           L_802114A0
    // 0x80211484: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_802114A0;
    // 0x80211484: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_80211488:
    // 0x80211488: b           L_802114A0
    // 0x8021148C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_802114A0;
    // 0x8021148C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80211490: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
L_80211494:
    // 0x80211494: nop

    // 0x80211498: bltz        $t6, L_80211488
    if (SIGNED(ctx->r14) < 0) {
        // 0x8021149C: nop
    
            goto L_80211488;
    }
    // 0x8021149C: nop

L_802114A0:
    // 0x802114A0: sb          $t6, 0xD($s2)
    MEM_B(0XD, ctx->r18) = ctx->r14;
    // 0x802114A4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802114A8: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802114AC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802114B0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802114B4: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x802114B8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802114BC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x802114C0: nop

    // 0x802114C4: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802114C8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802114CC: nop

    // 0x802114D0: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x802114D4: beql        $t8, $zero, L_80211524
    if (ctx->r24 == 0) {
        // 0x802114D8: mfc1        $t8, $f8
        ctx->r24 = (int32_t)ctx->f8.u32l;
            goto L_80211524;
    }
    goto skip_2;
    // 0x802114D8: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    skip_2:
    // 0x802114DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802114E0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802114E4: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802114E8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x802114EC: nop

    // 0x802114F0: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802114F4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802114F8: nop

    // 0x802114FC: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80211500: bne         $t8, $zero, L_80211518
    if (ctx->r24 != 0) {
        // 0x80211504: nop
    
            goto L_80211518;
    }
    // 0x80211504: nop

    // 0x80211508: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x8021150C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80211510: b           L_80211530
    // 0x80211514: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_80211530;
    // 0x80211514: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_80211518:
    // 0x80211518: b           L_80211530
    // 0x8021151C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_80211530;
    // 0x8021151C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80211520: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
L_80211524:
    // 0x80211524: nop

    // 0x80211528: bltz        $t8, L_80211518
    if (SIGNED(ctx->r24) < 0) {
        // 0x8021152C: nop
    
            goto L_80211518;
    }
    // 0x8021152C: nop

L_80211530:
    // 0x80211530: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80211534: bne         $s1, $s3, L_80211274
    if (ctx->r17 != ctx->r19) {
        // 0x80211538: sb          $t8, 0xE($s2)
        MEM_B(0XE, ctx->r18) = ctx->r24;
            goto L_80211274;
    }
    // 0x80211538: sb          $t8, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r24;
L_8021153C:
    // 0x8021153C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80211540: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80211544: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80211548: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x8021154C: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x80211550: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80211554: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80211558: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8021155C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80211560: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80211564: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80211568: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x8021156C: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x80211570: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x80211574: jr          $ra
    // 0x80211578: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x80211578: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_8022CA28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022CA28: jr          $ra
    // 0x8022CA2C: addiu       $v0, $a0, 0x78
    ctx->r2 = ADD32(ctx->r4, 0X78);
    return;
    // 0x8022CA2C: addiu       $v0, $a0, 0x78
    ctx->r2 = ADD32(ctx->r4, 0X78);
;}
RECOMP_FUNC void func_80228758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228758: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8022875C: lhu         $v1, 0xBFE($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XBFE);
    // 0x80228760: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228764: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228768: blez        $v1, L_802287F0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8022876C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_802287F0;
    }
    // 0x8022876C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80228770: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80228774: lw          $a1, 0x5A44($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5A44);
    // 0x80228778: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
L_8022877C:
    // 0x8022877C: addu        $v0, $t6, $a1
    ctx->r2 = ADD32(ctx->r14, ctx->r5);
    // 0x80228780: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    // 0x80228784: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80228788: bnel        $t7, $zero, L_802287E4
    if (ctx->r15 != 0) {
        // 0x8022878C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_802287E4;
    }
    goto skip_0;
    // 0x8022878C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x80228790: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80228794: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80228798: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022879C: sb          $v1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r3;
    // 0x802287A0: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x802287A4: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x802287A8: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x802287AC: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x802287B0: swc1        $f0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f0.u32l;
    // 0x802287B4: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x802287B8: swc1        $f2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f2.u32l;
    // 0x802287BC: jal         0x80228894
    // 0x802287C0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80228894(rdram, ctx);
        goto after_0;
    // 0x802287C0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x802287C4: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x802287C8: addiu       $v1, $v1, 0x5A30
    ctx->r3 = ADD32(ctx->r3, 0X5A30);
    // 0x802287CC: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x802287D0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x802287D4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x802287D8: b           L_80228808
    // 0x802287DC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
        goto L_80228808;
    // 0x802287DC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x802287E0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_802287E4:
    // 0x802287E4: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802287E8: bnel        $at, $zero, L_8022877C
    if (ctx->r1 != 0) {
        // 0x802287EC: sll         $t6, $a0, 5
        ctx->r14 = S32(ctx->r4 << 5);
            goto L_8022877C;
    }
    goto skip_1;
    // 0x802287EC: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    skip_1:
L_802287F0:
    // 0x802287F0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802287F4: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x802287F8: addiu       $a2, $a2, 0xBFE
    ctx->r6 = ADD32(ctx->r6, 0XBFE);
    // 0x802287FC: jal         0x80231C58
    // 0x80228800: addiu       $a1, $a1, 0x3D60
    ctx->r5 = ADD32(ctx->r5, 0X3D60);
    func_80231C58(rdram, ctx);
        goto after_1;
    // 0x80228800: addiu       $a1, $a1, 0x3D60
    ctx->r5 = ADD32(ctx->r5, 0X3D60);
    after_1:
    // 0x80228804: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_80228808:
    // 0x80228808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022880C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80228810: jr          $ra
    // 0x80228814: nop

    return;
    // 0x80228814: nop

;}
RECOMP_FUNC void func_80237790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237798: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8023779C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802377A0: jal         0x80237120
    // 0x802377A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80237120(rdram, ctx);
        goto after_0;
    // 0x802377A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x802377A8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802377AC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802377B0: jal         0x80237150
    // 0x802377B4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_80237150(rdram, ctx);
        goto after_1;
    // 0x802377B4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_1:
    // 0x802377B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802377BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802377C0: jr          $ra
    // 0x802377C4: nop

    return;
    // 0x802377C4: nop

;}
RECOMP_FUNC void func_80228EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228EB0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80228EB4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80228EB8: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x80228EBC: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x80228EC0: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x80228EC4: lw          $t8, 0x10($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
    // 0x80228EC8: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
    // 0x80228ECC: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x80228ED0: sw          $t9, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r25;
    // 0x80228ED4: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80228ED8: sw          $t0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r8;
    // 0x80228EDC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80228EE0: sw          $t1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r9;
    // 0x80228EE4: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80228EE8: sw          $t2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r10;
    // 0x80228EEC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80228EF0: sw          $t3, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r11;
    // 0x80228EF4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80228EF8: sw          $t4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r12;
    // 0x80228EFC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80228F00: sw          $t5, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r13;
    // 0x80228F04: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80228F08: sw          $t6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r14;
    // 0x80228F0C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80228F10: sw          $t7, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r15;
    // 0x80228F14: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80228F18: sw          $t8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r24;
    // 0x80228F1C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80228F20: sw          $t9, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r25;
    // 0x80228F24: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80228F28: sw          $t0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r8;
    // 0x80228F2C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80228F30: jr          $ra
    // 0x80228F34: sw          $t1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r9;
    return;
    // 0x80228F34: sw          $t1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_802009A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802009A8: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x802009AC: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x802009B0: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x802009B4: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x802009B8: lw          $t6, -0x3C20($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3C20);
    // 0x802009BC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802009C0: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x802009C4: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x802009C8: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x802009CC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x802009D0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802009D4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802009D8: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x802009DC: sll         $t8, $a0, 3
    ctx->r24 = S32(ctx->r4 << 3);
    // 0x802009E0: lbu         $s6, 0x10($a1)
    ctx->r22 = MEM_BU(ctx->r5, 0X10);
    // 0x802009E4: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x802009E8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802009EC: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x802009F0: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x802009F4: lhu         $s7, 0x0($t9)
    ctx->r23 = MEM_HU(ctx->r25, 0X0);
    // 0x802009F8: lw          $s0, 0x0($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X0);
    // 0x802009FC: lw          $s1, 0x4($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X4);
    // 0x80200A00: lw          $s2, 0x8($a1)
    ctx->r18 = MEM_W(ctx->r5, 0X8);
    // 0x80200A04: blez        $s6, L_80200AF4
    if (SIGNED(ctx->r22) <= 0) {
        // 0x80200A08: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_80200AF4;
    }
    // 0x80200A08: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80200A0C: addiu       $s5, $sp, 0x60
    ctx->r21 = ADD32(ctx->r29, 0X60);
    // 0x80200A10: lw          $t0, 0xC($s3)
    ctx->r8 = MEM_W(ctx->r19, 0XC);
L_80200A14:
    // 0x80200A14: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80200A18: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80200A1C: addu        $t1, $t0, $s4
    ctx->r9 = ADD32(ctx->r8, ctx->r20);
    // 0x80200A20: jal         0x802116AC
    // 0x80200A24: lbu         $a1, 0x0($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X0);
    func_802116AC(rdram, ctx);
        goto after_0;
    // 0x80200A24: lbu         $a1, 0x0($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X0);
    after_0:
    // 0x80200A28: lbu         $v0, 0x11($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X11);
    // 0x80200A2C: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x80200A30: beql        $t2, $zero, L_80200A64
    if (ctx->r10 == 0) {
        // 0x80200A34: andi        $t3, $v0, 0x2
        ctx->r11 = ctx->r2 & 0X2;
            goto L_80200A64;
    }
    goto skip_0;
    // 0x80200A34: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
    skip_0:
    // 0x80200A38: beq         $s0, $zero, L_80200A60
    if (ctx->r16 == 0) {
        // 0x80200A3C: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80200A60;
    }
    // 0x80200A3C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80200A40: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80200A44: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80200A48: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x80200A4C: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x80200A50: jal         0x8022A918
    // 0x80200A54: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8022A918(rdram, ctx);
        goto after_1;
    // 0x80200A54: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80200A58: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x80200A5C: lbu         $v0, 0x11($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X11);
L_80200A60:
    // 0x80200A60: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
L_80200A64:
    // 0x80200A64: beql        $t3, $zero, L_80200AAC
    if (ctx->r11 == 0) {
        // 0x80200A68: andi        $t4, $v0, 0x4
        ctx->r12 = ctx->r2 & 0X4;
            goto L_80200AAC;
    }
    goto skip_1;
    // 0x80200A68: andi        $t4, $v0, 0x4
    ctx->r12 = ctx->r2 & 0X4;
    skip_1:
    // 0x80200A6C: beq         $s1, $zero, L_80200AA8
    if (ctx->r17 == 0) {
        // 0x80200A70: lwc1        $f6, 0x90($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
            goto L_80200AA8;
    }
    // 0x80200A70: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80200A74: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80200A78: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80200A7C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x80200A80: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80200A84: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80200A88: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    // 0x80200A8C: lwc1        $f18, -0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, -0X8);
    // 0x80200A90: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80200A94: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x80200A98: lwc1        $f8, -0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, -0X4);
    // 0x80200A9C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80200AA0: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
    // 0x80200AA4: lbu         $v0, 0x11($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X11);
L_80200AA8:
    // 0x80200AA8: andi        $t4, $v0, 0x4
    ctx->r12 = ctx->r2 & 0X4;
L_80200AAC:
    // 0x80200AAC: beql        $t4, $zero, L_80200AD4
    if (ctx->r12 == 0) {
        // 0x80200AB0: lw          $t5, 0xC($s3)
        ctx->r13 = MEM_W(ctx->r19, 0XC);
            goto L_80200AD4;
    }
    goto skip_2;
    // 0x80200AB0: lw          $t5, 0xC($s3)
    ctx->r13 = MEM_W(ctx->r19, 0XC);
    skip_2:
    // 0x80200AB4: beq         $s2, $zero, L_80200AD0
    if (ctx->r18 == 0) {
        // 0x80200AB8: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80200AD0;
    }
    // 0x80200AB8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80200ABC: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x80200AC0: lw          $a2, 0x4($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X4);
    // 0x80200AC4: jal         0x8022A210
    // 0x80200AC8: lw          $a3, 0x8($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X8);
    func_8022A210(rdram, ctx);
        goto after_2;
    // 0x80200AC8: lw          $a3, 0x8($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X8);
    after_2:
    // 0x80200ACC: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
L_80200AD0:
    // 0x80200AD0: lw          $t5, 0xC($s3)
    ctx->r13 = MEM_W(ctx->r19, 0XC);
L_80200AD4:
    // 0x80200AD4: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x80200AD8: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80200ADC: addu        $t7, $t5, $s4
    ctx->r15 = ADD32(ctx->r13, ctx->r20);
    // 0x80200AE0: jal         0x8021B4B0
    // 0x80200AE4: lbu         $a1, 0x0($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X0);
    func_8021B4B0(rdram, ctx);
        goto after_3;
    // 0x80200AE4: lbu         $a1, 0x0($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X0);
    after_3:
    // 0x80200AE8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80200AEC: bnel        $s4, $s6, L_80200A14
    if (ctx->r20 != ctx->r22) {
        // 0x80200AF0: lw          $t0, 0xC($s3)
        ctx->r8 = MEM_W(ctx->r19, 0XC);
            goto L_80200A14;
    }
    goto skip_3;
    // 0x80200AF0: lw          $t0, 0xC($s3)
    ctx->r8 = MEM_W(ctx->r19, 0XC);
    skip_3:
L_80200AF4:
    // 0x80200AF4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80200AF8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80200AFC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80200B00: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80200B04: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80200B08: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80200B0C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80200B10: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x80200B14: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x80200B18: jr          $ra
    // 0x80200B1C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x80200B1C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_8023EDC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023EDC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023EDC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023EDC8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8023EDCC: jal         0x80245AD0
    // 0x8023EDD0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80245AD0(rdram, ctx);
        goto after_0;
    // 0x8023EDD0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x8023EDD4: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8023EDD8: lbu         $t6, 0x5EB0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5EB0);
    // 0x8023EDDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023EDE0: beq         $t6, $at, L_8023EE14
    if (ctx->r14 == ctx->r1) {
        // 0x8023EDE4: nop
    
            goto L_8023EE14;
    }
    // 0x8023EDE4: nop

    // 0x8023EDE8: jal         0x8023EF2C
    // 0x8023EDEC: nop

    func_8023EF2C(rdram, ctx);
        goto after_1;
    // 0x8023EDEC: nop

    after_1:
    // 0x8023EDF0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8023EDF4: addiu       $a1, $a1, 0x5E70
    ctx->r5 = ADD32(ctx->r5, 0X5E70);
    // 0x8023EDF8: jal         0x802465B0
    // 0x8023EDFC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802465B0(rdram, ctx);
        goto after_2;
    // 0x8023EDFC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8023EE00: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023EE04: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8023EE08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8023EE0C: jal         0x802374B0
    // 0x8023EE10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_3;
    // 0x8023EE10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_8023EE14:
    // 0x8023EE14: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_8023EE18:
    // 0x8023EE18: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8023EE1C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8023EE20: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023EE24: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8023EE28: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8023EE2C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8023EE30: sw          $t7, 0x5E70($at)
    MEM_W(0X5E70, ctx->r1) = ctx->r15;
    // 0x8023EE34: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8023EE38: slti        $at, $t1, 0x10
    ctx->r1 = SIGNED(ctx->r9) < 0X10 ? 1 : 0;
    // 0x8023EE3C: bne         $at, $zero, L_8023EE18
    if (ctx->r1 != 0) {
        // 0x8023EE40: sw          $t1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r9;
            goto L_8023EE18;
    }
    // 0x8023EE40: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8023EE44: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023EE48: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8023EE4C: sw          $zero, 0x5EAC($at)
    MEM_W(0X5EAC, ctx->r1) = 0;
    // 0x8023EE50: addiu       $a1, $a1, 0x5E70
    ctx->r5 = ADD32(ctx->r5, 0X5E70);
    // 0x8023EE54: jal         0x802465B0
    // 0x8023EE58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802465B0(rdram, ctx);
        goto after_4;
    // 0x8023EE58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x8023EE5C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8023EE60: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023EE64: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023EE68: jal         0x80245B14
    // 0x8023EE6C: sb          $t2, 0x5EB0($at)
    MEM_B(0X5EB0, ctx->r1) = ctx->r10;
    func_80245B14(rdram, ctx);
        goto after_5;
    // 0x8023EE6C: sb          $t2, 0x5EB0($at)
    MEM_B(0X5EB0, ctx->r1) = ctx->r10;
    after_5:
    // 0x8023EE70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023EE74: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8023EE78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023EE7C: jr          $ra
    // 0x8023EE80: nop

    return;
    // 0x8023EE80: nop

;}
RECOMP_FUNC void func_802310E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802310E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802310EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802310F0: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x802310F4: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x802310F8: jal         0x80207130
    // 0x802310FC: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    func_80207130(rdram, ctx);
        goto after_0;
    // 0x802310FC: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    after_0:
    // 0x80231100: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80231104: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    // 0x80231108: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8023110C: jal         0x80207130
    // 0x80231110: add.d       $f20, $f0, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f20.d = ctx->f0.d + ctx->f6.d;
    func_80207130(rdram, ctx);
        goto after_1;
    // 0x80231110: add.d       $f20, $f0, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f20.d = ctx->f0.d + ctx->f6.d;
    after_1:
    // 0x80231114: c.lt.d      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.d < ctx->f20.d;
    // 0x80231118: nop

    // 0x8023111C: bc1fl       L_80231140
    if (!c1cs) {
        // 0x80231120: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80231140;
    }
    goto skip_0;
    // 0x80231120: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_80231124:
    // 0x80231124: jal         0x80207130
    // 0x80231128: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    func_80207130(rdram, ctx);
        goto after_2;
    // 0x80231128: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    after_2:
    // 0x8023112C: c.lt.d      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.d < ctx->f20.d;
    // 0x80231130: nop

    // 0x80231134: bc1t        L_80231124
    if (c1cs) {
        // 0x80231138: nop
    
            goto L_80231124;
    }
    // 0x80231138: nop

    // 0x8023113C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80231140:
    // 0x80231140: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80231144: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80231148: jr          $ra
    // 0x8023114C: nop

    return;
    // 0x8023114C: nop

;}
RECOMP_FUNC void func_802341E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802341E0: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802341E4: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x802341E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802341EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802341F0: lw          $t7, 0x4C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4C);
    // 0x802341F4: lhu         $v0, 0xC($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XC);
    // 0x802341F8: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x802341FC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80234200: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80234204: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80234208: beq         $v0, $at, L_8023421C
    if (ctx->r2 == ctx->r1) {
        // 0x8023420C: lw          $v1, 0x0($t9)
        ctx->r3 = MEM_W(ctx->r25, 0X0);
            goto L_8023421C;
    }
    // 0x8023420C: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
    // 0x80234210: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x80234214: beql        $v0, $at, L_8023427C
    if (ctx->r2 == ctx->r1) {
        // 0x80234218: lw          $t6, 0x14($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X14);
            goto L_8023427C;
    }
    goto skip_0;
    // 0x80234218: lw          $t6, 0x14($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X14);
    skip_0:
L_8023421C:
    // 0x8023421C: lh          $t0, 0x6($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X6);
    // 0x80234220: lh          $t1, 0x4($a2)
    ctx->r9 = MEM_H(ctx->r6, 0X4);
    // 0x80234224: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80234228: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x8023422C: bne         $t0, $t1, L_80234244
    if (ctx->r8 != ctx->r9) {
        // 0x80234230: nop
    
            goto L_80234244;
    }
    // 0x80234230: nop

    // 0x80234234: lh          $t2, 0x8($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X8);
    // 0x80234238: lh          $t3, 0x6($a2)
    ctx->r11 = MEM_H(ctx->r6, 0X6);
    // 0x8023423C: beql        $t2, $t3, L_8023427C
    if (ctx->r10 == ctx->r11) {
        // 0x80234240: lw          $t6, 0x14($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X14);
            goto L_8023427C;
    }
    goto skip_1;
    // 0x80234240: lw          $t6, 0x14($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X14);
    skip_1:
L_80234244:
    // 0x80234244: lw          $t4, 0x3950($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3950);
    // 0x80234248: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x8023424C: addiu       $a0, $a0, 0x5244
    ctx->r4 = ADD32(ctx->r4, 0X5244);
    // 0x80234250: subu        $a1, $t4, $a2
    ctx->r5 = SUB32(ctx->r12, ctx->r6);
    // 0x80234254: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x80234258: mflo        $a1
    ctx->r5 = lo;
    // 0x8023425C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80234260: jal         0x80231A24
    // 0x80234264: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80234264: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80234268: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8023426C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80234270: sw          $zero, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = 0;
    // 0x80234274: sw          $zero, 0x60($a2)
    MEM_W(0X60, ctx->r6) = 0;
    // 0x80234278: lw          $t6, 0x14($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X14);
L_8023427C:
    // 0x8023427C: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x80234280: sh          $t7, 0xC($a2)
    MEM_H(0XC, ctx->r6) = ctx->r15;
    // 0x80234284: sw          $t6, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = ctx->r14;
    // 0x80234288: lh          $t8, 0x6($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X6);
    // 0x8023428C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x80234290: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80234294: sh          $t8, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r24;
    // 0x80234298: lh          $t9, 0x8($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X8);
    // 0x8023429C: sh          $t9, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r25;
    // 0x802342A0: lh          $t0, 0x6($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X6);
    // 0x802342A4: sh          $t0, 0x1C($a2)
    MEM_H(0X1C, ctx->r6) = ctx->r8;
    // 0x802342A8: lh          $t1, 0x8($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X8);
    // 0x802342AC: sh          $t1, 0x1E($a2)
    MEM_H(0X1E, ctx->r6) = ctx->r9;
    // 0x802342B0: lw          $t2, 0x14($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X14);
    // 0x802342B4: sw          $t2, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = ctx->r10;
    // 0x802342B8: lh          $t3, 0xE($v1)
    ctx->r11 = MEM_H(ctx->r3, 0XE);
    // 0x802342BC: sh          $t3, 0x40($a2)
    MEM_H(0X40, ctx->r6) = ctx->r11;
    // 0x802342C0: lh          $t4, 0xE($v1)
    ctx->r12 = MEM_H(ctx->r3, 0XE);
    // 0x802342C4: multu       $t4, $a3
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802342C8: mflo        $t5
    ctx->r13 = lo;
    // 0x802342CC: addiu       $t6, $t5, 0x18
    ctx->r14 = ADD32(ctx->r13, 0X18);
    // 0x802342D0: sh          $t6, 0x42($a2)
    MEM_H(0X42, ctx->r6) = ctx->r14;
    // 0x802342D4: lh          $t7, 0xC($v1)
    ctx->r15 = MEM_H(ctx->r3, 0XC);
    // 0x802342D8: sh          $t7, 0x44($a2)
    MEM_H(0X44, ctx->r6) = ctx->r15;
    // 0x802342DC: lh          $t8, 0xC($v1)
    ctx->r24 = MEM_H(ctx->r3, 0XC);
    // 0x802342E0: sh          $t8, 0x46($a2)
    MEM_H(0X46, ctx->r6) = ctx->r24;
    // 0x802342E4: lh          $t9, 0x2($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2);
    // 0x802342E8: sb          $t9, 0x48($a2)
    MEM_B(0X48, ctx->r6) = ctx->r25;
    // 0x802342EC: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
    // 0x802342F0: beq         $v0, $at, L_80234320
    if (ctx->r2 == ctx->r1) {
        // 0x802342F4: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_80234320;
    }
    // 0x802342F4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802342F8: beq         $v0, $at, L_80234328
    if (ctx->r2 == ctx->r1) {
        // 0x802342FC: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_80234328;
    }
    // 0x802342FC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80234300: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80234304: beq         $v0, $at, L_80234330
    if (ctx->r2 == ctx->r1) {
        // 0x80234308: addiu       $t1, $zero, 0x2
        ctx->r9 = ADD32(0, 0X2);
            goto L_80234330;
    }
    // 0x80234308: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8023430C: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x80234310: beq         $v0, $at, L_80234338
    if (ctx->r2 == ctx->r1) {
        // 0x80234314: addiu       $t2, $zero, 0x3
        ctx->r10 = ADD32(0, 0X3);
            goto L_80234338;
    }
    // 0x80234314: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80234318: b           L_80234340
    // 0x8023431C: lw          $t4, 0x5C($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X5C);
        goto L_80234340;
    // 0x8023431C: lw          $t4, 0x5C($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X5C);
L_80234320:
    // 0x80234320: b           L_8023433C
    // 0x80234324: sb          $zero, 0x49($a2)
    MEM_B(0X49, ctx->r6) = 0;
        goto L_8023433C;
    // 0x80234324: sb          $zero, 0x49($a2)
    MEM_B(0X49, ctx->r6) = 0;
L_80234328:
    // 0x80234328: b           L_8023433C
    // 0x8023432C: sb          $t0, 0x49($a2)
    MEM_B(0X49, ctx->r6) = ctx->r8;
        goto L_8023433C;
    // 0x8023432C: sb          $t0, 0x49($a2)
    MEM_B(0X49, ctx->r6) = ctx->r8;
L_80234330:
    // 0x80234330: b           L_8023433C
    // 0x80234334: sb          $t1, 0x49($a2)
    MEM_B(0X49, ctx->r6) = ctx->r9;
        goto L_8023433C;
    // 0x80234334: sb          $t1, 0x49($a2)
    MEM_B(0X49, ctx->r6) = ctx->r9;
L_80234338:
    // 0x80234338: sb          $t2, 0x49($a2)
    MEM_B(0X49, ctx->r6) = ctx->r10;
L_8023433C:
    // 0x8023433C: lw          $t4, 0x5C($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X5C);
L_80234340:
    // 0x80234340: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80234344: sh          $zero, 0x3C($a2)
    MEM_H(0X3C, ctx->r6) = 0;
    // 0x80234348: bne         $t4, $zero, L_80234384
    if (ctx->r12 != 0) {
        // 0x8023434C: sh          $t3, 0x3E($a2)
        MEM_H(0X3E, ctx->r6) = ctx->r11;
            goto L_80234384;
    }
    // 0x8023434C: sh          $t3, 0x3E($a2)
    MEM_H(0X3E, ctx->r6) = ctx->r11;
    // 0x80234350: lh          $t5, 0xE($v1)
    ctx->r13 = MEM_H(ctx->r3, 0XE);
    // 0x80234354: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80234358: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8023435C: multu       $t5, $a3
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234360: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80234364: mflo        $a0
    ctx->r4 = lo;
    // 0x80234368: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8023436C: jal         0x8022B948
    // 0x80234370: addiu       $a0, $t6, 0xC0
    ctx->r4 = ADD32(ctx->r14, 0XC0);
    func_8022B948(rdram, ctx);
        goto after_1;
    // 0x80234370: addiu       $a0, $t6, 0xC0
    ctx->r4 = ADD32(ctx->r14, 0XC0);
    after_1:
    // 0x80234374: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80234378: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8023437C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x80234380: sw          $v0, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = ctx->r2;
L_80234384:
    // 0x80234384: lw          $t7, 0x60($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X60);
    // 0x80234388: bnel        $t7, $zero, L_802343C4
    if (ctx->r15 != 0) {
        // 0x8023438C: lh          $a1, 0x2($v1)
        ctx->r5 = MEM_H(ctx->r3, 0X2);
            goto L_802343C4;
    }
    goto skip_2;
    // 0x8023438C: lh          $a1, 0x2($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X2);
    skip_2:
    // 0x80234390: lh          $t8, 0xE($v1)
    ctx->r24 = MEM_H(ctx->r3, 0XE);
    // 0x80234394: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80234398: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8023439C: multu       $t8, $a3
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802343A0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802343A4: mflo        $a0
    ctx->r4 = lo;
    // 0x802343A8: sll         $t9, $a0, 3
    ctx->r25 = S32(ctx->r4 << 3);
    // 0x802343AC: jal         0x8022B948
    // 0x802343B0: addiu       $a0, $t9, 0xC0
    ctx->r4 = ADD32(ctx->r25, 0XC0);
    func_8022B948(rdram, ctx);
        goto after_2;
    // 0x802343B0: addiu       $a0, $t9, 0xC0
    ctx->r4 = ADD32(ctx->r25, 0XC0);
    after_2:
    // 0x802343B4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x802343B8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802343BC: sw          $v0, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r2;
    // 0x802343C0: lh          $a1, 0x2($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X2);
L_802343C4:
    // 0x802343C4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802343C8: beql        $a1, $zero, L_802343F0
    if (ctx->r5 == 0) {
        // 0x802343CC: lh          $t0, 0x4($v1)
        ctx->r8 = MEM_H(ctx->r3, 0X4);
            goto L_802343F0;
    }
    goto skip_3;
    // 0x802343CC: lh          $t0, 0x4($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X4);
    skip_3:
    // 0x802343D0: beq         $a1, $at, L_80234418
    if (ctx->r5 == ctx->r1) {
        // 0x802343D4: addiu       $v0, $a2, 0x18
        ctx->r2 = ADD32(ctx->r6, 0X18);
            goto L_80234418;
    }
    // 0x802343D4: addiu       $v0, $a2, 0x18
    ctx->r2 = ADD32(ctx->r6, 0X18);
    // 0x802343D8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802343DC: beq         $a1, $at, L_80234424
    if (ctx->r5 == ctx->r1) {
        // 0x802343E0: addiu       $v0, $a2, 0x18
        ctx->r2 = ADD32(ctx->r6, 0X18);
            goto L_80234424;
    }
    // 0x802343E0: addiu       $v0, $a2, 0x18
    ctx->r2 = ADD32(ctx->r6, 0X18);
    // 0x802343E4: b           L_80234430
    // 0x802343E8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
        goto L_80234430;
    // 0x802343E8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802343EC: lh          $t0, 0x4($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X4);
L_802343F0:
    // 0x802343F0: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802343F4: addiu       $v0, $a2, 0x18
    ctx->r2 = ADD32(ctx->r6, 0X18);
    // 0x802343F8: bne         $t0, $at, L_80234410
    if (ctx->r8 != ctx->r1) {
        // 0x802343FC: addiu       $t2, $zero, 0x2
        ctx->r10 = ADD32(0, 0X2);
            goto L_80234410;
    }
    // 0x802343FC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80234400: addiu       $v0, $a2, 0x18
    ctx->r2 = ADD32(ctx->r6, 0X18);
    // 0x80234404: addiu       $t1, $zero, 0x222
    ctx->r9 = ADD32(0, 0X222);
    // 0x80234408: b           L_8023444C
    // 0x8023440C: sh          $t1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r9;
        goto L_8023444C;
    // 0x8023440C: sh          $t1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r9;
L_80234410:
    // 0x80234410: b           L_8023444C
    // 0x80234414: sh          $t2, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r10;
        goto L_8023444C;
    // 0x80234414: sh          $t2, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r10;
L_80234418:
    // 0x80234418: addiu       $t3, $zero, 0x202
    ctx->r11 = ADD32(0, 0X202);
    // 0x8023441C: b           L_8023444C
    // 0x80234420: sh          $t3, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r11;
        goto L_8023444C;
    // 0x80234420: sh          $t3, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r11;
L_80234424:
    // 0x80234424: addiu       $t4, $zero, 0x200
    ctx->r12 = ADD32(0, 0X200);
    // 0x80234428: b           L_8023444C
    // 0x8023442C: sh          $t4, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r12;
        goto L_8023444C;
    // 0x8023442C: sh          $t4, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r12;
L_80234430:
    // 0x80234430: addiu       $a0, $a0, 0x5284
    ctx->r4 = ADD32(ctx->r4, 0X5284);
    // 0x80234434: jal         0x80231A24
    // 0x80234438: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x80234438: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_3:
    // 0x8023443C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80234440: addiu       $t5, $zero, 0x222
    ctx->r13 = ADD32(0, 0X222);
    // 0x80234444: addiu       $v0, $a2, 0x18
    ctx->r2 = ADD32(ctx->r6, 0X18);
    // 0x80234448: sh          $t5, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r13;
L_8023444C:
    // 0x8023444C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80234450: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80234454: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80234458: addiu       $t6, $zero, 0x1234
    ctx->r14 = ADD32(0, 0X1234);
    // 0x8023445C: sh          $zero, 0x10($v0)
    MEM_H(0X10, ctx->r2) = 0;
    // 0x80234460: sh          $zero, 0x12($v0)
    MEM_H(0X12, ctx->r2) = 0;
    // 0x80234464: sh          $t6, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r14;
    // 0x80234468: sb          $v1, 0x18($v0)
    MEM_B(0X18, ctx->r2) = ctx->r3;
    // 0x8023446C: sb          $v1, 0x19($v0)
    MEM_B(0X19, ctx->r2) = ctx->r3;
    // 0x80234470: sb          $v1, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r3;
    // 0x80234474: sb          $v1, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = ctx->r3;
    // 0x80234478: sh          $zero, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = 0;
    // 0x8023447C: sh          $zero, 0x1E($v0)
    MEM_H(0X1E, ctx->r2) = 0;
    // 0x80234480: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x80234484: sh          $zero, 0x40($v0)
    MEM_H(0X40, ctx->r2) = 0;
    // 0x80234488: sh          $zero, 0x42($v0)
    MEM_H(0X42, ctx->r2) = 0;
    // 0x8023448C: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x80234490: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x80234494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234498: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023449C: jr          $ra
    // 0x802344A0: nop

    return;
    // 0x802344A0: nop

;}
RECOMP_FUNC void func_80240370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80240370: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80240374: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80240378: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8024037C: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x80240380: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80240384: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x80240388: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x8024038C: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x80240390: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80240394: beq         $v1, $zero, L_802403D8
    if (ctx->r3 == 0) {
        // 0x80240398: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_802403D8;
    }
    // 0x80240398: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8024039C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x802403A0: sw          $t9, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r25;
    // 0x802403A4: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x802403A8: lw          $t0, 0x64($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X64);
    // 0x802403AC: bnel        $t0, $zero, L_802403C0
    if (ctx->r8 != 0) {
        // 0x802403B0: lw          $t1, 0x68($a0)
        ctx->r9 = MEM_W(ctx->r4, 0X68);
            goto L_802403C0;
    }
    goto skip_0;
    // 0x802403B0: lw          $t1, 0x68($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X68);
    skip_0:
    // 0x802403B4: b           L_802403C4
    // 0x802403B8: sw          $v1, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r3;
        goto L_802403C4;
    // 0x802403B8: sw          $v1, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r3;
    // 0x802403BC: lw          $t1, 0x68($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X68);
L_802403C0:
    // 0x802403C0: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
L_802403C4:
    // 0x802403C4: sw          $v1, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r3;
    // 0x802403C8: sb          $a3, 0x31($v1)
    MEM_B(0X31, ctx->r3) = ctx->r7;
    // 0x802403CC: sb          $a1, 0x32($v1)
    MEM_B(0X32, ctx->r3) = ctx->r5;
    // 0x802403D0: sb          $a2, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r6;
    // 0x802403D4: sw          $v1, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r3;
L_802403D8:
    // 0x802403D8: jr          $ra
    // 0x802403DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x802403DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80233BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80233BA0: beql        $a1, $zero, L_80233C7C
    if (ctx->r5 == 0) {
        // 0x80233BA4: addiu       $v0, $a0, 0x18
        ctx->r2 = ADD32(ctx->r4, 0X18);
            goto L_80233C7C;
    }
    goto skip_0;
    // 0x80233BA4: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    skip_0:
    // 0x80233BA8: lhu         $t6, 0xA($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0XA);
    // 0x80233BAC: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    // 0x80233BB0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80233BB4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80233BB8: sh          $t7, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r15;
    // 0x80233BBC: lhu         $t8, 0xC($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0XC);
    // 0x80233BC0: addiu       $t3, $zero, 0x200
    ctx->r11 = ADD32(0, 0X200);
    // 0x80233BC4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80233BC8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80233BCC: sh          $t9, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r25;
    // 0x80233BD0: lhu         $t0, 0xC($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0XC);
    // 0x80233BD4: ori         $t5, $t3, 0x1
    ctx->r13 = ctx->r11 | 0X1;
    // 0x80233BD8: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80233BDC: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80233BE0: sh          $t1, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = ctx->r9;
    // 0x80233BE4: lhu         $t2, 0xC($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0XC);
    // 0x80233BE8: sb          $zero, 0x30($v0)
    MEM_B(0X30, ctx->r2) = 0;
    // 0x80233BEC: sb          $a2, 0x31($v0)
    MEM_B(0X31, ctx->r2) = ctx->r6;
    // 0x80233BF0: sh          $t3, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r11;
    // 0x80233BF4: sh          $t2, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = ctx->r10;
    // 0x80233BF8: lbu         $v1, 0x22($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X22);
    // 0x80233BFC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80233C00: beq         $a3, $v1, L_80233C10
    if (ctx->r7 == ctx->r3) {
        // 0x80233C04: nop
    
            goto L_80233C10;
    }
    // 0x80233C04: nop

    // 0x80233C08: sh          $t5, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r13;
    // 0x80233C0C: lbu         $v1, 0x22($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X22);
L_80233C10:
    // 0x80233C10: bne         $a3, $v1, L_80233C20
    if (ctx->r7 != ctx->r3) {
        // 0x80233C14: nop
    
            goto L_80233C20;
    }
    // 0x80233C14: nop

    // 0x80233C18: b           L_80233C34
    // 0x80233C1C: sb          $t6, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r14;
        goto L_80233C34;
    // 0x80233C1C: sb          $t6, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r14;
L_80233C20:
    // 0x80233C20: bne         $v1, $at, L_80233C30
    if (ctx->r3 != ctx->r1) {
        // 0x80233C24: addiu       $t7, $zero, 0x3
        ctx->r15 = ADD32(0, 0X3);
            goto L_80233C30;
    }
    // 0x80233C24: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80233C28: b           L_80233C34
    // 0x80233C2C: sb          $t7, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r15;
        goto L_80233C34;
    // 0x80233C2C: sb          $t7, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r15;
L_80233C30:
    // 0x80233C30: sb          $zero, 0x30($v0)
    MEM_B(0X30, ctx->r2) = 0;
L_80233C34:
    // 0x80233C34: lbu         $v1, 0xE($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XE);
    // 0x80233C38: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80233C3C: bnel        $v1, $at, L_80233C50
    if (ctx->r3 != ctx->r1) {
        // 0x80233C40: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_80233C50;
    }
    goto skip_1;
    // 0x80233C40: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    skip_1:
    // 0x80233C44: b           L_80233C64
    // 0x80233C48: sb          $zero, 0x31($v0)
    MEM_B(0X31, ctx->r2) = 0;
        goto L_80233C64;
    // 0x80233C48: sb          $zero, 0x31($v0)
    MEM_B(0X31, ctx->r2) = 0;
    // 0x80233C4C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
L_80233C50:
    // 0x80233C50: bne         $v1, $at, L_80233C60
    if (ctx->r3 != ctx->r1) {
        // 0x80233C54: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80233C60;
    }
    // 0x80233C54: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80233C58: b           L_80233C64
    // 0x80233C5C: sb          $t8, 0x31($v0)
    MEM_B(0X31, ctx->r2) = ctx->r24;
        goto L_80233C64;
    // 0x80233C5C: sb          $t8, 0x31($v0)
    MEM_B(0X31, ctx->r2) = ctx->r24;
L_80233C60:
    // 0x80233C60: sb          $a2, 0x31($v0)
    MEM_B(0X31, ctx->r2) = ctx->r6;
L_80233C64:
    // 0x80233C64: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80233C68: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80233C6C: nop

    // 0x80233C70: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x80233C74: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x80233C78: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
L_80233C7C:
    // 0x80233C7C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80233C80: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80233C84: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80233C88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80233C8C: addiu       $t9, $zero, 0x1234
    ctx->r25 = ADD32(0, 0X1234);
    // 0x80233C90: addiu       $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
    // 0x80233C94: sh          $zero, 0x10($v0)
    MEM_H(0X10, ctx->r2) = 0;
    // 0x80233C98: sh          $zero, 0x12($v0)
    MEM_H(0X12, ctx->r2) = 0;
    // 0x80233C9C: sh          $t9, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r25;
    // 0x80233CA0: sb          $v1, 0x18($v0)
    MEM_B(0X18, ctx->r2) = ctx->r3;
    // 0x80233CA4: sb          $v1, 0x19($v0)
    MEM_B(0X19, ctx->r2) = ctx->r3;
    // 0x80233CA8: sb          $v1, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r3;
    // 0x80233CAC: sb          $v1, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = ctx->r3;
    // 0x80233CB0: sh          $zero, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = 0;
    // 0x80233CB4: sh          $zero, 0x1E($v0)
    MEM_H(0X1E, ctx->r2) = 0;
    // 0x80233CB8: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x80233CBC: sh          $zero, 0x24($v0)
    MEM_H(0X24, ctx->r2) = 0;
    // 0x80233CC0: sh          $a3, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r7;
    // 0x80233CC4: sh          $a3, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r7;
    // 0x80233CC8: sh          $t0, 0x2A($v0)
    MEM_H(0X2A, ctx->r2) = ctx->r8;
    // 0x80233CCC: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x80233CD0: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x80233CD4: lw          $t1, 0x14($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X14);
    // 0x80233CD8: sh          $zero, 0x40($v0)
    MEM_H(0X40, ctx->r2) = 0;
    // 0x80233CDC: sh          $zero, 0x42($v0)
    MEM_H(0X42, ctx->r2) = 0;
    // 0x80233CE0: jr          $ra
    // 0x80233CE4: sw          $t1, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r9;
    return;
    // 0x80233CE4: sw          $t1, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r9;
;}
RECOMP_FUNC void func_8022D680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022D680: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8022D684: lw          $t6, 0x8D0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X8D0);
    // 0x8022D688: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D68C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D690: bne         $t6, $zero, L_8022D780
    if (ctx->r14 != 0) {
        // 0x8022D694: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8022D780;
    }
    // 0x8022D694: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022D698: lui         $s0, 0x8028
    ctx->r16 = S32(0X8028 << 16);
    // 0x8022D69C: addiu       $s0, $s0, 0xBC0
    ctx->r16 = ADD32(ctx->r16, 0XBC0);
    // 0x8022D6A0: lhu         $a0, 0x46($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D6A4: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x8022D6A8: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x8022D6AC: jal         0x8022BA58
    // 0x8022D6B0: sll         $a0, $t7, 3
    ctx->r4 = S32(ctx->r15 << 3);
    func_8022BA58(rdram, ctx);
        goto after_0;
    // 0x8022D6B0: sll         $a0, $t7, 3
    ctx->r4 = S32(ctx->r15 << 3);
    after_0:
    // 0x8022D6B4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022D6B8: sw          $v0, 0x8D0($at)
    MEM_W(0X8D0, ctx->r1) = ctx->r2;
    // 0x8022D6BC: lhu         $a0, 0x46($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D6C0: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8022D6C4: jal         0x8022BA58
    // 0x8022D6C8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8022BA58(rdram, ctx);
        goto after_1;
    // 0x8022D6C8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_1:
    // 0x8022D6CC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022D6D0: sw          $v0, 0x8D4($at)
    MEM_W(0X8D4, ctx->r1) = ctx->r2;
    // 0x8022D6D4: lhu         $a0, 0x46($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D6D8: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8022D6DC: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x8022D6E0: jal         0x8022BA58
    // 0x8022D6E4: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    func_8022BA58(rdram, ctx);
        goto after_2;
    // 0x8022D6E4: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    after_2:
    // 0x8022D6E8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022D6EC: sw          $v0, 0x8D8($at)
    MEM_W(0X8D8, ctx->r1) = ctx->r2;
    // 0x8022D6F0: lhu         $a0, 0x46($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D6F4: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x8022D6F8: jal         0x8022BA58
    // 0x8022D6FC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8022BA58(rdram, ctx);
        goto after_3;
    // 0x8022D6FC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_3:
    // 0x8022D700: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022D704: sw          $v0, 0x8DC($at)
    MEM_W(0X8DC, ctx->r1) = ctx->r2;
    // 0x8022D708: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D70C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D710: lw          $a0, 0x8D0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8D0);
    // 0x8022D714: sll         $t1, $a2, 4
    ctx->r9 = S32(ctx->r6 << 4);
    // 0x8022D718: subu        $t1, $t1, $a2
    ctx->r9 = SUB32(ctx->r9, ctx->r6);
    // 0x8022D71C: sll         $a2, $t1, 3
    ctx->r6 = S32(ctx->r9 << 3);
    // 0x8022D720: jal         0x8022B780
    // 0x8022D724: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8022B780(rdram, ctx);
        goto after_4;
    // 0x8022D724: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8022D728: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D72C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D730: lw          $a0, 0x8D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8D4);
    // 0x8022D734: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x8022D738: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x8022D73C: jal         0x8022B780
    // 0x8022D740: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8022B780(rdram, ctx);
        goto after_5;
    // 0x8022D740: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8022D744: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D748: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D74C: lw          $a0, 0x8D8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8D8);
    // 0x8022D750: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x8022D754: subu        $t3, $t3, $a2
    ctx->r11 = SUB32(ctx->r11, ctx->r6);
    // 0x8022D758: sll         $a2, $t3, 2
    ctx->r6 = S32(ctx->r11 << 2);
    // 0x8022D75C: jal         0x8022B780
    // 0x8022D760: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8022B780(rdram, ctx);
        goto after_6;
    // 0x8022D760: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8022D764: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D768: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D76C: lw          $a0, 0x8DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8DC);
    // 0x8022D770: sll         $t4, $a2, 2
    ctx->r12 = S32(ctx->r6 << 2);
    // 0x8022D774: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x8022D778: jal         0x8022B780
    // 0x8022D77C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8022B780(rdram, ctx);
        goto after_7;
    // 0x8022D77C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
L_8022D780:
    // 0x8022D780: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D784: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022D788: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022D78C: jr          $ra
    // 0x8022D790: nop

    return;
    // 0x8022D790: nop

;}
RECOMP_FUNC void func_80230FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80230FF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80230FFC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80231000: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80231004: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80231008: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023100C: addiu       $a1, $a1, 0x14D8
    ctx->r5 = ADD32(ctx->r5, 0X14D8);
    // 0x80231010: addiu       $a0, $a0, 0x1500
    ctx->r4 = ADD32(ctx->r4, 0X1500);
    // 0x80231014: jal         0x802371E0
    // 0x80231018: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_802371E0(rdram, ctx);
        goto after_0;
    // 0x80231018: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x8023101C: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80231020: lw          $a1, 0x300($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X300);
    // 0x80231024: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80231028: addiu       $s0, $zero, 0x10
    ctx->r16 = ADD32(0, 0X10);
    // 0x8023102C: beq         $a1, $zero, L_80231050
    if (ctx->r5 == 0) {
        // 0x80231030: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80231050;
    }
    // 0x80231030: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80231034: beq         $a1, $at, L_80231060
    if (ctx->r5 == ctx->r1) {
        // 0x80231038: addiu       $s0, $zero, 0x2
        ctx->r16 = ADD32(0, 0X2);
            goto L_80231060;
    }
    // 0x80231038: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x8023103C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80231040: beq         $a1, $at, L_80231074
    if (ctx->r5 == ctx->r1) {
        // 0x80231044: addiu       $s0, $zero, 0x1E
        ctx->r16 = ADD32(0, 0X1E);
            goto L_80231074;
    }
    // 0x80231044: addiu       $s0, $zero, 0x1E
    ctx->r16 = ADD32(0, 0X1E);
    // 0x80231048: b           L_80231088
    // 0x8023104C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
        goto L_80231088;
    // 0x8023104C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
L_80231050:
    // 0x80231050: jal         0x80231A24
    // 0x80231054: addiu       $a0, $a0, 0x4F68
    ctx->r4 = ADD32(ctx->r4, 0X4F68);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x80231054: addiu       $a0, $a0, 0x4F68
    ctx->r4 = ADD32(ctx->r4, 0X4F68);
    after_1:
    // 0x80231058: b           L_80231094
    // 0x8023105C: nop

        goto L_80231094;
    // 0x8023105C: nop

L_80231060:
    // 0x80231060: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80231064: jal         0x80231A24
    // 0x80231068: addiu       $a0, $a0, 0x4F80
    ctx->r4 = ADD32(ctx->r4, 0X4F80);
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x80231068: addiu       $a0, $a0, 0x4F80
    ctx->r4 = ADD32(ctx->r4, 0X4F80);
    after_2:
    // 0x8023106C: b           L_80231094
    // 0x80231070: nop

        goto L_80231094;
    // 0x80231070: nop

L_80231074:
    // 0x80231074: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80231078: jal         0x80231A24
    // 0x8023107C: addiu       $a0, $a0, 0x4F98
    ctx->r4 = ADD32(ctx->r4, 0X4F98);
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x8023107C: addiu       $a0, $a0, 0x4F98
    ctx->r4 = ADD32(ctx->r4, 0X4F98);
    after_3:
    // 0x80231080: b           L_80231094
    // 0x80231084: nop

        goto L_80231094;
    // 0x80231084: nop

L_80231088:
    // 0x80231088: jal         0x80231A24
    // 0x8023108C: addiu       $a0, $a0, 0x4FB0
    ctx->r4 = ADD32(ctx->r4, 0X4FB0);
    func_80231A24(rdram, ctx);
        goto after_4;
    // 0x8023108C: addiu       $a0, $a0, 0x4FB0
    ctx->r4 = ADD32(ctx->r4, 0X4FB0);
    after_4:
    // 0x80231090: addiu       $s0, $zero, 0x10
    ctx->r16 = ADD32(0, 0X10);
L_80231094:
    // 0x80231094: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80231098: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8023109C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802310A0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802310A4: addiu       $a1, $a1, 0x3518
    ctx->r5 = ADD32(ctx->r5, 0X3518);
    // 0x802310A8: addiu       $a0, $a0, 0x1218
    ctx->r4 = ADD32(ctx->r4, 0X1218);
    // 0x802310AC: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    // 0x802310B0: jal         0x8022C838
    // 0x802310B4: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    func_8022C838(rdram, ctx);
        goto after_5;
    // 0x802310B4: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    after_5:
    // 0x802310B8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802310BC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802310C0: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x802310C4: addiu       $a2, $a2, 0x14C0
    ctx->r6 = ADD32(ctx->r6, 0X14C0);
    // 0x802310C8: addiu       $a1, $a1, 0x3518
    ctx->r5 = ADD32(ctx->r5, 0X3518);
    // 0x802310CC: jal         0x8022CA14
    // 0x802310D0: addiu       $a0, $a0, 0x1218
    ctx->r4 = ADD32(ctx->r4, 0X1218);
    func_8022CA14(rdram, ctx);
        goto after_6;
    // 0x802310D0: addiu       $a0, $a0, 0x1218
    ctx->r4 = ADD32(ctx->r4, 0X1218);
    after_6:
    // 0x802310D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802310D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802310DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802310E0: jr          $ra
    // 0x802310E4: nop

    return;
    // 0x802310E4: nop

;}
RECOMP_FUNC void func_802425F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802425F0: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x802425F4: addiu       $t9, $zero, 0x4000
    ctx->r25 = ADD32(0, 0X4000);
    // 0x802425F8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802425FC: sll         $t6, $v0, 14
    ctx->r14 = S32(ctx->r2 << 14);
    // 0x80242600: sra         $v1, $t6, 15
    ctx->r3 = S32(SIGNED(ctx->r14) >> 15);
    // 0x80242604: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x80242608: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8024260C: subu        $t0, $t9, $v1
    ctx->r8 = SUB32(ctx->r25, ctx->r3);
    // 0x80242610: sh          $t0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r8;
    // 0x80242614: sw          $t1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r9;
    // 0x80242618: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8024261C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
L_80242620:
    // 0x80242620: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80242624: slti        $at, $a1, 0x8
    ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x80242628: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8024262C: bne         $at, $zero, L_80242620
    if (ctx->r1 != 0) {
        // 0x80242630: sh          $zero, 0x6($a2)
        MEM_H(0X6, ctx->r6) = 0;
            goto L_80242620;
    }
    // 0x80242630: sh          $zero, 0x6($a2)
    MEM_H(0X6, ctx->r6) = 0;
    // 0x80242634: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80242638: lui         $at, 0x40D0
    ctx->r1 = S32(0X40D0 << 16);
    // 0x8024263C: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x80242640: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80242644: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80242648: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8024264C: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x80242650: sh          $v1, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r3;
    // 0x80242654: div.d       $f2, $f6, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = DIV_D(ctx->f6.d, ctx->f12.d);
    // 0x80242658: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8024265C: beq         $at, $zero, L_80242688
    if (ctx->r1 == 0) {
        // 0x80242660: mov.d       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
            goto L_80242688;
    }
    // 0x80242660: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
L_80242664:
    // 0x80242664: mul.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x80242668: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8024266C: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x80242670: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80242674: mul.d       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x80242678: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x8024267C: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x80242680: bne         $at, $zero, L_80242664
    if (ctx->r1 != 0) {
        // 0x80242684: sh          $t3, 0x6($a2)
        MEM_H(0X6, ctx->r6) = ctx->r11;
            goto L_80242664;
    }
    // 0x80242684: sh          $t3, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r11;
L_80242688:
    // 0x80242688: jr          $ra
    // 0x8024268C: nop

    return;
    // 0x8024268C: nop

;}
RECOMP_FUNC void func_8021C9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021C9C0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8021C9C4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021C9C8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8021C9CC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8021C9D0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8021C9D4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8021C9D8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8021C9DC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8021C9E0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021C9E4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021C9E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021C9EC: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x8021C9F0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x8021C9F4: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8021C9F8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8021C9FC: andi        $s1, $a2, 0xFF
    ctx->r17 = ctx->r6 & 0XFF;
    // 0x8021CA00: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x8021CA04: beq         $v0, $zero, L_8021CA24
    if (ctx->r2 == 0) {
        // 0x8021CA08: lwc1        $f16, 0x20($a1)
        ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
            goto L_8021CA24;
    }
    // 0x8021CA08: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x8021CA0C: lw          $a0, 0x1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1C);
    // 0x8021CA10: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    // 0x8021CA14: jalr        $v0
    // 0x8021CA18: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8021CA18: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x8021CA1C: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8021CA20: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
L_8021CA24:
    // 0x8021CA24: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x8021CA28: lw          $t6, -0x3C20($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3C20);
    // 0x8021CA2C: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x8021CA30: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x8021CA34: subu        $t7, $s7, $t6
    ctx->r15 = SUB32(ctx->r23, ctx->r14);
    // 0x8021CA38: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x8021CA3C: addiu       $v0, $v0, -0x3C08
    ctx->r2 = ADD32(ctx->r2, -0X3C08);
    // 0x8021CA40: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x8021CA44: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x8021CA48: lw          $t9, -0x3C0C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C0C);
    // 0x8021CA4C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8021CA50: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8021CA54: mflo        $t8
    ctx->r24 = lo;
    // 0x8021CA58: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8021CA5C: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x8021CA60: lhu         $t3, 0x0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X0);
    // 0x8021CA64: lui         $fp, 0x8026
    ctx->r30 = S32(0X8026 << 16);
    // 0x8021CA68: addiu       $fp, $fp, -0x3C1C
    ctx->r30 = ADD32(ctx->r30, -0X3C1C);
    // 0x8021CA6C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8021CA70: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x8021CA74: lw          $t7, 0x4($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X4);
    // 0x8021CA78: lw          $t1, 0x0($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X0);
    // 0x8021CA7C: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x8021CA80: lhu         $t0, 0x0($t7)
    ctx->r8 = MEM_HU(ctx->r15, 0X0);
    // 0x8021CA84: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x8021CA88: addu        $s6, $t5, $t6
    ctx->r22 = ADD32(ctx->r13, ctx->r14);
    // 0x8021CA8C: sll         $t9, $t0, 6
    ctx->r25 = S32(ctx->r8 << 6);
    // 0x8021CA90: addu        $v1, $t9, $t1
    ctx->r3 = ADD32(ctx->r25, ctx->r9);
    // 0x8021CA94: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8021CA98: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x8021CA9C: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8021CAA0: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8021CAA4: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x8021CAA8: mul.s       $f6, $f18, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x8021CAAC: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021CAB0: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x8021CAB4: lwc1        $f10, 0x14($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X14);
    // 0x8021CAB8: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    // 0x8021CABC: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021CAC0: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
    // 0x8021CAC4: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    // 0x8021CAC8: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x8021CACC: jal         0x8022AA40
    // 0x8021CAD0: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    func_8022AA40(rdram, ctx);
        goto after_1;
    // 0x8021CAD0: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x8021CAD4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021CAD8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021CADC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021CAE0: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021CAE4: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8021CAE8: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8021CAEC: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021CAF0: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8021CAF4: bc1fl       L_8021CB0C
    if (!c1cs) {
        // 0x8021CAF8: swc1        $f14, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
            goto L_8021CB0C;
    }
    goto skip_0;
    // 0x8021CAF8: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
    skip_0:
    // 0x8021CAFC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8021CB00: b           L_8021CB2C
    // 0x8021CB04: div.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
        goto L_8021CB2C;
    // 0x8021CB04: div.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8021CB08: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
L_8021CB0C:
    // 0x8021CB0C: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    // 0x8021CB10: jal         0x8022AA40
    // 0x8021CB14: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    func_8022AA40(rdram, ctx);
        goto after_2;
    // 0x8021CB14: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x8021CB18: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8021CB1C: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021CB20: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8021CB24: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8021CB28: div.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
L_8021CB2C:
    // 0x8021CB2C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8021CB30: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8021CB34: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8021CB38: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8021CB3C: div.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f14.fl, ctx->f2.fl);
    // 0x8021CB40: neg.s       $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = -ctx->f18.fl;
    // 0x8021CB44: div.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8021CB48: neg.s       $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = -ctx->f14.fl;
    // 0x8021CB4C: div.s       $f4, $f14, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f14.fl, ctx->f16.fl);
    // 0x8021CB50: swc1        $f0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f0.u32l;
    // 0x8021CB54: swc1        $f0, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f0.u32l;
    // 0x8021CB58: div.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8021CB5C: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
    // 0x8021CB60: swc1        $f8, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f8.u32l;
    // 0x8021CB64: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
    // 0x8021CB68: blez        $v1, L_8021CCF0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8021CB6C: nop
    
            goto L_8021CCF0;
    }
    // 0x8021CB6C: nop

L_8021CB70:
    // 0x8021CB70: lw          $t2, 0x10($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X10);
    // 0x8021CB74: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8021CB78: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x8021CB7C: sllv        $t4, $t3, $s4
    ctx->r12 = S32(ctx->r11 << (ctx->r20 & 31));
    // 0x8021CB80: and         $t5, $t2, $t4
    ctx->r13 = ctx->r10 & ctx->r12;
    // 0x8021CB84: bne         $t5, $zero, L_8021CBA0
    if (ctx->r13 != 0) {
        // 0x8021CB88: addu        $s1, $a0, $s5
        ctx->r17 = ADD32(ctx->r4, ctx->r21);
            goto L_8021CBA0;
    }
    // 0x8021CB88: addu        $s1, $a0, $s5
    ctx->r17 = ADD32(ctx->r4, ctx->r21);
    // 0x8021CB8C: lbu         $t6, 0x7($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X7);
    // 0x8021CB90: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8021CB94: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8021CB98: beq         $t7, $zero, L_8021CBA8
    if (ctx->r15 == 0) {
        // 0x8021CB9C: nop
    
            goto L_8021CBA8;
    }
    // 0x8021CB9C: nop

L_8021CBA0:
    // 0x8021CBA0: b           L_8021CBA8
    // 0x8021CBA4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_8021CBA8;
    // 0x8021CBA4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8021CBA8:
    // 0x8021CBA8: bne         $s0, $zero, L_8021CC04
    if (ctx->r16 != 0) {
        // 0x8021CBAC: nop
    
            goto L_8021CC04;
    }
    // 0x8021CBAC: nop

    // 0x8021CBB0: lbu         $t0, 0x7($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X7);
    // 0x8021CBB4: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x8021CBB8: slt         $at, $s4, $t1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8021CBBC: andi        $t9, $t0, 0x2
    ctx->r25 = ctx->r8 & 0X2;
    // 0x8021CBC0: beq         $t9, $zero, L_8021CC04
    if (ctx->r25 == 0) {
        // 0x8021CBC4: nop
    
            goto L_8021CC04;
    }
    // 0x8021CBC4: nop

    // 0x8021CBC8: beq         $at, $zero, L_8021CCDC
    if (ctx->r1 == 0) {
        // 0x8021CBCC: addu        $v0, $a0, $s5
        ctx->r2 = ADD32(ctx->r4, ctx->r21);
            goto L_8021CCDC;
    }
    // 0x8021CBCC: addu        $v0, $a0, $s5
    ctx->r2 = ADD32(ctx->r4, ctx->r21);
    // 0x8021CBD0: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
    // 0x8021CBD4: lbu         $t3, 0x2A($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2A);
    // 0x8021CBD8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021CBDC: subu        $s2, $t8, $t3
    ctx->r18 = SUB32(ctx->r24, ctx->r11);
    // 0x8021CBE0: blezl       $s2, L_8021CCE0
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8021CBE4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8021CCE0;
    }
    goto skip_1;
    // 0x8021CBE4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_1:
L_8021CBE8:
    // 0x8021CBE8: jal         0x802230E4
    // 0x8021CBEC: nop

    func_802230E4(rdram, ctx);
        goto after_3;
    // 0x8021CBEC: nop

    after_3:
    // 0x8021CBF0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021CBF4: bne         $s0, $s2, L_8021CBE8
    if (ctx->r16 != ctx->r18) {
        // 0x8021CBF8: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_8021CBE8;
    }
    // 0x8021CBF8: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8021CBFC: b           L_8021CCDC
    // 0x8021CC00: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
        goto L_8021CCDC;
    // 0x8021CC00: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
L_8021CC04:
    // 0x8021CC04: bne         $s4, $zero, L_8021CC30
    if (ctx->r20 != 0) {
        // 0x8021CC08: sll         $v0, $s4, 1
        ctx->r2 = S32(ctx->r20 << 1);
            goto L_8021CC30;
    }
    // 0x8021CC08: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
    // 0x8021CC0C: lw          $t4, 0x4($s7)
    ctx->r12 = MEM_W(ctx->r23, 0X4);
    // 0x8021CC10: lw          $t2, 0x0($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X0);
    // 0x8021CC14: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x8021CC18: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x8021CC1C: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x8021CC20: jal         0x80223108
    // 0x8021CC24: addu        $a0, $t2, $t7
    ctx->r4 = ADD32(ctx->r10, ctx->r15);
    func_80223108(rdram, ctx);
        goto after_4;
    // 0x8021CC24: addu        $a0, $t2, $t7
    ctx->r4 = ADD32(ctx->r10, ctx->r15);
    after_4:
    // 0x8021CC28: b           L_8021CC50
    // 0x8021CC2C: nop

        goto L_8021CC50;
    // 0x8021CC2C: nop

L_8021CC30:
    // 0x8021CC30: lw          $t9, 0x4($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X4);
    // 0x8021CC34: lw          $t0, 0x0($fp)
    ctx->r8 = MEM_W(ctx->r30, 0X0);
    // 0x8021CC38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8021CC3C: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x8021CC40: lhu         $t8, 0x0($t1)
    ctx->r24 = MEM_HU(ctx->r9, 0X0);
    // 0x8021CC44: sll         $t3, $t8, 6
    ctx->r11 = S32(ctx->r24 << 6);
    // 0x8021CC48: jal         0x80222F30
    // 0x8021CC4C: addu        $a0, $t0, $t3
    ctx->r4 = ADD32(ctx->r8, ctx->r11);
    func_80222F30(rdram, ctx);
        goto after_5;
    // 0x8021CC4C: addu        $a0, $t0, $t3
    ctx->r4 = ADD32(ctx->r8, ctx->r11);
    after_5:
L_8021CC50:
    // 0x8021CC50: beq         $s0, $zero, L_8021CC8C
    if (ctx->r16 == 0) {
        // 0x8021CC54: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_8021CC8C;
    }
    // 0x8021CC54: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8021CC58: lbu         $t4, 0x4($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X4);
    // 0x8021CC5C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021CC60: blezl       $t4, L_8021CC90
    if (SIGNED(ctx->r12) <= 0) {
        // 0x8021CC64: lbu         $v1, 0x4($s6)
        ctx->r3 = MEM_BU(ctx->r22, 0X4);
            goto L_8021CC90;
    }
    goto skip_2;
    // 0x8021CC64: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
    skip_2:
    // 0x8021CC68: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
L_8021CC6C:
    // 0x8021CC6C: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x8021CC70: jal         0x80220C44
    // 0x8021CC74: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    func_80220C44(rdram, ctx);
        goto after_6;
    // 0x8021CC74: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    after_6:
    // 0x8021CC78: lbu         $t2, 0x4($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X4);
    // 0x8021CC7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021CC80: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8021CC84: bnel        $at, $zero, L_8021CC6C
    if (ctx->r1 != 0) {
        // 0x8021CC88: lw          $t5, 0x0($s1)
        ctx->r13 = MEM_W(ctx->r17, 0X0);
            goto L_8021CC6C;
    }
    goto skip_3;
    // 0x8021CC88: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    skip_3:
L_8021CC8C:
    // 0x8021CC8C: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
L_8021CC90:
    // 0x8021CC90: addiu       $t7, $s4, 0x1
    ctx->r15 = ADD32(ctx->r20, 0X1);
    // 0x8021CC94: bnel        $t7, $v1, L_8021CCA8
    if (ctx->r15 != ctx->r3) {
        // 0x8021CC98: lw          $t9, 0x0($s6)
        ctx->r25 = MEM_W(ctx->r22, 0X0);
            goto L_8021CCA8;
    }
    goto skip_4;
    // 0x8021CC98: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    skip_4:
    // 0x8021CC9C: b           L_8021CCF0
    // 0x8021CCA0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
        goto L_8021CCF0;
    // 0x8021CCA0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8021CCA4: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
L_8021CCA8:
    // 0x8021CCA8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021CCAC: addu        $v0, $t9, $s5
    ctx->r2 = ADD32(ctx->r25, ctx->r21);
    // 0x8021CCB0: lbu         $t1, 0x6($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X6);
    // 0x8021CCB4: lbu         $t8, 0x2A($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2A);
    // 0x8021CCB8: subu        $s2, $t1, $t8
    ctx->r18 = SUB32(ctx->r9, ctx->r24);
    // 0x8021CCBC: bltz        $s2, L_8021CCDC
    if (SIGNED(ctx->r18) < 0) {
        // 0x8021CCC0: addiu       $s1, $s2, 0x1
        ctx->r17 = ADD32(ctx->r18, 0X1);
            goto L_8021CCDC;
    }
    // 0x8021CCC0: addiu       $s1, $s2, 0x1
    ctx->r17 = ADD32(ctx->r18, 0X1);
L_8021CCC4:
    // 0x8021CCC4: jal         0x802230E4
    // 0x8021CCC8: nop

    func_802230E4(rdram, ctx);
        goto after_7;
    // 0x8021CCC8: nop

    after_7:
    // 0x8021CCCC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021CCD0: bne         $s1, $s0, L_8021CCC4
    if (ctx->r17 != ctx->r16) {
        // 0x8021CCD4: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_8021CCC4;
    }
    // 0x8021CCD4: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8021CCD8: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
L_8021CCDC:
    // 0x8021CCDC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8021CCE0:
    // 0x8021CCE0: slt         $at, $s4, $v1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8021CCE4: bne         $at, $zero, L_8021CB70
    if (ctx->r1 != 0) {
        // 0x8021CCE8: addiu       $s5, $s5, 0x24
        ctx->r21 = ADD32(ctx->r21, 0X24);
            goto L_8021CB70;
    }
    // 0x8021CCE8: addiu       $s5, $s5, 0x24
    ctx->r21 = ADD32(ctx->r21, 0X24);
    // 0x8021CCEC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_8021CCF0:
    // 0x8021CCF0: blezl       $s3, L_8021CD10
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8021CCF4: lwc1        $f10, 0x58($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
            goto L_8021CD10;
    }
    goto skip_5;
    // 0x8021CCF4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    skip_5:
L_8021CCF8:
    // 0x8021CCF8: jal         0x802230E4
    // 0x8021CCFC: nop

    func_802230E4(rdram, ctx);
        goto after_8;
    // 0x8021CCFC: nop

    after_8:
    // 0x8021CD00: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8021CD04: bne         $s4, $s3, L_8021CCF8
    if (ctx->r20 != ctx->r19) {
        // 0x8021CD08: nop
    
            goto L_8021CCF8;
    }
    // 0x8021CD08: nop

    // 0x8021CD0C: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
L_8021CD10:
    // 0x8021CD10: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8021CD14: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
    // 0x8021CD18: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021CD1C: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
    // 0x8021CD20: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021CD24: swc1        $f6, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f6.u32l;
    // 0x8021CD28: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021CD2C: swc1        $f8, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f8.u32l;
    // 0x8021CD30: lw          $v0, 0x18($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X18);
    // 0x8021CD34: beql        $v0, $zero, L_8021CD48
    if (ctx->r2 == 0) {
        // 0x8021CD38: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_8021CD48;
    }
    goto skip_6;
    // 0x8021CD38: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_6:
    // 0x8021CD3C: jalr        $v0
    // 0x8021CD40: lw          $a0, 0x20($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X20);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x8021CD40: lw          $a0, 0x20($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X20);
    after_9:
    // 0x8021CD44: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8021CD48:
    // 0x8021CD48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021CD4C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021CD50: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021CD54: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8021CD58: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8021CD5C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8021CD60: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8021CD64: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8021CD68: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8021CD6C: jr          $ra
    // 0x8021CD70: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x8021CD70: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80216464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80216464: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80216468: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8021646C: lwc1        $f18, 0x18($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80216470: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80216474: sub.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x80216478: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x8021647C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80216480: sub.s       $f2, $f14, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x80216484: lwc1        $f8, 0x8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80216488: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8021648C: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80216490: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80216494: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80216498: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021649C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802164A0: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x802164A4: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x802164A8: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x802164AC: nop

    // 0x802164B0: bc1f        L_802164C0
    if (!c1cs) {
        // 0x802164B4: nop
    
            goto L_802164C0;
    }
    // 0x802164B4: nop

    // 0x802164B8: jr          $ra
    // 0x802164BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802164BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802164C0:
    // 0x802164C0: jr          $ra
    // 0x802164C4: nop

    return;
    // 0x802164C4: nop

;}
RECOMP_FUNC void func_80245A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80245A80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80245A84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80245A88: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80245A8C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80245A90: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80245A94: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80245A98: sw          $t6, 0x1A50($at)
    MEM_W(0X1A50, ctx->r1) = ctx->r14;
    // 0x80245A9C: addiu       $a1, $a1, 0x5F00
    ctx->r5 = ADD32(ctx->r5, 0X5F00);
    // 0x80245AA0: addiu       $a0, $a0, 0x5F08
    ctx->r4 = ADD32(ctx->r4, 0X5F08);
    // 0x80245AA4: jal         0x802371E0
    // 0x80245AA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802371E0(rdram, ctx);
        goto after_0;
    // 0x80245AA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80245AAC: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80245AB0: addiu       $a0, $a0, 0x5F08
    ctx->r4 = ADD32(ctx->r4, 0X5F08);
    // 0x80245AB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80245AB8: jal         0x80236B80
    // 0x80245ABC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80236B80(rdram, ctx);
        goto after_1;
    // 0x80245ABC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80245AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80245AC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80245AC8: jr          $ra
    // 0x80245ACC: nop

    return;
    // 0x80245ACC: nop

;}
RECOMP_FUNC void func_80205010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80205014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80205018: jal         0x80237720
    // 0x8020501C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80237720(rdram, ctx);
        goto after_0;
    // 0x8020501C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80205020: srl         $t6, $v0, 2
    ctx->r14 = S32(U32(ctx->r2) >> 2);
    // 0x80205024: bne         $t6, $zero, L_8020504C
    if (ctx->r14 != 0) {
        // 0x80205028: lui         $t7, 0x8025
        ctx->r15 = S32(0X8025 << 16);
            goto L_8020504C;
    }
    // 0x80205028: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8020502C: lw          $t7, -0x1940($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1940);
    // 0x80205030: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80205034: bnel        $t7, $zero, L_80205050
    if (ctx->r15 != 0) {
        // 0x80205038: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80205050;
    }
    goto skip_0;
    // 0x80205038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8020503C: jal         0x80231A24
    // 0x80205040: addiu       $a0, $a0, 0x28D8
    ctx->r4 = ADD32(ctx->r4, 0X28D8);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x80205040: addiu       $a0, $a0, 0x28D8
    ctx->r4 = ADD32(ctx->r4, 0X28D8);
    after_1:
    // 0x80205044: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80205048: sw          $zero, -0x1940($at)
    MEM_W(-0X1940, ctx->r1) = 0;
L_8020504C:
    // 0x8020504C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80205050:
    // 0x80205050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80205054: jr          $ra
    // 0x80205058: nop

    return;
    // 0x80205058: nop

;}
RECOMP_FUNC void func_80200B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80200B20: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80200B24: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80200B28: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x80200B2C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80200B30: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x80200B34: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80200B38: lw          $t7, 0x3C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X3C);
    // 0x80200B3C: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80200B40: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80200B44: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80200B48: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x80200B4C: or          $fp, $sp, $zero
    ctx->r30 = ctx->r29 | 0;
    // 0x80200B50: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80200B54: bnel        $v0, $zero, L_80200B70
    if (ctx->r2 != 0) {
        // 0x80200B58: lbu         $t0, 0x9($v0)
        ctx->r8 = MEM_BU(ctx->r2, 0X9);
            goto L_80200B70;
    }
    goto skip_0;
    // 0x80200B58: lbu         $t0, 0x9($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X9);
    skip_0:
    // 0x80200B5C: jal         0x80231A24
    // 0x80200B60: addiu       $a0, $a0, 0x1C10
    ctx->r4 = ADD32(ctx->r4, 0X1C10);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80200B60: addiu       $a0, $a0, 0x1C10
    ctx->r4 = ADD32(ctx->r4, 0X1C10);
    after_0:
    // 0x80200B64: b           L_80200C18
    // 0x80200B68: lw          $ra, 0x2C($fp)
    ctx->r31 = MEM_W(ctx->r30, 0X2C);
        goto L_80200C18;
    // 0x80200B68: lw          $ra, 0x2C($fp)
    ctx->r31 = MEM_W(ctx->r30, 0X2C);
    // 0x80200B6C: lbu         $t0, 0x9($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X9);
L_80200B70:
    // 0x80200B70: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x80200B74: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x80200B78: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x80200B7C: addiu       $t2, $t1, 0x7
    ctx->r10 = ADD32(ctx->r9, 0X7);
    // 0x80200B80: and         $t3, $t2, $v1
    ctx->r11 = ctx->r10 & ctx->r3;
    // 0x80200B84: subu        $sp, $sp, $t3
    ctx->r29 = SUB32(ctx->r29, ctx->r11);
    // 0x80200B88: addiu       $t4, $sp, 0x10
    ctx->r12 = ADD32(ctx->r29, 0X10);
    // 0x80200B8C: sw          $t4, 0x34($fp)
    MEM_W(0X34, ctx->r30) = ctx->r12;
    // 0x80200B90: lbu         $t5, 0x9($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X9);
    // 0x80200B94: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80200B98: addiu       $a0, $fp, 0x34
    ctx->r4 = ADD32(ctx->r30, 0X34);
    // 0x80200B9C: multu       $t5, $a3
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80200BA0: mflo        $t6
    ctx->r14 = lo;
    // 0x80200BA4: addiu       $t7, $t6, 0x7
    ctx->r15 = ADD32(ctx->r14, 0X7);
    // 0x80200BA8: and         $t8, $t7, $v1
    ctx->r24 = ctx->r15 & ctx->r3;
    // 0x80200BAC: subu        $sp, $sp, $t8
    ctx->r29 = SUB32(ctx->r29, ctx->r24);
    // 0x80200BB0: addiu       $t9, $sp, 0x10
    ctx->r25 = ADD32(ctx->r29, 0X10);
    // 0x80200BB4: sw          $t9, 0x38($fp)
    MEM_W(0X38, ctx->r30) = ctx->r25;
    // 0x80200BB8: lbu         $t0, 0x9($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X9);
    // 0x80200BBC: multu       $t0, $a3
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80200BC0: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80200BC4: mflo        $t1
    ctx->r9 = lo;
    // 0x80200BC8: addiu       $t2, $t1, 0x7
    ctx->r10 = ADD32(ctx->r9, 0X7);
    // 0x80200BCC: and         $t3, $t2, $v1
    ctx->r11 = ctx->r10 & ctx->r3;
    // 0x80200BD0: subu        $sp, $sp, $t3
    ctx->r29 = SUB32(ctx->r29, ctx->r11);
    // 0x80200BD4: addiu       $t4, $sp, 0x10
    ctx->r12 = ADD32(ctx->r29, 0X10);
    // 0x80200BD8: sw          $t4, 0x3C($fp)
    MEM_W(0X3C, ctx->r30) = ctx->r12;
    // 0x80200BDC: lbu         $t5, 0x9($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X9);
    // 0x80200BE0: addiu       $t6, $t5, 0x7
    ctx->r14 = ADD32(ctx->r13, 0X7);
    // 0x80200BE4: and         $t7, $t6, $v1
    ctx->r15 = ctx->r14 & ctx->r3;
    // 0x80200BE8: subu        $sp, $sp, $t7
    ctx->r29 = SUB32(ctx->r29, ctx->r15);
    // 0x80200BEC: addiu       $t8, $sp, 0x10
    ctx->r24 = ADD32(ctx->r29, 0X10);
    // 0x80200BF0: sw          $t8, 0x40($fp)
    MEM_W(0X40, ctx->r30) = ctx->r24;
    // 0x80200BF4: lbu         $t9, 0x9($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X9);
    // 0x80200BF8: sb          $zero, 0x44($fp)
    MEM_B(0X44, ctx->r30) = 0;
    // 0x80200BFC: sb          $t0, 0x45($fp)
    MEM_B(0X45, ctx->r30) = ctx->r8;
    // 0x80200C00: jal         0x80200C28
    // 0x80200C04: sh          $t9, 0x46($fp)
    MEM_H(0X46, ctx->r30) = ctx->r25;
    func_80200C28(rdram, ctx);
        goto after_1;
    // 0x80200C04: sh          $t9, 0x46($fp)
    MEM_H(0X46, ctx->r30) = ctx->r25;
    after_1:
    // 0x80200C08: lw          $a0, 0x48($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X48);
    // 0x80200C0C: jal         0x802009A8
    // 0x80200C10: addiu       $a1, $fp, 0x34
    ctx->r5 = ADD32(ctx->r30, 0X34);
    func_802009A8(rdram, ctx);
        goto after_2;
    // 0x80200C10: addiu       $a1, $fp, 0x34
    ctx->r5 = ADD32(ctx->r30, 0X34);
    after_2:
    // 0x80200C14: lw          $ra, 0x2C($fp)
    ctx->r31 = MEM_W(ctx->r30, 0X2C);
L_80200C18:
    // 0x80200C18: or          $sp, $fp, $zero
    ctx->r29 = ctx->r30 | 0;
    // 0x80200C1C: lw          $fp, 0x28($fp)
    ctx->r30 = MEM_W(ctx->r30, 0X28);
    // 0x80200C20: jr          $ra
    // 0x80200C24: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80200C24: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8021F48C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021F48C: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8021F490: lh          $t6, 0x1B5E($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X1B5E);
    // 0x8021F494: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x8021F498: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021F49C: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021F4A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021F4A4: beq         $at, $zero, L_8021F4C8
    if (ctx->r1 == 0) {
        // 0x8021F4A8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8021F4C8;
    }
    // 0x8021F4A8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8021F4AC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021F4B0: addiu       $a0, $a0, 0x3730
    ctx->r4 = ADD32(ctx->r4, 0X3730);
    // 0x8021F4B4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8021F4B8: jal         0x80231A24
    // 0x8021F4BC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021F4BC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x8021F4C0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8021F4C4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
L_8021F4C8:
    // 0x8021F4C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021F4CC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8021F4D0: sh          $a2, 0x1B66($at)
    MEM_H(0X1B66, ctx->r1) = ctx->r6;
    // 0x8021F4D4: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8021F4D8: sh          $v0, 0x1B68($at)
    MEM_H(0X1B68, ctx->r1) = ctx->r2;
    // 0x8021F4DC: jr          $ra
    // 0x8021F4E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8021F4E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8021B838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021B838: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8021B83C: lhu         $t6, 0xBE6($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XBE6);
    // 0x8021B840: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021B844: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021B848: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021B84C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8021B850: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021B854: beq         $at, $zero, L_8021B874
    if (ctx->r1 == 0) {
        // 0x8021B858: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_8021B874;
    }
    // 0x8021B858: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8021B85C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021B860: addiu       $a0, $a0, 0x338C
    ctx->r4 = ADD32(ctx->r4, 0X338C);
    // 0x8021B864: jal         0x80231A24
    // 0x8021B868: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021B868: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x8021B86C: b           L_8021B99C
    // 0x8021B870: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8021B99C;
    // 0x8021B870: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021B874:
    // 0x8021B874: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8021B878: lui         $a3, 0x8026
    ctx->r7 = S32(0X8026 << 16);
    // 0x8021B87C: addiu       $a3, $a3, -0x3C06
    ctx->r7 = ADD32(ctx->r7, -0X3C06);
    // 0x8021B880: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x8021B884: beql        $t8, $zero, L_8021B8F4
    if (ctx->r24 == 0) {
        // 0x8021B888: lhu         $a1, 0x0($a3)
        ctx->r5 = MEM_HU(ctx->r7, 0X0);
            goto L_8021B8F4;
    }
    goto skip_0;
    // 0x8021B888: lhu         $a1, 0x0($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X0);
    skip_0:
    // 0x8021B88C: lui         $a3, 0x8026
    ctx->r7 = S32(0X8026 << 16);
    // 0x8021B890: addiu       $a3, $a3, -0x3C06
    ctx->r7 = ADD32(ctx->r7, -0X3C06);
    // 0x8021B894: lhu         $a0, 0x0($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X0);
    // 0x8021B898: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8021B89C: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x8021B8A0: blez        $a0, L_8021B8C8
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8021B8A4: lui         $a2, 0x8026
        ctx->r6 = S32(0X8026 << 16);
            goto L_8021B8C8;
    }
    // 0x8021B8A4: lui         $a2, 0x8026
    ctx->r6 = S32(0X8026 << 16);
    // 0x8021B8A8: lw          $v0, -0x3C10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C10);
L_8021B8AC:
    // 0x8021B8AC: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x8021B8B0: beq         $s0, $t9, L_8021B8C8
    if (ctx->r16 == ctx->r25) {
        // 0x8021B8B4: nop
    
            goto L_8021B8C8;
    }
    // 0x8021B8B4: nop

    // 0x8021B8B8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8021B8BC: slt         $at, $t0, $a0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021B8C0: bne         $at, $zero, L_8021B8AC
    if (ctx->r1 != 0) {
        // 0x8021B8C4: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_8021B8AC;
    }
    // 0x8021B8C4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8021B8C8:
    // 0x8021B8C8: bne         $t0, $a0, L_8021B978
    if (ctx->r8 != ctx->r4) {
        // 0x8021B8CC: addiu       $a2, $a2, -0x3C10
        ctx->r6 = ADD32(ctx->r6, -0X3C10);
            goto L_8021B978;
    }
    // 0x8021B8CC: addiu       $a2, $a2, -0x3C10
    ctx->r6 = ADD32(ctx->r6, -0X3C10);
    // 0x8021B8D0: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x8021B8D4: sll         $t3, $t0, 1
    ctx->r11 = S32(ctx->r8 << 1);
    // 0x8021B8D8: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8021B8DC: sh          $s0, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r16;
    // 0x8021B8E0: lhu         $t5, 0x0($a3)
    ctx->r13 = MEM_HU(ctx->r7, 0X0);
    // 0x8021B8E4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8021B8E8: b           L_8021B978
    // 0x8021B8EC: sh          $t6, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r14;
        goto L_8021B978;
    // 0x8021B8EC: sh          $t6, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r14;
    // 0x8021B8F0: lhu         $a1, 0x0($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X0);
L_8021B8F4:
    // 0x8021B8F4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8021B8F8: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x8021B8FC: blez        $a1, L_8021B978
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8021B900: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8021B978;
    }
    // 0x8021B900: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8021B904: lui         $a2, 0x8026
    ctx->r6 = S32(0X8026 << 16);
    // 0x8021B908: addiu       $a2, $a2, -0x3C10
    ctx->r6 = ADD32(ctx->r6, -0X3C10);
L_8021B90C:
    // 0x8021B90C: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x8021B910: slt         $at, $t0, $a0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021B914: addu        $t8, $t7, $t1
    ctx->r24 = ADD32(ctx->r15, ctx->r9);
    // 0x8021B918: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x8021B91C: bnel        $s0, $t9, L_8021B96C
    if (ctx->r16 != ctx->r25) {
        // 0x8021B920: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_8021B96C;
    }
    goto skip_1;
    // 0x8021B920: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_1:
    // 0x8021B924: beq         $at, $zero, L_8021B958
    if (ctx->r1 == 0) {
        // 0x8021B928: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_8021B958;
    }
    // 0x8021B928: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x8021B92C: sll         $a0, $v1, 1
    ctx->r4 = S32(ctx->r3 << 1);
    // 0x8021B930: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
L_8021B934:
    // 0x8021B934: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8021B938: addu        $v0, $t2, $a0
    ctx->r2 = ADD32(ctx->r10, ctx->r4);
    // 0x8021B93C: lhu         $t3, 0x2($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X2);
    // 0x8021B940: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8021B944: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
    // 0x8021B948: lhu         $a1, 0x0($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X0);
    // 0x8021B94C: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8021B950: bnel        $at, $zero, L_8021B934
    if (ctx->r1 != 0) {
        // 0x8021B954: lw          $t2, 0x0($a2)
        ctx->r10 = MEM_W(ctx->r6, 0X0);
            goto L_8021B934;
    }
    goto skip_2;
    // 0x8021B954: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    skip_2:
L_8021B958:
    // 0x8021B958: addiu       $t4, $a1, -0x1
    ctx->r12 = ADD32(ctx->r5, -0X1);
    // 0x8021B95C: andi        $a1, $t4, 0xFFFF
    ctx->r5 = ctx->r12 & 0XFFFF;
    // 0x8021B960: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8021B964: sh          $t4, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r12;
    // 0x8021B968: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_8021B96C:
    // 0x8021B96C: slt         $at, $t0, $a0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021B970: bne         $at, $zero, L_8021B90C
    if (ctx->r1 != 0) {
        // 0x8021B974: addiu       $t1, $t1, 0x2
        ctx->r9 = ADD32(ctx->r9, 0X2);
            goto L_8021B90C;
    }
    // 0x8021B974: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
L_8021B978:
    // 0x8021B978: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x8021B97C: lw          $t6, -0x3C20($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3C20);
    // 0x8021B980: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
    // 0x8021B984: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8021B988: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x8021B98C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8021B990: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8021B994: sb          $t5, 0x8($t8)
    MEM_B(0X8, ctx->r24) = ctx->r13;
    // 0x8021B998: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021B99C:
    // 0x8021B99C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021B9A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021B9A4: jr          $ra
    // 0x8021B9A8: nop

    return;
    // 0x8021B9A8: nop

;}
RECOMP_FUNC void func_8022342C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022342C: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x80223430: lw          $v0, 0x4348($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4348);
    // 0x80223434: nor         $t6, $a0, $zero
    ctx->r14 = ~(ctx->r4 | 0);
    // 0x80223438: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022343C: and         $v1, $t6, $v0
    ctx->r3 = ctx->r14 & ctx->r2;
    // 0x80223440: beq         $v1, $v0, L_80223458
    if (ctx->r3 == ctx->r2) {
        // 0x80223444: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80223458;
    }
    // 0x80223444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80223448: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8022344C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x80223450: jal         0x80220C44
    // 0x80223454: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_80220C44(rdram, ctx);
        goto after_0;
    // 0x80223454: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
L_80223458:
    // 0x80223458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022345C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80223460: jr          $ra
    // 0x80223464: nop

    return;
    // 0x80223464: nop

;}
RECOMP_FUNC void func_80231C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231C58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231C5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231C60: lhu         $t6, 0x0($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X0);
    // 0x80231C64: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80231C68: addiu       $a2, $a3, 0x1
    ctx->r6 = ADD32(ctx->r7, 0X1);
    // 0x80231C6C: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80231C70: beq         $at, $zero, L_80231C80
    if (ctx->r1 == 0) {
        // 0x80231C74: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80231C80;
    }
    // 0x80231C74: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80231C78: b           L_80231C8C
    // 0x80231C7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80231C8C;
    // 0x80231C7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80231C80:
    // 0x80231C80: jal         0x80231A24
    // 0x80231C84: addiu       $a0, $a0, 0x506C
    ctx->r4 = ADD32(ctx->r4, 0X506C);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80231C84: addiu       $a0, $a0, 0x506C
    ctx->r4 = ADD32(ctx->r4, 0X506C);
    after_0:
    // 0x80231C88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80231C8C:
    // 0x80231C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80231C94: jr          $ra
    // 0x80231C98: nop

    return;
    // 0x80231C98: nop

;}
RECOMP_FUNC void func_8023DEC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023DEC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023DEC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023DEC8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8023DECC: jal         0x80241760
    // 0x8023DED0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x8023DED0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023DED4: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8023DED8: lw          $t7, 0x1774($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1774);
    // 0x8023DEDC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023DEE0: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x8023DEE4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8023DEE8: sw          $t6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r14;
    // 0x8023DEEC: lw          $t9, 0x1774($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1774);
    // 0x8023DEF0: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x8023DEF4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023DEF8: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x8023DEFC: lw          $t0, 0x1774($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1774);
    // 0x8023DF00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023DF04: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x8023DF08: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x8023DF0C: jal         0x80241780
    // 0x8023DF10: sw          $t2, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r10;
    func_80241780(rdram, ctx);
        goto after_1;
    // 0x8023DF10: sw          $t2, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r10;
    after_1:
    // 0x8023DF14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023DF18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023DF1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8023DF20: jr          $ra
    // 0x8023DF24: nop

    return;
    // 0x8023DF24: nop

;}
RECOMP_FUNC void func_80234F20(uint8_t* rdram, recomp_context* ctx) {
    if (ctx->r4 == 0) { return; }
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234F20: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80234F24: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80234F28: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80234F2C: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80234F30: sll         $v1, $t7, 2
    ctx->r3 = S32(ctx->r15 << 2);
    // 0x80234F34: subu        $v1, $v1, $t7
    ctx->r3 = SUB32(ctx->r3, ctx->r15);
    // 0x80234F38: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80234F3C: addu        $t8, $v1, $v0
    ctx->r24 = ADD32(ctx->r3, ctx->r2);
    // 0x80234F40: lw          $t9, 0x28($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X28);
    // 0x80234F44: addu        $t0, $v0, $v1
    ctx->r8 = ADD32(ctx->r2, ctx->r3);
    // 0x80234F48: bne         $t9, $zero, L_80234F68
    if (ctx->r25 != 0) {
        // 0x80234F4C: nop
    
            goto L_80234F68;
    }
    // 0x80234F4C: nop

    // 0x80234F50: sw          $zero, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = 0;
    // 0x80234F54: lw          $t1, 0x3C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X3C);
    // 0x80234F58: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80234F5C: bne         $t7, $t1, L_80234F68
    if (ctx->r15 != ctx->r9) {
        // 0x80234F60: nop
    
            goto L_80234F68;
    }
    // 0x80234F60: nop

    // 0x80234F64: sw          $t2, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r10;
L_80234F68:
    // 0x80234F68: jr          $ra
    // 0x80234F6C: nop

    return;
    // 0x80234F6C: nop

;}
RECOMP_FUNC void func_8022FCDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022FCDC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8022FCE0: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8022FCE4: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8022FCE8: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8022FCEC: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x8022FCF0: jal         0x8022FB4C
    // 0x8022FCF4: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    func_8022FB4C(rdram, ctx);
        goto after_0;
    // 0x8022FCF4: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    after_0:
    // 0x8022FCF8: beq         $v0, $zero, L_8022FE48
    if (ctx->r2 == 0) {
        // 0x8022FCFC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8022FE48;
    }
    // 0x8022FCFC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8022FD00: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8022FD04: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x8022FD08: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8022FD0C: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8022FD10: ori         $at, $at, 0xF000
    ctx->r1 = ctx->r1 | 0XF000;
    // 0x8022FD14: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x8022FD18: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x8022FD1C: srl         $t0, $t9, 12
    ctx->r8 = S32(U32(ctx->r25) >> 12);
    // 0x8022FD20: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x8022FD24: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8022FD28: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x8022FD2C: addu        $t2, $t7, $t1
    ctx->r10 = ADD32(ctx->r15, ctx->r9);
    // 0x8022FD30: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8022FD34: sll         $t4, $a1, 6
    ctx->r12 = S32(ctx->r5 << 6);
    // 0x8022FD38: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x8022FD3C: addiu       $t9, $t6, 0x3C
    ctx->r25 = ADD32(ctx->r14, 0X3C);
    // 0x8022FD40: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x8022FD44: or          $t0, $sp, $zero
    ctx->r8 = ctx->r29 | 0;
    // 0x8022FD48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8022FD4C: lwc1        $f12, 0x2C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X2C);
L_8022FD50:
    // 0x8022FD50: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8022FD54: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8022FD58: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8022FD5C: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x8022FD60: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x8022FD64: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x8022FD68: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x8022FD6C: bne         $t6, $t9, L_8022FD50
    if (ctx->r14 != ctx->r25) {
        // 0x8022FD70: sw          $at, 0x4($t0)
        MEM_W(0X4, ctx->r8) = ctx->r1;
            goto L_8022FD50;
    }
    // 0x8022FD70: sw          $at, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r1;
    // 0x8022FD74: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8022FD78: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x8022FD7C: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x8022FD80: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x8022FD84: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
    // 0x8022FD88: sw          $a1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r5;
    // 0x8022FD8C: jal         0x80228F38
    // 0x8022FD90: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    func_80228F38(rdram, ctx);
        goto after_1;
    // 0x8022FD90: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    after_1:
    // 0x8022FD94: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x8022FD98: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8022FD9C: lw          $t7, -0x18F0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X18F0);
    // 0x8022FDA0: lhu         $t2, 0x0($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X0);
    // 0x8022FDA4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x8022FDA8: lw          $t1, 0x1C($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X1C);
    // 0x8022FDAC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8022FDB0: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8022FDB4: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8022FDB8: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x8022FDBC: beql        $v0, $zero, L_8022FE4C
    if (ctx->r2 == 0) {
        // 0x8022FDC0: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_8022FE4C;
    }
    goto skip_0;
    // 0x8022FDC0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_0:
    // 0x8022FDC4: bne         $a1, $zero, L_8022FE10
    if (ctx->r5 != 0) {
        // 0x8022FDC8: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8022FE10;
    }
    // 0x8022FDC8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022FDCC: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8022FDD0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022FDD4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8022FDD8: div.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8022FDDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8022FDE0: div.s       $f2, $f14, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
    // 0x8022FDE4: c.eq.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl == ctx->f14.fl;
    // 0x8022FDE8: nop

    // 0x8022FDEC: bc1tl       L_8022FE20
    if (c1cs) {
        // 0x8022FDF0: lwc1        $f8, 0x30($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
            goto L_8022FE20;
    }
    goto skip_1;
    // 0x8022FDF0: lwc1        $f8, 0x30($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
    skip_1:
    // 0x8022FDF4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8022FDF8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8022FDFC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8022FE00: jal         0x8022A210
    // 0x8022FE04: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    func_8022A210(rdram, ctx);
        goto after_2;
    // 0x8022FE04: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x8022FE08: b           L_8022FE1C
    // 0x8022FE0C: lwc1        $f2, 0x64($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X64);
        goto L_8022FE1C;
    // 0x8022FE0C: lwc1        $f2, 0x64($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X64);
L_8022FE10:
    // 0x8022FE10: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8022FE14: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8022FE18: div.s       $f2, $f14, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f14.fl, ctx->f6.fl);
L_8022FE1C:
    // 0x8022FE1C: lwc1        $f8, 0x30($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
L_8022FE20:
    // 0x8022FE20: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8022FE24: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x8022FE28: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8022FE2C: nop

    // 0x8022FE30: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x8022FE34: nop

    // 0x8022FE38: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8022FE3C: swc1        $f10, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f10.u32l;
    // 0x8022FE40: swc1        $f18, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f18.u32l;
    // 0x8022FE44: swc1        $f6, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f6.u32l;
L_8022FE48:
    // 0x8022FE48: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_8022FE4C:
    // 0x8022FE4C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8022FE50: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8022FE54: jr          $ra
    // 0x8022FE58: nop

    return;
    // 0x8022FE58: nop

;}
RECOMP_FUNC void func_8022BBAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022BBAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BBB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BBB4: beq         $a0, $a1, L_8022BC30
    if (ctx->r4 == ctx->r5) {
        // 0x8022BBB8: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_8022BC30;
    }
    // 0x8022BBB8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8022BBBC: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x8022BBC0: addiu       $a3, $a3, 0x5E74
    ctx->r7 = ADD32(ctx->r7, 0X5E74);
    // 0x8022BBC4: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x8022BBC8: subu        $a1, $a2, $a0
    ctx->r5 = SUB32(ctx->r6, ctx->r4);
    // 0x8022BBCC: slti        $at, $t6, 0x14
    ctx->r1 = SIGNED(ctx->r14) < 0X14 ? 1 : 0;
    // 0x8022BBD0: bnel        $at, $zero, L_8022BBF0
    if (ctx->r1 != 0) {
        // 0x8022BBD4: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8022BBF0;
    }
    goto skip_0;
    // 0x8022BBD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    skip_0:
    // 0x8022BBD8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022BBDC: jal         0x80231A24
    // 0x8022BBE0: addiu       $a0, $a0, 0x4198
    ctx->r4 = ADD32(ctx->r4, 0X4198);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022BBE0: addiu       $a0, $a0, 0x4198
    ctx->r4 = ADD32(ctx->r4, 0X4198);
    after_0:
    // 0x8022BBE4: b           L_8022BC34
    // 0x8022BBE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022BC34;
    // 0x8022BBE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BBEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
L_8022BBF0:
    // 0x8022BBF0: jal         0x8022B2F4
    // 0x8022BBF4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8022B2F4(rdram, ctx);
        goto after_1;
    // 0x8022BBF4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x8022BBF8: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x8022BBFC: addiu       $a3, $a3, 0x5E74
    ctx->r7 = ADD32(ctx->r7, 0X5E74);
    // 0x8022BC00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8022BC04: beq         $v0, $zero, L_8022BC30
    if (ctx->r2 == 0) {
        // 0x8022BC08: lw          $a2, 0x1C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X1C);
            goto L_8022BC30;
    }
    // 0x8022BC08: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BC0C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8022BC10: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x8022BC14: addiu       $t8, $t8, 0x5ED0
    ctx->r24 = ADD32(ctx->r24, 0X5ED0);
    // 0x8022BC18: sll         $t7, $v0, 3
    ctx->r15 = S32(ctx->r2 << 3);
    // 0x8022BC1C: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8022BC20: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x8022BC24: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8022BC28: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x8022BC2C: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
L_8022BC30:
    // 0x8022BC30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022BC34:
    // 0x8022BC34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022BC38: jr          $ra
    // 0x8022BC3C: nop

    return;
    // 0x8022BC3C: nop

;}
RECOMP_FUNC void func_8021DD10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021DD10: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8021DD14: addiu       $a3, $a3, 0xBC0
    ctx->r7 = ADD32(ctx->r7, 0XBC0);
    // 0x8021DD18: lhu         $a0, 0x36($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X36);
    // 0x8021DD1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021DD20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021DD24: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8021DD28: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8021DD2C: jal         0x8022BA58
    // 0x8021DD30: sll         $a0, $t6, 3
    ctx->r4 = S32(ctx->r14 << 3);
    func_8022BA58(rdram, ctx);
        goto after_0;
    // 0x8021DD30: sll         $a0, $t6, 3
    ctx->r4 = S32(ctx->r14 << 3);
    after_0:
    // 0x8021DD34: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8021DD38: addiu       $a3, $a3, 0xBC0
    ctx->r7 = ADD32(ctx->r7, 0XBC0);
    // 0x8021DD3C: lhu         $a2, 0x36($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X36);
    // 0x8021DD40: lui         $t0, 0x8026
    ctx->r8 = S32(0X8026 << 16);
    // 0x8021DD44: addiu       $t0, $t0, -0x3A00
    ctx->r8 = ADD32(ctx->r8, -0X3A00);
    // 0x8021DD48: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x8021DD4C: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x8021DD50: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x8021DD54: sll         $a2, $t7, 3
    ctx->r6 = S32(ctx->r15 << 3);
    // 0x8021DD58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021DD5C: jal         0x8022B780
    // 0x8021DD60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8022B780(rdram, ctx);
        goto after_1;
    // 0x8021DD60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8021DD64: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8021DD68: addiu       $a3, $a3, 0xBC0
    ctx->r7 = ADD32(ctx->r7, 0XBC0);
    // 0x8021DD6C: lhu         $t8, 0x36($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X36);
    // 0x8021DD70: lui         $t0, 0x8026
    ctx->r8 = S32(0X8026 << 16);
    // 0x8021DD74: addiu       $t0, $t0, -0x3A00
    ctx->r8 = ADD32(ctx->r8, -0X3A00);
    // 0x8021DD78: blez        $t8, L_8021DDD4
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8021DD7C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8021DDD4;
    }
    // 0x8021DD7C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021DD80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021DD84: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8021DD88: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021DD8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8021DD90: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
L_8021DD94:
    // 0x8021DD94: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8021DD98: addu        $v0, $a0, $t9
    ctx->r2 = ADD32(ctx->r4, ctx->r25);
    // 0x8021DD9C: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8021DDA0: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x8021DDA4: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x8021DDA8: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x8021DDAC: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x8021DDB0: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x8021DDB4: sb          $zero, 0x10($v0)
    MEM_B(0X10, ctx->r2) = 0;
    // 0x8021DDB8: sb          $zero, 0x11($v0)
    MEM_B(0X11, ctx->r2) = 0;
    // 0x8021DDBC: swc1        $f2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f2.u32l;
    // 0x8021DDC0: lhu         $t1, 0x36($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X36);
    // 0x8021DDC4: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    // 0x8021DDC8: slt         $at, $v1, $t1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8021DDCC: bnel        $at, $zero, L_8021DD94
    if (ctx->r1 != 0) {
        // 0x8021DDD0: lw          $t9, 0x0($t0)
        ctx->r25 = MEM_W(ctx->r8, 0X0);
            goto L_8021DD94;
    }
    goto skip_0;
    // 0x8021DDD0: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    skip_0:
L_8021DDD4:
    // 0x8021DDD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021DDD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021DDDC: jr          $ra
    // 0x8021DDE0: nop

    return;
    // 0x8021DDE0: nop

;}
RECOMP_FUNC void func_8022D794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022D794: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x8022D798: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022D79C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022D7A0: lbu         $t0, 0x27($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X27);
    // 0x8022D7A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8022D7A8: beql        $t0, $zero, L_8022E034
    if (ctx->r8 == 0) {
        // 0x8022D7AC: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8022E034;
    }
    goto skip_0;
    // 0x8022D7AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x8022D7B0: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
    // 0x8022D7B4: beql        $v0, $zero, L_8022D7C8
    if (ctx->r2 == 0) {
        // 0x8022D7B8: lbu         $t1, 0x2($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0X2);
            goto L_8022D7C8;
    }
    goto skip_1;
    // 0x8022D7B8: lbu         $t1, 0x2($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2);
    skip_1:
    // 0x8022D7BC: jalr        $v0
    // 0x8022D7C0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D7C0: nop

    after_0:
    // 0x8022D7C4: lbu         $t1, 0x2($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2);
L_8022D7C8:
    // 0x8022D7C8: bnel        $t1, $zero, L_8022D7F0
    if (ctx->r9 != 0) {
        // 0x8022D7CC: lhu         $a0, 0x8($s0)
        ctx->r4 = MEM_HU(ctx->r16, 0X8);
            goto L_8022D7F0;
    }
    goto skip_2;
    // 0x8022D7CC: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    skip_2:
    // 0x8022D7D0: lw          $v0, 0x74($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X74);
    // 0x8022D7D4: beql        $v0, $zero, L_8022E034
    if (ctx->r2 == 0) {
        // 0x8022D7D8: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8022E034;
    }
    goto skip_3;
    // 0x8022D7D8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_3:
    // 0x8022D7DC: jalr        $v0
    // 0x8022D7E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022D7E0: nop

    after_1:
    // 0x8022D7E4: b           L_8022E034
    // 0x8022D7E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8022E034;
    // 0x8022D7E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022D7EC: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
L_8022D7F0:
    // 0x8022D7F0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8022D7F4: beql        $a0, $at, L_8022D814
    if (ctx->r4 == ctx->r1) {
        // 0x8022D7F8: lhu         $v0, 0xA($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0XA);
            goto L_8022D814;
    }
    goto skip_4;
    // 0x8022D7F8: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    skip_4:
    // 0x8022D7FC: jal         0x8021E3D0
    // 0x8022D800: nop

    func_8021E3D0(rdram, ctx);
        goto after_2;
    // 0x8022D800: nop

    after_2:
    // 0x8022D804: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8022D808: b           L_8022D82C
    // 0x8022D80C: addiu       $v1, $zero, 0xFFF
    ctx->r3 = ADD32(0, 0XFFF);
        goto L_8022D82C;
    // 0x8022D80C: addiu       $v1, $zero, 0xFFF
    ctx->r3 = ADD32(0, 0XFFF);
    // 0x8022D810: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
L_8022D814:
    // 0x8022D814: addiu       $v1, $zero, 0xFFF
    ctx->r3 = ADD32(0, 0XFFF);
    // 0x8022D818: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8022D81C: beq         $v1, $v0, L_8022D82C
    if (ctx->r3 == ctx->r2) {
        // 0x8022D820: nop
    
            goto L_8022D82C;
    }
    // 0x8022D820: nop

    // 0x8022D824: b           L_8022D82C
    // 0x8022D828: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_8022D82C;
    // 0x8022D828: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8022D82C:
    // 0x8022D82C: beq         $a0, $v1, L_8022D84C
    if (ctx->r4 == ctx->r3) {
        // 0x8022D830: lui         $t2, 0x8025
        ctx->r10 = S32(0X8025 << 16);
            goto L_8022D84C;
    }
    // 0x8022D830: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x8022D834: lw          $t2, -0x18F0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X18F0);
    // 0x8022D838: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x8022D83C: lw          $t5, 0x2C($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X2C);
    // 0x8022D840: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x8022D844: b           L_8022D850
    // 0x8022D848: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
        goto L_8022D850;
    // 0x8022D848: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
L_8022D84C:
    // 0x8022D84C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8022D850:
    // 0x8022D850: beql        $a0, $v1, L_8022DE60
    if (ctx->r4 == ctx->r3) {
        // 0x8022D854: lbu         $t2, 0x27($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X27);
            goto L_8022DE60;
    }
    goto skip_5;
    // 0x8022D854: lbu         $t2, 0x27($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X27);
    skip_5:
    // 0x8022D858: beql        $a1, $zero, L_8022DE60
    if (ctx->r5 == 0) {
        // 0x8022D85C: lbu         $t2, 0x27($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X27);
            goto L_8022DE60;
    }
    goto skip_6;
    // 0x8022D85C: lbu         $t2, 0x27($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X27);
    skip_6:
    // 0x8022D860: jal         0x80223468
    // 0x8022D864: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    func_80223468(rdram, ctx);
        goto after_3;
    // 0x8022D864: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    after_3:
    // 0x8022D868: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8022D86C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8022D870: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x8022D874: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022D878: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x8022D87C: nop

    // 0x8022D880: bc1f        L_8022D8BC
    if (!c1cs) {
        // 0x8022D884: nop
    
            goto L_8022D8BC;
    }
    // 0x8022D884: nop

    // 0x8022D888: sh          $zero, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = 0;
    // 0x8022D88C: sh          $zero, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = 0;
    // 0x8022D890: lhu         $v0, 0xA($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XA);
    // 0x8022D894: sh          $zero, 0xC4($sp)
    MEM_H(0XC4, ctx->r29) = 0;
    // 0x8022D898: sll         $t3, $v0, 5
    ctx->r11 = S32(ctx->r2 << 5);
    // 0x8022D89C: sh          $t3, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r11;
    // 0x8022D8A0: sh          $t3, 0xC2($sp)
    MEM_H(0XC2, ctx->r29) = ctx->r11;
    // 0x8022D8A4: lhu         $v1, 0xC($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0XC);
    // 0x8022D8A8: sh          $zero, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = 0;
    // 0x8022D8AC: sll         $t7, $v1, 5
    ctx->r15 = S32(ctx->r3 << 5);
    // 0x8022D8B0: sh          $t7, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r15;
    // 0x8022D8B4: b           L_8022DE04
    // 0x8022D8B8: sh          $t7, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r15;
        goto L_8022DE04;
    // 0x8022D8B8: sh          $t7, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r15;
L_8022D8BC:
    // 0x8022D8BC: lwc1        $f10, 0x49F0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X49F0);
    // 0x8022D8C0: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8022D8C4: mul.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8022D8C8: jal         0x8022AA60
    // 0x8022D8CC: swc1        $f12, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f12.u32l;
    func_8022AA60(rdram, ctx);
        goto after_4;
    // 0x8022D8CC: swc1        $f12, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f12.u32l;
    after_4:
    // 0x8022D8D0: lwc1        $f12, 0xA0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8022D8D4: jal         0x8022AC20
    // 0x8022D8D8: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    func_8022AC20(rdram, ctx);
        goto after_5;
    // 0x8022D8D8: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x8022D8DC: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x8022D8E0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8022D8E4: lhu         $t8, 0xA($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0XA);
    // 0x8022D8E8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8022D8EC: bgez        $t8, L_8022D900
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8022D8F0: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8022D900;
    }
    // 0x8022D8F0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8022D8F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022D8F8: nop

    // 0x8022D8FC: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_8022D900:
    // 0x8022D900: lhu         $t9, 0xC($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0XC);
    // 0x8022D904: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8022D908: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8022D90C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8022D910: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8022D914: mul.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8022D918: bgez        $t9, L_8022D92C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8022D91C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8022D92C;
    }
    // 0x8022D91C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8022D920: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8022D924: nop

    // 0x8022D928: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8022D92C:
    // 0x8022D92C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8022D930: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8022D934: neg.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
    // 0x8022D938: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8022D93C: mul.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8022D940: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8022D944: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022D948: mul.s       $f4, $f14, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8022D94C: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x8022D950: mul.s       $f18, $f12, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x8022D954: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8022D958: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8022D95C: add.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8022D960: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8022D964: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8022D968: nop

    // 0x8022D96C: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8022D970: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8022D974: nop

    // 0x8022D978: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8022D97C: beql        $t1, $zero, L_8022D9CC
    if (ctx->r9 == 0) {
        // 0x8022D980: mfc1        $t1, $f10
        ctx->r9 = (int32_t)ctx->f10.u32l;
            goto L_8022D9CC;
    }
    goto skip_7;
    // 0x8022D980: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    skip_7:
    // 0x8022D984: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8022D988: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8022D98C: sub.s       $f10, $f4, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8022D990: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8022D994: nop

    // 0x8022D998: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8022D99C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8022D9A0: nop

    // 0x8022D9A4: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8022D9A8: bne         $t1, $zero, L_8022D9C0
    if (ctx->r9 != 0) {
        // 0x8022D9AC: nop
    
            goto L_8022D9C0;
    }
    // 0x8022D9AC: nop

    // 0x8022D9B0: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8022D9B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022D9B8: b           L_8022D9D8
    // 0x8022D9BC: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_8022D9D8;
    // 0x8022D9BC: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_8022D9C0:
    // 0x8022D9C0: b           L_8022D9D8
    // 0x8022D9C4: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_8022D9D8;
    // 0x8022D9C4: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8022D9C8: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
L_8022D9CC:
    // 0x8022D9CC: nop

    // 0x8022D9D0: bltz        $t1, L_8022D9C0
    if (SIGNED(ctx->r9) < 0) {
        // 0x8022D9D4: nop
    
            goto L_8022D9C0;
    }
    // 0x8022D9D4: nop

L_8022D9D8:
    // 0x8022D9D8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8022D9DC: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x8022D9E0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8022D9E4: mul.s       $f4, $f14, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x8022D9E8: sh          $t1, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r9;
    // 0x8022D9EC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022D9F0: mul.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8022D9F4: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x8022D9F8: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8022D9FC: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x8022DA00: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8022DA04: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8022DA08: add.s       $f6, $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x8022DA0C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8022DA10: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8022DA14: nop

    // 0x8022DA18: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DA1C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8022DA20: nop

    // 0x8022DA24: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8022DA28: beql        $t5, $zero, L_8022DA78
    if (ctx->r13 == 0) {
        // 0x8022DA2C: mfc1        $t5, $f6
        ctx->r13 = (int32_t)ctx->f6.u32l;
            goto L_8022DA78;
    }
    goto skip_8;
    // 0x8022DA2C: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    skip_8:
    // 0x8022DA30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022DA34: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8022DA38: sub.s       $f6, $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f6.fl;
    // 0x8022DA3C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8022DA40: nop

    // 0x8022DA44: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DA48: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8022DA4C: nop

    // 0x8022DA50: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8022DA54: bne         $t5, $zero, L_8022DA6C
    if (ctx->r13 != 0) {
        // 0x8022DA58: nop
    
            goto L_8022DA6C;
    }
    // 0x8022DA58: nop

    // 0x8022DA5C: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x8022DA60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022DA64: b           L_8022DA84
    // 0x8022DA68: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8022DA84;
    // 0x8022DA68: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8022DA6C:
    // 0x8022DA6C: b           L_8022DA84
    // 0x8022DA70: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8022DA84;
    // 0x8022DA70: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8022DA74: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
L_8022DA78:
    // 0x8022DA78: nop

    // 0x8022DA7C: bltz        $t5, L_8022DA6C
    if (SIGNED(ctx->r13) < 0) {
        // 0x8022DA80: nop
    
            goto L_8022DA6C;
    }
    // 0x8022DA80: nop

L_8022DA84:
    // 0x8022DA84: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8022DA88: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8022DA8C: sh          $t5, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r13;
    // 0x8022DA90: mul.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8022DA94: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022DA98: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8022DA9C: add.s       $f6, $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x8022DAA0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8022DAA4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8022DAA8: nop

    // 0x8022DAAC: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DAB0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8022DAB4: nop

    // 0x8022DAB8: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8022DABC: beql        $t6, $zero, L_8022DB0C
    if (ctx->r14 == 0) {
        // 0x8022DAC0: mfc1        $t6, $f6
        ctx->r14 = (int32_t)ctx->f6.u32l;
            goto L_8022DB0C;
    }
    goto skip_9;
    // 0x8022DAC0: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    skip_9:
    // 0x8022DAC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022DAC8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8022DACC: sub.s       $f6, $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f6.fl;
    // 0x8022DAD0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8022DAD4: nop

    // 0x8022DAD8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DADC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8022DAE0: nop

    // 0x8022DAE4: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8022DAE8: bne         $t6, $zero, L_8022DB00
    if (ctx->r14 != 0) {
        // 0x8022DAEC: nop
    
            goto L_8022DB00;
    }
    // 0x8022DAEC: nop

    // 0x8022DAF0: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8022DAF4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022DAF8: b           L_8022DB18
    // 0x8022DAFC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8022DB18;
    // 0x8022DAFC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8022DB00:
    // 0x8022DB00: b           L_8022DB18
    // 0x8022DB04: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8022DB18;
    // 0x8022DB04: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8022DB08: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
L_8022DB0C:
    // 0x8022DB0C: nop

    // 0x8022DB10: bltz        $t6, L_8022DB00
    if (SIGNED(ctx->r14) < 0) {
        // 0x8022DB14: nop
    
            goto L_8022DB00;
    }
    // 0x8022DB14: nop

L_8022DB18:
    // 0x8022DB18: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8022DB1C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8022DB20: sh          $t6, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r14;
    // 0x8022DB24: mul.s       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8022DB28: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022DB2C: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x8022DB30: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8022DB34: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8022DB38: add.s       $f6, $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x8022DB3C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8022DB40: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8022DB44: nop

    // 0x8022DB48: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DB4C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8022DB50: nop

    // 0x8022DB54: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8022DB58: beql        $t7, $zero, L_8022DBA8
    if (ctx->r15 == 0) {
        // 0x8022DB5C: mfc1        $t7, $f6
        ctx->r15 = (int32_t)ctx->f6.u32l;
            goto L_8022DBA8;
    }
    goto skip_10;
    // 0x8022DB5C: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    skip_10:
    // 0x8022DB60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022DB64: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8022DB68: sub.s       $f6, $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f6.fl;
    // 0x8022DB6C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8022DB70: nop

    // 0x8022DB74: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DB78: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8022DB7C: nop

    // 0x8022DB80: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8022DB84: bne         $t7, $zero, L_8022DB9C
    if (ctx->r15 != 0) {
        // 0x8022DB88: nop
    
            goto L_8022DB9C;
    }
    // 0x8022DB88: nop

    // 0x8022DB8C: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8022DB90: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022DB94: b           L_8022DBB4
    // 0x8022DB98: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8022DBB4;
    // 0x8022DB98: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8022DB9C:
    // 0x8022DB9C: b           L_8022DBB4
    // 0x8022DBA0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8022DBB4;
    // 0x8022DBA0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8022DBA4: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
L_8022DBA8:
    // 0x8022DBA8: nop

    // 0x8022DBAC: bltz        $t7, L_8022DB9C
    if (SIGNED(ctx->r15) < 0) {
        // 0x8022DBB0: nop
    
            goto L_8022DB9C;
    }
    // 0x8022DBB0: nop

L_8022DBB4:
    // 0x8022DBB4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8022DBB8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8022DBBC: sh          $t7, 0xC4($sp)
    MEM_H(0XC4, ctx->r29) = ctx->r15;
    // 0x8022DBC0: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8022DBC4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022DBC8: add.s       $f6, $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x8022DBCC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8022DBD0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8022DBD4: nop

    // 0x8022DBD8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DBDC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8022DBE0: nop

    // 0x8022DBE4: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8022DBE8: beql        $t9, $zero, L_8022DC38
    if (ctx->r25 == 0) {
        // 0x8022DBEC: mfc1        $t9, $f6
        ctx->r25 = (int32_t)ctx->f6.u32l;
            goto L_8022DC38;
    }
    goto skip_11;
    // 0x8022DBEC: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    skip_11:
    // 0x8022DBF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022DBF4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8022DBF8: sub.s       $f6, $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f6.fl;
    // 0x8022DBFC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8022DC00: nop

    // 0x8022DC04: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DC08: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8022DC0C: nop

    // 0x8022DC10: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8022DC14: bne         $t9, $zero, L_8022DC2C
    if (ctx->r25 != 0) {
        // 0x8022DC18: nop
    
            goto L_8022DC2C;
    }
    // 0x8022DC18: nop

    // 0x8022DC1C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x8022DC20: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022DC24: b           L_8022DC44
    // 0x8022DC28: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8022DC44;
    // 0x8022DC28: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8022DC2C:
    // 0x8022DC2C: b           L_8022DC44
    // 0x8022DC30: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8022DC44;
    // 0x8022DC30: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8022DC34: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
L_8022DC38:
    // 0x8022DC38: nop

    // 0x8022DC3C: bltz        $t9, L_8022DC2C
    if (SIGNED(ctx->r25) < 0) {
        // 0x8022DC40: nop
    
            goto L_8022DC2C;
    }
    // 0x8022DC40: nop

L_8022DC44:
    // 0x8022DC44: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8022DC48: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8022DC4C: sh          $t9, 0xC2($sp)
    MEM_H(0XC2, ctx->r29) = ctx->r25;
    // 0x8022DC50: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8022DC54: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022DC58: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x8022DC5C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8022DC60: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8022DC64: nop

    // 0x8022DC68: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8022DC6C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8022DC70: nop

    // 0x8022DC74: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8022DC78: beql        $t1, $zero, L_8022DCC8
    if (ctx->r9 == 0) {
        // 0x8022DC7C: mfc1        $t1, $f6
        ctx->r9 = (int32_t)ctx->f6.u32l;
            goto L_8022DCC8;
    }
    goto skip_12;
    // 0x8022DC7C: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    skip_12:
    // 0x8022DC80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022DC84: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8022DC88: sub.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8022DC8C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8022DC90: nop

    // 0x8022DC94: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DC98: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8022DC9C: nop

    // 0x8022DCA0: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8022DCA4: bne         $t1, $zero, L_8022DCBC
    if (ctx->r9 != 0) {
        // 0x8022DCA8: nop
    
            goto L_8022DCBC;
    }
    // 0x8022DCA8: nop

    // 0x8022DCAC: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x8022DCB0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022DCB4: b           L_8022DCD4
    // 0x8022DCB8: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_8022DCD4;
    // 0x8022DCB8: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_8022DCBC:
    // 0x8022DCBC: b           L_8022DCD4
    // 0x8022DCC0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_8022DCD4;
    // 0x8022DCC0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8022DCC4: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
L_8022DCC8:
    // 0x8022DCC8: nop

    // 0x8022DCCC: bltz        $t1, L_8022DCBC
    if (SIGNED(ctx->r9) < 0) {
        // 0x8022DCD0: nop
    
            goto L_8022DCBC;
    }
    // 0x8022DCD0: nop

L_8022DCD4:
    // 0x8022DCD4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8022DCD8: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8022DCDC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8022DCE0: sh          $t1, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r9;
    // 0x8022DCE4: sub.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x8022DCE8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022DCEC: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x8022DCF0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8022DCF4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8022DCF8: nop

    // 0x8022DCFC: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8022DD00: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8022DD04: nop

    // 0x8022DD08: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8022DD0C: beql        $t5, $zero, L_8022DD5C
    if (ctx->r13 == 0) {
        // 0x8022DD10: mfc1        $t5, $f6
        ctx->r13 = (int32_t)ctx->f6.u32l;
            goto L_8022DD5C;
    }
    goto skip_13;
    // 0x8022DD10: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    skip_13:
    // 0x8022DD14: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022DD18: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8022DD1C: sub.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8022DD20: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8022DD24: nop

    // 0x8022DD28: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DD2C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8022DD30: nop

    // 0x8022DD34: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8022DD38: bne         $t5, $zero, L_8022DD50
    if (ctx->r13 != 0) {
        // 0x8022DD3C: nop
    
            goto L_8022DD50;
    }
    // 0x8022DD3C: nop

    // 0x8022DD40: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x8022DD44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022DD48: b           L_8022DD68
    // 0x8022DD4C: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8022DD68;
    // 0x8022DD4C: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8022DD50:
    // 0x8022DD50: b           L_8022DD68
    // 0x8022DD54: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8022DD68;
    // 0x8022DD54: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8022DD58: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
L_8022DD5C:
    // 0x8022DD5C: nop

    // 0x8022DD60: bltz        $t5, L_8022DD50
    if (SIGNED(ctx->r13) < 0) {
        // 0x8022DD64: nop
    
            goto L_8022DD50;
    }
    // 0x8022DD64: nop

L_8022DD68:
    // 0x8022DD68: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8022DD6C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8022DD70: sh          $t5, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r13;
    // 0x8022DD74: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8022DD78: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022DD7C: add.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x8022DD80: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8022DD84: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8022DD88: nop

    // 0x8022DD8C: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DD90: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8022DD94: nop

    // 0x8022DD98: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8022DD9C: beql        $t6, $zero, L_8022DDEC
    if (ctx->r14 == 0) {
        // 0x8022DDA0: mfc1        $t6, $f4
        ctx->r14 = (int32_t)ctx->f4.u32l;
            goto L_8022DDEC;
    }
    goto skip_14;
    // 0x8022DDA0: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    skip_14:
    // 0x8022DDA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8022DDA8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8022DDAC: sub.s       $f4, $f6, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8022DDB0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8022DDB4: nop

    // 0x8022DDB8: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8022DDBC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8022DDC0: nop

    // 0x8022DDC4: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8022DDC8: bne         $t6, $zero, L_8022DDE0
    if (ctx->r14 != 0) {
        // 0x8022DDCC: nop
    
            goto L_8022DDE0;
    }
    // 0x8022DDCC: nop

    // 0x8022DDD0: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x8022DDD4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022DDD8: b           L_8022DDF8
    // 0x8022DDDC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8022DDF8;
    // 0x8022DDDC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8022DDE0:
    // 0x8022DDE0: b           L_8022DDF8
    // 0x8022DDE4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8022DDF8;
    // 0x8022DDE4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8022DDE8: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
L_8022DDEC:
    // 0x8022DDEC: nop

    // 0x8022DDF0: bltz        $t6, L_8022DDE0
    if (SIGNED(ctx->r14) < 0) {
        // 0x8022DDF4: nop
    
            goto L_8022DDE0;
    }
    // 0x8022DDF4: nop

L_8022DDF8:
    // 0x8022DDF8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8022DDFC: sh          $t6, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r14;
    // 0x8022DE00: nop

L_8022DE04:
    // 0x8022DE04: lbu         $t3, 0x5($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X5);
    // 0x8022DE08: lhu         $v0, 0xCA($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XCA);
    // 0x8022DE0C: lhu         $t7, 0xC2($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0XC2);
    // 0x8022DE10: beql        $t3, $zero, L_8022DE34
    if (ctx->r11 == 0) {
        // 0x8022DE14: lbu         $t9, 0x6($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X6);
            goto L_8022DE34;
    }
    goto skip_15;
    // 0x8022DE14: lbu         $t9, 0x6($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X6);
    skip_15:
    // 0x8022DE18: sh          $v0, 0xC2($sp)
    MEM_H(0XC2, ctx->r29) = ctx->r2;
    // 0x8022DE1C: lhu         $v0, 0xC6($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XC6);
    // 0x8022DE20: lhu         $t8, 0xBE($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0XBE);
    // 0x8022DE24: sh          $t7, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r15;
    // 0x8022DE28: sh          $v0, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r2;
    // 0x8022DE2C: sh          $t8, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r24;
    // 0x8022DE30: lbu         $t9, 0x6($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X6);
L_8022DE34:
    // 0x8022DE34: lhu         $v0, 0xC8($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XC8);
    // 0x8022DE38: lhu         $t0, 0xC0($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0XC0);
    // 0x8022DE3C: beql        $t9, $zero, L_8022DE60
    if (ctx->r25 == 0) {
        // 0x8022DE40: lbu         $t2, 0x27($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X27);
            goto L_8022DE60;
    }
    goto skip_16;
    // 0x8022DE40: lbu         $t2, 0x27($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X27);
    skip_16:
    // 0x8022DE44: sh          $v0, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r2;
    // 0x8022DE48: lhu         $v0, 0xC4($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XC4);
    // 0x8022DE4C: lhu         $t1, 0xBC($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0XBC);
    // 0x8022DE50: sh          $t0, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r8;
    // 0x8022DE54: sh          $v0, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r2;
    // 0x8022DE58: sh          $t1, 0xC4($sp)
    MEM_H(0XC4, ctx->r29) = ctx->r9;
    // 0x8022DE5C: lbu         $t2, 0x27($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X27);
L_8022DE60:
    // 0x8022DE60: slti        $at, $t2, 0xFF
    ctx->r1 = SIGNED(ctx->r10) < 0XFF ? 1 : 0;
    // 0x8022DE64: beql        $at, $zero, L_8022DE78
    if (ctx->r1 == 0) {
        // 0x8022DE68: addiu       $a0, $sp, 0x60
        ctx->r4 = ADD32(ctx->r29, 0X60);
            goto L_8022DE78;
    }
    goto skip_17;
    // 0x8022DE68: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    skip_17:
    // 0x8022DE6C: jal         0x802233EC
    // 0x8022DE70: lui         $a0, 0x480
    ctx->r4 = S32(0X480 << 16);
    func_802233EC(rdram, ctx);
        goto after_6;
    // 0x8022DE70: lui         $a0, 0x480
    ctx->r4 = S32(0X480 << 16);
    after_6:
    // 0x8022DE74: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
L_8022DE78:
    // 0x8022DE78: jal         0x80228DE0
    // 0x8022DE7C: addiu       $a1, $s0, 0x30
    ctx->r5 = ADD32(ctx->r16, 0X30);
    func_80228DE0(rdram, ctx);
        goto after_7;
    // 0x8022DE7C: addiu       $a1, $s0, 0x30
    ctx->r5 = ADD32(ctx->r16, 0X30);
    after_7:
    // 0x8022DE80: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8022DE84: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x8022DE88: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x8022DE8C: jal         0x8022A210
    // 0x8022DE90: lw          $a3, 0x1C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1C);
    func_8022A210(rdram, ctx);
        goto after_8;
    // 0x8022DE90: lw          $a3, 0x1C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1C);
    after_8:
    // 0x8022DE94: jal         0x80223108
    // 0x8022DE98: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    func_80223108(rdram, ctx);
        goto after_9;
    // 0x8022DE98: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    after_9:
    // 0x8022DE9C: jal         0x8021F4E4
    // 0x8022DEA0: nop

    func_8021F4E4(rdram, ctx);
        goto after_10;
    // 0x8022DEA0: nop

    after_10:
    // 0x8022DEA4: lbu         $t5, 0x4($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X4);
    // 0x8022DEA8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8022DEAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8022DEB0: beq         $t5, $zero, L_8022DEC4
    if (ctx->r13 == 0) {
        // 0x8022DEB4: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_8022DEC4;
    }
    // 0x8022DEB4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8022DEB8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022DEBC: b           L_8022DEC8
    // 0x8022DEC0: sh          $t4, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r12;
        goto L_8022DEC8;
    // 0x8022DEC0: sh          $t4, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r12;
L_8022DEC4:
    // 0x8022DEC4: sh          $t6, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r14;
L_8022DEC8:
    // 0x8022DEC8: lh          $v0, 0x2C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2C);
    // 0x8022DECC: lhu         $t3, 0xC8($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0XC8);
    // 0x8022DED0: beq         $v0, $zero, L_8022DEE8
    if (ctx->r2 == 0) {
        // 0x8022DED4: addiu       $a0, $v0, -0x1
        ctx->r4 = ADD32(ctx->r2, -0X1);
            goto L_8022DEE8;
    }
    // 0x8022DED4: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x8022DED8: jal         0x8021F48C
    // 0x8022DEDC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8021F48C(rdram, ctx);
        goto after_11;
    // 0x8022DEDC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_11:
    // 0x8022DEE0: b           L_8022E00C
    // 0x8022DEE4: nop

        goto L_8022E00C;
    // 0x8022DEE4: nop

L_8022DEE8:
    // 0x8022DEE8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8022DEEC: lbu         $t7, 0x24($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X24);
    // 0x8022DEF0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8022DEF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022DEF8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8022DEFC: lbu         $t8, 0x25($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X25);
    // 0x8022DF00: lhu         $a3, 0xCA($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0XCA);
    // 0x8022DF04: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8022DF08: lbu         $t9, 0x26($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X26);
    // 0x8022DF0C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8022DF10: lbu         $t0, 0x27($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X27);
    // 0x8022DF14: sh          $a2, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r6;
    // 0x8022DF18: jal         0x8021F35C
    // 0x8022DF1C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_8021F35C(rdram, ctx);
        goto after_12;
    // 0x8022DF1C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_12:
    // 0x8022DF20: lh          $a2, 0xB8($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XB8);
    // 0x8022DF24: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x8022DF28: sh          $t1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r9;
    // 0x8022DF2C: lhu         $t2, 0xC4($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0XC4);
    // 0x8022DF30: lhu         $a3, 0xC6($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0XC6);
    // 0x8022DF34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022DF38: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8022DF3C: lbu         $t5, 0x24($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X24);
    // 0x8022DF40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022DF44: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8022DF48: lbu         $t4, 0x25($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X25);
    // 0x8022DF4C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8022DF50: lbu         $t6, 0x26($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X26);
    // 0x8022DF54: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8022DF58: lbu         $t3, 0x27($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X27);
    // 0x8022DF5C: jal         0x8021F35C
    // 0x8022DF60: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    func_8021F35C(rdram, ctx);
        goto after_13;
    // 0x8022DF60: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_13:
    // 0x8022DF64: lhu         $t7, 0xC0($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0XC0);
    // 0x8022DF68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022DF6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022DF70: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8022DF74: lbu         $t8, 0x24($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X24);
    // 0x8022DF78: lh          $a2, 0xB6($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XB6);
    // 0x8022DF7C: lhu         $a3, 0xC2($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0XC2);
    // 0x8022DF80: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8022DF84: lbu         $t9, 0x25($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X25);
    // 0x8022DF88: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8022DF8C: lbu         $t0, 0x26($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X26);
    // 0x8022DF90: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8022DF94: lbu         $t1, 0x27($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X27);
    // 0x8022DF98: jal         0x8021F35C
    // 0x8022DF9C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    func_8021F35C(rdram, ctx);
        goto after_14;
    // 0x8022DF9C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_14:
    // 0x8022DFA0: lhu         $t2, 0xBC($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0XBC);
    // 0x8022DFA4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8022DFA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022DFAC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8022DFB0: lbu         $t5, 0x24($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X24);
    // 0x8022DFB4: lh          $a2, 0xB6($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XB6);
    // 0x8022DFB8: lhu         $a3, 0xBE($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0XBE);
    // 0x8022DFBC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8022DFC0: lbu         $t4, 0x25($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X25);
    // 0x8022DFC4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8022DFC8: lbu         $t6, 0x26($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X26);
    // 0x8022DFCC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8022DFD0: lbu         $t3, 0x27($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X27);
    // 0x8022DFD4: jal         0x8021F35C
    // 0x8022DFD8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    func_8021F35C(rdram, ctx);
        goto after_15;
    // 0x8022DFD8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_15:
    // 0x8022DFDC: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x8022DFE0: addiu       $v1, $v1, 0x44B4
    ctx->r3 = ADD32(ctx->r3, 0X44B4);
    // 0x8022DFE4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8022DFE8: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x8022DFEC: lw          $t8, 0x44B8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X44B8);
    // 0x8022DFF0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8022DFF4: addiu       $t7, $s0, 0x2C
    ctx->r15 = ADD32(ctx->r16, 0X2C);
    // 0x8022DFF8: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8022DFFC: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x8022E000: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8022E004: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x8022E008: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_8022E00C:
    // 0x8022E00C: jal         0x8021FCD0
    // 0x8022E010: nop

    func_8021FCD0(rdram, ctx);
        goto after_16;
    // 0x8022E010: nop

    after_16:
    // 0x8022E014: jal         0x802230E4
    // 0x8022E018: nop

    func_802230E4(rdram, ctx);
        goto after_17;
    // 0x8022E018: nop

    after_17:
    // 0x8022E01C: lw          $v0, 0x74($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X74);
    // 0x8022E020: beql        $v0, $zero, L_8022E034
    if (ctx->r2 == 0) {
        // 0x8022E024: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8022E034;
    }
    goto skip_18;
    // 0x8022E024: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_18:
    // 0x8022E028: jalr        $v0
    // 0x8022E02C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_18;
    // 0x8022E02C: nop

    after_18:
    // 0x8022E030: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8022E034:
    // 0x8022E034: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022E038: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    // 0x8022E03C: jr          $ra
    // 0x8022E040: nop

    return;
    // 0x8022E040: nop

;}
RECOMP_FUNC void func_80246B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246B80: lhu         $t6, 0x14($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X14);
    // 0x80246B84: nor         $t7, $a1, $zero
    ctx->r15 = ~(ctx->r5 | 0);
    // 0x80246B88: and         $t8, $t6, $t7
    ctx->r24 = ctx->r14 & ctx->r15;
    // 0x80246B8C: jr          $ra
    // 0x80246B90: sh          $t8, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r24;
    return;
    // 0x80246B90: sh          $t8, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_80239F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80239F30: addiu       $sp, $sp, -0x2A8
    ctx->r29 = ADD32(ctx->r29, -0X2A8);
    // 0x80239F34: sw          $a1, 0x2AC($sp)
    MEM_W(0X2AC, ctx->r29) = ctx->r5;
    // 0x80239F38: lhu         $t6, 0x2AE($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X2AE);
    // 0x80239F3C: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80239F40: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80239F44: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80239F48: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80239F4C: or          $fp, $a3, $zero
    ctx->r30 = ctx->r7 | 0;
    // 0x80239F50: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80239F54: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80239F58: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80239F5C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80239F60: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80239F64: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80239F68: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80239F6C: sw          $a2, 0x2B0($sp)
    MEM_W(0X2B0, ctx->r29) = ctx->r6;
    // 0x80239F70: sw          $zero, 0x298($sp)
    MEM_W(0X298, ctx->r29) = 0;
    // 0x80239F74: sb          $zero, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = 0;
    // 0x80239F78: beq         $t6, $zero, L_80239F88
    if (ctx->r14 == 0) {
        // 0x80239F7C: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_80239F88;
    }
    // 0x80239F7C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80239F80: bne         $a2, $zero, L_80239F94
    if (ctx->r6 != 0) {
        // 0x80239F84: lw          $s1, 0x2BC($sp)
        ctx->r17 = MEM_W(ctx->r29, 0X2BC);
            goto L_80239F94;
    }
    // 0x80239F84: lw          $s1, 0x2BC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2BC);
L_80239F88:
    // 0x80239F88: b           L_8023A2F4
    // 0x80239F8C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8023A2F4;
    // 0x80239F8C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80239F90: lw          $s1, 0x2BC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2BC);
L_80239F94:
    // 0x80239F94: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x80239F98: addiu       $s0, $s1, 0xFF
    ctx->r16 = ADD32(ctx->r17, 0XFF);
    // 0x80239F9C: bgez        $s0, L_80239FAC
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80239FA0: sra         $t8, $s0, 8
        ctx->r24 = S32(SIGNED(ctx->r16) >> 8);
            goto L_80239FAC;
    }
    // 0x80239FA0: sra         $t8, $s0, 8
    ctx->r24 = S32(SIGNED(ctx->r16) >> 8);
    // 0x80239FA4: addiu       $at, $s0, 0xFF
    ctx->r1 = ADD32(ctx->r16, 0XFF);
    // 0x80239FA8: sra         $t8, $at, 8
    ctx->r24 = S32(SIGNED(ctx->r1) >> 8);
L_80239FAC:
    // 0x80239FAC: andi        $t1, $t9, 0x1
    ctx->r9 = ctx->r25 & 0X1;
    // 0x80239FB0: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80239FB4: bne         $t1, $zero, L_80239FC4
    if (ctx->r9 != 0) {
        // 0x80239FB8: or          $s3, $t8, $zero
        ctx->r19 = ctx->r24 | 0;
            goto L_80239FC4;
    }
    // 0x80239FB8: or          $s3, $t8, $zero
    ctx->r19 = ctx->r24 | 0;
    // 0x80239FBC: b           L_8023A2F4
    // 0x80239FC0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8023A2F4;
    // 0x80239FC0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80239FC4:
    // 0x80239FC4: jal         0x802452EC
    // 0x80239FC8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_802452EC(rdram, ctx);
        goto after_0;
    // 0x80239FC8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_0:
    // 0x80239FCC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80239FD0: bne         $v0, $at, L_80239FE0
    if (ctx->r2 != ctx->r1) {
        // 0x80239FD4: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80239FE0;
    }
    // 0x80239FD4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80239FD8: b           L_8023A2F4
    // 0x80239FDC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8023A2F4;
    // 0x80239FDC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80239FE0:
    // 0x80239FE0: lw          $s2, 0x2B8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2B8);
    // 0x80239FE4: lw          $t2, 0x2C0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C0);
    // 0x80239FE8: lhu         $a1, 0x2AE($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2AE);
    // 0x80239FEC: lw          $a2, 0x2B0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2B0);
    // 0x80239FF0: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x80239FF4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x80239FF8: jal         0x80239120
    // 0x80239FFC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_80239120(rdram, ctx);
        goto after_1;
    // 0x80239FFC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_1:
    // 0x8023A000: beq         $v0, $zero, L_8023A018
    if (ctx->r2 == 0) {
        // 0x8023A004: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8023A018;
    }
    // 0x8023A004: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8023A008: beq         $v0, $at, L_8023A01C
    if (ctx->r2 == ctx->r1) {
        // 0x8023A00C: lw          $t3, 0x2C0($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X2C0);
            goto L_8023A01C;
    }
    // 0x8023A00C: lw          $t3, 0x2C0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C0);
    // 0x8023A010: b           L_8023A2F8
    // 0x8023A014: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_8023A2F8;
    // 0x8023A014: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_8023A018:
    // 0x8023A018: lw          $t3, 0x2C0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C0);
L_8023A01C:
    // 0x8023A01C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023A020: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8023A024: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8023A028: beq         $t4, $at, L_8023A038
    if (ctx->r12 == ctx->r1) {
        // 0x8023A02C: nop
    
            goto L_8023A038;
    }
    // 0x8023A02C: nop

    // 0x8023A030: b           L_8023A2F4
    // 0x8023A034: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8023A2F4;
    // 0x8023A034: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8023A038:
    // 0x8023A038: jal         0x802469D0
    // 0x8023A03C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_802469D0(rdram, ctx);
        goto after_2;
    // 0x8023A03C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_2:
    // 0x8023A040: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x8023A044: nop

    // 0x8023A048: slt         $at, $t5, $s1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8023A04C: beq         $at, $zero, L_8023A05C
    if (ctx->r1 == 0) {
        // 0x8023A050: nop
    
            goto L_8023A05C;
    }
    // 0x8023A050: nop

    // 0x8023A054: b           L_8023A2F4
    // 0x8023A058: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_8023A2F4;
    // 0x8023A058: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8023A05C:
    // 0x8023A05C: beq         $s0, $zero, L_8023A2F4
    if (ctx->r16 == 0) {
        // 0x8023A060: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023A2F4;
    }
    // 0x8023A060: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023A064: lw          $t6, 0x2C0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C0);
    // 0x8023A068: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8023A06C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8023A070: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023A074: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8023A078: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8023A07C: jal         0x80239120
    // 0x8023A080: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_80239120(rdram, ctx);
        goto after_3;
    // 0x8023A080: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_3:
    // 0x8023A084: beq         $v0, $zero, L_8023A09C
    if (ctx->r2 == 0) {
        // 0x8023A088: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8023A09C;
    }
    // 0x8023A088: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8023A08C: beq         $v0, $at, L_8023A0A0
    if (ctx->r2 == ctx->r1) {
        // 0x8023A090: lw          $t7, 0x2C0($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X2C0);
            goto L_8023A0A0;
    }
    // 0x8023A090: lw          $t7, 0x2C0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C0);
    // 0x8023A094: b           L_8023A2F8
    // 0x8023A098: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_8023A2F8;
    // 0x8023A098: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_8023A09C:
    // 0x8023A09C: lw          $t7, 0x2C0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C0);
L_8023A0A0:
    // 0x8023A0A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023A0A4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8023A0A8: nop

    // 0x8023A0AC: bne         $t8, $at, L_8023A0BC
    if (ctx->r24 != ctx->r1) {
        // 0x8023A0B0: nop
    
            goto L_8023A0BC;
    }
    // 0x8023A0B0: nop

    // 0x8023A0B4: b           L_8023A2F4
    // 0x8023A0B8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8023A2F4;
    // 0x8023A0B8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8023A0BC:
    // 0x8023A0BC: lbu         $t9, 0x64($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X64);
    // 0x8023A0C0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8023A0C4: blez        $t9, L_8023A1FC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8023A0C8: addiu       $s6, $sp, 0x8C
        ctx->r22 = ADD32(ctx->r29, 0X8C);
            goto L_8023A1FC;
    }
    // 0x8023A0C8: addiu       $s6, $sp, 0x8C
    ctx->r22 = ADD32(ctx->r29, 0X8C);
    // 0x8023A0CC: addiu       $s4, $sp, 0x18C
    ctx->r20 = ADD32(ctx->r29, 0X18C);
    // 0x8023A0D0: addiu       $s0, $sp, 0x28C
    ctx->r16 = ADD32(ctx->r29, 0X28C);
L_8023A0D4:
    // 0x8023A0D4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8023A0D8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8023A0DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023A0E0: jal         0x80245404
    // 0x8023A0E4: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    func_80245404(rdram, ctx);
        goto after_4;
    // 0x8023A0E4: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    after_4:
    // 0x8023A0E8: beq         $v0, $zero, L_8023A0F8
    if (ctx->r2 == 0) {
        // 0x8023A0EC: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_8023A0F8;
    }
    // 0x8023A0EC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8023A0F0: b           L_8023A2F8
    // 0x8023A0F4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_8023A2F8;
    // 0x8023A0F4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_8023A0F8:
    // 0x8023A0F8: addiu       $t1, $sp, 0x2A0
    ctx->r9 = ADD32(ctx->r29, 0X2A0);
    // 0x8023A0FC: addiu       $t2, $sp, 0x29C
    ctx->r10 = ADD32(ctx->r29, 0X29C);
    // 0x8023A100: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8023A104: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8023A108: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8023A10C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x8023A110: addiu       $a3, $sp, 0x2A4
    ctx->r7 = ADD32(ctx->r29, 0X2A4);
    // 0x8023A114: jal         0x8023A324
    // 0x8023A118: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    func_8023A324(rdram, ctx);
        goto after_5;
    // 0x8023A118: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_5:
    // 0x8023A11C: beq         $v0, $zero, L_8023A130
    if (ctx->r2 == 0) {
        // 0x8023A120: lw          $t0, 0x2A4($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X2A4);
            goto L_8023A130;
    }
    // 0x8023A120: lw          $t0, 0x2A4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2A4);
    // 0x8023A124: b           L_8023A2F8
    // 0x8023A128: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_8023A2F8;
    // 0x8023A128: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8023A12C: lw          $t0, 0x2A4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2A4);
L_8023A130:
    // 0x8023A130: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023A134: beq         $t0, $at, L_8023A1E4
    if (ctx->r8 == ctx->r1) {
        // 0x8023A138: nop
    
            goto L_8023A1E4;
    }
    // 0x8023A138: nop

    // 0x8023A13C: bne         $s7, $zero, L_8023A150
    if (ctx->r23 != 0) {
        // 0x8023A140: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_8023A150;
    }
    // 0x8023A140: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8023A144: sb          $t0, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r8;
    // 0x8023A148: b           L_8023A184
    // 0x8023A14C: sb          $s1, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r17;
        goto L_8023A184;
    // 0x8023A14C: sb          $s1, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r17;
L_8023A150:
    // 0x8023A150: lw          $t3, 0x298($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X298);
    // 0x8023A154: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8023A158: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8023A15C: addu        $v0, $s6, $t4
    ctx->r2 = ADD32(ctx->r22, ctx->r12);
    // 0x8023A160: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
    // 0x8023A164: sb          $t0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r8;
    // 0x8023A168: lbu         $a3, 0x6A($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X6A);
    // 0x8023A16C: jal         0x80245404
    // 0x8023A170: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80245404(rdram, ctx);
        goto after_6;
    // 0x8023A170: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x8023A174: beq         $v0, $zero, L_8023A188
    if (ctx->r2 == 0) {
        // 0x8023A178: addiu       $v1, $sp, 0x8C
        ctx->r3 = ADD32(ctx->r29, 0X8C);
            goto L_8023A188;
    }
    // 0x8023A178: addiu       $v1, $sp, 0x8C
    ctx->r3 = ADD32(ctx->r29, 0X8C);
    // 0x8023A17C: b           L_8023A2F8
    // 0x8023A180: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_8023A2F8;
    // 0x8023A180: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_8023A184:
    // 0x8023A184: addiu       $v1, $sp, 0x8C
    ctx->r3 = ADD32(ctx->r29, 0X8C);
L_8023A188:
    // 0x8023A188: addiu       $v0, $sp, 0x18C
    ctx->r2 = ADD32(ctx->r29, 0X18C);
L_8023A18C:
    // 0x8023A18C: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x8023A190: lhu         $t7, 0x4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X4);
    // 0x8023A194: lhu         $t8, 0x6($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X6);
    // 0x8023A198: lhu         $t5, 0x0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X0);
    // 0x8023A19C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8023A1A0: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8023A1A4: sh          $t6, -0x6($v1)
    MEM_H(-0X6, ctx->r3) = ctx->r14;
    // 0x8023A1A8: sh          $t7, -0x4($v1)
    MEM_H(-0X4, ctx->r3) = ctx->r15;
    // 0x8023A1AC: sh          $t8, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r24;
    // 0x8023A1B0: bne         $v0, $s0, L_8023A18C
    if (ctx->r2 != ctx->r16) {
        // 0x8023A1B4: sh          $t5, -0x8($v1)
        MEM_H(-0X8, ctx->r3) = ctx->r13;
            goto L_8023A18C;
    }
    // 0x8023A1B4: sh          $t5, -0x8($v1)
    MEM_H(-0X8, ctx->r3) = ctx->r13;
    // 0x8023A1B8: lw          $v0, 0x2A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2A0);
    // 0x8023A1BC: lw          $t9, 0x29C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X29C);
    // 0x8023A1C0: slt         $at, $v0, $s3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8023A1C4: sb          $s1, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = ctx->r17;
    // 0x8023A1C8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8023A1CC: beq         $at, $zero, L_8023A1DC
    if (ctx->r1 == 0) {
        // 0x8023A1D0: sw          $t9, 0x298($sp)
        MEM_W(0X298, ctx->r29) = ctx->r25;
            goto L_8023A1DC;
    }
    // 0x8023A1D0: sw          $t9, 0x298($sp)
    MEM_W(0X298, ctx->r29) = ctx->r25;
    // 0x8023A1D4: b           L_8023A1E4
    // 0x8023A1D8: subu        $s3, $s3, $v0
    ctx->r19 = SUB32(ctx->r19, ctx->r2);
        goto L_8023A1E4;
    // 0x8023A1D8: subu        $s3, $s3, $v0
    ctx->r19 = SUB32(ctx->r19, ctx->r2);
L_8023A1DC:
    // 0x8023A1DC: b           L_8023A1FC
    // 0x8023A1E0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_8023A1FC;
    // 0x8023A1E0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_8023A1E4:
    // 0x8023A1E4: lbu         $t2, 0x64($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X64);
    // 0x8023A1E8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8023A1EC: andi        $t1, $s1, 0xFF
    ctx->r9 = ctx->r17 & 0XFF;
    // 0x8023A1F0: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8023A1F4: bne         $at, $zero, L_8023A0D4
    if (ctx->r1 != 0) {
        // 0x8023A1F8: or          $s1, $t1, $zero
        ctx->r17 = ctx->r9 | 0;
            goto L_8023A0D4;
    }
    // 0x8023A1F8: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
L_8023A1FC:
    // 0x8023A1FC: lw          $t0, 0x2A4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2A4);
    // 0x8023A200: bgtz        $s3, L_8023A214
    if (SIGNED(ctx->r19) > 0) {
        // 0x8023A204: addiu       $s6, $sp, 0x8C
        ctx->r22 = ADD32(ctx->r29, 0X8C);
            goto L_8023A214;
    }
    // 0x8023A204: addiu       $s6, $sp, 0x8C
    ctx->r22 = ADD32(ctx->r29, 0X8C);
    // 0x8023A208: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023A20C: bne         $t0, $at, L_8023A21C
    if (ctx->r8 != ctx->r1) {
        // 0x8023A210: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_8023A21C;
    }
    // 0x8023A210: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8023A214:
    // 0x8023A214: b           L_8023A2F4
    // 0x8023A218: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8023A2F4;
    // 0x8023A218: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8023A21C:
    // 0x8023A21C: lw          $t3, 0x298($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X298);
    // 0x8023A220: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8023A224: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8023A228: addu        $v0, $s6, $t4
    ctx->r2 = ADD32(ctx->r22, ctx->r12);
    // 0x8023A22C: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
    // 0x8023A230: sb          $t0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r8;
    // 0x8023A234: lbu         $a3, 0x6A($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X6A);
    // 0x8023A238: jal         0x80245404
    // 0x8023A23C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80245404(rdram, ctx);
        goto after_7;
    // 0x8023A23C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x8023A240: beq         $v0, $zero, L_8023A250
    if (ctx->r2 == 0) {
        // 0x8023A244: addiu       $v1, $sp, 0x7C
        ctx->r3 = ADD32(ctx->r29, 0X7C);
            goto L_8023A250;
    }
    // 0x8023A244: addiu       $v1, $sp, 0x7C
    ctx->r3 = ADD32(ctx->r29, 0X7C);
    // 0x8023A248: b           L_8023A2F8
    // 0x8023A24C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_8023A2F8;
    // 0x8023A24C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_8023A250:
    // 0x8023A250: lhu         $t5, 0x5C($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X5C);
    // 0x8023A254: lhu         $t6, 0x2AE($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X2AE);
    // 0x8023A258: lw          $t7, 0x2B0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2B0);
    // 0x8023A25C: sh          $zero, 0x76($sp)
    MEM_H(0X76, ctx->r29) = 0;
    // 0x8023A260: addiu       $v0, $sp, 0x6C
    ctx->r2 = ADD32(ctx->r29, 0X6C);
    // 0x8023A264: sh          $t5, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r13;
    // 0x8023A268: sh          $t6, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r14;
    // 0x8023A26C: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
L_8023A270:
    // 0x8023A270: lbu         $t8, 0x0($fp)
    ctx->r24 = MEM_BU(ctx->r30, 0X0);
    // 0x8023A274: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A278: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8023A27C: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x8023A280: bne         $at, $zero, L_8023A270
    if (ctx->r1 != 0) {
        // 0x8023A284: sb          $t8, 0xF($v0)
        MEM_B(0XF, ctx->r2) = ctx->r24;
            goto L_8023A270;
    }
    // 0x8023A284: sb          $t8, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r24;
    // 0x8023A288: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
    // 0x8023A28C: lw          $t4, 0x2C0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C0);
    // 0x8023A290: sb          $t9, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r25;
    // 0x8023A294: lbu         $t1, 0x1($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X1);
    // 0x8023A298: addiu       $s2, $s2, 0x3
    ctx->r18 = ADD32(ctx->r18, 0X3);
    // 0x8023A29C: sb          $t1, 0x79($sp)
    MEM_B(0X79, ctx->r29) = ctx->r9;
    // 0x8023A2A0: lbu         $t2, -0x1($s2)
    ctx->r10 = MEM_BU(ctx->r18, -0X1);
    // 0x8023A2A4: addiu       $a3, $sp, 0x6C
    ctx->r7 = ADD32(ctx->r29, 0X6C);
    // 0x8023A2A8: sb          $t2, 0x7A($sp)
    MEM_B(0X7A, ctx->r29) = ctx->r10;
    // 0x8023A2AC: lbu         $t3, 0x0($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X0);
    // 0x8023A2B0: nop

    // 0x8023A2B4: sb          $t3, 0x7B($sp)
    MEM_B(0X7B, ctx->r29) = ctx->r11;
    // 0x8023A2B8: lw          $t6, 0x5C($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X5C);
    // 0x8023A2BC: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8023A2C0: lw          $a1, 0x8($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X8);
    // 0x8023A2C4: addu        $a2, $t5, $t6
    ctx->r6 = ADD32(ctx->r13, ctx->r14);
    // 0x8023A2C8: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x8023A2CC: lw          $a0, 0x4($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X4);
    // 0x8023A2D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8023A2D4: jal         0x80246660
    // 0x8023A2D8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    func_80246660(rdram, ctx);
        goto after_8;
    // 0x8023A2D8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_8:
    // 0x8023A2DC: beq         $v0, $zero, L_8023A2EC
    if (ctx->r2 == 0) {
        // 0x8023A2E0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8023A2EC;
    }
    // 0x8023A2E0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8023A2E4: b           L_8023A2F8
    // 0x8023A2E8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_8023A2F8;
    // 0x8023A2E8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_8023A2EC:
    // 0x8023A2EC: b           L_8023A2F4
    // 0x8023A2F0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8023A2F4;
    // 0x8023A2F0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8023A2F4:
    // 0x8023A2F4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_8023A2F8:
    // 0x8023A2F8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023A2FC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8023A300: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8023A304: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8023A308: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8023A30C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8023A310: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8023A314: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8023A318: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x8023A31C: jr          $ra
    // 0x8023A320: addiu       $sp, $sp, 0x2A8
    ctx->r29 = ADD32(ctx->r29, 0X2A8);
    return;
    // 0x8023A320: addiu       $sp, $sp, 0x2A8
    ctx->r29 = ADD32(ctx->r29, 0X2A8);
;}
RECOMP_FUNC void func_80235010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80235010: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80235014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235018: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x8023501C: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x80235020: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80235024: multu       $t6, $v1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80235028: mflo        $t7
    ctx->r15 = lo;
    // 0x8023502C: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80235030: lw          $t9, 0x28($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X28);
    // 0x80235034: bnel        $t9, $zero, L_80235068
    if (ctx->r25 != 0) {
        // 0x80235038: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80235068;
    }
    goto skip_0;
    // 0x80235038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023503C: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x80235040: lw          $t0, 0x3C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X3C);
    // 0x80235044: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80235048: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023504C: multu       $t0, $v1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80235050: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80235054: mflo        $t1
    ctx->r9 = lo;
    // 0x80235058: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x8023505C: jal         0x8023F37C
    // 0x80235060: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    func_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80235060: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    after_0:
    // 0x80235064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80235068:
    // 0x80235068: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8023506C: jr          $ra
    // 0x80235070: nop

    return;
    // 0x80235070: nop

;}
RECOMP_FUNC void func_80201A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80201A18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201A1C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80201A20: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80201A24: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x80201A28: lbu         $v1, 0x23($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X23);
    // 0x80201A2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201A30: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80201A34: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201A38: bne         $at, $zero, L_80201A64
    if (ctx->r1 != 0) {
        // 0x80201A3C: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80201A64;
    }
    // 0x80201A3C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201A40: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80201A44: addiu       $a1, $a1, 0x1E48
    ctx->r5 = ADD32(ctx->r5, 0X1E48);
    // 0x80201A48: addiu       $a0, $a0, 0x1E30
    ctx->r4 = ADD32(ctx->r4, 0X1E30);
    // 0x80201A4C: addiu       $a2, $zero, 0x1A1
    ctx->r6 = ADD32(0, 0X1A1);
    // 0x80201A50: jal         0x80231C9C
    // 0x80201A54: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80201A54: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80201A58: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80201A5C: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x80201A60: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_80201A64:
    // 0x80201A64: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201A68: beq         $at, $zero, L_80201AFC
    if (ctx->r1 == 0) {
        // 0x80201A6C: lwc1        $f6, 0x24($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
            goto L_80201AFC;
    }
    // 0x80201A6C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80201A70: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80201A74: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201A78: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80201A7C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80201A80: addiu       $a1, $a1, 0x1E60
    ctx->r5 = ADD32(ctx->r5, 0X1E60);
    // 0x80201A84: addiu       $a0, $a0, 0x1E50
    ctx->r4 = ADD32(ctx->r4, 0X1E50);
    // 0x80201A88: bc1tl       L_80201A9C
    if (c1cs) {
        // 0x80201A8C: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_80201A9C;
    }
    goto skip_0;
    // 0x80201A8C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    skip_0:
    // 0x80201A90: jal         0x80231C9C
    // 0x80201A94: addiu       $a2, $zero, 0x1A3
    ctx->r6 = ADD32(0, 0X1A3);
    func_80231C9C(rdram, ctx);
        goto after_1;
    // 0x80201A94: addiu       $a2, $zero, 0x1A3
    ctx->r6 = ADD32(0, 0X1A3);
    after_1:
    // 0x80201A98: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
L_80201A9C:
    // 0x80201A9C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80201AA0: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80201AA4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201AA8: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80201AAC: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80201AB0: addiu       $a1, $a1, 0x1E78
    ctx->r5 = ADD32(ctx->r5, 0X1E78);
    // 0x80201AB4: addiu       $a0, $a0, 0x1E68
    ctx->r4 = ADD32(ctx->r4, 0X1E68);
    // 0x80201AB8: bc1tl       L_80201ACC
    if (c1cs) {
        // 0x80201ABC: lbu         $t7, 0x23($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X23);
            goto L_80201ACC;
    }
    goto skip_1;
    // 0x80201ABC: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    skip_1:
    // 0x80201AC0: jal         0x80231C9C
    // 0x80201AC4: addiu       $a2, $zero, 0x1A4
    ctx->r6 = ADD32(0, 0X1A4);
    func_80231C9C(rdram, ctx);
        goto after_2;
    // 0x80201AC4: addiu       $a2, $zero, 0x1A4
    ctx->r6 = ADD32(0, 0X1A4);
    after_2:
    // 0x80201AC8: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
L_80201ACC:
    // 0x80201ACC: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80201AD0: lw          $t6, 0x6DE4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6DE4);
    // 0x80201AD4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80201AD8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80201ADC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80201AE0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80201AE4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80201AE8: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80201AEC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80201AF0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80201AF4: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80201AF8: swc1        $f16, 0x74($t9)
    MEM_W(0X74, ctx->r25) = ctx->f16.u32l;
L_80201AFC:
    // 0x80201AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201B00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80201B04: jr          $ra
    // 0x80201B08: nop

    return;
    // 0x80201B08: nop

;}
RECOMP_FUNC void func_80205B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205B0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80205B10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80205B14: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80205B18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80205B1C: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80205B20: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80205B24: addiu       $a1, $a1, 0x299C
    ctx->r5 = ADD32(ctx->r5, 0X299C);
    // 0x80205B28: addiu       $a2, $a2, 0xBEE
    ctx->r6 = ADD32(ctx->r6, 0XBEE);
    // 0x80205B2C: jal         0x80231C58
    // 0x80205B30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80231C58(rdram, ctx);
        goto after_0;
    // 0x80205B30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80205B34: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80205B38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80205B3C: bne         $v0, $zero, L_80205BAC
    if (ctx->r2 != 0) {
        // 0x80205B40: lw          $a1, 0x20($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X20);
            goto L_80205BAC;
    }
    // 0x80205B40: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80205B44: beq         $v1, $zero, L_80205B84
    if (ctx->r3 == 0) {
        // 0x80205B48: lui         $t9, 0x8026
        ctx->r25 = S32(0X8026 << 16);
            goto L_80205B84;
    }
    // 0x80205B48: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x80205B4C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80205B50: bne         $v1, $at, L_80205BAC
    if (ctx->r3 != ctx->r1) {
        // 0x80205B54: lui         $t6, 0x8026
        ctx->r14 = S32(0X8026 << 16);
            goto L_80205BAC;
    }
    // 0x80205B54: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x80205B58: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80205B5C: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80205B60: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80205B64: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80205B68: lw          $t6, -0x4160($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4160);
    // 0x80205B6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80205B70: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80205B74: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80205B78: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80205B7C: b           L_80205BAC
    // 0x80205B80: sw          $a1, 0x2D4($t8)
    MEM_W(0X2D4, ctx->r24) = ctx->r5;
        goto L_80205BAC;
    // 0x80205B80: sw          $a1, 0x2D4($t8)
    MEM_W(0X2D4, ctx->r24) = ctx->r5;
L_80205B84:
    // 0x80205B84: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x80205B88: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x80205B8C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80205B90: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x80205B94: lw          $t9, -0x4160($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4160);
    // 0x80205B98: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80205B9C: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x80205BA0: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80205BA4: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80205BA8: sw          $a1, 0x2D0($t1)
    MEM_W(0X2D0, ctx->r9) = ctx->r5;
L_80205BAC:
    // 0x80205BAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80205BB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80205BB4: jr          $ra
    // 0x80205BB8: nop

    return;
    // 0x80205BB8: nop

;}
RECOMP_FUNC void func_8021E400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E400: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8021E404: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021E408: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8021E40C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021E410: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021E414: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8021E418: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8021E41C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8021E420: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8021E424: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8021E428: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8021E42C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021E430: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8021E434: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    // 0x8021E438: jal         0x8022B948
    // 0x8021E43C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_0;
    // 0x8021E43C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x8021E440: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8021E444: lw          $t6, 0x5230($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5230);
    // 0x8021E448: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x8021E44C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8021E450: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8021E454: jal         0x80223840
    // 0x8021E458: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_80223840(rdram, ctx);
        goto after_1;
    // 0x8021E458: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_1:
    // 0x8021E45C: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x8021E460: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021E464: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x8021E468: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    // 0x8021E46C: jal         0x8022393C
    // 0x8021E470: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_2;
    // 0x8021E470: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8021E474: beq         $v0, $zero, L_8021E568
    if (ctx->r2 == 0) {
        // 0x8021E478: lw          $fp, 0x54($sp)
        ctx->r30 = MEM_W(ctx->r29, 0X54);
            goto L_8021E568;
    }
    // 0x8021E478: lw          $fp, 0x54($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X54);
    // 0x8021E47C: lui         $s6, 0x5354
    ctx->r22 = S32(0X5354 << 16);
    // 0x8021E480: lui         $s5, 0x494D
    ctx->r21 = S32(0X494D << 16);
    // 0x8021E484: lui         $s4, 0x4652
    ctx->r20 = S32(0X4652 << 16);
    // 0x8021E488: lui         $s3, 0x4249
    ctx->r19 = S32(0X4249 << 16);
    // 0x8021E48C: ori         $s3, $s3, 0x544D
    ctx->r19 = ctx->r19 | 0X544D;
    // 0x8021E490: ori         $s4, $s4, 0x4D54
    ctx->r20 = ctx->r20 | 0X4D54;
    // 0x8021E494: ori         $s5, $s5, 0x4147
    ctx->r21 = ctx->r21 | 0X4147;
    // 0x8021E498: ori         $s6, $s6, 0x5247
    ctx->r22 = ctx->r22 | 0X5247;
L_8021E49C:
    // 0x8021E49C: beq         $v0, $s3, L_8021E4F8
    if (ctx->r2 == ctx->r19) {
        // 0x8021E4A0: lw          $a0, 0x64($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X64);
            goto L_8021E4F8;
    }
    // 0x8021E4A0: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x8021E4A4: beq         $v0, $s4, L_8021E4E0
    if (ctx->r2 == ctx->r20) {
        // 0x8021E4A8: lw          $t9, 0x60($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X60);
            goto L_8021E4E0;
    }
    // 0x8021E4A8: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x8021E4AC: beq         $v0, $s5, L_8021E520
    if (ctx->r2 == ctx->r21) {
        // 0x8021E4B0: lw          $a0, 0x64($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X64);
            goto L_8021E520;
    }
    // 0x8021E4B0: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x8021E4B4: bne         $v0, $s6, L_8021E548
    if (ctx->r2 != ctx->r22) {
        // 0x8021E4B8: lw          $a0, 0x64($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X64);
            goto L_8021E548;
    }
    // 0x8021E4B8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x8021E4BC: jal         0x8022B948
    // 0x8021E4C0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_3;
    // 0x8021E4C0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x8021E4C4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8021E4C8: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8021E4CC: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x8021E4D0: jal         0x8022B460
    // 0x8021E4D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8022B460(rdram, ctx);
        goto after_4;
    // 0x8021E4D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x8021E4D8: b           L_8021E54C
    // 0x8021E4DC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
        goto L_8021E54C;
    // 0x8021E4DC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_8021E4E0:
    // 0x8021E4E0: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x8021E4E4: sb          $t0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r8;
    // 0x8021E4E8: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x8021E4EC: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x8021E4F0: b           L_8021E548
    // 0x8021E4F4: sb          $t2, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r10;
        goto L_8021E548;
    // 0x8021E4F4: sb          $t2, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r10;
L_8021E4F8:
    // 0x8021E4F8: srl         $fp, $a0, 4
    ctx->r30 = S32(U32(ctx->r4) >> 4);
    // 0x8021E4FC: jal         0x8022B948
    // 0x8021E500: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8022B948(rdram, ctx);
        goto after_5;
    // 0x8021E500: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_5:
    // 0x8021E504: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x8021E508: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8021E50C: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x8021E510: jal         0x8022B460
    // 0x8021E514: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8022B460(rdram, ctx);
        goto after_6;
    // 0x8021E514: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x8021E518: b           L_8021E54C
    // 0x8021E51C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
        goto L_8021E54C;
    // 0x8021E51C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_8021E520:
    // 0x8021E520: sll         $t3, $s2, 2
    ctx->r11 = S32(ctx->r18 << 2);
    // 0x8021E524: addu        $s1, $s0, $t3
    ctx->r17 = ADD32(ctx->r16, ctx->r11);
    // 0x8021E528: jal         0x8022B948
    // 0x8021E52C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8022B948(rdram, ctx);
        goto after_7;
    // 0x8021E52C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_7:
    // 0x8021E530: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8021E534: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8021E538: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x8021E53C: jal         0x8022B460
    // 0x8021E540: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8022B460(rdram, ctx);
        goto after_8;
    // 0x8021E540: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_8:
    // 0x8021E544: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8021E548:
    // 0x8021E548: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_8021E54C:
    // 0x8021E54C: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x8021E550: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    // 0x8021E554: jal         0x8022393C
    // 0x8021E558: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_9;
    // 0x8021E558: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
    // 0x8021E55C: bne         $v0, $zero, L_8021E49C
    if (ctx->r2 != 0) {
        // 0x8021E560: nop
    
            goto L_8021E49C;
    }
    // 0x8021E560: nop

    // 0x8021E564: sw          $fp, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r30;
L_8021E568:
    // 0x8021E568: lw          $fp, 0x54($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X54);
    // 0x8021E56C: jal         0x802238F0
    // 0x8021E570: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_802238F0(rdram, ctx);
        goto after_10;
    // 0x8021E570: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_10:
    // 0x8021E574: blez        $fp, L_8021E638
    if (SIGNED(ctx->r30) <= 0) {
        // 0x8021E578: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8021E638;
    }
    // 0x8021E578: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8021E57C: andi        $v0, $fp, 0x3
    ctx->r2 = ctx->r30 & 0X3;
    // 0x8021E580: beq         $v0, $zero, L_8021E5B8
    if (ctx->r2 == 0) {
        // 0x8021E584: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8021E5B8;
    }
    // 0x8021E584: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8021E588: sll         $v1, $zero, 4
    ctx->r3 = S32(0 << 4);
L_8021E58C:
    // 0x8021E58C: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x8021E590: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8021E594: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x8021E598: lw          $t5, 0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8);
    // 0x8021E59C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8021E5A0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8021E5A4: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x8021E5A8: lw          $t8, 0x10($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X10);
    // 0x8021E5AC: bne         $a1, $a0, L_8021E58C
    if (ctx->r5 != ctx->r4) {
        // 0x8021E5B0: sw          $t8, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->r24;
            goto L_8021E58C;
    }
    // 0x8021E5B0: sw          $t8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r24;
    // 0x8021E5B4: beq         $a0, $fp, L_8021E638
    if (ctx->r4 == ctx->r30) {
        // 0x8021E5B8: sll         $v1, $a0, 4
        ctx->r3 = S32(ctx->r4 << 4);
            goto L_8021E638;
    }
L_8021E5B8:
    // 0x8021E5B8: sll         $v1, $a0, 4
    ctx->r3 = S32(ctx->r4 << 4);
    // 0x8021E5BC: sll         $a1, $fp, 4
    ctx->r5 = S32(ctx->r30 << 4);
L_8021E5C0:
    // 0x8021E5C0: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x8021E5C4: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    // 0x8021E5C8: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x8021E5CC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8021E5D0: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x8021E5D4: lw          $t3, 0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X10);
    // 0x8021E5D8: sw          $t3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r11;
    // 0x8021E5DC: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x8021E5E0: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x8021E5E4: lw          $t5, 0x18($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X18);
    // 0x8021E5E8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8021E5EC: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x8021E5F0: lw          $t8, 0x10($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X10);
    // 0x8021E5F4: sw          $t8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r24;
    // 0x8021E5F8: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x8021E5FC: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    // 0x8021E600: lw          $t0, 0x28($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X28);
    // 0x8021E604: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8021E608: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x8021E60C: lw          $t3, 0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X10);
    // 0x8021E610: sw          $t3, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r11;
    // 0x8021E614: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x8021E618: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x8021E61C: lw          $t5, 0x38($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X38);
    // 0x8021E620: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x8021E624: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8021E628: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x8021E62C: lw          $t8, 0x10($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X10);
    // 0x8021E630: bne         $v1, $a1, L_8021E5C0
    if (ctx->r3 != ctx->r5) {
        // 0x8021E634: sw          $t8, 0x38($v0)
        MEM_W(0X38, ctx->r2) = ctx->r24;
            goto L_8021E5C0;
    }
    // 0x8021E634: sw          $t8, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r24;
L_8021E638:
    // 0x8021E638: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8021E63C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8021E640: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021E644: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021E648: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021E64C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8021E650: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8021E654: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8021E658: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8021E65C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8021E660: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8021E664: jr          $ra
    // 0x8021E668: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8021E668: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8023E640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E640: lui         $t6, 0xA460
    ctx->r14 = S32(0XA460 << 16);
    // 0x8023E644: lw          $a2, 0x10($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X10);
    // 0x8023E648: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8023E64C: andi        $t7, $a2, 0x3
    ctx->r15 = ctx->r6 & 0X3;
    // 0x8023E650: beq         $t7, $zero, L_8023E66C
    if (ctx->r15 == 0) {
        // 0x8023E654: nop
    
            goto L_8023E66C;
    }
    // 0x8023E654: nop

L_8023E658:
    // 0x8023E658: lui         $t8, 0xA460
    ctx->r24 = S32(0XA460 << 16);
    // 0x8023E65C: lw          $a2, 0x10($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X10);
    // 0x8023E660: andi        $t9, $a2, 0x3
    ctx->r25 = ctx->r6 & 0X3;
    // 0x8023E664: bne         $t9, $zero, L_8023E658
    if (ctx->r25 != 0) {
        // 0x8023E668: nop
    
            goto L_8023E658;
    }
    // 0x8023E668: nop

L_8023E66C:
    // 0x8023E66C: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x8023E670: lw          $t0, 0x308($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X308);
    // 0x8023E674: lui         $at, 0xA000
    ctx->r1 = S32(0XA000 << 16);
    // 0x8023E678: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8023E67C: or          $t1, $t0, $a0
    ctx->r9 = ctx->r8 | ctx->r4;
    // 0x8023E680: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x8023E684: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8023E688: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8023E68C: jr          $ra
    // 0x8023E690: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    return;
    // 0x8023E690: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
;}
RECOMP_FUNC void func_80234BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234BC0: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80234BC4: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80234BC8: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80234BCC: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80234BD0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80234BD4: nop

    // 0x80234BD8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80234BDC: jr          $ra
    // 0x80234BE0: add.s       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f18.fl;
    return;
    // 0x80234BE0: add.s       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f18.fl;
;}
