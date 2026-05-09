#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8022C6A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C6A4: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8022C6A8: lbu         $t6, -0x78D2($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X78D2);
    // 0x8022C6AC: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8022C6B0: lw          $t8, -0x78C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X78C0);
    // 0x8022C6B4: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8022C6B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8022C6BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022C6C0: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x8022C6C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C6C8: beq         $t8, $zero, L_8022C6E0
    if (ctx->r24 == 0) {
        // 0x8022C6CC: lw          $v1, -0x78E0($v1)
        ctx->r3 = MEM_W(ctx->r3, -0X78E0);
            goto L_8022C6E0;
    }
    // 0x8022C6CC: lw          $v1, -0x78E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X78E0);
    // 0x8022C6D0: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x8022C6D4: lbu         $t9, -0x78D4($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X78D4);
    // 0x8022C6D8: beql        $t9, $zero, L_8022C7BC
    if (ctx->r25 == 0) {
        // 0x8022C6DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022C7BC;
    }
    goto skip_0;
    // 0x8022C6DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_8022C6E0:
    // 0x8022C6E0: bne         $v1, $zero, L_8022C6FC
    if (ctx->r3 != 0) {
        // 0x8022C6E4: lui         $t0, 0x8028
        ctx->r8 = S32(0X8028 << 16);
            goto L_8022C6FC;
    }
    // 0x8022C6E4: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8022C6E8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022C6EC: jal         0x80231A24
    // 0x8022C6F0: addiu       $a0, $a0, 0x4448
    ctx->r4 = ADD32(ctx->r4, 0X4448);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022C6F0: addiu       $a0, $a0, 0x4448
    ctx->r4 = ADD32(ctx->r4, 0X4448);
    after_0:
    // 0x8022C6F4: b           L_8022C7BC
    // 0x8022C6F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022C7BC;
    // 0x8022C6F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022C6FC:
    // 0x8022C6FC: lbu         $t0, -0x78D7($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X78D7);
    // 0x8022C700: addiu       $v0, $zero, 0x67
    ctx->r2 = ADD32(0, 0X67);
    // 0x8022C704: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x8022C708: beql        $v0, $t0, L_8022C7BC
    if (ctx->r2 == ctx->r8) {
        // 0x8022C70C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022C7BC;
    }
    goto skip_1;
    // 0x8022C70C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8022C710: lbu         $t1, -0x78D4($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X78D4);
    // 0x8022C714: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x8022C718: bne         $t1, $zero, L_8022C72C
    if (ctx->r9 != 0) {
        // 0x8022C71C: nop
    
            goto L_8022C72C;
    }
    // 0x8022C71C: nop

    // 0x8022C720: lbu         $t2, -0x78D6($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X78D6);
    // 0x8022C724: beql        $v0, $t2, L_8022C7BC
    if (ctx->r2 == ctx->r10) {
        // 0x8022C728: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022C7BC;
    }
    goto skip_2;
    // 0x8022C728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
L_8022C72C:
    // 0x8022C72C: jal         0x8023DAE0
    // 0x8022C730: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8023DAE0(rdram, ctx);
        goto after_1;
    // 0x8022C730: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x8022C734: jal         0x8023DB20
    // 0x8022C738: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8023DB20(rdram, ctx);
        goto after_2;
    // 0x8022C738: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022C73C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8022C740: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x8022C744: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022C748: bnel        $v0, $t3, L_8022C7BC
    if (ctx->r2 != ctx->r11) {
        // 0x8022C74C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022C7BC;
    }
    goto skip_3;
    // 0x8022C74C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x8022C750: lbu         $t4, -0x78D4($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X78D4);
    // 0x8022C754: addiu       $v1, $zero, 0x67
    ctx->r3 = ADD32(0, 0X67);
    // 0x8022C758: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C75C: bne         $t4, $zero, L_8022C780
    if (ctx->r12 != 0) {
        // 0x8022C760: sb          $v1, -0x78D7($at)
        MEM_B(-0X78D7, ctx->r1) = ctx->r3;
            goto L_8022C780;
    }
    // 0x8022C760: sb          $v1, -0x78D7($at)
    MEM_B(-0X78D7, ctx->r1) = ctx->r3;
    // 0x8022C764: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8022C768: addiu       $v0, $v0, -0x78CC
    ctx->r2 = ADD32(ctx->r2, -0X78CC);
    // 0x8022C76C: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x8022C770: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C774: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8022C778: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8022C77C: sb          $v1, -0x78D6($at)
    MEM_B(-0X78D6, ctx->r1) = ctx->r3;
L_8022C780:
    // 0x8022C780: jal         0x8022D560
    // 0x8022C784: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    func_8022D560(rdram, ctx);
        goto after_3;
    // 0x8022C784: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_3:
    // 0x8022C788: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8022C78C: addiu       $v0, $v0, -0x78D5
    ctx->r2 = ADD32(ctx->r2, -0X78D5);
    // 0x8022C790: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8022C794: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C798: jal         0x8023D7F0
    // 0x8022C79C: sb          $zero, -0x78D4($at)
    MEM_B(-0X78D4, ctx->r1) = 0;
    func_8023D7F0(rdram, ctx);
        goto after_4;
    // 0x8022C79C: sb          $zero, -0x78D4($at)
    MEM_B(-0X78D4, ctx->r1) = 0;
    after_4:
    // 0x8022C7A0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8022C7A4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8022C7A8: jal         0x8023D92C
    // 0x8022C7AC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8023D92C(rdram, ctx);
        goto after_5;
    // 0x8022C7AC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_5:
    // 0x8022C7B0: jal         0x8023DA94
    // 0x8022C7B4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8023DA94(rdram, ctx);
        goto after_6;
    // 0x8022C7B4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_6:
    // 0x8022C7B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022C7BC:
    // 0x8022C7BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8022C7C0: jr          $ra
    // 0x8022C7C4: nop

    return;
    // 0x8022C7C4: nop

;}
RECOMP_FUNC void func_8022363C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022363C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80223640: jr          $ra
    // 0x80223644: sw          $a0, -0x17B0($at)
    MEM_W(-0X17B0, ctx->r1) = ctx->r4;
    return;
    // 0x80223644: sw          $a0, -0x17B0($at)
    MEM_W(-0X17B0, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8023D2B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D2B8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8023D2BC: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x8023D2C0: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x8023D2C4: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x8023D2C8: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x8023D2CC: ld          $t7, 0x10($sp)
    ctx->r15 = LD(ctx->r29, 0X10);
    // 0x8023D2D0: ld          $t6, 0x8($sp)
    ctx->r14 = LD(ctx->r29, 0X8);
    // 0x8023D2D4: ddiv        $zero, $t6, $t7
    DDIV(S64(ctx->r14), S64(ctx->r15), &lo, &hi);
    // 0x8023D2D8: nop

    // 0x8023D2DC: bne         $t7, $zero, L_8023D2E8
    if (ctx->r15 != 0) {
        // 0x8023D2E0: nop
    
            goto L_8023D2E8;
    }
    // 0x8023D2E0: nop

    // 0x8023D2E4: break       7
    do_break(2149831396);
L_8023D2E8:
    // 0x8023D2E8: daddiu      $at, $zero, -0x1
    ctx->r1 = 0 + -0X1;
    // 0x8023D2EC: bne         $t7, $at, L_8023D304
    if (ctx->r15 != ctx->r1) {
        // 0x8023D2F0: daddiu      $at, $zero, 0x1
        ctx->r1 = 0 + 0X1;
            goto L_8023D304;
    }
    // 0x8023D2F0: daddiu      $at, $zero, 0x1
    ctx->r1 = 0 + 0X1;
    // 0x8023D2F4: dsll32      $at, $at, 31
    ctx->r1 = ctx->r1 << (31 + 32);
    // 0x8023D2F8: bne         $t6, $at, L_8023D304
    if (ctx->r14 != ctx->r1) {
        // 0x8023D2FC: nop
    
            goto L_8023D304;
    }
    // 0x8023D2FC: nop

    // 0x8023D300: break       6
    do_break(2149831424);
L_8023D304:
    // 0x8023D304: mfhi        $t8
    ctx->r24 = hi;
    // 0x8023D308: sd          $t8, 0x0($sp)
    SD(ctx->r24, 0X0, ctx->r29);
    // 0x8023D30C: bgez        $t8, L_8023D31C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8023D310: nop
    
            goto L_8023D31C;
    }
    // 0x8023D310: nop

    // 0x8023D314: bgtz        $t7, L_8023D334
    if (SIGNED(ctx->r15) > 0) {
        // 0x8023D318: nop
    
            goto L_8023D334;
    }
    // 0x8023D318: nop

L_8023D31C:
    // 0x8023D31C: ld          $t9, 0x0($sp)
    ctx->r25 = LD(ctx->r29, 0X0);
    // 0x8023D320: blez        $t9, L_8023D344
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8023D324: nop
    
            goto L_8023D344;
    }
    // 0x8023D324: nop

    // 0x8023D328: ld          $t0, 0x10($sp)
    ctx->r8 = LD(ctx->r29, 0X10);
    // 0x8023D32C: bgez        $t0, L_8023D344
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8023D330: nop
    
            goto L_8023D344;
    }
    // 0x8023D330: nop

L_8023D334:
    // 0x8023D334: ld          $t1, 0x0($sp)
    ctx->r9 = LD(ctx->r29, 0X0);
    // 0x8023D338: ld          $t2, 0x10($sp)
    ctx->r10 = LD(ctx->r29, 0X10);
    // 0x8023D33C: daddu       $t3, $t1, $t2
    ctx->r11 = ctx->r9 + ctx->r10;
    // 0x8023D340: sd          $t3, 0x0($sp)
    SD(ctx->r11, 0X0, ctx->r29);
L_8023D344:
    // 0x8023D344: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x8023D348: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x8023D34C: jr          $ra
    // 0x8023D350: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8023D350: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80246C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246C70: beq         $a2, $zero, L_80246CDC
    if (ctx->r6 == 0) {
        // 0x80246C74: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_80246CDC;
    }
    // 0x80246C74: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80246C78: beq         $a0, $a1, L_80246CDC
    if (ctx->r4 == ctx->r5) {
        // 0x80246C7C: slt         $at, $a1, $a0
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80246CDC;
    }
    // 0x80246C7C: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80246C80: bnel        $at, $zero, L_80246CA4
    if (ctx->r1 != 0) {
        // 0x80246C84: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_80246CA4;
    }
    goto skip_0;
    // 0x80246C84: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_0:
    // 0x80246C88: add         $v0, $a0, $a2
    ctx->r2 = ADD32(ctx->r4, ctx->r6);
    // 0x80246C8C: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80246C90: beql        $at, $zero, L_80246CA4
    if (ctx->r1 == 0) {
        // 0x80246C94: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_80246CA4;
    }
    goto skip_1;
    // 0x80246C94: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_1:
    // 0x80246C98: b           L_80246E08
    // 0x80246C9C: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
        goto L_80246E08;
    // 0x80246C9C: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x80246CA0: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_80246CA4:
    // 0x80246CA4: bne         $at, $zero, L_80246CBC
    if (ctx->r1 != 0) {
        // 0x80246CA8: nop
    
            goto L_80246CBC;
    }
    // 0x80246CA8: nop

    // 0x80246CAC: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x80246CB0: andi        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 & 0X3;
    // 0x80246CB4: beq         $v0, $v1, L_80246CE4
    if (ctx->r2 == ctx->r3) {
        // 0x80246CB8: nop
    
            goto L_80246CE4;
    }
    // 0x80246CB8: nop

L_80246CBC:
    // 0x80246CBC: beq         $a2, $zero, L_80246CDC
    if (ctx->r6 == 0) {
        // 0x80246CC0: nop
    
            goto L_80246CDC;
    }
    // 0x80246CC0: nop

    // 0x80246CC4: addu        $v1, $a0, $a2
    ctx->r3 = ADD32(ctx->r4, ctx->r6);
L_80246CC8:
    // 0x80246CC8: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80246CCC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80246CD0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80246CD4: bne         $a0, $v1, L_80246CC8
    if (ctx->r4 != ctx->r3) {
        // 0x80246CD8: sb          $v0, -0x1($a1)
        MEM_B(-0X1, ctx->r5) = ctx->r2;
            goto L_80246CC8;
    }
    // 0x80246CD8: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
L_80246CDC:
    // 0x80246CDC: jr          $ra
    // 0x80246CE0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x80246CE0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_80246CE4:
    // 0x80246CE4: beq         $v0, $zero, L_80246D48
    if (ctx->r2 == 0) {
        // 0x80246CE8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80246D48;
    }
    // 0x80246CE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80246CEC: beq         $v0, $at, L_80246D2C
    if (ctx->r2 == ctx->r1) {
        // 0x80246CF0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80246D2C;
    }
    // 0x80246CF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80246CF4: beql        $v0, $at, L_80246D18
    if (ctx->r2 == ctx->r1) {
        // 0x80246CF8: lh          $v0, 0x0($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X0);
            goto L_80246D18;
    }
    goto skip_2;
    // 0x80246CF8: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    skip_2:
    // 0x80246CFC: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80246D00: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80246D04: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80246D08: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80246D0C: b           L_80246D48
    // 0x80246D10: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
        goto L_80246D48;
    // 0x80246D10: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
    // 0x80246D14: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
L_80246D18:
    // 0x80246D18: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80246D1C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80246D20: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x80246D24: b           L_80246D48
    // 0x80246D28: sh          $v0, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r2;
        goto L_80246D48;
    // 0x80246D28: sh          $v0, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r2;
L_80246D2C:
    // 0x80246D2C: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80246D30: lh          $v1, 0x1($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1);
    // 0x80246D34: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x80246D38: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x80246D3C: addiu       $a2, $a2, -0x3
    ctx->r6 = ADD32(ctx->r6, -0X3);
    // 0x80246D40: sb          $v0, -0x3($a1)
    MEM_B(-0X3, ctx->r5) = ctx->r2;
    // 0x80246D44: sh          $v1, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r3;
L_80246D48:
    // 0x80246D48: slti        $at, $a2, 0x20
    ctx->r1 = SIGNED(ctx->r6) < 0X20 ? 1 : 0;
    // 0x80246D4C: bnel        $at, $zero, L_80246DA8
    if (ctx->r1 != 0) {
        // 0x80246D50: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_80246DA8;
    }
    goto skip_3;
    // 0x80246D50: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_3:
    // 0x80246D54: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80246D58: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x80246D5C: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x80246D60: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x80246D64: lw          $t2, 0x10($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X10);
    // 0x80246D68: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x80246D6C: lw          $t4, 0x18($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X18);
    // 0x80246D70: lw          $t5, 0x1C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X1C);
    // 0x80246D74: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80246D78: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x80246D7C: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    // 0x80246D80: sw          $v0, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->r2;
    // 0x80246D84: sw          $v1, -0x1C($a1)
    MEM_W(-0X1C, ctx->r5) = ctx->r3;
    // 0x80246D88: sw          $t0, -0x18($a1)
    MEM_W(-0X18, ctx->r5) = ctx->r8;
    // 0x80246D8C: sw          $t1, -0x14($a1)
    MEM_W(-0X14, ctx->r5) = ctx->r9;
    // 0x80246D90: sw          $t2, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->r10;
    // 0x80246D94: sw          $t3, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->r11;
    // 0x80246D98: sw          $t4, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r12;
    // 0x80246D9C: b           L_80246D48
    // 0x80246DA0: sw          $t5, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r13;
        goto L_80246D48;
    // 0x80246DA0: sw          $t5, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r13;
L_80246DA4:
    // 0x80246DA4: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_80246DA8:
    // 0x80246DA8: bnel        $at, $zero, L_80246DE4
    if (ctx->r1 != 0) {
        // 0x80246DAC: slti        $at, $a2, 0x4
        ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
            goto L_80246DE4;
    }
    goto skip_4;
    // 0x80246DAC: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    skip_4:
    // 0x80246DB0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80246DB4: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x80246DB8: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x80246DBC: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x80246DC0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80246DC4: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x80246DC8: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x80246DCC: sw          $v0, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->r2;
    // 0x80246DD0: sw          $v1, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->r3;
    // 0x80246DD4: sw          $t0, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r8;
    // 0x80246DD8: b           L_80246DA4
    // 0x80246DDC: sw          $t1, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r9;
        goto L_80246DA4;
    // 0x80246DDC: sw          $t1, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r9;
L_80246DE0:
    // 0x80246DE0: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
L_80246DE4:
    // 0x80246DE4: bne         $at, $zero, L_80246CBC
    if (ctx->r1 != 0) {
        // 0x80246DE8: nop
    
            goto L_80246CBC;
    }
    // 0x80246DE8: nop

    // 0x80246DEC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80246DF0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80246DF4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80246DF8: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x80246DFC: b           L_80246DE0
    // 0x80246E00: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
        goto L_80246DE0;
    // 0x80246E00: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x80246E04: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_80246E08:
    // 0x80246E08: add         $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x80246E0C: bne         $at, $zero, L_80246E24
    if (ctx->r1 != 0) {
        // 0x80246E10: add         $a1, $a1, $a2
        ctx->r5 = ADD32(ctx->r5, ctx->r6);
            goto L_80246E24;
    }
    // 0x80246E10: add         $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x80246E14: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x80246E18: andi        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 & 0X3;
    // 0x80246E1C: beq         $v0, $v1, L_80246E54
    if (ctx->r2 == ctx->r3) {
        // 0x80246E20: nop
    
            goto L_80246E54;
    }
    // 0x80246E20: nop

L_80246E24:
    // 0x80246E24: beq         $a2, $zero, L_80246CDC
    if (ctx->r6 == 0) {
        // 0x80246E28: nop
    
            goto L_80246CDC;
    }
    // 0x80246E28: nop

    // 0x80246E2C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80246E30: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80246E34: subu        $v1, $a0, $a2
    ctx->r3 = SUB32(ctx->r4, ctx->r6);
L_80246E38:
    // 0x80246E38: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80246E3C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80246E40: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80246E44: bne         $a0, $v1, L_80246E38
    if (ctx->r4 != ctx->r3) {
        // 0x80246E48: sb          $v0, 0x1($a1)
        MEM_B(0X1, ctx->r5) = ctx->r2;
            goto L_80246E38;
    }
    // 0x80246E48: sb          $v0, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r2;
    // 0x80246E4C: jr          $ra
    // 0x80246E50: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x80246E50: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_80246E54:
    // 0x80246E54: beq         $v0, $zero, L_80246EB8
    if (ctx->r2 == 0) {
        // 0x80246E58: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80246EB8;
    }
    // 0x80246E58: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80246E5C: beq         $v0, $at, L_80246E9C
    if (ctx->r2 == ctx->r1) {
        // 0x80246E60: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80246E9C;
    }
    // 0x80246E60: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80246E64: beql        $v0, $at, L_80246E88
    if (ctx->r2 == ctx->r1) {
        // 0x80246E68: lh          $v0, -0x2($a0)
        ctx->r2 = MEM_H(ctx->r4, -0X2);
            goto L_80246E88;
    }
    goto skip_5;
    // 0x80246E68: lh          $v0, -0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, -0X2);
    skip_5:
    // 0x80246E6C: lb          $v0, -0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, -0X1);
    // 0x80246E70: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80246E74: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80246E78: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80246E7C: b           L_80246EB8
    // 0x80246E80: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
        goto L_80246EB8;
    // 0x80246E80: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80246E84: lh          $v0, -0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, -0X2);
L_80246E88:
    // 0x80246E88: addiu       $a0, $a0, -0x2
    ctx->r4 = ADD32(ctx->r4, -0X2);
    // 0x80246E8C: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    // 0x80246E90: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x80246E94: b           L_80246EB8
    // 0x80246E98: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
        goto L_80246EB8;
    // 0x80246E98: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80246E9C:
    // 0x80246E9C: lb          $v0, -0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, -0X1);
    // 0x80246EA0: lh          $v1, -0x3($a0)
    ctx->r3 = MEM_H(ctx->r4, -0X3);
    // 0x80246EA4: addiu       $a0, $a0, -0x3
    ctx->r4 = ADD32(ctx->r4, -0X3);
    // 0x80246EA8: addiu       $a1, $a1, -0x3
    ctx->r5 = ADD32(ctx->r5, -0X3);
    // 0x80246EAC: addiu       $a2, $a2, -0x3
    ctx->r6 = ADD32(ctx->r6, -0X3);
    // 0x80246EB0: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80246EB4: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
L_80246EB8:
    // 0x80246EB8: slti        $at, $a2, 0x20
    ctx->r1 = SIGNED(ctx->r6) < 0X20 ? 1 : 0;
    // 0x80246EBC: bnel        $at, $zero, L_80246F18
    if (ctx->r1 != 0) {
        // 0x80246EC0: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_80246F18;
    }
    goto skip_6;
    // 0x80246EC0: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_6:
    // 0x80246EC4: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x80246EC8: lw          $v1, -0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X8);
    // 0x80246ECC: lw          $t0, -0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, -0XC);
    // 0x80246ED0: lw          $t1, -0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, -0X10);
    // 0x80246ED4: lw          $t2, -0x14($a0)
    ctx->r10 = MEM_W(ctx->r4, -0X14);
    // 0x80246ED8: lw          $t3, -0x18($a0)
    ctx->r11 = MEM_W(ctx->r4, -0X18);
    // 0x80246EDC: lw          $t4, -0x1C($a0)
    ctx->r12 = MEM_W(ctx->r4, -0X1C);
    // 0x80246EE0: lw          $t5, -0x20($a0)
    ctx->r13 = MEM_W(ctx->r4, -0X20);
    // 0x80246EE4: addiu       $a0, $a0, -0x20
    ctx->r4 = ADD32(ctx->r4, -0X20);
    // 0x80246EE8: addiu       $a1, $a1, -0x20
    ctx->r5 = ADD32(ctx->r5, -0X20);
    // 0x80246EEC: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    // 0x80246EF0: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80246EF4: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x80246EF8: sw          $t0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r8;
    // 0x80246EFC: sw          $t1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r9;
    // 0x80246F00: sw          $t2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r10;
    // 0x80246F04: sw          $t3, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r11;
    // 0x80246F08: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x80246F0C: b           L_80246EB8
    // 0x80246F10: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
        goto L_80246EB8;
    // 0x80246F10: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
L_80246F14:
    // 0x80246F14: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_80246F18:
    // 0x80246F18: bnel        $at, $zero, L_80246F54
    if (ctx->r1 != 0) {
        // 0x80246F1C: slti        $at, $a2, 0x4
        ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
            goto L_80246F54;
    }
    goto skip_7;
    // 0x80246F1C: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    skip_7:
    // 0x80246F20: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x80246F24: lw          $v1, -0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X8);
    // 0x80246F28: lw          $t0, -0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, -0XC);
    // 0x80246F2C: lw          $t1, -0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, -0X10);
    // 0x80246F30: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    // 0x80246F34: addiu       $a1, $a1, -0x10
    ctx->r5 = ADD32(ctx->r5, -0X10);
    // 0x80246F38: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x80246F3C: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x80246F40: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x80246F44: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x80246F48: b           L_80246F14
    // 0x80246F4C: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
        goto L_80246F14;
    // 0x80246F4C: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
L_80246F50:
    // 0x80246F50: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
L_80246F54:
    // 0x80246F54: bne         $at, $zero, L_80246E24
    if (ctx->r1 != 0) {
        // 0x80246F58: nop
    
            goto L_80246E24;
    }
    // 0x80246F58: nop

    // 0x80246F5C: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x80246F60: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x80246F64: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x80246F68: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x80246F6C: b           L_80246F50
    // 0x80246F70: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
        goto L_80246F50;
    // 0x80246F70: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_802491F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802491F0: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x802491F4: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802491F8: lh          $t7, 0x1A($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X1A);
    // 0x802491FC: sh          $t7, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r15;
    // 0x80249200: lw          $t8, 0xC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC);
    // 0x80249204: jr          $ra
    // 0x80249208: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    return;
    // 0x80249208: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
;}
RECOMP_FUNC void func_80237174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237174: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80237178: lw          $t6, 0x910($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X910);
    // 0x8023717C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237184: beql        $t6, $zero, L_802371A0
    if (ctx->r14 == 0) {
        // 0x80237188: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802371A0;
    }
    goto skip_0;
    // 0x80237188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023718C: jal         0x80242230
    // 0x80237190: nop

    func_80242230(rdram, ctx);
        goto after_0;
    // 0x80237190: nop

    after_0:
    // 0x80237194: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80237198: sw          $zero, 0x910($at)
    MEM_W(0X910, ctx->r1) = 0;
    // 0x8023719C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802371A0:
    // 0x802371A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802371A4: jr          $ra
    // 0x802371A8: nop

    return;
    // 0x802371A8: nop

;}
RECOMP_FUNC void func_8024AC1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024AC1C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8024AC20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024AC24: jal         0x80245AD0
    // 0x8024AC28: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    func_80245AD0(rdram, ctx);
        goto after_0;
    // 0x8024AC28: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    after_0:
    // 0x8024AC2C: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x8024AC30: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8024AC34: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024AC38: sb          $t6, 0x5EB0($at)
    MEM_B(0X5EB0, ctx->r1) = ctx->r14;
    // 0x8024AC3C: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8024AC40: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8024AC44: addiu       $t0, $t0, 0x72F0
    ctx->r8 = ADD32(ctx->r8, 0X72F0);
    // 0x8024AC48: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x8024AC4C: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x8024AC50: jal         0x802465B0
    // 0x8024AC54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802465B0(rdram, ctx);
        goto after_1;
    // 0x8024AC54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8024AC58: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x8024AC5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8024AC60: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    // 0x8024AC64: jal         0x802374B0
    // 0x8024AC68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_2;
    // 0x8024AC68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8024AC6C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8024AC70: addiu       $a1, $a1, 0x3970
    ctx->r5 = ADD32(ctx->r5, 0X3970);
    // 0x8024AC74: jal         0x802465B0
    // 0x8024AC78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802465B0(rdram, ctx);
        goto after_3;
    // 0x8024AC78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8024AC7C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x8024AC80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8024AC84: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    // 0x8024AC88: jal         0x802374B0
    // 0x8024AC8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_4;
    // 0x8024AC8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8024AC90: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8024AC94: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8024AC98: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    // 0x8024AC9C: addiu       $v1, $v1, 0x3970
    ctx->r3 = ADD32(ctx->r3, 0X3970);
    // 0x8024ACA0: beq         $a0, $zero, L_8024ACC0
    if (ctx->r4 == 0) {
        // 0x8024ACA4: addiu       $t4, $sp, 0x1C
        ctx->r12 = ADD32(ctx->r29, 0X1C);
            goto L_8024ACC0;
    }
    // 0x8024ACA4: addiu       $t4, $sp, 0x1C
    ctx->r12 = ADD32(ctx->r29, 0X1C);
    // 0x8024ACA8: blez        $a0, L_8024ACC0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8024ACAC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8024ACC0;
    }
    // 0x8024ACAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024ACB0:
    // 0x8024ACB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024ACB4: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8024ACB8: bne         $at, $zero, L_8024ACB0
    if (ctx->r1 != 0) {
        // 0x8024ACBC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8024ACB0;
    }
    // 0x8024ACBC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8024ACC0:
    // 0x8024ACC0: or          $t7, $v1, $zero
    ctx->r15 = ctx->r3 | 0;
    // 0x8024ACC4: addiu       $t6, $v1, 0x24
    ctx->r14 = ADD32(ctx->r3, 0X24);
