#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8020833C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020833C: beq         $a0, $zero, L_80208354
    if (ctx->r4 == 0) {
        // 0x80208340: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80208354;
    }
    // 0x80208340: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80208344: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
L_80208348:
    // 0x80208348: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8020834C: bnel        $at, $zero, L_80208348
    if (ctx->r1 != 0) {
        // 0x80208350: addiu       $v1, $v1, 0x20
        ctx->r3 = ADD32(ctx->r3, 0X20);
            goto L_80208348;
    }
    goto skip_0;
    // 0x80208350: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    skip_0:
L_80208354:
    // 0x80208354: jr          $ra
    // 0x80208358: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80208358: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80228CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228CF0: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80228CF4: lw          $t6, 0x8C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X8C0);
    // 0x80228CF8: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x80228CFC: lw          $t8, 0x5E60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5E60);
    // 0x80228D00: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x80228D04: jr          $ra
    // 0x80228D08: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    return;
    // 0x80228D08: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
;}
RECOMP_FUNC void func_802000A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802000A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802000A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802000A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802000AC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_802000B0:
    // 0x802000B0: jal         0x802000DC
    // 0x802000B4: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    func_802000DC(rdram, ctx);
        goto after_0;
    // 0x802000B4: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_0:
    // 0x802000B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802000BC: andi        $t6, $s0, 0xFFFF
    ctx->r14 = ctx->r16 & 0XFFFF;
    // 0x802000C0: blez        $t6, L_802000B0
    if (SIGNED(ctx->r14) <= 0) {
        // 0x802000C4: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_802000B0;
    }
    // 0x802000C4: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x802000C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802000CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802000D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802000D4: jr          $ra
    // 0x802000D8: nop

    return;
    // 0x802000D8: nop

;}
RECOMP_FUNC void func_80236F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80236F38: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x80236F3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80236F40: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80236F44: blez        $t6, L_80236F70
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80236F48: nop
    
            goto L_80236F70;
    }
    // 0x80236F48: nop

    // 0x80236F4C: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
L_80236F50:
    // 0x80236F50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236F54: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80236F58: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x80236F5C: sw          $t8, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r24;
    // 0x80236F60: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x80236F64: slt         $at, $v0, $t9
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80236F68: bnel        $at, $zero, L_80236F50
    if (ctx->r1 != 0) {
        // 0x80236F6C: lw          $t7, 0x4($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X4);
            goto L_80236F50;
    }
    goto skip_0;
    // 0x80236F6C: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    skip_0:
L_80236F70:
    // 0x80236F70: jr          $ra
    // 0x80236F74: nop

    return;
    // 0x80236F74: nop

;}
RECOMP_FUNC void func_8023F52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F52C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023F530: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8023F534: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8023F538: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8023F53C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023F540: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8023F544: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8023F548: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x8023F54C: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x8023F550: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x8023F554: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x8023F558: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8023F55C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8023F560: blez        $a2, L_8023F584
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8023F564: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8023F584;
    }
    // 0x8023F564: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8023F568: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
L_8023F56C:
    // 0x8023F56C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8023F570: jal         0x80237150
    // 0x8023F574: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80237150(rdram, ctx);
        goto after_0;
    // 0x8023F574: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x8023F578: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8023F57C: bne         $s0, $s3, L_8023F56C
    if (ctx->r16 != ctx->r19) {
        // 0x8023F580: addiu       $s1, $s1, 0x1C
        ctx->r17 = ADD32(ctx->r17, 0X1C);
            goto L_8023F56C;
    }
    // 0x8023F580: addiu       $s1, $s1, 0x1C
    ctx->r17 = ADD32(ctx->r17, 0X1C);
L_8023F584:
    // 0x8023F584: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023F588: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8023F58C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8023F590: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F594: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8023F598: jr          $ra
    // 0x8023F59C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8023F59C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80233CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80233CE8: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80233CEC: lhu         $v0, 0xBEC($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBEC);
    // 0x80233CF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233CF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233CF8: blez        $v0, L_80233D30
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80233CFC: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80233D30;
    }
    // 0x80233CFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80233D00: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80233D04: lw          $v1, 0x3950($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3950);
L_80233D08:
    // 0x80233D08: lbu         $t6, 0x1($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X1);
    // 0x80233D0C: bne         $t6, $zero, L_80233D20
    if (ctx->r14 != 0) {
        // 0x80233D10: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_80233D20;
    }
    // 0x80233D10: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80233D14: sb          $t7, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r15;
    // 0x80233D18: b           L_80233D48
    // 0x80233D1C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_80233D48;
    // 0x80233D1C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80233D20:
    // 0x80233D20: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80233D24: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80233D28: bne         $at, $zero, L_80233D08
    if (ctx->r1 != 0) {
        // 0x80233D2C: addiu       $v1, $v1, 0x64
        ctx->r3 = ADD32(ctx->r3, 0X64);
            goto L_80233D08;
    }
    // 0x80233D2C: addiu       $v1, $v1, 0x64
    ctx->r3 = ADD32(ctx->r3, 0X64);
L_80233D30:
    // 0x80233D30: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80233D34: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80233D38: addiu       $a2, $a2, 0xBEC
    ctx->r6 = ADD32(ctx->r6, 0XBEC);
    // 0x80233D3C: jal         0x80231C58
    // 0x80233D40: addiu       $a1, $a1, 0x5214
    ctx->r5 = ADD32(ctx->r5, 0X5214);
    func_80231C58(rdram, ctx);
        goto after_0;
    // 0x80233D40: addiu       $a1, $a1, 0x5214
    ctx->r5 = ADD32(ctx->r5, 0X5214);
    after_0:
    // 0x80233D44: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80233D48:
    // 0x80233D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80233D50: jr          $ra
    // 0x80233D54: nop

    return;
    // 0x80233D54: nop

;}
RECOMP_FUNC void func_8022C314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C314: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C318: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8022C31C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8022C320: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C324: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022C328: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_8022C32C:
    // 0x8022C32C: jal         0x8022C2A8
    // 0x8022C330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022C2A8(rdram, ctx);
        goto after_0;
    // 0x8022C330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8022C334: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022C338: bne         $s0, $s1, L_8022C32C
    if (ctx->r16 != ctx->r17) {
        // 0x8022C33C: nop
    
            goto L_8022C32C;
    }
    // 0x8022C33C: nop

    // 0x8022C340: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C344: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8022C348: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8022C34C: jr          $ra
    // 0x8022C350: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8022C350: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80223C3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223C3C: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x80223C40: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80223C44: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80223C48: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x80223C4C: jr          $ra
    // 0x80223C50: sw          $t6, 0x511C($at)
    MEM_W(0X511C, ctx->r1) = ctx->r14;
    return;
    // 0x80223C50: sw          $t6, 0x511C($at)
    MEM_W(0X511C, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_8021FFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021FFA0: jr          $ra
    // 0x8021FFA4: nop

    return;
    // 0x8021FFA4: nop

;}
RECOMP_FUNC void func_80228698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228698: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x8022869C: addiu       $t0, $t0, 0x3B90
    ctx->r8 = ADD32(ctx->r8, 0X3B90);
    // 0x802286A0: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x802286A4: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x802286A8: lw          $v0, 0x5A30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5A30);
    // 0x802286AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802286B0: addiu       $t6, $a0, 0x8
    ctx->r14 = ADD32(ctx->r4, 0X8);
    // 0x802286B4: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x802286B8: ori         $at, $at, 0x20
    ctx->r1 = ctx->r1 | 0X20;
    // 0x802286BC: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x802286C0: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x802286C4: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x802286C8: ori         $t7, $t7, 0x2
    ctx->r15 = ctx->r15 | 0X2;
    // 0x802286CC: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x802286D0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x802286D4: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x802286D8: lhu         $a2, 0xBFE($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0XBFE);
    // 0x802286DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802286E0: lui         $t2, 0x300
    ctx->r10 = S32(0X300 << 16);
    // 0x802286E4: blez        $a2, L_80228750
    if (SIGNED(ctx->r6) <= 0) {
        // 0x802286E8: lui         $t1, 0x8027
        ctx->r9 = S32(0X8027 << 16);
            goto L_80228750;
    }
    // 0x802286E8: lui         $t1, 0x8027
    ctx->r9 = S32(0X8027 << 16);
    // 0x802286EC: addiu       $t1, $t1, 0x5A44
    ctx->r9 = ADD32(ctx->r9, 0X5A44);
    // 0x802286F0: lw          $t4, 0x0($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X0);
L_802286F4:
    // 0x802286F4: sll         $t3, $a1, 5
    ctx->r11 = S32(ctx->r5 << 5);
    // 0x802286F8: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x802286FC: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x80228700: lbu         $t5, 0x0($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X0);
    // 0x80228704: addiu       $t8, $t7, 0x84
    ctx->r24 = ADD32(ctx->r15, 0X84);
    // 0x80228708: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022870C: beq         $t5, $zero, L_80228744
    if (ctx->r13 == 0) {
        // 0x80228710: andi        $t9, $t8, 0xFF
        ctx->r25 = ctx->r24 & 0XFF;
            goto L_80228744;
    }
    // 0x80228710: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x80228714: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x80228718: sll         $t3, $t9, 16
    ctx->r11 = S32(ctx->r25 << 16);
    // 0x8022871C: or          $t4, $t3, $t2
    ctx->r12 = ctx->r11 | ctx->r10;
    // 0x80228720: addiu       $t6, $a0, 0x8
    ctx->r14 = ADD32(ctx->r4, 0X8);
    // 0x80228724: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80228728: ori         $t5, $t4, 0x10
    ctx->r13 = ctx->r12 | 0X10;
    // 0x8022872C: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x80228730: lw          $t6, 0x1C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X1C);
    // 0x80228734: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80228738: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022873C: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x80228740: lhu         $a2, 0xBFE($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0XBFE);
L_80228744:
    // 0x80228744: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80228748: bnel        $at, $zero, L_802286F4
    if (ctx->r1 != 0) {
        // 0x8022874C: lw          $t4, 0x0($t1)
        ctx->r12 = MEM_W(ctx->r9, 0X0);
            goto L_802286F4;
    }
    goto skip_0;
    // 0x8022874C: lw          $t4, 0x0($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X0);
    skip_0:
L_80228750:
    // 0x80228750: jr          $ra
    // 0x80228754: nop

    return;
    // 0x80228754: nop

;}
RECOMP_FUNC void func_8021E3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E3D0: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x8021E3D4: lw          $t7, -0x3A00($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A00);
    // 0x8021E3D8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8021E3DC: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8021E3E0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8021E3E4: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8021E3E8: lbu         $t9, 0x2($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X2);
    // 0x8021E3EC: lw          $t8, 0xC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC);
    // 0x8021E3F0: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8021E3F4: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8021E3F8: jr          $ra
    // 0x8021E3FC: lhu         $v0, 0x0($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X0);
    return;
    // 0x8021E3FC: lhu         $v0, 0x0($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X0);
;}
RECOMP_FUNC void func_8023072C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023072C: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x80230730: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80230734: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80230738: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x8023073C: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80230740: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80230744: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80230748: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8023074C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80230750: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80230754: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80230758: sw          $a1, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r5;
    // 0x8023075C: sw          $a2, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r6;
    // 0x80230760: sw          $a3, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r7;
    // 0x80230764: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    // 0x80230768: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8023076C: addiu       $s1, $sp, 0xF8
    ctx->r17 = ADD32(ctx->r29, 0XF8);
    // 0x80230770: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80230774: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80230778: sw          $zero, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = 0;
    // 0x8023077C: beq         $a1, $zero, L_80230AB8
    if (ctx->r5 == 0) {
        // 0x80230780: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_80230AB8;
    }
    // 0x80230780: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80230784: addiu       $fp, $sp, 0xE4
    ctx->r30 = ADD32(ctx->r29, 0XE4);
    // 0x80230788: addiu       $s7, $zero, -0x4
    ctx->r23 = ADD32(0, -0X4);
    // 0x8023078C: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x80230790: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x80230794: lw          $s4, 0x7C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X7C);
L_80230798:
    // 0x80230798: bne         $s3, $zero, L_802307D8
    if (ctx->r19 != 0) {
        // 0x8023079C: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_802307D8;
    }
    // 0x8023079C: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x802307A0: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x802307A4: bne         $a3, $at, L_802307C0
    if (ctx->r7 != ctx->r1) {
        // 0x802307A8: lw          $t7, 0xE4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XE4);
            goto L_802307C0;
    }
    // 0x802307A8: lw          $t7, 0xE4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE4);
    // 0x802307AC: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x802307B0: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x802307B4: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x802307B8: b           L_80230A94
    // 0x802307BC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
        goto L_80230A94;
    // 0x802307BC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_802307C0:
    // 0x802307C0: addu        $t8, $s2, $t7
    ctx->r24 = ADD32(ctx->r18, ctx->r15);
    // 0x802307C4: sb          $a1, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r5;
    // 0x802307C8: lw          $t9, 0xE4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE4);
    // 0x802307CC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x802307D0: b           L_80230A94
    // 0x802307D4: sw          $t0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r8;
        goto L_80230A94;
    // 0x802307D4: sw          $t0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r8;
L_802307D8:
    // 0x802307D8: bne         $a3, $at, L_802307F4
    if (ctx->r7 != ctx->r1) {
        // 0x802307DC: lw          $t1, 0xF4($sp)
        ctx->r9 = MEM_W(ctx->r29, 0XF4);
            goto L_802307F4;
    }
    // 0x802307DC: lw          $t1, 0xF4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF4);
    // 0x802307E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802307E4: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x802307E8: lbu         $a1, 0x0($t2)
    ctx->r5 = MEM_BU(ctx->r10, 0X0);
    // 0x802307EC: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x802307F0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
L_802307F4:
    // 0x802307F4: beq         $a3, $zero, L_80230AB8
    if (ctx->r7 == 0) {
        // 0x802307F8: addiu       $at, $zero, 0x30
        ctx->r1 = ADD32(0, 0X30);
            goto L_80230AB8;
    }
    // 0x802307F8: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x802307FC: bne         $a3, $at, L_80230818
    if (ctx->r7 != ctx->r1) {
        // 0x80230800: lw          $t3, 0xF4($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XF4);
            goto L_80230818;
    }
    // 0x80230800: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
    // 0x80230804: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80230808: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x8023080C: lbu         $a1, 0x0($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X0);
    // 0x80230810: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x80230814: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
L_80230818:
    // 0x80230818: beq         $a3, $zero, L_80230AB8
    if (ctx->r7 == 0) {
        // 0x8023081C: slti        $at, $a3, 0x31
        ctx->r1 = SIGNED(ctx->r7) < 0X31 ? 1 : 0;
            goto L_80230AB8;
    }
    // 0x8023081C: slti        $at, $a3, 0x31
    ctx->r1 = SIGNED(ctx->r7) < 0X31 ? 1 : 0;
    // 0x80230820: bne         $at, $zero, L_8023089C
    if (ctx->r1 != 0) {
        // 0x80230824: slti        $at, $a3, 0x3A
        ctx->r1 = SIGNED(ctx->r7) < 0X3A ? 1 : 0;
            goto L_8023089C;
    }
    // 0x80230824: slti        $at, $a3, 0x3A
    ctx->r1 = SIGNED(ctx->r7) < 0X3A ? 1 : 0;
    // 0x80230828: beq         $at, $zero, L_8023089C
    if (ctx->r1 == 0) {
        // 0x8023082C: addiu       $a0, $sp, 0x88
        ctx->r4 = ADD32(ctx->r29, 0X88);
            goto L_8023089C;
    }
    // 0x8023082C: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x80230830: slti        $at, $a3, 0x30
    ctx->r1 = SIGNED(ctx->r7) < 0X30 ? 1 : 0;
    // 0x80230834: bne         $at, $zero, L_80230884
    if (ctx->r1 != 0) {
        // 0x80230838: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80230884;
    }
    // 0x80230838: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023083C: slti        $at, $a3, 0x3A
    ctx->r1 = SIGNED(ctx->r7) < 0X3A ? 1 : 0;
    // 0x80230840: beq         $at, $zero, L_80230884
    if (ctx->r1 == 0) {
        // 0x80230844: lw          $t5, 0xF4($sp)
        ctx->r13 = MEM_W(ctx->r29, 0XF4);
            goto L_80230884;
    }
    // 0x80230844: lw          $t5, 0xF4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XF4);
    // 0x80230848: addiu       $t6, $sp, 0x88
    ctx->r14 = ADD32(ctx->r29, 0X88);
    // 0x8023084C: addu        $v1, $zero, $t6
    ctx->r3 = ADD32(0, ctx->r14);
    // 0x80230850: addu        $v0, $t5, $s0
    ctx->r2 = ADD32(ctx->r13, ctx->r16);
    // 0x80230854: sb          $a1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r5;
L_80230858:
    // 0x80230858: lbu         $a1, 0x1($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X1);
    // 0x8023085C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80230860: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230864: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x80230868: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8023086C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230870: bne         $at, $zero, L_80230884
    if (ctx->r1 != 0) {
        // 0x80230874: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_80230884;
    }
    // 0x80230874: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80230878: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x8023087C: bnel        $at, $zero, L_80230858
    if (ctx->r1 != 0) {
        // 0x80230880: sb          $a1, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r5;
            goto L_80230858;
    }
    goto skip_0;
    // 0x80230880: sb          $a1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r5;
    skip_0:
L_80230884:
    // 0x80230884: addu        $t7, $a0, $a2
    ctx->r15 = ADD32(ctx->r4, ctx->r6);
    // 0x80230888: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x8023088C: jal         0x80230AF4
    // 0x80230890: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    func_80230AF4(rdram, ctx);
        goto after_0;
    // 0x80230890: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80230894: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x80230898: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
L_8023089C:
    // 0x8023089C: beq         $a3, $zero, L_80230AB8
    if (ctx->r7 == 0) {
        // 0x802308A0: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_80230AB8;
    }
    // 0x802308A0: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x802308A4: bne         $a3, $at, L_80230910
    if (ctx->r7 != ctx->r1) {
        // 0x802308A8: lw          $t8, 0xF4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XF4);
            goto L_80230910;
    }
    // 0x802308A8: lw          $t8, 0xF4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF4);
    // 0x802308AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802308B0: addu        $v0, $t8, $s0
    ctx->r2 = ADD32(ctx->r24, ctx->r16);
    // 0x802308B4: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x802308B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802308BC: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x802308C0: bne         $at, $zero, L_80230908
    if (ctx->r1 != 0) {
        // 0x802308C4: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_80230908;
    }
    // 0x802308C4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x802308C8: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x802308CC: beq         $at, $zero, L_80230908
    if (ctx->r1 == 0) {
        // 0x802308D0: addiu       $t9, $sp, 0x88
        ctx->r25 = ADD32(ctx->r29, 0X88);
            goto L_80230908;
    }
    // 0x802308D0: addiu       $t9, $sp, 0x88
    ctx->r25 = ADD32(ctx->r29, 0X88);
    // 0x802308D4: addu        $v1, $zero, $t9
    ctx->r3 = ADD32(0, ctx->r25);
    // 0x802308D8: sb          $a1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r5;
L_802308DC:
    // 0x802308DC: lbu         $a1, 0x1($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X1);
    // 0x802308E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802308E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802308E8: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x802308EC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x802308F0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802308F4: bne         $at, $zero, L_80230908
    if (ctx->r1 != 0) {
        // 0x802308F8: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_80230908;
    }
    // 0x802308F8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x802308FC: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x80230900: bnel        $at, $zero, L_802308DC
    if (ctx->r1 != 0) {
        // 0x80230904: sb          $a1, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r5;
            goto L_802308DC;
    }
    goto skip_1;
    // 0x80230904: sb          $a1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r5;
    skip_1:
L_80230908:
    // 0x80230908: addu        $t0, $sp, $a2
    ctx->r8 = ADD32(ctx->r29, ctx->r6);
    // 0x8023090C: sb          $zero, 0x88($t0)
    MEM_B(0X88, ctx->r8) = 0;
L_80230910:
    // 0x80230910: beq         $a3, $zero, L_80230AB8
    if (ctx->r7 == 0) {
        // 0x80230914: addiu       $at, $zero, 0x78
        ctx->r1 = ADD32(0, 0X78);
            goto L_80230AB8;
    }
    // 0x80230914: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x80230918: bne         $a3, $at, L_80230954
    if (ctx->r7 != ctx->r1) {
        // 0x8023091C: addiu       $t1, $s1, 0x3
        ctx->r9 = ADD32(ctx->r17, 0X3);
            goto L_80230954;
    }
    // 0x8023091C: addiu       $t1, $s1, 0x3
    ctx->r9 = ADD32(ctx->r17, 0X3);
    // 0x80230920: and         $s1, $t1, $s7
    ctx->r17 = ctx->r9 & ctx->r23;
    // 0x80230924: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80230928: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8023092C: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x80230930: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x80230934: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x80230938: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8023093C: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x80230940: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x80230944: jal         0x80230164
    // 0x80230948: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    func_80230164(rdram, ctx);
        goto after_1;
    // 0x80230948: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_1:
    // 0x8023094C: b           L_80230A98
    // 0x80230950: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
        goto L_80230A98;
    // 0x80230950: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
L_80230954:
    // 0x80230954: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x80230958: bne         $a3, $at, L_80230994
    if (ctx->r7 != ctx->r1) {
        // 0x8023095C: addiu       $t2, $s1, 0x3
        ctx->r10 = ADD32(ctx->r17, 0X3);
            goto L_80230994;
    }
    // 0x8023095C: addiu       $t2, $s1, 0x3
    ctx->r10 = ADD32(ctx->r17, 0X3);
    // 0x80230960: and         $s1, $t2, $s7
    ctx->r17 = ctx->r10 & ctx->r23;
    // 0x80230964: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80230968: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8023096C: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x80230970: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x80230974: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x80230978: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8023097C: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x80230980: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x80230984: jal         0x80230164
    // 0x80230988: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    func_80230164(rdram, ctx);
        goto after_2;
    // 0x80230988: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_2:
    // 0x8023098C: b           L_80230A98
    // 0x80230990: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
        goto L_80230A98;
    // 0x80230990: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
L_80230994:
    // 0x80230994: addiu       $at, $zero, 0x62
    ctx->r1 = ADD32(0, 0X62);
    // 0x80230998: bne         $a3, $at, L_802309D4
    if (ctx->r7 != ctx->r1) {
        // 0x8023099C: addiu       $t3, $s1, 0x3
        ctx->r11 = ADD32(ctx->r17, 0X3);
            goto L_802309D4;
    }
    // 0x8023099C: addiu       $t3, $s1, 0x3
    ctx->r11 = ADD32(ctx->r17, 0X3);
    // 0x802309A0: and         $s1, $t3, $s7
    ctx->r17 = ctx->r11 & ctx->r23;
    // 0x802309A4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x802309A8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x802309AC: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x802309B0: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x802309B4: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x802309B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802309BC: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x802309C0: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x802309C4: jal         0x80230164
    // 0x802309C8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    func_80230164(rdram, ctx);
        goto after_3;
    // 0x802309C8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_3:
    // 0x802309CC: b           L_80230A98
    // 0x802309D0: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
        goto L_80230A98;
    // 0x802309D0: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
L_802309D4:
    // 0x802309D4: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x802309D8: bne         $a3, $at, L_80230A3C
    if (ctx->r7 != ctx->r1) {
        // 0x802309DC: andi        $t4, $s1, 0x1
        ctx->r12 = ctx->r17 & 0X1;
            goto L_80230A3C;
    }
    // 0x802309DC: andi        $t4, $s1, 0x1
    ctx->r12 = ctx->r17 & 0X1;
    // 0x802309E0: beq         $t4, $zero, L_802309F4
    if (ctx->r12 == 0) {
        // 0x802309E4: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_802309F4;
    }
    // 0x802309E4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802309E8: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x802309EC: b           L_80230A20
    // 0x802309F0: addiu       $v0, $s1, -0x16
    ctx->r2 = ADD32(ctx->r17, -0X16);
        goto L_80230A20;
    // 0x802309F0: addiu       $v0, $s1, -0x16
    ctx->r2 = ADD32(ctx->r17, -0X16);
L_802309F4:
    // 0x802309F4: andi        $t5, $s1, 0x2
    ctx->r13 = ctx->r17 & 0X2;
    // 0x802309F8: beq         $t5, $zero, L_80230A0C
    if (ctx->r13 == 0) {
        // 0x802309FC: addiu       $at, $zero, -0x8
        ctx->r1 = ADD32(0, -0X8);
            goto L_80230A0C;
    }
    // 0x802309FC: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80230A00: addiu       $s1, $s1, 0xA
    ctx->r17 = ADD32(ctx->r17, 0XA);
    // 0x80230A04: b           L_80230A1C
    // 0x80230A08: addiu       $v1, $s1, -0x28
    ctx->r3 = ADD32(ctx->r17, -0X28);
        goto L_80230A1C;
    // 0x80230A08: addiu       $v1, $s1, -0x28
    ctx->r3 = ADD32(ctx->r17, -0X28);
L_80230A0C:
    // 0x80230A0C: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x80230A10: and         $t6, $s1, $at
    ctx->r14 = ctx->r17 & ctx->r1;
    // 0x80230A14: addiu       $s1, $t6, 0x8
    ctx->r17 = ADD32(ctx->r14, 0X8);
    // 0x80230A18: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
L_80230A1C:
    // 0x80230A1C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80230A20:
    // 0x80230A20: ldc1        $f4, -0x8($v0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r2, -0X8);
    // 0x80230A24: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x80230A28: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80230A2C: jal         0x802304A0
    // 0x80230A30: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    func_802304A0(rdram, ctx);
        goto after_4;
    // 0x80230A30: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_4:
    // 0x80230A34: b           L_80230A98
    // 0x80230A38: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
        goto L_80230A98;
    // 0x80230A38: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
L_80230A3C:
    // 0x80230A3C: addiu       $at, $zero, 0x73
    ctx->r1 = ADD32(0, 0X73);
    // 0x80230A40: bne         $a3, $at, L_80230A94
    if (ctx->r7 != ctx->r1) {
        // 0x80230A44: addiu       $t7, $s1, 0x3
        ctx->r15 = ADD32(ctx->r17, 0X3);
            goto L_80230A94;
    }
    // 0x80230A44: addiu       $t7, $s1, 0x3
    ctx->r15 = ADD32(ctx->r17, 0X3);
    // 0x80230A48: and         $s1, $t7, $s7
    ctx->r17 = ctx->r15 & ctx->r23;
    // 0x80230A4C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80230A50: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80230A54: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80230A58: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x80230A5C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80230A60: beql        $t8, $zero, L_80230A98
    if (ctx->r24 == 0) {
        // 0x80230A64: lw          $t3, 0xF4($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XF4);
            goto L_80230A98;
    }
    goto skip_2;
    // 0x80230A64: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
    skip_2:
    // 0x80230A68: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80230A6C: lw          $t9, 0xE4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE4);
L_80230A70:
    // 0x80230A70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230A74: addu        $t0, $s2, $t9
    ctx->r8 = ADD32(ctx->r18, ctx->r25);
    // 0x80230A78: sb          $v1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r3;
    // 0x80230A7C: lw          $t1, 0xE4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE4);
    // 0x80230A80: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80230A84: sw          $t2, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r10;
    // 0x80230A88: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80230A8C: bnel        $v1, $zero, L_80230A70
    if (ctx->r3 != 0) {
        // 0x80230A90: lw          $t9, 0xE4($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XE4);
            goto L_80230A70;
    }
    goto skip_3;
    // 0x80230A90: lw          $t9, 0xE4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE4);
    skip_3:
L_80230A94:
    // 0x80230A94: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
L_80230A98:
    // 0x80230A98: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80230A9C: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x80230AA0: lbu         $a1, 0x0($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X0);
    // 0x80230AA4: bne         $a1, $zero, L_80230798
    if (ctx->r5 != 0) {
        // 0x80230AA8: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_80230798;
    }
    // 0x80230AA8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80230AAC: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x80230AB0: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x80230AB4: sw          $s4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r20;
L_80230AB8:
    // 0x80230AB8: lw          $t5, 0xE4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE4);
    // 0x80230ABC: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x80230AC0: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x80230AC4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80230AC8: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80230ACC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80230AD0: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80230AD4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80230AD8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80230ADC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80230AE0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80230AE4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80230AE8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80230AEC: jr          $ra
    // 0x80230AF0: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x80230AF0: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_80241780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80241780: mfc0        $t0, Status
    ctx->r8 = cop0_status_read(ctx);
    // 0x80241784: or          $t0, $t0, $a0
    ctx->r8 = ctx->r8 | ctx->r4;
    // 0x80241788: mtc0        $t0, Status
    cop0_status_write(ctx, ctx->r8);    // 0x8024178C: nop

    // 0x80241790: nop

    // 0x80241794: jr          $ra
    // 0x80241798: nop

    return;
    // 0x80241798: nop