L_8024ACC8:
    // 0x8024ACC8: lwl         $at, 0x0($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X0);
    // 0x8024ACCC: lwr         $at, 0x3($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X3);
    // 0x8024ACD0: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8024ACD4: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x8024ACD8: lwl         $at, -0x8($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, -0X8);
    // 0x8024ACDC: lwr         $at, -0x5($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, -0X5);
    // 0x8024ACE0: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x8024ACE4: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x8024ACE8: lwl         $at, -0x4($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, -0X4);
    // 0x8024ACEC: lwr         $at, -0x1($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, -0X1);
    // 0x8024ACF0: bne         $t7, $t6, L_8024ACC8
    if (ctx->r15 != ctx->r14) {
        // 0x8024ACF4: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_8024ACC8;
    }
    // 0x8024ACF4: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x8024ACF8: lwl         $at, 0x0($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X0);
    // 0x8024ACFC: lwr         $at, 0x3($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X3);
    // 0x8024AD00: nop

    // 0x8024AD04: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x8024AD08: lbu         $v0, 0x1E($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1E);
    // 0x8024AD0C: lbu         $t0, 0x42($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X42);
    // 0x8024AD10: andi        $t8, $v0, 0xC0
    ctx->r24 = ctx->r2 & 0XC0;
    // 0x8024AD14: sra         $a0, $t8, 4
    ctx->r4 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8024AD18: bne         $a0, $zero, L_8024AD2C
    if (ctx->r4 != 0) {
        // 0x8024AD1C: addiu       $at, $zero, 0xEB
        ctx->r1 = ADD32(0, 0XEB);
            goto L_8024AD2C;
    }
    // 0x8024AD1C: addiu       $at, $zero, 0xEB
    ctx->r1 = ADD32(0, 0XEB);
    // 0x8024AD20: beq         $t0, $at, L_8024AD2C
    if (ctx->r8 == ctx->r1) {
        // 0x8024AD24: nop
    
            goto L_8024AD2C;
    }
    // 0x8024AD24: nop

    // 0x8024AD28: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8024AD2C:
    // 0x8024AD2C: jal         0x80245B14
    // 0x8024AD30: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    func_80245B14(rdram, ctx);
        goto after_5;
    // 0x8024AD30: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_5:
    // 0x8024AD34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024AD38: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x8024AD3C: jr          $ra
    // 0x8024AD40: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8024AD40: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8022EE60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022EE60: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8022EE64: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x8022EE68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EE6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022EE70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022EE74: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8022EE78: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8022EE7C: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8022EE80: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8022EE84: lw          $t3, 0x0($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X0);
    // 0x8022EE88: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8022EE8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8022EE90: bne         $t3, $zero, L_8022EEAC
    if (ctx->r11 != 0) {
        // 0x8022EE94: addiu       $t0, $t0, -0x78B0
        ctx->r8 = ADD32(ctx->r8, -0X78B0);
            goto L_8022EEAC;
    }
    // 0x8022EE94: addiu       $t0, $t0, -0x78B0
    ctx->r8 = ADD32(ctx->r8, -0X78B0);
    // 0x8022EE98: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022EE9C: jal         0x80231A24
    // 0x8022EEA0: addiu       $a0, $a0, 0x4A40
    ctx->r4 = ADD32(ctx->r4, 0X4A40);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022EEA0: addiu       $a0, $a0, 0x4A40
    ctx->r4 = ADD32(ctx->r4, 0X4A40);
    after_0:
    // 0x8022EEA4: b           L_8022EFCC
    // 0x8022EEA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8022EFCC;
    // 0x8022EEA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022EEAC:
    // 0x8022EEAC: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x8022EEB0: lbu         $t5, 0x19($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X19);
    // 0x8022EEB4: lbu         $t4, 0x18($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X18);
    // 0x8022EEB8: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x8022EEBC: ori         $t1, $zero, 0xFFFE
    ctx->r9 = 0 | 0XFFFE;
    // 0x8022EEC0: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022EEC4: mflo        $a0
    ctx->r4 = lo;
    // 0x8022EEC8: blezl       $a0, L_8022EFCC
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8022EECC: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_8022EFCC;
    }
    goto skip_0;
    // 0x8022EECC: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    skip_0:
    // 0x8022EED0: lw          $t6, 0x28($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X28);
L_8022EED4:
    // 0x8022EED4: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8022EED8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022EEDC: addu        $a2, $t6, $t2
    ctx->r6 = ADD32(ctx->r14, ctx->r10);
    // 0x8022EEE0: bne         $a2, $zero, L_8022EEF8
    if (ctx->r6 != 0) {
        // 0x8022EEE4: addiu       $t2, $t2, 0x4C
        ctx->r10 = ADD32(ctx->r10, 0X4C);
            goto L_8022EEF8;
    }
    // 0x8022EEE4: addiu       $t2, $t2, 0x4C
    ctx->r10 = ADD32(ctx->r10, 0X4C);
    // 0x8022EEE8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EEEC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022EEF0: b           L_8022EFBC
    // 0x8022EEF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_8022EFBC;
    // 0x8022EEF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022EEF8:
    // 0x8022EEF8: lw          $v1, 0x40($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X40);
    // 0x8022EEFC: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8022EF00: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022EF04: bne         $v1, $zero, L_8022EF18
    if (ctx->r3 != 0) {
        // 0x8022EF08: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_8022EF18;
    }
    // 0x8022EF08: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EF0C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022EF10: b           L_8022EFBC
    // 0x8022EF14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_8022EFBC;
    // 0x8022EF14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022EF18:
    // 0x8022EF18: lhu         $a1, 0x14($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X14);
    // 0x8022EF1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022EF20: blezl       $a1, L_8022EFAC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8022EF24: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_8022EFAC;
    }
    goto skip_1;
    // 0x8022EF24: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    skip_1:
    // 0x8022EF28: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
L_8022EF2C:
    // 0x8022EF2C: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x8022EF30: beq         $s0, $t1, L_8022EF44
    if (ctx->r16 == ctx->r9) {
        // 0x8022EF34: addu        $a0, $t7, $t8
        ctx->r4 = ADD32(ctx->r15, ctx->r24);
            goto L_8022EF44;
    }
    // 0x8022EF34: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x8022EF38: lhu         $t9, 0x0($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X0);
    // 0x8022EF3C: bnel        $s0, $t9, L_8022EF84
    if (ctx->r16 != ctx->r25) {
        // 0x8022EF40: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022EF84;
    }
    goto skip_2;
    // 0x8022EF40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_2:
L_8022EF44:
    // 0x8022EF44: lhu         $t4, 0x4A($a2)
    ctx->r12 = MEM_HU(ctx->r6, 0X4A);
    // 0x8022EF48: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x8022EF4C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8022EF50: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x8022EF54: sll         $t6, $t5, 12
    ctx->r14 = S32(ctx->r13 << 12);
    // 0x8022EF58: andi        $t7, $v0, 0xFFF
    ctx->r15 = ctx->r2 & 0XFFF;
    // 0x8022EF5C: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8022EF60: addu        $t4, $t0, $t9
    ctx->r12 = ADD32(ctx->r8, ctx->r25);
    // 0x8022EF64: slti        $at, $a3, 0x80
    ctx->r1 = SIGNED(ctx->r7) < 0X80 ? 1 : 0;
    // 0x8022EF68: bne         $at, $zero, L_8022EF78
    if (ctx->r1 != 0) {
        // 0x8022EF6C: sw          $t8, 0x0($t4)
        MEM_W(0X0, ctx->r12) = ctx->r24;
            goto L_8022EF78;
    }
    // 0x8022EF6C: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x8022EF70: b           L_8022EFCC
    // 0x8022EF74: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_8022EFCC;
    // 0x8022EF74: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8022EF78:
    // 0x8022EF78: lw          $v1, 0x40($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X40);
    // 0x8022EF7C: lhu         $a1, 0x14($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X14);
    // 0x8022EF80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022EF84:
    // 0x8022EF84: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022EF88: bnel        $at, $zero, L_8022EF2C
    if (ctx->r1 != 0) {
        // 0x8022EF8C: lw          $t7, 0x10($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X10);
            goto L_8022EF2C;
    }
    goto skip_3;
    // 0x8022EF8C: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    skip_3:
    // 0x8022EF90: lbu         $t5, 0x18($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X18);
    // 0x8022EF94: lbu         $t6, 0x19($t3)
    ctx->r14 = MEM_BU(ctx->r11, 0X19);
    // 0x8022EF98: multu       $t5, $t6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022EF9C: mflo        $a0
    ctx->r4 = lo;
    // 0x8022EFA0: nop

    // 0x8022EFA4: nop

    // 0x8022EFA8: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
L_8022EFAC:
    // 0x8022EFAC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022EFB0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EFB4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022EFB8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022EFBC:
    // 0x8022EFBC: slt         $at, $t2, $v0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022EFC0: bnel        $at, $zero, L_8022EED4
    if (ctx->r1 != 0) {
        // 0x8022EFC4: lw          $t6, 0x28($t3)
        ctx->r14 = MEM_W(ctx->r11, 0X28);
            goto L_8022EED4;
    }
    goto skip_4;
    // 0x8022EFC4: lw          $t6, 0x28($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X28);
    skip_4:
    // 0x8022EFC8: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_8022EFCC:
    // 0x8022EFCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EFD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022EFD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022EFD8: jr          $ra
    // 0x8022EFDC: nop

    return;
    // 0x8022EFDC: nop

;}
RECOMP_FUNC void func_8022ECB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022ECB8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8022ECBC: lhu         $a0, 0xC06($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XC06);
    // 0x8022ECC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022ECC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022ECC8: blez        $a0, L_8022EDA0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8022ECCC: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_8022EDA0;
    }
    // 0x8022ECCC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8022ECD0: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022ECD4: lw          $v1, 0x8D0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8D0);
L_8022ECD8:
    // 0x8022ECD8: lbu         $t6, 0x1($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X1);
    // 0x8022ECDC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8022ECE0: bne         $t6, $zero, L_8022ED90
    if (ctx->r14 != 0) {
        // 0x8022ECE4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8022ED90;
    }
    // 0x8022ECE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022ECE8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8022ECEC: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x8022ECF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022ECF4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8022ECF8: addiu       $t8, $zero, 0xFFF
    ctx->r24 = ADD32(0, 0XFFF);
    // 0x8022ECFC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8022ED00: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8022ED04: sb          $a0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r4;
    // 0x8022ED08: sb          $a0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r4;
    // 0x8022ED0C: sh          $t8, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r24;
    // 0x8022ED10: sh          $v1, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r3;
    // 0x8022ED14: sb          $v1, 0x27($v0)
    MEM_B(0X27, ctx->r2) = ctx->r3;
    // 0x8022ED18: sb          $v1, 0x26($v0)
    MEM_B(0X26, ctx->r2) = ctx->r3;
    // 0x8022ED1C: sb          $v1, 0x25($v0)
    MEM_B(0X25, ctx->r2) = ctx->r3;
    // 0x8022ED20: sb          $v1, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r3;
    // 0x8022ED24: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x8022ED28: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    // 0x8022ED2C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8022ED30: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x8022ED34: swc1        $f0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f0.u32l;
    // 0x8022ED38: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x8022ED3C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x8022ED40: jal         0x8022AA40
    // 0x8022ED44: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8022AA40(rdram, ctx);
        goto after_0;
    // 0x8022ED44: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x8022ED48: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8022ED4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8022ED50: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022ED54: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x8022ED58: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x8022ED5C: sb          $zero, 0x6($v0)
    MEM_B(0X6, ctx->r2) = 0;
    // 0x8022ED60: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x8022ED64: lwc1        $f6, 0x4A34($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4A34);
    // 0x8022ED68: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8022ED6C: sb          $t9, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r25;
    // 0x8022ED70: sh          $zero, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = 0;
    // 0x8022ED74: sw          $zero, 0x74($v0)
    MEM_W(0X74, ctx->r2) = 0;
    // 0x8022ED78: sw          $zero, 0x70($v0)
    MEM_W(0X70, ctx->r2) = 0;
    // 0x8022ED7C: addiu       $a0, $v0, 0x30
    ctx->r4 = ADD32(ctx->r2, 0X30);
    // 0x8022ED80: jal         0x8022970C
    // 0x8022ED84: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x8022ED84: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    after_1:
    // 0x8022ED88: b           L_8022EDBC
    // 0x8022ED8C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
        goto L_8022EDBC;
    // 0x8022ED8C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_8022ED90:
    // 0x8022ED90: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8022ED94: slt         $at, $a3, $a0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022ED98: bne         $at, $zero, L_8022ECD8
    if (ctx->r1 != 0) {
        // 0x8022ED9C: addiu       $v1, $v1, 0x78
        ctx->r3 = ADD32(ctx->r3, 0X78);
            goto L_8022ECD8;
    }
    // 0x8022ED9C: addiu       $v1, $v1, 0x78
    ctx->r3 = ADD32(ctx->r3, 0X78);
L_8022EDA0:
    // 0x8022EDA0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8022EDA4: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8022EDA8: addiu       $a2, $a2, 0xC06
    ctx->r6 = ADD32(ctx->r6, 0XC06);
    // 0x8022EDAC: addiu       $a1, $a1, 0x49A0
    ctx->r5 = ADD32(ctx->r5, 0X49A0);
    // 0x8022EDB0: jal         0x80231C58
    // 0x8022EDB4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80231C58(rdram, ctx);
        goto after_2;
    // 0x8022EDB4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x8022EDB8: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_8022EDBC:
    // 0x8022EDBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EDC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022EDC4: jr          $ra
    // 0x8022EDC8: nop

    return;
    // 0x8022EDC8: nop

;}
RECOMP_FUNC void func_8023E6B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E6B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023E6B4: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8023E6B8: lw          $t6, 0x16A0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X16A0);
    // 0x8023E6BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023E6C0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8023E6C4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8023E6C8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8023E6CC: bne         $t6, $zero, L_8023E828
    if (ctx->r14 != 0) {
        // 0x8023E6D0: sw          $a3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r7;
            goto L_8023E828;
    }
    // 0x8023E6D0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8023E6D4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8023E6D8: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8023E6DC: jal         0x802371E0
    // 0x8023E6E0: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    func_802371E0(rdram, ctx);
        goto after_0;
    // 0x8023E6E0: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    after_0:
    // 0x8023E6E4: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023E6E8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8023E6EC: addiu       $a1, $a1, 0x5E68
    ctx->r5 = ADD32(ctx->r5, 0X5E68);
    // 0x8023E6F0: addiu       $a0, $a0, 0x5E50
    ctx->r4 = ADD32(ctx->r4, 0X5E50);
    // 0x8023E6F4: jal         0x802371E0
    // 0x8023E6F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802371E0(rdram, ctx);
        goto after_1;
    // 0x8023E6F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8023E6FC: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8023E700: lw          $t7, 0x1A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1A60);
    // 0x8023E704: bne         $t7, $zero, L_8023E714
    if (ctx->r15 != 0) {
        // 0x8023E708: nop
    
            goto L_8023E714;
    }
    // 0x8023E708: nop

    // 0x8023E70C: jal         0x80246BB0
    // 0x8023E710: nop

    func_80246BB0(rdram, ctx);
        goto after_2;
    // 0x8023E710: nop

    after_2:
L_8023E714:
    // 0x8023E714: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8023E718: lui         $a2, 0x2222
    ctx->r6 = S32(0X2222 << 16);
    // 0x8023E71C: ori         $a2, $a2, 0x2222
    ctx->r6 = ctx->r6 | 0X2222;
    // 0x8023E720: addiu       $a1, $a1, 0x5E50
    ctx->r5 = ADD32(ctx->r5, 0X5E50);
    // 0x8023E724: jal         0x8023DF30
    // 0x8023E728: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8023DF30(rdram, ctx);
        goto after_3;
    // 0x8023E728: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
    // 0x8023E72C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8023E730: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8023E734: jal         0x80247490
    // 0x8023E738: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80247490(rdram, ctx);
        goto after_4;
    // 0x8023E738: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x8023E73C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8023E740: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8023E744: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8023E748: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8023E74C: beq         $at, $zero, L_8023E764
    if (ctx->r1 == 0) {
        // 0x8023E750: nop
    
            goto L_8023E764;
    }
    // 0x8023E750: nop

    // 0x8023E754: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x8023E758: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8023E75C: jal         0x8023E840
    // 0x8023E760: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    func_8023E840(rdram, ctx);
        goto after_5;
    // 0x8023E760: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_5:
L_8023E764:
    // 0x8023E764: jal         0x80241760
    // 0x8023E768: nop

    func_80241760(rdram, ctx);
        goto after_6;
    // 0x8023E768: nop

    after_6:
    // 0x8023E76C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023E770: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8023E774: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x8023E778: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x8023E77C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8023E780: addiu       $t2, $t2, 0x4CA0
    ctx->r10 = ADD32(ctx->r10, 0X4CA0);
    // 0x8023E784: addiu       $t4, $t4, 0x5E50
    ctx->r12 = ADD32(ctx->r12, 0X5E50);
    // 0x8023E788: sw          $t1, 0x16A0($at)
    MEM_W(0X16A0, ctx->r1) = ctx->r9;
    // 0x8023E78C: sw          $t2, 0x16A4($at)
    MEM_W(0X16A4, ctx->r1) = ctx->r10;
    // 0x8023E790: sw          $t4, 0x16AC($at)
    MEM_W(0X16AC, ctx->r1) = ctx->r12;
    // 0x8023E794: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8023E798: sw          $t3, 0x16A8($at)
    MEM_W(0X16A8, ctx->r1) = ctx->r11;
    // 0x8023E79C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8023E7A0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023E7A4: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x8023E7A8: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8023E7AC: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8023E7B0: addiu       $t8, $t8, 0x4E50
    ctx->r24 = ADD32(ctx->r24, 0X4E50);
    // 0x8023E7B4: addiu       $t5, $t5, 0x5F28
    ctx->r13 = ADD32(ctx->r13, 0X5F28);
    // 0x8023E7B8: addiu       $t6, $t6, -0x7490
    ctx->r14 = ADD32(ctx->r14, -0X7490);
    // 0x8023E7BC: addiu       $t7, $t7, -0x73B0
    ctx->r15 = ADD32(ctx->r15, -0X73B0);
    // 0x8023E7C0: addiu       $t9, $t8, 0x1000
    ctx->r25 = ADD32(ctx->r24, 0X1000);
    // 0x8023E7C4: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x8023E7C8: lui         $a3, 0x8025
    ctx->r7 = S32(0X8025 << 16);
    // 0x8023E7CC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8023E7D0: sw          $t5, 0x16B0($at)
    MEM_W(0X16B0, ctx->r1) = ctx->r13;
    // 0x8023E7D4: sw          $t6, 0x16B4($at)
    MEM_W(0X16B4, ctx->r1) = ctx->r14;
    // 0x8023E7D8: sw          $t7, 0x16B8($at)
    MEM_W(0X16B8, ctx->r1) = ctx->r15;
    // 0x8023E7DC: addiu       $a3, $a3, 0x16A0
    ctx->r7 = ADD32(ctx->r7, 0X16A0);
    // 0x8023E7E0: addiu       $a2, $a2, -0x72D0
    ctx->r6 = ADD32(ctx->r6, -0X72D0);
    // 0x8023E7E4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8023E7E8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8023E7EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8023E7F0: jal         0x80237210
    // 0x8023E7F4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_80237210(rdram, ctx);
        goto after_7;
    // 0x8023E7F4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_7:
    // 0x8023E7F8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023E7FC: jal         0x80237360
    // 0x8023E800: addiu       $a0, $a0, 0x4CA0
    ctx->r4 = ADD32(ctx->r4, 0X4CA0);
    func_80237360(rdram, ctx);
        goto after_8;
    // 0x8023E800: addiu       $a0, $a0, 0x4CA0
    ctx->r4 = ADD32(ctx->r4, 0X4CA0);
    after_8:
    // 0x8023E804: jal         0x80241780
    // 0x8023E808: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_80241780(rdram, ctx);
        goto after_9;
    // 0x8023E808: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_9:
    // 0x8023E80C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8023E810: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023E814: beq         $t1, $at, L_8023E828
    if (ctx->r9 == ctx->r1) {
        // 0x8023E818: nop
    
            goto L_8023E828;
    }
    // 0x8023E818: nop

    // 0x8023E81C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8023E820: jal         0x8023E840
    // 0x8023E824: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_8023E840(rdram, ctx);
        goto after_10;
    // 0x8023E824: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_10:
L_8023E828:
    // 0x8023E828: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023E82C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8023E830: jr          $ra
    // 0x8023E834: nop

    return;
    // 0x8023E834: nop

;}
RECOMP_FUNC void func_80234CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234CD0: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80234CD4: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80234CD8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80234CDC: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x80234CE0: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80234CE4: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80234CE8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80234CEC: swc1        $f18, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f18.u32l;
    // 0x80234CF0: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80234CF4: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80234CF8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80234CFC: jr          $ra
    // 0x80234D00: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x80234D00: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8022E29C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022E29C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E2A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E2A4: bltz        $a0, L_8022E2C4
    if (SIGNED(ctx->r4) < 0) {
        // 0x8022E2A8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8022E2C4;
    }
    // 0x8022E2A8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8022E2AC: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8022E2B0: lhu         $t6, 0xC06($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XC06);
    // 0x8022E2B4: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8022E2B8: sll         $t8, $a2, 4
    ctx->r24 = S32(ctx->r6 << 4);
    // 0x8022E2BC: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8022E2C0: bne         $at, $zero, L_8022E2DC
    if (ctx->r1 != 0) {
        // 0x8022E2C4: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_8022E2DC;
    }
L_8022E2C4:
    // 0x8022E2C4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022E2C8: addiu       $a0, $a0, 0x4880
    ctx->r4 = ADD32(ctx->r4, 0X4880);
    // 0x8022E2CC: jal         0x80231A24
    // 0x8022E2D0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022E2D0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x8022E2D4: b           L_8022E2F8
    // 0x8022E2D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022E2F8;
    // 0x8022E2D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022E2DC:
    // 0x8022E2DC: lw          $t7, 0x8D0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X8D0);
    // 0x8022E2E0: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x8022E2E4: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8022E2E8: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x8022E2EC: jal         0x80228DE0
    // 0x8022E2F0: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x8022E2F0: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    after_1:
    // 0x8022E2F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022E2F8:
    // 0x8022E2F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022E2FC: jr          $ra
    // 0x8022E300: nop

    return;
    // 0x8022E300: nop

;}
RECOMP_FUNC void func_802352CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802352CC: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x802352D0: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x802352D4: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x802352D8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x802352DC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x802352E0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802352E4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802352E8: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x802352EC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802352F0: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x802352F4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802352F8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802352FC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80235300: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80235304: ldc1        $f20, 0x53C0($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, 0X53C0);
    // 0x80235308: addiu       $s4, $a0, 0x28
    ctx->r20 = ADD32(ctx->r4, 0X28);
    // 0x8023530C: addiu       $s7, $a0, 0x14
    ctx->r23 = ADD32(ctx->r4, 0X14);
    // 0x80235310: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
L_80235314:
    // 0x80235314: lh          $v0, 0x28($s6)
    ctx->r2 = MEM_H(ctx->r22, 0X28);
    // 0x80235318: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8023531C: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80235320: bne         $v0, $at, L_80235340
    if (ctx->r2 != ctx->r1) {
        // 0x80235324: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_80235340;
    }
    // 0x80235324: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80235328: sh          $t6, 0xF4($sp)
    MEM_H(0XF4, ctx->r29) = ctx->r14;
    // 0x8023532C: lw          $a2, 0x48($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X48);
    // 0x80235330: jal         0x8023F37C
    // 0x80235334: addiu       $a1, $sp, 0xF4
    ctx->r5 = ADD32(ctx->r29, 0XF4);
    func_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80235334: addiu       $a1, $sp, 0xF4
    ctx->r5 = ADD32(ctx->r29, 0XF4);
    after_0:
    // 0x80235338: b           L_802357C4
    // 0x8023533C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
        goto L_802357C4;
    // 0x8023533C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_80235340:
    // 0x80235340: lw          $s5, 0x2C($s6)
    ctx->r21 = MEM_W(ctx->r22, 0X2C);
    // 0x80235344: sltiu       $at, $v0, 0x9
    ctx->r1 = ctx->r2 < 0X9 ? 1 : 0;
    // 0x80235348: beq         $at, $zero, L_802357C0
    if (ctx->r1 == 0) {
        // 0x8023534C: lw          $s1, 0x1C($s5)
        ctx->r17 = MEM_W(ctx->r21, 0X1C);
            goto L_802357C0;
    }
    // 0x8023534C: lw          $s1, 0x1C($s5)
    ctx->r17 = MEM_W(ctx->r21, 0X1C);
    // 0x80235350: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80235354: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80235358: addu        $at, $at, $t7
    gpr jr_addend_80235360 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8023535C: lw          $t7, 0x53C8($at)
    ctx->r15 = ADD32(ctx->r1, 0X53C8);
    // 0x80235360: jr          $t7
    // 0x80235364: nop

    switch (jr_addend_80235360 >> 2) {
        case 0: goto L_80235368; break;
        case 1: goto L_802354D0; break;
        case 2: goto L_8023559C; break;
        case 3: goto L_80235680; break;
        case 4: goto L_80235604; break;
        case 5: goto L_802357C0; break;
        case 6: goto L_802356E4; break;
        case 7: goto L_80235790; break;
        case 8: goto L_80235658; break;
        default: switch_error(__func__, 0x80235360, 0x802553C8);
    }
    // 0x80235364: nop

L_80235368:
    // 0x80235368: lw          $t8, 0x28($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X28);
    // 0x8023536C: bnel        $t8, $zero, L_802357C4
    if (ctx->r24 != 0) {
        // 0x80235370: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_802357C4;
    }
    goto skip_0;
    // 0x80235370: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    skip_0:
    // 0x80235374: beq         $s1, $zero, L_802357C0
    if (ctx->r17 == 0) {
        // 0x80235378: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_802357C0;
    }
    // 0x80235378: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8023537C: sh          $zero, 0xE2($sp)
    MEM_H(0XE2, ctx->r29) = 0;
    // 0x80235380: lh          $t9, 0x20($s5)
    ctx->r25 = MEM_H(ctx->r21, 0X20);
    // 0x80235384: sb          $zero, 0xE4($sp)
    MEM_B(0XE4, ctx->r29) = 0;
    // 0x80235388: addiu       $a2, $sp, 0xE0
    ctx->r6 = ADD32(ctx->r29, 0XE0);
    // 0x8023538C: sh          $t9, 0xE0($sp)
    MEM_H(0XE0, ctx->r29) = ctx->r25;
    // 0x80235390: jal         0x8023F6D8
    // 0x80235394: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    func_8023F6D8(rdram, ctx);
        goto after_1;
    // 0x80235394: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    after_1:
    // 0x80235398: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x8023539C: lh          $t7, 0x2C($s5)
    ctx->r15 = MEM_H(ctx->r21, 0X2C);
    // 0x802353A0: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x802353A4: lbu         $t6, 0xC($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0XC);
    // 0x802353A8: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x802353AC: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802353B0: mflo        $t8
    ctx->r24 = lo;
    // 0x802353B4: nop

    // 0x802353B8: nop

    // 0x802353BC: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x802353C0: mflo        $t9
    ctx->r25 = lo;
    // 0x802353C4: sh          $t9, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r25;
    // 0x802353C8: lbu         $t7, 0xC($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0XC);
    // 0x802353CC: lbu         $t6, 0x2E($s5)
    ctx->r14 = MEM_BU(ctx->r21, 0X2E);
    // 0x802353D0: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x802353D4: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x802353D8: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x802353DC: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802353E0: bgtzl       $v1, L_802353F0
    if (SIGNED(ctx->r3) > 0) {
        // 0x802353E4: slti        $at, $v1, 0x7F
        ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
            goto L_802353F0;
    }
    goto skip_1;
    // 0x802353E4: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
    skip_1:
    // 0x802353E8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802353EC: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
L_802353F0:
    // 0x802353F0: beq         $at, $zero, L_80235400
    if (ctx->r1 == 0) {
        // 0x802353F4: nop
    
            goto L_80235400;
    }
    // 0x802353F4: nop

    // 0x802353F8: b           L_80235400
    // 0x802353FC: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
        goto L_80235400;
    // 0x802353FC: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
L_80235400:
    // 0x80235400: lwc1        $f4, 0x24($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X24);
    // 0x80235404: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80235408: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    // 0x8023540C: lw          $s0, 0x0($a3)
    ctx->r16 = MEM_W(ctx->r7, 0X0);
    // 0x80235410: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x80235414: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x80235418: jal         0x8023F820
    // 0x8023541C: sb          $t0, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = ctx->r8;
    func_8023F820(rdram, ctx);
        goto after_2;
    // 0x8023541C: sb          $t0, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = ctx->r8;
    after_2:
    // 0x80235420: lbu         $a2, 0xD7($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XD7);
    // 0x80235424: sw          $fp, 0x28($s5)
    MEM_W(0X28, ctx->r21) = ctx->r30;
    // 0x80235428: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x8023542C: jal         0x8023F8B0
    // 0x80235430: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_8023F8B0(rdram, ctx);
        goto after_3;
    // 0x80235430: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_3:
    // 0x80235434: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x80235438: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8023543C: lh          $a2, 0xBA($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XBA);
    // 0x80235440: jal         0x8023F940
    // 0x80235444: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_8023F940(rdram, ctx);
        goto after_4;
    // 0x80235444: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_4:
    // 0x80235448: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x8023544C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80235450: jal         0x8023F9E0
    // 0x80235454: lw          $a2, 0xD0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD0);
    func_8023F9E0(rdram, ctx);
        goto after_5;
    // 0x80235454: lw          $a2, 0xD0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD0);
    after_5:
    // 0x80235458: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x8023545C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80235460: jal         0x8023FA70
    // 0x80235464: lbu         $a2, 0x2F($s5)
    ctx->r6 = MEM_BU(ctx->r21, 0X2F);
    func_8023FA70(rdram, ctx);
        goto after_6;
    // 0x80235464: lbu         $a2, 0x2F($s5)
    ctx->r6 = MEM_BU(ctx->r21, 0X2F);
    after_6:
    // 0x80235468: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8023546C: sh          $t6, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r14;
    // 0x80235470: sw          $s5, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r21;
    // 0x80235474: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80235478: lwc1        $f2, 0x24($s5)
    ctx->f2.u32l = MEM_W(ctx->r21, 0X24);
    // 0x8023547C: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x80235480: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x80235484: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80235488: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x8023548C: nop

    // 0x80235490: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80235494: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80235498: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x8023549C: c.lt.d      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.d < ctx->f0.d;
    // 0x802354A0: nop

    // 0x802354A4: bc1fl       L_802354B8
    if (!c1cs) {
        // 0x802354A8: trunc.w.d   $f4, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_D(ctx->f0.d);
            goto L_802354B8;
    }
    goto skip_2;
    // 0x802354A8: trunc.w.d   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_D(ctx->f0.d);
    skip_2:
    // 0x802354AC: b           L_802354C0
    // 0x802354B0: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
        goto L_802354C0;
    // 0x802354B0: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x802354B4: trunc.w.d   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_D(ctx->f0.d);
L_802354B8:
    // 0x802354B8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802354BC: nop

L_802354C0:
    // 0x802354C0: jal         0x8023F37C
    // 0x802354C4: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    func_8023F37C(rdram, ctx);
        goto after_7;
    // 0x802354C4: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    after_7:
    // 0x802354C8: b           L_802357C4
    // 0x802354CC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
        goto L_802357C4;
    // 0x802354CC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_802354D0:
    // 0x802354D0: lw          $t9, 0x28($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X28);
    // 0x802354D4: bnel        $fp, $t9, L_802357C4
    if (ctx->r30 != ctx->r25) {
        // 0x802354D8: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_802357C4;
    }
    goto skip_3;
    // 0x802354D8: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    skip_3:
    // 0x802354DC: beq         $s1, $zero, L_802357C0
    if (ctx->r17 == 0) {
        // 0x802354E0: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_802357C0;
    }
    // 0x802354E0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802354E4: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x802354E8: lwc1        $f2, 0x24($s5)
    ctx->f2.u32l = MEM_W(ctx->r21, 0X24);
    // 0x802354EC: lui         $a3, 0x7FFF
    ctx->r7 = S32(0X7FFF << 16);
    // 0x802354F0: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x802354F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802354F8: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x802354FC: nop

    // 0x80235500: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80235504: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80235508: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x8023550C: c.lt.d      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.d < ctx->f0.d;
    // 0x80235510: nop

    // 0x80235514: bc1fl       L_80235528
    if (!c1cs) {
        // 0x80235518: trunc.w.d   $f4, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_D(ctx->f0.d);
            goto L_80235528;
    }
    goto skip_4;
    // 0x80235518: trunc.w.d   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_D(ctx->f0.d);
    skip_4:
    // 0x8023551C: b           L_80235530
    // 0x80235520: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
        goto L_80235530;
    // 0x80235520: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x80235524: trunc.w.d   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_D(ctx->f0.d);
L_80235528:
    // 0x80235528: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x8023552C: nop

L_80235530:
    // 0x80235530: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x80235534: jal         0x8023F940
    // 0x80235538: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    func_8023F940(rdram, ctx);
        goto after_8;
    // 0x80235538: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    after_8:
    // 0x8023553C: beq         $s0, $zero, L_8023556C
    if (ctx->r16 == 0) {
        // 0x80235540: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_8023556C;
    }
    // 0x80235540: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80235544: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x80235548: sh          $t8, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r24;
    // 0x8023554C: sw          $s5, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r21;
    // 0x80235550: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80235554: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    // 0x80235558: jal         0x8023F37C
    // 0x8023555C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_8023F37C(rdram, ctx);
        goto after_9;
    // 0x8023555C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_9:
    // 0x80235560: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80235564: b           L_802357C0
    // 0x80235568: sw          $t9, 0x28($s5)
    MEM_W(0X28, ctx->r21) = ctx->r25;
        goto L_802357C0;
    // 0x80235568: sw          $t9, 0x28($s5)
    MEM_W(0X28, ctx->r21) = ctx->r25;
L_8023556C:
    // 0x8023556C: jal         0x8023FB10
    // 0x80235570: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    func_8023FB10(rdram, ctx);
        goto after_10;
    // 0x80235570: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    after_10:
    // 0x80235574: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x80235578: jal         0x8023FB90
    // 0x8023557C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_8023FB90(rdram, ctx);
        goto after_11;
    // 0x8023557C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_11:
    // 0x80235580: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x80235584: or          $s3, $s5, $zero
    ctx->r19 = ctx->r21 | 0;
    // 0x80235588: jal         0x80235240
    // 0x8023558C: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    func_80235240(rdram, ctx);
        goto after_12;
    // 0x8023558C: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    after_12:
    // 0x80235590: lw          $s4, 0x4C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X4C);
    // 0x80235594: b           L_802357C0
    // 0x80235598: sw          $zero, 0x28($s5)
    MEM_W(0X28, ctx->r21) = 0;
        goto L_802357C0;
    // 0x80235598: sw          $zero, 0x28($s5)
    MEM_W(0X28, ctx->r21) = 0;
L_8023559C:
    // 0x8023559C: lw          $t7, 0x28($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X28);
    // 0x802355A0: lbu         $t6, 0x8($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X8);
    // 0x802355A4: bne         $fp, $t7, L_802357C0
    if (ctx->r30 != ctx->r15) {
        // 0x802355A8: sb          $t6, 0x2E($s5)
        MEM_B(0X2E, ctx->r21) = ctx->r14;
            goto L_802357C0;
    }
    // 0x802355A8: sb          $t6, 0x2E($s5)
    MEM_B(0X2E, ctx->r21) = ctx->r14;
    // 0x802355AC: beq         $s1, $zero, L_802357C0
    if (ctx->r17 == 0) {
        // 0x802355B0: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_802357C0;
    }
    // 0x802355B0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802355B4: lbu         $t9, 0xC($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0XC);
    // 0x802355B8: andi        $t8, $t6, 0xFF
    ctx->r24 = ctx->r14 & 0XFF;
    // 0x802355BC: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x802355C0: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x802355C4: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x802355C8: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x802355CC: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802355D0: bgtzl       $v1, L_802355E0
    if (SIGNED(ctx->r3) > 0) {
        // 0x802355D4: slti        $at, $v1, 0x7F
        ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
            goto L_802355E0;
    }
    goto skip_5;
    // 0x802355D4: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
    skip_5:
    // 0x802355D8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802355DC: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
L_802355E0:
    // 0x802355E0: beq         $at, $zero, L_802355F0
    if (ctx->r1 == 0) {
        // 0x802355E4: nop
    
            goto L_802355F0;
    }
    // 0x802355E4: nop

    // 0x802355E8: b           L_802355F0
    // 0x802355EC: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
        goto L_802355F0;
    // 0x802355EC: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
L_802355F0:
    // 0x802355F0: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x802355F4: jal         0x8023F8B0
    // 0x802355F8: andi        $a2, $t0, 0xFF
    ctx->r6 = ctx->r8 & 0XFF;
    func_8023F8B0(rdram, ctx);
        goto after_13;
    // 0x802355F8: andi        $a2, $t0, 0xFF
    ctx->r6 = ctx->r8 & 0XFF;
    after_13:
    // 0x802355FC: b           L_802357C4
    // 0x80235600: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
        goto L_802357C4;
    // 0x80235600: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_80235604:
    // 0x80235604: lwc1        $f0, 0x8($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X8);
    // 0x80235608: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023560C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80235610: swc1        $f0, 0x24($s5)
    MEM_W(0X24, ctx->r21) = ctx->f0.u32l;
    // 0x80235614: ldc1        $f8, 0x53F0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X53F0);
    // 0x80235618: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8023561C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80235620: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x80235624: nop

    // 0x80235628: bc1fl       L_8023563C
    if (!c1cs) {
        // 0x8023562C: lw          $t8, 0x28($s5)
        ctx->r24 = MEM_W(ctx->r21, 0X28);
            goto L_8023563C;
    }
    goto skip_6;
    // 0x8023562C: lw          $t8, 0x28($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X28);
    skip_6:
    // 0x80235630: lwc1        $f10, 0x53F8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X53F8);
    // 0x80235634: swc1        $f10, 0x24($s5)
    MEM_W(0X24, ctx->r21) = ctx->f10.u32l;
    // 0x80235638: lw          $t8, 0x28($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X28);
L_8023563C:
    // 0x8023563C: bnel        $fp, $t8, L_802357C4
    if (ctx->r30 != ctx->r24) {
        // 0x80235640: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_802357C4;
    }
    goto skip_7;
    // 0x80235640: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    skip_7:
    // 0x80235644: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x80235648: jal         0x8023F9E0
    // 0x8023564C: lw          $a2, 0x24($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X24);
    func_8023F9E0(rdram, ctx);
        goto after_14;
    // 0x8023564C: lw          $a2, 0x24($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X24);
    after_14:
    // 0x80235650: b           L_802357C4
    // 0x80235654: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
        goto L_802357C4;
    // 0x80235654: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_80235658:
    // 0x80235658: lw          $t6, 0x28($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X28);
    // 0x8023565C: lbu         $t9, 0x8($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X8);
    // 0x80235660: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80235664: bne         $fp, $t6, L_802357C0
    if (ctx->r30 != ctx->r14) {
        // 0x80235668: sb          $t9, 0x2F($s5)
        MEM_B(0X2F, ctx->r21) = ctx->r25;
            goto L_802357C0;
    }
    // 0x80235668: sb          $t9, 0x2F($s5)
    MEM_B(0X2F, ctx->r21) = ctx->r25;
    // 0x8023566C: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x80235670: jal         0x8023FA70
    // 0x80235674: andi        $a2, $t9, 0xFF
    ctx->r6 = ctx->r25 & 0XFF;
    func_8023FA70(rdram, ctx);
        goto after_15;
    // 0x80235674: andi        $a2, $t9, 0xFF
    ctx->r6 = ctx->r25 & 0XFF;
    after_15:
    // 0x80235678: b           L_802357C4
    // 0x8023567C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
        goto L_802357C4;
    // 0x8023567C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_80235680:
    // 0x80235680: lw          $t8, 0x28($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X28);
    // 0x80235684: lh          $t7, 0x8($s4)
    ctx->r15 = MEM_H(ctx->r20, 0X8);
    // 0x80235688: bne         $fp, $t8, L_802357C0
    if (ctx->r30 != ctx->r24) {
        // 0x8023568C: sh          $t7, 0x2C($s5)
        MEM_H(0X2C, ctx->r21) = ctx->r15;
            goto L_802357C0;
    }
    // 0x8023568C: sh          $t7, 0x2C($s5)
    MEM_H(0X2C, ctx->r21) = ctx->r15;
    // 0x80235690: beql        $s1, $zero, L_802357C4
    if (ctx->r17 == 0) {
        // 0x80235694: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_802357C4;
    }
    goto skip_8;
    // 0x80235694: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    skip_8:
    // 0x80235698: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8023569C: lh          $t7, 0x2C($s5)
    ctx->r15 = MEM_H(ctx->r21, 0X2C);
    // 0x802356A0: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x802356A4: lbu         $t6, 0xD($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0XD);
    // 0x802356A8: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x802356AC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802356B0: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802356B4: addiu       $a3, $zero, 0x3E8
    ctx->r7 = ADD32(0, 0X3E8);
    // 0x802356B8: mflo        $t0
    ctx->r8 = lo;
    // 0x802356BC: nop

    // 0x802356C0: nop

    // 0x802356C4: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x802356C8: mflo        $t8
    ctx->r24 = lo;
    // 0x802356CC: sll         $a2, $t8, 16
    ctx->r6 = S32(ctx->r24 << 16);
    // 0x802356D0: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802356D4: jal         0x8023F940
    // 0x802356D8: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    func_8023F940(rdram, ctx);
        goto after_16;
    // 0x802356D8: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_16:
    // 0x802356DC: b           L_802357C4
    // 0x802356E0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
        goto L_802357C4;
    // 0x802356E0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_802356E4:
    // 0x802356E4: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x802356E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802356EC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802356F0: lw          $v1, 0x4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X4);
    // 0x802356F4: beql        $v1, $at, L_802357C4
    if (ctx->r3 == ctx->r1) {
        // 0x802356F8: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_802357C4;
    }
    goto skip_9;
    // 0x802356F8: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    skip_9:
    // 0x802356FC: lbu         $t6, 0xD($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0XD);
    // 0x80235700: lh          $t7, 0x2C($s5)
    ctx->r15 = MEM_H(ctx->r21, 0X2C);
    // 0x80235704: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x80235708: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x8023570C: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80235710: lwc1        $f2, 0x24($s5)
    ctx->f2.u32l = MEM_W(ctx->r21, 0X24);
    // 0x80235714: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80235718: lui         $a3, 0x7FFF
    ctx->r7 = S32(0X7FFF << 16);
    // 0x8023571C: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80235720: mflo        $t0
    ctx->r8 = lo;
    // 0x80235724: nop

    // 0x80235728: nop

    // 0x8023572C: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x80235730: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
    // 0x80235734: mflo        $t0
    ctx->r8 = lo;
    // 0x80235738: c.lt.d      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.d < ctx->f0.d;
    // 0x8023573C: sll         $a2, $t0, 16
    ctx->r6 = S32(ctx->r8 << 16);
    // 0x80235740: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80235744: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80235748: bc1fl       L_8023575C
    if (!c1cs) {
        // 0x8023574C: trunc.w.d   $f10, $f0
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_D(ctx->f0.d);
            goto L_8023575C;
    }
    goto skip_10;
    // 0x8023574C: trunc.w.d   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_D(ctx->f0.d);
    skip_10:
    // 0x80235750: b           L_80235764
    // 0x80235754: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
        goto L_80235764;
    // 0x80235754: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x80235758: trunc.w.d   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_D(ctx->f0.d);
L_8023575C:
    // 0x8023575C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80235760: nop

L_80235764:
    // 0x80235764: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x80235768: jal         0x8023F940
    // 0x8023576C: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    func_8023F940(rdram, ctx);
        goto after_17;
    // 0x8023576C: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    after_17:
    // 0x80235770: sh          $fp, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r30;
    // 0x80235774: sw          $s5, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r21;
    // 0x80235778: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x8023577C: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    // 0x80235780: jal         0x8023F37C
    // 0x80235784: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_8023F37C(rdram, ctx);
        goto after_18;
    // 0x80235784: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_18:
    // 0x80235788: b           L_802357C4
    // 0x8023578C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
        goto L_802357C4;
    // 0x8023578C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_80235790:
    // 0x80235790: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x80235794: jal         0x8023FB10
    // 0x80235798: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_8023FB10(rdram, ctx);
        goto after_19;
    // 0x80235798: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_19:
    // 0x8023579C: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x802357A0: jal         0x8023FB90
    // 0x802357A4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_8023FB90(rdram, ctx);
        goto after_20;
    // 0x802357A4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_20:
    // 0x802357A8: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x802357AC: or          $s3, $s5, $zero
    ctx->r19 = ctx->r21 | 0;
    // 0x802357B0: jal         0x80235240
    // 0x802357B4: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    func_80235240(rdram, ctx);
        goto after_21;
    // 0x802357B4: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    after_21:
    // 0x802357B8: lw          $s4, 0x4C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X4C);
    // 0x802357BC: sw          $zero, 0x28($s5)
    MEM_W(0X28, ctx->r21) = 0;
L_802357C0:
    // 0x802357C0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_802357C4:
    // 0x802357C4: jal         0x8023F4A0
    // 0x802357C8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_8023F4A0(rdram, ctx);
        goto after_22;
    // 0x802357C8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_22:
    // 0x802357CC: beq         $v0, $zero, L_80235314
    if (ctx->r2 == 0) {
        // 0x802357D0: sw          $v0, 0x4C($s6)
        MEM_W(0X4C, ctx->r22) = ctx->r2;
            goto L_80235314;
    }
    // 0x802357D0: sw          $v0, 0x4C($s6)
    MEM_W(0X4C, ctx->r22) = ctx->r2;
    // 0x802357D4: lw          $t7, 0x50($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X50);
    // 0x802357D8: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x802357DC: sw          $t8, 0x50($s6)
    MEM_W(0X50, ctx->r22) = ctx->r24;
    // 0x802357E0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802357E4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x802357E8: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x802357EC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x802357F0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x802357F4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x802357F8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802357FC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80235800: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80235804: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80235808: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8023580C: jr          $ra
    // 0x80235810: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x80235810: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_8023D228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D228: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8023D22C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8023D230: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023D234: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023D238: ld          $t7, 0x8($sp)
    ctx->r15 = LD(ctx->r29, 0X8);
    // 0x8023D23C: ld          $t6, 0x0($sp)
    ctx->r14 = LD(ctx->r29, 0X0);
    // 0x8023D240: dmultu      $t6, $t7
    DMULTU(U64(ctx->r14), U64(ctx->r15), &lo, &hi);
    // 0x8023D244: mflo        $v0
    ctx->r2 = lo;
    // 0x8023D248: dsll32      $v1, $v0, 0
    ctx->r3 = ctx->r2 << (0 + 32);
    // 0x8023D24C: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x8023D250: jr          $ra
    // 0x8023D254: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x8023D254: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void func_80249940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249940: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x80249944: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80249948: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8024994C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80249950: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80249954: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80249958: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x8024995C: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80249960: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80249964: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80249968: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
    // 0x8024996C: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80249970: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x80249974: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80249978: c.lt.d      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.d < ctx->f0.d;
    // 0x8024997C: nop

    // 0x80249980: bc1fl       L_802499A8
    if (!c1cs) {
        // 0x80249984: cvt.s.d     $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f18.fl = CVT_S_D(ctx->f0.d);
            goto L_802499A8;
    }
    goto skip_0;
    // 0x80249984: cvt.s.d     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f18.fl = CVT_S_D(ctx->f0.d);
    skip_0:
    // 0x80249988: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8024998C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80249990: nop

    // 0x80249994: sub.d       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f0.d - ctx->f8.d;
    // 0x80249998: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x8024999C: b           L_802499AC
    // 0x802499A0: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
        goto L_802499AC;
    // 0x802499A0: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
    // 0x802499A4: cvt.s.d     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f18.fl = CVT_S_D(ctx->f0.d);
L_802499A8:
    // 0x802499A8: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
L_802499AC:
    // 0x802499AC: lwc1        $f2, 0x14($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X14);
    // 0x802499B0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802499B4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802499B8: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x802499BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802499C0: bc1fl       L_802499D0
    if (!c1cs) {
        // 0x802499C4: cvt.d.s     $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
            goto L_802499D0;
    }
    goto skip_1;
    // 0x802499C4: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    skip_1:
    // 0x802499C8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x802499CC: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
L_802499D0:
    // 0x802499D0: lwc1        $f10, 0x1C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x802499D4: sub.d       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f4.d - ctx->f8.d;
    // 0x802499D8: cvt.s.d     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f2.fl = CVT_S_D(ctx->f16.d);
    // 0x802499DC: mul.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802499E0: jr          $ra
    // 0x802499E4: nop

    return;
    // 0x802499E4: nop

;}
RECOMP_FUNC void func_8022AF68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022AF68: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x8022AF6C: addiu       $v1, $v1, 0x5E80
    ctx->r3 = ADD32(ctx->r3, 0X5E80);
    // 0x8022AF70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AF74: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8022AF78: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8022AF7C: lui         $t8, 0x803D
    ctx->r24 = S32(0X803D << 16);
    // 0x8022AF80: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x8022AF84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AF88: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8022AF8C: ori         $t6, $t6, 0xA800
    ctx->r14 = ctx->r14 | 0XA800;
    // 0x8022AF90: ori         $t7, $t7, 0x5800
    ctx->r15 = ctx->r15 | 0X5800;
    // 0x8022AF94: ori         $t8, $t8, 0xA800
    ctx->r24 = ctx->r24 | 0XA800;
    // 0x8022AF98: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x8022AF9C: ori         $t0, $t0, 0x400
    ctx->r8 = ctx->r8 | 0X400;
    // 0x8022AFA0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8022AFA4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8022AFA8: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x8022AFAC: sw          $t7, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r15;
    // 0x8022AFB0: sw          $t8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r24;
    // 0x8022AFB4: sw          $t9, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r25;
    // 0x8022AFB8: jal         0x80204530
    // 0x8022AFBC: sw          $t0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r8;
    func_80204530(rdram, ctx);
        goto after_0;
    // 0x8022AFBC: sw          $t0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r8;
    after_0:
    // 0x8022AFC0: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x8022AFC4: addiu       $v1, $v1, 0x5E80
    ctx->r3 = ADD32(ctx->r3, 0X5E80);
    // 0x8022AFC8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022AFCC: ori         $at, $at, 0x400
    ctx->r1 = ctx->r1 | 0X400;
    // 0x8022AFD0: addu        $t1, $v0, $at
    ctx->r9 = ADD32(ctx->r2, ctx->r1);
    // 0x8022AFD4: lui         $t3, 0x8035
    ctx->r11 = S32(0X8035 << 16);
    // 0x8022AFD8: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x8022AFDC: addiu       $t3, $t3, -0x6AD0
    ctx->r11 = ADD32(ctx->r11, -0X6AD0);
    // 0x8022AFE0: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x8022AFE4: sw          $at, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r1;
    // 0x8022AFE8: sw          $t1, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r9;
    // 0x8022AFEC: sw          $t2, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r10;
    // 0x8022AFF0: sw          $t3, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r11;
    // 0x8022AFF4: sw          $t4, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r12;
    // 0x8022AFF8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022AFFC: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8022B000: sw          $t6, 0x5E70($at)
    MEM_W(0X5E70, ctx->r1) = ctx->r14;
    // 0x8022B004: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8022B008: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022B00C: addiu       $a0, $a0, 0x5F70
    ctx->r4 = ADD32(ctx->r4, 0X5F70);
    // 0x8022B010: sw          $zero, 0x5E74($at)
    MEM_W(0X5E74, ctx->r1) = 0;
    // 0x8022B014: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8022B018: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8022B01C: jal         0x8022B1F4
    // 0x8022B020: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    func_8022B1F4(rdram, ctx);
        goto after_1;
    // 0x8022B020: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    after_1:
    // 0x8022B024: jal         0x80204530
    // 0x8022B028: nop

    func_80204530(rdram, ctx);
        goto after_2;
    // 0x8022B028: nop

    after_2:
    // 0x8022B02C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022B030: ori         $at, $at, 0x440
    ctx->r1 = ctx->r1 | 0X440;
    // 0x8022B034: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x8022B038: addiu       $v1, $v1, 0x5F84
    ctx->r3 = ADD32(ctx->r3, 0X5F84);
    // 0x8022B03C: addu        $t7, $v0, $at
    ctx->r15 = ADD32(ctx->r2, ctx->r1);
    // 0x8022B040: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8022B044: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x8022B048: lw          $t9, 0x318($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X318);
    // 0x8022B04C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022B050: sw          $t7, 0x5F7C($at)
    MEM_W(0X5F7C, ctx->r1) = ctx->r15;
    // 0x8022B054: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022B058: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x8022B05C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022B060: sw          $t0, 0x5F80($at)
    MEM_W(0X5F80, ctx->r1) = ctx->r8;
    // 0x8022B064: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022B068: sw          $zero, 0x5E78($at)
    MEM_W(0X5E78, ctx->r1) = 0;
    // 0x8022B06C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B070: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022B074: sw          $zero, 0x51E0($at)
    MEM_W(0X51E0, ctx->r1) = 0;
    // 0x8022B078: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022B07C: sw          $zero, 0x5F88($at)
    MEM_W(0X5F88, ctx->r1) = 0;
    // 0x8022B080: jr          $ra
    // 0x8022B084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8022B084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AF60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022AF60: jr          $ra
    // 0x8022AF64: nop

    return;
    // 0x8022AF64: nop