;}
RECOMP_FUNC void func_8023FE94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FE94: lbu         $t6, 0x36($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X36);
    // 0x8023FE98: lbu         $t7, 0x33($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X33);
    // 0x8023FE9C: lbu         $t9, 0x30($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X30);
    // 0x8023FEA0: lbu         $t2, 0x31($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X31);
    // 0x8023FEA4: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023FEA8: lw          $t1, 0x60($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X60);
    // 0x8023FEAC: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x8023FEB0: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x8023FEB4: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8023FEB8: lbu         $t5, 0x9($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X9);
    // 0x8023FEBC: lbu         $t7, 0xD($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XD);
    // 0x8023FEC0: mflo        $t8
    ctx->r24 = lo;
    // 0x8023FEC4: nop

    // 0x8023FEC8: nop

    // 0x8023FECC: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023FED0: lh          $t9, 0x32($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X32);
    // 0x8023FED4: mflo        $v1
    ctx->r3 = lo;
    // 0x8023FED8: sra         $t0, $v1, 6
    ctx->r8 = S32(SIGNED(ctx->r3) >> 6);
    // 0x8023FEDC: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x8023FEE0: multu       $t5, $t7
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023FEE4: mflo        $t8
    ctx->r24 = lo;
    // 0x8023FEE8: nop

    // 0x8023FEEC: nop

    // 0x8023FEF0: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023FEF4: mflo        $a2
    ctx->r6 = lo;
    // 0x8023FEF8: sra         $t0, $a2, 14
    ctx->r8 = S32(SIGNED(ctx->r6) >> 14);
    // 0x8023FEFC: nop

    // 0x8023FF00: multu       $v1, $t0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023FF04: mflo        $v1
    ctx->r3 = lo;
    // 0x8023FF08: srl         $t2, $v1, 15
    ctx->r10 = S32(U32(ctx->r3) >> 15);
    // 0x8023FF0C: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x8023FF10: sra         $t1, $v0, 16
    ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023FF14: jr          $ra
    // 0x8023FF18: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    return;
    // 0x8023FF18: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
;}
RECOMP_FUNC void func_802272B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802272B0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802272B4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802272B8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x802272BC: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x802272C0: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x802272C4: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x802272C8: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x802272CC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802272D0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802272D4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802272D8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802272DC: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    // 0x802272E0: jal         0x8022B948
    // 0x802272E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_0;
    // 0x802272E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x802272E8: addiu       $s3, $sp, 0x50
    ctx->r19 = ADD32(ctx->r29, 0X50);
    // 0x802272EC: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x802272F0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802272F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802272F8: jal         0x80225424
    // 0x802272FC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    func_80225424(rdram, ctx);
        goto after_1;
    // 0x802272FC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_1:
    // 0x80227300: addiu       $a0, $s4, 0x18
    ctx->r4 = ADD32(ctx->r20, 0X18);
    // 0x80227304: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80227308: jal         0x80225424
    // 0x8022730C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_2;
    // 0x8022730C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80227310: addiu       $a0, $s4, 0x19
    ctx->r4 = ADD32(ctx->r20, 0X19);
    // 0x80227314: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80227318: jal         0x80225424
    // 0x8022731C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_3;
    // 0x8022731C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80227320: addiu       $a0, $s4, 0x1C
    ctx->r4 = ADD32(ctx->r20, 0X1C);
    // 0x80227324: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80227328: jal         0x80225424
    // 0x8022732C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_4;
    // 0x8022732C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x80227330: addiu       $a0, $s4, 0x20
    ctx->r4 = ADD32(ctx->r20, 0X20);
    // 0x80227334: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80227338: jal         0x80225424
    // 0x8022733C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_5;
    // 0x8022733C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_5:
    // 0x80227340: addiu       $a0, $s4, 0x24
    ctx->r4 = ADD32(ctx->r20, 0X24);
    // 0x80227344: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80227348: jal         0x80225424
    // 0x8022734C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_6;
    // 0x8022734C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_6:
    // 0x80227350: lbu         $t6, 0x18($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X18);
    // 0x80227354: lbu         $t7, 0x19($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X19);
    // 0x80227358: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022735C: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227360: mflo        $s7
    ctx->r23 = lo;
    // 0x80227364: sll         $a0, $s7, 2
    ctx->r4 = S32(ctx->r23 << 2);
    // 0x80227368: addu        $a0, $a0, $s7
    ctx->r4 = ADD32(ctx->r4, ctx->r23);
    // 0x8022736C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80227370: subu        $a0, $a0, $s7
    ctx->r4 = SUB32(ctx->r4, ctx->r23);
    // 0x80227374: jal         0x8022B948
    // 0x80227378: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    func_8022B948(rdram, ctx);
        goto after_7;
    // 0x80227378: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    after_7:
    // 0x8022737C: sw          $v0, 0x28($s4)
    MEM_W(0X28, ctx->r20) = ctx->r2;
    // 0x80227380: blez        $s7, L_80227428
    if (SIGNED(ctx->r23) <= 0) {
        // 0x80227384: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80227428;
    }
    // 0x80227384: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80227388: lui         $s6, 0x8028
    ctx->r22 = S32(0X8028 << 16);
    // 0x8022738C: addiu       $s6, $s6, 0xB68
    ctx->r22 = ADD32(ctx->r22, 0XB68);
    // 0x80227390: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80227394: addiu       $s5, $sp, 0x3F
    ctx->r21 = ADD32(ctx->r29, 0X3F);
L_80227398:
    // 0x80227398: lw          $t8, 0x28($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X28);
    // 0x8022739C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x802273A0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802273A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802273A8: jal         0x80225424
    // 0x802273AC: addu        $s0, $t8, $s2
    ctx->r16 = ADD32(ctx->r24, ctx->r18);
    func_80225424(rdram, ctx);
        goto after_8;
    // 0x802273AC: addu        $s0, $t8, $s2
    ctx->r16 = ADD32(ctx->r24, ctx->r18);
    after_8:
    // 0x802273B0: lbu         $t9, 0x3F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3F);
    // 0x802273B4: addiu       $a2, $zero, 0x4C
    ctx->r6 = ADD32(0, 0X4C);
    // 0x802273B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802273BC: bne         $t9, $zero, L_802273D8
    if (ctx->r25 != 0) {
        // 0x802273C0: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_802273D8;
    }
    // 0x802273C0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802273C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802273C8: jal         0x8022B780
    // 0x802273CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8022B780(rdram, ctx);
        goto after_9;
    // 0x802273CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x802273D0: b           L_80227420
    // 0x802273D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_80227420;
    // 0x802273D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802273D8:
    // 0x802273D8: jal         0x80225424
    // 0x802273DC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_80225424(rdram, ctx);
        goto after_10;
    // 0x802273DC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_10:
    // 0x802273E0: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    // 0x802273E4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802273E8: jal         0x80225424
    // 0x802273EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_11;
    // 0x802273EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x802273F0: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x802273F4: addiu       $a0, $s0, 0x4A
    ctx->r4 = ADD32(ctx->r16, 0X4A);
    // 0x802273F8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802273FC: jal         0x80225424
    // 0x80227400: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_12;
    // 0x80227400: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_12:
    // 0x80227404: lhu         $t1, 0x4A($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X4A);
    // 0x80227408: lw          $t0, 0x24($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X24);
    // 0x8022740C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80227410: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80227414: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80227418: sw          $t4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r12;
    // 0x8022741C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80227420:
    // 0x80227420: bne         $s1, $s7, L_80227398
    if (ctx->r17 != ctx->r23) {
        // 0x80227424: addiu       $s2, $s2, 0x4C
        ctx->r18 = ADD32(ctx->r18, 0X4C);
            goto L_80227398;
    }
    // 0x80227424: addiu       $s2, $s2, 0x4C
    ctx->r18 = ADD32(ctx->r18, 0X4C);
L_80227428:
    // 0x80227428: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022742C: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x80227430: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80227434: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80227438: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8022743C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80227440: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80227444: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80227448: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8022744C: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80227450: jr          $ra
    // 0x80227454: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80227454: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8022ADDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022ADDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ADE0: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x8022ADE4: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8022ADE8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8022ADEC: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8022ADF0: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x8022ADF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022ADF8: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8022ADFC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8022AE00: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8022AE04: jal         0x8022AA40
    // 0x8022AE08: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    func_8022AA40(rdram, ctx);
        goto after_0;
    // 0x8022AE08: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    after_0:
    // 0x8022AE0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AE10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022AE14: jr          $ra
    // 0x8022AE18: nop

    return;
    // 0x8022AE18: nop

;}
RECOMP_FUNC void func_80236B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80236B80: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80236B84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80236B88: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80236B8C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80236B90: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80236B94: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80236B98: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80236B9C: jal         0x80241760
    // 0x80236BA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x80236BA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80236BA4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80236BA8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80236BAC: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x80236BB0: lw          $t8, 0x10($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X10);
    // 0x80236BB4: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80236BB8: bne         $at, $zero, L_80236C1C
    if (ctx->r1 != 0) {
        // 0x80236BBC: nop
    
            goto L_80236C1C;
    }
    // 0x80236BBC: nop

L_80236BC0:
    // 0x80236BC0: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80236BC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80236BC8: bne         $t9, $at, L_80236BF4
    if (ctx->r25 != ctx->r1) {
        // 0x80236BCC: nop
    
            goto L_80236BF4;
    }
    // 0x80236BCC: nop

    // 0x80236BD0: lui         $t1, 0x8025
    ctx->r9 = S32(0X8025 << 16);
    // 0x80236BD4: lw          $t1, 0x16E0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X16E0);
    // 0x80236BD8: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x80236BDC: sh          $t0, 0x10($t1)
    MEM_H(0X10, ctx->r9) = ctx->r8;
    // 0x80236BE0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80236BE4: jal         0x80241DFC
    // 0x80236BE8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_80241DFC(rdram, ctx);
        goto after_1;
    // 0x80236BE8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x80236BEC: b           L_80236C04
    // 0x80236BF0: nop

        goto L_80236C04;
    // 0x80236BF0: nop

L_80236BF4:
    // 0x80236BF4: jal         0x80241780
    // 0x80236BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80241780(rdram, ctx);
        goto after_2;
    // 0x80236BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80236BFC: b           L_80236CB4
    // 0x80236C00: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80236CB4;
    // 0x80236C00: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80236C04:
    // 0x80236C04: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80236C08: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x80236C0C: lw          $t4, 0x10($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X10);
    // 0x80236C10: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80236C14: beq         $at, $zero, L_80236BC0
    if (ctx->r1 == 0) {
        // 0x80236C18: nop
    
            goto L_80236BC0;
    }
    // 0x80236C18: nop

L_80236C1C:
    // 0x80236C1C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80236C20: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80236C24: lw          $t6, 0xC($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC);
    // 0x80236C28: lw          $t7, 0x8($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X8);
    // 0x80236C2C: lw          $t9, 0x10($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X10);
    // 0x80236C30: lw          $t1, 0x14($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X14);
    // 0x80236C34: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80236C38: div         $zero, $t8, $t9
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r25))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r25)));
    // 0x80236C3C: mfhi        $s1
    ctx->r17 = hi;
    // 0x80236C40: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x80236C44: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80236C48: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x80236C4C: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80236C50: bne         $t9, $zero, L_80236C5C
    if (ctx->r25 != 0) {
        // 0x80236C54: nop
    
            goto L_80236C5C;
    }
    // 0x80236C54: nop

    // 0x80236C58: break       7
    do_break(2149805144);
L_80236C5C:
    // 0x80236C5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80236C60: bne         $t9, $at, L_80236C74
    if (ctx->r25 != ctx->r1) {
        // 0x80236C64: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80236C74;
    }
    // 0x80236C64: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80236C68: bne         $t8, $at, L_80236C74
    if (ctx->r24 != ctx->r1) {
        // 0x80236C6C: nop
    
            goto L_80236C74;
    }
    // 0x80236C6C: nop

    // 0x80236C70: break       6
    do_break(2149805168);
L_80236C74:
    // 0x80236C74: lw          $t6, 0x8($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X8);
    // 0x80236C78: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80236C7C: sw          $t7, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r15;
    // 0x80236C80: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80236C84: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80236C88: lw          $t5, 0x0($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X0);
    // 0x80236C8C: beq         $t5, $zero, L_80236CA8
    if (ctx->r13 == 0) {
        // 0x80236C90: nop
    
            goto L_80236CA8;
    }
    // 0x80236C90: nop

    // 0x80236C94: jal         0x80241F44
    // 0x80236C98: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80241F44(rdram, ctx);
        goto after_3;
    // 0x80236C98: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_3:
    // 0x80236C9C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80236CA0: jal         0x80237360
    // 0x80236CA4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80237360(rdram, ctx);
        goto after_4;
    // 0x80236CA4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