;}
RECOMP_FUNC void func_802219B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802219B8: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x802219BC: addiu       $t0, $t0, 0x3BC0
    ctx->r8 = ADD32(ctx->r8, 0X3BC0);
    // 0x802219C0: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x802219C4: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802219C8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802219CC: slti        $at, $t6, 0x1E
    ctx->r1 = SIGNED(ctx->r14) < 0X1E ? 1 : 0;
    // 0x802219D0: bne         $at, $zero, L_802219EC
    if (ctx->r1 != 0) {
        // 0x802219D4: sw          $a0, 0x78($sp)
        MEM_W(0X78, ctx->r29) = ctx->r4;
            goto L_802219EC;
    }
    // 0x802219D4: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x802219D8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802219DC: jal         0x80231A24
    // 0x802219E0: addiu       $a0, $a0, 0x3854
    ctx->r4 = ADD32(ctx->r4, 0X3854);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x802219E0: addiu       $a0, $a0, 0x3854
    ctx->r4 = ADD32(ctx->r4, 0X3854);
    after_0:
    // 0x802219E4: b           L_80221B20
    // 0x802219E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80221B20;
    // 0x802219E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802219EC:
    // 0x802219EC: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802219F0: addiu       $a1, $a1, 0x43B0
    ctx->r5 = ADD32(ctx->r5, 0X43B0);
    // 0x802219F4: jal         0x8022A2F0
    // 0x802219F8: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_8022A2F0(rdram, ctx);
        goto after_1;
    // 0x802219F8: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x802219FC: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    // 0x80221A00: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80221A04: lhu         $t7, -0x178C($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X178C);
    // 0x80221A08: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80221A0C: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80221A10: addiu       $t0, $t0, 0x3BC0
    ctx->r8 = ADD32(ctx->r8, 0X3BC0);
    // 0x80221A14: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80221A18: lwc1        $f6, 0x34($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X34);
    // 0x80221A1C: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80221A20: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80221A24: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80221A28: lwc1        $f8, 0x38($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X38);
    // 0x80221A2C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80221A30: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80221A34: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80221A38: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80221A3C: sll         $t8, $t8, 6
    ctx->r24 = S32(ctx->r24 << 6);
    // 0x80221A40: lui         $t3, 0x8027
    ctx->r11 = S32(0X8027 << 16);
    // 0x80221A44: sll         $t1, $t9, 5
    ctx->r9 = S32(ctx->r25 << 5);
    // 0x80221A48: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x80221A4C: addiu       $t3, $t3, 0x3BC8
    ctx->r11 = ADD32(ctx->r11, 0X3BC8);
    // 0x80221A50: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    // 0x80221A54: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x80221A58: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x80221A5C: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    // 0x80221A60: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80221A64: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80221A68: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x80221A6C: jal         0x802215C8
    // 0x80221A70: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_802215C8(rdram, ctx);
        goto after_2;
    // 0x80221A70: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x80221A74: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80221A78: addiu       $a1, $a1, 0x3B90
    ctx->r5 = ADD32(ctx->r5, 0X3B90);
    // 0x80221A7C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80221A80: lui         $t5, 0x384
    ctx->r13 = S32(0X384 << 16);
    // 0x80221A84: lui         $a3, 0x8025
    ctx->r7 = S32(0X8025 << 16);
    // 0x80221A88: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80221A8C: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x80221A90: ori         $t5, $t5, 0x10
    ctx->r13 = ctx->r13 | 0X10;
    // 0x80221A94: addiu       $a3, $a3, -0x178C
    ctx->r7 = ADD32(ctx->r7, -0X178C);
    // 0x80221A98: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80221A9C: lhu         $t6, 0x0($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X0);
    // 0x80221AA0: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80221AA4: addiu       $t0, $t0, 0x3BC0
    ctx->r8 = ADD32(ctx->r8, 0X3BC0);
    // 0x80221AA8: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x80221AAC: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80221AB0: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80221AB4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80221AB8: addiu       $a2, $a2, 0x3BC8
    ctx->r6 = ADD32(ctx->r6, 0X3BC8);
    // 0x80221ABC: sll         $t7, $t7, 6
    ctx->r15 = S32(ctx->r15 << 6);
    // 0x80221AC0: addu        $t9, $a2, $t7
    ctx->r25 = ADD32(ctx->r6, ctx->r15);
    // 0x80221AC4: sll         $t1, $t8, 5
    ctx->r9 = S32(ctx->r24 << 5);
    // 0x80221AC8: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80221ACC: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x80221AD0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80221AD4: lui         $t4, 0x382
    ctx->r12 = S32(0X382 << 16);
    // 0x80221AD8: ori         $t4, $t4, 0x10
    ctx->r12 = ctx->r12 | 0X10;
    // 0x80221ADC: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x80221AE0: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x80221AE4: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80221AE8: lhu         $t5, 0x0($a3)
    ctx->r13 = MEM_HU(ctx->r7, 0X0);
    // 0x80221AEC: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x80221AF0: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x80221AF4: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80221AF8: sll         $t6, $t6, 6
    ctx->r14 = S32(ctx->r14 << 6);
    // 0x80221AFC: addu        $t7, $a2, $t6
    ctx->r15 = ADD32(ctx->r6, ctx->r14);
    // 0x80221B00: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x80221B04: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x80221B08: addiu       $t2, $t1, 0x10
    ctx->r10 = ADD32(ctx->r9, 0X10);
    // 0x80221B0C: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x80221B10: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80221B14: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80221B18: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x80221B1C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80221B20:
    // 0x80221B20: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x80221B24: jr          $ra
    // 0x80221B28: nop

    return;
    // 0x80221B28: nop

;}
RECOMP_FUNC void func_80242690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80242690: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80242694: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x80242698: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x8024269C: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x802426A0: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x802426A4: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x802426A8: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x802426AC: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x802426B0: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x802426B4: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x802426B8: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x802426BC: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x802426C0: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x802426C4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x802426C8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802426CC: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x802426D0: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x802426D4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x802426D8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x802426DC: addiu       $a2, $a2, -0x5DCC
    ctx->r6 = ADD32(ctx->r6, -0X5DCC);
    // 0x802426E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802426E4: jal         0x80249920
    // 0x802426E8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_80249920(rdram, ctx);
        goto after_0;
    // 0x802426E8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x802426EC: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x802426F0: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802426F4: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x802426F8: addiu       $t6, $t6, -0x5DB4
    ctx->r14 = ADD32(ctx->r14, -0X5DB4);
    // 0x802426FC: addiu       $t7, $t7, -0x6028
    ctx->r15 = ADD32(ctx->r15, -0X6028);
    // 0x80242700: sw          $t6, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r14;
    // 0x80242704: sw          $t7, 0x28($s5)
    MEM_W(0X28, ctx->r21) = ctx->r15;
    // 0x80242708: lbu         $t8, 0x1C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1C);
    // 0x8024270C: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x80242710: addiu       $s3, $s3, 0x18E8
    ctx->r19 = ADD32(ctx->r19, 0X18E8);
    // 0x80242714: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80242718: sltiu       $at, $t9, 0x6
    ctx->r1 = ctx->r25 < 0X6 ? 1 : 0;
    // 0x8024271C: beq         $at, $zero, L_8024277C
    if (ctx->r1 == 0) {
        // 0x80242720: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_8024277C;
    }
    // 0x80242720: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80242724: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80242728: addu        $at, $at, $t9
    gpr jr_addend_80242730 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8024272C: lw          $t9, 0x5990($at)
    ctx->r25 = ADD32(ctx->r1, 0X5990);
    // 0x80242730: jr          $t9
    // 0x80242734: nop

    switch (jr_addend_80242730 >> 2) {
        case 0: goto L_80242738; break;
        case 1: goto L_80242744; break;
        case 2: goto L_8024275C; break;
        case 3: goto L_80242768; break;
        case 4: goto L_80242750; break;
        case 5: goto L_80242774; break;
        default: switch_error(__func__, 0x80242730, 0x80255990);
    }
    // 0x80242734: nop

L_80242738:
    // 0x80242738: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x8024273C: b           L_8024277C
    // 0x80242740: addiu       $s3, $s3, 0x1780
    ctx->r19 = ADD32(ctx->r19, 0X1780);
        goto L_8024277C;
    // 0x80242740: addiu       $s3, $s3, 0x1780
    ctx->r19 = ADD32(ctx->r19, 0X1780);
L_80242744:
    // 0x80242744: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x80242748: b           L_8024277C
    // 0x8024274C: addiu       $s3, $s3, 0x17E8
    ctx->r19 = ADD32(ctx->r19, 0X17E8);
        goto L_8024277C;
    // 0x8024274C: addiu       $s3, $s3, 0x17E8
    ctx->r19 = ADD32(ctx->r19, 0X17E8);
L_80242750:
    // 0x80242750: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x80242754: b           L_8024277C
    // 0x80242758: addiu       $s3, $s3, 0x1870
    ctx->r19 = ADD32(ctx->r19, 0X1870);
        goto L_8024277C;
    // 0x80242758: addiu       $s3, $s3, 0x1870
    ctx->r19 = ADD32(ctx->r19, 0X1870);
L_8024275C:
    // 0x8024275C: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x80242760: b           L_8024277C
    // 0x80242764: addiu       $s3, $s3, 0x1898
    ctx->r19 = ADD32(ctx->r19, 0X1898);
        goto L_8024277C;
    // 0x80242764: addiu       $s3, $s3, 0x1898
    ctx->r19 = ADD32(ctx->r19, 0X1898);
L_80242768:
    // 0x80242768: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x8024276C: b           L_8024277C
    // 0x80242770: addiu       $s3, $s3, 0x18C0
    ctx->r19 = ADD32(ctx->r19, 0X18C0);
        goto L_8024277C;
    // 0x80242770: addiu       $s3, $s3, 0x18C0
    ctx->r19 = ADD32(ctx->r19, 0X18C0);
L_80242774:
    // 0x80242774: b           L_8024277C
    // 0x80242778: lw          $s3, 0x20($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X20);
        goto L_8024277C;
    // 0x80242778: lw          $s3, 0x20($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X20);
L_8024277C:
    // 0x8024277C: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x80242780: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x80242784: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x80242788: sb          $t0, 0x24($s5)
    MEM_B(0X24, ctx->r21) = ctx->r8;
    // 0x8024278C: lw          $t1, 0x4($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X4);
    // 0x80242790: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80242794: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80242798: sw          $t1, 0x1C($s5)
    MEM_W(0X1C, ctx->r21) = ctx->r9;
    // 0x8024279C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802427A0: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x802427A4: jal         0x80236CD0
    // 0x802427A8: andi        $a3, $t0, 0xFF
    ctx->r7 = ctx->r8 & 0XFF;
    func_80236CD0(rdram, ctx);
        goto after_1;
    // 0x802427A8: andi        $a3, $t0, 0xFF
    ctx->r7 = ctx->r8 & 0XFF;
    after_1:
    // 0x802427AC: sw          $v0, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->r2;
    // 0x802427B0: lw          $a3, 0x1C($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X1C);
    // 0x802427B4: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x802427B8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x802427BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802427C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802427C4: jal         0x80236CD0
    // 0x802427C8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_80236CD0(rdram, ctx);
        goto after_2;
    // 0x802427C8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_2:
    // 0x802427CC: lw          $t4, 0x1C($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X1C);
    // 0x802427D0: sw          $v0, 0x14($s5)
    MEM_W(0X14, ctx->r21) = ctx->r2;
    // 0x802427D4: sw          $v0, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->r2;
    // 0x802427D8: beq         $t4, $zero, L_8024280C
    if (ctx->r12 == 0) {
        // 0x802427DC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8024280C;
    }
    // 0x802427DC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802427E0: lw          $t5, 0x14($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X14);
L_802427E4:
    // 0x802427E4: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x802427E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802427EC: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x802427F0: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x802427F4: lw          $t9, 0x1C($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X1C);
    // 0x802427F8: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x802427FC: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x80242800: sltu        $at, $t8, $t9
    ctx->r1 = ctx->r24 < ctx->r25 ? 1 : 0;
    // 0x80242804: bnel        $at, $zero, L_802427E4
    if (ctx->r1 != 0) {
        // 0x80242808: lw          $t5, 0x14($s5)
        ctx->r13 = MEM_W(ctx->r21, 0X14);
            goto L_802427E4;
    }
    goto skip_0;
    // 0x80242808: lw          $t5, 0x14($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X14);
    skip_0:
L_8024280C:
    // 0x8024280C: lbu         $t0, 0x24($s5)
    ctx->r8 = MEM_BU(ctx->r21, 0X24);
    // 0x80242810: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80242814: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80242818: blez        $t0, L_80242A8C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8024281C: addiu       $fp, $zero, 0x1
        ctx->r30 = ADD32(0, 0X1);
            goto L_80242A8C;
    }
    // 0x8024281C: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x80242820: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80242824: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80242828: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8024282C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80242830: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x80242834: ldc1        $f20, 0x59A8($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, 0X59A8);
    // 0x80242838: addiu       $s7, $zero, 0x28
    ctx->r23 = ADD32(0, 0X28);
L_8024283C:
    // 0x8024283C: multu       $s4, $s7
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80242840: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x80242844: lw          $t1, 0x20($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X20);
    // 0x80242848: addu        $t4, $s3, $t3
    ctx->r12 = ADD32(ctx->r19, ctx->r11);
    // 0x8024284C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80242850: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80242854: andi        $t6, $s1, 0xFFFF
    ctx->r14 = ctx->r17 & 0XFFFF;
    // 0x80242858: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8024285C: addu        $t8, $s3, $t7
    ctx->r24 = ADD32(ctx->r19, ctx->r15);
    // 0x80242860: addiu       $s1, $t6, 0x1
    ctx->r17 = ADD32(ctx->r14, 0X1);
    // 0x80242864: mflo        $t2
    ctx->r10 = lo;
    // 0x80242868: addu        $s0, $t1, $t2
    ctx->r16 = ADD32(ctx->r9, ctx->r10);
    // 0x8024286C: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x80242870: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80242874: andi        $t0, $s1, 0xFFFF
    ctx->r8 = ctx->r17 & 0XFFFF;
    // 0x80242878: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8024287C: addu        $t2, $s3, $t1
    ctx->r10 = ADD32(ctx->r19, ctx->r9);
    // 0x80242880: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x80242884: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80242888: addiu       $s1, $t0, 0x1
    ctx->r17 = ADD32(ctx->r8, 0X1);
    // 0x8024288C: andi        $t4, $s1, 0xFFFF
    ctx->r12 = ctx->r17 & 0XFFFF;
    // 0x80242890: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80242894: addu        $t6, $s3, $t5
    ctx->r14 = ADD32(ctx->r19, ctx->r13);
    // 0x80242898: sh          $t3, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r11;
    // 0x8024289C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x802428A0: addiu       $s1, $t4, 0x1
    ctx->r17 = ADD32(ctx->r12, 0X1);
    // 0x802428A4: andi        $t8, $s1, 0xFFFF
    ctx->r24 = ctx->r17 & 0XFFFF;
    // 0x802428A8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x802428AC: addu        $t0, $s3, $t9
    ctx->r8 = ADD32(ctx->r19, ctx->r25);
    // 0x802428B0: sh          $t7, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r15;
    // 0x802428B4: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x802428B8: addiu       $s1, $t8, 0x1
    ctx->r17 = ADD32(ctx->r24, 0X1);
    // 0x802428BC: andi        $t2, $s1, 0xFFFF
    ctx->r10 = ctx->r17 & 0XFFFF;
    // 0x802428C0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x802428C4: addu        $t4, $s3, $t3
    ctx->r12 = ADD32(ctx->r19, ctx->r11);
    // 0x802428C8: sh          $t1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r9;
    // 0x802428CC: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x802428D0: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x802428D4: or          $t0, $s1, $zero
    ctx->r8 = ctx->r17 | 0;
    // 0x802428D8: beq         $v0, $zero, L_802429DC
    if (ctx->r2 == 0) {
        // 0x802428DC: addiu       $s1, $t0, 0x2
        ctx->r17 = ADD32(ctx->r8, 0X2);
            goto L_802429DC;
    }
    // 0x802428DC: addiu       $s1, $t0, 0x2
    ctx->r17 = ADD32(ctx->r8, 0X2);
    // 0x802428E0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x802428E4: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x802428E8: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x802428EC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802428F0: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x802428F4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x802428F8: addiu       $s1, $t2, 0x1
    ctx->r17 = ADD32(ctx->r10, 0X1);
    // 0x802428FC: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x80242900: andi        $t7, $s1, 0xFFFF
    ctx->r15 = ctx->r17 & 0XFFFF;
    // 0x80242904: div.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
    // 0x80242908: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x8024290C: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x80242910: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x80242914: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x80242918: addu        $t2, $s3, $t1
    ctx->r10 = ADD32(ctx->r19, ctx->r9);
    // 0x8024291C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80242920: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
    // 0x80242924: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80242928: add.d       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f0.d + ctx->f0.d;
    // 0x8024292C: cvt.d.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
    // 0x80242930: div.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x80242934: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80242938: bgez        $t0, L_80242950
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8024293C: swc1        $f6, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
            goto L_80242950;
    }
    // 0x8024293C: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x80242940: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80242944: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80242948: nop

    // 0x8024294C: add.d       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f16.d + ctx->f10.d;
L_80242950:
    // 0x80242950: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80242954: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80242958: andi        $t4, $s1, 0xFFFF
    ctx->r12 = ctx->r17 & 0XFFFF;
    // 0x8024295C: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x80242960: swc1        $f24, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f24.u32l;
    // 0x80242964: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x80242968: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8024296C: addiu       $t5, $zero, 0x34
    ctx->r13 = ADD32(0, 0X34);
    // 0x80242970: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x80242974: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80242978: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8024297C: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80242980: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80242984: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x80242988: div.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f20.d);
    // 0x8024298C: mul.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x80242990: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x80242994: swc1        $f18, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f18.u32l;
    // 0x80242998: jal         0x80236CD0
    // 0x8024299C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_80236CD0(rdram, ctx);
        goto after_3;
    // 0x8024299C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_3:
    // 0x802429A0: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x802429A4: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x802429A8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802429AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802429B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802429B4: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x802429B8: jal         0x80236CD0
    // 0x802429BC: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    func_80236CD0(rdram, ctx);
        goto after_4;
    // 0x802429BC: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_4:
    // 0x802429C0: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x802429C4: sw          $v0, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r2;
    // 0x802429C8: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x802429CC: swc1        $f26, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f26.u32l;
    // 0x802429D0: lw          $t9, 0x24($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X24);
    // 0x802429D4: b           L_802429E8
    // 0x802429D8: sw          $fp, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r30;
        goto L_802429E8;
    // 0x802429D8: sw          $fp, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r30;
L_802429DC:
    // 0x802429DC: andi        $t1, $s1, 0xFFFF
    ctx->r9 = ctx->r17 & 0XFFFF;
    // 0x802429E0: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x802429E4: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
L_802429E8:
    // 0x802429E8: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x802429EC: addu        $s2, $s3, $t2
    ctx->r18 = ADD32(ctx->r19, ctx->r10);
    // 0x802429F0: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x802429F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802429F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802429FC: beq         $t3, $zero, L_80242A64
    if (ctx->r11 == 0) {
        // 0x80242A00: or          $a2, $s6, $zero
        ctx->r6 = ctx->r22 | 0;
            goto L_80242A64;
    }
    // 0x80242A00: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80242A04: addiu       $t4, $zero, 0x30
    ctx->r12 = ADD32(0, 0X30);
    // 0x80242A08: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80242A0C: jal         0x80236CD0
    // 0x80242A10: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    func_80236CD0(rdram, ctx);
        goto after_5;
    // 0x80242A10: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_5:
    // 0x80242A14: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80242A18: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x80242A1C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80242A20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80242A24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80242A28: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80242A2C: jal         0x80236CD0
    // 0x80242A30: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    func_80236CD0(rdram, ctx);
        goto after_6;
    // 0x80242A30: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_6:
    // 0x80242A34: lw          $t6, 0x20($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X20);
    // 0x80242A38: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80242A3C: andi        $t9, $s1, 0xFFFF
    ctx->r25 = ctx->r17 & 0XFFFF;
    // 0x80242A40: sw          $v0, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->r2;
    // 0x80242A44: lw          $t8, 0x20($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X20);
    // 0x80242A48: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80242A4C: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x80242A50: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x80242A54: jal         0x802425F0
    // 0x80242A58: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_802425F0(rdram, ctx);
        goto after_7;
    // 0x80242A58: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_7:
    // 0x80242A5C: b           L_80242A78
    // 0x80242A60: lbu         $t2, 0x24($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X24);
        goto L_80242A78;
    // 0x80242A60: lbu         $t2, 0x24($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X24);
L_80242A64:
    // 0x80242A64: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80242A68: andi        $t0, $s1, 0xFFFF
    ctx->r8 = ctx->r17 & 0XFFFF;
    // 0x80242A6C: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x80242A70: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x80242A74: lbu         $t2, 0x24($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X24);
L_80242A78:
    // 0x80242A78: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80242A7C: andi        $t1, $s4, 0xFFFF
    ctx->r9 = ctx->r20 & 0XFFFF;
    // 0x80242A80: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80242A84: bne         $at, $zero, L_8024283C
    if (ctx->r1 != 0) {
        // 0x80242A88: or          $s4, $t1, $zero
        ctx->r20 = ctx->r9 | 0;
            goto L_8024283C;
    }
    // 0x80242A88: or          $s4, $t1, $zero
    ctx->r20 = ctx->r9 | 0;
L_80242A8C:
    // 0x80242A8C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80242A90: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80242A94: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80242A98: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x80242A9C: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x80242AA0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80242AA4: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80242AA8: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80242AAC: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80242AB0: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80242AB4: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80242AB8: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x80242ABC: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x80242AC0: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x80242AC4: jr          $ra
    // 0x80242AC8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80242AC8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_802417A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802417A0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802417A4: lw          $a3, 0x0($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X0);
    // 0x802417A8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802417AC: beq         $a3, $zero, L_802417D8
    if (ctx->r7 == 0) {
        // 0x802417B0: nop
    
            goto L_802417D8;
    }
    // 0x802417B0: nop

L_802417B4:
    // 0x802417B4: bne         $a3, $a1, L_802417C8
    if (ctx->r7 != ctx->r5) {
        // 0x802417B8: nop
    
            goto L_802417C8;
    }
    // 0x802417B8: nop

    // 0x802417BC: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x802417C0: b           L_802417D8
    // 0x802417C4: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
        goto L_802417D8;
    // 0x802417C4: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
L_802417C8:
    // 0x802417C8: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x802417CC: lw          $a3, 0x0($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X0);
    // 0x802417D0: bne         $a3, $zero, L_802417B4
    if (ctx->r7 != 0) {
        // 0x802417D4: nop
    
            goto L_802417B4;
    }
    // 0x802417D4: nop

L_802417D8:
    // 0x802417D8: jr          $ra
    // 0x802417DC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x802417DC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_802481C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802481C0: slti        $at, $a1, 0xC
    ctx->r1 = SIGNED(ctx->r5) < 0XC ? 1 : 0;
    // 0x802481C4: bne         $at, $zero, L_8024823C
    if (ctx->r1 != 0) {
        // 0x802481C8: negu        $v1, $a0
        ctx->r3 = SUB32(0, ctx->r4);
            goto L_8024823C;
    }
    // 0x802481C8: negu        $v1, $a0
    ctx->r3 = SUB32(0, ctx->r4);
    // 0x802481CC: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x802481D0: beq         $v1, $zero, L_802481E0
    if (ctx->r3 == 0) {
        // 0x802481D4: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_802481E0;
    }
    // 0x802481D4: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x802481D8: swl         $zero, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, 0);
    // 0x802481DC: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
L_802481E0:
    // 0x802481E0: addiu       $at, $zero, -0x20
    ctx->r1 = ADD32(0, -0X20);
    // 0x802481E4: and         $a3, $a1, $at
    ctx->r7 = ctx->r5 & ctx->r1;
    // 0x802481E8: beq         $a3, $zero, L_8024821C
    if (ctx->r7 == 0) {
        // 0x802481EC: subu        $a1, $a1, $a3
        ctx->r5 = SUB32(ctx->r5, ctx->r7);
            goto L_8024821C;
    }
    // 0x802481EC: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x802481F0: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_802481F4:
    // 0x802481F4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x802481F8: sw          $zero, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = 0;
    // 0x802481FC: sw          $zero, -0x1C($a0)
    MEM_W(-0X1C, ctx->r4) = 0;
    // 0x80248200: sw          $zero, -0x18($a0)
    MEM_W(-0X18, ctx->r4) = 0;
    // 0x80248204: sw          $zero, -0x14($a0)
    MEM_W(-0X14, ctx->r4) = 0;
    // 0x80248208: sw          $zero, -0x10($a0)
    MEM_W(-0X10, ctx->r4) = 0;
    // 0x8024820C: sw          $zero, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = 0;
    // 0x80248210: sw          $zero, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = 0;
    // 0x80248214: bne         $a0, $a3, L_802481F4
    if (ctx->r4 != ctx->r7) {
        // 0x80248218: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_802481F4;
    }
    // 0x80248218: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
L_8024821C:
    // 0x8024821C: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80248220: and         $a3, $a1, $at
    ctx->r7 = ctx->r5 & ctx->r1;
    // 0x80248224: beq         $a3, $zero, L_8024823C
    if (ctx->r7 == 0) {
        // 0x80248228: subu        $a1, $a1, $a3
        ctx->r5 = SUB32(ctx->r5, ctx->r7);
            goto L_8024823C;
    }
    // 0x80248228: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x8024822C: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_80248230:
    // 0x80248230: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80248234: bne         $a0, $a3, L_80248230
    if (ctx->r4 != ctx->r7) {
        // 0x80248238: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_80248230;
    }
    // 0x80248238: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
L_8024823C:
    // 0x8024823C: blez        $a1, L_80248254
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80248240: nop
    
            goto L_80248254;
    }
    // 0x80248240: nop

    // 0x80248244: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
L_80248248:
    // 0x80248248: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8024824C: bne         $a0, $a1, L_80248248
    if (ctx->r4 != ctx->r5) {
        // 0x80248250: sb          $zero, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = 0;
            goto L_80248248;
    }
    // 0x80248250: sb          $zero, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = 0;
L_80248254:
    // 0x80248254: jr          $ra
    // 0x80248258: nop

    return;
    // 0x80248258: nop

;}
RECOMP_FUNC void func_80222CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222CBC: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80222CC0: addiu       $v1, $v1, -0x177C
    ctx->r3 = ADD32(ctx->r3, -0X177C);
    // 0x80222CC4: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    // 0x80222CC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80222CCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80222CD0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80222CD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80222CD8: sh          $t7, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r15;
    // 0x80222CDC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80222CE0: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80222CE4: addiu       $a2, $a2, 0xBE2
    ctx->r6 = ADD32(ctx->r6, 0XBE2);
    // 0x80222CE8: addiu       $a1, $a1, 0x38C4
    ctx->r5 = ADD32(ctx->r5, 0X38C4);
    // 0x80222CEC: jal         0x80231C58
    // 0x80222CF0: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    func_80231C58(rdram, ctx);
        goto after_0;
    // 0x80222CF0: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    after_0:
    // 0x80222CF4: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80222CF8: beq         $v0, $zero, L_80222D10
    if (ctx->r2 == 0) {
        // 0x80222CFC: addiu       $v1, $v1, -0x177C
        ctx->r3 = ADD32(ctx->r3, -0X177C);
            goto L_80222D10;
    }
    // 0x80222CFC: addiu       $v1, $v1, -0x177C
    ctx->r3 = ADD32(ctx->r3, -0X177C);
    // 0x80222D00: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x80222D04: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80222D08: b           L_80222D3C
    // 0x80222D0C: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
        goto L_80222D3C;
    // 0x80222D0C: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
L_80222D10:
    // 0x80222D10: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x80222D14: lhu         $t0, -0x178C($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X178C);
    // 0x80222D18: lh          $t3, 0x0($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X0);
    // 0x80222D1C: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x80222D20: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80222D24: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80222D28: lw          $t2, 0x43A8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X43A8);
    // 0x80222D2C: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x80222D30: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80222D34: jal         0x802291F8
    // 0x80222D38: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    func_802291F8(rdram, ctx);
        goto after_1;
    // 0x80222D38: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    after_1:
L_80222D3C:
    // 0x80222D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80222D40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80222D44: jr          $ra
    // 0x80222D48: nop

    return;
    // 0x80222D48: nop

;}
RECOMP_FUNC void func_8022B460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B460: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022B464: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022B468: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022B46C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B470: sll         $t6, $a1, 0
    ctx->r14 = S32(ctx->r5 << 0);
    // 0x8022B474: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8022B478: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022B47C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8022B480: bgez        $t6, L_8022B4BC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8022B484: or          $s1, $a1, $zero
        ctx->r17 = ctx->r5 | 0;
            goto L_8022B4BC;
    }
    // 0x8022B484: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8022B488: beq         $a2, $zero, L_8022B5C8
    if (ctx->r6 == 0) {
        // 0x8022B48C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8022B5C8;
    }
    // 0x8022B48C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022B490: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8022B494: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_8022B498:
    // 0x8022B498: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x8022B49C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B4A0: sltu        $at, $v0, $s0
    ctx->r1 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x8022B4A4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B4A8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022B4AC: bne         $at, $zero, L_8022B498
    if (ctx->r1 != 0) {
        // 0x8022B4B0: sb          $t7, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r15;
            goto L_8022B498;
    }
    // 0x8022B4B0: sb          $t7, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r15;
    // 0x8022B4B4: b           L_8022B5CC
    // 0x8022B4B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8022B5CC;
    // 0x8022B4B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8022B4BC:
    // 0x8022B4BC: sltiu       $at, $s0, 0x1001
    ctx->r1 = ctx->r16 < 0X1001 ? 1 : 0;
    // 0x8022B4C0: bne         $at, $zero, L_8022B4E8
    if (ctx->r1 != 0) {
        // 0x8022B4C4: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8022B4E8;
    }
L_8022B4C4:
    // 0x8022B4C4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8022B4C8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022B4CC: jal         0x8022B460
    // 0x8022B4D0: addiu       $a2, $zero, 0x1000
    ctx->r6 = ADD32(0, 0X1000);
    func_8022B460(rdram, ctx);
        goto after_0;
    // 0x8022B4D0: addiu       $a2, $zero, 0x1000
    ctx->r6 = ADD32(0, 0X1000);
    after_0:
    // 0x8022B4D4: addiu       $s0, $s0, -0x1000
    ctx->r16 = ADD32(ctx->r16, -0X1000);
    // 0x8022B4D8: sltiu       $at, $s0, 0x1001
    ctx->r1 = ctx->r16 < 0X1001 ? 1 : 0;
    // 0x8022B4DC: addiu       $s2, $s2, 0x1000
    ctx->r18 = ADD32(ctx->r18, 0X1000);
    // 0x8022B4E0: beq         $at, $zero, L_8022B4C4
    if (ctx->r1 == 0) {
        // 0x8022B4E4: addiu       $s1, $s1, 0x1000
        ctx->r17 = ADD32(ctx->r17, 0X1000);
            goto L_8022B4C4;
    }
    // 0x8022B4E4: addiu       $s1, $s1, 0x1000
    ctx->r17 = ADD32(ctx->r17, 0X1000);
L_8022B4E8:
    // 0x8022B4E8: beq         $s0, $zero, L_8022B5C8
    if (ctx->r16 == 0) {
        // 0x8022B4EC: or          $t8, $s1, $s2
        ctx->r24 = ctx->r17 | ctx->r18;
            goto L_8022B5C8;
    }
    // 0x8022B4EC: or          $t8, $s1, $s2
    ctx->r24 = ctx->r17 | ctx->r18;
    // 0x8022B4F0: or          $t9, $t8, $s0
    ctx->r25 = ctx->r24 | ctx->r16;
    // 0x8022B4F4: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8022B4F8: beq         $t0, $zero, L_8022B51C
    if (ctx->r8 == 0) {
        // 0x8022B4FC: andi        $t1, $s2, 0x7
        ctx->r9 = ctx->r18 & 0X7;
            goto L_8022B51C;
    }
    // 0x8022B4FC: andi        $t1, $s2, 0x7
    ctx->r9 = ctx->r18 & 0X7;
    // 0x8022B500: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022B504: jal         0x80231A24
    // 0x8022B508: addiu       $a0, $a0, 0x4000
    ctx->r4 = ADD32(ctx->r4, 0X4000);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022B508: addiu       $a0, $a0, 0x4000
    ctx->r4 = ADD32(ctx->r4, 0X4000);
    after_1:
    // 0x8022B50C: srl         $at, $zero, 8
    ctx->r1 = S32(U32(0) >> 8);
    // 0x8022B510: sb          $at, 0x1($zero)
    MEM_B(0X1, 0) = ctx->r1;
    // 0x8022B514: b           L_8022B5C8
    // 0x8022B518: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
        goto L_8022B5C8;
    // 0x8022B518: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
L_8022B51C:
    // 0x8022B51C: beq         $t1, $zero, L_8022B5BC
    if (ctx->r9 == 0) {
        // 0x8022B520: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8022B5BC;
    }
    // 0x8022B520: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8022B524: addiu       $a0, $s2, 0x7
    ctx->r4 = ADD32(ctx->r18, 0X7);
    // 0x8022B528: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8022B52C: and         $t2, $a0, $at
    ctx->r10 = ctx->r4 & ctx->r1;
    // 0x8022B530: subu        $a3, $t2, $s2
    ctx->r7 = SUB32(ctx->r10, ctx->r18);
    // 0x8022B534: beq         $s0, $a3, L_8022B550
    if (ctx->r16 == ctx->r7) {
        // 0x8022B538: or          $a0, $t2, $zero
        ctx->r4 = ctx->r10 | 0;
            goto L_8022B550;
    }
    // 0x8022B538: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8022B53C: addu        $a1, $s1, $a3
    ctx->r5 = ADD32(ctx->r17, ctx->r7);
    // 0x8022B540: subu        $a2, $s0, $a3
    ctx->r6 = SUB32(ctx->r16, ctx->r7);
    // 0x8022B544: jal         0x80231A40
    // 0x8022B548: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_80231A40(rdram, ctx);
        goto after_2;
    // 0x8022B548: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_2:
    // 0x8022B54C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
L_8022B550:
    // 0x8022B550: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8022B554: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8022B558: jal         0x8023D380
    // 0x8022B55C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_8023D380(rdram, ctx);
        goto after_3;
    // 0x8022B55C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_3:
    // 0x8022B560: addiu       $a0, $s1, 0x4
    ctx->r4 = ADD32(ctx->r17, 0X4);
    // 0x8022B564: jal         0x8023D380
    // 0x8022B568: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_8023D380(rdram, ctx);
        goto after_4;
    // 0x8022B568: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x8022B56C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B570: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022B574: blezl       $a3, L_8022B5CC
    if (SIGNED(ctx->r7) <= 0) {
        // 0x8022B578: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8022B5CC;
    }
    goto skip_0;
    // 0x8022B578: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x8022B57C: beq         $s0, $zero, L_8022B5C8
    if (ctx->r16 == 0) {
        // 0x8022B580: addu        $v1, $s2, $zero
        ctx->r3 = ADD32(ctx->r18, 0);
            goto L_8022B5C8;
    }
    // 0x8022B580: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
    // 0x8022B584: addiu       $t4, $sp, 0x3C
    ctx->r12 = ADD32(ctx->r29, 0X3C);
    // 0x8022B588: addu        $a0, $zero, $t4
    ctx->r4 = ADD32(0, ctx->r12);
    // 0x8022B58C: lbu         $t5, 0x0($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X0);
L_8022B590:
    // 0x8022B590: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B594: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8022B598: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B59C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022B5A0: beq         $at, $zero, L_8022B5C8
    if (ctx->r1 == 0) {
        // 0x8022B5A4: sb          $t5, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r13;
            goto L_8022B5C8;
    }
    // 0x8022B5A4: sb          $t5, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r13;
    // 0x8022B5A8: sltu        $at, $v0, $s0
    ctx->r1 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x8022B5AC: bnel        $at, $zero, L_8022B590
    if (ctx->r1 != 0) {
        // 0x8022B5B0: lbu         $t5, 0x0($a0)
        ctx->r13 = MEM_BU(ctx->r4, 0X0);
            goto L_8022B590;
    }
    goto skip_1;
    // 0x8022B5B0: lbu         $t5, 0x0($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X0);
    skip_1:
    // 0x8022B5B4: b           L_8022B5CC
    // 0x8022B5B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8022B5CC;
    // 0x8022B5B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8022B5BC:
    // 0x8022B5BC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022B5C0: jal         0x80231A40
    // 0x8022B5C4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_80231A40(rdram, ctx);
        goto after_5;
    // 0x8022B5C4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
L_8022B5C8:
    // 0x8022B5C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8022B5CC:
    // 0x8022B5CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B5D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B5D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022B5D8: jr          $ra
    // 0x8022B5DC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8022B5DC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80242374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80242374: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80242378: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8024237C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80242380: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80242384: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x80242388: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8024238C: addiu       $a1, $a1, 0x2BA0
    ctx->r5 = ADD32(ctx->r5, 0X2BA0);
    // 0x80242390: addiu       $a2, $a2, 0x2B70
    ctx->r6 = ADD32(ctx->r6, 0X2B70);
    // 0x80242394: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80242398: jal         0x80249920
    // 0x8024239C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_80249920(rdram, ctx);
        goto after_0;
    // 0x8024239C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_0:
    // 0x802423A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802423A4: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x802423A8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x802423AC: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x802423B0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802423B4: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    // 0x802423B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802423BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802423C0: jr          $ra
    // 0x802423C4: nop

    return;
    // 0x802423C4: nop

;}
RECOMP_FUNC void func_8021FB54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021FB54: bgez        $a0, L_8021FB64
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8021FB58: lui         $t5, 0x8027
        ctx->r13 = S32(0X8027 << 16);
            goto L_8021FB64;
    }
    // 0x8021FB58: lui         $t5, 0x8027
    ctx->r13 = S32(0X8027 << 16);
    // 0x8021FB5C: b           L_8021FB74
    // 0x8021FB60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_8021FB74;
    // 0x8021FB60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8021FB64:
    // 0x8021FB64: slti        $at, $a0, 0x140
    ctx->r1 = SIGNED(ctx->r4) < 0X140 ? 1 : 0;
    // 0x8021FB68: bne         $at, $zero, L_8021FB74
    if (ctx->r1 != 0) {
        // 0x8021FB6C: nop
    
            goto L_8021FB74;
    }
    // 0x8021FB6C: nop

    // 0x8021FB70: addiu       $a0, $zero, 0x13F
    ctx->r4 = ADD32(0, 0X13F);
L_8021FB74:
    // 0x8021FB74: bgez        $a2, L_8021FB84
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8021FB78: addiu       $t5, $t5, 0x3B90
        ctx->r13 = ADD32(ctx->r13, 0X3B90);
            goto L_8021FB84;
    }
    // 0x8021FB78: addiu       $t5, $t5, 0x3B90
    ctx->r13 = ADD32(ctx->r13, 0X3B90);
    // 0x8021FB7C: b           L_8021FB94
    // 0x8021FB80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_8021FB94;
    // 0x8021FB80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8021FB84:
    // 0x8021FB84: slti        $at, $a2, 0x140
    ctx->r1 = SIGNED(ctx->r6) < 0X140 ? 1 : 0;
    // 0x8021FB88: bne         $at, $zero, L_8021FB94
    if (ctx->r1 != 0) {
        // 0x8021FB8C: nop
    
            goto L_8021FB94;
    }
    // 0x8021FB8C: nop

    // 0x8021FB90: addiu       $a2, $zero, 0x13F
    ctx->r6 = ADD32(0, 0X13F);
L_8021FB94:
    // 0x8021FB94: bgez        $a1, L_8021FBA4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8021FB98: lui         $t7, 0xE700
        ctx->r15 = S32(0XE700 << 16);
            goto L_8021FBA4;
    }
    // 0x8021FB98: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8021FB9C: b           L_8021FBB4
    // 0x8021FBA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_8021FBB4;
    // 0x8021FBA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8021FBA4:
    // 0x8021FBA4: slti        $at, $a1, 0xF0
    ctx->r1 = SIGNED(ctx->r5) < 0XF0 ? 1 : 0;
    // 0x8021FBA8: bne         $at, $zero, L_8021FBB4
    if (ctx->r1 != 0) {
        // 0x8021FBAC: nop
    
            goto L_8021FBB4;
    }
    // 0x8021FBAC: nop

    // 0x8021FBB0: addiu       $a1, $zero, 0xEF
    ctx->r5 = ADD32(0, 0XEF);
L_8021FBB4:
    // 0x8021FBB4: bgez        $a3, L_8021FBC4
    if (SIGNED(ctx->r7) >= 0) {
        // 0x8021FBB8: slti        $at, $a3, 0xF0
        ctx->r1 = SIGNED(ctx->r7) < 0XF0 ? 1 : 0;
            goto L_8021FBC4;
    }
    // 0x8021FBB8: slti        $at, $a3, 0xF0
    ctx->r1 = SIGNED(ctx->r7) < 0XF0 ? 1 : 0;
    // 0x8021FBBC: b           L_8021FBD0
    // 0x8021FBC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_8021FBD0;
    // 0x8021FBC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_8021FBC4:
    // 0x8021FBC4: bnel        $at, $zero, L_8021FBD4
    if (ctx->r1 != 0) {
        // 0x8021FBC8: lw          $v1, 0x0($t5)
        ctx->r3 = MEM_W(ctx->r13, 0X0);
            goto L_8021FBD4;
    }
    goto skip_0;
    // 0x8021FBC8: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    skip_0:
    // 0x8021FBCC: addiu       $a3, $zero, 0xEF
    ctx->r7 = ADD32(0, 0XEF);
L_8021FBD0:
    // 0x8021FBD0: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
L_8021FBD4:
    // 0x8021FBD4: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8021FBD8: ori         $t9, $t9, 0x1402
    ctx->r25 = ctx->r25 | 0X1402;
    // 0x8021FBDC: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8021FBE0: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x8021FBE4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8021FBE8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021FBEC: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x8021FBF0: lui         $t6, 0x30
    ctx->r14 = S32(0X30 << 16);
    // 0x8021FBF4: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8021FBF8: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8021FBFC: sw          $t8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r24;
    // 0x8021FC00: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8021FC04: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021FC08: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x8021FC0C: lui         $t8, 0xB900
    ctx->r24 = S32(0XB900 << 16);
    // 0x8021FC10: ori         $t8, $t8, 0x31D
    ctx->r24 = ctx->r24 | 0X31D;
    // 0x8021FC14: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8021FC18: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
    // 0x8021FC1C: lui         $t9, 0xC08
    ctx->r25 = S32(0XC08 << 16);
    // 0x8021FC20: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8021FC24: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021FC28: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x8021FC2C: andi        $t7, $a2, 0x3FF
    ctx->r15 = ctx->r6 & 0X3FF;
    // 0x8021FC30: sll         $t8, $t7, 14
    ctx->r24 = S32(ctx->r15 << 14);
    // 0x8021FC34: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8021FC38: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x8021FC3C: addiu       $t6, $zero, 0xF0
    ctx->r14 = ADD32(0, 0XF0);
    // 0x8021FC40: subu        $t7, $t6, $a1
    ctx->r15 = SUB32(ctx->r14, ctx->r5);
    // 0x8021FC44: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8021FC48: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x8021FC4C: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8021FC50: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x8021FC54: addiu       $t6, $zero, 0xF0
    ctx->r14 = ADD32(0, 0XF0);
    // 0x8021FC58: andi        $t8, $a0, 0x3FF
    ctx->r24 = ctx->r4 & 0X3FF;
    // 0x8021FC5C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021FC60: subu        $t7, $t6, $a3
    ctx->r15 = SUB32(ctx->r14, ctx->r7);
    // 0x8021FC64: sll         $t9, $t8, 14
    ctx->r25 = S32(ctx->r24 << 14);
    // 0x8021FC68: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x8021FC6C: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8021FC70: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x8021FC74: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8021FC78: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x8021FC7C: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8021FC80: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8021FC84: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8021FC88: sw          $t8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r24;
    // 0x8021FC8C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8021FC90: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021FC94: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x8021FC98: lui         $t8, 0x10
    ctx->r24 = S32(0X10 << 16);
    // 0x8021FC9C: ori         $t7, $t7, 0x1402
    ctx->r15 = ctx->r15 | 0X1402;
    // 0x8021FCA0: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8021FCA4: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x8021FCA8: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x8021FCAC: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8021FCB0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021FCB4: lw          $t9, 0x4348($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4348);
    // 0x8021FCB8: addiu       $at, $zero, -0x1000
    ctx->r1 = ADD32(0, -0X1000);
    // 0x8021FCBC: and         $t6, $t9, $at
    ctx->r14 = ctx->r25 & ctx->r1;
    // 0x8021FCC0: ori         $t7, $t6, 0xFFE
    ctx->r15 = ctx->r14 | 0XFFE;
    // 0x8021FCC4: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8021FCC8: jr          $ra
    // 0x8021FCCC: sw          $t7, 0x4348($at)
    MEM_W(0X4348, ctx->r1) = ctx->r15;
    return;
    // 0x8021FCCC: sw          $t7, 0x4348($at)
    MEM_W(0X4348, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_8024960C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024960C: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x80249610: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x80249614: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80249618: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8024961C: bgez        $a2, L_80249630
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80249620: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80249630;
    }
    // 0x80249620: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80249624: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80249628: nop

    // 0x8024962C: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_80249630:
    // 0x80249630: lh          $t6, 0x18($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X18);
    // 0x80249634: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80249638: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024963C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80249640: ldc1        $f10, 0x5A78($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X5A78);
    // 0x80249644: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80249648: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8024964C: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x80249650: mul.d       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x80249654: div.d       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f18.d);
    // 0x80249658: jr          $ra
    // 0x8024965C: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    return;
    // 0x8024965C: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
;}
RECOMP_FUNC void func_802474C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802474C0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802474C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802474C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802474CC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802474D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802474D4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x802474D8: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x802474DC: lui         $t6, 0xA440
    ctx->r14 = S32(0XA440 << 16);
    // 0x802474E0: lw          $s1, 0x1774($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X1774);
    // 0x802474E4: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x802474E8: lw          $s0, 0x8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X8);
    // 0x802474EC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802474F0: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x802474F4: jal         0x802375F0
    // 0x802474F8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    func_802375F0(rdram, ctx);
        goto after_0;
    // 0x802474F8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_0:
    // 0x802474FC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80247500: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80247504: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80247508: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8024750C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80247510: addu        $t1, $s0, $t0
    ctx->r9 = ADD32(ctx->r16, ctx->r8);
    // 0x80247514: lw          $t2, 0x28($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X28);
    // 0x80247518: addu        $t3, $t2, $s2
    ctx->r11 = ADD32(ctx->r10, ctx->r18);
    // 0x8024751C: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x80247520: lhu         $t4, 0x0($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X0);
    // 0x80247524: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x80247528: beq         $t5, $zero, L_8024754C
    if (ctx->r13 == 0) {
        // 0x8024752C: nop
    
            goto L_8024754C;
    }
    // 0x8024752C: nop

    // 0x80247530: lw          $t7, 0x20($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X20);
    // 0x80247534: lw          $t6, 0x20($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X20);
    // 0x80247538: addiu       $at, $zero, -0x1000
    ctx->r1 = ADD32(0, -0X1000);
    // 0x8024753C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80247540: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80247544: b           L_80247554
    // 0x80247548: sw          $t9, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r25;
        goto L_80247554;
    // 0x80247548: sw          $t9, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r25;
L_8024754C:
    // 0x8024754C: lw          $t0, 0x20($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X20);
    // 0x80247550: sw          $t0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r8;
L_80247554:
    // 0x80247554: lhu         $t1, 0x0($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X0);
    // 0x80247558: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x8024755C: beq         $t2, $zero, L_80247664
    if (ctx->r10 == 0) {
        // 0x80247560: nop
    
            goto L_80247664;
    }
    // 0x80247560: nop

    // 0x80247564: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80247568: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8024756C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80247570: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80247574: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x80247578: lw          $t7, 0x2C($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X2C);
    // 0x8024757C: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x80247580: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80247584: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80247588: lwc1        $f4, 0x24($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X24);
    // 0x8024758C: bgez        $t6, L_802475A4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80247590: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_802475A4;
    }
    // 0x80247590: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80247594: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80247598: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8024759C: nop

    // 0x802475A0: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_802475A4:
    // 0x802475A4: mul.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802475A8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802475AC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802475B0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802475B4: nop

    // 0x802475B8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x802475BC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802475C0: nop

    // 0x802475C4: andi        $at, $t9, 0x4
    ctx->r1 = ctx->r25 & 0X4;
    // 0x802475C8: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x802475CC: beq         $t9, $zero, L_8024761C
    if (ctx->r25 == 0) {
        // 0x802475D0: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_8024761C;
    }
    // 0x802475D0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802475D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802475D8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802475DC: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x802475E0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802475E4: nop

    // 0x802475E8: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x802475EC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802475F0: nop

    // 0x802475F4: andi        $at, $t9, 0x4
    ctx->r1 = ctx->r25 & 0X4;
    // 0x802475F8: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x802475FC: bne         $t9, $zero, L_80247614
    if (ctx->r25 != 0) {
        // 0x80247600: nop
    
            goto L_80247614;
    }
    // 0x80247600: nop

    // 0x80247604: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80247608: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8024760C: b           L_8024762C
    // 0x80247610: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8024762C;
    // 0x80247610: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_80247614:
    // 0x80247614: b           L_8024762C
    // 0x80247618: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8024762C;
    // 0x80247618: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
L_8024761C:
    // 0x8024761C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80247620: nop

    // 0x80247624: bltz        $t9, L_80247614
    if (SIGNED(ctx->r25) < 0) {
        // 0x80247628: nop
    
            goto L_80247614;
    }
    // 0x80247628: nop

L_8024762C:
    // 0x8024762C: sw          $t9, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r25;
    // 0x80247630: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80247634: lw          $t0, 0x2C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X2C);
    // 0x80247638: addiu       $at, $zero, -0x1000
    ctx->r1 = ADD32(0, -0X1000);
    // 0x8024763C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80247640: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80247644: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80247648: addu        $t3, $s0, $t2
    ctx->r11 = ADD32(ctx->r16, ctx->r10);
    // 0x8024764C: lw          $t4, 0x2C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X2C);
    // 0x80247650: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80247654: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x80247658: or          $t7, $t0, $t5
    ctx->r15 = ctx->r8 | ctx->r13;
    // 0x8024765C: b           L_80247680
    // 0x80247660: sw          $t7, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r15;
        goto L_80247680;
    // 0x80247660: sw          $t7, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r15;
L_80247664:
    // 0x80247664: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80247668: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8024766C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80247670: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80247674: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x80247678: lw          $t1, 0x2C($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X2C);
    // 0x8024767C: sw          $t1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r9;