L_80236CA8:
    // 0x80236CA8: jal         0x80241780
    // 0x80236CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80241780(rdram, ctx);
        goto after_5;
    // 0x80236CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80236CB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80236CB4:
    // 0x80236CB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80236CB8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80236CBC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80236CC0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80236CC4: jr          $ra
    // 0x80236CC8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80236CC8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022D040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022D040: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022D044: jr          $ra
    // 0x8022D048: sw          $a0, -0x78B8($at)
    MEM_W(-0X78B8, ctx->r1) = ctx->r4;
    return;
    // 0x8022D048: sw          $a0, -0x78B8($at)
    MEM_W(-0X78B8, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8022BC40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022BC40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BC44: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8022BC48: lui         $s0, 0x8028
    ctx->r16 = S32(0X8028 << 16);
    // 0x8022BC4C: addiu       $s0, $s0, 0xBC0
    ctx->r16 = ADD32(ctx->r16, 0XBC0);
    // 0x8022BC50: lhu         $a2, 0xA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XA);
    // 0x8022BC54: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8022BC58: lui         $s1, 0x8028
    ctx->r17 = S32(0X8028 << 16);
    // 0x8022BC5C: addiu       $s1, $s1, 0xB68
    ctx->r17 = ADD32(ctx->r17, 0XB68);
    // 0x8022BC60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022BC64: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x8022BC68: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8022BC6C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x8022BC70: jal         0x8022B780
    // 0x8022BC74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8022B780(rdram, ctx);
        goto after_0;
    // 0x8022BC74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8022BC78: lhu         $a2, 0xC($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XC);
    // 0x8022BC7C: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x8022BC80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022BC84: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x8022BC88: jal         0x8022B780
    // 0x8022BC8C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    func_8022B780(rdram, ctx);
        goto after_1;
    // 0x8022BC8C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_1:
    // 0x8022BC90: lhu         $a2, 0xE($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XE);
    // 0x8022BC94: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x8022BC98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022BC9C: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x8022BCA0: jal         0x8022B780
    // 0x8022BCA4: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    func_8022B780(rdram, ctx);
        goto after_2;
    // 0x8022BCA4: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    after_2:
    // 0x8022BCA8: lhu         $a2, 0x10($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X10);
    // 0x8022BCAC: lw          $a0, 0x1C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1C);
    // 0x8022BCB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022BCB4: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x8022BCB8: jal         0x8022B780
    // 0x8022BCBC: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    func_8022B780(rdram, ctx);
        goto after_3;
    // 0x8022BCBC: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_3:
    // 0x8022BCC0: lhu         $a2, 0x12($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X12);
    // 0x8022BCC4: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x8022BCC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022BCCC: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x8022BCD0: jal         0x8022B780
    // 0x8022BCD4: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    func_8022B780(rdram, ctx);
        goto after_4;
    // 0x8022BCD4: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    after_4:
    // 0x8022BCD8: lhu         $a2, 0x16($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X16);
    // 0x8022BCDC: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    // 0x8022BCE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022BCE4: sll         $t1, $a2, 2
    ctx->r9 = S32(ctx->r6 << 2);
    // 0x8022BCE8: jal         0x8022B780
    // 0x8022BCEC: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    func_8022B780(rdram, ctx);
        goto after_5;
    // 0x8022BCEC: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    after_5:
    // 0x8022BCF0: lhu         $a2, 0x14($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X14);
    // 0x8022BCF4: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    // 0x8022BCF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022BCFC: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x8022BD00: jal         0x8022B780
    // 0x8022BD04: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    func_8022B780(rdram, ctx);
        goto after_6;
    // 0x8022BD04: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_6:
    // 0x8022BD08: lhu         $a2, 0x1C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X1C);
    // 0x8022BD0C: lw          $a0, 0x3C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X3C);
    // 0x8022BD10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022BD14: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x8022BD18: jal         0x8022B780
    // 0x8022BD1C: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    func_8022B780(rdram, ctx);
        goto after_7;
    // 0x8022BD1C: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_7:
    // 0x8022BD20: lhu         $a2, 0x1A($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X1A);
    // 0x8022BD24: lw          $a0, 0x44($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X44);
    // 0x8022BD28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022BD2C: sll         $t4, $a2, 2
    ctx->r12 = S32(ctx->r6 << 2);
    // 0x8022BD30: jal         0x8022B780
    // 0x8022BD34: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    func_8022B780(rdram, ctx);
        goto after_8;
    // 0x8022BD34: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_8:
    // 0x8022BD38: lhu         $a2, 0x2($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X2);
    // 0x8022BD3C: lw          $a0, 0x4C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4C);
    // 0x8022BD40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022BD44: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x8022BD48: jal         0x8022B780
    // 0x8022BD4C: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    func_8022B780(rdram, ctx);
        goto after_9;
    // 0x8022BD4C: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    after_9:
    // 0x8022BD50: lhu         $a2, 0x16($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X16);
    // 0x8022BD54: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8022BD58: lw          $a0, 0x524C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X524C);
    // 0x8022BD5C: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x8022BD60: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8022BD64: jal         0x8022B780
    // 0x8022BD68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8022B780(rdram, ctx);
        goto after_10;
    // 0x8022BD68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x8022BD6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BD70: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8022BD74: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8022BD78: jr          $ra
    // 0x8022BD7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8022BD7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80235BCC: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x80235BD0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80235BD4: lbu         $s6, 0x8($t0)
    ctx->r22 = MEM_BU(ctx->r8, 0X8);
    // 0x80235BD8: lbu         $s4, 0x9($t0)
    ctx->r20 = MEM_BU(ctx->r8, 0X9);
    // 0x80235BDC: lbu         $s1, 0xA($t0)
    ctx->r17 = MEM_BU(ctx->r8, 0XA);
    // 0x80235BE0: andi        $v1, $s6, 0xF0
    ctx->r3 = ctx->r22 & 0XF0;
    // 0x80235BE4: addiu       $t7, $v1, -0x80
    ctx->r15 = ADD32(ctx->r3, -0X80);
    // 0x80235BE8: sltiu       $at, $t7, 0x61
    ctx->r1 = ctx->r15 < 0X61 ? 1 : 0;
    // 0x80235BEC: andi        $t6, $s6, 0xF
    ctx->r14 = ctx->r22 & 0XF;
    // 0x80235BF0: beq         $at, $zero, L_802363E4
    if (ctx->r1 == 0) {
        // 0x80235BF4: or          $s6, $t6, $zero
        ctx->r22 = ctx->r14 | 0;
            goto L_802363E4;
    }
    // 0x80235BF4: or          $s6, $t6, $zero
    ctx->r22 = ctx->r14 | 0;
    // 0x80235BF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80235BFC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80235C00: addu        $at, $at, $t7
    gpr jr_addend_80235C08 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80235C04: lw          $t7, 0x5400($at)
    ctx->r15 = ADD32(ctx->r1, 0X5400);
    // 0x80235C08: jr          $t7
    // 0x80235C0C: nop

    switch (jr_addend_80235C08 >> 2) {
        case 0: goto L_80235FB0; break;
        case 1: goto L_802363E4; break;
        case 2: goto L_802363E4; break;
        case 3: goto L_802363E4; break;
        case 4: goto L_802363E4; break;
        case 5: goto L_802363E4; break;
        case 6: goto L_802363E4; break;
        case 7: goto L_802363E4; break;
        case 8: goto L_802363E4; break;
        case 9: goto L_802363E4; break;
        case 10: goto L_802363E4; break;
        case 11: goto L_802363E4; break;
        case 12: goto L_802363E4; break;
        case 13: goto L_802363E4; break;
        case 14: goto L_802363E4; break;
        case 15: goto L_802363E4; break;
        case 16: goto L_80235C10; break;
        case 17: goto L_802363E4; break;
        case 18: goto L_802363E4; break;
        case 19: goto L_802363E4; break;
        case 20: goto L_802363E4; break;
        case 21: goto L_802363E4; break;
        case 22: goto L_802363E4; break;
        case 23: goto L_802363E4; break;
        case 24: goto L_802363E4; break;
        case 25: goto L_802363E4; break;
        case 26: goto L_802363E4; break;
        case 27: goto L_802363E4; break;
        case 28: goto L_802363E4; break;
        case 29: goto L_802363E4; break;
        case 30: goto L_802363E4; break;
        case 31: goto L_802363E4; break;
        case 32: goto L_80236008; break;
        case 33: goto L_802363E4; break;
        case 34: goto L_802363E4; break;
        case 35: goto L_802363E4; break;
        case 36: goto L_802363E4; break;
        case 37: goto L_802363E4; break;
        case 38: goto L_802363E4; break;
        case 39: goto L_802363E4; break;
        case 40: goto L_802363E4; break;
        case 41: goto L_802363E4; break;
        case 42: goto L_802363E4; break;
        case 43: goto L_802363E4; break;
        case 44: goto L_802363E4; break;
        case 45: goto L_802363E4; break;
        case 46: goto L_802363E4; break;
        case 47: goto L_802363E4; break;
        case 48: goto L_802360E0; break;
        case 49: goto L_802363E4; break;
        case 50: goto L_802363E4; break;
        case 51: goto L_802363E4; break;
        case 52: goto L_802363E4; break;
        case 53: goto L_802363E4; break;
        case 54: goto L_802363E4; break;
        case 55: goto L_802363E4; break;
        case 56: goto L_802363E4; break;
        case 57: goto L_802363E4; break;
        case 58: goto L_802363E4; break;
        case 59: goto L_802363E4; break;
        case 60: goto L_802363E4; break;
        case 61: goto L_802363E4; break;
        case 62: goto L_802363E4; break;
        case 63: goto L_802363E4; break;
        case 64: goto L_80236318; break;
        case 65: goto L_802363E4; break;
        case 66: goto L_802363E4; break;
        case 67: goto L_802363E4; break;
        case 68: goto L_802363E4; break;
        case 69: goto L_802363E4; break;
        case 70: goto L_802363E4; break;
        case 71: goto L_802363E4; break;
        case 72: goto L_802363E4; break;
        case 73: goto L_802363E4; break;
        case 74: goto L_802363E4; break;
        case 75: goto L_802363E4; break;
        case 76: goto L_802363E4; break;
        case 77: goto L_802363E4; break;
        case 78: goto L_802363E4; break;
        case 79: goto L_802363E4; break;
        case 80: goto L_8023606C; break;
        case 81: goto L_802363E4; break;
        case 82: goto L_802363E4; break;
        case 83: goto L_802363E4; break;
        case 84: goto L_802363E4; break;
        case 85: goto L_802363E4; break;
        case 86: goto L_802363E4; break;
        case 87: goto L_802363E4; break;
        case 88: goto L_802363E4; break;
        case 89: goto L_802363E4; break;
        case 90: goto L_802363E4; break;
        case 91: goto L_802363E4; break;
        case 92: goto L_802363E4; break;
        case 93: goto L_802363E4; break;
        case 94: goto L_802363E4; break;
        case 95: goto L_802363E4; break;
        case 96: goto L_8023634C; break;
        default: switch_error(__func__, 0x80235C08, 0x80255400);
    }
    // 0x80235C0C: nop

L_80235C10:
    // 0x80235C10: beql        $s1, $zero, L_80235FB4
    if (ctx->r17 == 0) {
        // 0x80235C14: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80235FB4;
    }
    goto skip_0;
    // 0x80235C14: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
    // 0x80235C18: lw          $t8, 0x2C($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X2C);
    // 0x80235C1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80235C20: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80235C24: bne         $t8, $at, L_802363E4
    if (ctx->r24 != ctx->r1) {
        // 0x80235C28: andi        $a1, $s4, 0xFF
        ctx->r5 = ctx->r20 & 0XFF;
            goto L_802363E4;
    }
    // 0x80235C28: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    // 0x80235C2C: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    // 0x80235C30: andi        $a3, $s6, 0xFF
    ctx->r7 = ctx->r22 & 0XFF;
    // 0x80235C34: jal         0x802403E0
    // 0x80235C38: sw          $t0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r8;
    func_802403E0(rdram, ctx);
        goto after_0;
    // 0x80235C38: sw          $t0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r8;
    after_0:
    // 0x80235C3C: beq         $v0, $zero, L_802363E4
    if (ctx->r2 == 0) {
        // 0x80235C40: or          $s7, $v0, $zero
        ctx->r23 = ctx->r2 | 0;
            goto L_802363E4;
    }
    // 0x80235C40: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x80235C44: lw          $t9, 0x60($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X60);
    // 0x80235C48: sll         $fp, $s6, 4
    ctx->r30 = S32(ctx->r22 << 4);
    // 0x80235C4C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80235C50: addu        $t6, $t9, $fp
    ctx->r14 = ADD32(ctx->r25, ctx->r30);
    // 0x80235C54: lbu         $t7, 0x8($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X8);
    // 0x80235C58: sh          $zero, 0x76($sp)
    MEM_H(0X76, ctx->r29) = 0;
    // 0x80235C5C: sb          $zero, 0x78($sp)
    MEM_B(0X78, ctx->r29) = 0;
    // 0x80235C60: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    // 0x80235C64: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    // 0x80235C68: andi        $a3, $s6, 0xFF
    ctx->r7 = ctx->r22 & 0XFF;
    // 0x80235C6C: jal         0x80240370
    // 0x80235C70: sh          $t7, 0x74($sp)
    MEM_H(0X74, ctx->r29) = ctx->r15;
    func_80240370(rdram, ctx);
        goto after_1;
    // 0x80235C70: sh          $t7, 0x74($sp)
    MEM_H(0X74, ctx->r29) = ctx->r15;
    after_1:
    // 0x80235C74: beq         $v0, $zero, L_802363E4
    if (ctx->r2 == 0) {
        // 0x80235C78: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802363E4;
    }
    // 0x80235C78: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80235C7C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80235C80: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    // 0x80235C84: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x80235C88: jal         0x8023F6D8
    // 0x80235C8C: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    func_8023F6D8(rdram, ctx);
        goto after_2;
    // 0x80235C8C: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    after_2:
    // 0x80235C90: sw          $s7, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r23;
    // 0x80235C94: sb          $zero, 0x34($s0)
    MEM_B(0X34, ctx->r16) = 0;
    // 0x80235C98: lw          $t8, 0x60($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X60);
    // 0x80235C9C: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x80235CA0: addu        $t9, $t8, $fp
    ctx->r25 = ADD32(ctx->r24, ctx->r30);
    // 0x80235CA4: lbu         $t6, 0xB($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0XB);
    // 0x80235CA8: slti        $at, $t6, 0x40
    ctx->r1 = SIGNED(ctx->r14) < 0X40 ? 1 : 0;
    // 0x80235CAC: bnel        $at, $zero, L_80235CC0
    if (ctx->r1 != 0) {
        // 0x80235CB0: sb          $zero, 0x35($s0)
        MEM_B(0X35, ctx->r16) = 0;
            goto L_80235CC0;
    }
    goto skip_1;
    // 0x80235CB0: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
    skip_1:
    // 0x80235CB4: b           L_80235CC0
    // 0x80235CB8: sb          $s5, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r21;
        goto L_80235CC0;
    // 0x80235CB8: sb          $s5, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r21;
    // 0x80235CBC: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
L_80235CC0:
    // 0x80235CC0: lw          $v0, 0x4($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X4);
    // 0x80235CC4: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x80235CC8: lb          $t6, 0x5($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X5);
    // 0x80235CCC: subu        $t8, $s4, $t7
    ctx->r24 = SUB32(ctx->r20, ctx->r15);
    // 0x80235CD0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80235CD4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80235CD8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80235CDC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80235CE0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80235CE4: addu        $a0, $t9, $t6
    ctx->r4 = ADD32(ctx->r25, ctx->r14);
    // 0x80235CE8: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x80235CEC: jal         0x80241620
    // 0x80235CF0: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    func_80241620(rdram, ctx);
        goto after_3;
    // 0x80235CF0: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    after_3:
    // 0x80235CF4: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x80235CF8: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x80235CFC: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x80235D00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80235D04: lbu         $t6, 0xC($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0XC);
    // 0x80235D08: sb          $t6, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r14;
    // 0x80235D0C: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x80235D10: lw          $t7, 0x1C($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X1C);
    // 0x80235D14: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80235D18: sb          $zero, 0x37($s0)
    MEM_B(0X37, ctx->r16) = 0;
    // 0x80235D1C: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80235D20: sw          $t6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r14;
    // 0x80235D24: lw          $t8, 0x60($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X60);
    // 0x80235D28: addu        $t7, $t8, $fp
    ctx->r15 = ADD32(ctx->r24, ctx->r30);
    // 0x80235D2C: lw          $s1, 0x0($t7)
    ctx->r17 = MEM_W(ctx->r15, 0X0);
    // 0x80235D30: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x80235D34: lbu         $a2, 0x4($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X4);
    // 0x80235D38: beql        $a2, $zero, L_80235DA4
    if (ctx->r6 == 0) {
        // 0x80235D3C: cfc1        $t8, $FpcCsr
        ctx->r24 = get_cop1_cs();
            goto L_80235DA4;
    }
    goto skip_2;
    // 0x80235D3C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    skip_2:
    // 0x80235D40: lw          $v0, 0x70($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X70);
    // 0x80235D44: beql        $v0, $zero, L_80235DA4
    if (ctx->r2 == 0) {
        // 0x80235D48: cfc1        $t8, $FpcCsr
        ctx->r24 = get_cop1_cs();
            goto L_80235DA4;
    }
    goto skip_3;
    // 0x80235D48: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    skip_3:
    // 0x80235D4C: lbu         $t9, 0x6($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X6);
    // 0x80235D50: lbu         $a3, 0x5($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X5);
    // 0x80235D54: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x80235D58: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80235D5C: lbu         $t6, 0x7($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X7);
    // 0x80235D60: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x80235D64: jalr        $v0
    // 0x80235D68: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80235D68: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_4:
    // 0x80235D6C: beq         $v0, $zero, L_80235DA0
    if (ctx->r2 == 0) {
        // 0x80235D70: addiu       $t8, $zero, 0x16
        ctx->r24 = ADD32(0, 0X16);
            goto L_80235DA0;
    }
    // 0x80235D70: addiu       $t8, $zero, 0x16
    ctx->r24 = ADD32(0, 0X16);
    // 0x80235D74: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80235D78: sh          $t8, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r24;
    // 0x80235D7C: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    // 0x80235D80: addiu       $a0, $s2, 0x48
    ctx->r4 = ADD32(ctx->r18, 0X48);
    // 0x80235D84: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80235D88: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80235D8C: jal         0x8023F37C
    // 0x80235D90: sw          $t7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r15;
    func_8023F37C(rdram, ctx);
        goto after_5;
    // 0x80235D90: sw          $t7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r15;
    after_5:
    // 0x80235D94: lbu         $t9, 0x37($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X37);
    // 0x80235D98: ori         $t6, $t9, 0x1
    ctx->r14 = ctx->r25 | 0X1;
    // 0x80235D9C: sb          $t6, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r14;
L_80235DA0:
    // 0x80235DA0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
L_80235DA4:
    // 0x80235DA4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80235DA8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80235DAC: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80235DB0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80235DB4: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80235DB8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80235DBC: nop

    // 0x80235DC0: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x80235DC4: beql        $t7, $zero, L_80235E14
    if (ctx->r15 == 0) {
        // 0x80235DC8: mfc1        $t7, $f8
        ctx->r15 = (int32_t)ctx->f8.u32l;
            goto L_80235E14;
    }
    goto skip_4;
    // 0x80235DC8: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    skip_4:
    // 0x80235DCC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80235DD0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80235DD4: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80235DD8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80235DDC: nop

    // 0x80235DE0: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80235DE4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80235DE8: nop

    // 0x80235DEC: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x80235DF0: bne         $t7, $zero, L_80235E08
    if (ctx->r15 != 0) {
        // 0x80235DF4: nop
    
            goto L_80235E08;
    }
    // 0x80235DF4: nop

    // 0x80235DF8: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80235DFC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80235E00: b           L_80235E20
    // 0x80235E04: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_80235E20;
    // 0x80235E04: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_80235E08:
    // 0x80235E08: b           L_80235E20
    // 0x80235E0C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_80235E20;
    // 0x80235E0C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80235E10: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
L_80235E14:
    // 0x80235E14: nop

    // 0x80235E18: bltz        $t7, L_80235E08
    if (SIGNED(ctx->r15) < 0) {
        // 0x80235E1C: nop
    
            goto L_80235E08;
    }
    // 0x80235E1C: nop

L_80235E20:
    // 0x80235E20: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80235E24: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80235E28: sb          $t7, 0x36($s0)
    MEM_B(0X36, ctx->r16) = ctx->r15;
    // 0x80235E2C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80235E30: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x80235E34: lbu         $a2, 0x8($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X8);
    // 0x80235E38: addiu       $s5, $s2, 0x48
    ctx->r21 = ADD32(ctx->r18, 0X48);
    // 0x80235E3C: beql        $a2, $zero, L_80235EAC
    if (ctx->r6 == 0) {
        // 0x80235E40: lwc1        $f4, 0x64($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
            goto L_80235EAC;
    }
    goto skip_5;
    // 0x80235E40: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    skip_5:
    // 0x80235E44: lw          $v0, 0x70($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X70);
    // 0x80235E48: beql        $v0, $zero, L_80235EAC
    if (ctx->r2 == 0) {
        // 0x80235E4C: lwc1        $f4, 0x64($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
            goto L_80235EAC;
    }
    goto skip_6;
    // 0x80235E4C: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    skip_6:
    // 0x80235E50: lbu         $t9, 0xA($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0XA);
    // 0x80235E54: lbu         $a3, 0x9($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X9);
    // 0x80235E58: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x80235E5C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80235E60: lbu         $t6, 0xB($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0XB);
    // 0x80235E64: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x80235E68: jalr        $v0
    // 0x80235E6C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x80235E6C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_6:
    // 0x80235E70: beq         $v0, $zero, L_80235EA8
    if (ctx->r2 == 0) {
        // 0x80235E74: addiu       $t8, $zero, 0x17
        ctx->r24 = ADD32(0, 0X17);
            goto L_80235EA8;
    }
    // 0x80235E74: addiu       $t8, $zero, 0x17
    ctx->r24 = ADD32(0, 0X17);
    // 0x80235E78: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80235E7C: sh          $t8, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r24;
    // 0x80235E80: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    // 0x80235E84: sb          $s6, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r22;
    // 0x80235E88: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80235E8C: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80235E90: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80235E94: jal         0x8023F37C
    // 0x80235E98: sw          $t7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r15;
    func_8023F37C(rdram, ctx);
        goto after_7;
    // 0x80235E98: sw          $t7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r15;
    after_7:
    // 0x80235E9C: lbu         $t9, 0x37($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X37);
    // 0x80235EA0: ori         $t6, $t9, 0x2
    ctx->r14 = ctx->r25 | 0X2;
    // 0x80235EA4: sb          $t6, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r14;
L_80235EA8:
    // 0x80235EA8: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
L_80235EAC:
    // 0x80235EAC: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80235EB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80235EB4: swc1        $f4, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f4.u32l;
    // 0x80235EB8: lw          $t8, 0x60($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X60);
    // 0x80235EBC: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x80235EC0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80235EC4: addu        $v0, $t8, $fp
    ctx->r2 = ADD32(ctx->r24, ctx->r30);
    // 0x80235EC8: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80235ECC: lbu         $s1, 0xA($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0XA);
    // 0x80235ED0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80235ED4: nop

    // 0x80235ED8: mul.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80235EDC: jal         0x802402B4
    // 0x80235EE0: nop

    func_802402B4(rdram, ctx);
        goto after_8;
    // 0x80235EE0: nop

    after_8:
    // 0x80235EE4: andi        $fp, $v0, 0xFF
    ctx->r30 = ctx->r2 & 0XFF;
    // 0x80235EE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80235EEC: jal         0x8023FE94
    // 0x80235EF0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8023FE94(rdram, ctx);
        goto after_9;
    // 0x80235EF0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_9:
    // 0x80235EF4: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x80235EF8: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80235EFC: lw          $a2, 0x8($s7)
    ctx->r6 = MEM_W(ctx->r23, 0X8);
    // 0x80235F00: lw          $s3, 0x0($t7)
    ctx->r19 = MEM_W(ctx->r15, 0X0);
    // 0x80235F04: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80235F08: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80235F0C: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    // 0x80235F10: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80235F14: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80235F18: jal         0x80241670
    // 0x80235F1C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    func_80241670(rdram, ctx);
        goto after_10;
    // 0x80235F1C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    after_10:
    // 0x80235F20: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80235F24: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80235F28: sh          $t9, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r25;
    // 0x80235F2C: sw          $t6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r14;
    // 0x80235F30: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x80235F34: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80235F38: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80235F3C: lbu         $t7, 0xD($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0XD);
    // 0x80235F40: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80235F44: sb          $t7, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r15;
    // 0x80235F48: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x80235F4C: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x80235F50: jal         0x8023F37C
    // 0x80235F54: sw          $t6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r14;
    func_8023F37C(rdram, ctx);
        goto after_11;
    // 0x80235F54: sw          $t6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r14;
    after_11:
    // 0x80235F58: lw          $v0, 0xBC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XBC);
    // 0x80235F5C: addiu       $t7, $zero, 0x15
    ctx->r15 = ADD32(0, 0X15);
    // 0x80235F60: ori         $t9, $s6, 0x80
    ctx->r25 = ctx->r22 | 0X80;
    // 0x80235F64: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x80235F68: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80235F6C: beql        $t8, $zero, L_802363E8
    if (ctx->r24 == 0) {
        // 0x80235F70: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802363E8;
    }
    goto skip_7;
    // 0x80235F70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_7:
    // 0x80235F74: sh          $t7, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r15;
    // 0x80235F78: sb          $t9, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r25;
    // 0x80235F7C: sb          $s4, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r20;
    // 0x80235F80: sb          $zero, 0x96($sp)
    MEM_B(0X96, ctx->r29) = 0;
    // 0x80235F84: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x80235F88: lw          $t6, 0x24($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X24);
    // 0x80235F8C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80235F90: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80235F94: multu       $t6, $t8
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80235F98: mflo        $s3
    ctx->r19 = lo;
    // 0x80235F9C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80235FA0: jal         0x8023F37C
    // 0x80235FA4: nop

    func_8023F37C(rdram, ctx);
        goto after_12;
    // 0x80235FA4: nop

    after_12:
    // 0x80235FA8: b           L_802363E8
    // 0x80235FAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802363E8;
    // 0x80235FAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80235FB0:
    // 0x80235FB0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80235FB4:
    // 0x80235FB4: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    // 0x80235FB8: jal         0x802402FC
    // 0x80235FBC: andi        $a2, $s6, 0xFF
    ctx->r6 = ctx->r22 & 0XFF;
    func_802402FC(rdram, ctx);
        goto after_13;
    // 0x80235FBC: andi        $a2, $s6, 0xFF
    ctx->r6 = ctx->r22 & 0XFF;
    after_13:
    // 0x80235FC0: beq         $v0, $zero, L_802363E4
    if (ctx->r2 == 0) {
        // 0x80235FC4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802363E4;
    }
    // 0x80235FC4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80235FC8: lbu         $t7, 0x35($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X35);
    // 0x80235FCC: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x80235FD0: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80235FD4: bne         $s6, $t7, L_80235FE4
    if (ctx->r22 != ctx->r15) {
        // 0x80235FD8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80235FE4;
    }
    // 0x80235FD8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80235FDC: b           L_802363E4
    // 0x80235FE0: sb          $t9, 0x35($v0)
    MEM_B(0X35, ctx->r2) = ctx->r25;
        goto L_802363E4;
    // 0x80235FE0: sb          $t9, 0x35($v0)
    MEM_B(0X35, ctx->r2) = ctx->r25;
L_80235FE4:
    // 0x80235FE4: lw          $t6, 0x20($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X20);
    // 0x80235FE8: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x80235FEC: sb          $fp, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r30;
    // 0x80235FF0: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x80235FF4: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80235FF8: jal         0x8023FF1C
    // 0x80235FFC: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    func_8023FF1C(rdram, ctx);
        goto after_14;
    // 0x80235FFC: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    after_14:
    // 0x80236000: b           L_802363E8
    // 0x80236004: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802363E8;
    // 0x80236004: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80236008:
    // 0x80236008: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8023600C: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    // 0x80236010: jal         0x802402FC
    // 0x80236014: andi        $a2, $s6, 0xFF
    ctx->r6 = ctx->r22 & 0XFF;
    func_802402FC(rdram, ctx);
        goto after_15;
    // 0x80236014: andi        $a2, $s6, 0xFF
    ctx->r6 = ctx->r22 & 0XFF;
    after_15:
    // 0x80236018: beq         $v0, $zero, L_802363E4
    if (ctx->r2 == 0) {
        // 0x8023601C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802363E4;
    }
    // 0x8023601C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80236020: sb          $s1, 0x33($v0)
    MEM_B(0X33, ctx->r2) = ctx->r17;
    // 0x80236024: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80236028: jal         0x8023FE94
    // 0x8023602C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8023FE94(rdram, ctx);
        goto after_16;
    // 0x8023602C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_16:
    // 0x80236030: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x80236034: sra         $t7, $s1, 16
    ctx->r15 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80236038: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x8023603C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80236040: jal         0x8023FE70
    // 0x80236044: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    func_8023FE70(rdram, ctx);
        goto after_17;
    // 0x80236044: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    after_17:
    // 0x80236048: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x8023604C: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80236050: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80236054: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80236058: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x8023605C: jal         0x8023F940
    // 0x80236060: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_8023F940(rdram, ctx);
        goto after_18;
    // 0x80236060: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_18:
    // 0x80236064: b           L_802363E8
    // 0x80236068: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802363E8;
    // 0x80236068: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8023606C:
    // 0x8023606C: lw          $s0, 0x64($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X64);
    // 0x80236070: beql        $s0, $zero, L_802363E8
    if (ctx->r16 == 0) {
        // 0x80236074: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802363E8;
    }
    goto skip_8;
    // 0x80236074: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_8:
    // 0x80236078: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x8023607C: lbu         $t6, 0x31($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X31);
L_80236080:
    // 0x80236080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80236084: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80236088: bnel        $s3, $t6, L_802360D0
    if (ctx->r19 != ctx->r14) {
        // 0x8023608C: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_802360D0;
    }
    goto skip_9;
    // 0x8023608C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_9:
    // 0x80236090: jal         0x8023FE94
    // 0x80236094: sb          $s4, 0x33($s0)
    MEM_B(0X33, ctx->r16) = ctx->r20;
    func_8023FE94(rdram, ctx);
        goto after_19;
    // 0x80236094: sb          $s4, 0x33($s0)
    MEM_B(0X33, ctx->r16) = ctx->r20;
    after_19:
    // 0x80236098: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x8023609C: sra         $t8, $s1, 16
    ctx->r24 = S32(SIGNED(ctx->r17) >> 16);
    // 0x802360A0: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x802360A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802360A8: jal         0x8023FE70
    // 0x802360AC: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    func_8023FE70(rdram, ctx);
        goto after_20;
    // 0x802360AC: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    after_20:
    // 0x802360B0: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x802360B4: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802360B8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802360BC: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x802360C0: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x802360C4: jal         0x8023F940
    // 0x802360C8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_8023F940(rdram, ctx);
        goto after_21;
    // 0x802360C8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_21:
    // 0x802360CC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802360D0:
    // 0x802360D0: bnel        $s0, $zero, L_80236080
    if (ctx->r16 != 0) {
        // 0x802360D4: lbu         $t6, 0x31($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X31);
            goto L_80236080;
    }
    goto skip_10;
    // 0x802360D4: lbu         $t6, 0x31($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X31);
    skip_10:
    // 0x802360D8: b           L_802363E8
    // 0x802360DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802363E8;
    // 0x802360DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802360E0:
    // 0x802360E0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802360E4: beq         $s4, $at, L_80236174
    if (ctx->r20 == ctx->r1) {
        // 0x802360E8: or          $v0, $s4, $zero
        ctx->r2 = ctx->r20 | 0;
            goto L_80236174;
    }
    // 0x802360E8: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x802360EC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802360F0: beq         $v0, $at, L_80236118
    if (ctx->r2 == ctx->r1) {
        // 0x802360F4: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_80236118;
    }
    // 0x802360F4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802360F8: beq         $v0, $at, L_80236204
    if (ctx->r2 == ctx->r1) {
        // 0x802360FC: addiu       $at, $zero, 0x40
        ctx->r1 = ADD32(0, 0X40);
            goto L_80236204;
    }
    // 0x802360FC: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x80236100: beq         $v0, $at, L_80236218
    if (ctx->r2 == ctx->r1) {
        // 0x80236104: addiu       $at, $zero, 0x5B
        ctx->r1 = ADD32(0, 0X5B);
            goto L_80236218;
    }
    // 0x80236104: addiu       $at, $zero, 0x5B
    ctx->r1 = ADD32(0, 0X5B);
    // 0x80236108: beql        $v0, $at, L_802362CC
    if (ctx->r2 == ctx->r1) {
        // 0x8023610C: lw          $t9, 0x60($s2)
        ctx->r25 = MEM_W(ctx->r18, 0X60);
            goto L_802362CC;
    }
    goto skip_11;
    // 0x8023610C: lw          $t9, 0x60($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X60);
    skip_11:
    // 0x80236110: b           L_802363E8
    // 0x80236114: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802363E8;
    // 0x80236114: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80236118:
    // 0x80236118: lw          $t9, 0x60($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X60);
    // 0x8023611C: sll         $t6, $s6, 4
    ctx->r14 = S32(ctx->r22 << 4);
    // 0x80236120: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x80236124: sb          $s1, 0x7($t8)
    MEM_B(0X7, ctx->r24) = ctx->r17;
    // 0x80236128: lw          $s0, 0x64($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X64);
    // 0x8023612C: beql        $s0, $zero, L_802363E8
    if (ctx->r16 == 0) {
        // 0x80236130: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802363E8;
    }
    goto skip_12;
    // 0x80236130: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_12:
    // 0x80236134: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x80236138: lbu         $t7, 0x31($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X31);
L_8023613C:
    // 0x8023613C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80236140: bnel        $s3, $t7, L_80236164
    if (ctx->r19 != ctx->r15) {
        // 0x80236144: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80236164;
    }
    goto skip_13;
    // 0x80236144: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_13:
    // 0x80236148: jal         0x802402B4
    // 0x8023614C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_802402B4(rdram, ctx);
        goto after_22;
    // 0x8023614C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_22:
    // 0x80236150: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80236154: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80236158: jal         0x8023F8B0
    // 0x8023615C: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    func_8023F8B0(rdram, ctx);
        goto after_23;
    // 0x8023615C: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    after_23:
    // 0x80236160: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80236164:
    // 0x80236164: bnel        $s0, $zero, L_8023613C
    if (ctx->r16 != 0) {
        // 0x80236168: lbu         $t7, 0x31($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X31);
            goto L_8023613C;
    }
    goto skip_14;
    // 0x80236168: lbu         $t7, 0x31($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X31);
    skip_14:
    // 0x8023616C: b           L_802363E8
    // 0x80236170: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802363E8;
    // 0x80236170: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80236174:
    // 0x80236174: lw          $t9, 0x60($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X60);
    // 0x80236178: sll         $t6, $s6, 4
    ctx->r14 = S32(ctx->r22 << 4);
    // 0x8023617C: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x80236180: sb          $s1, 0x9($t8)
    MEM_B(0X9, ctx->r24) = ctx->r17;
    // 0x80236184: lw          $s0, 0x64($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X64);
    // 0x80236188: beql        $s0, $zero, L_802363E8
    if (ctx->r16 == 0) {
        // 0x8023618C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802363E8;
    }
    goto skip_15;
    // 0x8023618C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_15:
    // 0x80236190: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x80236194: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x80236198: lbu         $t7, 0x31($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X31);
L_8023619C:
    // 0x8023619C: bnel        $s3, $t7, L_802361F4
    if (ctx->r19 != ctx->r15) {
        // 0x802361A0: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_802361F4;
    }
    goto skip_16;
    // 0x802361A0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_16:
    // 0x802361A4: lbu         $t9, 0x34($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X34);
    // 0x802361A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802361AC: beql        $s4, $t9, L_802361F4
    if (ctx->r20 == ctx->r25) {
        // 0x802361B0: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_802361F4;
    }
    goto skip_17;
    // 0x802361B0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_17:
    // 0x802361B4: jal         0x8023FE94
    // 0x802361B8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8023FE94(rdram, ctx);
        goto after_24;
    // 0x802361B8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_24:
    // 0x802361BC: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x802361C0: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x802361C4: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x802361C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802361CC: jal         0x8023FE70
    // 0x802361D0: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    func_8023FE70(rdram, ctx);
        goto after_25;
    // 0x802361D0: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    after_25:
    // 0x802361D4: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x802361D8: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802361DC: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x802361E0: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x802361E4: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x802361E8: jal         0x8023F940
    // 0x802361EC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_8023F940(rdram, ctx);
        goto after_26;
    // 0x802361EC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_26:
    // 0x802361F0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802361F4:
    // 0x802361F4: bnel        $s0, $zero, L_8023619C
    if (ctx->r16 != 0) {
        // 0x802361F8: lbu         $t7, 0x31($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X31);
            goto L_8023619C;
    }
    goto skip_18;
    // 0x802361F8: lbu         $t7, 0x31($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X31);
    skip_18:
    // 0x802361FC: b           L_802363E8
    // 0x80236200: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802363E8;
    // 0x80236200: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80236204:
    // 0x80236204: lw          $t7, 0x60($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X60);
    // 0x80236208: sll         $t9, $s6, 4
    ctx->r25 = S32(ctx->r22 << 4);
    // 0x8023620C: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80236210: b           L_802363E4
    // 0x80236214: sb          $s1, 0x8($t6)
    MEM_B(0X8, ctx->r14) = ctx->r17;
        goto L_802363E4;
    // 0x80236214: sb          $s1, 0x8($t6)
    MEM_B(0X8, ctx->r14) = ctx->r17;
L_80236218:
    // 0x80236218: lw          $t8, 0x60($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X60);
    // 0x8023621C: sll         $t7, $s6, 4
    ctx->r15 = S32(ctx->r22 << 4);
    // 0x80236220: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x80236224: sb          $s1, 0xB($t9)
    MEM_B(0XB, ctx->r25) = ctx->r17;
    // 0x80236228: lw          $s0, 0x64($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X64);
    // 0x8023622C: beql        $s0, $zero, L_802363E8
    if (ctx->r16 == 0) {
        // 0x80236230: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802363E8;
    }
    goto skip_19;
    // 0x80236230: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_19:
    // 0x80236234: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x80236238: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x8023623C: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x80236240: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
    // 0x80236244: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x80236248: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x8023624C: lbu         $t6, 0x31($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X31);
L_80236250:
    // 0x80236250: bnel        $s3, $t6, L_802362B8
    if (ctx->r19 != ctx->r14) {
        // 0x80236254: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_802362B8;
    }
    goto skip_20;
    // 0x80236254: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_20:
    // 0x80236258: lbu         $v0, 0x35($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X35);
    // 0x8023625C: slti        $at, $s1, 0x40
    ctx->r1 = SIGNED(ctx->r17) < 0X40 ? 1 : 0;
    // 0x80236260: beql        $s4, $v0, L_802362B8
    if (ctx->r20 == ctx->r2) {
        // 0x80236264: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_802362B8;
    }
    goto skip_21;
    // 0x80236264: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_21:
    // 0x80236268: bne         $at, $zero, L_80236280
    if (ctx->r1 != 0) {
        // 0x8023626C: nop
    
            goto L_80236280;
    }
    // 0x8023626C: nop

    // 0x80236270: bnel        $v0, $zero, L_802362B8
    if (ctx->r2 != 0) {
        // 0x80236274: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_802362B8;
    }
    goto skip_22;
    // 0x80236274: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_22:
    // 0x80236278: b           L_802362B4
    // 0x8023627C: sb          $s5, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r21;
        goto L_802362B4;
    // 0x8023627C: sb          $s5, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r21;
L_80236280:
    // 0x80236280: bne         $s6, $v0, L_80236290
    if (ctx->r22 != ctx->r2) {
        // 0x80236284: nop
    
            goto L_80236290;
    }
    // 0x80236284: nop

    // 0x80236288: b           L_802362B4
    // 0x8023628C: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
        goto L_802362B4;
    // 0x8023628C: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
L_80236290:
    // 0x80236290: bnel        $s7, $v0, L_802362B8
    if (ctx->r23 != ctx->r2) {
        // 0x80236294: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_802362B8;
    }
    goto skip_23;
    // 0x80236294: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_23:
    // 0x80236298: lw          $t8, 0x20($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X20);
    // 0x8023629C: sb          $fp, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r30;
    // 0x802362A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802362A4: lw          $t7, 0x0($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X0);
    // 0x802362A8: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x802362AC: jal         0x8023FF1C
    // 0x802362B0: lw          $a2, 0x8($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X8);
    func_8023FF1C(rdram, ctx);
        goto after_27;
    // 0x802362B0: lw          $a2, 0x8($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X8);
    after_27:
L_802362B4:
    // 0x802362B4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802362B8:
    // 0x802362B8: bnel        $s0, $zero, L_80236250
    if (ctx->r16 != 0) {
        // 0x802362BC: lbu         $t6, 0x31($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X31);
            goto L_80236250;
    }
    goto skip_24;
    // 0x802362BC: lbu         $t6, 0x31($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X31);
    skip_24:
    // 0x802362C0: b           L_802363E8
    // 0x802362C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802363E8;
    // 0x802362C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802362C8: lw          $t9, 0x60($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X60);
L_802362CC:
    // 0x802362CC: sll         $t6, $s6, 4
    ctx->r14 = S32(ctx->r22 << 4);
    // 0x802362D0: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x802362D4: sb          $s1, 0xA($t8)
    MEM_B(0XA, ctx->r24) = ctx->r17;
    // 0x802362D8: lw          $s0, 0x64($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X64);
    // 0x802362DC: beql        $s0, $zero, L_802363E8
    if (ctx->r16 == 0) {
        // 0x802362E0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802363E8;
    }
    goto skip_25;
    // 0x802362E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_25:
    // 0x802362E4: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x802362E8: lbu         $t7, 0x31($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X31);
L_802362EC:
    // 0x802362EC: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x802362F0: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    // 0x802362F4: bnel        $s3, $t7, L_80236308
    if (ctx->r19 != ctx->r15) {
        // 0x802362F8: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80236308;
    }
    goto skip_26;
    // 0x802362F8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_26:
    // 0x802362FC: jal         0x8023FA70
    // 0x80236300: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    func_8023FA70(rdram, ctx);
        goto after_28;
    // 0x80236300: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    after_28:
    // 0x80236304: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80236308:
    // 0x80236308: bnel        $s0, $zero, L_802362EC
    if (ctx->r16 != 0) {
        // 0x8023630C: lbu         $t7, 0x31($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X31);
            goto L_802362EC;
    }
    goto skip_27;
    // 0x8023630C: lbu         $t7, 0x31($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X31);
    skip_27:
    // 0x80236310: b           L_802363E8
    // 0x80236314: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802363E8;
    // 0x80236314: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80236318:
    // 0x80236318: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x8023631C: sll         $t6, $s4, 2
    ctx->r14 = S32(ctx->r20 << 2);
    // 0x80236320: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80236324: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x80236328: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x8023632C: addu        $t8, $v0, $t6
    ctx->r24 = ADD32(ctx->r2, ctx->r14);
    // 0x80236330: slt         $at, $s4, $t9
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80236334: beql        $at, $zero, L_802363E8
    if (ctx->r1 == 0) {
        // 0x80236338: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802363E8;
    }
    goto skip_28;
    // 0x80236338: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_28:
    // 0x8023633C: jal         0x8023FCE0
    // 0x80236340: lw          $a1, 0xC($t8)
    ctx->r5 = MEM_W(ctx->r24, 0XC);
    func_8023FCE0(rdram, ctx);
        goto after_29;
    // 0x80236340: lw          $a1, 0xC($t8)
    ctx->r5 = MEM_W(ctx->r24, 0XC);
    after_29:
    // 0x80236344: b           L_802363E8
    // 0x80236348: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802363E8;
    // 0x80236348: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8023634C:
    // 0x8023634C: lw          $t7, 0x60($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X60);
    // 0x80236350: sll         $fp, $s6, 4
    ctx->r30 = S32(ctx->r22 << 4);
    // 0x80236354: sll         $t8, $s1, 7
    ctx->r24 = S32(ctx->r17 << 7);
    // 0x80236358: addu        $t9, $t7, $fp
    ctx->r25 = ADD32(ctx->r15, ctx->r30);
    // 0x8023635C: lh          $t6, 0x4($t9)
    ctx->r14 = MEM_H(ctx->r25, 0X4);
    // 0x80236360: addu        $t7, $t8, $s4
    ctx->r15 = ADD32(ctx->r24, ctx->r20);
    // 0x80236364: addiu       $t9, $t7, -0x2000
    ctx->r25 = ADD32(ctx->r15, -0X2000);
    // 0x80236368: multu       $t6, $t9
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023636C: mflo        $a0
    ctx->r4 = lo;
    // 0x80236370: bgez        $a0, L_80236380
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80236374: sra         $t8, $a0, 13
        ctx->r24 = S32(SIGNED(ctx->r4) >> 13);
            goto L_80236380;
    }
    // 0x80236374: sra         $t8, $a0, 13
    ctx->r24 = S32(SIGNED(ctx->r4) >> 13);
    // 0x80236378: addiu       $at, $a0, 0x1FFF
    ctx->r1 = ADD32(ctx->r4, 0X1FFF);
    // 0x8023637C: sra         $t8, $at, 13
    ctx->r24 = S32(SIGNED(ctx->r1) >> 13);