L_80247680:
    // 0x80247680: lw          $t2, 0x1C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X1C);
    // 0x80247684: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x80247688: lhu         $t3, 0x0($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X0);
    // 0x8024768C: andi        $t4, $t3, 0x20
    ctx->r12 = ctx->r11 & 0X20;
    // 0x80247690: beq         $t4, $zero, L_8024769C
    if (ctx->r12 == 0) {
        // 0x80247694: nop
    
            goto L_8024769C;
    }
    // 0x80247694: nop

    // 0x80247698: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_8024769C:
    // 0x8024769C: lhu         $t0, 0x0($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X0);
    // 0x802476A0: andi        $t5, $t0, 0x40
    ctx->r13 = ctx->r8 & 0X40;
    // 0x802476A4: beq         $t5, $zero, L_802476BC
    if (ctx->r13 == 0) {
        // 0x802476A8: nop
    
            goto L_802476BC;
    }
    // 0x802476A8: nop

    // 0x802476AC: sw          $zero, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = 0;
    // 0x802476B0: jal         0x802375F0
    // 0x802476B4: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    func_802375F0(rdram, ctx);
        goto after_1;
    // 0x802476B4: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_1:
    // 0x802476B8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_802476BC:
    // 0x802476BC: lhu         $t7, 0x0($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X0);
    // 0x802476C0: andi        $t6, $t7, 0x80
    ctx->r14 = ctx->r15 & 0X80;
    // 0x802476C4: beq         $t6, $zero, L_802476EC
    if (ctx->r14 == 0) {
        // 0x802476C8: nop
    
            goto L_802476EC;
    }
    // 0x802476C8: nop

    // 0x802476CC: lhu         $t8, 0x28($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X28);
    // 0x802476D0: lui         $at, 0x3FF
    ctx->r1 = S32(0X3FF << 16);
    // 0x802476D4: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x802476D8: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x802476DC: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x802476E0: jal         0x802375F0
    // 0x802476E4: sw          $t1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r9;
    func_802375F0(rdram, ctx);
        goto after_2;
    // 0x802476E4: sw          $t1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r9;
    after_2:
    // 0x802476E8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_802476EC:
    // 0x802476EC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x802476F0: lui         $t3, 0xA440
    ctx->r11 = S32(0XA440 << 16);
    // 0x802476F4: lui         $t0, 0xA440
    ctx->r8 = S32(0XA440 << 16);
    // 0x802476F8: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x802476FC: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x80247700: lui         $t7, 0xA440
    ctx->r15 = S32(0XA440 << 16);
    // 0x80247704: lui         $t8, 0xA440
    ctx->r24 = S32(0XA440 << 16);
    // 0x80247708: sw          $t4, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r12;
    // 0x8024770C: lw          $t5, 0xC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC);
    // 0x80247710: lui         $t1, 0xA440
    ctx->r9 = S32(0XA440 << 16);
    // 0x80247714: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80247718: sw          $t5, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r13;
    // 0x8024771C: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x80247720: sw          $t6, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->r14;
    // 0x80247724: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x80247728: sw          $t9, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->r25;
    // 0x8024772C: lw          $t2, 0x18($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X18);
    // 0x80247730: lui         $t9, 0xA440
    ctx->r25 = S32(0XA440 << 16);
    // 0x80247734: sw          $t2, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->r10;
    // 0x80247738: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8024773C: sw          $t4, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r12;
    // 0x80247740: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80247744: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80247748: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8024774C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80247750: addu        $t6, $s0, $t7
    ctx->r14 = ADD32(ctx->r16, ctx->r15);
    // 0x80247754: lw          $t8, 0x30($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X30);
    // 0x80247758: sw          $t8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->r24;
    // 0x8024775C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80247760: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80247764: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80247768: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8024776C: addu        $t3, $s0, $t2
    ctx->r11 = ADD32(ctx->r16, ctx->r10);
    // 0x80247770: lw          $t4, 0x34($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X34);
    // 0x80247774: lui         $t2, 0xA440
    ctx->r10 = S32(0XA440 << 16);
    // 0x80247778: sw          $t4, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r12;
    // 0x8024777C: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80247780: lui         $t4, 0xA440
    ctx->r12 = S32(0XA440 << 16);
    // 0x80247784: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80247788: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8024778C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80247790: addu        $t6, $s0, $t7
    ctx->r14 = ADD32(ctx->r16, ctx->r15);
    // 0x80247794: lw          $t8, 0x38($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X38);
    // 0x80247798: lui         $t5, 0xA440
    ctx->r13 = S32(0XA440 << 16);
    // 0x8024779C: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x802477A0: sw          $t8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r24;
    // 0x802477A4: lw          $t1, 0x20($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X20);
    // 0x802477A8: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x802477AC: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802477B0: sw          $t1, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r9;
    // 0x802477B4: lw          $t3, 0x2C($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X2C);
    // 0x802477B8: sw          $t3, 0x34($t4)
    MEM_W(0X34, ctx->r12) = ctx->r11;
    // 0x802477BC: lw          $t0, 0xC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC);
    // 0x802477C0: sw          $t0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r8;
    // 0x802477C4: lw          $t7, 0x1770($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1770);
    // 0x802477C8: sw          $t7, 0x1774($at)
    MEM_W(0X1774, ctx->r1) = ctx->r15;
    // 0x802477CC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802477D0: sw          $s1, 0x1770($at)
    MEM_W(0X1770, ctx->r1) = ctx->r17;
    // 0x802477D4: lw          $t8, 0x1770($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1770);
    // 0x802477D8: lw          $t6, 0x1774($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1774);
    // 0x802477DC: addiu       $t2, $t8, 0x30
    ctx->r10 = ADD32(ctx->r24, 0X30);
L_802477E0:
    // 0x802477E0: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x802477E4: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x802477E8: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x802477EC: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x802477F0: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x802477F4: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x802477F8: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x802477FC: bne         $t8, $t2, L_802477E0
    if (ctx->r24 != ctx->r10) {
        // 0x80247800: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_802477E0;
    }
    // 0x80247800: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80247804: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80247808: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024780C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80247810: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80247814: jr          $ra
    // 0x80247818: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80247818: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8024254C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024254C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80242550: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80242554: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80242558: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8024255C: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x80242560: addiu       $a2, $a2, 0x3C24
    ctx->r6 = ADD32(ctx->r6, 0X3C24);
    // 0x80242564: addiu       $a1, $a1, 0x421C
    ctx->r5 = ADD32(ctx->r5, 0X421C);
    // 0x80242568: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8024256C: jal         0x80249920
    // 0x80242570: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80249920(rdram, ctx);
        goto after_0;
    // 0x80242570: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x80242574: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x80242578: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8024257C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80242580: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80242584: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80242588: jal         0x80236CD0
    // 0x8024258C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80236CD0(rdram, ctx);
        goto after_1;
    // 0x8024258C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80242590: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80242594: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80242598: sw          $v0, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r2;
    // 0x8024259C: sw          $v1, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r3;
    // 0x802425A0: sw          $zero, 0x48($t0)
    MEM_W(0X48, ctx->r8) = 0;
    // 0x802425A4: sh          $v1, 0x1A($t0)
    MEM_H(0X1A, ctx->r8) = ctx->r3;
    // 0x802425A8: sh          $v1, 0x28($t0)
    MEM_H(0X28, ctx->r8) = ctx->r3;
    // 0x802425AC: sh          $v1, 0x2E($t0)
    MEM_H(0X2E, ctx->r8) = ctx->r3;
    // 0x802425B0: sh          $v1, 0x1C($t0)
    MEM_H(0X1C, ctx->r8) = ctx->r3;
    // 0x802425B4: sh          $v1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r3;
    // 0x802425B8: sh          $zero, 0x20($t0)
    MEM_H(0X20, ctx->r8) = 0;
    // 0x802425BC: sh          $zero, 0x22($t0)
    MEM_H(0X22, ctx->r8) = 0;
    // 0x802425C0: sh          $v1, 0x26($t0)
    MEM_H(0X26, ctx->r8) = ctx->r3;
    // 0x802425C4: sh          $zero, 0x24($t0)
    MEM_H(0X24, ctx->r8) = 0;
    // 0x802425C8: sw          $zero, 0x30($t0)
    MEM_W(0X30, ctx->r8) = 0;
    // 0x802425CC: sw          $zero, 0x34($t0)
    MEM_W(0X34, ctx->r8) = 0;
    // 0x802425D0: sh          $zero, 0x18($t0)
    MEM_H(0X18, ctx->r8) = 0;
    // 0x802425D4: sw          $zero, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = 0;
    // 0x802425D8: sw          $zero, 0x40($t0)
    MEM_W(0X40, ctx->r8) = 0;
    // 0x802425DC: sw          $zero, 0x44($t0)
    MEM_W(0X44, ctx->r8) = 0;
    // 0x802425E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802425E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802425E8: jr          $ra
    // 0x802425EC: nop

    return;
    // 0x802425EC: nop

;}
RECOMP_FUNC void func_80237828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237828: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023782C: lw          $v0, 0x910($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X910);
    // 0x80237830: lw          $t6, 0x2C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X2C);
    // 0x80237834: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80237838: jr          $ra
    // 0x8023783C: sw          $a0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r4;
    return;
    // 0x8023783C: sw          $a0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r4;
;}
RECOMP_FUNC void func_8022FFC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022FFC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FFCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FFD0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8022FFD4: jal         0x8022FF90
    // 0x8022FFD8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8022FF90(rdram, ctx);
        goto after_0;
    // 0x8022FFD8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8022FFDC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8022FFE0: jal         0x8022FF90
    // 0x8022FFE4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8022FF90(rdram, ctx);
        goto after_1;
    // 0x8022FFE4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022FFE8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FFEC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8022FFF0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8022FFF4: slt         $at, $t0, $v0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022FFF8: beq         $at, $zero, L_80230008
    if (ctx->r1 == 0) {
        // 0x8022FFFC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80230008;
    }
    // 0x8022FFFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230000: b           L_8023015C
    // 0x80230004: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8023015C;
    // 0x80230004: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80230008:
    // 0x80230008: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8023000C: beq         $at, $zero, L_8023001C
    if (ctx->r1 == 0) {
        // 0x80230010: nop
    
            goto L_8023001C;
    }
    // 0x80230010: nop

    // 0x80230014: b           L_8023015C
    // 0x80230018: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023015C;
    // 0x80230018: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023001C:
    // 0x8023001C: blez        $t0, L_80230158
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80230020: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80230158;
    }
    // 0x80230020: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80230024: andi        $v0, $t0, 0x3
    ctx->r2 = ctx->r8 & 0X3;
    // 0x80230028: beq         $v0, $zero, L_80230078
    if (ctx->r2 == 0) {
        // 0x8023002C: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_80230078;
    }
    // 0x8023002C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_80230030:
    // 0x80230030: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x80230034: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80230038: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8023003C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80230040: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80230044: beql        $at, $zero, L_80230058
    if (ctx->r1 == 0) {
        // 0x80230048: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80230058;
    }
    goto skip_0;
    // 0x80230048: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    skip_0:
    // 0x8023004C: b           L_8023015C
    // 0x80230050: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8023015C;
    // 0x80230050: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230054: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
L_80230058:
    // 0x80230058: beq         $at, $zero, L_80230068
    if (ctx->r1 == 0) {
        // 0x8023005C: nop
    
            goto L_80230068;
    }
    // 0x8023005C: nop

    // 0x80230060: b           L_8023015C
    // 0x80230064: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023015C;
    // 0x80230064: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80230068:
    // 0x80230068: bne         $a3, $a0, L_80230030
    if (ctx->r7 != ctx->r4) {
        // 0x8023006C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_80230030;
    }
    // 0x8023006C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80230070: beql        $a0, $t0, L_8023015C
    if (ctx->r4 == ctx->r8) {
        // 0x80230074: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8023015C;
    }
    goto skip_1;
    // 0x80230074: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
L_80230078:
    // 0x80230078: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x8023007C: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80230080: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80230084: beql        $at, $zero, L_80230098
    if (ctx->r1 == 0) {
        // 0x80230088: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80230098;
    }
    goto skip_2;
    // 0x80230088: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    skip_2:
    // 0x8023008C: b           L_8023015C
    // 0x80230090: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8023015C;
    // 0x80230090: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230094: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
L_80230098:
    // 0x80230098: beql        $at, $zero, L_802300AC
    if (ctx->r1 == 0) {
        // 0x8023009C: lbu         $v0, 0x1($a2)
        ctx->r2 = MEM_BU(ctx->r6, 0X1);
            goto L_802300AC;
    }
    goto skip_3;
    // 0x8023009C: lbu         $v0, 0x1($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1);
    skip_3:
    // 0x802300A0: b           L_8023015C
    // 0x802300A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023015C;
    // 0x802300A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802300A8: lbu         $v0, 0x1($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1);
L_802300AC:
    // 0x802300AC: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x802300B0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x802300B4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x802300B8: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802300BC: beql        $at, $zero, L_802300D0
    if (ctx->r1 == 0) {
        // 0x802300C0: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_802300D0;
    }
    goto skip_4;
    // 0x802300C0: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    skip_4:
    // 0x802300C4: b           L_8023015C
    // 0x802300C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8023015C;
    // 0x802300C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802300CC: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
L_802300D0:
    // 0x802300D0: beq         $at, $zero, L_802300E0
    if (ctx->r1 == 0) {
        // 0x802300D4: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_802300E0;
    }
    // 0x802300D4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x802300D8: b           L_8023015C
    // 0x802300DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023015C;
    // 0x802300DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802300E0:
    // 0x802300E0: lbu         $v0, 0x1($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1);
    // 0x802300E4: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x802300E8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x802300EC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x802300F0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802300F4: beql        $at, $zero, L_80230108
    if (ctx->r1 == 0) {
        // 0x802300F8: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80230108;
    }
    goto skip_5;
    // 0x802300F8: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    skip_5:
    // 0x802300FC: b           L_8023015C
    // 0x80230100: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8023015C;
    // 0x80230100: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230104: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
L_80230108:
    // 0x80230108: beql        $at, $zero, L_8023011C
    if (ctx->r1 == 0) {
        // 0x8023010C: lbu         $v0, 0x1($a2)
        ctx->r2 = MEM_BU(ctx->r6, 0X1);
            goto L_8023011C;
    }
    goto skip_6;
    // 0x8023010C: lbu         $v0, 0x1($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1);
    skip_6:
    // 0x80230110: b           L_8023015C
    // 0x80230114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023015C;
    // 0x80230114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230118: lbu         $v0, 0x1($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1);
L_8023011C:
    // 0x8023011C: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80230120: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80230124: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80230128: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023012C: beq         $at, $zero, L_8023013C
    if (ctx->r1 == 0) {
        // 0x80230130: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8023013C;
    }
    // 0x80230130: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80230134: b           L_8023015C
    // 0x80230138: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8023015C;
    // 0x80230138: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8023013C:
    // 0x8023013C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80230140: beq         $at, $zero, L_80230150
    if (ctx->r1 == 0) {
        // 0x80230144: nop
    
            goto L_80230150;
    }
    // 0x80230144: nop

    // 0x80230148: b           L_8023015C
    // 0x8023014C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023015C;
    // 0x8023014C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80230150:
    // 0x80230150: bne         $a0, $t0, L_80230078
    if (ctx->r4 != ctx->r8) {
        // 0x80230154: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_80230078;
    }
    // 0x80230154: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_80230158:
    // 0x80230158: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8023015C:
    // 0x8023015C: jr          $ra
    // 0x80230160: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80230160: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023FE68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FE68: jr          $ra
    // 0x8023FE6C: nop

    return;
    // 0x8023FE6C: nop

;}
RECOMP_FUNC void func_8020377C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020377C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80203780: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80203784: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80203788: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8020378C: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80203790: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80203794: lw          $t7, 0x6DE4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6DE4);
    // 0x80203798: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8020379C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x802037A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802037A4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802037A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x802037AC: jr          $ra
    // 0x802037B0: lw          $v0, 0xA8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0XA8);
    return;
    // 0x802037B0: lw          $v0, 0xA8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0XA8);
;}
RECOMP_FUNC void func_8023E010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023E014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023E018: jal         0x80246F80
    // 0x8023E01C: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    func_80246F80(rdram, ctx);
        goto after_0;
    // 0x8023E01C: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    after_0:
    // 0x8023E020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023E024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023E028: jr          $ra
    // 0x8023E02C: nop

    return;
    // 0x8023E02C: nop

;}
RECOMP_FUNC void func_80235200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80235200: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80235204: andi        $t6, $a1, 0xF
    ctx->r14 = ctx->r5 & 0XF;
    // 0x80235208: subu        $v0, $v1, $t6
    ctx->r2 = SUB32(ctx->r3, ctx->r14);
    // 0x8023520C: beq         $v1, $v0, L_8023521C
    if (ctx->r3 == ctx->r2) {
        // 0x80235210: addu        $t7, $a1, $v0
        ctx->r15 = ADD32(ctx->r5, ctx->r2);
            goto L_8023521C;
    }
    // 0x80235210: addu        $t7, $a1, $v0
    ctx->r15 = ADD32(ctx->r5, ctx->r2);
    // 0x80235214: b           L_80235220
    // 0x80235218: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
        goto L_80235220;
    // 0x80235218: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
L_8023521C:
    // 0x8023521C: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
L_80235220:
    // 0x80235220: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80235224: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x80235228: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x8023522C: jr          $ra
    // 0x80235230: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    return;
    // 0x80235230: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_80233D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80233D90: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80233D94: addiu       $a3, $a3, 0x3950
    ctx->r7 = ADD32(ctx->r7, 0X3950);
    // 0x80233D98: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80233D9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233DA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233DA4: bne         $t6, $zero, L_80233E0C
    if (ctx->r14 != 0) {
        // 0x80233DA8: lui         $t0, 0x8028
        ctx->r8 = S32(0X8028 << 16);
            goto L_80233E0C;
    }
    // 0x80233DA8: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x80233DAC: addiu       $t0, $t0, 0xBC0
    ctx->r8 = ADD32(ctx->r8, 0XBC0);
    // 0x80233DB0: lhu         $a0, 0x2C($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X2C);
    // 0x80233DB4: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80233DB8: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80233DBC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80233DC0: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x80233DC4: jal         0x8022BA58
    // 0x80233DC8: sll         $a0, $t7, 2
    ctx->r4 = S32(ctx->r15 << 2);
    func_8022BA58(rdram, ctx);
        goto after_0;
    // 0x80233DC8: sll         $a0, $t7, 2
    ctx->r4 = S32(ctx->r15 << 2);
    after_0:
    // 0x80233DCC: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x80233DD0: addiu       $t0, $t0, 0xBC0
    ctx->r8 = ADD32(ctx->r8, 0XBC0);
    // 0x80233DD4: lhu         $a2, 0x2C($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X2C);
    // 0x80233DD8: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80233DDC: addiu       $a3, $a3, 0x3950
    ctx->r7 = ADD32(ctx->r7, 0X3950);
    // 0x80233DE0: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x80233DE4: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x80233DE8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80233DEC: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x80233DF0: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x80233DF4: sll         $a2, $t8, 2
    ctx->r6 = S32(ctx->r24 << 2);
    // 0x80233DF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80233DFC: jal         0x8022B780
    // 0x80233E00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8022B780(rdram, ctx);
        goto after_1;
    // 0x80233E00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80233E04: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80233E08: addiu       $a3, $a3, 0x3950
    ctx->r7 = ADD32(ctx->r7, 0X3950);
L_80233E0C:
    // 0x80233E0C: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x80233E10: addiu       $t0, $t0, 0xBC0
    ctx->r8 = ADD32(ctx->r8, 0XBC0);
    // 0x80233E14: lhu         $t9, 0x2C($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X2C);
    // 0x80233E18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80233E1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80233E20: blez        $t9, L_80233E90
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80233E24: addiu       $a2, $zero, 0xFFF
        ctx->r6 = ADD32(0, 0XFFF);
            goto L_80233E90;
    }
    // 0x80233E24: addiu       $a2, $zero, 0xFFF
    ctx->r6 = ADD32(0, 0XFFF);
    // 0x80233E28: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80233E2C: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
L_80233E30:
    // 0x80233E30: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80233E34: addu        $v0, $a1, $t1
    ctx->r2 = ADD32(ctx->r5, ctx->r9);
    // 0x80233E38: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x80233E3C: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x80233E40: lh          $t2, 0x6($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X6);
    // 0x80233E44: lh          $t3, 0xA($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XA);
    // 0x80233E48: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80233E4C: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x80233E50: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x80233E54: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
    // 0x80233E58: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    // 0x80233E5C: sb          $v1, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r3;
    // 0x80233E60: sb          $v1, 0x11($v0)
    MEM_B(0X11, ctx->r2) = ctx->r3;
    // 0x80233E64: sh          $a2, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r6;
    // 0x80233E68: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x80233E6C: sw          $zero, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = 0;
    // 0x80233E70: sw          $zero, 0x60($v0)
    MEM_W(0X60, ctx->r2) = 0;
    // 0x80233E74: sh          $t2, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r10;
    // 0x80233E78: sh          $t3, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r11;
    // 0x80233E7C: lhu         $t4, 0x2C($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0X2C);
    // 0x80233E80: addiu       $a1, $a1, 0x64
    ctx->r5 = ADD32(ctx->r5, 0X64);
    // 0x80233E84: slt         $at, $a0, $t4
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80233E88: bnel        $at, $zero, L_80233E30
    if (ctx->r1 != 0) {
        // 0x80233E8C: lw          $t1, 0x0($a3)
        ctx->r9 = MEM_W(ctx->r7, 0X0);
            goto L_80233E30;
    }
    goto skip_0;
    // 0x80233E8C: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    skip_0:
L_80233E90:
    // 0x80233E90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233E94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80233E98: jr          $ra
    // 0x80233E9C: nop

    return;
    // 0x80233E9C: nop

;}
RECOMP_FUNC void func_8023E3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E3A0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8023E3A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023E3A8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8023E3AC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023E3B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023E3B4: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x8023E3B8: jal         0x80248020
    // 0x8023E3BC: sw          $t6, 0x4C90($at)
    MEM_W(0X4C90, ctx->r1) = ctx->r14;
    func_80248020(rdram, ctx);
        goto after_0;
    // 0x8023E3BC: sw          $t6, 0x4C90($at)
    MEM_W(0X4C90, ctx->r1) = ctx->r14;
    after_0:
    // 0x8023E3C0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023E3C4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8023E3C8: jal         0x80248010
    // 0x8023E3CC: or          $a0, $s0, $at
    ctx->r4 = ctx->r16 | ctx->r1;
    func_80248010(rdram, ctx);
        goto after_1;
    // 0x8023E3CC: or          $a0, $s0, $at
    ctx->r4 = ctx->r16 | ctx->r1;
    after_1:
    // 0x8023E3D0: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x8023E3D4: jal         0x80248030
    // 0x8023E3D8: ori         $a0, $a0, 0x800
    ctx->r4 = ctx->r4 | 0X800;
    func_80248030(rdram, ctx);
        goto after_2;
    // 0x8023E3D8: ori         $a0, $a0, 0x800
    ctx->r4 = ctx->r4 | 0X800;
    after_2:
    // 0x8023E3DC: lui         $a0, 0x1FC0
    ctx->r4 = S32(0X1FC0 << 16);
    // 0x8023E3E0: ori         $a0, $a0, 0x7FC
    ctx->r4 = ctx->r4 | 0X7FC;
    // 0x8023E3E4: jal         0x80248040
    // 0x8023E3E8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_80248040(rdram, ctx);
        goto after_3;
    // 0x8023E3E8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x8023E3EC: beq         $v0, $zero, L_8023E40C
    if (ctx->r2 == 0) {
        // 0x8023E3F0: nop
    
            goto L_8023E40C;
    }
    // 0x8023E3F0: nop

L_8023E3F4:
    // 0x8023E3F4: lui         $a0, 0x1FC0
    ctx->r4 = S32(0X1FC0 << 16);
    // 0x8023E3F8: ori         $a0, $a0, 0x7FC
    ctx->r4 = ctx->r4 | 0X7FC;
    // 0x8023E3FC: jal         0x80248040
    // 0x8023E400: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_80248040(rdram, ctx);
        goto after_4;
    // 0x8023E400: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_4:
    // 0x8023E404: bne         $v0, $zero, L_8023E3F4
    if (ctx->r2 != 0) {
        // 0x8023E408: nop
    
            goto L_8023E3F4;
    }
    // 0x8023E408: nop

L_8023E40C:
    // 0x8023E40C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8023E410: lui         $a0, 0x1FC0
    ctx->r4 = S32(0X1FC0 << 16);
    // 0x8023E414: ori         $a0, $a0, 0x7FC
    ctx->r4 = ctx->r4 | 0X7FC;
    // 0x8023E418: ori         $t7, $a1, 0x8
    ctx->r15 = ctx->r5 | 0X8;
    // 0x8023E41C: jal         0x80248090
    // 0x8023E420: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_80248090(rdram, ctx);
        goto after_5;
    // 0x8023E420: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_5:
    // 0x8023E424: beq         $v0, $zero, L_8023E44C
    if (ctx->r2 == 0) {
        // 0x8023E428: nop
    
            goto L_8023E44C;
    }
    // 0x8023E428: nop

L_8023E42C:
    // 0x8023E42C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8023E430: lui         $a0, 0x1FC0
    ctx->r4 = S32(0X1FC0 << 16);
    // 0x8023E434: ori         $a0, $a0, 0x7FC
    ctx->r4 = ctx->r4 | 0X7FC;
    // 0x8023E438: ori         $t8, $a1, 0x8
    ctx->r24 = ctx->r5 | 0X8;
    // 0x8023E43C: jal         0x80248090
    // 0x8023E440: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80248090(rdram, ctx);
        goto after_6;
    // 0x8023E440: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_6:
    // 0x8023E444: bne         $v0, $zero, L_8023E42C
    if (ctx->r2 != 0) {
        // 0x8023E448: nop
    
            goto L_8023E42C;
    }
    // 0x8023E448: nop