L_80236380:
    // 0x80236380: jal         0x80241620
    // 0x80236384: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80241620(rdram, ctx);
        goto after_30;
    // 0x80236384: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_30:
    // 0x80236388: lw          $t7, 0x60($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X60);
    // 0x8023638C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80236390: addu        $t6, $t7, $fp
    ctx->r14 = ADD32(ctx->r15, ctx->r30);
    // 0x80236394: swc1        $f0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f0.u32l;
    // 0x80236398: lw          $s0, 0x64($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X64);
    // 0x8023639C: beql        $s0, $zero, L_802363E8
    if (ctx->r16 == 0) {
        // 0x802363A0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802363E8;
    }
    goto skip_29;
    // 0x802363A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_29:
    // 0x802363A4: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x802363A8: lbu         $t9, 0x31($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X31);
L_802363AC:
    // 0x802363AC: bnel        $s3, $t9, L_802363DC
    if (ctx->r19 != ctx->r25) {
        // 0x802363B0: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_802363DC;
    }
    goto skip_30;
    // 0x802363B0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_30:
    // 0x802363B4: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x802363B8: lwc1        $f10, 0x2C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x802363BC: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x802363C0: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x802363C4: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x802363C8: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802363CC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802363D0: jal         0x8023F9E0
    // 0x802363D4: nop

    func_8023F9E0(rdram, ctx);
        goto after_31;
    // 0x802363D4: nop

    after_31:
    // 0x802363D8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802363DC:
    // 0x802363DC: bnel        $s0, $zero, L_802363AC
    if (ctx->r16 != 0) {
        // 0x802363E0: lbu         $t9, 0x31($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X31);
            goto L_802363AC;
    }
    goto skip_31;
    // 0x802363E0: lbu         $t9, 0x31($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X31);
    skip_31:
L_802363E4:
    // 0x802363E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802363E8:
    // 0x802363E8: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x802363EC: jr          $ra
    // 0x802363F0: nop

    return;
    // 0x802363F0: nop

    // 0x802363F4: jr          $ra
    // 0x802363F8: nop

    return;
    // 0x802363F8: nop

;}
RECOMP_FUNC void func_8023F5A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F5A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023F5A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023F5A8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8023F5AC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8023F5B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023F5B4: jal         0x8023FC40
    // 0x8023F5B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8023FC40(rdram, ctx);
        goto after_0;
    // 0x8023F5B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8023F5BC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8023F5C0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F5C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8023F5C8: lw          $t6, 0x20($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X20);
    // 0x8023F5CC: sw          $t6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r14;
    // 0x8023F5D0: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x8023F5D4: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8023F5D8: jal         0x8023FC40
    // 0x8023F5DC: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    func_8023FC40(rdram, ctx);
        goto after_1;
    // 0x8023F5DC: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    after_1:
    // 0x8023F5E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023F5E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023F5E8: jr          $ra
    // 0x8023F5EC: nop

    return;
    // 0x8023F5EC: nop

;}
RECOMP_FUNC void func_80212E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80212E24: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80212E28: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x80212E2C: lui         $s5, 0x8025
    ctx->r21 = S32(0X8025 << 16);
    // 0x80212E30: addiu       $s5, $s5, -0x18F0
    ctx->r21 = ADD32(ctx->r21, -0X18F0);
    // 0x80212E34: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80212E38: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80212E3C: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x80212E40: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80212E44: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x80212E48: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80212E4C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80212E50: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x80212E54: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    // 0x80212E58: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80212E5C: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80212E60: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80212E64: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80212E68: lw          $s0, 0x0($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X0);
    // 0x80212E6C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80212E70: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80212E74: bne         $s0, $zero, L_80212E90
    if (ctx->r16 != 0) {
        // 0x80212E78: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80212E90;
    }
    // 0x80212E78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212E7C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80212E80: jal         0x80231A24
    // 0x80212E84: addiu       $a0, $a0, 0x2F20
    ctx->r4 = ADD32(ctx->r4, 0X2F20);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80212E84: addiu       $a0, $a0, 0x2F20
    ctx->r4 = ADD32(ctx->r4, 0X2F20);
    after_0:
    // 0x80212E88: b           L_80212FFC
    // 0x80212E8C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80212FFC;
    // 0x80212E8C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80212E90:
    // 0x80212E90: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80212E94: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80212E98: addiu       $t0, $sp, 0x70
    ctx->r8 = ADD32(ctx->r29, 0X70);
    // 0x80212E9C: addiu       $t1, $sp, 0x6C
    ctx->r9 = ADD32(ctx->r29, 0X6C);
    // 0x80212EA0: addiu       $t2, $sp, 0x68
    ctx->r10 = ADD32(ctx->r29, 0X68);
    // 0x80212EA4: addiu       $t3, $sp, 0x74
    ctx->r11 = ADD32(ctx->r29, 0X74);
    // 0x80212EA8: addiu       $t4, $sp, 0x76
    ctx->r12 = ADD32(ctx->r29, 0X76);
    // 0x80212EAC: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80212EB0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80212EB4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80212EB8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80212EBC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80212EC0: lw          $a3, 0x84($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X84);
    // 0x80212EC4: jal         0x802160EC
    // 0x80212EC8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_802160EC(rdram, ctx);
        goto after_1;
    // 0x80212EC8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_1:
    // 0x80212ECC: bne         $v0, $zero, L_80212EDC
    if (ctx->r2 != 0) {
        // 0x80212ED0: lhu         $t6, 0x74($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0X74);
            goto L_80212EDC;
    }
    // 0x80212ED0: lhu         $t6, 0x74($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X74);
    // 0x80212ED4: b           L_80212FFC
    // 0x80212ED8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80212FFC;
    // 0x80212ED8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80212EDC:
    // 0x80212EDC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80212EE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80212EE4: lw          $t5, 0x28($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X28);
    // 0x80212EE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80212EEC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80212EF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80212EF4: addu        $s3, $t5, $t7
    ctx->r19 = ADD32(ctx->r13, ctx->r15);
    // 0x80212EF8: lw          $v0, 0x40($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X40);
    // 0x80212EFC: bnel        $v0, $zero, L_80212F10
    if (ctx->r2 != 0) {
        // 0x80212F00: lhu         $v1, 0x14($v0)
        ctx->r3 = MEM_HU(ctx->r2, 0X14);
            goto L_80212F10;
    }
    goto skip_0;
    // 0x80212F00: lhu         $v1, 0x14($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X14);
    skip_0:
    // 0x80212F04: b           L_80212FFC
    // 0x80212F08: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80212FFC;
    // 0x80212F08: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80212F0C: lhu         $v1, 0x14($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X14);
L_80212F10:
    // 0x80212F10: lui         $s4, 0x8026
    ctx->r20 = S32(0X8026 << 16);
    // 0x80212F14: addiu       $s4, $s4, -0x3C6C
    ctx->r20 = ADD32(ctx->r20, -0X3C6C);
    // 0x80212F18: beq         $v1, $zero, L_80212FF8
    if (ctx->r3 == 0) {
        // 0x80212F1C: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_80212FF8;
    }
    // 0x80212F1C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80212F20: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
L_80212F24:
    // 0x80212F24: sll         $t9, $s2, 5
    ctx->r25 = S32(ctx->r18 << 5);
    // 0x80212F28: lhu         $t0, 0x76($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X76);
    // 0x80212F2C: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    // 0x80212F30: lhu         $t1, 0x18($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X18);
    // 0x80212F34: and         $t2, $t0, $t1
    ctx->r10 = ctx->r8 & ctx->r9;
    // 0x80212F38: beql        $t2, $zero, L_80212FEC
    if (ctx->r10 == 0) {
        // 0x80212F3C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80212FEC;
    }
    goto skip_1;
    // 0x80212F3C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x80212F40: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80212F44: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x80212F48: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80212F4C: lw          $t4, 0x1C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X1C);
    // 0x80212F50: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80212F54: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x80212F58: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x80212F5C: lw          $s1, 0x0($t7)
    ctx->r17 = MEM_W(ctx->r15, 0X0);
    // 0x80212F60: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80212F64: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80212F68: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80212F6C: lwc1        $f14, 0x6C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80212F70: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80212F74: lwc1        $f8, 0x1C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x80212F78: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x80212F7C: jal         0x80216464
    // 0x80212F80: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_80216464(rdram, ctx);
        goto after_2;
    // 0x80212F80: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80212F84: beq         $v0, $zero, L_80212FE0
    if (ctx->r2 == 0) {
        // 0x80212F88: or          $a3, $s0, $zero
        ctx->r7 = ctx->r16 | 0;
            goto L_80212FE0;
    }
    // 0x80212F88: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x80212F8C: lhu         $t8, 0x4A($s3)
    ctx->r24 = MEM_HU(ctx->r19, 0X4A);
    // 0x80212F90: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x80212F94: or          $t0, $t9, $s2
    ctx->r8 = ctx->r25 | ctx->r18;
    // 0x80212F98: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x80212F9C: lbu         $t1, 0x11($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X11);
    // 0x80212FA0: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x80212FA4: beq         $t2, $zero, L_80212FD8
    if (ctx->r10 == 0) {
        // 0x80212FA8: nop
    
            goto L_80212FD8;
    }
    // 0x80212FA8: nop

    // 0x80212FAC: lw          $t3, 0x40($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X40);
    // 0x80212FB0: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80212FB4: lwc1        $f14, 0x6C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80212FB8: lwc1        $f10, 0x2C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80212FBC: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x80212FC0: jal         0x80216BD8
    // 0x80212FC4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80216BD8(rdram, ctx);
        goto after_3;
    // 0x80212FC4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80212FC8: bltzl       $v0, L_80212FE4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80212FCC: lw          $v0, 0x40($s3)
        ctx->r2 = MEM_W(ctx->r19, 0X40);
            goto L_80212FE4;
    }
    goto skip_2;
    // 0x80212FCC: lw          $v0, 0x40($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X40);
    skip_2:
    // 0x80212FD0: b           L_80212FFC
    // 0x80212FD4: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
        goto L_80212FFC;
    // 0x80212FD4: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
L_80212FD8:
    // 0x80212FD8: b           L_80212FFC
    // 0x80212FDC: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
        goto L_80212FFC;
    // 0x80212FDC: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
L_80212FE0:
    // 0x80212FE0: lw          $v0, 0x40($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X40);
L_80212FE4:
    // 0x80212FE4: lhu         $v1, 0x14($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X14);
    // 0x80212FE8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80212FEC:
    // 0x80212FEC: sltu        $at, $s2, $v1
    ctx->r1 = ctx->r18 < ctx->r3 ? 1 : 0;
    // 0x80212FF0: bnel        $at, $zero, L_80212F24
    if (ctx->r1 != 0) {
        // 0x80212FF4: lw          $t8, 0x10($v0)
        ctx->r24 = MEM_W(ctx->r2, 0X10);
            goto L_80212F24;
    }
    goto skip_3;
    // 0x80212FF4: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    skip_3:
L_80212FF8:
    // 0x80212FF8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80212FFC:
    // 0x80212FFC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80213000: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80213004: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80213008: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x8021300C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80213010: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80213014: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80213018: jr          $ra
    // 0x8021301C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8021301C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_80234D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234D04: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80234D08: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80234D0C: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80234D10: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x80234D14: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80234D18: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80234D1C: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x80234D20: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80234D24: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x80234D28: jr          $ra
    // 0x80234D2C: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
    return;
    // 0x80234D2C: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_8023F1D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F1D0: div         $zero, $a1, $a2
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r6)));
    // 0x8023F1D4: mflo        $v0
    ctx->r2 = lo;
    // 0x8023F1D8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8023F1DC: bne         $a2, $zero, L_8023F1E8
    if (ctx->r6 != 0) {
        // 0x8023F1E0: nop
    
            goto L_8023F1E8;
    }
    // 0x8023F1E0: nop

    // 0x8023F1E4: break       7
    do_break(2149839332);
L_8023F1E8:
    // 0x8023F1E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023F1EC: bne         $a2, $at, L_8023F200
    if (ctx->r6 != ctx->r1) {
        // 0x8023F1F0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023F200;
    }
    // 0x8023F1F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023F1F4: bne         $a1, $at, L_8023F200
    if (ctx->r5 != ctx->r1) {
        // 0x8023F1F8: nop
    
            goto L_8023F200;
    }
    // 0x8023F1F8: nop

    // 0x8023F1FC: break       6
    do_break(2149839356);
L_8023F200:
    // 0x8023F200: multu       $a2, $v0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023F204: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x8023F208: addiu       $t7, $sp, 0x0
    ctx->r15 = ADD32(ctx->r29, 0X0);
    // 0x8023F20C: mflo        $t6
    ctx->r14 = lo;
    // 0x8023F210: subu        $v1, $a1, $t6
    ctx->r3 = SUB32(ctx->r5, ctx->r14);
    // 0x8023F214: bgez        $v0, L_8023F238
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023F218: sw          $v1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r3;
            goto L_8023F238;
    }
    // 0x8023F218: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x8023F21C: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x8023F220: blez        $v1, L_8023F238
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8023F224: sw          $v1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r3;
            goto L_8023F238;
    }
    // 0x8023F224: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x8023F228: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023F22C: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x8023F230: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x8023F234: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
L_8023F238:
    // 0x8023F238: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8023F23C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8023F240: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x8023F244: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x8023F248: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8023F24C: jr          $ra
    // 0x8023F250: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    return;
    // 0x8023F250: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
;}
RECOMP_FUNC void func_802164C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802164C8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802164CC: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x802164D0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802164D4: lwc1        $f8, 0x10($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10);
    // 0x802164D8: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802164DC: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802164E0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802164E4: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x802164E8: sub.s       $f0, $f12, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x802164EC: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x802164F0: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802164F4: sub.s       $f2, $f14, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x802164F8: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802164FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80216500: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80216504: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80216508: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8021650C: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80216510: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80216514: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x80216518: nop

    // 0x8021651C: bc1f        L_8021652C
    if (!c1cs) {
        // 0x80216520: nop
    
            goto L_8021652C;
    }
    // 0x80216520: nop

    // 0x80216524: jr          $ra
    // 0x80216528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80216528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021652C:
    // 0x8021652C: jr          $ra
    // 0x80216530: nop

    return;
    // 0x80216530: nop

;}
RECOMP_FUNC void func_80242230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80242230: jr          $ra
    // 0x80242234: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    return;
    // 0x80242234: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80234870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234870: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80234874: jr          $ra
    // 0x80234878: sw          $zero, 0x3948($at)
    MEM_W(0X3948, ctx->r1) = 0;
    return;
    // 0x80234878: sw          $zero, 0x3948($at)
    MEM_W(0X3948, ctx->r1) = 0;
;}
RECOMP_FUNC void func_802016EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802016EC: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x802016F0: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x802016F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802016F8: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x802016FC: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201704: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80201708: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8020170C: bne         $at, $zero, L_80201744
    if (ctx->r1 != 0) {
        // 0x80201710: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_80201744;
    }
    // 0x80201710: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x80201714: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201718: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8020171C: addiu       $a1, $a1, 0x1D6C
    ctx->r5 = ADD32(ctx->r5, 0X1D6C);
    // 0x80201720: addiu       $a0, $a0, 0x1D54
    ctx->r4 = ADD32(ctx->r4, 0X1D54);
    // 0x80201724: addiu       $a2, $zero, 0x14A
    ctx->r6 = ADD32(0, 0X14A);
    // 0x80201728: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8020172C: jal         0x80231C9C
    // 0x80201730: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    func_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80201730: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    after_0:
    // 0x80201734: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80201738: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x8020173C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80201740: lbu         $a3, 0x23($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X23);
L_80201744:
    // 0x80201744: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201748: beq         $at, $zero, L_8020177C
    if (ctx->r1 == 0) {
        // 0x8020174C: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_8020177C;
    }
    // 0x8020174C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80201750: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x80201754: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x80201758: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8020175C: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x80201760: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80201764: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80201768: lw          $t6, 0x6DE4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6DE4);
    // 0x8020176C: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x80201770: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80201774: jal         0x80228DE0
    // 0x80201778: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80201778: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    after_1:
L_8020177C:
    // 0x8020177C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201780: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80201784: jr          $ra
    // 0x80201788: nop

    return;
    // 0x80201788: nop

;}
RECOMP_FUNC void func_80222818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222818: beq         $a0, $zero, L_8022288C
    if (ctx->r4 == 0) {
        // 0x8022281C: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_8022288C;
    }
    // 0x8022281C: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80222820: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80222824: addiu       $a1, $a1, 0x3B90
    ctx->r5 = ADD32(ctx->r5, 0X3B90);
    // 0x80222828: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022282C: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x80222830: lui         $t8, 0xC18
    ctx->r24 = S32(0XC18 << 16);
    // 0x80222834: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80222838: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8022283C: ori         $t8, $t8, 0x2078
    ctx->r24 = ctx->r24 | 0X2078;
    // 0x80222840: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x80222844: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80222848: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8022284C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222850: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80222854: lui         $t0, 0xB700
    ctx->r8 = S32(0XB700 << 16);
    // 0x80222858: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8022285C: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80222860: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x80222864: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80222868: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x8022286C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x80222870: addiu       $a3, $a3, 0x4348
    ctx->r7 = ADD32(ctx->r7, 0X4348);
    // 0x80222874: sb          $a2, -0x17A4($at)
    MEM_B(-0X17A4, ctx->r1) = ctx->r6;
    // 0x80222878: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x8022287C: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x80222880: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x80222884: jr          $ra
    // 0x80222888: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    return;
    // 0x80222888: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
L_8022288C:
    // 0x8022288C: addiu       $a1, $a1, 0x3B90
    ctx->r5 = ADD32(ctx->r5, 0X3B90);
    // 0x80222890: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222894: lui         $t4, 0xB900
    ctx->r12 = S32(0XB900 << 16);
    // 0x80222898: lui         $t5, 0xC18
    ctx->r13 = S32(0XC18 << 16);
    // 0x8022289C: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x802228A0: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x802228A4: ori         $t5, $t5, 0x2048
    ctx->r13 = ctx->r13 | 0X2048;
    // 0x802228A8: ori         $t4, $t4, 0x31D
    ctx->r12 = ctx->r12 | 0X31D;
    // 0x802228AC: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x802228B0: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x802228B4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802228B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802228BC: lui         $t7, 0xB600
    ctx->r15 = S32(0XB600 << 16);
    // 0x802228C0: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802228C4: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802228C8: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x802228CC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802228D0: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x802228D4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802228D8: addiu       $a3, $a3, 0x4348
    ctx->r7 = ADD32(ctx->r7, 0X4348);
    // 0x802228DC: sb          $zero, -0x17A4($at)
    MEM_B(-0X17A4, ctx->r1) = 0;
    // 0x802228E0: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x802228E4: lui         $at, 0xFFDF
    ctx->r1 = S32(0XFFDF << 16);
    // 0x802228E8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802228EC: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x802228F0: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x802228F4: jr          $ra
    // 0x802228F8: nop

    return;
    // 0x802228F8: nop

;}
RECOMP_FUNC void func_80242300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80242300: lui         $t6, 0xA450
    ctx->r14 = S32(0XA450 << 16);
    // 0x80242304: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    // 0x80242308: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8024230C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80242310: and         $t7, $a0, $at
    ctx->r15 = ctx->r4 & ctx->r1;
    // 0x80242314: beq         $t7, $zero, L_80242324
    if (ctx->r15 == 0) {
        // 0x80242318: nop
    
            goto L_80242324;
    }
    // 0x80242318: nop

    // 0x8024231C: b           L_80242328
    // 0x80242320: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80242328;
    // 0x80242320: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80242324:
    // 0x80242324: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80242328:
    // 0x80242328: jr          $ra
    // 0x8024232C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8024232C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80243240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80243240: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80243244: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80243248: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8024324C: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x80243250: sll         $t8, $s5, 16
    ctx->r24 = S32(ctx->r21 << 16);
    // 0x80243254: sra         $s5, $t8, 16
    ctx->r21 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80243258: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8024325C: blez        $s1, L_802432C8
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80243260: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802432C8;
    }
    // 0x80243260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80243264: lw          $t9, 0x30($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X30);
    // 0x80243268: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    // 0x8024326C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80243270: jalr        $t9
    // 0x80243274: lw          $a2, 0x34($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X34);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80243274: lw          $a2, 0x34($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X34);
    after_0:
    // 0x80243278: andi        $a2, $v0, 0x7
    ctx->r6 = ctx->r2 & 0X7;
    // 0x8024327C: addu        $s1, $s1, $a2
    ctx->r17 = ADD32(ctx->r17, ctx->r6);
    // 0x80243280: andi        $t6, $s3, 0xFFFF
    ctx->r14 = ctx->r19 & 0XFFFF;
    // 0x80243284: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80243288: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8024328C: andi        $t8, $s1, 0x7
    ctx->r24 = ctx->r17 & 0X7;
    // 0x80243290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80243294: subu        $t9, $s1, $t8
    ctx->r25 = SUB32(ctx->r17, ctx->r24);
    // 0x80243298: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x8024329C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x802432A0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x802432A4: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x802432A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802432AC: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x802432B0: subu        $t9, $v0, $a2
    ctx->r25 = SUB32(ctx->r2, ctx->r6);
    // 0x802432B4: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x802432B8: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x802432BC: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x802432C0: b           L_802432CC
    // 0x802432C4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_802432CC;
    // 0x802432C4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_802432C8:
    // 0x802432C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_802432CC:
    // 0x802432CC: andi        $t6, $s4, 0x2
    ctx->r14 = ctx->r20 & 0X2;
    // 0x802432D0: beq         $t6, $zero, L_802432F8
    if (ctx->r14 == 0) {
        // 0x802432D4: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_802432F8;
    }
    // 0x802432D4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802432D8: lui         $t7, 0xF00
    ctx->r15 = S32(0XF00 << 16);
    // 0x802432DC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802432E0: lw          $t8, 0x18($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X18);
    // 0x802432E4: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x802432E8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802432EC: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x802432F0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802432F4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_802432F8:
    // 0x802432F8: addu        $t6, $s3, $a2
    ctx->r14 = ADD32(ctx->r19, ctx->r6);
    // 0x802432FC: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80243300: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80243304: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80243308: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x8024330C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80243310: sll         $t7, $s6, 1
    ctx->r15 = S32(ctx->r22 << 1);
    // 0x80243314: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80243318: sll         $t6, $s5, 16
    ctx->r14 = S32(ctx->r21 << 16);
    // 0x8024331C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80243320: andi        $t7, $s4, 0xFF
    ctx->r15 = ctx->r20 & 0XFF;
    // 0x80243324: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80243328: sll         $t6, $t7, 16
    ctx->r14 = S32(ctx->r15 << 16);
    // 0x8024332C: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x80243330: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80243334: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x80243338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024333C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80243340: lw          $t9, 0x14($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X14);
    // 0x80243344: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80243348: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8024334C: and         $t7, $t9, $at
    ctx->r15 = ctx->r25 & ctx->r1;
    // 0x80243350: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x80243354: sw          $zero, 0x40($s2)
    MEM_W(0X40, ctx->r18) = 0;
    // 0x80243358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024335C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80243360: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80243364: jr          $ra
    // 0x80243368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80243368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80249528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249528: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8024952C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80249530: ldc1        $f6, 0x5A70($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X5A70);
    // 0x80249534: lh          $t6, 0x18($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X18);
    // 0x80249538: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x8024953C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80249540: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80249544: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80249548: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x8024954C: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x80249550: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80249554: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x80249558: bgezl       $a2, L_80249574
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8024955C: div.d       $f8, $f18, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f6.d);
            goto L_80249574;
    }
    goto skip_0;
    // 0x8024955C: div.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f6.d);
    skip_0:
    // 0x80249560: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80249564: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80249568: nop

    // 0x8024956C: add.d       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f6.d + ctx->f10.d;
    // 0x80249570: div.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f6.d);
L_80249574:
    // 0x80249574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80249578: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x8024957C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80249580: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80249584: nop

    // 0x80249588: cvt.w.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_D(ctx->f8.d);
    // 0x8024958C: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80249590: nop

    // 0x80249594: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80249598: beql        $v0, $zero, L_802495F4
    if (ctx->r2 == 0) {
        // 0x8024959C: mfc1        $v0, $f16
        ctx->r2 = (int32_t)ctx->f16.u32l;
            goto L_802495F4;
    }
    goto skip_1;
    // 0x8024959C: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    skip_1:
    // 0x802495A0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802495A4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802495A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802495AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802495B0: sub.d       $f16, $f8, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f16.d = ctx->f8.d - ctx->f16.d;
    // 0x802495B4: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x802495B8: nop

    // 0x802495BC: cvt.w.d     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_D(ctx->f16.d);
    // 0x802495C0: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x802495C4: nop

    // 0x802495C8: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x802495CC: bnel        $v0, $zero, L_802495E8
    if (ctx->r2 != 0) {
        // 0x802495D0: ctc1        $t7, $FpcCsr
        set_cop1_cs(ctx->r15);
            goto L_802495E8;
    }
    goto skip_2;
    // 0x802495D0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    skip_2:
    // 0x802495D4: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x802495D8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802495DC: jr          $ra
    // 0x802495E0: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    return;
    // 0x802495E0: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    // 0x802495E4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
L_802495E8:
    // 0x802495E8: jr          $ra
    // 0x802495EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x802495EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802495F0: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
L_802495F4:
    // 0x802495F4: nop

    // 0x802495F8: bltzl       $v0, L_802495E8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802495FC: ctc1        $t7, $FpcCsr
        set_cop1_cs(ctx->r15);
            goto L_802495E8;
    }
    goto skip_3;
    // 0x802495FC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    skip_3:
    // 0x80249600: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80249604: jr          $ra
    // 0x80249608: nop

    return;
    // 0x80249608: nop

;}
RECOMP_FUNC void func_802000DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802000DC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802000E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802000E4: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x802000E8: jal         0x8022970C
    // 0x802000EC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802000EC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x802000F0: lhu         $t6, 0x62($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X62);
    // 0x802000F4: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x802000F8: addiu       $t8, $t8, 0x6D70
    ctx->r24 = ADD32(ctx->r24, 0X6D70);
    // 0x802000FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80200100: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80200104: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80200108: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x8020010C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80200110: jal         0x80228DE0
    // 0x80200114: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80200114: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x80200118: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8020011C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80200120: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80200124: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80200128: sw          $t9, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r25;
    // 0x8020012C: swc1        $f0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f0.u32l;
    // 0x80200130: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x80200134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80200138: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8020013C: jr          $ra
    // 0x80200140: nop

    return;
    // 0x80200140: nop

;}
RECOMP_FUNC void func_80234C78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234C78: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80234C7C: lwc1        $f18, 0x8($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80234C80: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80234C84: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80234C88: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x80234C8C: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80234C90: lwc1        $f14, 0x0($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80234C94: mul.s       $f6, $f12, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x80234C98: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80234C9C: mul.s       $f10, $f0, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80234CA0: nop

    // 0x80234CA4: mul.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x80234CA8: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x80234CAC: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80234CB0: mul.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80234CB4: nop

    // 0x80234CB8: mul.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80234CBC: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x80234CC0: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
    // 0x80234CC4: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80234CC8: jr          $ra
    // 0x80234CCC: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x80234CCC: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_8022BB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022BB00: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8022BB04: ori         $at, $at, 0x5800
    ctx->r1 = ctx->r1 | 0X5800;
    // 0x8022BB08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BB0C: sltu        $at, $a0, $at
    ctx->r1 = ctx->r4 < ctx->r1 ? 1 : 0;
    // 0x8022BB10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BB14: bne         $at, $zero, L_8022BB30
    if (ctx->r1 != 0) {
        // 0x8022BB18: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_8022BB30;
    }
    // 0x8022BB18: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8022BB1C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022BB20: jal         0x80231A24
    // 0x8022BB24: addiu       $a0, $a0, 0x4138
    ctx->r4 = ADD32(ctx->r4, 0X4138);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022BB24: addiu       $a0, $a0, 0x4138
    ctx->r4 = ADD32(ctx->r4, 0X4138);
    after_0:
    // 0x8022BB28: b           L_8022BB9C
    // 0x8022BB2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8022BB9C;
    // 0x8022BB2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022BB30:
    // 0x8022BB30: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x8022BB34: addiu       $v1, $v1, 0x5F70
    ctx->r3 = ADD32(ctx->r3, 0X5F70);
    // 0x8022BB38: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8022BB3C: lui         $v0, 0x803D
    ctx->r2 = S32(0X803D << 16);
    // 0x8022BB40: ori         $v0, $v0, 0xA800
    ctx->r2 = ctx->r2 | 0XA800;
    // 0x8022BB44: bne         $t6, $zero, L_8022BB54
    if (ctx->r14 != 0) {
        // 0x8022BB48: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8022BB54;
    }
    // 0x8022BB48: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8022BB4C: b           L_8022BB9C
    // 0x8022BB50: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_8022BB9C;
    // 0x8022BB50: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_8022BB54:
    // 0x8022BB54: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x8022BB58: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8022BB5C: ori         $v0, $v0, 0xA800
    ctx->r2 = ctx->r2 | 0XA800;
    // 0x8022BB60: bne         $t8, $zero, L_8022BB70
    if (ctx->r24 != 0) {
        // 0x8022BB64: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_8022BB70;
    }
    // 0x8022BB64: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8022BB68: b           L_8022BB9C
    // 0x8022BB6C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
        goto L_8022BB9C;
    // 0x8022BB6C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
L_8022BB70:
    // 0x8022BB70: lw          $t0, 0x8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X8);
    // 0x8022BB74: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8022BB78: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8022BB7C: bne         $t0, $zero, L_8022BB8C
    if (ctx->r8 != 0) {
        // 0x8022BB80: nop
    
            goto L_8022BB8C;
    }
    // 0x8022BB80: nop

    // 0x8022BB84: b           L_8022BB9C
    // 0x8022BB88: sw          $t1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r9;
        goto L_8022BB9C;
    // 0x8022BB88: sw          $t1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r9;
L_8022BB8C:
    // 0x8022BB8C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022BB90: jal         0x80231A24
    // 0x8022BB94: addiu       $a0, $a0, 0x4168
    ctx->r4 = ADD32(ctx->r4, 0X4168);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022BB94: addiu       $a0, $a0, 0x4168
    ctx->r4 = ADD32(ctx->r4, 0X4168);
    after_1:
    // 0x8022BB98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022BB9C:
    // 0x8022BB9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BBA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022BBA4: jr          $ra
    // 0x8022BBA8: nop

    return;
    // 0x8022BBA8: nop

;}
RECOMP_FUNC void func_80228DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228DE0: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80228DE4: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x80228DE8: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80228DEC: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x80228DF0: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80228DF4: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x80228DF8: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80228DFC: swc1        $f10, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f10.u32l;
    // 0x80228E00: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80228E04: swc1        $f16, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f16.u32l;
    // 0x80228E08: lwc1        $f18, 0x14($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X14);
    // 0x80228E0C: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
    // 0x80228E10: lwc1        $f4, 0x18($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X18);
    // 0x80228E14: swc1        $f4, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f4.u32l;
    // 0x80228E18: lwc1        $f6, 0x1C($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x80228E1C: swc1        $f6, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f6.u32l;
    // 0x80228E20: lwc1        $f8, 0x20($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X20);
    // 0x80228E24: swc1        $f8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f8.u32l;
    // 0x80228E28: lwc1        $f10, 0x24($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X24);
    // 0x80228E2C: swc1        $f10, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f10.u32l;
    // 0x80228E30: lwc1        $f16, 0x28($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80228E34: swc1        $f16, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f16.u32l;
    // 0x80228E38: lwc1        $f18, 0x2C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x80228E3C: swc1        $f18, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f18.u32l;
    // 0x80228E40: lwc1        $f4, 0x30($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X30);
    // 0x80228E44: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x80228E48: lwc1        $f6, 0x34($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X34);
    // 0x80228E4C: swc1        $f6, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f6.u32l;
    // 0x80228E50: lwc1        $f8, 0x38($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X38);
    // 0x80228E54: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    // 0x80228E58: lwc1        $f10, 0x3C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x80228E5C: jr          $ra
    // 0x80228E60: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
    return;
    // 0x80228E60: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_80247AEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247AEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80247AF0: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80247AF4: addiu       $t6, $t6, 0x5F80
    ctx->r14 = ADD32(ctx->r14, 0X5F80);
    // 0x80247AF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80247AFC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80247B00: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80247B04: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80247B08: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80247B0C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80247B10:
    // 0x80247B10: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80247B14: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80247B18: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80247B1C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80247B20: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80247B24: sw          $zero, 0x5F80($at)
    MEM_W(0X5F80, ctx->r1) = 0;
    // 0x80247B28: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80247B2C: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x80247B30: bne         $at, $zero, L_80247B10
    if (ctx->r1 != 0) {
        // 0x80247B34: sw          $t0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r8;
            goto L_80247B10;
    }
    // 0x80247B34: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80247B38: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x80247B3C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80247B40: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80247B44: addiu       $t2, $t2, 0x5F80
    ctx->r10 = ADD32(ctx->r10, 0X5F80);
    // 0x80247B48: sw          $t1, 0x5FBC($at)
    MEM_W(0X5FBC, ctx->r1) = ctx->r9;
    // 0x80247B4C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x80247B50: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80247B54:
    // 0x80247B54: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80247B58: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
    // 0x80247B5C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80247B60: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80247B64: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80247B68: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x80247B6C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80247B70: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80247B74: bne         $at, $zero, L_80247B54
    if (ctx->r1 != 0) {
        // 0x80247B78: sw          $t5, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r13;
            goto L_80247B54;
    }
    // 0x80247B78: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80247B7C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80247B80: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80247B84: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80247B88: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80247B8C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80247B90: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80247B94: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80247B98: sb          $t8, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r24;
    // 0x80247B9C: sb          $t9, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r25;
    // 0x80247BA0: sb          $t0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r8;
    // 0x80247BA4: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
    // 0x80247BA8: sb          $t1, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r9;
    // 0x80247BAC: sb          $t2, 0x21($sp)
    MEM_B(0X21, ctx->r29) = ctx->r10;
    // 0x80247BB0: sb          $t3, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r11;
    // 0x80247BB4: sb          $t4, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r12;
    // 0x80247BB8: addiu       $t6, $sp, 0x1C
    ctx->r14 = ADD32(ctx->r29, 0X1C);
    // 0x80247BBC: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80247BC0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80247BC4: addiu       $t2, $zero, 0xFE
    ctx->r10 = ADD32(0, 0XFE);
    // 0x80247BC8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80247BCC: swl         $at, 0x0($t5)
    do_swl(rdram, 0X0, ctx->r13, ctx->r1);
    // 0x80247BD0: swr         $at, 0x3($t5)
    do_swr(rdram, 0X3, ctx->r13, ctx->r1);
    // 0x80247BD4: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80247BD8: addiu       $a1, $a1, 0x5F80
    ctx->r5 = ADD32(ctx->r5, 0X5F80);
    // 0x80247BDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80247BE0: swl         $t9, 0x4($t5)
    do_swl(rdram, 0X4, ctx->r13, ctx->r25);
    // 0x80247BE4: swr         $t9, 0x7($t5)
    do_swr(rdram, 0X7, ctx->r13, ctx->r25);
    // 0x80247BE8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80247BEC: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80247BF0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80247BF4: jal         0x802465B0
    // 0x80247BF8: sb          $t2, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r10;
    func_802465B0(rdram, ctx);
        goto after_0;
    // 0x80247BF8: sb          $t2, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r10;
    after_0:
    // 0x80247BFC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80247C00: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80247C04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80247C08: jal         0x802374B0
    // 0x80247C0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_1;
    // 0x80247C0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80247C10: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x80247C14: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80247C18: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80247C1C: sb          $t3, 0x5EB0($at)
    MEM_B(0X5EB0, ctx->r1) = ctx->r11;
    // 0x80247C20: addiu       $a1, $a1, 0x5F80
    ctx->r5 = ADD32(ctx->r5, 0X5F80);
    // 0x80247C24: jal         0x802465B0
    // 0x80247C28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802465B0(rdram, ctx);
        goto after_2;
    // 0x80247C28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80247C2C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80247C30: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80247C34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80247C38: jal         0x802374B0
    // 0x80247C3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_3;
    // 0x80247C3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80247C40: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80247C44: beq         $t4, $zero, L_80247C54
    if (ctx->r12 == 0) {
        // 0x80247C48: nop
    
            goto L_80247C54;
    }
    // 0x80247C48: nop

    // 0x80247C4C: b           L_80247D00
    // 0x80247C50: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
        goto L_80247D00;
    // 0x80247C50: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_80247C54:
    // 0x80247C54: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80247C58: addiu       $t8, $t8, 0x5F80
    ctx->r24 = ADD32(ctx->r24, 0X5F80);
    // 0x80247C5C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80247C60: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80247C64:
    // 0x80247C64: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80247C68: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x80247C6C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80247C70: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80247C74: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80247C78: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x80247C7C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80247C80: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80247C84: bne         $at, $zero, L_80247C64
    if (ctx->r1 != 0) {
        // 0x80247C88: sw          $t6, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r14;
            goto L_80247C64;
    }
    // 0x80247C88: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80247C8C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80247C90: addiu       $t2, $sp, 0x1C
    ctx->r10 = ADD32(ctx->r29, 0X1C);
    // 0x80247C94: lwl         $at, 0x0($t1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r9, 0X0);
    // 0x80247C98: lwr         $at, 0x3($t1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r9, 0X3);
    // 0x80247C9C: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x80247CA0: lwl         $t4, 0x4($t1)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r9, 0X4);
    // 0x80247CA4: lwr         $t4, 0x7($t1)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r9, 0X7);
    // 0x80247CA8: sw          $t4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r12;
    // 0x80247CAC: lbu         $t8, 0x1E($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1E);
    // 0x80247CB0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80247CB4: andi        $t7, $t8, 0xC0
    ctx->r15 = ctx->r24 & 0XC0;
    // 0x80247CB8: sra         $t5, $t7, 4
    ctx->r13 = S32(SIGNED(ctx->r15) >> 4);
    // 0x80247CBC: sb          $t5, 0x3($t6)
    MEM_B(0X3, ctx->r14) = ctx->r13;
    // 0x80247CC0: lbu         $t9, 0x21($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X21);
    // 0x80247CC4: lbu         $t3, 0x20($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X20);
    // 0x80247CC8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80247CCC: sll         $t0, $t9, 8
    ctx->r8 = S32(ctx->r25 << 8);
    // 0x80247CD0: or          $t2, $t0, $t3
    ctx->r10 = ctx->r8 | ctx->r11;
    // 0x80247CD4: sh          $t2, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r10;
    // 0x80247CD8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80247CDC: lbu         $t4, 0x22($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X22);
    // 0x80247CE0: sb          $t4, 0x2($t8)
    MEM_B(0X2, ctx->r24) = ctx->r12;
    // 0x80247CE4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80247CE8: lbu         $t5, 0x3($t7)
    ctx->r13 = MEM_BU(ctx->r15, 0X3);
    // 0x80247CEC: beq         $t5, $zero, L_80247CFC
    if (ctx->r13 == 0) {
        // 0x80247CF0: nop
    
            goto L_80247CFC;
    }
    // 0x80247CF0: nop

    // 0x80247CF4: b           L_80247D00
    // 0x80247CF8: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
        goto L_80247D00;
    // 0x80247CF8: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_80247CFC:
    // 0x80247CFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80247D00:
    // 0x80247D00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80247D04: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80247D08: jr          $ra
    // 0x80247D0C: nop

    return;
    // 0x80247D0C: nop

;}
RECOMP_FUNC void func_80214CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80214CE0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80214CE4: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80214CE8: lhu         $v0, 0xBE6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBE6);
    // 0x80214CEC: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x80214CF0: mtc1        $a2, $f24
    ctx->f24.u32l = ctx->r6;
    // 0x80214CF4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80214CF8: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x80214CFC: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x80214D00: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x80214D04: mov.s       $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.fl = ctx->f14.fl;
    // 0x80214D08: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80214D0C: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x80214D10: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x80214D14: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x80214D18: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80214D1C: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x80214D20: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80214D24: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80214D28: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80214D2C: blez        $v0, L_80214E3C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80214D30: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80214E3C;
    }
    // 0x80214D30: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80214D34: lui         $fp, 0x8025
    ctx->r30 = S32(0X8025 << 16);
    // 0x80214D38: lui         $s7, 0x8026
    ctx->r23 = S32(0X8026 << 16);
    // 0x80214D3C: lui         $s5, 0x8026
    ctx->r21 = S32(0X8026 << 16);
    // 0x80214D40: lui         $s3, 0x8026
    ctx->r19 = S32(0X8026 << 16);
    // 0x80214D44: addiu       $s3, $s3, -0x3C6C
    ctx->r19 = ADD32(ctx->r19, -0X3C6C);
    // 0x80214D48: addiu       $s5, $s5, -0x3C20
    ctx->r21 = ADD32(ctx->r21, -0X3C20);
    // 0x80214D4C: addiu       $s7, $s7, -0x3C1C
    ctx->r23 = ADD32(ctx->r23, -0X3C1C);
    // 0x80214D50: addiu       $fp, $fp, -0x18F0
    ctx->r30 = ADD32(ctx->r30, -0X18F0);
    // 0x80214D54: ori         $s6, $zero, 0xFFFF
    ctx->r22 = 0 | 0XFFFF;
    // 0x80214D58: addiu       $s4, $zero, 0x24
    ctx->r20 = ADD32(0, 0X24);
L_80214D5C:
    // 0x80214D5C: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80214D60: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80214D64: mflo        $t6
    ctx->r14 = lo;
    // 0x80214D68: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x80214D6C: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x80214D70: beql        $s6, $v1, L_80214E2C
    if (ctx->r22 == ctx->r3) {
        // 0x80214D74: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80214E2C;
    }
    goto skip_0;
    // 0x80214D74: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x80214D78: lbu         $t8, 0x8($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X8);
    // 0x80214D7C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80214D80: beql        $t9, $zero, L_80214E2C
    if (ctx->r25 == 0) {
        // 0x80214D84: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80214E2C;
    }
    goto skip_1;
    // 0x80214D84: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x80214D88: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x80214D8C: lw          $t4, 0x0($fp)
    ctx->r12 = MEM_W(ctx->r30, 0X0);
    // 0x80214D90: lw          $t3, 0x0($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X0);
    // 0x80214D94: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x80214D98: lw          $t5, 0x1C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X1C);
    // 0x80214D9C: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x80214DA0: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x80214DA4: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x80214DA8: lwc1        $f4, 0x34($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X34);
    // 0x80214DAC: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80214DB0: lw          $s2, 0x0($t7)
    ctx->r18 = MEM_W(ctx->r15, 0X0);
    // 0x80214DB4: lw          $a3, 0x30($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X30);
    // 0x80214DB8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80214DBC: lwc1        $f6, 0x38($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X38);
    // 0x80214DC0: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80214DC4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80214DC8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80214DCC: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80214DD0: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    // 0x80214DD4: jal         0x80216464
    // 0x80214DD8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_80216464(rdram, ctx);
        goto after_0;
    // 0x80214DD8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80214DDC: beq         $v0, $zero, L_80214E20
    if (ctx->r2 == 0) {
        // 0x80214DE0: or          $a3, $s0, $zero
        ctx->r7 = ctx->r16 | 0;
            goto L_80214E20;
    }
    // 0x80214DE0: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x80214DE4: lbu         $t8, 0x11($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X11);
    // 0x80214DE8: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80214DEC: bnel        $t9, $zero, L_80214E00
    if (ctx->r25 != 0) {
        // 0x80214DF0: mfc1        $a2, $f24
        ctx->r6 = (int32_t)ctx->f24.u32l;
            goto L_80214E00;
    }
    goto skip_2;
    // 0x80214DF0: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    skip_2:
    // 0x80214DF4: b           L_80214E40
    // 0x80214DF8: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_80214E40;
    // 0x80214DF8: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80214DFC: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
L_80214E00:
    // 0x80214E00: sw          $s1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r17;
    // 0x80214E04: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80214E08: jal         0x80216EFC
    // 0x80214E0C: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    func_80216EFC(rdram, ctx);
        goto after_1;
    // 0x80214E0C: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    after_1:
    // 0x80214E10: bltz        $v0, L_80214E20
    if (SIGNED(ctx->r2) < 0) {
        // 0x80214E14: nop
    
            goto L_80214E20;
    }
    // 0x80214E14: nop

    // 0x80214E18: b           L_80214E40
    // 0x80214E1C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
        goto L_80214E40;
    // 0x80214E1C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
L_80214E20:
    // 0x80214E20: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80214E24: lhu         $v0, 0xBE6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBE6);
    // 0x80214E28: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80214E2C:
    // 0x80214E2C: andi        $t0, $s1, 0xFFFF
    ctx->r8 = ctx->r17 & 0XFFFF;
    // 0x80214E30: slt         $at, $t0, $v0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80214E34: bne         $at, $zero, L_80214D5C
    if (ctx->r1 != 0) {
        // 0x80214E38: or          $s1, $t0, $zero
        ctx->r17 = ctx->r8 | 0;
            goto L_80214D5C;
    }
    // 0x80214E38: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
L_80214E3C:
    // 0x80214E3C: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_80214E40:
    // 0x80214E40: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80214E44: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x80214E48: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x80214E4C: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x80214E50: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80214E54: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80214E58: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80214E5C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80214E60: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80214E64: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80214E68: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x80214E6C: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x80214E70: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x80214E74: jr          $ra
    // 0x80214E78: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80214E78: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8022D04C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022D04C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8022D050: lw          $t6, -0x78C8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X78C8);
    // 0x8022D054: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8022D058: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8022D05C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8022D060: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x8022D064: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x8022D068: lw          $t1, -0x78B8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X78B8);
    // 0x8022D06C: mfhi        $t8
    ctx->r24 = hi;
    // 0x8022D070: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8022D074: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022D078: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x8022D07C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8022D080: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022D084: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x8022D088: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x8022D08C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8022D090: beq         $t1, $zero, L_8022D3D8
    if (ctx->r9 == 0) {
        // 0x8022D094: ldc1        $f20, -0x7910($at)
        CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, -0X7910);
            goto L_8022D3D8;
    }
    // 0x8022D094: ldc1        $f20, -0x7910($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, -0X7910);
    // 0x8022D098: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D09C: jal         0x80231A24
    // 0x8022D0A0: addiu       $a0, $a0, 0x45FC
    ctx->r4 = ADD32(ctx->r4, 0X45FC);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022D0A0: addiu       $a0, $a0, 0x45FC
    ctx->r4 = ADD32(ctx->r4, 0X45FC);
    after_0:
    // 0x8022D0A4: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8022D0A8: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x8022D0AC: addiu       $t4, $t4, -0x7940
    ctx->r12 = ADD32(ctx->r12, -0X7940);
    // 0x8022D0B0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8022D0B4: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x8022D0B8: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x8022D0BC: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x8022D0C0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8022D0C4: blez        $a2, L_8022D220
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8022D0C8: sll         $t5, $t2, 4
        ctx->r13 = S32(ctx->r10 << 4);
            goto L_8022D220;
    }
    // 0x8022D0C8: sll         $t5, $t2, 4
    ctx->r13 = S32(ctx->r10 << 4);
    // 0x8022D0CC: subu        $t5, $t5, $t2
    ctx->r13 = SUB32(ctx->r13, ctx->r10);
    // 0x8022D0D0: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8022D0D4: addiu       $t6, $t6, 0x6140
    ctx->r14 = ADD32(ctx->r14, 0X6140);
    // 0x8022D0D8: sll         $t5, $t5, 6
    ctx->r13 = S32(ctx->r13 << 6);
    // 0x8022D0DC: addu        $s0, $t5, $t6
    ctx->r16 = ADD32(ctx->r13, ctx->r14);
    // 0x8022D0E0: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x8022D0E4: ldc1        $f4, 0x0($s0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r16, 0X0);
L_8022D0E8:
    // 0x8022D0E8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D0EC: addiu       $s1, $t0, 0x1
    ctx->r17 = ADD32(ctx->r8, 0X1);
    // 0x8022D0F0: sub.d       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f6.d = ctx->f4.d - ctx->f20.d;
    // 0x8022D0F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022D0F8: addiu       $a0, $a0, 0x461C
    ctx->r4 = ADD32(ctx->r4, 0X461C);
    // 0x8022D0FC: jal         0x80231A24
    // 0x8022D100: sdc1        $f6, 0x10($sp)
    CHECK_FR(ctx, 6);
    SD(ctx->f6.u64, 0X10, ctx->r29);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022D100: sdc1        $f6, 0x10($sp)
    CHECK_FR(ctx, 6);
    SD(ctx->f6.u64, 0X10, ctx->r29);
    after_1:
    // 0x8022D104: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x8022D108: addiu       $t7, $a1, -0x29
    ctx->r15 = ADD32(ctx->r5, -0X29);
    // 0x8022D10C: sltiu       $at, $t7, 0xD
    ctx->r1 = ctx->r15 < 0XD ? 1 : 0;
    // 0x8022D110: beq         $at, $zero, L_8022D1F4
    if (ctx->r1 == 0) {
        // 0x8022D114: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8022D1F4;
    }
    // 0x8022D114: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8022D118: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022D11C: addu        $at, $at, $t7
    gpr jr_addend_8022D124 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8022D120: lw          $t7, 0x4810($at)
    ctx->r15 = ADD32(ctx->r1, 0X4810);
    // 0x8022D124: jr          $t7
    // 0x8022D128: nop

    switch (jr_addend_8022D124 >> 2) {
        case 0: goto L_8022D17C; break;
        case 1: goto L_8022D12C; break;
        case 2: goto L_8022D140; break;
        case 3: goto L_8022D190; break;
        case 4: goto L_8022D1F4; break;
        case 5: goto L_8022D154; break;
        case 6: goto L_8022D1A4; break;
        case 7: goto L_8022D1F4; break;
        case 8: goto L_8022D1F4; break;
        case 9: goto L_8022D168; break;
        case 10: goto L_8022D1B8; break;
        case 11: goto L_8022D1CC; break;
        case 12: goto L_8022D1E0; break;
        default: switch_error(__func__, 0x8022D124, 0x80254810);
    }
    // 0x8022D128: nop

L_8022D12C:
    // 0x8022D12C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D130: jal         0x80231A24
    // 0x8022D134: addiu       $a0, $a0, 0x462C
    ctx->r4 = ADD32(ctx->r4, 0X462C);
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x8022D134: addiu       $a0, $a0, 0x462C
    ctx->r4 = ADD32(ctx->r4, 0X462C);
    after_2:
    // 0x8022D138: b           L_8022D204
    // 0x8022D13C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
        goto L_8022D204;
    // 0x8022D13C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
L_8022D140:
    // 0x8022D140: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D144: jal         0x80231A24
    // 0x8022D148: addiu       $a0, $a0, 0x4638
    ctx->r4 = ADD32(ctx->r4, 0X4638);
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x8022D148: addiu       $a0, $a0, 0x4638
    ctx->r4 = ADD32(ctx->r4, 0X4638);
    after_3:
    // 0x8022D14C: b           L_8022D204
    // 0x8022D150: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
        goto L_8022D204;
    // 0x8022D150: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
L_8022D154:
    // 0x8022D154: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D158: jal         0x80231A24
    // 0x8022D15C: addiu       $a0, $a0, 0x4644
    ctx->r4 = ADD32(ctx->r4, 0X4644);
    func_80231A24(rdram, ctx);
        goto after_4;
    // 0x8022D15C: addiu       $a0, $a0, 0x4644
    ctx->r4 = ADD32(ctx->r4, 0X4644);
    after_4:
    // 0x8022D160: b           L_8022D204
    // 0x8022D164: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
        goto L_8022D204;
    // 0x8022D164: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
L_8022D168:
    // 0x8022D168: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D16C: jal         0x80231A24
    // 0x8022D170: addiu       $a0, $a0, 0x4650
    ctx->r4 = ADD32(ctx->r4, 0X4650);
    func_80231A24(rdram, ctx);
        goto after_5;
    // 0x8022D170: addiu       $a0, $a0, 0x4650
    ctx->r4 = ADD32(ctx->r4, 0X4650);
    after_5:
    // 0x8022D174: b           L_8022D204
    // 0x8022D178: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
        goto L_8022D204;
    // 0x8022D178: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
L_8022D17C:
    // 0x8022D17C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D180: jal         0x80231A24
    // 0x8022D184: addiu       $a0, $a0, 0x4660
    ctx->r4 = ADD32(ctx->r4, 0X4660);
    func_80231A24(rdram, ctx);
        goto after_6;
    // 0x8022D184: addiu       $a0, $a0, 0x4660
    ctx->r4 = ADD32(ctx->r4, 0X4660);
    after_6:
    // 0x8022D188: b           L_8022D204
    // 0x8022D18C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
        goto L_8022D204;
    // 0x8022D18C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
L_8022D190:
    // 0x8022D190: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D194: jal         0x80231A24
    // 0x8022D198: addiu       $a0, $a0, 0x4670
    ctx->r4 = ADD32(ctx->r4, 0X4670);
    func_80231A24(rdram, ctx);
        goto after_7;
    // 0x8022D198: addiu       $a0, $a0, 0x4670
    ctx->r4 = ADD32(ctx->r4, 0X4670);
    after_7:
    // 0x8022D19C: b           L_8022D204
    // 0x8022D1A0: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
        goto L_8022D204;
    // 0x8022D1A0: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
L_8022D1A4:
    // 0x8022D1A4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D1A8: jal         0x80231A24
    // 0x8022D1AC: addiu       $a0, $a0, 0x467C
    ctx->r4 = ADD32(ctx->r4, 0X467C);
    func_80231A24(rdram, ctx);
        goto after_8;
    // 0x8022D1AC: addiu       $a0, $a0, 0x467C
    ctx->r4 = ADD32(ctx->r4, 0X467C);
    after_8:
    // 0x8022D1B0: b           L_8022D204
    // 0x8022D1B4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
        goto L_8022D204;
    // 0x8022D1B4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
L_8022D1B8:
    // 0x8022D1B8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D1BC: jal         0x80231A24
    // 0x8022D1C0: addiu       $a0, $a0, 0x468C
    ctx->r4 = ADD32(ctx->r4, 0X468C);
    func_80231A24(rdram, ctx);
        goto after_9;
    // 0x8022D1C0: addiu       $a0, $a0, 0x468C
    ctx->r4 = ADD32(ctx->r4, 0X468C);
    after_9:
    // 0x8022D1C4: b           L_8022D204
    // 0x8022D1C8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
        goto L_8022D204;
    // 0x8022D1C8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
L_8022D1CC:
    // 0x8022D1CC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D1D0: jal         0x80231A24
    // 0x8022D1D4: addiu       $a0, $a0, 0x4694
    ctx->r4 = ADD32(ctx->r4, 0X4694);
    func_80231A24(rdram, ctx);
        goto after_10;
    // 0x8022D1D4: addiu       $a0, $a0, 0x4694
    ctx->r4 = ADD32(ctx->r4, 0X4694);
    after_10:
    // 0x8022D1D8: b           L_8022D204
    // 0x8022D1DC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
        goto L_8022D204;
    // 0x8022D1DC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
L_8022D1E0:
    // 0x8022D1E0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D1E4: jal         0x80231A24
    // 0x8022D1E8: addiu       $a0, $a0, 0x469C
    ctx->r4 = ADD32(ctx->r4, 0X469C);
    func_80231A24(rdram, ctx);
        goto after_11;
    // 0x8022D1E8: addiu       $a0, $a0, 0x469C
    ctx->r4 = ADD32(ctx->r4, 0X469C);
    after_11:
    // 0x8022D1EC: b           L_8022D204
    // 0x8022D1F0: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
        goto L_8022D204;
    // 0x8022D1F0: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
L_8022D1F4:
    // 0x8022D1F4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D1F8: jal         0x80231A24
    // 0x8022D1FC: addiu       $a0, $a0, 0x46A4
    ctx->r4 = ADD32(ctx->r4, 0X46A4);
    func_80231A24(rdram, ctx);
        goto after_12;
    // 0x8022D1FC: addiu       $a0, $a0, 0x46A4
    ctx->r4 = ADD32(ctx->r4, 0X46A4);
    after_12:
    // 0x8022D200: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