L_8023E44C:
    // 0x8023E44C: lui         $t0, 0x8024
    ctx->r8 = S32(0X8024 << 16);
    // 0x8023E450: addiu       $t0, $t0, 0x17E0
    ctx->r8 = ADD32(ctx->r8, 0X17E0);
    // 0x8023E454: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8023E458: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x8023E45C: lui         $t5, 0x8024
    ctx->r13 = S32(0X8024 << 16);
    // 0x8023E460: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x8023E464: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x8023E468: addiu       $t5, $t5, 0x17E0
    ctx->r13 = ADD32(ctx->r13, 0X17E0);
    // 0x8023E46C: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x8023E470: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x8023E474: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x8023E478: ori         $t4, $t4, 0x80
    ctx->r12 = ctx->r12 | 0X80;
    // 0x8023E47C: lui         $t1, 0x8024
    ctx->r9 = S32(0X8024 << 16);
    // 0x8023E480: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x8023E484: lw          $t3, 0xC($t0)
    ctx->r11 = MEM_W(ctx->r8, 0XC);
    // 0x8023E488: addiu       $t1, $t1, 0x17E0
    ctx->r9 = ADD32(ctx->r9, 0X17E0);
    // 0x8023E48C: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x8023E490: sw          $t3, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r11;
    // 0x8023E494: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x8023E498: ori         $t2, $t2, 0x100
    ctx->r10 = ctx->r10 | 0X100;
    // 0x8023E49C: lui         $t6, 0x8024
    ctx->r14 = S32(0X8024 << 16);
    // 0x8023E4A0: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x8023E4A4: lw          $t8, 0x4($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X4);
    // 0x8023E4A8: addiu       $t6, $t6, 0x17E0
    ctx->r14 = ADD32(ctx->r14, 0X17E0);
    // 0x8023E4AC: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x8023E4B0: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x8023E4B4: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x8023E4B8: ori         $t7, $t7, 0x180
    ctx->r15 = ctx->r15 | 0X180;
    // 0x8023E4BC: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x8023E4C0: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x8023E4C4: lw          $t8, 0xC($t5)
    ctx->r24 = MEM_W(ctx->r13, 0XC);
    // 0x8023E4C8: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x8023E4CC: sw          $t8, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r24;
    // 0x8023E4D0: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x8023E4D4: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x8023E4D8: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x8023E4DC: sw          $t3, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r11;
    // 0x8023E4E0: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x8023E4E4: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x8023E4E8: lw          $t3, 0xC($t1)
    ctx->r11 = MEM_W(ctx->r9, 0XC);
    // 0x8023E4EC: sw          $t3, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r11;
    // 0x8023E4F0: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8023E4F4: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x8023E4F8: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x8023E4FC: sw          $t8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r24;
    // 0x8023E500: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8023E504: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x8023E508: lw          $t8, 0xC($t6)
    ctx->r24 = MEM_W(ctx->r14, 0XC);
    // 0x8023E50C: jal         0x8023CE80
    // 0x8023E510: sw          $t8, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r24;
    func_8023CE80(rdram, ctx);
        goto after_7;
    // 0x8023E510: sw          $t8, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r24;
    after_7:
    // 0x8023E514: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x8023E518: jal         0x802480E0
    // 0x8023E51C: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    func_802480E0(rdram, ctx);
        goto after_8;
    // 0x8023E51C: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    after_8:
    // 0x8023E520: jal         0x80248160
    // 0x8023E524: nop

    func_80248160(rdram, ctx);
        goto after_9;
    // 0x8023E524: nop

    after_9:
    // 0x8023E528: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8023E52C: jal         0x8023E640
    // 0x8023E530: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8023E640(rdram, ctx);
        goto after_10;
    // 0x8023E530: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_10:
    // 0x8023E534: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8023E538: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x8023E53C: and         $t9, $t0, $at
    ctx->r25 = ctx->r8 & ctx->r1;
    // 0x8023E540: beq         $t9, $zero, L_8023E55C
    if (ctx->r25 == 0) {
        // 0x8023E544: sw          $t9, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r25;
            goto L_8023E55C;
    }
    // 0x8023E544: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x8023E548: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023E54C: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
    // 0x8023E550: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x8023E554: sw          $t2, 0x1680($at)
    MEM_W(0X1680, ctx->r1) = ctx->r10;
    // 0x8023E558: sw          $t3, 0x1684($at)
    MEM_W(0X1684, ctx->r1) = ctx->r11;
L_8023E55C:
    // 0x8023E55C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8023E560: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8023E564: lw          $a1, 0x1684($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1684);
    // 0x8023E568: lw          $a0, 0x1680($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1680);
    // 0x8023E56C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8023E570: jal         0x8023D228
    // 0x8023E574: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8023D228(rdram, ctx);
        goto after_11;
    // 0x8023E574: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_11:
    // 0x8023E578: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023E57C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8023E580: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8023E584: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8023E588: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8023E58C: jal         0x8023D128
    // 0x8023E590: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8023D128(rdram, ctx);
        goto after_12;
    // 0x8023E590: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_12:
    // 0x8023E594: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x8023E598: lw          $t1, 0x30C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X30C);
    // 0x8023E59C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023E5A0: sw          $v0, 0x1680($at)
    MEM_W(0X1680, ctx->r1) = ctx->r2;
    // 0x8023E5A4: bne         $t1, $zero, L_8023E5BC
    if (ctx->r9 != 0) {
        // 0x8023E5A8: sw          $v1, 0x1684($at)
        MEM_W(0X1684, ctx->r1) = ctx->r3;
            goto L_8023E5BC;
    }
    // 0x8023E5A8: sw          $v1, 0x1684($at)
    MEM_W(0X1684, ctx->r1) = ctx->r3;
    // 0x8023E5AC: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x8023E5B0: addiu       $a0, $a0, 0x31C
    ctx->r4 = ADD32(ctx->r4, 0X31C);
    // 0x8023E5B4: jal         0x802481C0
    // 0x8023E5B8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_802481C0(rdram, ctx);
        goto after_13;
    // 0x8023E5B8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_13:
L_8023E5BC:
    // 0x8023E5BC: lui         $t5, 0xA460
    ctx->r13 = S32(0XA460 << 16);
    // 0x8023E5C0: lw          $t4, 0x10($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X10);
    // 0x8023E5C4: andi        $t7, $t4, 0x3
    ctx->r15 = ctx->r12 & 0X3;
    // 0x8023E5C8: beq         $t7, $zero, L_8023E5EC
    if (ctx->r15 == 0) {
        // 0x8023E5CC: sw          $t4, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r12;
            goto L_8023E5EC;
    }
    // 0x8023E5CC: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
L_8023E5D0:
    // 0x8023E5D0: lui         $t6, 0xA460
    ctx->r14 = S32(0XA460 << 16);
    // 0x8023E5D4: lw          $t8, 0x10($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X10);
    // 0x8023E5D8: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8023E5DC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8023E5E0: andi        $t9, $t0, 0x3
    ctx->r25 = ctx->r8 & 0X3;
    // 0x8023E5E4: bne         $t9, $zero, L_8023E5D0
    if (ctx->r25 != 0) {
        // 0x8023E5E8: nop
    
            goto L_8023E5D0;
    }
    // 0x8023E5E8: nop

L_8023E5EC:
    // 0x8023E5EC: lui         $t2, 0xA500
    ctx->r10 = S32(0XA500 << 16);
    // 0x8023E5F0: lw          $t3, 0x508($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X508);
    // 0x8023E5F4: andi        $t1, $t3, 0xFFFF
    ctx->r9 = ctx->r11 & 0XFFFF;
    // 0x8023E5F8: bne         $t1, $zero, L_8023E624
    if (ctx->r9 != 0) {
        // 0x8023E5FC: sw          $t3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r11;
            goto L_8023E624;
    }
    // 0x8023E5FC: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x8023E600: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8023E604: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023E608: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8023E60C: sw          $t5, 0x1690($at)
    MEM_W(0X1690, ctx->r1) = ctx->r13;
    // 0x8023E610: addiu       $a1, $a1, -0x7D50
    ctx->r5 = ADD32(ctx->r5, -0X7D50);
    // 0x8023E614: jal         0x80248260
    // 0x8023E618: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80248260(rdram, ctx);
        goto after_14;
    // 0x8023E618: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_14:
    // 0x8023E61C: b           L_8023E62C
    // 0x8023E620: nop

        goto L_8023E62C;
    // 0x8023E620: nop

L_8023E624:
    // 0x8023E624: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023E628: sw          $zero, 0x1690($at)
    MEM_W(0X1690, ctx->r1) = 0;
L_8023E62C:
    // 0x8023E62C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023E630: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023E634: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8023E638: jr          $ra
    // 0x8023E63C: nop

    return;
    // 0x8023E63C: nop

;}
RECOMP_FUNC void func_80230D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80230D70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230D74: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80230D78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80230D7C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230D80: jal         0x80231A24
    // 0x80230D84: addiu       $a0, $a0, 0x4D54
    ctx->r4 = ADD32(ctx->r4, 0X4D54);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80230D84: addiu       $a0, $a0, 0x4D54
    ctx->r4 = ADD32(ctx->r4, 0X4D54);
    after_0:
    // 0x80230D88: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230D8C: jal         0x80231A24
    // 0x80230D90: addiu       $a0, $a0, 0x4D58
    ctx->r4 = ADD32(ctx->r4, 0X4D58);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x80230D90: addiu       $a0, $a0, 0x4D58
    ctx->r4 = ADD32(ctx->r4, 0X4D58);
    after_1:
    // 0x80230D94: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230D98: jal         0x80231A24
    // 0x80230D9C: addiu       $a0, $a0, 0x4DA0
    ctx->r4 = ADD32(ctx->r4, 0X4DA0);
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x80230D9C: addiu       $a0, $a0, 0x4DA0
    ctx->r4 = ADD32(ctx->r4, 0X4DA0);
    after_2:
    // 0x80230DA0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230DA4: jal         0x80231A24
    // 0x80230DA8: addiu       $a0, $a0, 0x4DCC
    ctx->r4 = ADD32(ctx->r4, 0X4DCC);
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x80230DA8: addiu       $a0, $a0, 0x4DCC
    ctx->r4 = ADD32(ctx->r4, 0X4DCC);
    after_3:
    // 0x80230DAC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230DB0: jal         0x80231A24
    // 0x80230DB4: addiu       $a0, $a0, 0x4E10
    ctx->r4 = ADD32(ctx->r4, 0X4E10);
    func_80231A24(rdram, ctx);
        goto after_4;
    // 0x80230DB4: addiu       $a0, $a0, 0x4E10
    ctx->r4 = ADD32(ctx->r4, 0X4E10);
    after_4:
    // 0x80230DB8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230DBC: addiu       $a0, $a0, 0x4E38
    ctx->r4 = ADD32(ctx->r4, 0X4E38);
    // 0x80230DC0: jal         0x80231A24
    // 0x80230DC4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_80231A24(rdram, ctx);
        goto after_5;
    // 0x80230DC4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_5:
    // 0x80230DC8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230DCC: jal         0x80231A24
    // 0x80230DD0: addiu       $a0, $a0, 0x4E60
    ctx->r4 = ADD32(ctx->r4, 0X4E60);
    func_80231A24(rdram, ctx);
        goto after_6;
    // 0x80230DD0: addiu       $a0, $a0, 0x4E60
    ctx->r4 = ADD32(ctx->r4, 0X4E60);
    after_6:
    // 0x80230DD4: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x80230DD8: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x80230DDC: addiu       $t3, $t3, 0x6D70
    ctx->r11 = ADD32(ctx->r11, 0X6D70);
    // 0x80230DE0: addiu       $t2, $t2, 0x7430
    ctx->r10 = ADD32(ctx->r10, 0X7430);
    // 0x80230DE4: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80230DE8: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x80230DEC: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x80230DF0: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x80230DF4: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x80230DF8: lui         $t1, 0x8025
    ctx->r9 = S32(0X8025 << 16);
    // 0x80230DFC: addiu       $t1, $t1, -0x1A60
    ctx->r9 = ADD32(ctx->r9, -0X1A60);
    // 0x80230E00: addiu       $t0, $t0, 0x6D70
    ctx->r8 = ADD32(ctx->r8, 0X6D70);
    // 0x80230E04: addiu       $t9, $t9, 0xA0
    ctx->r25 = ADD32(ctx->r25, 0XA0);
    // 0x80230E08: addiu       $t8, $t8, -0x1A60
    ctx->r24 = ADD32(ctx->r24, -0X1A60);
    // 0x80230E0C: addiu       $t7, $t7, 0xA0
    ctx->r15 = ADD32(ctx->r15, 0XA0);
    // 0x80230E10: addiu       $t6, $t6, 0x7430
    ctx->r14 = ADD32(ctx->r14, 0X7430);
    // 0x80230E14: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x80230E18: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230E1C: addiu       $a0, $a0, 0x4EA8
    ctx->r4 = ADD32(ctx->r4, 0X4EA8);
    // 0x80230E20: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80230E24: subu        $a1, $t6, $t7
    ctx->r5 = SUB32(ctx->r14, ctx->r15);
    // 0x80230E28: subu        $a2, $t8, $t9
    ctx->r6 = SUB32(ctx->r24, ctx->r25);
    // 0x80230E2C: jal         0x80231A24
    // 0x80230E30: subu        $a3, $t0, $t1
    ctx->r7 = SUB32(ctx->r8, ctx->r9);
    func_80231A24(rdram, ctx);
        goto after_7;
    // 0x80230E30: subu        $a3, $t0, $t1
    ctx->r7 = SUB32(ctx->r8, ctx->r9);
    after_7:
    // 0x80230E34: lui         $t5, 0x8035
    ctx->r13 = S32(0X8035 << 16);
    // 0x80230E38: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80230E3C: lui         $t7, 0x8032
    ctx->r15 = S32(0X8032 << 16);
    // 0x80230E40: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80230E44: addiu       $t8, $t8, 0x7430
    ctx->r24 = ADD32(ctx->r24, 0X7430);
    // 0x80230E48: addiu       $t7, $t7, 0x33C0
    ctx->r15 = ADD32(ctx->r15, 0X33C0);
    // 0x80230E4C: addiu       $t6, $t6, 0x7430
    ctx->r14 = ADD32(ctx->r14, 0X7430);
    // 0x80230E50: addiu       $t5, $t5, -0x6AD0
    ctx->r13 = ADD32(ctx->r13, -0X6AD0);
    // 0x80230E54: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230E58: addiu       $a0, $a0, 0x4EE0
    ctx->r4 = ADD32(ctx->r4, 0X4EE0);
    // 0x80230E5C: subu        $a1, $t5, $t6
    ctx->r5 = SUB32(ctx->r13, ctx->r14);
    // 0x80230E60: jal         0x80231A24
    // 0x80230E64: subu        $a2, $t7, $t8
    ctx->r6 = SUB32(ctx->r15, ctx->r24);
    func_80231A24(rdram, ctx);
        goto after_8;
    // 0x80230E64: subu        $a2, $t7, $t8
    ctx->r6 = SUB32(ctx->r15, ctx->r24);
    after_8:
    // 0x80230E68: lui         $a2, 0x12
    ctx->r6 = S32(0X12 << 16);
    // 0x80230E6C: lui         $a3, 0x67
    ctx->r7 = S32(0X67 << 16);
    // 0x80230E70: addiu       $a3, $a3, -0x3690
    ctx->r7 = ADD32(ctx->r7, -0X3690);
    // 0x80230E74: addiu       $a2, $a2, -0x6AD0
    ctx->r6 = ADD32(ctx->r6, -0X6AD0);
    // 0x80230E78: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230E7C: addiu       $a0, $a0, 0x4F04
    ctx->r4 = ADD32(ctx->r4, 0X4F04);
    // 0x80230E80: jal         0x80231A24
    // 0x80230E84: subu        $a1, $a3, $a2
    ctx->r5 = SUB32(ctx->r7, ctx->r6);
    func_80231A24(rdram, ctx);
        goto after_9;
    // 0x80230E84: subu        $a1, $a3, $a2
    ctx->r5 = SUB32(ctx->r7, ctx->r6);
    after_9:
    // 0x80230E88: jal         0x8023CF00
    // 0x80230E8C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_8023CF00(rdram, ctx);
        goto after_10;
    // 0x80230E8C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_10:
    // 0x80230E90: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80230E94: jal         0x8022AF68
    // 0x80230E98: sw          $zero, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = 0;
    func_8022AF68(rdram, ctx);
        goto after_11;
    // 0x80230E98: sw          $zero, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = 0;
    after_11:
    // 0x80230E9C: jal         0x8021FFB4
    // 0x80230EA0: nop

    func_8021FFB4(rdram, ctx);
        goto after_12;
    // 0x80230EA0: nop

    after_12:
    // 0x80230EA4: jal         0x80224010
    // 0x80230EA8: nop

    func_80224010(rdram, ctx);
        goto after_13;
    // 0x80230EA8: nop

    after_13:
    // 0x80230EAC: jal         0x802070A8
    // 0x80230EB0: nop

    func_802070A8(rdram, ctx);
        goto after_14;
    // 0x80230EB0: nop

    after_14:
    // 0x80230EB4: jal         0x80205890
    // 0x80230EB8: nop

    func_80205890(rdram, ctx);
        goto after_15;
    // 0x80230EB8: nop

    after_15:
    // 0x80230EBC: jal         0x8021D444
    // 0x80230EC0: nop

    func_8021D444(rdram, ctx);
        goto after_16;
    // 0x80230EC0: nop

    after_16:
    // 0x80230EC4: jal         0x802115D4
    // 0x80230EC8: nop

    func_802115D4(rdram, ctx);
        goto after_17;
    // 0x80230EC8: nop

    after_17:
    // 0x80230ECC: jal         0x8021BB84
    // 0x80230ED0: nop

    func_8021BB84(rdram, ctx);
        goto after_18;
    // 0x80230ED0: nop

    after_18:
    // 0x80230ED4: jal         0x80223C60
    // 0x80230ED8: nop

    func_80223C60(rdram, ctx);
        goto after_19;
    // 0x80230ED8: nop

    after_19:
    // 0x80230EDC: jal         0x8021DD10
    // 0x80230EE0: nop

    func_8021DD10(rdram, ctx);
        goto after_20;
    // 0x80230EE0: nop

    after_20:
    // 0x80230EE4: jal         0x8021F1B0
    // 0x80230EE8: nop

    func_8021F1B0(rdram, ctx);
        goto after_21;
    // 0x80230EE8: nop

    after_21:
    // 0x80230EEC: jal         0x80233224
    // 0x80230EF0: nop

    func_80233224(rdram, ctx);
        goto after_22;
    // 0x80230EF0: nop

    after_22:
    // 0x80230EF4: jal         0x80233D90
    // 0x80230EF8: nop

    func_80233D90(rdram, ctx);
        goto after_23;
    // 0x80230EF8: nop

    after_23:
    // 0x80230EFC: jal         0x8022D680
    // 0x80230F00: nop

    func_8022D680(rdram, ctx);
        goto after_24;
    // 0x80230F00: nop

    after_24:
    // 0x80230F04: jal         0x80228080
    // 0x80230F08: nop

    func_80228080(rdram, ctx);
        goto after_25;
    // 0x80230F08: nop

    after_25:
    // 0x80230F0C: jal         0x8020455C
    // 0x80230F10: nop

    func_8020455C(rdram, ctx);
        goto after_26;
    // 0x80230F10: nop

    after_26:
    // 0x80230F14: jal         0x8022BD80
    // 0x80230F18: nop

    func_8022BD80(rdram, ctx);
        goto after_27;
    // 0x80230F18: nop

    after_27:
    // 0x80230F1C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80230F20: jal         0x8023E330
    // 0x80230F24: addiu       $a0, $a0, 0xC58
    ctx->r4 = ADD32(ctx->r4, 0XC58);
    func_8023E330(rdram, ctx);
        goto after_28;
    // 0x80230F24: addiu       $a0, $a0, 0xC58
    ctx->r4 = ADD32(ctx->r4, 0XC58);
    after_28:
    // 0x80230F28: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80230F2C: addiu       $v1, $v1, 0x3520
    ctx->r3 = ADD32(ctx->r3, 0X3520);
    // 0x80230F30: bne         $v0, $zero, L_80230F44
    if (ctx->r2 != 0) {
        // 0x80230F34: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_80230F44;
    }
    // 0x80230F34: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80230F38: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230F3C: jal         0x80231A24
    // 0x80230F40: addiu       $a0, $a0, 0x4F30
    ctx->r4 = ADD32(ctx->r4, 0X4F30);
    func_80231A24(rdram, ctx);
        goto after_29;
    // 0x80230F40: addiu       $a0, $a0, 0x4F30
    ctx->r4 = ADD32(ctx->r4, 0X4F30);
    after_29:
L_80230F44:
    // 0x80230F44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80230F48: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80230F4C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80230F50: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80230F54: sw          $t0, 0x8F8($at)
    MEM_W(0X8F8, ctx->r1) = ctx->r8;
    // 0x80230F58: jr          $ra
    // 0x80230F5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80230F5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8021BA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021BA90: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8021BA94: lhu         $v0, 0xBE6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBE6);
    // 0x8021BA98: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021BA9C: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8021BAA0: blez        $v0, L_8021BAD4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8021BAA4: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8021BAD4;
    }
    // 0x8021BAA4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021BAA8: lw          $a0, -0x3C20($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3C20);
L_8021BAAC:
    // 0x8021BAAC: lbu         $t6, 0x9($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X9);
    // 0x8021BAB0: bnel        $t6, $zero, L_8021BAC8
    if (ctx->r14 != 0) {
        // 0x8021BAB4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8021BAC8;
    }
    goto skip_0;
    // 0x8021BAB4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x8021BAB8: sb          $t7, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r15;
    // 0x8021BABC: jr          $ra
    // 0x8021BAC0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8021BAC0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8021BAC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8021BAC8:
    // 0x8021BAC8: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021BACC: bne         $at, $zero, L_8021BAAC
    if (ctx->r1 != 0) {
        // 0x8021BAD0: addiu       $a0, $a0, 0x24
        ctx->r4 = ADD32(ctx->r4, 0X24);
            goto L_8021BAAC;
    }
    // 0x8021BAD0: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
L_8021BAD4:
    // 0x8021BAD4: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8021BAD8: jr          $ra
    // 0x8021BADC: nop

    return;
    // 0x8021BADC: nop

;}
RECOMP_FUNC void func_80243B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80243B38: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x80243B3C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80243B40: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80243B44: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80243B48: c.eq.d      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.d == ctx->f2.d;
    // 0x80243B4C: nop

    // 0x80243B50: bc1fl       L_80243B64
    if (!c1cs) {
        // 0x80243B54: c.lt.d      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
            goto L_80243B64;
    }
    goto skip_0;
    // 0x80243B54: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    skip_0:
    // 0x80243B58: jr          $ra
    // 0x80243B5C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    return;
    // 0x80243B5C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    // 0x80243B60: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
L_80243B64:
    // 0x80243B64: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x80243B68: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80243B6C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80243B70: bc1fl       L_80243B84
    if (!c1cs) {
        // 0x80243B74: neg.d       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = -ctx->f12.d;
            goto L_80243B84;
    }
    goto skip_1;
    // 0x80243B74: neg.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = -ctx->f12.d;
    skip_1:
    // 0x80243B78: b           L_80243B84
    // 0x80243B7C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
        goto L_80243B84;
    // 0x80243B7C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    // 0x80243B80: neg.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = -ctx->f12.d;
L_80243B84:
    // 0x80243B84: c.le.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d <= ctx->f0.d;
    // 0x80243B88: nop

    // 0x80243B8C: bc1fl       L_80243BC4
    if (!c1cs) {
        // 0x80243B90: lui         $at, 0x3FE0
        ctx->r1 = S32(0X3FE0 << 16);
            goto L_80243BC4;
    }
    goto skip_2;
    // 0x80243B90: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    skip_2:
    // 0x80243B94: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80243B98: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80243B9C: nop

L_80243BA0:
    // 0x80243BA0: mul.d       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f16.d);
    // 0x80243BA4: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80243BA8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80243BAC: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80243BB0: c.le.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d <= ctx->f0.d;
    // 0x80243BB4: nop

    // 0x80243BB8: bc1t        L_80243BA0
    if (c1cs) {
        // 0x80243BBC: nop
    
            goto L_80243BA0;
    }
    // 0x80243BBC: nop

    // 0x80243BC0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
L_80243BC4:
    // 0x80243BC4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80243BC8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80243BCC: nop

    // 0x80243BD0: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x80243BD4: nop

    // 0x80243BD8: bc1fl       L_80243C00
    if (!c1cs) {
        // 0x80243BDC: c.lt.d      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
            goto L_80243C00;
    }
    goto skip_3;
    // 0x80243BDC: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    skip_3:
    // 0x80243BE0: add.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
L_80243BE4:
    // 0x80243BE4: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80243BE8: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x80243BEC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80243BF0: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80243BF4: bc1tl       L_80243BE4
    if (c1cs) {
        // 0x80243BF8: add.d       $f0, $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
            goto L_80243BE4;
    }
    goto skip_4;
    // 0x80243BF8: add.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
    skip_4:
    // 0x80243BFC: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
L_80243C00:
    // 0x80243C00: nop

    // 0x80243C04: bc1fl       L_80243C18
    if (!c1cs) {
        // 0x80243C08: neg.d       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
            goto L_80243C18;
    }
    goto skip_5;
    // 0x80243C08: neg.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
    skip_5:
    // 0x80243C0C: b           L_80243C18
    // 0x80243C10: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
        goto L_80243C18;
    // 0x80243C10: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
    // 0x80243C14: neg.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
L_80243C18:
    // 0x80243C18: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    // 0x80243C1C: jr          $ra
    // 0x80243C20: nop

    return;
    // 0x80243C20: nop

;}
RECOMP_FUNC void func_8021EC9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021EC9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8021ECA0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021ECA4: lui         $s2, 0x8025
    ctx->r18 = S32(0X8025 << 16);
    // 0x8021ECA8: addiu       $s2, $s2, -0x1874
    ctx->r18 = ADD32(ctx->r18, -0X1874);
    // 0x8021ECAC: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8021ECB0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8021ECB4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021ECB8: beq         $t6, $zero, L_8021ED98
    if (ctx->r14 == 0) {
        // 0x8021ECBC: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8021ED98;
    }
    // 0x8021ECBC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021ECC0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8021ECC4: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8021ECC8: lw          $t7, -0x186C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X186C);
    // 0x8021ECCC: lhu         $v0, -0x178C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X178C);
    // 0x8021ECD0: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8021ECD4: addiu       $v1, $v1, -0x18E0
    ctx->r3 = ADD32(ctx->r3, -0X18E0);
    // 0x8021ECD8: beq         $t7, $v0, L_8021ED20
    if (ctx->r15 == ctx->r2) {
        // 0x8021ECDC: lui         $a0, 0x8027
        ctx->r4 = S32(0X8027 << 16);
            goto L_8021ED20;
    }
    // 0x8021ECDC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8021ECE0: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x8021ECE4: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x8021ECE8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021ECEC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8021ECF0: sw          $zero, -0x1870($at)
    MEM_W(-0X1870, ctx->r1) = 0;
    // 0x8021ECF4: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x8021ECF8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021ECFC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8021ED00: sw          $v0, -0x186C($at)
    MEM_W(-0X186C, ctx->r1) = ctx->r2;
    // 0x8021ED04: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x8021ED08: lw          $t0, 0x38($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X38);
    // 0x8021ED0C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8021ED10: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x8021ED14: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x8021ED18: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8021ED1C: sw          $t1, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r9;