L_8022D204:
    // 0x8022D204: or          $t0, $s1, $zero
    ctx->r8 = ctx->r17 | 0;
    // 0x8022D208: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x8022D20C: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x8022D210: slt         $at, $s1, $a2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8022D214: bnel        $at, $zero, L_8022D0E8
    if (ctx->r1 != 0) {
        // 0x8022D218: ldc1        $f4, 0x0($s0)
        CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r16, 0X0);
            goto L_8022D0E8;
    }
    goto skip_0;
    // 0x8022D218: ldc1        $f4, 0x0($s0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r16, 0X0);
    skip_0:
    // 0x8022D21C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_8022D220:
    // 0x8022D220: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D224: addiu       $a0, $a0, 0x46B8
    ctx->r4 = ADD32(ctx->r4, 0X46B8);
    // 0x8022D228: jal         0x80231A24
    // 0x8022D22C: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    func_80231A24(rdram, ctx);
        goto after_13;
    // 0x8022D22C: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    after_13:
    // 0x8022D230: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8022D234: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x8022D238: addiu       $t1, $t1, -0x7928
    ctx->r9 = ADD32(ctx->r9, -0X7928);
    // 0x8022D23C: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x8022D240: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x8022D244: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x8022D248: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x8022D24C: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x8022D250: blez        $a2, L_8022D3D8
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8022D254: sll         $t2, $t4, 4
        ctx->r10 = S32(ctx->r12 << 4);
            goto L_8022D3D8;
    }
    // 0x8022D254: sll         $t2, $t4, 4
    ctx->r10 = S32(ctx->r12 << 4);
    // 0x8022D258: subu        $t2, $t2, $t4
    ctx->r10 = SUB32(ctx->r10, ctx->r12);
    // 0x8022D25C: lui         $t5, 0x8027
    ctx->r13 = S32(0X8027 << 16);
    // 0x8022D260: addiu       $t5, $t5, 0x7400
    ctx->r13 = ADD32(ctx->r13, 0X7400);
    // 0x8022D264: sll         $t2, $t2, 6
    ctx->r10 = S32(ctx->r10 << 6);
    // 0x8022D268: addu        $s0, $t2, $t5
    ctx->r16 = ADD32(ctx->r10, ctx->r13);
    // 0x8022D26C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
L_8022D270:
    // 0x8022D270: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D274: addiu       $a0, $a0, 0x46DC
    ctx->r4 = ADD32(ctx->r4, 0X46DC);
    // 0x8022D278: srl         $t6, $v1, 24
    ctx->r14 = S32(U32(ctx->r3) >> 24);
    // 0x8022D27C: andi        $v0, $t6, 0xFF
    ctx->r2 = ctx->r14 & 0XFF;
    // 0x8022D280: bne         $v0, $zero, L_8022D28C
    if (ctx->r2 != 0) {
        // 0x8022D284: srl         $t8, $v1, 16
        ctx->r24 = S32(U32(ctx->r3) >> 16);
            goto L_8022D28C;
    }
    // 0x8022D284: srl         $t8, $v1, 16
    ctx->r24 = S32(U32(ctx->r3) >> 16);
    // 0x8022D288: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_8022D28C:
    // 0x8022D28C: andi        $a3, $t8, 0xFF
    ctx->r7 = ctx->r24 & 0XFF;
    // 0x8022D290: bne         $a3, $zero, L_8022D29C
    if (ctx->r7 != 0) {
        // 0x8022D294: addiu       $s1, $t0, 0x1
        ctx->r17 = ADD32(ctx->r8, 0X1);
            goto L_8022D29C;
    }
    // 0x8022D294: addiu       $s1, $t0, 0x1
    ctx->r17 = ADD32(ctx->r8, 0X1);
    // 0x8022D298: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
L_8022D29C:
    // 0x8022D29C: ldc1        $f8, 0x0($s0)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r16, 0X0);
    // 0x8022D2A0: andi        $t1, $v1, 0xF
    ctx->r9 = ctx->r3 & 0XF;
    // 0x8022D2A4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8022D2A8: sub.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = ctx->f8.d - ctx->f20.d;
    // 0x8022D2AC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022D2B0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022D2B4: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x8022D2B8: jal         0x80231A24
    // 0x8022D2BC: sdc1        $f10, 0x10($sp)
    CHECK_FR(ctx, 10);
    SD(ctx->f10.u64, 0X10, ctx->r29);
    func_80231A24(rdram, ctx);
        goto after_14;
    // 0x8022D2BC: sdc1        $f10, 0x10($sp)
    CHECK_FR(ctx, 10);
    SD(ctx->f10.u64, 0X10, ctx->r29);
    after_14:
    // 0x8022D2C0: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x8022D2C4: addiu       $t3, $a1, -0x29
    ctx->r11 = ADD32(ctx->r5, -0X29);
    // 0x8022D2C8: sltiu       $at, $t3, 0xD
    ctx->r1 = ctx->r11 < 0XD ? 1 : 0;
    // 0x8022D2CC: beq         $at, $zero, L_8022D3B0
    if (ctx->r1 == 0) {
        // 0x8022D2D0: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_8022D3B0;
    }
    // 0x8022D2D0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8022D2D4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022D2D8: addu        $at, $at, $t3
    gpr jr_addend_8022D2E0 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8022D2DC: lw          $t3, 0x4844($at)
    ctx->r11 = ADD32(ctx->r1, 0X4844);
    // 0x8022D2E0: jr          $t3
    // 0x8022D2E4: nop

    switch (jr_addend_8022D2E0 >> 2) {
        case 0: goto L_8022D34C; break;
        case 1: goto L_8022D2E8; break;
        case 2: goto L_8022D2FC; break;
        case 3: goto L_8022D360; break;
        case 4: goto L_8022D310; break;
        case 5: goto L_8022D3B0; break;
        case 6: goto L_8022D3B0; break;
        case 7: goto L_8022D338; break;
        case 8: goto L_8022D324; break;
        case 9: goto L_8022D3B0; break;
        case 10: goto L_8022D374; break;
        case 11: goto L_8022D388; break;
        case 12: goto L_8022D39C; break;
        default: switch_error(__func__, 0x8022D2E0, 0x80254844);
    }
    // 0x8022D2E4: nop

L_8022D2E8:
    // 0x8022D2E8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D2EC: jal         0x80231A24
    // 0x8022D2F0: addiu       $a0, $a0, 0x470C
    ctx->r4 = ADD32(ctx->r4, 0X470C);
    func_80231A24(rdram, ctx);
        goto after_15;
    // 0x8022D2F0: addiu       $a0, $a0, 0x470C
    ctx->r4 = ADD32(ctx->r4, 0X470C);
    after_15:
    // 0x8022D2F4: b           L_8022D3C0
    // 0x8022D2F8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
        goto L_8022D3C0;
    // 0x8022D2F8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
L_8022D2FC:
    // 0x8022D2FC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D300: jal         0x80231A24
    // 0x8022D304: addiu       $a0, $a0, 0x4718
    ctx->r4 = ADD32(ctx->r4, 0X4718);
    func_80231A24(rdram, ctx);
        goto after_16;
    // 0x8022D304: addiu       $a0, $a0, 0x4718
    ctx->r4 = ADD32(ctx->r4, 0X4718);
    after_16:
    // 0x8022D308: b           L_8022D3C0
    // 0x8022D30C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
        goto L_8022D3C0;
    // 0x8022D30C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
L_8022D310:
    // 0x8022D310: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D314: jal         0x80231A24
    // 0x8022D318: addiu       $a0, $a0, 0x4728
    ctx->r4 = ADD32(ctx->r4, 0X4728);
    func_80231A24(rdram, ctx);
        goto after_17;
    // 0x8022D318: addiu       $a0, $a0, 0x4728
    ctx->r4 = ADD32(ctx->r4, 0X4728);
    after_17:
    // 0x8022D31C: b           L_8022D3C0
    // 0x8022D320: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
        goto L_8022D3C0;
    // 0x8022D320: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
L_8022D324:
    // 0x8022D324: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D328: jal         0x80231A24
    // 0x8022D32C: addiu       $a0, $a0, 0x4734
    ctx->r4 = ADD32(ctx->r4, 0X4734);
    func_80231A24(rdram, ctx);
        goto after_18;
    // 0x8022D32C: addiu       $a0, $a0, 0x4734
    ctx->r4 = ADD32(ctx->r4, 0X4734);
    after_18:
    // 0x8022D330: b           L_8022D3C0
    // 0x8022D334: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
        goto L_8022D3C0;
    // 0x8022D334: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
L_8022D338:
    // 0x8022D338: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D33C: jal         0x80231A24
    // 0x8022D340: addiu       $a0, $a0, 0x4744
    ctx->r4 = ADD32(ctx->r4, 0X4744);
    func_80231A24(rdram, ctx);
        goto after_19;
    // 0x8022D340: addiu       $a0, $a0, 0x4744
    ctx->r4 = ADD32(ctx->r4, 0X4744);
    after_19:
    // 0x8022D344: b           L_8022D3C0
    // 0x8022D348: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
        goto L_8022D3C0;
    // 0x8022D348: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
L_8022D34C:
    // 0x8022D34C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D350: jal         0x80231A24
    // 0x8022D354: addiu       $a0, $a0, 0x4754
    ctx->r4 = ADD32(ctx->r4, 0X4754);
    func_80231A24(rdram, ctx);
        goto after_20;
    // 0x8022D354: addiu       $a0, $a0, 0x4754
    ctx->r4 = ADD32(ctx->r4, 0X4754);
    after_20:
    // 0x8022D358: b           L_8022D3C0
    // 0x8022D35C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
        goto L_8022D3C0;
    // 0x8022D35C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
L_8022D360:
    // 0x8022D360: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D364: jal         0x80231A24
    // 0x8022D368: addiu       $a0, $a0, 0x4764
    ctx->r4 = ADD32(ctx->r4, 0X4764);
    func_80231A24(rdram, ctx);
        goto after_21;
    // 0x8022D368: addiu       $a0, $a0, 0x4764
    ctx->r4 = ADD32(ctx->r4, 0X4764);
    after_21:
    // 0x8022D36C: b           L_8022D3C0
    // 0x8022D370: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
        goto L_8022D3C0;
    // 0x8022D370: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
L_8022D374:
    // 0x8022D374: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D378: jal         0x80231A24
    // 0x8022D37C: addiu       $a0, $a0, 0x4770
    ctx->r4 = ADD32(ctx->r4, 0X4770);
    func_80231A24(rdram, ctx);
        goto after_22;
    // 0x8022D37C: addiu       $a0, $a0, 0x4770
    ctx->r4 = ADD32(ctx->r4, 0X4770);
    after_22:
    // 0x8022D380: b           L_8022D3C0
    // 0x8022D384: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
        goto L_8022D3C0;
    // 0x8022D384: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
L_8022D388:
    // 0x8022D388: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D38C: jal         0x80231A24
    // 0x8022D390: addiu       $a0, $a0, 0x4778
    ctx->r4 = ADD32(ctx->r4, 0X4778);
    func_80231A24(rdram, ctx);
        goto after_23;
    // 0x8022D390: addiu       $a0, $a0, 0x4778
    ctx->r4 = ADD32(ctx->r4, 0X4778);
    after_23:
    // 0x8022D394: b           L_8022D3C0
    // 0x8022D398: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
        goto L_8022D3C0;
    // 0x8022D398: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
L_8022D39C:
    // 0x8022D39C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D3A0: jal         0x80231A24
    // 0x8022D3A4: addiu       $a0, $a0, 0x4780
    ctx->r4 = ADD32(ctx->r4, 0X4780);
    func_80231A24(rdram, ctx);
        goto after_24;
    // 0x8022D3A4: addiu       $a0, $a0, 0x4780
    ctx->r4 = ADD32(ctx->r4, 0X4780);
    after_24:
    // 0x8022D3A8: b           L_8022D3C0
    // 0x8022D3AC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
        goto L_8022D3C0;
    // 0x8022D3AC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
L_8022D3B0:
    // 0x8022D3B0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D3B4: jal         0x80231A24
    // 0x8022D3B8: addiu       $a0, $a0, 0x4788
    ctx->r4 = ADD32(ctx->r4, 0X4788);
    func_80231A24(rdram, ctx);
        goto after_25;
    // 0x8022D3B8: addiu       $a0, $a0, 0x4788
    ctx->r4 = ADD32(ctx->r4, 0X4788);
    after_25:
    // 0x8022D3BC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
L_8022D3C0:
    // 0x8022D3C0: or          $t0, $s1, $zero
    ctx->r8 = ctx->r17 | 0;
    // 0x8022D3C4: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x8022D3C8: lw          $a2, 0x0($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X0);
    // 0x8022D3CC: slt         $at, $s1, $a2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8022D3D0: bnel        $at, $zero, L_8022D270
    if (ctx->r1 != 0) {
        // 0x8022D3D4: lw          $v1, 0xC($s0)
        ctx->r3 = MEM_W(ctx->r16, 0XC);
            goto L_8022D270;
    }
    goto skip_1;
    // 0x8022D3D4: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    skip_1:
L_8022D3D8:
    // 0x8022D3D8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022D3DC: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x8022D3E0: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x8022D3E4: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x8022D3E8: jr          $ra
    // 0x8022D3EC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8022D3EC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8020CE90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020CE90: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8020CE94: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8020CE98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020CE9C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8020CEA0: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8020CEA4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8020CEA8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8020CEAC: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x8020CEB0: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x8020CEB4: sdc1        $f30, 0x30($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X30, ctx->r29);
    // 0x8020CEB8: lwc1        $f14, 0x70($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8020CEBC: mul.s       $f16, $f4, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8020CEC0: sdc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X18, ctx->r29);
    // 0x8020CEC4: mtc1        $a3, $f24
    ctx->f24.u32l = ctx->r7;
    // 0x8020CEC8: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8020CECC: lwc1        $f20, 0x74($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8020CED0: sdc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X20, ctx->r29);
    // 0x8020CED4: sdc1        $f28, 0x28($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X28, ctx->r29);
    // 0x8020CED8: sub.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x8020CEDC: lwc1        $f28, 0x68($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8020CEE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020CEE4: andi        $v1, $a1, 0x1
    ctx->r3 = ctx->r5 & 0X1;
    // 0x8020CEE8: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8020CEEC: nop

    // 0x8020CEF0: mul.s       $f30, $f8, $f22
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f30.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x8020CEF4: nop

    // 0x8020CEF8: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8020CEFC: nop

    // 0x8020CF00: mul.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8020CF04: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x8020CF08: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8020CF0C: nop

    // 0x8020CF10: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x8020CF14: nop

    // 0x8020CF18: mul.s       $f10, $f20, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8020CF1C: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x8020CF20: mul.s       $f26, $f10, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f26.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8020CF24: sub.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x8020CF28: sub.s       $f4, $f0, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f26.fl;
    // 0x8020CF2C: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8020CF30: nop

    // 0x8020CF34: mul.s       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x8020CF38: sub.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x8020CF3C: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8020CF40: sub.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x8020CF44: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x8020CF48: mul.s       $f22, $f4, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x8020CF4C: nop

    // 0x8020CF50: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8020CF54: nop

    // 0x8020CF58: mul.s       $f24, $f8, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f24.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x8020CF5C: nop

    // 0x8020CF60: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8020CF64: nop

    // 0x8020CF68: mul.s       $f28, $f4, $f28
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f28.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x8020CF6C: blez        $a1, L_8020D770
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8020CF70: nop
    
            goto L_8020D770;
    }
    // 0x8020CF70: nop

    // 0x8020CF74: beq         $v1, $zero, L_8020D228
    if (ctx->r3 == 0) {
        // 0x8020CF78: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_8020D228;
    }
    // 0x8020CF78: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020CF7C: lhu         $a2, 0x6($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X6);
    // 0x8020CF80: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8020CF84: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8020CF88: beq         $a2, $zero, L_8020CFBC
    if (ctx->r6 == 0) {
        // 0x8020CF8C: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_8020CFBC;
    }
    // 0x8020CF8C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020CF90: lbu         $t6, 0xC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XC);
    // 0x8020CF94: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020CF98: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8020CF9C: bgez        $t6, L_8020CFB0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8020CFA0: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8020CFB0;
    }
    // 0x8020CFA0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020CFA4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020CFA8: nop

    // 0x8020CFAC: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_8020CFB0:
    // 0x8020CFB0: mul.s       $f4, $f12, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x8020CFB4: b           L_8020CFE4
    // 0x8020CFB8: add.s       $f0, $f4, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f22.fl;
        goto L_8020CFE4;
    // 0x8020CFB8: add.s       $f0, $f4, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f22.fl;
L_8020CFBC:
    // 0x8020CFBC: lbu         $t7, 0xC($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XC);
    // 0x8020CFC0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020CFC4: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8020CFC8: bgez        $t7, L_8020CFDC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8020CFCC: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8020CFDC;
    }
    // 0x8020CFCC: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020CFD0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020CFD4: nop

    // 0x8020CFD8: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_8020CFDC:
    // 0x8020CFDC: mul.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8020CFE0: add.s       $f0, $f4, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f30.fl;
L_8020CFE4:
    // 0x8020CFE4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020CFE8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020CFEC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020CFF0: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8020CFF4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020CFF8: nop

    // 0x8020CFFC: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020D000: beql        $t9, $zero, L_8020D050
    if (ctx->r25 == 0) {
        // 0x8020D004: mfc1        $t9, $f6
        ctx->r25 = (int32_t)ctx->f6.u32l;
            goto L_8020D050;
    }
    goto skip_0;
    // 0x8020D004: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x8020D008: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020D00C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020D010: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x8020D014: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020D018: nop

    // 0x8020D01C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020D020: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020D024: nop

    // 0x8020D028: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020D02C: bne         $t9, $zero, L_8020D044
    if (ctx->r25 != 0) {
        // 0x8020D030: nop
    
            goto L_8020D044;
    }
    // 0x8020D030: nop

    // 0x8020D034: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x8020D038: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D03C: b           L_8020D05C
    // 0x8020D040: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8020D05C;
    // 0x8020D040: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8020D044:
    // 0x8020D044: b           L_8020D05C
    // 0x8020D048: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8020D05C;
    // 0x8020D048: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8020D04C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
L_8020D050:
    // 0x8020D050: nop

    // 0x8020D054: bltz        $t9, L_8020D044
    if (SIGNED(ctx->r25) < 0) {
        // 0x8020D058: nop
    
            goto L_8020D044;
    }
    // 0x8020D058: nop

L_8020D05C:
    // 0x8020D05C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020D060: beq         $a2, $zero, L_8020D094
    if (ctx->r6 == 0) {
        // 0x8020D064: sb          $t9, 0xC($v0)
        MEM_B(0XC, ctx->r2) = ctx->r25;
            goto L_8020D094;
    }
    // 0x8020D064: sb          $t9, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r25;
    // 0x8020D068: lbu         $t1, 0xD($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD);
    // 0x8020D06C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D070: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8020D074: bgez        $t1, L_8020D088
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8020D078: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020D088;
    }
    // 0x8020D078: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020D07C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020D080: nop

    // 0x8020D084: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_8020D088:
    // 0x8020D088: mul.s       $f6, $f14, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x8020D08C: b           L_8020D0C0
    // 0x8020D090: add.s       $f0, $f6, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f24.fl;
        goto L_8020D0C0;
    // 0x8020D090: add.s       $f0, $f6, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f24.fl;
L_8020D094:
    // 0x8020D094: lbu         $t2, 0xD($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0XD);
    // 0x8020D098: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D09C: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x8020D0A0: bgez        $t2, L_8020D0B4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8020D0A4: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020D0B4;
    }
    // 0x8020D0A4: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020D0A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020D0AC: nop

    // 0x8020D0B0: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_8020D0B4:
    // 0x8020D0B4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8020D0B8: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8020D0BC: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
L_8020D0C0:
    // 0x8020D0C0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020D0C4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020D0C8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020D0CC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020D0D0: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8020D0D4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020D0D8: nop

    // 0x8020D0DC: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020D0E0: beql        $t4, $zero, L_8020D130
    if (ctx->r12 == 0) {
        // 0x8020D0E4: mfc1        $t4, $f10
        ctx->r12 = (int32_t)ctx->f10.u32l;
            goto L_8020D130;
    }
    goto skip_1;
    // 0x8020D0E4: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x8020D0E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020D0EC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020D0F0: sub.s       $f10, $f0, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8020D0F4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020D0F8: nop

    // 0x8020D0FC: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020D100: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020D104: nop

    // 0x8020D108: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020D10C: bne         $t4, $zero, L_8020D124
    if (ctx->r12 != 0) {
        // 0x8020D110: nop
    
            goto L_8020D124;
    }
    // 0x8020D110: nop

    // 0x8020D114: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x8020D118: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D11C: b           L_8020D13C
    // 0x8020D120: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_8020D13C;
    // 0x8020D120: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_8020D124:
    // 0x8020D124: b           L_8020D13C
    // 0x8020D128: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_8020D13C;
    // 0x8020D128: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8020D12C: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
L_8020D130:
    // 0x8020D130: nop

    // 0x8020D134: bltz        $t4, L_8020D124
    if (SIGNED(ctx->r12) < 0) {
        // 0x8020D138: nop
    
            goto L_8020D124;
    }
    // 0x8020D138: nop

L_8020D13C:
    // 0x8020D13C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020D140: beq         $a2, $zero, L_8020D174
    if (ctx->r6 == 0) {
        // 0x8020D144: sb          $t4, 0xD($v0)
        MEM_B(0XD, ctx->r2) = ctx->r12;
            goto L_8020D174;
    }
    // 0x8020D144: sb          $t4, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r12;
    // 0x8020D148: lbu         $t5, 0xE($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XE);
    // 0x8020D14C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D150: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x8020D154: bgez        $t5, L_8020D168
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8020D158: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020D168;
    }
    // 0x8020D158: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020D15C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020D160: nop

    // 0x8020D164: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8020D168:
    // 0x8020D168: mul.s       $f10, $f20, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x8020D16C: b           L_8020D1A0
    // 0x8020D170: add.s       $f0, $f10, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f28.fl;
        goto L_8020D1A0;
    // 0x8020D170: add.s       $f0, $f10, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f28.fl;
L_8020D174:
    // 0x8020D174: lbu         $t6, 0xE($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XE);
    // 0x8020D178: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D17C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8020D180: bgez        $t6, L_8020D194
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8020D184: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020D194;
    }
    // 0x8020D184: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020D188: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020D18C: nop

    // 0x8020D190: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_8020D194:
    // 0x8020D194: mul.s       $f10, $f26, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f26.fl, ctx->f8.fl);
    // 0x8020D198: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8020D19C: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
L_8020D1A0:
    // 0x8020D1A0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020D1A4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020D1A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8020D1AC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020D1B0: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8020D1B4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020D1B8: nop

    // 0x8020D1BC: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020D1C0: beql        $t8, $zero, L_8020D210
    if (ctx->r24 == 0) {
        // 0x8020D1C4: mfc1        $t8, $f6
        ctx->r24 = (int32_t)ctx->f6.u32l;
            goto L_8020D210;
    }
    goto skip_2;
    // 0x8020D1C4: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    skip_2:
    // 0x8020D1C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020D1CC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020D1D0: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x8020D1D4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020D1D8: nop

    // 0x8020D1DC: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020D1E0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020D1E4: nop

    // 0x8020D1E8: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020D1EC: bne         $t8, $zero, L_8020D204
    if (ctx->r24 != 0) {
        // 0x8020D1F0: nop
    
            goto L_8020D204;
    }
    // 0x8020D1F0: nop

    // 0x8020D1F4: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x8020D1F8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D1FC: b           L_8020D21C
    // 0x8020D200: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8020D21C;
    // 0x8020D200: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8020D204:
    // 0x8020D204: b           L_8020D21C
    // 0x8020D208: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8020D21C;
    // 0x8020D208: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8020D20C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
L_8020D210:
    // 0x8020D210: nop

    // 0x8020D214: bltz        $t8, L_8020D204
    if (SIGNED(ctx->r24) < 0) {
        // 0x8020D218: nop
    
            goto L_8020D204;
    }
    // 0x8020D218: nop

L_8020D21C:
    // 0x8020D21C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020D220: beq         $v0, $a1, L_8020D770
    if (ctx->r2 == ctx->r5) {
        // 0x8020D224: sb          $t8, 0xE($v1)
        MEM_B(0XE, ctx->r3) = ctx->r24;
            goto L_8020D770;
    }
    // 0x8020D224: sb          $t8, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r24;
L_8020D228:
    // 0x8020D228: sll         $t9, $v0, 4
    ctx->r25 = S32(ctx->r2 << 4);
    // 0x8020D22C: addu        $a2, $t9, $a0
    ctx->r6 = ADD32(ctx->r25, ctx->r4);
    // 0x8020D230: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x8020D234: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020D238: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020D23C: beql        $v1, $zero, L_8020D274
    if (ctx->r3 == 0) {
        // 0x8020D240: lbu         $t2, 0xC($a2)
        ctx->r10 = MEM_BU(ctx->r6, 0XC);
            goto L_8020D274;
    }
    goto skip_3;
    // 0x8020D240: lbu         $t2, 0xC($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0XC);
    skip_3:
    // 0x8020D244: lbu         $t1, 0xC($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0XC);
    // 0x8020D248: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D24C: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8020D250: bgez        $t1, L_8020D264
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8020D254: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020D264;
    }
    // 0x8020D254: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020D258: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020D25C: nop

    // 0x8020D260: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_8020D264:
    // 0x8020D264: mul.s       $f6, $f12, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x8020D268: b           L_8020D298
    // 0x8020D26C: add.s       $f0, $f6, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f22.fl;
        goto L_8020D298;
    // 0x8020D26C: add.s       $f0, $f6, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x8020D270: lbu         $t2, 0xC($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0XC);
L_8020D274:
    // 0x8020D274: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D278: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x8020D27C: bgez        $t2, L_8020D290
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8020D280: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020D290;
    }
    // 0x8020D280: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020D284: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020D288: nop

    // 0x8020D28C: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_8020D290:
    // 0x8020D290: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8020D294: add.s       $f0, $f6, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f30.fl;
L_8020D298:
    // 0x8020D298: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020D29C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020D2A0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020D2A4: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8020D2A8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020D2AC: nop

    // 0x8020D2B0: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020D2B4: beql        $t4, $zero, L_8020D304
    if (ctx->r12 == 0) {
        // 0x8020D2B8: mfc1        $t4, $f8
        ctx->r12 = (int32_t)ctx->f8.u32l;
            goto L_8020D304;
    }
    goto skip_4;
    // 0x8020D2B8: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    skip_4:
    // 0x8020D2BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020D2C0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020D2C4: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x8020D2C8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020D2CC: nop

    // 0x8020D2D0: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020D2D4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020D2D8: nop

    // 0x8020D2DC: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020D2E0: bne         $t4, $zero, L_8020D2F8
    if (ctx->r12 != 0) {
        // 0x8020D2E4: nop
    
            goto L_8020D2F8;
    }
    // 0x8020D2E4: nop

    // 0x8020D2E8: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x8020D2EC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D2F0: b           L_8020D310
    // 0x8020D2F4: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_8020D310;
    // 0x8020D2F4: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_8020D2F8:
    // 0x8020D2F8: b           L_8020D310
    // 0x8020D2FC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_8020D310;
    // 0x8020D2FC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8020D300: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
L_8020D304:
    // 0x8020D304: nop

    // 0x8020D308: bltz        $t4, L_8020D2F8
    if (SIGNED(ctx->r12) < 0) {
        // 0x8020D30C: nop
    
            goto L_8020D2F8;
    }
    // 0x8020D30C: nop

L_8020D310:
    // 0x8020D310: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020D314: beq         $v1, $zero, L_8020D348
    if (ctx->r3 == 0) {
        // 0x8020D318: sb          $t4, 0xC($a2)
        MEM_B(0XC, ctx->r6) = ctx->r12;
            goto L_8020D348;
    }
    // 0x8020D318: sb          $t4, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r12;
    // 0x8020D31C: lbu         $t5, 0xD($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0XD);
    // 0x8020D320: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D324: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8020D328: bgez        $t5, L_8020D33C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8020D32C: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020D33C;
    }
    // 0x8020D32C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020D330: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020D334: nop

    // 0x8020D338: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_8020D33C:
    // 0x8020D33C: mul.s       $f8, $f14, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x8020D340: b           L_8020D374
    // 0x8020D344: add.s       $f0, $f8, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f24.fl;
        goto L_8020D374;
    // 0x8020D344: add.s       $f0, $f8, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f24.fl;
L_8020D348:
    // 0x8020D348: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
    // 0x8020D34C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D350: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8020D354: bgez        $t6, L_8020D368
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8020D358: cvt.s.w     $f6, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020D368;
    }
    // 0x8020D358: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020D35C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020D360: nop

    // 0x8020D364: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_8020D368:
    // 0x8020D368: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8020D36C: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8020D370: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