L_8021ED20:
    // 0x8021ED20: jal         0x8023CBF0
    // 0x8021ED24: addiu       $a0, $a0, 0x3B90
    ctx->r4 = ADD32(ctx->r4, 0X3B90);
    func_8023CBF0(rdram, ctx);
        goto after_0;
    // 0x8021ED24: addiu       $a0, $a0, 0x3B90
    ctx->r4 = ADD32(ctx->r4, 0X3B90);
    after_0:
    // 0x8021ED28: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x8021ED2C: lui         $s1, 0x8027
    ctx->r17 = S32(0X8027 << 16);
    // 0x8021ED30: addiu       $s1, $s1, 0x10E0
    ctx->r17 = ADD32(ctx->r17, 0X10E0);
    // 0x8021ED34: blez        $t2, L_8021ED5C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8021ED38: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8021ED5C;
    }
    // 0x8021ED38: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8021ED3C:
    // 0x8021ED3C: jal         0x8021EB98
    // 0x8021ED40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8021EB98(rdram, ctx);
        goto after_1;
    // 0x8021ED40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x8021ED44: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8021ED48: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021ED4C: addiu       $s1, $s1, 0x4C
    ctx->r17 = ADD32(ctx->r17, 0X4C);
    // 0x8021ED50: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8021ED54: bne         $at, $zero, L_8021ED3C
    if (ctx->r1 != 0) {
        // 0x8021ED58: nop
    
            goto L_8021ED3C;
    }
    // 0x8021ED58: nop

L_8021ED5C:
    // 0x8021ED5C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8021ED60: jal         0x8023A700
    // 0x8021ED64: addiu       $a0, $a0, 0x3B90
    ctx->r4 = ADD32(ctx->r4, 0X3B90);
    func_8023A700(rdram, ctx);
        goto after_2;
    // 0x8021ED64: addiu       $a0, $a0, 0x3B90
    ctx->r4 = ADD32(ctx->r4, 0X3B90);
    after_2:
    // 0x8021ED68: lui         $t4, 0x8027
    ctx->r12 = S32(0X8027 << 16);
    // 0x8021ED6C: lw          $t4, 0x3B90($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B90);
    // 0x8021ED70: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8021ED74: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8021ED78: addiu       $t5, $t4, -0x8
    ctx->r13 = ADD32(ctx->r12, -0X8);
    // 0x8021ED7C: sw          $t5, 0x3B90($at)
    MEM_W(0X3B90, ctx->r1) = ctx->r13;
    // 0x8021ED80: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x8021ED84: lw          $t6, -0x1870($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1870);
    // 0x8021ED88: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021ED8C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8021ED90: sw          $t8, -0x1870($at)
    MEM_W(-0X1870, ctx->r1) = ctx->r24;
    // 0x8021ED94: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
L_8021ED98:
    // 0x8021ED98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8021ED9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021EDA0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021EDA4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021EDA8: jr          $ra
    // 0x8021EDAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8021EDAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80231A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231A24: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80231A28: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x80231A2C: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x80231A30: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80231A34: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x80231A38: jr          $ra
    // 0x80231A3C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80231A3C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80208590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80208590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80208594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80208598: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8020859C: jal         0x80208230
    // 0x802085A0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80208230(rdram, ctx);
        goto after_0;
    // 0x802085A0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x802085A4: beq         $v0, $zero, L_802085B4
    if (ctx->r2 == 0) {
        // 0x802085A8: lui         $a0, 0x8026
        ctx->r4 = S32(0X8026 << 16);
            goto L_802085B4;
    }
    // 0x802085A8: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x802085AC: b           L_802085C8
    // 0x802085B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802085C8;
    // 0x802085B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802085B4:
    // 0x802085B4: addiu       $a0, $a0, -0x3CE0
    ctx->r4 = ADD32(ctx->r4, -0X3CE0);
    // 0x802085B8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x802085BC: jal         0x802392C0
    // 0x802085C0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    func_802392C0(rdram, ctx);
        goto after_1;
    // 0x802085C0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x802085C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802085C8:
    // 0x802085C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802085CC: jr          $ra
    // 0x802085D0: nop

    return;
    // 0x802085D0: nop

;}
RECOMP_FUNC void func_80227B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227B38: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80227B3C: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80227B40: lw          $t6, 0x5228($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5228);
    // 0x80227B44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227B48: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80227B4C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80227B50: jal         0x80223840
    // 0x80227B54: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227B54: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80227B58: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80227B5C: lui         $a3, 0x434F
    ctx->r7 = S32(0X434F << 16);
    // 0x80227B60: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80227B64: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80227B68: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80227B6C: ori         $a3, $a3, 0x4D4D
    ctx->r7 = ctx->r7 | 0X4D4D;
    // 0x80227B70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227B74: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80227B78: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80227B7C: jal         0x80223B30
    // 0x80227B80: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80223B30(rdram, ctx);
        goto after_1;
    // 0x80227B80: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x80227B84: beq         $v0, $zero, L_80227B98
    if (ctx->r2 == 0) {
        // 0x80227B88: nop
    
            goto L_80227B98;
    }
    // 0x80227B88: nop

    // 0x80227B8C: jal         0x80226D14
    // 0x80227B90: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_80226D14(rdram, ctx);
        goto after_2;
    // 0x80227B90: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80227B94: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_80227B98:
    // 0x80227B98: jal         0x802238F0
    // 0x80227B9C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_802238F0(rdram, ctx);
        goto after_3;
    // 0x80227B9C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x80227BA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227BA4: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80227BA8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80227BAC: jr          $ra
    // 0x80227BB0: nop

    return;
    // 0x80227BB0: nop

;}
RECOMP_FUNC void func_802208B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802208B4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802208B8: addiu       $t6, $sp, 0x50
    ctx->r14 = ADD32(ctx->r29, 0X50);
    // 0x802208BC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802208C0: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x802208C4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x802208C8: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x802208CC: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x802208D0: addiu       $t8, $t6, 0x3C
    ctx->r24 = ADD32(ctx->r14, 0X3C);
    // 0x802208D4: or          $t9, $sp, $zero
    ctx->r25 = ctx->r29 | 0;
L_802208D8:
    // 0x802208D8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x802208DC: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x802208E0: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x802208E4: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x802208E8: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x802208EC: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x802208F0: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x802208F4: bne         $t6, $t8, L_802208D8
    if (ctx->r14 != ctx->r24) {
        // 0x802208F8: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_802208D8;
    }
    // 0x802208F8: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x802208FC: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80220900: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x80220904: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80220908: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x8022090C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80220910: jal         0x80222D4C
    // 0x80220914: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    func_80222D4C(rdram, ctx);
        goto after_0;
    // 0x80220914: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    after_0:
    // 0x80220918: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8022091C: addiu       $a0, $a0, 0x3B90
    ctx->r4 = ADD32(ctx->r4, 0X3B90);
    // 0x80220920: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80220924: lui         $t1, 0x103
    ctx->r9 = S32(0X103 << 16);
    // 0x80220928: ori         $t1, $t1, 0x40
    ctx->r9 = ctx->r9 | 0X40;
    // 0x8022092C: addiu       $t0, $v0, 0x8
    ctx->r8 = ADD32(ctx->r2, 0X8);
    // 0x80220930: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x80220934: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x80220938: jal         0x80222E24
    // 0x8022093C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_80222E24(rdram, ctx);
        goto after_1;
    // 0x8022093C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80220940: jal         0x802375F0
    // 0x80220944: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_802375F0(rdram, ctx);
        goto after_2;
    // 0x80220944: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80220948: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x8022094C: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x80220950: lui         $t5, 0x8027
    ctx->r13 = S32(0X8027 << 16);
    // 0x80220954: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x80220958: lhu         $t3, -0x178C($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X178C);
    // 0x8022095C: addiu       $t5, $t5, 0x3BB0
    ctx->r13 = ADD32(ctx->r13, 0X3BB0);
    // 0x80220960: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80220964: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80220968: addu        $v1, $t4, $t5
    ctx->r3 = ADD32(ctx->r12, ctx->r13);
    // 0x8022096C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80220970: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80220974: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80220978: jr          $ra
    // 0x8022097C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    return;
    // 0x8022097C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
;}
RECOMP_FUNC void func_80237F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237F20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80237F24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237F28: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80237F2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80237F30: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80237F34: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80237F38: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x80237F3C: jal         0x8023F37C
    // 0x80237F40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80237F40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80237F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237F48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80237F4C: jr          $ra
    // 0x80237F50: nop

    return;
    // 0x80237F50: nop

;}
RECOMP_FUNC void func_802400F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802400F0: lw          $v1, 0x64($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X64);
    // 0x802400F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802400F8: addiu       $a2, $a1, -0x4
    ctx->r6 = ADD32(ctx->r5, -0X4);
    // 0x802400FC: beq         $v1, $zero, L_80240158
    if (ctx->r3 == 0) {
        // 0x80240100: nop
    
            goto L_80240158;
    }
    // 0x80240100: nop

L_80240104:
    // 0x80240104: bnel        $v1, $a2, L_8024014C
    if (ctx->r3 != ctx->r6) {
        // 0x80240108: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8024014C;
    }
    goto skip_0;
    // 0x80240108: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_0:
    // 0x8024010C: beql        $v0, $zero, L_80240124
    if (ctx->r2 == 0) {
        // 0x80240110: lw          $t7, 0x0($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X0);
            goto L_80240124;
    }
    goto skip_1;
    // 0x80240110: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x80240114: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80240118: b           L_80240128
    // 0x8024011C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
        goto L_80240128;
    // 0x8024011C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80240120: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
L_80240124:
    // 0x80240124: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
L_80240128:
    // 0x80240128: lw          $t8, 0x68($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X68);
    // 0x8024012C: bnel        $v1, $t8, L_8024013C
    if (ctx->r3 != ctx->r24) {
        // 0x80240130: lw          $t9, 0x6C($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X6C);
            goto L_8024013C;
    }
    goto skip_2;
    // 0x80240130: lw          $t9, 0x6C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X6C);
    skip_2:
    // 0x80240134: sw          $v0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r2;
    // 0x80240138: lw          $t9, 0x6C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X6C);
L_8024013C:
    // 0x8024013C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80240140: jr          $ra
    // 0x80240144: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
    return;
    // 0x80240144: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
    // 0x80240148: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8024014C:
    // 0x8024014C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80240150: bne         $v1, $zero, L_80240104
    if (ctx->r3 != 0) {
        // 0x80240154: nop
    
            goto L_80240104;
    }
    // 0x80240154: nop

L_80240158:
    // 0x80240158: jr          $ra
    // 0x8024015C: nop

    return;
    // 0x8024015C: nop

;}
RECOMP_FUNC void func_8020321C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020321C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80203220: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80203224: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x80203228: sll         $s0, $a1, 2
    ctx->r16 = S32(ctx->r5 << 2);
    // 0x8020322C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80203230: subu        $s0, $s0, $a1
    ctx->r16 = SUB32(ctx->r16, ctx->r5);
    // 0x80203234: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80203238: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x8020323C: addiu       $s1, $s1, 0x6DE4
    ctx->r17 = ADD32(ctx->r17, 0X6DE4);
    // 0x80203240: subu        $s0, $s0, $a1
    ctx->r16 = SUB32(ctx->r16, ctx->r5);
    // 0x80203244: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80203248: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x8020324C: addu        $s0, $s0, $a1
    ctx->r16 = ADD32(ctx->r16, ctx->r5);
    // 0x80203250: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80203254: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x80203258: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8020325C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80203260: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x80203264: lbu         $a2, 0xAD($t7)
    ctx->r6 = MEM_BU(ctx->r15, 0XAD);
    // 0x80203268: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8020326C: addiu       $a0, $a0, 0x2400
    ctx->r4 = ADD32(ctx->r4, 0X2400);
    // 0x80203270: jal         0x802011D0
    // 0x80203274: sb          $a1, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r5;
    func_802011D0(rdram, ctx);
        goto after_0;
    // 0x80203274: sb          $a1, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r5;
    after_0:
    // 0x80203278: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8020327C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80203280: lui         $t1, 0x8026
    ctx->r9 = S32(0X8026 << 16);
    // 0x80203284: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x80203288: sw          $t8, 0xA0($t0)
    MEM_W(0XA0, ctx->r8) = ctx->r24;
    // 0x8020328C: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x80203290: lw          $t1, -0x4678($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4678);
    // 0x80203294: lui         $s2, 0x8025
    ctx->r18 = S32(0X8025 << 16);
    // 0x80203298: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x8020329C: lbu         $t4, 0xAD($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XAD);
    // 0x802032A0: addiu       $s2, $s2, -0x1A4C
    ctx->r18 = ADD32(ctx->r18, -0X1A4C);
    // 0x802032A4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x802032A8: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x802032AC: addu        $t6, $t1, $t5
    ctx->r14 = ADD32(ctx->r9, ctx->r13);
    // 0x802032B0: jal         0x80234E90
    // 0x802032B4: lh          $a1, 0x0($t6)
    ctx->r5 = MEM_H(ctx->r14, 0X0);
    func_80234E90(rdram, ctx);
        goto after_1;
    // 0x802032B4: lh          $a1, 0x0($t6)
    ctx->r5 = MEM_H(ctx->r14, 0X0);
    after_1:
    // 0x802032B8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x802032BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802032C0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802032C4: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x802032C8: addiu       $a1, $a1, 0x2440
    ctx->r5 = ADD32(ctx->r5, 0X2440);
    // 0x802032CC: addiu       $a2, $zero, 0x42C
    ctx->r6 = ADD32(0, 0X42C);
    // 0x802032D0: bne         $t7, $at, L_802032E8
    if (ctx->r15 != ctx->r1) {
        // 0x802032D4: nop
    
            goto L_802032E8;
    }
    // 0x802032D4: nop

    // 0x802032D8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802032DC: jal         0x80231C9C
    // 0x802032E0: addiu       $a0, $a0, 0x2428
    ctx->r4 = ADD32(ctx->r4, 0X2428);
    func_80231C9C(rdram, ctx);
        goto after_2;
    // 0x802032E0: addiu       $a0, $a0, 0x2428
    ctx->r4 = ADD32(ctx->r4, 0X2428);
    after_2:
    // 0x802032E4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_802032E8:
    // 0x802032E8: jal         0x80234EB0
    // 0x802032EC: nop

    func_80234EB0(rdram, ctx);
        goto after_3;
    // 0x802032EC: nop

    after_3:
    // 0x802032F0: beql        $v0, $zero, L_8020330C
    if (ctx->r2 == 0) {
        // 0x802032F4: lw          $t8, 0x0($s1)
        ctx->r24 = MEM_W(ctx->r17, 0X0);
            goto L_8020330C;
    }
    goto skip_0;
    // 0x802032F4: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    skip_0:
    // 0x802032F8: jal         0x80234ED0
    // 0x802032FC: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    func_80234ED0(rdram, ctx);
        goto after_4;
    // 0x802032FC: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_4:
    // 0x80203300: b           L_80203450
    // 0x80203304: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80203450;
    // 0x80203304: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80203308: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
L_8020330C:
    // 0x8020330C: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x80203310: lw          $t9, -0x4678($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4678);
    // 0x80203314: addu        $t0, $t8, $s0
    ctx->r8 = ADD32(ctx->r24, ctx->r16);
    // 0x80203318: lbu         $t2, 0xAD($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0XAD);
    // 0x8020331C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80203320: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80203324: addu        $t4, $t9, $t3
    ctx->r12 = ADD32(ctx->r25, ctx->r11);
    // 0x80203328: jal         0x80234F20
    // 0x8020332C: lh          $a1, 0x0($t4)
    ctx->r5 = MEM_H(ctx->r12, 0X0);
    func_80234F20(rdram, ctx);
        goto after_5;
    // 0x8020332C: lh          $a1, 0x0($t4)
    ctx->r5 = MEM_H(ctx->r12, 0X0);
    after_5:
    // 0x80203330: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x80203334: lui         $t1, 0x8026
    ctx->r9 = S32(0X8026 << 16);
    // 0x80203338: lw          $t1, -0x4684($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4684);
    // 0x8020333C: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x80203340: lbu         $t7, 0x8C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X8C);
    // 0x80203344: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203348: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8020334C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80203350: addu        $t0, $t1, $t8
    ctx->r8 = ADD32(ctx->r9, ctx->r24);
    // 0x80203354: lw          $v0, 0xC($t0)
    ctx->r2 = MEM_W(ctx->r8, 0XC);
    // 0x80203358: addiu       $a1, $a1, 0x244C
    ctx->r5 = ADD32(ctx->r5, 0X244C);
    // 0x8020335C: addiu       $a0, $a0, 0x2448
    ctx->r4 = ADD32(ctx->r4, 0X2448);
    // 0x80203360: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x80203364: addiu       $a2, $zero, 0x43A
    ctx->r6 = ADD32(0, 0X43A);
    // 0x80203368: bnel        $a3, $zero, L_80203380
    if (ctx->r7 != 0) {
        // 0x8020336C: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_80203380;
    }
    goto skip_1;
    // 0x8020336C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_1:
    // 0x80203370: jal         0x80231C9C
    // 0x80203374: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_80231C9C(rdram, ctx);
        goto after_6;
    // 0x80203374: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_6:
    // 0x80203378: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8020337C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_80203380:
    // 0x80203380: jal         0x80234F70
    // 0x80203384: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80234F70(rdram, ctx);
        goto after_7;
    // 0x80203384: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_7:
    // 0x80203388: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8020338C: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x80203390: addiu       $v1, $v1, -0x4678
    ctx->r3 = ADD32(ctx->r3, -0X4678);
    // 0x80203394: addu        $t3, $t9, $s0
    ctx->r11 = ADD32(ctx->r25, ctx->r16);
    // 0x80203398: lbu         $t4, 0xAD($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XAD);
    // 0x8020339C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x802033A0: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x802033A4: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x802033A8: sh          $v0, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r2;
    // 0x802033AC: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x802033B0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x802033B4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x802033B8: addu        $t8, $t1, $s0
    ctx->r24 = ADD32(ctx->r9, ctx->r16);
    // 0x802033BC: lbu         $t0, 0xAD($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0XAD);
    // 0x802033C0: sll         $t9, $t0, 1
    ctx->r25 = S32(ctx->r8 << 1);
    // 0x802033C4: addu        $t3, $t7, $t9
    ctx->r11 = ADD32(ctx->r15, ctx->r25);
    // 0x802033C8: jal         0x80234E90
    // 0x802033CC: lh          $a1, 0x0($t3)
    ctx->r5 = MEM_H(ctx->r11, 0X0);
    func_80234E90(rdram, ctx);
        goto after_8;
    // 0x802033CC: lh          $a1, 0x0($t3)
    ctx->r5 = MEM_H(ctx->r11, 0X0);
    after_8:
    // 0x802033D0: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x802033D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802033D8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802033DC: lw          $t2, 0x3C($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X3C);
    // 0x802033E0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802033E4: addiu       $a1, $a1, 0x246C
    ctx->r5 = ADD32(ctx->r5, 0X246C);
    // 0x802033E8: bne         $t2, $at, L_802033F8
    if (ctx->r10 != ctx->r1) {
        // 0x802033EC: addiu       $a0, $a0, 0x2454
        ctx->r4 = ADD32(ctx->r4, 0X2454);
            goto L_802033F8;
    }
    // 0x802033EC: addiu       $a0, $a0, 0x2454
    ctx->r4 = ADD32(ctx->r4, 0X2454);
    // 0x802033F0: jal         0x80231C9C
    // 0x802033F4: addiu       $a2, $zero, 0x43E
    ctx->r6 = ADD32(0, 0X43E);
    func_80231C9C(rdram, ctx);
        goto after_9;
    // 0x802033F4: addiu       $a2, $zero, 0x43E
    ctx->r6 = ADD32(0, 0X43E);
    after_9:
L_802033F8:
    // 0x802033F8: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x802033FC: lui         $t5, 0x8026
    ctx->r13 = S32(0X8026 << 16);
    // 0x80203400: lw          $t5, -0x4678($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X4678);
    // 0x80203404: addu        $t1, $t6, $s0
    ctx->r9 = ADD32(ctx->r14, ctx->r16);
    // 0x80203408: lbu         $t8, 0xAD($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0XAD);
    // 0x8020340C: sll         $t0, $t8, 1
    ctx->r8 = S32(ctx->r24 << 1);
    // 0x80203410: addu        $t7, $t5, $t0
    ctx->r15 = ADD32(ctx->r13, ctx->r8);
    // 0x80203414: lh          $t9, 0x0($t7)
    ctx->r25 = MEM_H(ctx->r15, 0X0);
    // 0x80203418: bltzl       $t9, L_80203450
    if (SIGNED(ctx->r25) < 0) {
        // 0x8020341C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80203450;
    }
    goto skip_2;
    // 0x8020341C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x80203420: jal         0x80203464
    // 0x80203424: lbu         $a0, 0x33($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X33);
    func_80203464(rdram, ctx);
        goto after_10;
    // 0x80203424: lbu         $a0, 0x33($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X33);
    after_10:
    // 0x80203428: jal         0x80235010
    // 0x8020342C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    func_80235010(rdram, ctx);
        goto after_11;
    // 0x8020342C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_11:
    // 0x80203430: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x80203434: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80203438: addu        $t2, $t4, $s0
    ctx->r10 = ADD32(ctx->r12, ctx->r16);
    // 0x8020343C: sw          $t3, 0xA0($t2)
    MEM_W(0XA0, ctx->r10) = ctx->r11;
    // 0x80203440: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80203444: addu        $t1, $t6, $s0
    ctx->r9 = ADD32(ctx->r14, ctx->r16);
    // 0x80203448: sw          $zero, 0xA8($t1)
    MEM_W(0XA8, ctx->r9) = 0;
    // 0x8020344C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80203450:
    // 0x80203450: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80203454: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80203458: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8020345C: jr          $ra
    // 0x80203460: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80203460: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8021E6EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E6EC: cvt.s.d     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f4.fl = CVT_S_D(ctx->f12.d);
    // 0x8021E6F0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021E6F4: cvt.s.d     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.d); 
    ctx->f6.fl = CVT_S_D(ctx->f14.d);
    // 0x8021E6F8: swc1        $f4, -0x1884($at)
    MEM_W(-0X1884, ctx->r1) = ctx->f4.u32l;
    // 0x8021E6FC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021E700: jr          $ra
    // 0x8021E704: swc1        $f6, -0x1880($at)
    MEM_W(-0X1880, ctx->r1) = ctx->f6.u32l;
    return;
    // 0x8021E704: swc1        $f6, -0x1880($at)
    MEM_W(-0X1880, ctx->r1) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_80227E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227E9C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80227EA0: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80227EA4: lw          $t6, 0x5214($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5214);
    // 0x80227EA8: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80227EAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80227EB0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80227EB4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80227EB8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80227EBC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80227EC0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80227EC4: jal         0x80223840
    // 0x80227EC8: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227EC8: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_0:
    // 0x80227ECC: addiu       $s2, $sp, 0x34
    ctx->r18 = ADD32(ctx->r29, 0X34);
    // 0x80227ED0: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
    // 0x80227ED4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80227ED8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80227EDC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80227EE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227EE4: jal         0x8022393C
    // 0x80227EE8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_1;
    // 0x80227EE8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80227EEC: beq         $v0, $zero, L_80227F28
    if (ctx->r2 == 0) {
        // 0x80227EF0: lui         $s0, 0x434F
        ctx->r16 = S32(0X434F << 16);
            goto L_80227F28;
    }
    // 0x80227EF0: lui         $s0, 0x434F
    ctx->r16 = S32(0X434F << 16);
    // 0x80227EF4: ori         $s0, $s0, 0x4D4D
    ctx->r16 = ctx->r16 | 0X4D4D;
L_80227EF8:
    // 0x80227EF8: bnel        $v0, $s0, L_80227F10
    if (ctx->r2 != ctx->r16) {
        // 0x80227EFC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80227F10;
    }
    goto skip_0;
    // 0x80227EFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x80227F00: jal         0x80226C48
    // 0x80227F04: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_80226C48(rdram, ctx);
        goto after_2;
    // 0x80227F04: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_2:
    // 0x80227F08: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80227F0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80227F10:
    // 0x80227F10: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80227F14: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80227F18: jal         0x8022393C
    // 0x80227F1C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_3;
    // 0x80227F1C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x80227F20: bne         $v0, $zero, L_80227EF8
    if (ctx->r2 != 0) {
        // 0x80227F24: nop
    
            goto L_80227EF8;
    }
    // 0x80227F24: nop

L_80227F28:
    // 0x80227F28: jal         0x802238F0
    // 0x80227F2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_802238F0(rdram, ctx);
        goto after_4;
    // 0x80227F2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80227F30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80227F34: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x80227F38: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80227F3C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80227F40: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80227F44: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80227F48: jr          $ra
    // 0x80227F4C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80227F4C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8023E920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E920: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023E924: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8023E928: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8023E92C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023E930: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8023E934: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8023E938: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x8023E93C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8023E940: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8023E944: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8023E948: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8023E94C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8023E950: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
    // 0x8023E954: sw          $t8, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r24;
    // 0x8023E958: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8023E95C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8023E960: bne         $t2, $zero, L_8023E970
    if (ctx->r10 != 0) {
        // 0x8023E964: nop
    
            goto L_8023E970;
    }
    // 0x8023E964: nop

    // 0x8023E968: beq         $t3, $zero, L_8023E980
    if (ctx->r11 == 0) {
        // 0x8023E96C: nop
    
            goto L_8023E980;
    }
    // 0x8023E96C: nop

L_8023E970:
    // 0x8023E970: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8023E974: sw          $t2, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r10;
    // 0x8023E978: b           L_8023E994
    // 0x8023E97C: sw          $t3, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r11;
        goto L_8023E994;
    // 0x8023E97C: sw          $t3, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r11;
L_8023E980:
    // 0x8023E980: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8023E984: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8023E988: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8023E98C: sw          $t4, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r12;
    // 0x8023E990: sw          $t5, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r13;
L_8023E994:
    // 0x8023E994: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8023E998: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8023E99C: sw          $t7, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->r15;
    // 0x8023E9A0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8023E9A4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8023E9A8: sw          $t9, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r25;
    // 0x8023E9AC: jal         0x80247308
    // 0x8023E9B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80247308(rdram, ctx);
        goto after_0;
    // 0x8023E9B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x8023E9B4: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x8023E9B8: lw          $t2, 0x1A70($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X1A70);
    // 0x8023E9BC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8023E9C0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8023E9C4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8023E9C8: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8023E9CC: bne         $t3, $t1, L_8023E9E0
    if (ctx->r11 != ctx->r9) {
        // 0x8023E9D0: nop
    
            goto L_8023E9E0;
    }
    // 0x8023E9D0: nop

    // 0x8023E9D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8023E9D8: jal         0x80247294
    // 0x8023E9DC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_80247294(rdram, ctx);
        goto after_1;
    // 0x8023E9DC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_8023E9E0:
    // 0x8023E9E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023E9E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023E9E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8023E9EC: jr          $ra
    // 0x8023E9F0: nop

    return;
    // 0x8023E9F0: nop

;}