L_8020D374:
    // 0x8020D374: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020D378: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020D37C: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x8020D380: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x8020D384: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8020D388: addu        $a3, $t5, $a0
    ctx->r7 = ADD32(ctx->r13, ctx->r4);
    // 0x8020D38C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8020D390: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020D394: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020D398: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020D39C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020D3A0: beql        $t8, $zero, L_8020D3F0
    if (ctx->r24 == 0) {
        // 0x8020D3A4: mfc1        $t8, $f4
        ctx->r24 = (int32_t)ctx->f4.u32l;
            goto L_8020D3F0;
    }
    goto skip_5;
    // 0x8020D3A4: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    skip_5:
    // 0x8020D3A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020D3AC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020D3B0: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8020D3B4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020D3B8: nop

    // 0x8020D3BC: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8020D3C0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020D3C4: nop

    // 0x8020D3C8: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020D3CC: bne         $t8, $zero, L_8020D3E4
    if (ctx->r24 != 0) {
        // 0x8020D3D0: nop
    
            goto L_8020D3E4;
    }
    // 0x8020D3D0: nop

    // 0x8020D3D4: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8020D3D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D3DC: b           L_8020D3FC
    // 0x8020D3E0: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8020D3FC;
    // 0x8020D3E0: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8020D3E4:
    // 0x8020D3E4: b           L_8020D3FC
    // 0x8020D3E8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8020D3FC;
    // 0x8020D3E8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8020D3EC: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
L_8020D3F0:
    // 0x8020D3F0: nop

    // 0x8020D3F4: bltz        $t8, L_8020D3E4
    if (SIGNED(ctx->r24) < 0) {
        // 0x8020D3F8: nop
    
            goto L_8020D3E4;
    }
    // 0x8020D3F8: nop

L_8020D3FC:
    // 0x8020D3FC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020D400: beq         $v1, $zero, L_8020D434
    if (ctx->r3 == 0) {
        // 0x8020D404: sb          $t8, 0xD($a2)
        MEM_B(0XD, ctx->r6) = ctx->r24;
            goto L_8020D434;
    }
    // 0x8020D404: sb          $t8, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r24;
    // 0x8020D408: lbu         $t9, 0xE($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0XE);
    // 0x8020D40C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D410: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8020D414: bgez        $t9, L_8020D428
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8020D418: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8020D428;
    }
    // 0x8020D418: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020D41C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020D420: nop

    // 0x8020D424: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_8020D428:
    // 0x8020D428: mul.s       $f4, $f20, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x8020D42C: b           L_8020D460
    // 0x8020D430: add.s       $f0, $f4, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f28.fl;
        goto L_8020D460;
    // 0x8020D430: add.s       $f0, $f4, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f28.fl;
L_8020D434:
    // 0x8020D434: lbu         $t1, 0xE($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0XE);
    // 0x8020D438: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D43C: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8020D440: bgez        $t1, L_8020D454
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8020D444: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8020D454;
    }
    // 0x8020D444: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020D448: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020D44C: nop

    // 0x8020D450: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_8020D454:
    // 0x8020D454: mul.s       $f4, $f26, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f26.fl, ctx->f10.fl);
    // 0x8020D458: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8020D45C: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
L_8020D460:
    // 0x8020D460: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020D464: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020D468: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020D46C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020D470: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8020D474: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020D478: nop

    // 0x8020D47C: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8020D480: beql        $t3, $zero, L_8020D4D0
    if (ctx->r11 == 0) {
        // 0x8020D484: mfc1        $t3, $f8
        ctx->r11 = (int32_t)ctx->f8.u32l;
            goto L_8020D4D0;
    }
    goto skip_6;
    // 0x8020D484: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    skip_6:
    // 0x8020D488: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020D48C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020D490: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x8020D494: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020D498: nop

    // 0x8020D49C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020D4A0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020D4A4: nop

    // 0x8020D4A8: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8020D4AC: bne         $t3, $zero, L_8020D4C4
    if (ctx->r11 != 0) {
        // 0x8020D4B0: nop
    
            goto L_8020D4C4;
    }
    // 0x8020D4B0: nop

    // 0x8020D4B4: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x8020D4B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D4BC: b           L_8020D4DC
    // 0x8020D4C0: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_8020D4DC;
    // 0x8020D4C0: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_8020D4C4:
    // 0x8020D4C4: b           L_8020D4DC
    // 0x8020D4C8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_8020D4DC;
    // 0x8020D4C8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8020D4CC: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
L_8020D4D0:
    // 0x8020D4D0: nop

    // 0x8020D4D4: bltz        $t3, L_8020D4C4
    if (SIGNED(ctx->r11) < 0) {
        // 0x8020D4D8: nop
    
            goto L_8020D4C4;
    }
    // 0x8020D4D8: nop

L_8020D4DC:
    // 0x8020D4DC: sb          $t3, 0xE($a2)
    MEM_B(0XE, ctx->r6) = ctx->r11;
    // 0x8020D4E0: lbu         $t6, 0xC($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0XC);
    // 0x8020D4E4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020D4E8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020D4EC: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8020D4F0: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x8020D4F4: bgez        $t6, L_8020D50C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8020D4F8: cvt.s.w     $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020D50C;
    }
    // 0x8020D4F8: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020D4FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D500: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020D504: nop

    // 0x8020D508: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
L_8020D50C:
    // 0x8020D50C: lhu         $t0, 0x6($a3)
    ctx->r8 = MEM_HU(ctx->r7, 0X6);
    // 0x8020D510: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020D514: beq         $t0, $zero, L_8020D528
    if (ctx->r8 == 0) {
        // 0x8020D518: nop
    
            goto L_8020D528;
    }
    // 0x8020D518: nop

    // 0x8020D51C: mul.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8020D520: b           L_8020D530
    // 0x8020D524: add.s       $f0, $f6, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f22.fl;
        goto L_8020D530;
    // 0x8020D524: add.s       $f0, $f6, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f22.fl;
L_8020D528:
    // 0x8020D528: mul.s       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x8020D52C: add.s       $f0, $f8, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f30.fl;
L_8020D530:
    // 0x8020D530: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020D534: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020D538: nop

    // 0x8020D53C: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8020D540: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020D544: nop

    // 0x8020D548: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020D54C: beql        $t8, $zero, L_8020D59C
    if (ctx->r24 == 0) {
        // 0x8020D550: mfc1        $t8, $f10
        ctx->r24 = (int32_t)ctx->f10.u32l;
            goto L_8020D59C;
    }
    goto skip_7;
    // 0x8020D550: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    skip_7:
    // 0x8020D554: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020D558: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020D55C: sub.s       $f10, $f0, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8020D560: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020D564: nop

    // 0x8020D568: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020D56C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020D570: nop

    // 0x8020D574: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020D578: bne         $t8, $zero, L_8020D590
    if (ctx->r24 != 0) {
        // 0x8020D57C: nop
    
            goto L_8020D590;
    }
    // 0x8020D57C: nop

    // 0x8020D580: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8020D584: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D588: b           L_8020D5A8
    // 0x8020D58C: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8020D5A8;
    // 0x8020D58C: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8020D590:
    // 0x8020D590: b           L_8020D5A8
    // 0x8020D594: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8020D5A8;
    // 0x8020D594: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8020D598: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
L_8020D59C:
    // 0x8020D59C: nop

    // 0x8020D5A0: bltz        $t8, L_8020D590
    if (SIGNED(ctx->r24) < 0) {
        // 0x8020D5A4: nop
    
            goto L_8020D590;
    }
    // 0x8020D5A4: nop

L_8020D5A8:
    // 0x8020D5A8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020D5AC: beq         $t0, $zero, L_8020D5E0
    if (ctx->r8 == 0) {
        // 0x8020D5B0: sb          $t8, 0xC($a3)
        MEM_B(0XC, ctx->r7) = ctx->r24;
            goto L_8020D5E0;
    }
    // 0x8020D5B0: sb          $t8, 0xC($a3)
    MEM_B(0XC, ctx->r7) = ctx->r24;
    // 0x8020D5B4: lbu         $t9, 0xD($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0XD);
    // 0x8020D5B8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D5BC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8020D5C0: bgez        $t9, L_8020D5D4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8020D5C4: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020D5D4;
    }
    // 0x8020D5C4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020D5C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020D5CC: nop

    // 0x8020D5D0: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8020D5D4:
    // 0x8020D5D4: mul.s       $f10, $f14, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x8020D5D8: b           L_8020D60C
    // 0x8020D5DC: add.s       $f0, $f10, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f24.fl;
        goto L_8020D60C;
    // 0x8020D5DC: add.s       $f0, $f10, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f24.fl;
L_8020D5E0:
    // 0x8020D5E0: lbu         $t1, 0xD($a3)
    ctx->r9 = MEM_BU(ctx->r7, 0XD);
    // 0x8020D5E4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D5E8: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8020D5EC: bgez        $t1, L_8020D600
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8020D5F0: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020D600;
    }
    // 0x8020D5F0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020D5F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020D5F8: nop

    // 0x8020D5FC: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_8020D600:
    // 0x8020D600: mul.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x8020D604: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8020D608: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
L_8020D60C:
    // 0x8020D60C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020D610: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020D614: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020D618: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020D61C: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8020D620: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020D624: nop

    // 0x8020D628: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8020D62C: beql        $t3, $zero, L_8020D67C
    if (ctx->r11 == 0) {
        // 0x8020D630: mfc1        $t3, $f6
        ctx->r11 = (int32_t)ctx->f6.u32l;
            goto L_8020D67C;
    }
    goto skip_8;
    // 0x8020D630: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    skip_8:
    // 0x8020D634: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020D638: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020D63C: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x8020D640: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020D644: nop

    // 0x8020D648: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020D64C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020D650: nop

    // 0x8020D654: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8020D658: bne         $t3, $zero, L_8020D670
    if (ctx->r11 != 0) {
        // 0x8020D65C: nop
    
            goto L_8020D670;
    }
    // 0x8020D65C: nop

    // 0x8020D660: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x8020D664: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D668: b           L_8020D688
    // 0x8020D66C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_8020D688;
    // 0x8020D66C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_8020D670:
    // 0x8020D670: b           L_8020D688
    // 0x8020D674: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_8020D688;
    // 0x8020D674: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8020D678: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
L_8020D67C:
    // 0x8020D67C: nop

    // 0x8020D680: bltz        $t3, L_8020D670
    if (SIGNED(ctx->r11) < 0) {
        // 0x8020D684: nop
    
            goto L_8020D670;
    }
    // 0x8020D684: nop

L_8020D688:
    // 0x8020D688: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020D68C: beq         $t0, $zero, L_8020D6C0
    if (ctx->r8 == 0) {
        // 0x8020D690: sb          $t3, 0xD($a3)
        MEM_B(0XD, ctx->r7) = ctx->r11;
            goto L_8020D6C0;
    }
    // 0x8020D690: sb          $t3, 0xD($a3)
    MEM_B(0XD, ctx->r7) = ctx->r11;
    // 0x8020D694: lbu         $t4, 0xE($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0XE);
    // 0x8020D698: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D69C: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x8020D6A0: bgez        $t4, L_8020D6B4
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8020D6A4: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020D6B4;
    }
    // 0x8020D6A4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020D6A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020D6AC: nop

    // 0x8020D6B0: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_8020D6B4:
    // 0x8020D6B4: mul.s       $f6, $f20, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x8020D6B8: b           L_8020D6EC
    // 0x8020D6BC: add.s       $f0, $f6, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f28.fl;
        goto L_8020D6EC;
    // 0x8020D6BC: add.s       $f0, $f6, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f28.fl;
L_8020D6C0:
    // 0x8020D6C0: lbu         $t5, 0xE($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0XE);
    // 0x8020D6C4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D6C8: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8020D6CC: bgez        $t5, L_8020D6E0
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8020D6D0: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020D6E0;
    }
    // 0x8020D6D0: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020D6D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020D6D8: nop

    // 0x8020D6DC: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_8020D6E0:
    // 0x8020D6E0: mul.s       $f6, $f26, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f26.fl, ctx->f4.fl);
    // 0x8020D6E4: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8020D6E8: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
L_8020D6EC:
    // 0x8020D6EC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020D6F0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020D6F4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020D6F8: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8020D6FC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020D700: nop

    // 0x8020D704: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020D708: beql        $t7, $zero, L_8020D758
    if (ctx->r15 == 0) {
        // 0x8020D70C: mfc1        $t7, $f10
        ctx->r15 = (int32_t)ctx->f10.u32l;
            goto L_8020D758;
    }
    goto skip_9;
    // 0x8020D70C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    skip_9:
    // 0x8020D710: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020D714: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020D718: sub.s       $f10, $f0, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8020D71C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020D720: nop

    // 0x8020D724: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020D728: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020D72C: nop

    // 0x8020D730: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020D734: bne         $t7, $zero, L_8020D74C
    if (ctx->r15 != 0) {
        // 0x8020D738: nop
    
            goto L_8020D74C;
    }
    // 0x8020D738: nop

    // 0x8020D73C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8020D740: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D744: b           L_8020D764
    // 0x8020D748: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8020D764;
    // 0x8020D748: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8020D74C:
    // 0x8020D74C: b           L_8020D764
    // 0x8020D750: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8020D764;
    // 0x8020D750: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8020D754: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
L_8020D758:
    // 0x8020D758: nop

    // 0x8020D75C: bltz        $t7, L_8020D74C
    if (SIGNED(ctx->r15) < 0) {
        // 0x8020D760: nop
    
            goto L_8020D74C;
    }
    // 0x8020D760: nop

L_8020D764:
    // 0x8020D764: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020D768: bne         $v0, $a1, L_8020D228
    if (ctx->r2 != ctx->r5) {
        // 0x8020D76C: sb          $t7, 0xE($v1)
        MEM_B(0XE, ctx->r3) = ctx->r15;
            goto L_8020D228;
    }
    // 0x8020D76C: sb          $t7, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r15;
L_8020D770:
    // 0x8020D770: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8020D774: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x8020D778: ldc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X18);
    // 0x8020D77C: ldc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X20);
    // 0x8020D780: ldc1        $f28, 0x28($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X28);
    // 0x8020D784: ldc1        $f30, 0x30($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X30);
    // 0x8020D788: jr          $ra
    // 0x8020D78C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8020D78C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80247F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247F00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80247F04: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80247F08: addiu       $t6, $t6, 0x5F80
    ctx->r14 = ADD32(ctx->r14, 0X5F80);
    // 0x80247F0C: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80247F10: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80247F14: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80247F18:
    // 0x80247F18: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80247F1C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80247F20: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80247F24: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80247F28: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80247F2C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80247F30: sw          $t7, 0x5F80($at)
    MEM_W(0X5F80, ctx->r1) = ctx->r15;
    // 0x80247F34: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80247F38: slti        $at, $t1, 0x10
    ctx->r1 = SIGNED(ctx->r9) < 0X10 ? 1 : 0;
    // 0x80247F3C: bne         $at, $zero, L_80247F18
    if (ctx->r1 != 0) {
        // 0x80247F40: sw          $t1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r9;
            goto L_80247F18;
    }
    // 0x80247F40: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x80247F44: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80247F48: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80247F4C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80247F50: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x80247F54: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x80247F58: sw          $t2, 0x5FBC($at)
    MEM_W(0X5FBC, ctx->r1) = ctx->r10;
    // 0x80247F5C: sb          $t3, 0x8($sp)
    MEM_B(0X8, ctx->r29) = ctx->r11;
    // 0x80247F60: sb          $t4, 0x9($sp)
    MEM_B(0X9, ctx->r29) = ctx->r12;
    // 0x80247F64: sb          $t5, 0xA($sp)
    MEM_B(0XA, ctx->r29) = ctx->r13;
    // 0x80247F68: sb          $a0, 0xB($sp)
    MEM_B(0XB, ctx->r29) = ctx->r4;
    // 0x80247F6C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80247F70:
    // 0x80247F70: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80247F74: addu        $t8, $sp, $t6
    ctx->r24 = ADD32(ctx->r29, ctx->r14);
    // 0x80247F78: sb          $zero, 0xC($t8)
    MEM_B(0XC, ctx->r24) = 0;
    // 0x80247F7C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80247F80: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80247F84: slti        $at, $t9, 0x8
    ctx->r1 = SIGNED(ctx->r25) < 0X8 ? 1 : 0;
    // 0x80247F88: bne         $at, $zero, L_80247F70
    if (ctx->r1 != 0) {
        // 0x80247F8C: sw          $t9, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r25;
            goto L_80247F70;
    }
    // 0x80247F8C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80247F90: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80247F94:
    // 0x80247F94: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x80247F98: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    // 0x80247F9C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80247FA0: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x80247FA4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80247FA8: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x80247FAC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80247FB0: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x80247FB4: bne         $at, $zero, L_80247F94
    if (ctx->r1 != 0) {
        // 0x80247FB8: sw          $t2, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r10;
            goto L_80247F94;
    }
    // 0x80247FB8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80247FBC: addiu       $t6, $sp, 0x8
    ctx->r14 = ADD32(ctx->r29, 0X8);
    // 0x80247FC0: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80247FC4: lw          $t5, 0x14($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14);
    // 0x80247FC8: addiu       $t1, $zero, 0xFE
    ctx->r9 = ADD32(0, 0XFE);
    // 0x80247FCC: swl         $at, 0x0($t5)
    do_swl(rdram, 0X0, ctx->r13, ctx->r1);
    // 0x80247FD0: swr         $at, 0x3($t5)
    do_swr(rdram, 0X3, ctx->r13, ctx->r1);
    // 0x80247FD4: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80247FD8: swl         $t7, 0x4($t5)
    do_swl(rdram, 0X4, ctx->r13, ctx->r15);
    // 0x80247FDC: swr         $t7, 0x7($t5)
    do_swr(rdram, 0X7, ctx->r13, ctx->r15);
    // 0x80247FE0: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80247FE4: swl         $at, 0x8($t5)
    do_swl(rdram, 0X8, ctx->r13, ctx->r1);
    // 0x80247FE8: swr         $at, 0xB($t5)
    do_swr(rdram, 0XB, ctx->r13, ctx->r1);
    // 0x80247FEC: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x80247FF0: addiu       $t0, $t9, 0xC
    ctx->r8 = ADD32(ctx->r25, 0XC);
    // 0x80247FF4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80247FF8: sb          $t1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r9;
    // 0x80247FFC: jr          $ra
    // 0x80248000: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80248000: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80230164: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80230168: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8023016C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80230170: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80230174: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80230178: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8023017C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80230180: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80230184: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80230188: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023018C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80230190: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x80230194: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80230198: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x8023019C: lw          $s3, 0x0($a2)
    ctx->r19 = MEM_W(ctx->r6, 0X0);
    // 0x802301A0: bgez        $a0, L_802301B4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802301A4: or          $t6, $a2, $zero
        ctx->r14 = ctx->r6 | 0;
            goto L_802301B4;
    }
    // 0x802301A4: or          $t6, $a2, $zero
    ctx->r14 = ctx->r6 | 0;
    // 0x802301A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802301AC: b           L_802301B8
    // 0x802301B0: negu        $s6, $a0
    ctx->r22 = SUB32(0, ctx->r4);
        goto L_802301B8;
    // 0x802301B0: negu        $s6, $a0
    ctx->r22 = SUB32(0, ctx->r4);
L_802301B4:
    // 0x802301B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_802301B8:
    // 0x802301B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802301BC: beq         $s6, $zero, L_802301F4
    if (ctx->r22 == 0) {
        // 0x802301C0: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_802301F4;
    }
    // 0x802301C0: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x802301C4: blez        $s6, L_802301F8
    if (SIGNED(ctx->r22) <= 0) {
        // 0x802301C8: lhu         $s1, 0x66($sp)
        ctx->r17 = MEM_HU(ctx->r29, 0X66);
            goto L_802301F8;
    }
    // 0x802301C8: lhu         $s1, 0x66($sp)
    ctx->r17 = MEM_HU(ctx->r29, 0X66);
L_802301CC:
    // 0x802301CC: multu       $s4, $s1
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802301D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802301D4: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x802301D8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x802301DC: mflo        $s4
    ctx->r20 = lo;
    // 0x802301E0: slt         $at, $s6, $s4
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x802301E4: beq         $at, $zero, L_802301CC
    if (ctx->r1 == 0) {
        // 0x802301E8: nop
    
            goto L_802301CC;
    }
    // 0x802301E8: nop

    // 0x802301EC: b           L_802301FC
    // 0x802301F0: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
        goto L_802301FC;
    // 0x802301F0: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
L_802301F4:
    // 0x802301F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802301F8:
    // 0x802301F8: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
L_802301FC:
    // 0x802301FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80230200: addu        $t0, $v0, $a2
    ctx->r8 = ADD32(ctx->r2, ctx->r6);
    // 0x80230204: blez        $v1, L_8023021C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80230208: lw          $t8, 0x74($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X74);
            goto L_8023021C;
    }
    // 0x80230208: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x8023020C: or          $fp, $v1, $zero
    ctx->r30 = ctx->r3 | 0;
    // 0x80230210: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80230214: b           L_80230220
    // 0x80230218: addu        $t0, $v0, $a2
    ctx->r8 = ADD32(ctx->r2, ctx->r6);
        goto L_80230220;
    // 0x80230218: addu        $t0, $v0, $a2
    ctx->r8 = ADD32(ctx->r2, ctx->r6);
L_8023021C:
    // 0x8023021C: or          $fp, $t0, $zero
    ctx->r30 = ctx->r8 | 0;
L_80230220:
    // 0x80230220: addu        $s3, $s3, $fp
    ctx->r19 = ADD32(ctx->r19, ctx->r30);
    // 0x80230224: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x80230228: or          $v1, $fp, $zero
    ctx->r3 = ctx->r30 | 0;
    // 0x8023022C: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80230230: beq         $t8, $zero, L_80230338
    if (ctx->r24 == 0) {
        // 0x80230234: or          $a1, $t0, $zero
        ctx->r5 = ctx->r8 | 0;
            goto L_80230338;
    }
    // 0x80230234: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80230238: blez        $fp, L_80230460
    if (SIGNED(ctx->r30) <= 0) {
        // 0x8023023C: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_80230460;
    }
    // 0x8023023C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80230240: addiu       $s7, $zero, 0x20
    ctx->r23 = ADD32(0, 0X20);
    // 0x80230244: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
L_80230248:
    // 0x80230248: beq         $at, $zero, L_80230264
    if (ctx->r1 == 0) {
        // 0x8023024C: nop
    
            goto L_80230264;
    }
    // 0x8023024C: nop

    // 0x80230250: addu        $t9, $a3, $s3
    ctx->r25 = ADD32(ctx->r7, ctx->r19);
    // 0x80230254: sb          $s7, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r23;
    // 0x80230258: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8023025C: b           L_80230324
    // 0x80230260: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
        goto L_80230324;
    // 0x80230260: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_80230264:
    // 0x80230264: blez        $s5, L_8023030C
    if (SIGNED(ctx->r21) <= 0) {
        // 0x80230268: lhu         $s1, 0x66($sp)
        ctx->r17 = MEM_HU(ctx->r29, 0X66);
            goto L_8023030C;
    }
    // 0x80230268: lhu         $s1, 0x66($sp)
    ctx->r17 = MEM_HU(ctx->r29, 0X66);
    // 0x8023026C: div         $zero, $s6, $s1
    lo = S32(S64(S32(ctx->r22)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r22)) % S64(S32(ctx->r17)));
    // 0x80230270: mfhi        $v0
    ctx->r2 = hi;
    // 0x80230274: andi        $s2, $v0, 0xFFFF
    ctx->r18 = ctx->r2 & 0XFFFF;
    // 0x80230278: bne         $s1, $zero, L_80230284
    if (ctx->r17 != 0) {
        // 0x8023027C: nop
    
            goto L_80230284;
    }
    // 0x8023027C: nop

    // 0x80230280: break       7
    do_break(2149778048);
L_80230284:
    // 0x80230284: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80230288: bne         $s1, $at, L_8023029C
    if (ctx->r17 != ctx->r1) {
        // 0x8023028C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023029C;
    }
    // 0x8023028C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80230290: bne         $s6, $at, L_8023029C
    if (ctx->r22 != ctx->r1) {
        // 0x80230294: nop
    
            goto L_8023029C;
    }
    // 0x80230294: nop

    // 0x80230298: break       6
    do_break(2149778072);
L_8023029C:
    // 0x8023029C: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x802302A0: addu        $s0, $a3, $s3
    ctx->r16 = ADD32(ctx->r7, ctx->r19);
    // 0x802302A4: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x802302A8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x802302AC: jal         0x802306D0
    // 0x802302B0: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    func_802306D0(rdram, ctx);
        goto after_0;
    // 0x802302B0: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    after_0:
    // 0x802302B4: subu        $t1, $s6, $s2
    ctx->r9 = SUB32(ctx->r22, ctx->r18);
    // 0x802302B8: div         $zero, $t1, $s1
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r17)));
    // 0x802302BC: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x802302C0: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x802302C4: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x802302C8: mflo        $s6
    ctx->r22 = lo;
    // 0x802302CC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802302D0: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x802302D4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x802302D8: bne         $s1, $zero, L_802302E4
    if (ctx->r17 != 0) {
        // 0x802302DC: nop
    
            goto L_802302E4;
    }
    // 0x802302DC: nop

    // 0x802302E0: break       7
    do_break(2149778144);
L_802302E4:
    // 0x802302E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802302E8: bne         $s1, $at, L_802302FC
    if (ctx->r17 != ctx->r1) {
        // 0x802302EC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802302FC;
    }
    // 0x802302EC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802302F0: bne         $t1, $at, L_802302FC
    if (ctx->r9 != ctx->r1) {
        // 0x802302F4: nop
    
            goto L_802302FC;
    }
    // 0x802302F4: nop

    // 0x802302F8: break       6
    do_break(2149778168);
L_802302FC:
    // 0x802302FC: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x80230300: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80230304: b           L_80230324
    // 0x80230308: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
        goto L_80230324;
    // 0x80230308: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_8023030C:
    // 0x8023030C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80230310: bnel        $a1, $at, L_80230328
    if (ctx->r5 != ctx->r1) {
        // 0x80230314: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_80230328;
    }
    goto skip_0;
    // 0x80230314: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x80230318: addu        $t2, $a3, $s3
    ctx->r10 = ADD32(ctx->r7, ctx->r19);
    // 0x8023031C: sb          $s7, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r23;
    // 0x80230320: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
L_80230324:
    // 0x80230324: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80230328:
    // 0x80230328: bnel        $s4, $fp, L_80230248
    if (ctx->r20 != ctx->r30) {
        // 0x8023032C: slt         $at, $a1, $v1
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80230248;
    }
    goto skip_1;
    // 0x8023032C: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    skip_1:
    // 0x80230330: b           L_80230464
    // 0x80230334: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
        goto L_80230464;
    // 0x80230334: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
L_80230338:
    // 0x80230338: blez        $fp, L_80230460
    if (SIGNED(ctx->r30) <= 0) {
        // 0x8023033C: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_80230460;
    }
    // 0x8023033C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80230340: addu        $s0, $a3, $s3
    ctx->r16 = ADD32(ctx->r7, ctx->r19);
    // 0x80230344: addiu       $s7, $zero, 0x20
    ctx->r23 = ADD32(0, 0X20);
    // 0x80230348: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
L_8023034C:
    // 0x8023034C: blez        $s5, L_802303E0
    if (SIGNED(ctx->r21) <= 0) {
        // 0x80230350: lhu         $s1, 0x66($sp)
        ctx->r17 = MEM_HU(ctx->r29, 0X66);
            goto L_802303E0;
    }
    // 0x80230350: lhu         $s1, 0x66($sp)
    ctx->r17 = MEM_HU(ctx->r29, 0X66);
    // 0x80230354: div         $zero, $s6, $s1
    lo = S32(S64(S32(ctx->r22)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r22)) % S64(S32(ctx->r17)));
    // 0x80230358: mfhi        $v0
    ctx->r2 = hi;
    // 0x8023035C: andi        $s2, $v0, 0xFFFF
    ctx->r18 = ctx->r2 & 0XFFFF;
    // 0x80230360: bne         $s1, $zero, L_8023036C
    if (ctx->r17 != 0) {
        // 0x80230364: nop
    
            goto L_8023036C;
    }
    // 0x80230364: nop

    // 0x80230368: break       7
    do_break(2149778280);
L_8023036C:
    // 0x8023036C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80230370: bne         $s1, $at, L_80230384
    if (ctx->r17 != ctx->r1) {
        // 0x80230374: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80230384;
    }
    // 0x80230374: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80230378: bne         $s6, $at, L_80230384
    if (ctx->r22 != ctx->r1) {
        // 0x8023037C: nop
    
            goto L_80230384;
    }
    // 0x8023037C: nop

    // 0x80230380: break       6
    do_break(2149778304);
L_80230384:
    // 0x80230384: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x80230388: jal         0x802306D0
    // 0x8023038C: sh          $a2, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r6;
    func_802306D0(rdram, ctx);
        goto after_1;
    // 0x8023038C: sh          $a2, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r6;
    after_1:
    // 0x80230390: subu        $t3, $s6, $s2
    ctx->r11 = SUB32(ctx->r22, ctx->r18);
    // 0x80230394: div         $zero, $t3, $s1
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r17)));
    // 0x80230398: lhu         $a2, 0x52($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X52);
    // 0x8023039C: mflo        $s6
    ctx->r22 = lo;
    // 0x802303A0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802303A4: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x802303A8: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x802303AC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x802303B0: bne         $s1, $zero, L_802303BC
    if (ctx->r17 != 0) {
        // 0x802303B4: nop
    
            goto L_802303BC;
    }
    // 0x802303B4: nop

    // 0x802303B8: break       7
    do_break(2149778360);
L_802303BC:
    // 0x802303BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802303C0: bne         $s1, $at, L_802303D4
    if (ctx->r17 != ctx->r1) {
        // 0x802303C4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802303D4;
    }
    // 0x802303C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802303C8: bne         $t3, $at, L_802303D4
    if (ctx->r11 != ctx->r1) {
        // 0x802303CC: nop
    
            goto L_802303D4;
    }
    // 0x802303CC: nop

    // 0x802303D0: break       6
    do_break(2149778384);
L_802303D4:
    // 0x802303D4: addiu       $v1, $s4, 0x1
    ctx->r3 = ADD32(ctx->r20, 0X1);
    // 0x802303D8: b           L_80230458
    // 0x802303DC: or          $s4, $v1, $zero
    ctx->r20 = ctx->r3 | 0;
        goto L_80230458;
    // 0x802303DC: or          $s4, $v1, $zero
    ctx->r20 = ctx->r3 | 0;
L_802303E0:
    // 0x802303E0: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x802303E4: addiu       $v1, $s4, 0x1
    ctx->r3 = ADD32(ctx->r20, 0X1);
    // 0x802303E8: beq         $t4, $zero, L_80230424
    if (ctx->r12 == 0) {
        // 0x802303EC: nop
    
            goto L_80230424;
    }
    // 0x802303EC: nop

    // 0x802303F0: bnel        $fp, $v1, L_80230414
    if (ctx->r30 != ctx->r3) {
        // 0x802303F4: addiu       $t5, $zero, 0x30
        ctx->r13 = ADD32(0, 0X30);
            goto L_80230414;
    }
    goto skip_2;
    // 0x802303F4: addiu       $t5, $zero, 0x30
    ctx->r13 = ADD32(0, 0X30);
    skip_2:
    // 0x802303F8: beql        $a2, $zero, L_80230414
    if (ctx->r6 == 0) {
        // 0x802303FC: addiu       $t5, $zero, 0x30
        ctx->r13 = ADD32(0, 0X30);
            goto L_80230414;
    }
    goto skip_3;
    // 0x802303FC: addiu       $t5, $zero, 0x30
    ctx->r13 = ADD32(0, 0X30);
    skip_3:
    // 0x80230400: sb          $a1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r5;
    // 0x80230404: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x80230408: b           L_80230454
    // 0x8023040C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
        goto L_80230454;
    // 0x8023040C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80230410: addiu       $t5, $zero, 0x30
    ctx->r13 = ADD32(0, 0X30);
L_80230414:
    // 0x80230414: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
    // 0x80230418: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8023041C: b           L_80230454
    // 0x80230420: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
        goto L_80230454;
    // 0x80230420: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_80230424:
    // 0x80230424: bne         $s5, $zero, L_80230448
    if (ctx->r21 != 0) {
        // 0x80230428: addiu       $v1, $s4, 0x1
        ctx->r3 = ADD32(ctx->r20, 0X1);
            goto L_80230448;
    }
    // 0x80230428: addiu       $v1, $s4, 0x1
    ctx->r3 = ADD32(ctx->r20, 0X1);
    // 0x8023042C: beql        $a2, $zero, L_8023044C
    if (ctx->r6 == 0) {
        // 0x80230430: sb          $s7, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r23;
            goto L_8023044C;
    }
    goto skip_4;
    // 0x80230430: sb          $s7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r23;
    skip_4:
    // 0x80230434: sb          $a1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r5;
    // 0x80230438: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8023043C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80230440: b           L_80230454
    // 0x80230444: addiu       $v1, $s4, 0x1
    ctx->r3 = ADD32(ctx->r20, 0X1);
        goto L_80230454;
    // 0x80230444: addiu       $v1, $s4, 0x1
    ctx->r3 = ADD32(ctx->r20, 0X1);
L_80230448:
    // 0x80230448: sb          $s7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r23;
L_8023044C:
    // 0x8023044C: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x80230450: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_80230454:
    // 0x80230454: or          $s4, $v1, $zero
    ctx->r20 = ctx->r3 | 0;
L_80230458:
    // 0x80230458: bne         $v1, $fp, L_8023034C
    if (ctx->r3 != ctx->r30) {
        // 0x8023045C: addiu       $s5, $s5, -0x1
        ctx->r21 = ADD32(ctx->r21, -0X1);
            goto L_8023034C;
    }
    // 0x8023045C: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
L_80230460:
    // 0x80230460: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
L_80230464:
    // 0x80230464: addu        $s3, $s3, $fp
    ctx->r19 = ADD32(ctx->r19, ctx->r30);
    // 0x80230468: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8023046C: sw          $s3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r19;
    // 0x80230470: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80230474: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80230478: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8023047C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80230480: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80230484: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80230488: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023048C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80230490: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80230494: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80230498: jr          $ra
    // 0x8023049C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8023049C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80202424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80202424: andi        $a2, $a1, 0xFFFF
    ctx->r6 = ctx->r5 & 0XFFFF;
    // 0x80202428: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x8020242C: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x80202430: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80202434: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80202438: sw          $a1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r5;
    // 0x8020243C: addiu       $t7, $t7, 0x6D70
    ctx->r15 = ADD32(ctx->r15, 0X6D70);
    // 0x80202440: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80202444: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x80202448: lw          $t8, 0x4C($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4C);
    // 0x8020244C: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x80202450: sll         $v1, $a3, 2
    ctx->r3 = S32(ctx->r7 << 2);
    // 0x80202454: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80202458: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
    // 0x8020245C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80202460: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80202464: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
    // 0x80202468: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x8020246C: lwc1        $f4, 0x40($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X40);
    // 0x80202470: lwc1        $f6, 0x48($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X48);
    // 0x80202474: lw          $t9, 0x6DE4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6DE4);
    // 0x80202478: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8020247C: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80202480: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80202484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80202488: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
    // 0x8020248C: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x80202490: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x80202494: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x80202498: addu        $v0, $v1, $t9
    ctx->r2 = ADD32(ctx->r3, ctx->r25);
    // 0x8020249C: lw          $t0, 0x98($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X98);
    // 0x802024A0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x802024A4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x802024A8: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x802024AC: jal         0x80228DE0
    // 0x802024B0: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802024B0: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_0:
    // 0x802024B4: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x802024B8: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x802024BC: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802024C0: andi        $t1, $v1, 0x8
    ctx->r9 = ctx->r3 & 0X8;
    // 0x802024C4: beq         $t1, $zero, L_8020283C
    if (ctx->r9 == 0) {
        // 0x802024C8: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020283C;
    }
    // 0x802024C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802024CC: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802024D0: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802024D4: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802024D8: andi        $t2, $v1, 0x2
    ctx->r10 = ctx->r3 & 0X2;
    // 0x802024DC: lwc1        $f0, 0x6C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802024E0: lwc1        $f2, 0x70($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802024E4: lwc1        $f12, 0x74($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X74);
    // 0x802024E8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x802024EC: swc1        $f18, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f18.u32l;
    // 0x802024F0: swc1        $f4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f4.u32l;
    // 0x802024F4: beq         $t2, $zero, L_80202688
    if (ctx->r10 == 0) {
        // 0x802024F8: swc1        $f6, 0xA8($sp)
        MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
            goto L_80202688;
    }
    // 0x802024F8: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    // 0x802024FC: lwc1        $f8, 0x40($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X40);
    // 0x80202500: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x80202504: addiu       $a1, $v0, 0x58
    ctx->r5 = ADD32(ctx->r2, 0X58);
    // 0x80202508: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x8020250C: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x80202510: lwc1        $f18, 0x44($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80202514: sub.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x80202518: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x8020251C: lwc1        $f6, 0x48($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X48);
    // 0x80202520: swc1        $f12, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f12.u32l;
    // 0x80202524: swc1        $f2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f2.u32l;
    // 0x80202528: sub.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x8020252C: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x80202530: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80202534: jal         0x80234BE4
    // 0x80202538: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    func_80234BE4(rdram, ctx);
        goto after_1;
    // 0x80202538: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x8020253C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80202540: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x80202544: lwc1        $f2, 0x98($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80202548: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8020254C: lwc1        $f0, 0x94($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80202550: bc1fl       L_80202578
    if (!c1cs) {
        // 0x80202554: lwc1        $f10, 0x58($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X58);
            goto L_80202578;
    }
    goto skip_0;
    // 0x80202554: lwc1        $f10, 0x58($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X58);
    skip_0:
    // 0x80202558: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8020255C: lwc1        $f12, 0x9C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80202560: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80202564: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80202568: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8020256C: b           L_80202680
    // 0x80202570: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
        goto L_80202680;
    // 0x80202570: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80202574: lwc1        $f10, 0x58($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X58);
L_80202578:
    // 0x80202578: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x8020257C: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x80202580: neg.s       $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = -ctx->f10.fl;
    // 0x80202584: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x80202588: lwc1        $f4, 0x5C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x8020258C: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80202590: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80202594: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    // 0x80202598: lwc1        $f8, 0x60($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X60);
    // 0x8020259C: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x802025A0: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x802025A4: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    // 0x802025A8: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x802025AC: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802025B0: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x802025B4: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x802025B8: lwc1        $f10, 0x50($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X50);
    // 0x802025BC: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802025C0: swc1        $f18, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f18.u32l;
    // 0x802025C4: lwc1        $f6, 0x54($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X54);
    // 0x802025C8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x802025CC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802025D0: jal         0x80234BE4
    // 0x802025D4: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    func_80234BE4(rdram, ctx);
        goto after_2;
    // 0x802025D4: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x802025D8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802025DC: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x802025E0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802025E4: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802025E8: bc1f        L_80202618
    if (!c1cs) {
        // 0x802025EC: nop
    
            goto L_80202618;
    }
    // 0x802025EC: nop

    // 0x802025F0: lwc1        $f0, 0x94($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X94);
    // 0x802025F4: lwc1        $f2, 0x98($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X98);
    // 0x802025F8: lwc1        $f12, 0x9C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x802025FC: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80202600: nop

    // 0x80202604: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80202608: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8020260C: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80202610: b           L_80202680
    // 0x80202614: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
        goto L_80202680;
    // 0x80202614: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
L_80202618:
    // 0x80202618: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8020261C: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80202620: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80202624: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80202628: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8020262C: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80202630: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80202634: lwc1        $f18, 0xB0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80202638: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x8020263C: lwc1        $f8, 0x50($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X50);
    // 0x80202640: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80202644: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80202648: sub.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x8020264C: mul.s       $f18, $f0, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80202650: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x80202654: lwc1        $f6, 0x54($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X54);
    // 0x80202658: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8020265C: lwc1        $f18, 0xB4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80202660: sub.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x80202664: mul.s       $f18, $f10, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80202668: nop

    // 0x8020266C: mul.s       $f8, $f4, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80202670: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    // 0x80202674: mul.s       $f4, $f6, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x80202678: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x8020267C: add.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f4.fl;
L_80202680:
    // 0x80202680: b           L_802026E8
    // 0x80202684: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
        goto L_802026E8;
    // 0x80202684: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_80202688:
    // 0x80202688: andi        $t4, $v1, 0x1
    ctx->r12 = ctx->r3 & 0X1;
    // 0x8020268C: beq         $t4, $zero, L_8020269C
    if (ctx->r12 == 0) {
        // 0x80202690: lwc1        $f8, 0x6C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_8020269C;
    }
    // 0x80202690: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80202694: b           L_802026E8
    // 0x80202698: lwc1        $f14, 0x84($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X84);
        goto L_802026E8;
    // 0x80202698: lwc1        $f14, 0x84($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X84);
L_8020269C:
    // 0x8020269C: lwc1        $f18, 0x30($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X30);
    // 0x802026A0: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802026A4: sub.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x802026A8: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x802026AC: lwc1        $f10, 0x34($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X34);
    // 0x802026B0: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x802026B4: sub.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x802026B8: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x802026BC: swc1        $f18, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f18.u32l;
    // 0x802026C0: lwc1        $f8, 0x38($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X38);
    // 0x802026C4: mul.s       $f18, $f4, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x802026C8: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x802026CC: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x802026D0: mul.s       $f6, $f8, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x802026D4: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    // 0x802026D8: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x802026DC: mul.s       $f8, $f4, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x802026E0: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x802026E4: add.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f8.fl;
L_802026E8:
    // 0x802026E8: lwc1        $f0, 0x94($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X94);
    // 0x802026EC: lui         $t5, 0x8025
    ctx->r13 = S32(0X8025 << 16);
    // 0x802026F0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x802026F4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x802026F8: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802026FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80202700: bc1fl       L_8020272C
    if (!c1cs) {
        // 0x80202704: lwc1        $f2, 0x90($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X90);
            goto L_8020272C;
    }
    goto skip_1;
    // 0x80202704: lwc1        $f2, 0x90($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X90);
    skip_1:
    // 0x80202708: lw          $t5, 0x6DE4($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6DE4);
    // 0x8020270C: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x80202710: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80202714: lwc1        $f18, 0x74($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X74);
    // 0x80202718: sb          $t8, 0xAE($v0)
    MEM_B(0XAE, ctx->r2) = ctx->r24;
    // 0x8020271C: sw          $zero, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = 0;
    // 0x80202720: b           L_8020291C
    // 0x80202724: swc1        $f18, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->f18.u32l;
        goto L_8020291C;
    // 0x80202724: swc1        $f18, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->f18.u32l;
    // 0x80202728: lwc1        $f2, 0x90($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X90);
L_8020272C:
    // 0x8020272C: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x80202730: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80202734: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x80202738: nop

    // 0x8020273C: bc1fl       L_80202758
    if (!c1cs) {
        // 0x80202740: sub.s       $f4, $f0, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f14.fl;
            goto L_80202758;
    }
    goto skip_2;
    // 0x80202740: sub.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f14.fl;
    skip_2:
    // 0x80202744: lw          $t9, 0x6DE4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6DE4);
    // 0x80202748: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8020274C: b           L_80202768
    // 0x80202750: lwc1        $f16, 0x70($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X70);
        goto L_80202768;
    // 0x80202750: lwc1        $f16, 0x70($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X70);
    // 0x80202754: sub.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f14.fl;
L_80202758:
    // 0x80202758: lwc1        $f6, 0x70($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X70);
    // 0x8020275C: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x80202760: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80202764: div.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
L_80202768:
    // 0x80202768: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020276C: nop

    // 0x80202770: c.eq.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl == ctx->f6.fl;
    // 0x80202774: nop

    // 0x80202778: bc1t        L_80202834
    if (c1cs) {
        // 0x8020277C: nop
    
            goto L_80202834;
    }
    // 0x8020277C: nop

    // 0x80202780: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80202784: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x80202788: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    // 0x8020278C: c.eq.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl == ctx->f4.fl;
    // 0x80202790: nop

    // 0x80202794: bc1t        L_80202834
    if (c1cs) {
        // 0x80202798: nop
    
            goto L_80202834;
    }
    // 0x80202798: nop

    // 0x8020279C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x802027A0: swc1        $f14, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f14.u32l;
    // 0x802027A4: jal         0x80234C30
    // 0x802027A8: swc1        $f16, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f16.u32l;
    func_80234C30(rdram, ctx);
        goto after_3;
    // 0x802027A8: swc1        $f16, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x802027AC: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x802027B0: lwc1        $f14, 0x84($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802027B4: lwc1        $f16, 0xB8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x802027B8: lwc1        $f2, 0x90($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X90);
    // 0x802027BC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x802027C0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x802027C4: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x802027C8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802027CC: bc1f        L_802027E0
    if (!c1cs) {
        // 0x802027D0: nop
    
            goto L_802027E0;
    }
    // 0x802027D0: nop

    // 0x802027D4: div.s       $f10, $f14, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f14.fl, ctx->f2.fl);
    // 0x802027D8: mul.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802027DC: nop

L_802027E0:
    // 0x802027E0: beql        $t2, $zero, L_802027FC
    if (ctx->r10 == 0) {
        // 0x802027E4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_802027FC;
    }
    goto skip_3;
    // 0x802027E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_3:
    // 0x802027E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802027EC: nop

    // 0x802027F0: mul.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x802027F4: nop

    // 0x802027F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_802027FC:
    // 0x802027FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80202800: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x80202804: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80202808: add.s       $f6, $f18, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x8020280C: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x80202810: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80202814: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80202818: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x8020281C: nop

    // 0x80202820: bne         $a0, $at, L_8020282C
    if (ctx->r4 != ctx->r1) {
        // 0x80202824: nop
    
            goto L_8020282C;
    }
    // 0x80202824: nop

    // 0x80202828: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
L_8020282C:
    // 0x8020282C: b           L_80202890
    // 0x80202830: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
        goto L_80202890;
    // 0x80202830: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_80202834:
    // 0x80202834: b           L_80202890
    // 0x80202838: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
        goto L_80202890;
    // 0x80202838: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
L_8020283C:
    // 0x8020283C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80202840: lwc1        $f16, 0x70($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X70);
    // 0x80202844: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80202848: c.eq.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl == ctx->f6.fl;
    // 0x8020284C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80202850: bc1t        L_80202890
    if (c1cs) {
        // 0x80202854: nop
    
            goto L_80202890;
    }
    // 0x80202854: nop

    // 0x80202858: lwc1        $f4, 0x78($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X78);
    // 0x8020285C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80202860: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x80202864: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80202868: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8020286C: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x80202870: mul.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80202874: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80202878: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x8020287C: nop

    // 0x80202880: bnel        $a0, $at, L_80202894
    if (ctx->r4 != ctx->r1) {
        // 0x80202884: andi        $t5, $v1, 0x4
        ctx->r13 = ctx->r3 & 0X4;
            goto L_80202894;
    }
    goto skip_4;
    // 0x80202884: andi        $t5, $v1, 0x4
    ctx->r13 = ctx->r3 & 0X4;
    skip_4:
    // 0x80202888: b           L_80202890
    // 0x8020288C: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
        goto L_80202890;
    // 0x8020288C: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
L_80202890:
    // 0x80202890: andi        $t5, $v1, 0x4
    ctx->r13 = ctx->r3 & 0X4;
L_80202894:
    // 0x80202894: beq         $t5, $zero, L_802028BC
    if (ctx->r13 == 0) {
        // 0x80202898: lui         $t0, 0x8025
        ctx->r8 = S32(0X8025 << 16);
            goto L_802028BC;
    }
    // 0x80202898: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x8020289C: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x802028A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802028A4: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802028A8: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802028AC: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802028B0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x802028B4: b           L_802028DC
    // 0x802028B8: sb          $t7, 0xAF($v0)
    MEM_B(0XAF, ctx->r2) = ctx->r15;
        goto L_802028DC;
    // 0x802028B8: sb          $t7, 0xAF($v0)
    MEM_B(0XAF, ctx->r2) = ctx->r15;
L_802028BC:
    // 0x802028BC: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x802028C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802028C4: lwc1        $f4, 0x7C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X7C);
    // 0x802028C8: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802028CC: trunc.w.s   $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802028D0: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x802028D4: nop

    // 0x802028D8: sb          $t9, 0xAF($v0)
    MEM_B(0XAF, ctx->r2) = ctx->r25;
L_802028DC:
    // 0x802028DC: lw          $t0, 0x6DE4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6DE4);
    // 0x802028E0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x802028E4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802028E8: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x802028EC: lwc1        $f6, 0x74($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X74);
    // 0x802028F0: sb          $a0, 0xAE($v0)
    MEM_B(0XAE, ctx->r2) = ctx->r4;
    // 0x802028F4: swc1        $f6, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->f6.u32l;
    // 0x802028F8: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802028FC: lwc1        $f8, 0x26B4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X26B4);
    // 0x80202900: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x80202904: nop

    // 0x80202908: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8020290C: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80202910: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x80202914: nop

    // 0x80202918: sw          $t4, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r12;
L_8020291C:
    // 0x8020291C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80202920: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x80202924: jr          $ra
    // 0x80202928: nop

    return;
    // 0x80202928: nop

;}
RECOMP_FUNC void func_8023FD34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FD34: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x8023FD38: sll         $v0, $a1, 4
    ctx->r2 = S32(ctx->r5 << 4);
    // 0x8023FD3C: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x8023FD40: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8023FD44: sb          $zero, 0x6($t7)
    MEM_B(0X6, ctx->r15) = 0;
    // 0x8023FD48: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x8023FD4C: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x8023FD50: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8023FD54: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8023FD58: sb          $zero, 0xA($t9)
    MEM_B(0XA, ctx->r25) = 0;
    // 0x8023FD5C: lw          $t1, 0x60($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X60);
    // 0x8023FD60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8023FD64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8023FD68: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x8023FD6C: sb          $t0, 0x7($t2)
    MEM_B(0X7, ctx->r10) = ctx->r8;
    // 0x8023FD70: lw          $t4, 0x60($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X60);
    // 0x8023FD74: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x8023FD78: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x8023FD7C: sb          $t3, 0x9($t5)
    MEM_B(0X9, ctx->r13) = ctx->r11;
    // 0x8023FD80: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x8023FD84: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8023FD88: sb          $t6, 0x8($t8)
    MEM_B(0X8, ctx->r24) = ctx->r14;
    // 0x8023FD8C: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x8023FD90: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x8023FD94: sb          $zero, 0xB($t1)
    MEM_B(0XB, ctx->r9) = 0;
    // 0x8023FD98: lw          $t2, 0x60($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X60);
    // 0x8023FD9C: addu        $t4, $t2, $v0
    ctx->r12 = ADD32(ctx->r10, ctx->r2);
    // 0x8023FDA0: sh          $t0, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r8;
    // 0x8023FDA4: lw          $t3, 0x60($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X60);
    // 0x8023FDA8: addu        $t5, $t3, $v0
    ctx->r13 = ADD32(ctx->r11, ctx->r2);
    // 0x8023FDAC: jr          $ra
    // 0x8023FDB0: swc1        $f4, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f4.u32l;
    return;
    // 0x8023FDB0: swc1        $f4, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8021FFA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021FFA8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021FFAC: jr          $ra
    // 0x8021FFB0: sw          $a0, -0x1760($at)
    MEM_W(-0X1760, ctx->r1) = ctx->r4;
    return;
    // 0x8021FFB0: sw          $a0, -0x1760($at)
    MEM_W(-0X1760, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8022D4EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022D4EC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8022D4F0: addiu       $a1, $a1, -0x78C8
    ctx->r5 = ADD32(ctx->r5, -0X78C8);
    // 0x8022D4F4: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8022D4F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D4FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D500: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8022D504: slti        $at, $t7, 0x5
    ctx->r1 = SIGNED(ctx->r15) < 0X5 ? 1 : 0;
    // 0x8022D508: bne         $at, $zero, L_8022D514
    if (ctx->r1 != 0) {
        // 0x8022D50C: sw          $t7, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r15;
            goto L_8022D514;
    }
    // 0x8022D50C: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8022D510: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
L_8022D514:
    // 0x8022D514: jal         0x80207130
    // 0x8022D518: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    func_80207130(rdram, ctx);
        goto after_0;
    // 0x8022D518: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    after_0:
    // 0x8022D51C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8022D520: addiu       $a1, $a1, -0x78C8
    ctx->r5 = ADD32(ctx->r5, -0X78C8);
    // 0x8022D524: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8022D528: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022D52C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D530: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    // 0x8022D534: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8022D538: sdc1        $f0, -0x7910($at)
    CHECK_FR(ctx, 0);
    SD(ctx->f0.u64, -0X7910, ctx->r1);
    // 0x8022D53C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022D540: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022D544: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022D548: sw          $zero, -0x7928($at)
    MEM_W(-0X7928, ctx->r1) = 0;
    // 0x8022D54C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022D550: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022D554: sw          $zero, -0x7940($at)
    MEM_W(-0X7940, ctx->r1) = 0;
    // 0x8022D558: jr          $ra
    // 0x8022D55C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8022D55C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024A590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A590: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8024A594: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x8024A598: sb          $zero, 0xF($sp)
    MEM_B(0XF, ctx->r29) = 0;
    // 0x8024A59C: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
L_8024A5A0:
    // 0x8024A5A0: lbu         $t6, 0xF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XF);
    // 0x8024A5A4: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x8024A5A8: beq         $t7, $zero, L_8024A5BC
    if (ctx->r15 == 0) {
        // 0x8024A5AC: nop
    
            goto L_8024A5BC;
    }
    // 0x8024A5AC: nop

    // 0x8024A5B0: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x8024A5B4: b           L_8024A5C0
    // 0x8024A5B8: sb          $t8, 0xE($sp)
    MEM_B(0XE, ctx->r29) = ctx->r24;
        goto L_8024A5C0;
    // 0x8024A5B8: sb          $t8, 0xE($sp)
    MEM_B(0XE, ctx->r29) = ctx->r24;
L_8024A5BC:
    // 0x8024A5BC: sb          $zero, 0xE($sp)
    MEM_B(0XE, ctx->r29) = 0;
L_8024A5C0:
    // 0x8024A5C0: lbu         $t9, 0xF($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XF);
    // 0x8024A5C4: andi        $t1, $a0, 0x400
    ctx->r9 = ctx->r4 & 0X400;
    // 0x8024A5C8: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8024A5CC: beq         $t1, $zero, L_8024A5DC
    if (ctx->r9 == 0) {
        // 0x8024A5D0: sb          $t0, 0xF($sp)
        MEM_B(0XF, ctx->r29) = ctx->r8;
            goto L_8024A5DC;
    }
    // 0x8024A5D0: sb          $t0, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r8;
    // 0x8024A5D4: b           L_8024A5E0
    // 0x8024A5D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8024A5E0;
    // 0x8024A5D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8024A5DC:
    // 0x8024A5DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8024A5E0:
    // 0x8024A5E0: lbu         $t2, 0xF($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XF);
    // 0x8024A5E4: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x8024A5E8: lbu         $t7, 0xE($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XE);
    // 0x8024A5EC: andi        $t3, $a1, 0xFF
    ctx->r11 = ctx->r5 & 0XFF;
    // 0x8024A5F0: sll         $t5, $a0, 1
    ctx->r13 = S32(ctx->r4 << 1);
    // 0x8024A5F4: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x8024A5F8: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x8024A5FC: andi        $t8, $t4, 0xFF
    ctx->r24 = ctx->r12 & 0XFF;
    // 0x8024A600: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8024A604: slti        $at, $t1, 0x10
    ctx->r1 = SIGNED(ctx->r9) < 0X10 ? 1 : 0;
    // 0x8024A608: sb          $t4, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r12;
    // 0x8024A60C: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8024A610: xor         $t9, $t8, $t7
    ctx->r25 = ctx->r24 ^ ctx->r15;
    // 0x8024A614: sw          $t1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r9;
    // 0x8024A618: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8024A61C: bne         $at, $zero, L_8024A5A0
    if (ctx->r1 != 0) {
        // 0x8024A620: sb          $t9, 0xF($sp)
        MEM_B(0XF, ctx->r29) = ctx->r25;
            goto L_8024A5A0;
    }
    // 0x8024A620: sb          $t9, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r25;
    // 0x8024A624: lbu         $v0, 0xF($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XF);
    // 0x8024A628: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x8024A62C: andi        $t2, $v0, 0x1F
    ctx->r10 = ctx->r2 & 0X1F;
    // 0x8024A630: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x8024A634: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x8024A638: jr          $ra
    // 0x8024A63C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    return;
    // 0x8024A63C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
;}
RECOMP_FUNC void func_80249810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249810: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80249814: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80249818: jr          $ra
    // 0x8024981C: sh          $a2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r6;
    return;
    // 0x8024981C: sh          $a2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r6;
;}
RECOMP_FUNC void func_80222E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222E24: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80222E28: lhu         $t6, -0x178C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X178C);
    // 0x80222E2C: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x80222E30: lh          $t9, -0x177C($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X177C);
    // 0x80222E34: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x80222E38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80222E3C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80222E40: lw          $t8, 0x43A8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X43A8);
    // 0x80222E44: sll         $t0, $t9, 6
    ctx->r8 = S32(ctx->r25 << 6);
    // 0x80222E48: jr          $ra
    // 0x80222E4C: addu        $v0, $t8, $t0
    ctx->r2 = ADD32(ctx->r24, ctx->r8);
    return;
    // 0x80222E4C: addu        $v0, $t8, $t0
    ctx->r2 = ADD32(ctx->r24, ctx->r8);
;}
RECOMP_FUNC void func_8022AA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022AA40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AA44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AA48: jal         0x8023CE00
    // 0x8022AA4C: nop

    func_8023CE00(rdram, ctx);
        goto after_0;
    // 0x8022AA4C: nop

    after_0:
    // 0x8022AA50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AA54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022AA58: jr          $ra
    // 0x8022AA5C: nop

    return;
    // 0x8022AA5C: nop

;}
