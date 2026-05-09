#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80246410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246410: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80246414: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80246418: lbu         $t8, 0x3C($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3C);
    // 0x8024641C: lbu         $t6, 0x3D($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3D);
    // 0x80246420: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80246424: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80246428: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8024642C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80246430: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80246434: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80246438: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8024643C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80246440: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80246444: lbu         $t1, 0x64($s4)
    ctx->r9 = MEM_BU(ctx->r20, 0X64);
    // 0x80246448: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x8024644C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80246450: bgez        $t6, L_80246460
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80246454: sra         $t7, $t6, 2
        ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
            goto L_80246460;
    }
    // 0x80246454: sra         $t7, $t6, 2
    ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
    // 0x80246458: addiu       $at, $t6, 0x3
    ctx->r1 = ADD32(ctx->r14, 0X3);
    // 0x8024645C: sra         $t7, $at, 2
    ctx->r15 = S32(SIGNED(ctx->r1) >> 2);
L_80246460:
    // 0x80246460: bgez        $t8, L_80246474
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80246464: andi        $t9, $t8, 0x7
        ctx->r25 = ctx->r24 & 0X7;
            goto L_80246474;
    }
    // 0x80246464: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x80246468: beq         $t9, $zero, L_80246474
    if (ctx->r25 == 0) {
        // 0x8024646C: nop
    
            goto L_80246474;
    }
    // 0x8024646C: nop

    // 0x80246470: addiu       $t9, $t9, -0x8
    ctx->r25 = ADD32(ctx->r25, -0X8);
L_80246474:
    // 0x80246474: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x80246478: addu        $s6, $t7, $t0
    ctx->r22 = ADD32(ctx->r15, ctx->r8);
    // 0x8024647C: blez        $t1, L_80246584
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80246480: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_80246584;
    }
    // 0x80246480: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80246484: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80246488: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
L_8024648C:
    // 0x8024648C: lbu         $t2, 0x3C($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X3C);
    // 0x80246490: blez        $v0, L_802464A0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80246494: addu        $t3, $s3, $s6
        ctx->r11 = ADD32(ctx->r19, ctx->r22);
            goto L_802464A0;
    }
    // 0x80246494: addu        $t3, $s3, $s6
    ctx->r11 = ADD32(ctx->r19, ctx->r22);
    // 0x80246498: b           L_802464A8
    // 0x8024649C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_802464A8;
    // 0x8024649C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_802464A0:
    // 0x802464A0: lw          $s1, 0x60($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X60);
    // 0x802464A4: nop

L_802464A8:
    // 0x802464A8: beq         $t2, $v0, L_802464D8
    if (ctx->r10 == ctx->r2) {
        // 0x802464AC: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_802464D8;
    }
    // 0x802464AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802464B0: lbu         $t4, 0x101($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X101);
    // 0x802464B4: bgez        $v0, L_802464C8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802464B8: andi        $t5, $v0, 0x7
        ctx->r13 = ctx->r2 & 0X7;
            goto L_802464C8;
    }
    // 0x802464B8: andi        $t5, $v0, 0x7
    ctx->r13 = ctx->r2 & 0X7;
    // 0x802464BC: beq         $t5, $zero, L_802464C8
    if (ctx->r13 == 0) {
        // 0x802464C0: nop
    
            goto L_802464C8;
    }
    // 0x802464C0: nop

    // 0x802464C4: addiu       $t5, $t5, -0x8
    ctx->r13 = ADD32(ctx->r13, -0X8);
L_802464C8:
    // 0x802464C8: sllv        $t8, $t6, $t5
    ctx->r24 = S32(ctx->r14 << (ctx->r13 & 31));
    // 0x802464CC: and         $t9, $t4, $t8
    ctx->r25 = ctx->r12 & ctx->r24;
    // 0x802464D0: beq         $t9, $zero, L_8024656C
    if (ctx->r25 == 0) {
        // 0x802464D4: nop
    
            goto L_8024656C;
    }
    // 0x802464D4: nop

L_802464D8:
    // 0x802464D8: lbu         $t7, 0x100($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X100);
    // 0x802464DC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802464E0: beq         $t7, $v0, L_80246510
    if (ctx->r15 == ctx->r2) {
        // 0x802464E4: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_80246510;
    }
    // 0x802464E4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802464E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802464EC: jal         0x80245404
    // 0x802464F0: andi        $a3, $s2, 0xFF
    ctx->r7 = ctx->r18 & 0XFF;
    func_80245404(rdram, ctx);
        goto after_0;
    // 0x802464F0: andi        $a3, $s2, 0xFF
    ctx->r7 = ctx->r18 & 0XFF;
    after_0:
    // 0x802464F4: beq         $v0, $zero, L_8024650C
    if (ctx->r2 == 0) {
        // 0x802464F8: nop
    
            goto L_8024650C;
    }
    // 0x802464F8: nop

    // 0x802464FC: beq         $v0, $s5, L_8024650C
    if (ctx->r2 == ctx->r21) {
        // 0x80246500: nop
    
            goto L_8024650C;
    }
    // 0x80246500: nop

    // 0x80246504: b           L_8024658C
    // 0x80246508: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8024658C;
    // 0x80246508: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8024650C:
    // 0x8024650C: sb          $s2, 0x100($s3)
    MEM_B(0X100, ctx->r19) = ctx->r18;
L_80246510:
    // 0x80246510: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x80246514: beq         $at, $zero, L_80246558
    if (ctx->r1 == 0) {
        // 0x80246518: slti        $at, $s1, 0x80
        ctx->r1 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
            goto L_80246558;
    }
    // 0x80246518: slti        $at, $s1, 0x80
    ctx->r1 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
    // 0x8024651C: beq         $at, $zero, L_80246558
    if (ctx->r1 == 0) {
        // 0x80246520: sll         $v0, $s1, 1
        ctx->r2 = S32(ctx->r17 << 1);
            goto L_80246558;
    }
    // 0x80246520: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x80246524: addu        $v1, $s3, $v0
    ctx->r3 = ADD32(ctx->r19, ctx->r2);
    // 0x80246528: lhu         $t0, 0x3C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3C);
L_8024652C:
    // 0x8024652C: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x80246530: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80246534: bne         $t0, $t1, L_80246544
    if (ctx->r8 != ctx->r9) {
        // 0x80246538: slti        $at, $s0, 0x2
        ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_80246544;
    }
    // 0x80246538: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8024653C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80246540: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
L_80246544:
    // 0x80246544: beq         $at, $zero, L_80246558
    if (ctx->r1 == 0) {
        // 0x80246548: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_80246558;
    }
    // 0x80246548: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8024654C: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x80246550: bne         $at, $zero, L_8024652C
    if (ctx->r1 != 0) {
        // 0x80246554: lhu         $t0, 0x3C($sp)
        ctx->r8 = MEM_HU(ctx->r29, 0X3C);
            goto L_8024652C;
    }
    // 0x80246554: lhu         $t0, 0x3C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3C);
L_80246558:
    // 0x80246558: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8024655C: bne         $at, $zero, L_8024656C
    if (ctx->r1 != 0) {
        // 0x80246560: nop
    
            goto L_8024656C;
    }
    // 0x80246560: nop

    // 0x80246564: b           L_80246588
    // 0x80246568: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80246588;
    // 0x80246568: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8024656C:
    // 0x8024656C: lbu         $t3, 0x64($s4)
    ctx->r11 = MEM_BU(ctx->r20, 0X64);
    // 0x80246570: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80246574: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x80246578: slt         $at, $v0, $t3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8024657C: bne         $at, $zero, L_8024648C
    if (ctx->r1 != 0) {
        // 0x80246580: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_8024648C;
    }
    // 0x80246580: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_80246584:
    // 0x80246584: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80246588:
    // 0x80246588: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8024658C:
    // 0x8024658C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80246590: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80246594: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80246598: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8024659C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802465A0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802465A4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802465A8: jr          $ra
    // 0x802465AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802465AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80246BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246BB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80246BB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80246BB8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80246BBC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80246BC0: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80246BC4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80246BC8: sw          $t6, 0x1A60($at)
    MEM_W(0X1A60, ctx->r1) = ctx->r14;
    // 0x80246BCC: addiu       $a1, $a1, 0x5F20
    ctx->r5 = ADD32(ctx->r5, 0X5F20);
    // 0x80246BD0: addiu       $a0, $a0, 0x5F28
    ctx->r4 = ADD32(ctx->r4, 0X5F28);
    // 0x80246BD4: jal         0x802371E0
    // 0x80246BD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802371E0(rdram, ctx);
        goto after_0;
    // 0x80246BD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80246BDC: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80246BE0: addiu       $a0, $a0, 0x5F28
    ctx->r4 = ADD32(ctx->r4, 0X5F28);
    // 0x80246BE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80246BE8: jal         0x80236B80
    // 0x80246BEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80236B80(rdram, ctx);
        goto after_1;
    // 0x80246BEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80246BF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80246BF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80246BF8: jr          $ra
    // 0x80246BFC: nop

    return;
    // 0x80246BFC: nop

;}
RECOMP_FUNC void func_80205EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205EBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80205EC0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80205EC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80205EC8: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80205ECC: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80205ED0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80205ED4: addiu       $a2, $a2, 0xBEE
    ctx->r6 = ADD32(ctx->r6, 0XBEE);
    // 0x80205ED8: addiu       $a1, $a1, 0x2A04
    ctx->r5 = ADD32(ctx->r5, 0X2A04);
    // 0x80205EDC: jal         0x80231C58
    // 0x80205EE0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80231C58(rdram, ctx);
        goto after_0;
    // 0x80205EE0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80205EE4: bne         $v0, $zero, L_80205F50
    if (ctx->r2 != 0) {
        // 0x80205EE8: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_80205F50;
    }
    // 0x80205EE8: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80205EEC: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80205EF0: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x80205EF4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80205EF8: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x80205EFC: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80205F00: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80205F04: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80205F08: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80205F0C: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80205F10: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80205F14: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80205F18: bne         $t0, $zero, L_80205F38
    if (ctx->r8 != 0) {
        // 0x80205F1C: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_80205F38;
    }
    // 0x80205F1C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80205F20: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80205F24: addiu       $a0, $a0, 0x2A10
    ctx->r4 = ADD32(ctx->r4, 0X2A10);
    // 0x80205F28: jal         0x80231A24
    // 0x80205F2C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x80205F2C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x80205F30: b           L_80205F54
    // 0x80205F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80205F54;
    // 0x80205F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80205F38:
    // 0x80205F38: lui         $t1, 0x8026
    ctx->r9 = S32(0X8026 << 16);
    // 0x80205F3C: lw          $t1, -0x4160($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4160);
    // 0x80205F40: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80205F44: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80205F48: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80205F4C: sh          $a3, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r7;
L_80205F50:
    // 0x80205F50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80205F54:
    // 0x80205F54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80205F58: jr          $ra
    // 0x80205F5C: nop

    return;
    // 0x80205F5C: nop

;}
RECOMP_FUNC void func_8022C838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C838: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8022C83C: addiu       $v1, $v1, -0x78E0
    ctx->r3 = ADD32(ctx->r3, -0X78E0);
    // 0x8022C840: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8022C844: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x8022C848: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C84C: sw          $zero, -0x78E8($at)
    MEM_W(-0X78E8, ctx->r1) = 0;
    // 0x8022C850: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C854: sb          $zero, -0x78D8($at)
    MEM_B(-0X78D8, ctx->r1) = 0;
    // 0x8022C858: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C85C: sb          $zero, -0x78D7($at)
    MEM_B(-0X78D7, ctx->r1) = 0;
    // 0x8022C860: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C864: sb          $zero, -0x78D6($at)
    MEM_B(-0X78D6, ctx->r1) = 0;
    // 0x8022C868: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C86C: sb          $zero, -0x78D5($at)
    MEM_B(-0X78D5, ctx->r1) = 0;
    // 0x8022C870: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C874: sb          $zero, -0x78D4($at)
    MEM_B(-0X78D4, ctx->r1) = 0;
    // 0x8022C878: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C87C: sb          $zero, -0x78D3($at)
    MEM_B(-0X78D3, ctx->r1) = 0;
    // 0x8022C880: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C884: sb          $zero, -0x78D2($at)
    MEM_B(-0X78D2, ctx->r1) = 0;
    // 0x8022C888: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C88C: sb          $zero, -0x78D1($at)
    MEM_B(-0X78D1, ctx->r1) = 0;
    // 0x8022C890: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C894: sb          $zero, -0x78D0($at)
    MEM_B(-0X78D0, ctx->r1) = 0;
    // 0x8022C898: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C89C: sw          $zero, -0x78CC($at)
    MEM_W(-0X78CC, ctx->r1) = 0;
    // 0x8022C8A0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C8A4: sw          $zero, -0x78C8($at)
    MEM_W(-0X78C8, ctx->r1) = 0;
    // 0x8022C8A8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C8AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022C8B0: sw          $zero, -0x78C4($at)
    MEM_W(-0X78C4, ctx->r1) = 0;
    // 0x8022C8B4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C8B8: sw          $zero, -0x78C0($at)
    MEM_W(-0X78C0, ctx->r1) = 0;
    // 0x8022C8BC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8022C8C0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C8C4: sw          $t0, -0x78BC($at)
    MEM_W(-0X78BC, ctx->r1) = ctx->r8;
    // 0x8022C8C8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8022C8CC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8022C8D0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C8D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022C8D8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8022C8DC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8022C8E0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8022C8E4: sw          $t0, -0x78B8($at)
    MEM_W(-0X78B8, ctx->r1) = ctx->r8;
    // 0x8022C8E8: addiu       $t6, $a0, 0x264
    ctx->r14 = ADD32(ctx->r4, 0X264);
    // 0x8022C8EC: addiu       $t7, $a0, 0x268
    ctx->r15 = ADD32(ctx->r4, 0X268);
    // 0x8022C8F0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8022C8F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8022C8F8: sw          $zero, 0x260($a0)
    MEM_W(0X260, ctx->r4) = 0;
    // 0x8022C8FC: sw          $zero, 0x274($a0)
    MEM_W(0X274, ctx->r4) = 0;
    // 0x8022C900: sw          $zero, 0x278($a0)
    MEM_W(0X278, ctx->r4) = 0;
    // 0x8022C904: sw          $zero, 0x27C($a0)
    MEM_W(0X27C, ctx->r4) = 0;
    // 0x8022C908: sw          $zero, 0x264($a0)
    MEM_W(0X264, ctx->r4) = 0;
    // 0x8022C90C: sw          $zero, 0x268($a0)
    MEM_W(0X268, ctx->r4) = 0;
    // 0x8022C910: sw          $t6, 0x26C($a0)
    MEM_W(0X26C, ctx->r4) = ctx->r14;
    // 0x8022C914: sw          $t7, 0x270($a0)
    MEM_W(0X270, ctx->r4) = ctx->r15;
    // 0x8022C918: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
    // 0x8022C91C: sh          $t8, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r24;
    // 0x8022C920: addiu       $s1, $a0, 0x40
    ctx->r17 = ADD32(ctx->r4, 0X40);
    // 0x8022C924: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8022C928: addiu       $a1, $s0, 0x58
    ctx->r5 = ADD32(ctx->r16, 0X58);
    // 0x8022C92C: jal         0x802371E0
    // 0x8022C930: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802371E0(rdram, ctx);
        goto after_0;
    // 0x8022C930: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022C934: addiu       $a0, $s0, 0x78
    ctx->r4 = ADD32(ctx->r16, 0X78);
    // 0x8022C938: addiu       $a1, $s0, 0x90
    ctx->r5 = ADD32(ctx->r16, 0X90);
    // 0x8022C93C: jal         0x802371E0
    // 0x8022C940: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802371E0(rdram, ctx);
        goto after_1;
    // 0x8022C940: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022C944: jal         0x8023DB60
    // 0x8022C948: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    func_8023DB60(rdram, ctx);
        goto after_2;
    // 0x8022C948: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_2:
    // 0x8022C94C: lbu         $t9, 0x37($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X37);
    // 0x8022C950: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x8022C954: addiu       $t2, $t2, 0x960
    ctx->r10 = ADD32(ctx->r10, 0X960);
    // 0x8022C958: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8022C95C: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8022C960: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8022C964: jal         0x8023DEC0
    // 0x8022C968: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    func_8023DEC0(rdram, ctx);
        goto after_3;
    // 0x8022C968: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    after_3:
    // 0x8022C96C: jal         0x8023D7A0
    // 0x8022C970: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    func_8023D7A0(rdram, ctx);
        goto after_4;
    // 0x8022C970: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    after_4:
    // 0x8022C974: jal         0x8023CE10
    // 0x8022C978: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8023CE10(rdram, ctx);
        goto after_5;
    // 0x8022C978: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x8022C97C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8022C980: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022C984: jal         0x8023DF30
    // 0x8022C988: addiu       $a2, $zero, 0x29B
    ctx->r6 = ADD32(0, 0X29B);
    func_8023DF30(rdram, ctx);
        goto after_6;
    // 0x8022C988: addiu       $a2, $zero, 0x29B
    ctx->r6 = ADD32(0, 0X29B);
    after_6:
    // 0x8022C98C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8022C990: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022C994: jal         0x8023DF30
    // 0x8022C998: addiu       $a2, $zero, 0x29C
    ctx->r6 = ADD32(0, 0X29C);
    func_8023DF30(rdram, ctx);
        goto after_7;
    // 0x8022C998: addiu       $a2, $zero, 0x29C
    ctx->r6 = ADD32(0, 0X29C);
    after_7:
    // 0x8022C99C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x8022C9A0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022C9A4: jal         0x8023DF30
    // 0x8022C9A8: addiu       $a2, $zero, 0x29D
    ctx->r6 = ADD32(0, 0X29D);
    func_8023DF30(rdram, ctx);
        goto after_8;
    // 0x8022C9A8: addiu       $a2, $zero, 0x29D
    ctx->r6 = ADD32(0, 0X29D);
    after_8:
    // 0x8022C9AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8022C9B0: addiu       $a1, $zero, 0x29A
    ctx->r5 = ADD32(0, 0X29A);
    // 0x8022C9B4: jal         0x8023DFA0
    // 0x8022C9B8: lbu         $a2, 0x3B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3B);
    func_8023DFA0(rdram, ctx);
        goto after_9;
    // 0x8022C9B8: lbu         $a2, 0x3B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3B);
    after_9:
    // 0x8022C9BC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C9C0: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8022C9C4: addiu       $s1, $s0, 0xB0
    ctx->r17 = ADD32(ctx->r16, 0XB0);
    // 0x8022C9C8: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x8022C9CC: addiu       $a2, $a2, -0x35D0
    ctx->r6 = ADD32(ctx->r6, -0X35D0);
    // 0x8022C9D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8022C9D4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022C9D8: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x8022C9DC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8022C9E0: jal         0x80237210
    // 0x8022C9E4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_80237210(rdram, ctx);
        goto after_10;
    // 0x8022C9E4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_10:
    // 0x8022C9E8: jal         0x80237360
    // 0x8022C9EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80237360(rdram, ctx);
        goto after_11;
    // 0x8022C9EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x8022C9F0: jal         0x80207210
    // 0x8022C9F4: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    func_80207210(rdram, ctx);
        goto after_12;
    // 0x8022C9F4: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    after_12:
    // 0x8022C9F8: jal         0x8022D4EC
    // 0x8022C9FC: nop

    func_8022D4EC(rdram, ctx);
        goto after_13;
    // 0x8022C9FC: nop

    after_13:
    // 0x8022CA00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022CA04: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CA08: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8022CA0C: jr          $ra
    // 0x8022CA10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8022CA10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80204360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80204360: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x80204364: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80204368: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8020436C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80204370: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80204374: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80204378: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8020437C: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x80204380: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80204384: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80204388: bne         $at, $zero, L_802043A8
    if (ctx->r1 != 0) {
        // 0x8020438C: sw          $s1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r17;
            goto L_802043A8;
    }
    // 0x8020438C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80204390: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80204394: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80204398: addiu       $a1, $a1, 0x281C
    ctx->r5 = ADD32(ctx->r5, 0X281C);
    // 0x8020439C: addiu       $a0, $a0, 0x2808
    ctx->r4 = ADD32(ctx->r4, 0X2808);
    // 0x802043A0: jal         0x80231C9C
    // 0x802043A4: addiu       $a2, $zero, 0x13C
    ctx->r6 = ADD32(0, 0X13C);
    func_80231C9C(rdram, ctx);
        goto after_0;
    // 0x802043A4: addiu       $a2, $zero, 0x13C
    ctx->r6 = ADD32(0, 0X13C);
    after_0:
L_802043A8:
    // 0x802043A8: beq         $s0, $zero, L_802043C4
    if (ctx->r16 == 0) {
        // 0x802043AC: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_802043C4;
    }
    // 0x802043AC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802043B0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802043B4: addiu       $a1, $a1, 0x2834
    ctx->r5 = ADD32(ctx->r5, 0X2834);
    // 0x802043B8: addiu       $a0, $a0, 0x2828
    ctx->r4 = ADD32(ctx->r4, 0X2828);
    // 0x802043BC: jal         0x80231C9C
    // 0x802043C0: addiu       $a2, $zero, 0x13D
    ctx->r6 = ADD32(0, 0X13D);
    func_80231C9C(rdram, ctx);
        goto after_1;
    // 0x802043C0: addiu       $a2, $zero, 0x13D
    ctx->r6 = ADD32(0, 0X13D);
    after_1:
L_802043C4:
    // 0x802043C4: beq         $s4, $zero, L_802043E0
    if (ctx->r20 == 0) {
        // 0x802043C8: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_802043E0;
    }
    // 0x802043C8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802043CC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802043D0: addiu       $a1, $a1, 0x2850
    ctx->r5 = ADD32(ctx->r5, 0X2850);
    // 0x802043D4: addiu       $a0, $a0, 0x2840
    ctx->r4 = ADD32(ctx->r4, 0X2840);
    // 0x802043D8: jal         0x80231C9C
    // 0x802043DC: addiu       $a2, $zero, 0x13E
    ctx->r6 = ADD32(0, 0X13E);
    func_80231C9C(rdram, ctx);
        goto after_2;
    // 0x802043DC: addiu       $a2, $zero, 0x13E
    ctx->r6 = ADD32(0, 0X13E);
    after_2:
L_802043E0:
    // 0x802043E0: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x802043E4: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x802043E8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802043EC: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x802043F0: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x802043F4: addiu       $t7, $t7, 0x7390
    ctx->r15 = ADD32(ctx->r15, 0X7390);
    // 0x802043F8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802043FC: addu        $t3, $t6, $t7
    ctx->r11 = ADD32(ctx->r14, ctx->r15);
    // 0x80204400: lw          $s2, 0x50($t3)
    ctx->r18 = MEM_W(ctx->r11, 0X50);
    // 0x80204404: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80204408: blez        $s2, L_802044E8
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8020440C: andi        $a0, $s2, 0x3
        ctx->r4 = ctx->r18 & 0X3;
            goto L_802044E8;
    }
    // 0x8020440C: andi        $a0, $s2, 0x3
    ctx->r4 = ctx->r18 & 0X3;
    // 0x80204410: beq         $a0, $zero, L_8020444C
    if (ctx->r4 == 0) {
        // 0x80204414: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_8020444C;
    }
    // 0x80204414: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80204418: sll         $t2, $zero, 3
    ctx->r10 = S32(0 << 3);
    // 0x8020441C: addiu       $t8, $sp, 0x64
    ctx->r24 = ADD32(ctx->r29, 0X64);
    // 0x80204420: addu        $s0, $t2, $t8
    ctx->r16 = ADD32(ctx->r10, ctx->r24);
    // 0x80204424: addu        $v0, $t3, $t2
    ctx->r2 = ADD32(ctx->r11, ctx->r10);
L_80204428:
    // 0x80204428: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x8020442C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80204430: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80204434: sw          $at, -0x8($s0)
    MEM_W(-0X8, ctx->r16) = ctx->r1;
    // 0x80204438: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x8020443C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80204440: bne         $v1, $s1, L_80204428
    if (ctx->r3 != ctx->r17) {
        // 0x80204444: sw          $t4, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r12;
            goto L_80204428;
    }
    // 0x80204444: sw          $t4, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r12;
    // 0x80204448: beq         $s1, $s2, L_802044E4
    if (ctx->r17 == ctx->r18) {
        // 0x8020444C: sll         $t2, $s1, 3
        ctx->r10 = S32(ctx->r17 << 3);
            goto L_802044E4;
    }
L_8020444C:
    // 0x8020444C: sll         $t2, $s1, 3
    ctx->r10 = S32(ctx->r17 << 3);
    // 0x80204450: addiu       $t5, $sp, 0x64
    ctx->r13 = ADD32(ctx->r29, 0X64);
    // 0x80204454: addu        $s0, $t2, $t5
    ctx->r16 = ADD32(ctx->r10, ctx->r13);
    // 0x80204458: addu        $v0, $t3, $t2
    ctx->r2 = ADD32(ctx->r11, ctx->r10);
    // 0x8020445C: sll         $t6, $s2, 3
    ctx->r14 = S32(ctx->r18 << 3);
    // 0x80204460: addiu       $t7, $sp, 0x7C
    ctx->r15 = ADD32(ctx->r29, 0X7C);
    // 0x80204464: addu        $t1, $t6, $t7
    ctx->r9 = ADD32(ctx->r14, ctx->r15);
    // 0x80204468: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x8020446C: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    // 0x80204470: addiu       $t0, $v0, 0x18
    ctx->r8 = ADD32(ctx->r2, 0X18);
    // 0x80204474: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x80204478: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x8020447C: addiu       $v1, $s0, 0x18
    ctx->r3 = ADD32(ctx->r16, 0X18);
L_80204480:
    // 0x80204480: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x80204484: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x80204488: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x8020448C: sw          $at, -0x20($s0)
    MEM_W(-0X20, ctx->r16) = ctx->r1;
    // 0x80204490: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x80204494: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80204498: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x8020449C: sw          $t9, -0x1C($s0)
    MEM_W(-0X1C, ctx->r16) = ctx->r25;
    // 0x802044A0: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x802044A4: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x802044A8: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    // 0x802044AC: sw          $at, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = ctx->r1;
    // 0x802044B0: lw          $t5, -0x1C($a2)
    ctx->r13 = MEM_W(ctx->r6, -0X1C);
    // 0x802044B4: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x802044B8: addiu       $t0, $t0, 0x20
    ctx->r8 = ADD32(ctx->r8, 0X20);
    // 0x802044BC: sw          $t5, -0x1C($a0)
    MEM_W(-0X1C, ctx->r4) = ctx->r13;
    // 0x802044C0: lw          $at, -0x20($a3)
    ctx->r1 = MEM_W(ctx->r7, -0X20);
    // 0x802044C4: sw          $at, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->r1;
    // 0x802044C8: lw          $t7, -0x1C($a3)
    ctx->r15 = MEM_W(ctx->r7, -0X1C);
    // 0x802044CC: sw          $t7, -0x1C($a1)
    MEM_W(-0X1C, ctx->r5) = ctx->r15;
    // 0x802044D0: lw          $at, -0x20($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X20);
    // 0x802044D4: sw          $at, -0x20($v1)
    MEM_W(-0X20, ctx->r3) = ctx->r1;
    // 0x802044D8: lw          $t9, -0x1C($t0)
    ctx->r25 = MEM_W(ctx->r8, -0X1C);
    // 0x802044DC: bne         $v1, $t1, L_80204480
    if (ctx->r3 != ctx->r9) {
        // 0x802044E0: sw          $t9, -0x1C($v1)
        MEM_W(-0X1C, ctx->r3) = ctx->r25;
            goto L_80204480;
    }
    // 0x802044E0: sw          $t9, -0x1C($v1)
    MEM_W(-0X1C, ctx->r3) = ctx->r25;
L_802044E4:
    // 0x802044E4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802044E8:
    // 0x802044E8: blez        $s2, L_80204510
    if (SIGNED(ctx->r18) <= 0) {
        // 0x802044EC: addiu       $s0, $sp, 0x64
        ctx->r16 = ADD32(ctx->r29, 0X64);
            goto L_80204510;
    }
    // 0x802044EC: addiu       $s0, $sp, 0x64
    ctx->r16 = ADD32(ctx->r29, 0X64);
L_802044F0:
    // 0x802044F0: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x802044F4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802044F8: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802044FC: jalr        $t9
    // 0x80204500: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80204500: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_3:
    // 0x80204504: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80204508: bne         $s1, $s2, L_802044F0
    if (ctx->r17 != ctx->r18) {
        // 0x8020450C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_802044F0;
    }
    // 0x8020450C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80204510:
    // 0x80204510: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80204514: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80204518: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8020451C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80204520: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80204524: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80204528: jr          $ra
    // 0x8020452C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x8020452C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_802377C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802377C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802377CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802377D0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802377D4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802377D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802377DC: lw          $s0, 0x14($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X14);
    // 0x802377E0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802377E4: addiu       $s2, $a0, 0x4
    ctx->r18 = ADD32(ctx->r4, 0X4);
    // 0x802377E8: beql        $s0, $zero, L_80237814
    if (ctx->r16 == 0) {
        // 0x802377EC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80237814;
    }
    goto skip_0;
    // 0x802377EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
L_802377F0:
    // 0x802377F0: jal         0x80237120
    // 0x802377F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80237120(rdram, ctx);
        goto after_0;
    // 0x802377F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x802377F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802377FC: jal         0x80237150
    // 0x80237800: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80237150(rdram, ctx);
        goto after_1;
    // 0x80237800: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x80237804: lw          $s0, 0x14($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X14);
    // 0x80237808: bne         $s0, $zero, L_802377F0
    if (ctx->r16 != 0) {
        // 0x8023780C: nop
    
            goto L_802377F0;
    }
    // 0x8023780C: nop

    // 0x80237810: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80237814:
    // 0x80237814: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80237818: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023781C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80237820: jr          $ra
    // 0x80237824: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80237824: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80235814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80235814: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80235818: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023581C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80235820: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80235824: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80235828: addiu       $t8, $zero, 0x3E80
    ctx->r24 = ADD32(0, 0X3E80);
    // 0x8023582C: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80235830: sw          $t7, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r15;
    // 0x80235834: sw          $t8, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r24;
    // 0x80235838: sw          $t6, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r14;
    // 0x8023583C: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80235840: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80235844: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x80235848: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8023584C: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x80235850: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80235854: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80235858: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x8023585C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80235860: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80235864: jal         0x80236CD0
    // 0x80235868: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80236CD0(rdram, ctx);
        goto after_0;
    // 0x80235868: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8023586C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80235870: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x80235874: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80235878: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x8023587C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80235880: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80235884: beq         $t2, $zero, L_802358A8
    if (ctx->r10 == 0) {
        // 0x80235888: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_802358A8;
    }
    // 0x80235888: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8023588C: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
L_80235890:
    // 0x80235890: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80235894: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80235898: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    // 0x8023589C: sltu        $at, $v1, $t3
    ctx->r1 = ctx->r3 < ctx->r11 ? 1 : 0;
    // 0x802358A0: bnel        $at, $zero, L_80235890
    if (ctx->r1 != 0) {
        // 0x802358A4: sw          $zero, 0x1C($a0)
        MEM_W(0X1C, ctx->r4) = 0;
            goto L_80235890;
    }
    goto skip_0;
    // 0x802358A4: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    skip_0:
L_802358A8:
    // 0x802358A8: lw          $t4, 0x4($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X4);
    // 0x802358AC: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x802358B0: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x802358B4: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x802358B8: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x802358BC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x802358C0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802358C4: jal         0x80236CD0
    // 0x802358C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80236CD0(rdram, ctx);
        goto after_1;
    // 0x802358C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x802358CC: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x802358D0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802358D4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802358D8: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x802358DC: jal         0x8023F52C
    // 0x802358E0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8023F52C(rdram, ctx);
        goto after_2;
    // 0x802358E0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_2:
    // 0x802358E4: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802358E8: lw          $a0, 0x910($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X910);
    // 0x802358EC: lui         $t7, 0x8023
    ctx->r15 = S32(0X8023 << 16);
    // 0x802358F0: addiu       $t7, $t7, 0x52CC
    ctx->r15 = ADD32(ctx->r15, 0X52CC);
    // 0x802358F4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x802358F8: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    // 0x802358FC: sw          $s0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r16;
    // 0x80235900: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80235904: jal         0x8023F5A0
    // 0x80235908: sw          $a0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r4;
    func_8023F5A0(rdram, ctx);
        goto after_3;
    // 0x80235908: sw          $a0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r4;
    after_3:
    // 0x8023590C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80235910: sh          $t8, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r24;
    // 0x80235914: lw          $a2, 0x48($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X48);
    // 0x80235918: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8023591C: jal         0x8023F37C
    // 0x80235920: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_8023F37C(rdram, ctx);
        goto after_4;
    // 0x80235920: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_4:
    // 0x80235924: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80235928: jal         0x8023F4A0
    // 0x8023592C: addiu       $a1, $s0, 0x28
    ctx->r5 = ADD32(ctx->r16, 0X28);
    func_8023F4A0(rdram, ctx);
        goto after_5;
    // 0x8023592C: addiu       $a1, $s0, 0x28
    ctx->r5 = ADD32(ctx->r16, 0X28);
    after_5:
    // 0x80235930: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    // 0x80235934: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80235938: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023593C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80235940: jr          $ra
    // 0x80235944: nop

    return;
    // 0x80235944: nop

;}
RECOMP_FUNC void func_80227ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227ABC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80227AC0: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80227AC4: lw          $t6, 0x5218($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5218);
    // 0x80227AC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227ACC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80227AD0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80227AD4: jal         0x80223840
    // 0x80227AD8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227AD8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80227ADC: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80227AE0: lui         $a3, 0x434F
    ctx->r7 = S32(0X434F << 16);
    // 0x80227AE4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80227AE8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80227AEC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80227AF0: ori         $a3, $a3, 0x4D4D
    ctx->r7 = ctx->r7 | 0X4D4D;
    // 0x80227AF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227AF8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80227AFC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80227B00: jal         0x80223B30
    // 0x80227B04: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80223B30(rdram, ctx);
        goto after_1;
    // 0x80227B04: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x80227B08: beq         $v0, $zero, L_80227B1C
    if (ctx->r2 == 0) {
        // 0x80227B0C: nop
    
            goto L_80227B1C;
    }
    // 0x80227B0C: nop

    // 0x80227B10: jal         0x80225534
    // 0x80227B14: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_80225534(rdram, ctx);
        goto after_2;
    // 0x80227B14: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80227B18: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_80227B1C:
    // 0x80227B1C: jal         0x802238F0
    // 0x80227B20: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_802238F0(rdram, ctx);
        goto after_3;
    // 0x80227B20: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x80227B24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227B28: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80227B2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80227B30: jr          $ra
    // 0x80227B34: nop

    return;
    // 0x80227B34: nop

;}
RECOMP_FUNC void func_8021A628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021A628: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8021A62C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8021A630: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x8021A634: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x8021A638: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x8021A63C: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x8021A640: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8021A644: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x8021A648: jal         0x8022331C
    // 0x8021A64C: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    func_8022331C(rdram, ctx);
        goto after_0;
    // 0x8021A64C: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    after_0:
    // 0x8021A650: jal         0x8022342C
    // 0x8021A654: lui         $a0, 0x160
    ctx->r4 = S32(0X160 << 16);
    func_8022342C(rdram, ctx);
        goto after_1;
    // 0x8021A654: lui         $a0, 0x160
    ctx->r4 = S32(0X160 << 16);
    after_1:
    // 0x8021A658: lui         $a0, 0x82
    ctx->r4 = S32(0X82 << 16);
    // 0x8021A65C: jal         0x802233EC
    // 0x8021A660: ori         $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 | 0XFFF;
    func_802233EC(rdram, ctx);
        goto after_2;
    // 0x8021A660: ori         $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 | 0XFFF;
    after_2:
    // 0x8021A664: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x8021A668: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8021A66C: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x8021A670: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8021A674: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x8021A678: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8021A67C: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x8021A680: lwc1        $f10, 0x14($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X14);
    // 0x8021A684: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x8021A688: lwc1        $f16, 0x18($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X18);
    // 0x8021A68C: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x8021A690: lwc1        $f18, 0x1C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x8021A694: jal         0x8021F4E4
    // 0x8021A698: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    func_8021F4E4(rdram, ctx);
        goto after_3;
    // 0x8021A698: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x8021A69C: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8021A6A0: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8021A6A4: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021A6A8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8021A6AC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8021A6B0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021A6B4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021A6B8: mfc1        $s2, $f6
    ctx->r18 = (int32_t)ctx->f6.u32l;
    // 0x8021A6BC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8021A6C0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8021A6C4: mfc1        $s0, $f10
    ctx->r16 = (int32_t)ctx->f10.u32l;
    // 0x8021A6C8: addiu       $t2, $zero, 0x78
    ctx->r10 = ADD32(0, 0X78);
    // 0x8021A6CC: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8021A6D0: mfc1        $s5, $f18
    ctx->r21 = (int32_t)ctx->f18.u32l;
    // 0x8021A6D4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8021A6D8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8021A6DC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8021A6E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A6E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8021A6E8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021A6EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021A6F0: jal         0x8021F35C
    // 0x8021A6F4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_8021F35C(rdram, ctx);
        goto after_4;
    // 0x8021A6F4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_4:
    // 0x8021A6F8: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021A6FC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021A700: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8021A704: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8021A708: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8021A70C: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x8021A710: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8021A714: mfc1        $s3, $f6
    ctx->r19 = (int32_t)ctx->f6.u32l;
    // 0x8021A718: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8021A71C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8021A720: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8021A724: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021A728: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021A72C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A730: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8021A734: jal         0x8021F35C
    // 0x8021A738: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_8021F35C(rdram, ctx);
        goto after_5;
    // 0x8021A738: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_5:
    // 0x8021A73C: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021A740: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8021A744: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021A748: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021A74C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8021A750: addiu       $t2, $zero, 0x78
    ctx->r10 = ADD32(0, 0X78);
    // 0x8021A754: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8021A758: mfc1        $s4, $f10
    ctx->r20 = (int32_t)ctx->f10.u32l;
    // 0x8021A75C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8021A760: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8021A764: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8021A768: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021A76C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021A770: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A774: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8021A778: jal         0x8021F35C
    // 0x8021A77C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8021F35C(rdram, ctx);
        goto after_6;
    // 0x8021A77C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_6:
    // 0x8021A780: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8021A784: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021A788: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8021A78C: addiu       $t6, $zero, 0x78
    ctx->r14 = ADD32(0, 0X78);
    // 0x8021A790: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8021A794: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8021A798: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8021A79C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8021A7A0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021A7A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021A7A8: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021A7AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A7B0: jal         0x8021F35C
    // 0x8021A7B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_7;
    // 0x8021A7B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x8021A7B8: jal         0x8021FCD0
    // 0x8021A7BC: nop

    func_8021FCD0(rdram, ctx);
        goto after_8;
    // 0x8021A7BC: nop

    after_8:
    // 0x8021A7C0: jal         0x8021F4E4
    // 0x8021A7C4: nop

    func_8021F4E4(rdram, ctx);
        goto after_9;
    // 0x8021A7C4: nop

    after_9:
    // 0x8021A7C8: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021A7CC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8021A7D0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8021A7D4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8021A7D8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021A7DC: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x8021A7E0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8021A7E4: mfc1        $s1, $f18
    ctx->r17 = (int32_t)ctx->f18.u32l;
    // 0x8021A7E8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8021A7EC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8021A7F0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8021A7F4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021A7F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021A7FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A800: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8021A804: jal         0x8021F35C
    // 0x8021A808: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8021F35C(rdram, ctx);
        goto after_10;
    // 0x8021A808: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_10:
    // 0x8021A80C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8021A810: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8021A814: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021A818: addiu       $t5, $zero, 0x78
    ctx->r13 = ADD32(0, 0X78);
    // 0x8021A81C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8021A820: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8021A824: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8021A828: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8021A82C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021A830: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021A834: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021A838: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A83C: jal         0x8021F35C
    // 0x8021A840: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_11;
    // 0x8021A840: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x8021A844: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8021A848: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8021A84C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8021A850: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x8021A854: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8021A858: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8021A85C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8021A860: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8021A864: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021A868: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021A86C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021A870: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A874: jal         0x8021F35C
    // 0x8021A878: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_12;
    // 0x8021A878: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
    // 0x8021A87C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021A880: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8021A884: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8021A888: addiu       $t3, $zero, 0x78
    ctx->r11 = ADD32(0, 0X78);
    // 0x8021A88C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8021A890: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8021A894: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8021A898: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8021A89C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021A8A0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021A8A4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021A8A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A8AC: jal         0x8021F35C
    // 0x8021A8B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_13;
    // 0x8021A8B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_13:
    // 0x8021A8B4: jal         0x8021FCD0
    // 0x8021A8B8: nop

    func_8021FCD0(rdram, ctx);
        goto after_14;
    // 0x8021A8B8: nop

    after_14:
    // 0x8021A8BC: jal         0x8021F4E4
    // 0x8021A8C0: nop

    func_8021F4E4(rdram, ctx);
        goto after_15;
    // 0x8021A8C0: nop

    after_15:
    // 0x8021A8C4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021A8C8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8021A8CC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8021A8D0: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x8021A8D4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8021A8D8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8021A8DC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8021A8E0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8021A8E4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021A8E8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021A8EC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021A8F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A8F4: jal         0x8021F35C
    // 0x8021A8F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_16;
    // 0x8021A8F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_16:
    // 0x8021A8FC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8021A900: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8021A904: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021A908: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x8021A90C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8021A910: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8021A914: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8021A918: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8021A91C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021A920: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021A924: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021A928: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A92C: jal         0x8021F35C
    // 0x8021A930: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_17;
    // 0x8021A930: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
    // 0x8021A934: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8021A938: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8021A93C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021A940: addiu       $t5, $zero, 0x78
    ctx->r13 = ADD32(0, 0X78);
    // 0x8021A944: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8021A948: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8021A94C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8021A950: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8021A954: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021A958: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021A95C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021A960: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A964: jal         0x8021F35C
    // 0x8021A968: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_18;
    // 0x8021A968: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_18:
    // 0x8021A96C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8021A970: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8021A974: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8021A978: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x8021A97C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8021A980: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8021A984: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8021A988: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8021A98C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021A990: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021A994: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021A998: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A99C: jal         0x8021F35C
    // 0x8021A9A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_19;
    // 0x8021A9A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_19:
    // 0x8021A9A4: jal         0x8021FCD0
    // 0x8021A9A8: nop

    func_8021FCD0(rdram, ctx);
        goto after_20;
    // 0x8021A9A8: nop

    after_20:
    // 0x8021A9AC: jal         0x8021F4E4
    // 0x8021A9B0: nop

    func_8021F4E4(rdram, ctx);
        goto after_21;
    // 0x8021A9B0: nop

    after_21:
    // 0x8021A9B4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021A9B8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8021A9BC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8021A9C0: addiu       $t3, $zero, 0x78
    ctx->r11 = ADD32(0, 0X78);
    // 0x8021A9C4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8021A9C8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8021A9CC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8021A9D0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8021A9D4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021A9D8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021A9DC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021A9E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A9E4: jal         0x8021F35C
    // 0x8021A9E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_22;
    // 0x8021A9E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_22:
    // 0x8021A9EC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021A9F0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8021A9F4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8021A9F8: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x8021A9FC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8021AA00: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8021AA04: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8021AA08: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8021AA0C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021AA10: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021AA14: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021AA18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021AA1C: jal         0x8021F35C
    // 0x8021AA20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_23;
    // 0x8021AA20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_23:
    // 0x8021AA24: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8021AA28: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8021AA2C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021AA30: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x8021AA34: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8021AA38: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8021AA3C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8021AA40: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8021AA44: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021AA48: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021AA4C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021AA50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021AA54: jal         0x8021F35C
    // 0x8021AA58: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_24;
    // 0x8021AA58: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_24:
    // 0x8021AA5C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8021AA60: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8021AA64: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021AA68: addiu       $t5, $zero, 0x78
    ctx->r13 = ADD32(0, 0X78);
    // 0x8021AA6C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8021AA70: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8021AA74: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8021AA78: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8021AA7C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021AA80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021AA84: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021AA88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021AA8C: jal         0x8021F35C
    // 0x8021AA90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_25;
    // 0x8021AA90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_25:
    // 0x8021AA94: jal         0x8021FCD0
    // 0x8021AA98: nop

    func_8021FCD0(rdram, ctx);
        goto after_26;
    // 0x8021AA98: nop

    after_26:
    // 0x8021AA9C: jal         0x8021F4E4
    // 0x8021AAA0: nop

    func_8021F4E4(rdram, ctx);
        goto after_27;
    // 0x8021AAA0: nop

    after_27:
    // 0x8021AAA4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8021AAA8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8021AAAC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8021AAB0: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x8021AAB4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8021AAB8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8021AABC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8021AAC0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8021AAC4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021AAC8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021AACC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021AAD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021AAD4: jal         0x8021F35C
    // 0x8021AAD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_28;
    // 0x8021AAD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_28:
    // 0x8021AADC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021AAE0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8021AAE4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8021AAE8: addiu       $t3, $zero, 0x78
    ctx->r11 = ADD32(0, 0X78);
    // 0x8021AAEC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8021AAF0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8021AAF4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8021AAF8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8021AAFC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021AB00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021AB04: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021AB08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021AB0C: jal         0x8021F35C
    // 0x8021AB10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_29;
    // 0x8021AB10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_29:
    // 0x8021AB14: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021AB18: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8021AB1C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8021AB20: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x8021AB24: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8021AB28: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8021AB2C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8021AB30: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8021AB34: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021AB38: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021AB3C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021AB40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021AB44: jal         0x8021F35C
    // 0x8021AB48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_30;
    // 0x8021AB48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_30:
    // 0x8021AB4C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8021AB50: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8021AB54: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021AB58: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x8021AB5C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8021AB60: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8021AB64: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8021AB68: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8021AB6C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021AB70: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021AB74: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021AB78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021AB7C: jal         0x8021F35C
    // 0x8021AB80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_31;
    // 0x8021AB80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_31:
    // 0x8021AB84: jal         0x8021FCD0
    // 0x8021AB88: nop

    func_8021FCD0(rdram, ctx);
        goto after_32;
    // 0x8021AB88: nop

    after_32:
    // 0x8021AB8C: jal         0x8021F4E4
    // 0x8021AB90: nop

    func_8021F4E4(rdram, ctx);
        goto after_33;
    // 0x8021AB90: nop

    after_33:
    // 0x8021AB94: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8021AB98: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8021AB9C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021ABA0: addiu       $t5, $zero, 0x78
    ctx->r13 = ADD32(0, 0X78);
    // 0x8021ABA4: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8021ABA8: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8021ABAC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8021ABB0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8021ABB4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021ABB8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021ABBC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021ABC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021ABC4: jal         0x8021F35C
    // 0x8021ABC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_34;
    // 0x8021ABC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_34:
    // 0x8021ABCC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8021ABD0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8021ABD4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8021ABD8: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x8021ABDC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8021ABE0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8021ABE4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8021ABE8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8021ABEC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021ABF0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021ABF4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021ABF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021ABFC: jal         0x8021F35C
    // 0x8021AC00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_35;
    // 0x8021AC00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_35:
    // 0x8021AC04: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021AC08: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8021AC0C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8021AC10: addiu       $t3, $zero, 0x78
    ctx->r11 = ADD32(0, 0X78);
    // 0x8021AC14: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8021AC18: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8021AC1C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8021AC20: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8021AC24: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021AC28: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021AC2C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021AC30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021AC34: jal         0x8021F35C
    // 0x8021AC38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_36;
    // 0x8021AC38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_36:
    // 0x8021AC3C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021AC40: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8021AC44: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8021AC48: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x8021AC4C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8021AC50: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8021AC54: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8021AC58: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8021AC5C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021AC60: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021AC64: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021AC68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021AC6C: jal         0x8021F35C
    // 0x8021AC70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_37;
    // 0x8021AC70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_37:
    // 0x8021AC74: jal         0x8021FCD0
    // 0x8021AC78: nop

    func_8021FCD0(rdram, ctx);
        goto after_38;
    // 0x8021AC78: nop

    after_38:
    // 0x8021AC7C: jal         0x8022337C
    // 0x8021AC80: nop

    func_8022337C(rdram, ctx);
        goto after_39;
    // 0x8021AC80: nop

    after_39:
    // 0x8021AC84: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8021AC88: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x8021AC8C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x8021AC90: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x8021AC94: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x8021AC98: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x8021AC9C: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x8021ACA0: jr          $ra
    // 0x8021ACA4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8021ACA4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80249AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249AA0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80249AA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80249AA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80249AAC: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80249AB0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80249AB4: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x80249AB8: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x80249ABC: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80249AC0: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x80249AC4: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x80249AC8: or          $t3, $a3, $zero
    ctx->r11 = ctx->r7 | 0;
    // 0x80249ACC: beq         $at, $zero, L_80249AD8
    if (ctx->r1 == 0) {
        // 0x80249AD0: addu        $t1, $v0, $t6
        ctx->r9 = ADD32(ctx->r2, ctx->r14);
            goto L_80249AD8;
    }
    // 0x80249AD0: addu        $t1, $v0, $t6
    ctx->r9 = ADD32(ctx->r2, ctx->r14);
    // 0x80249AD4: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
L_80249AD8:
    // 0x80249AD8: sll         $a2, $t3, 1
    ctx->r6 = S32(ctx->r11 << 1);
    // 0x80249ADC: addu        $a3, $a2, $a1
    ctx->r7 = ADD32(ctx->r6, ctx->r5);
    // 0x80249AE0: sltu        $at, $t1, $a3
    ctx->r1 = ctx->r9 < ctx->r7 ? 1 : 0;
    // 0x80249AE4: beq         $at, $zero, L_80249BD8
    if (ctx->r1 == 0) {
        // 0x80249AE8: addiu       $s0, $t0, 0x8
        ctx->r16 = ADD32(ctx->r8, 0X8);
            goto L_80249BD8;
    }
    // 0x80249AE8: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x80249AEC: subu        $t3, $t1, $a1
    ctx->r11 = SUB32(ctx->r9, ctx->r5);
    // 0x80249AF0: sra         $t8, $t3, 1
    ctx->r24 = S32(SIGNED(ctx->r11) >> 1);
    // 0x80249AF4: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x80249AF8: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x80249AFC: sll         $t3, $t8, 1
    ctx->r11 = S32(ctx->r24 << 1);
    // 0x80249B00: andi        $t8, $t3, 0xFFFF
    ctx->r24 = ctx->r11 & 0XFFFF;
    // 0x80249B04: sll         $t7, $t5, 16
    ctx->r15 = S32(ctx->r13 << 16);
    // 0x80249B08: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x80249B0C: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x80249B10: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x80249B14: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x80249B18: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x80249B1C: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x80249B20: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x80249B24: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x80249B28: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80249B2C: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x80249B30: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x80249B34: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x80249B38: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x80249B3C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80249B40: jal         0x802375F0
    // 0x80249B44: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_802375F0(rdram, ctx);
        goto after_0;
    // 0x80249B44: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80249B48: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80249B4C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80249B50: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80249B54: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80249B58: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x80249B5C: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x80249B60: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80249B64: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x80249B68: sw          $v0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r2;
    // 0x80249B6C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80249B70: subu        $t7, $a3, $t1
    ctx->r15 = SUB32(ctx->r7, ctx->r9);
    // 0x80249B74: addu        $t9, $t3, $t5
    ctx->r25 = ADD32(ctx->r11, ctx->r13);
    // 0x80249B78: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x80249B7C: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x80249B80: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80249B84: andi        $t7, $t9, 0xFFFF
    ctx->r15 = ctx->r25 & 0XFFFF;
    // 0x80249B88: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80249B8C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80249B90: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80249B94: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80249B98: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x80249B9C: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80249BA0: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    // 0x80249BA4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80249BA8: jal         0x802375F0
    // 0x80249BAC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    func_802375F0(rdram, ctx);
        goto after_1;
    // 0x80249BAC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    after_1:
    // 0x80249BB0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80249BB4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80249BB8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80249BBC: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x80249BC0: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80249BC4: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80249BC8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80249BCC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80249BD0: b           L_80249C14
    // 0x80249BD4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_80249C14;
    // 0x80249BD4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80249BD8:
    // 0x80249BD8: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x80249BDC: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80249BE0: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x80249BE4: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80249BE8: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80249BEC: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x80249BF0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80249BF4: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x80249BF8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80249BFC: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x80249C00: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80249C04: jal         0x802375F0
    // 0x80249C08: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_802375F0(rdram, ctx);
        goto after_2;
    // 0x80249C08: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x80249C0C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80249C10: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_80249C14:
    // 0x80249C14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80249C18: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80249C1C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80249C20: jr          $ra
    // 0x80249C24: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80249C24: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80222AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222AA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80222AAC: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x80222AB0: lw          $t8, 0x4398($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4398);
    // 0x80222AB4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80222AB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80222ABC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80222AC0: sll         $t7, $a0, 5
    ctx->r15 = S32(ctx->r4 << 5);
    // 0x80222AC4: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80222AC8: jal         0x802228FC
    // 0x80222ACC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_802228FC(rdram, ctx);
        goto after_0;
    // 0x80222ACC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x80222AD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80222AD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80222AD8: jr          $ra
    // 0x80222ADC: nop

    return;
    // 0x80222ADC: nop

;}
RECOMP_FUNC void func_8023D354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D354: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8023D358: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8023D35C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023D360: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023D364: ld          $t7, 0x8($sp)
    ctx->r15 = LD(ctx->r29, 0X8);
    // 0x8023D368: ld          $t6, 0x0($sp)
    ctx->r14 = LD(ctx->r29, 0X0);
    // 0x8023D36C: dsrav       $v0, $t6, $t7
    ctx->r2 = SIGNED(ctx->r14) >> (ctx->r15 & 63);
    // 0x8023D370: dsll32      $v1, $v0, 0
    ctx->r3 = ctx->r2 << (0 + 32);
    // 0x8023D374: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x8023D378: jr          $ra
    // 0x8023D37C: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x8023D37C: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void func_80243ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80243ED4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80243ED8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80243EDC: lw          $t6, 0x48($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X48);
    // 0x80243EE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80243EE4: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80243EE8: bne         $t6, $at, L_80243EF8
    if (ctx->r14 != ctx->r1) {
        // 0x80243EEC: nop
    
            goto L_80243EF8;
    }
    // 0x80243EEC: nop

    // 0x80243EF0: bnel        $s5, $zero, L_80243F04
    if (ctx->r21 != 0) {
        // 0x80243EF4: sw          $t0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r8;
            goto L_80243F04;
    }
    goto skip_0;
    // 0x80243EF4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    skip_0:
L_80243EF8:
    // 0x80243EF8: b           L_8024415C
    // 0x80243EFC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_8024415C;
    // 0x80243EFC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80243F00: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
L_80243F04:
    // 0x80243F04: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x80243F08: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80243F0C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80243F10: jalr        $t9
    // 0x80243F14: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80243F14: nop

    after_0:
    // 0x80243F18: lh          $t7, 0x0($s6)
    ctx->r15 = MEM_H(ctx->r22, 0X0);
    // 0x80243F1C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80243F20: sll         $s7, $s5, 1
    ctx->r23 = S32(ctx->r21 << 1);
    // 0x80243F24: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80243F28: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x80243F2C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80243F30: lh          $t9, 0x0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X0);
    // 0x80243F34: lui         $at, 0x808
    ctx->r1 = S32(0X808 << 16);
    // 0x80243F38: addiu       $s4, $v0, 0x10
    ctx->r20 = ADD32(ctx->r2, 0X10);
    // 0x80243F3C: addiu       $t8, $t9, 0x440
    ctx->r24 = ADD32(ctx->r25, 0X440);
    // 0x80243F40: sll         $t6, $t8, 16
    ctx->r14 = S32(ctx->r24 << 16);
    // 0x80243F44: andi        $t9, $s7, 0xFFFF
    ctx->r25 = ctx->r23 & 0XFFFF;
    // 0x80243F48: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x80243F4C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80243F50: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x80243F54: addiu       $t6, $t8, 0x580
    ctx->r14 = ADD32(ctx->r24, 0X580);
    // 0x80243F58: andi        $t9, $t6, 0xFFFF
    ctx->r25 = ctx->r14 & 0XFFFF;
    // 0x80243F5C: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x80243F60: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x80243F64: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x80243F68: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x80243F6C: addiu       $t8, $v1, 0x800
    ctx->r24 = ADD32(ctx->r3, 0X800);
    // 0x80243F70: andi        $t6, $t8, 0xFFFF
    ctx->r14 = ctx->r24 & 0XFFFF;
    // 0x80243F74: addiu       $t7, $v1, 0x6C0
    ctx->r15 = ADD32(ctx->r3, 0X6C0);
    // 0x80243F78: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x80243F7C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80243F80: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x80243F84: lw          $t7, 0x38($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X38);
    // 0x80243F88: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x80243F8C: beql        $t7, $zero, L_8024412C
    if (ctx->r15 == 0) {
        // 0x80243F90: lui         $t7, 0x308
        ctx->r15 = S32(0X308 << 16);
            goto L_8024412C;
    }
    goto skip_1;
    // 0x80243F90: lui         $t7, 0x308
    ctx->r15 = S32(0X308 << 16);
    skip_1:
    // 0x80243F94: lh          $t6, 0x18($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X18);
    // 0x80243F98: sw          $zero, 0x38($s3)
    MEM_W(0X38, ctx->r19) = 0;
    // 0x80243F9C: lh          $t7, 0x1A($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X1A);
    // 0x80243FA0: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x80243FA4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80243FA8: lh          $t9, 0x1910($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X1910);
    // 0x80243FAC: lw          $a0, 0x34($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X34);
    // 0x80243FB0: addiu       $s1, $s3, 0x24
    ctx->r17 = ADD32(ctx->r19, 0X24);
    // 0x80243FB4: multu       $t9, $t7
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80243FB8: lh          $t9, 0x1C($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X1C);
    // 0x80243FBC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80243FC0: nop

    // 0x80243FC4: cvt.d.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.d = CVT_D_W(ctx->f4.u32l);
    // 0x80243FC8: mflo        $t6
    ctx->r14 = lo;
    // 0x80243FCC: sra         $t8, $t6, 15
    ctx->r24 = S32(SIGNED(ctx->r14) >> 15);
    // 0x80243FD0: sh          $t8, 0x28($s3)
    MEM_H(0X28, ctx->r19) = ctx->r24;
    // 0x80243FD4: lh          $t7, 0x28($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X28);
    // 0x80243FD8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80243FDC: jal         0x80243D04
    // 0x80243FE0: cvt.d.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.d = CVT_D_W(ctx->f6.u32l);
    func_80243D04(rdram, ctx);
        goto after_1;
    // 0x80243FE0: cvt.d.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.d = CVT_D_W(ctx->f6.u32l);
    after_1:
    // 0x80243FE4: lh          $t6, 0x18($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X18);
    // 0x80243FE8: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80243FEC: sh          $v0, 0x26($s3)
    MEM_H(0X26, ctx->r19) = ctx->r2;
    // 0x80243FF0: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x80243FF4: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x80243FF8: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x80243FFC: lh          $t7, 0x1A0E($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X1A0E);
    // 0x80244000: lh          $t6, 0x1A($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X1A);
    // 0x80244004: lw          $a0, 0x34($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X34);
    // 0x80244008: addiu       $s1, $s3, 0x2A
    ctx->r17 = ADD32(ctx->r19, 0X2A);
    // 0x8024400C: multu       $t7, $t6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80244010: lh          $t7, 0x1E($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X1E);
    // 0x80244014: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80244018: nop

    // 0x8024401C: cvt.d.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
    // 0x80244020: mflo        $t8
    ctx->r24 = lo;
    // 0x80244024: sra         $t9, $t8, 15
    ctx->r25 = S32(SIGNED(ctx->r24) >> 15);
    // 0x80244028: sh          $t9, 0x2E($s3)
    MEM_H(0X2E, ctx->r19) = ctx->r25;
    // 0x8024402C: lh          $t6, 0x2E($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X2E);
    // 0x80244030: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80244034: jal         0x80243D04
    // 0x80244038: cvt.d.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.d = CVT_D_W(ctx->f10.u32l);
    func_80243D04(rdram, ctx);
        goto after_2;
    // 0x80244038: cvt.d.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.d = CVT_D_W(ctx->f10.u32l);
    after_2:
    // 0x8024403C: lh          $t8, 0x1C($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X1C);
    // 0x80244040: sh          $v0, 0x2C($s3)
    MEM_H(0X2C, ctx->r19) = ctx->r2;
    // 0x80244044: or          $v1, $s4, $zero
    ctx->r3 = ctx->r20 | 0;
    // 0x80244048: lui         $at, 0x906
    ctx->r1 = S32(0X906 << 16);
    // 0x8024404C: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80244050: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x80244054: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80244058: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8024405C: lh          $t6, 0x1E($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X1E);
    // 0x80244060: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80244064: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80244068: lui         $at, 0x904
    ctx->r1 = S32(0X904 << 16);
    // 0x8024406C: andi        $t8, $t6, 0xFFFF
    ctx->r24 = ctx->r14 & 0XFFFF;
    // 0x80244070: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80244074: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80244078: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8024407C: lh          $t7, 0x28($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X28);
    // 0x80244080: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80244084: lui         $at, 0x902
    ctx->r1 = S32(0X902 << 16);
    // 0x80244088: andi        $t6, $t7, 0xFFFF
    ctx->r14 = ctx->r15 & 0XFFFF;
    // 0x8024408C: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x80244090: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80244094: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80244098: lh          $t7, 0x26($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X26);
    // 0x8024409C: lhu         $t9, 0x24($s3)
    ctx->r25 = MEM_HU(ctx->r19, 0X24);
    // 0x802440A0: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x802440A4: sll         $t6, $t7, 16
    ctx->r14 = S32(ctx->r15 << 16);
    // 0x802440A8: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x802440AC: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x802440B0: lh          $t8, 0x2E($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X2E);
    // 0x802440B4: lui         $at, 0x900
    ctx->r1 = S32(0X900 << 16);
    // 0x802440B8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x802440BC: andi        $t6, $t8, 0xFFFF
    ctx->r14 = ctx->r24 & 0XFFFF;
    // 0x802440C0: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x802440C4: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x802440C8: lh          $t8, 0x2C($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X2C);
    // 0x802440CC: lhu         $t7, 0x2A($s3)
    ctx->r15 = MEM_HU(ctx->r19, 0X2A);
    // 0x802440D0: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x802440D4: sll         $t6, $t8, 16
    ctx->r14 = S32(ctx->r24 << 16);
    // 0x802440D8: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x802440DC: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x802440E0: lh          $t9, 0x20($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X20);
    // 0x802440E4: lui         $at, 0x908
    ctx->r1 = S32(0X908 << 16);
    // 0x802440E8: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x802440EC: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x802440F0: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x802440F4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802440F8: lh          $t8, 0x22($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X22);
    // 0x802440FC: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80244100: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x80244104: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80244108: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8024410C: lui         $t6, 0x309
    ctx->r14 = S32(0X309 << 16);
    // 0x80244110: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80244114: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x80244118: jal         0x802375F0
    // 0x8024411C: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    func_802375F0(rdram, ctx);
        goto after_3;
    // 0x8024411C: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    after_3:
    // 0x80244120: b           L_80244140
    // 0x80244124: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
        goto L_80244140;
    // 0x80244124: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80244128: lui         $t7, 0x308
    ctx->r15 = S32(0X308 << 16);
L_8024412C:
    // 0x8024412C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80244130: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x80244134: jal         0x802375F0
    // 0x80244138: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    func_802375F0(rdram, ctx);
        goto after_4;
    // 0x80244138: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    after_4:
    // 0x8024413C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_80244140:
    // 0x80244140: lh          $t8, 0x0($s6)
    ctx->r24 = MEM_H(ctx->r22, 0X0);
    // 0x80244144: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x80244148: addu        $t9, $t8, $s7
    ctx->r25 = ADD32(ctx->r24, ctx->r23);
    // 0x8024414C: sh          $t9, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r25;
    // 0x80244150: lw          $t6, 0x30($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X30);
    // 0x80244154: addu        $t7, $t6, $s5
    ctx->r15 = ADD32(ctx->r14, ctx->r21);
    // 0x80244158: sw          $t7, 0x30($s3)
    MEM_W(0X30, ctx->r19) = ctx->r15;
L_8024415C:
    // 0x8024415C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80244160: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80244164: jr          $ra
    // 0x80244168: nop

    return;
    // 0x80244168: nop

;}
RECOMP_FUNC void func_80234C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234C30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234C34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234C38: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80234C3C: jal         0x80234BE4
    // 0x80234C40: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80234BE4(rdram, ctx);
        goto after_0;
    // 0x80234C40: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80234C44: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80234C48: jal         0x80234B80
    // 0x80234C4C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80234B80(rdram, ctx);
        goto after_1;
    // 0x80234C4C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80234C50: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80234C54: jal         0x80234B80
    // 0x80234C58: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_80234B80(rdram, ctx);
        goto after_2;
    // 0x80234C58: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80234C5C: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80234C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234C64: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80234C68: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80234C6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80234C70: jr          $ra
    // 0x80234C74: div.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    return;
    // 0x80234C74: div.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
;}
RECOMP_FUNC void func_80223914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223914: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80223918: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8022391C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80223920: jr          $ra
    // 0x80223924: lw          $v0, 0x5118($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5118);
    return;
    // 0x80223924: lw          $v0, 0x5118($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5118);
;}
RECOMP_FUNC void func_8022B5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B5E0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022B5E4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8022B5E8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8022B5EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8022B5F0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8022B5F4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8022B5F8: beq         $a1, $at, L_8022B638
    if (ctx->r5 == ctx->r1) {
        // 0x8022B5FC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_8022B638;
    }
    // 0x8022B5FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022B600: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8022B604: beq         $a1, $at, L_8022B638
    if (ctx->r5 == ctx->r1) {
        // 0x8022B608: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8022B638;
    }
    // 0x8022B608: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8022B60C: beq         $a1, $at, L_8022B638
    if (ctx->r5 == ctx->r1) {
        // 0x8022B610: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8022B638;
    }
    // 0x8022B610: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8022B614: beq         $a1, $at, L_8022B638
    if (ctx->r5 == ctx->r1) {
        // 0x8022B618: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_8022B638;
    }
    // 0x8022B618: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022B61C: jal         0x80231A24
    // 0x8022B620: addiu       $a0, $a0, 0x4030
    ctx->r4 = ADD32(ctx->r4, 0X4030);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022B620: addiu       $a0, $a0, 0x4030
    ctx->r4 = ADD32(ctx->r4, 0X4030);
    after_0:
    // 0x8022B624: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x8022B628: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x8022B62C: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x8022B630: b           L_8022B764
    // 0x8022B634: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
        goto L_8022B764;
    // 0x8022B634: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
L_8022B638:
    // 0x8022B638: sll         $t8, $s1, 0
    ctx->r24 = S32(ctx->r17 << 0);
    // 0x8022B63C: bgez        $t8, L_8022B744
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8022B640: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_8022B744;
    }
    // 0x8022B640: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8022B644: lbu         $t9, 0x0($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X0);
    // 0x8022B648: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x8022B64C: sltiu       $at, $s0, 0x2
    ctx->r1 = ctx->r16 < 0X2 ? 1 : 0;
    // 0x8022B650: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x8022B654: bne         $at, $zero, L_8022B688
    if (ctx->r1 != 0) {
        // 0x8022B658: sw          $t9, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r25;
            goto L_8022B688;
    }
    // 0x8022B658: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8022B65C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8022B660: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x8022B664: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8022B668: jal         0x8023D164
    // 0x8022B66C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_8023D164(rdram, ctx);
        goto after_1;
    // 0x8022B66C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_1:
    // 0x8022B670: lbu         $t2, 0x1($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X1);
    // 0x8022B674: sra         $t4, $t2, 31
    ctx->r12 = S32(SIGNED(ctx->r10) >> 31);
    // 0x8022B678: or          $t6, $t4, $v0
    ctx->r14 = ctx->r12 | ctx->r2;
    // 0x8022B67C: or          $t7, $t2, $v1
    ctx->r15 = ctx->r10 | ctx->r3;
    // 0x8022B680: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x8022B684: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
L_8022B688:
    // 0x8022B688: sltiu       $at, $s0, 0x3
    ctx->r1 = ctx->r16 < 0X3 ? 1 : 0;
    // 0x8022B68C: bne         $at, $zero, L_8022B6D0
    if (ctx->r1 != 0) {
        // 0x8022B690: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_8022B6D0;
    }
    // 0x8022B690: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8022B694: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8022B698: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8022B69C: jal         0x8023D164
    // 0x8022B6A0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8023D164(rdram, ctx);
        goto after_2;
    // 0x8022B6A0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_2:
    // 0x8022B6A4: lbu         $t3, 0x3($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X3);
    // 0x8022B6A8: lbu         $t2, 0x2($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X2);
    // 0x8022B6AC: sra         $t8, $t3, 31
    ctx->r24 = S32(SIGNED(ctx->r11) >> 31);
    // 0x8022B6B0: sll         $t4, $t2, 8
    ctx->r12 = S32(ctx->r10 << 8);
    // 0x8022B6B4: sra         $t6, $t4, 31
    ctx->r14 = S32(SIGNED(ctx->r12) >> 31);
    // 0x8022B6B8: or          $t0, $t8, $v0
    ctx->r8 = ctx->r24 | ctx->r2;
    // 0x8022B6BC: or          $t1, $t3, $v1
    ctx->r9 = ctx->r11 | ctx->r3;
    // 0x8022B6C0: or          $t9, $t1, $t4
    ctx->r25 = ctx->r9 | ctx->r12;
    // 0x8022B6C4: or          $t8, $t0, $t6
    ctx->r24 = ctx->r8 | ctx->r14;
    // 0x8022B6C8: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x8022B6CC: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
L_8022B6D0:
    // 0x8022B6D0: sltiu       $at, $s0, 0x5
    ctx->r1 = ctx->r16 < 0X5 ? 1 : 0;
    // 0x8022B6D4: bne         $at, $zero, L_8022B764
    if (ctx->r1 != 0) {
        // 0x8022B6D8: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_8022B764;
    }
    // 0x8022B6D8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8022B6DC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8022B6E0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8022B6E4: jal         0x8023D164
    // 0x8022B6E8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8023D164(rdram, ctx);
        goto after_3;
    // 0x8022B6E8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_3:
    // 0x8022B6EC: lbu         $t5, 0x7($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X7);
    // 0x8022B6F0: lbu         $t0, 0x4($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X4);
    // 0x8022B6F4: sra         $t2, $t5, 31
    ctx->r10 = S32(SIGNED(ctx->r13) >> 31);
    // 0x8022B6F8: or          $t4, $t2, $v0
    ctx->r12 = ctx->r10 | ctx->r2;
    // 0x8022B6FC: sll         $t1, $t0, 24
    ctx->r9 = S32(ctx->r8 << 24);
    // 0x8022B700: lbu         $t2, 0x5($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X5);
    // 0x8022B704: sra         $t6, $t1, 31
    ctx->r14 = S32(SIGNED(ctx->r9) >> 31);
    // 0x8022B708: or          $t8, $t4, $t6
    ctx->r24 = ctx->r12 | ctx->r14;
    // 0x8022B70C: lbu         $t6, 0x6($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X6);
    // 0x8022B710: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x8022B714: or          $t5, $t5, $v1
    ctx->r13 = ctx->r13 | ctx->r3;
    // 0x8022B718: or          $t9, $t5, $t1
    ctx->r25 = ctx->r13 | ctx->r9;
    // 0x8022B71C: sra         $t0, $t3, 31
    ctx->r8 = S32(SIGNED(ctx->r11) >> 31);
    // 0x8022B720: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x8022B724: sra         $t2, $t7, 31
    ctx->r10 = S32(SIGNED(ctx->r15) >> 31);
    // 0x8022B728: or          $t4, $t8, $t0
    ctx->r12 = ctx->r24 | ctx->r8;
    // 0x8022B72C: or          $t5, $t9, $t3
    ctx->r13 = ctx->r25 | ctx->r11;
    // 0x8022B730: or          $t9, $t5, $t7
    ctx->r25 = ctx->r13 | ctx->r15;
    // 0x8022B734: or          $t8, $t4, $t2
    ctx->r24 = ctx->r12 | ctx->r10;
    // 0x8022B738: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x8022B73C: b           L_8022B764
    // 0x8022B740: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
        goto L_8022B764;
    // 0x8022B740: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
L_8022B744:
    // 0x8022B744: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022B748: jal         0x8022B460
    // 0x8022B74C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_8022B460(rdram, ctx);
        goto after_4;
    // 0x8022B74C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x8022B750: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8022B754: jal         0x8022B5E0
    // 0x8022B758: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8022B5E0(rdram, ctx);
        goto after_5;
    // 0x8022B758: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x8022B75C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8022B760: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
L_8022B764:
    // 0x8022B764: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B768: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x8022B76C: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x8022B770: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8022B774: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8022B778: jr          $ra
    // 0x8022B77C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8022B77C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80203464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80203464: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80203468: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8020346C: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x80203470: sll         $s0, $a2, 2
    ctx->r16 = S32(ctx->r6 << 2);
    // 0x80203474: subu        $s0, $s0, $a2
    ctx->r16 = SUB32(ctx->r16, ctx->r6);
    // 0x80203478: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x8020347C: subu        $s0, $s0, $a2
    ctx->r16 = SUB32(ctx->r16, ctx->r6);
    // 0x80203480: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80203484: lw          $t6, 0x6DE4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6DE4);
    // 0x80203488: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x8020348C: addu        $s0, $s0, $a2
    ctx->r16 = ADD32(ctx->r16, ctx->r6);
    // 0x80203490: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80203494: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x80203498: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8020349C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802034A0: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x802034A4: lbu         $a1, 0xAD($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0XAD);
    // 0x802034A8: jal         0x802011D0
    // 0x802034AC: addiu       $a0, $a0, 0x2474
    ctx->r4 = ADD32(ctx->r4, 0X2474);
    func_802011D0(rdram, ctx);
        goto after_0;
    // 0x802034AC: addiu       $a0, $a0, 0x2474
    ctx->r4 = ADD32(ctx->r4, 0X2474);
    after_0:
    // 0x802034B0: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x802034B4: lw          $t8, 0x6DE4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6DE4);
    // 0x802034B8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802034BC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802034C0: addu        $v0, $t8, $s0
    ctx->r2 = ADD32(ctx->r24, ctx->r16);
    // 0x802034C4: lbu         $v1, 0xAD($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XAD);
    // 0x802034C8: addiu       $a1, $a1, 0x24C8
    ctx->r5 = ADD32(ctx->r5, 0X24C8);
    // 0x802034CC: addiu       $a0, $a0, 0x2498
    ctx->r4 = ADD32(ctx->r4, 0X2498);
    // 0x802034D0: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x802034D4: bne         $at, $zero, L_802034F4
    if (ctx->r1 != 0) {
        // 0x802034D8: nop
    
            goto L_802034F4;
    }
    // 0x802034D8: nop

    // 0x802034DC: jal         0x80231C9C
    // 0x802034E0: addiu       $a2, $zero, 0x453
    ctx->r6 = ADD32(0, 0X453);
    func_80231C9C(rdram, ctx);
        goto after_1;
    // 0x802034E0: addiu       $a2, $zero, 0x453
    ctx->r6 = ADD32(0, 0X453);
    after_1:
    // 0x802034E4: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x802034E8: lw          $t9, 0x6DE4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6DE4);
    // 0x802034EC: addu        $v0, $t9, $s0
    ctx->r2 = ADD32(ctx->r25, ctx->r16);
    // 0x802034F0: lbu         $v1, 0xAD($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XAD);
L_802034F4:
    // 0x802034F4: lui         $t0, 0x8026
    ctx->r8 = S32(0X8026 << 16);
    // 0x802034F8: lw          $t0, -0x4678($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4678);
    // 0x802034FC: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
    // 0x80203500: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203504: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80203508: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x8020350C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80203510: addiu       $a1, $a1, 0x24FC
    ctx->r5 = ADD32(ctx->r5, 0X24FC);
    // 0x80203514: bgez        $t3, L_80203530
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80203518: addiu       $a0, $a0, 0x24D0
        ctx->r4 = ADD32(ctx->r4, 0X24D0);
            goto L_80203530;
    }
    // 0x80203518: addiu       $a0, $a0, 0x24D0
    ctx->r4 = ADD32(ctx->r4, 0X24D0);
    // 0x8020351C: jal         0x80231C9C
    // 0x80203520: addiu       $a2, $zero, 0x454
    ctx->r6 = ADD32(0, 0X454);
    func_80231C9C(rdram, ctx);
        goto after_2;
    // 0x80203520: addiu       $a2, $zero, 0x454
    ctx->r6 = ADD32(0, 0X454);
    after_2:
    // 0x80203524: lui         $t4, 0x8025
    ctx->r12 = S32(0X8025 << 16);
    // 0x80203528: lw          $t4, 0x6DE4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6DE4);
    // 0x8020352C: addu        $v0, $t4, $s0
    ctx->r2 = ADD32(ctx->r12, ctx->r16);
L_80203530:
    // 0x80203530: lbu         $t5, 0xAE($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XAE);
    // 0x80203534: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203538: addiu       $a0, $a0, 0x2504
    ctx->r4 = ADD32(ctx->r4, 0X2504);
    // 0x8020353C: slti        $at, $t5, 0x80
    ctx->r1 = SIGNED(ctx->r13) < 0X80 ? 1 : 0;
    // 0x80203540: beq         $at, $zero, L_80203564
    if (ctx->r1 == 0) {
        // 0x80203544: lui         $a1, 0x8025
        ctx->r5 = S32(0X8025 << 16);
            goto L_80203564;
    }
    // 0x80203544: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80203548: lbu         $t7, 0xAD($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XAD);
    // 0x8020354C: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x80203550: lw          $t6, -0x4678($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4678);
    // 0x80203554: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80203558: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8020355C: b           L_80203594
    // 0x80203560: lh          $a1, 0x0($t9)
    ctx->r5 = MEM_H(ctx->r25, 0X0);
        goto L_80203594;
    // 0x80203560: lh          $a1, 0x0($t9)
    ctx->r5 = MEM_H(ctx->r25, 0X0);
L_80203564:
    // 0x80203564: addiu       $a1, $a1, 0x2530
    ctx->r5 = ADD32(ctx->r5, 0X2530);
    // 0x80203568: jal         0x80231C9C
    // 0x8020356C: addiu       $a2, $zero, 0x456
    ctx->r6 = ADD32(0, 0X456);
    func_80231C9C(rdram, ctx);
        goto after_3;
    // 0x8020356C: addiu       $a2, $zero, 0x456
    ctx->r6 = ADD32(0, 0X456);
    after_3:
    // 0x80203570: lui         $t1, 0x8025
    ctx->r9 = S32(0X8025 << 16);
    // 0x80203574: lw          $t1, 0x6DE4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6DE4);
    // 0x80203578: lui         $t0, 0x8026
    ctx->r8 = S32(0X8026 << 16);
    // 0x8020357C: lw          $t0, -0x4678($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4678);
    // 0x80203580: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x80203584: lbu         $t3, 0xAD($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0XAD);
    // 0x80203588: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8020358C: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x80203590: lh          $a1, 0x0($t5)
    ctx->r5 = MEM_H(ctx->r13, 0X0);
L_80203594:
    // 0x80203594: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203598: jal         0x80234E90
    // 0x8020359C: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
    func_80234E90(rdram, ctx);
        goto after_4;
    // 0x8020359C: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
    after_4:
    // 0x802035A0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802035A4: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
    // 0x802035A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802035AC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802035B0: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x802035B4: addiu       $a1, $a1, 0x2550
    ctx->r5 = ADD32(ctx->r5, 0X2550);
    // 0x802035B8: addiu       $a2, $zero, 0x45A
    ctx->r6 = ADD32(0, 0X45A);
    // 0x802035BC: bne         $t7, $at, L_802035D8
    if (ctx->r15 != ctx->r1) {
        // 0x802035C0: nop
    
            goto L_802035D8;
    }
    // 0x802035C0: nop

    // 0x802035C4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802035C8: jal         0x80231C9C
    // 0x802035CC: addiu       $a0, $a0, 0x2538
    ctx->r4 = ADD32(ctx->r4, 0X2538);
    func_80231C9C(rdram, ctx);
        goto after_5;
    // 0x802035CC: addiu       $a0, $a0, 0x2538
    ctx->r4 = ADD32(ctx->r4, 0X2538);
    after_5:
    // 0x802035D0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802035D4: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
L_802035D8:
    // 0x802035D8: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802035DC: lw          $t6, 0x6DE4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6DE4);
    // 0x802035E0: addu        $t8, $t6, $s0
    ctx->r24 = ADD32(ctx->r14, ctx->r16);
    // 0x802035E4: jal         0x80235080
    // 0x802035E8: lh          $a1, 0xA6($t8)
    ctx->r5 = MEM_H(ctx->r24, 0XA6);
    func_80235080(rdram, ctx);
        goto after_6;
    // 0x802035E8: lh          $a1, 0xA6($t8)
    ctx->r5 = MEM_H(ctx->r24, 0XA6);
    after_6:
    // 0x802035EC: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x802035F0: lw          $t9, 0x6DE4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6DE4);
    // 0x802035F4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802035F8: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
    // 0x802035FC: addu        $t1, $t9, $s0
    ctx->r9 = ADD32(ctx->r25, ctx->r16);
    // 0x80203600: jal         0x802350E0
    // 0x80203604: lw          $a1, 0x9C($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X9C);
    func_802350E0(rdram, ctx);
        goto after_7;
    // 0x80203604: lw          $a1, 0x9C($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X9C);
    after_7:
    // 0x80203608: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x8020360C: lw          $t2, 0x6DE4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6DE4);
    // 0x80203610: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203614: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
    // 0x80203618: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x8020361C: jal         0x80235140
    // 0x80203620: lbu         $a1, 0xAF($t3)
    ctx->r5 = MEM_BU(ctx->r11, 0XAF);
    func_80235140(rdram, ctx);
        goto after_8;
    // 0x80203620: lbu         $a1, 0xAF($t3)
    ctx->r5 = MEM_BU(ctx->r11, 0XAF);
    after_8:
    // 0x80203624: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x80203628: lw          $t0, 0x6DE4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6DE4);
    // 0x8020362C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203630: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
    // 0x80203634: addu        $t4, $t0, $s0
    ctx->r12 = ADD32(ctx->r8, ctx->r16);
    // 0x80203638: jal         0x802351A0
    // 0x8020363C: lbu         $a1, 0xAE($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0XAE);
    func_802351A0(rdram, ctx);
        goto after_9;
    // 0x8020363C: lbu         $a1, 0xAE($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0XAE);
    after_9:
    // 0x80203640: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80203644: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80203648: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8020364C: jr          $ra
    // 0x80203650: nop

    return;
    // 0x80203650: nop

;}
RECOMP_FUNC void func_8023413C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023413C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80234140: lhu         $t6, 0xBEC($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XBEC);
    // 0x80234144: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234148: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023414C: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80234150: bne         $at, $zero, L_8023416C
    if (ctx->r1 != 0) {
        // 0x80234154: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_8023416C;
    }
    // 0x80234154: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80234158: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8023415C: jal         0x80231A24
    // 0x80234160: addiu       $a0, $a0, 0x5220
    ctx->r4 = ADD32(ctx->r4, 0X5220);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80234160: addiu       $a0, $a0, 0x5220
    ctx->r4 = ADD32(ctx->r4, 0X5220);
    after_0:
    // 0x80234164: b           L_802341D4
    // 0x80234168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802341D4;
    // 0x80234168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023416C:
    // 0x8023416C: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80234170: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x80234174: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80234178: lw          $t8, 0x3950($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3950);
    // 0x8023417C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80234180: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x80234184: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80234188: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    // 0x8023418C: lhu         $t9, 0xC($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0XC);
    // 0x80234190: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x80234194: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80234198: beq         $t9, $at, L_802341D0
    if (ctx->r25 == ctx->r1) {
        // 0x8023419C: addiu       $a0, $a0, 0x3B90
        ctx->r4 = ADD32(ctx->r4, 0X3B90);
            goto L_802341D0;
    }
    // 0x8023419C: addiu       $a0, $a0, 0x3B90
    ctx->r4 = ADD32(ctx->r4, 0X3B90);
    // 0x802341A0: jal         0x8023CBF0
    // 0x802341A4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8023CBF0(rdram, ctx);
        goto after_1;
    // 0x802341A4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x802341A8: jal         0x80233EA0
    // 0x802341AC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_80233EA0(rdram, ctx);
        goto after_2;
    // 0x802341AC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x802341B0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802341B4: jal         0x8023A700
    // 0x802341B8: addiu       $a0, $a0, 0x3B90
    ctx->r4 = ADD32(ctx->r4, 0X3B90);
    func_8023A700(rdram, ctx);
        goto after_3;
    // 0x802341B8: addiu       $a0, $a0, 0x3B90
    ctx->r4 = ADD32(ctx->r4, 0X3B90);
    after_3:
    // 0x802341BC: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x802341C0: lw          $t0, 0x3B90($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B90);
    // 0x802341C4: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802341C8: addiu       $t1, $t0, -0x8
    ctx->r9 = ADD32(ctx->r8, -0X8);
    // 0x802341CC: sw          $t1, 0x3B90($at)
    MEM_W(0X3B90, ctx->r1) = ctx->r9;
L_802341D0:
    // 0x802341D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802341D4:
    // 0x802341D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802341D8: jr          $ra
    // 0x802341DC: nop

    return;
    // 0x802341DC: nop

;}
RECOMP_FUNC void func_8024A8F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A8F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024A8F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024A8F8: jal         0x80241760
    // 0x8024A8FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x8024A8FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8024A900: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8024A904: lw          $t7, 0x16E0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X16E0);
    // 0x8024A908: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8024A90C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8024A910: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8024A914: addiu       $a0, $a0, 0x16D8
    ctx->r4 = ADD32(ctx->r4, 0X16D8);
    // 0x8024A918: jal         0x80241DFC
    // 0x8024A91C: sh          $t6, 0x10($t7)
    MEM_H(0X10, ctx->r15) = ctx->r14;
    func_80241DFC(rdram, ctx);
        goto after_1;
    // 0x8024A91C: sh          $t6, 0x10($t7)
    MEM_H(0X10, ctx->r15) = ctx->r14;
    after_1:
    // 0x8024A920: jal         0x80241780
    // 0x8024A924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80241780(rdram, ctx);
        goto after_2;
    // 0x8024A924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8024A928: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024A92C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024A930: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8024A934: jr          $ra
    // 0x8024A938: nop

    return;
    // 0x8024A938: nop

;}
RECOMP_FUNC void func_8023F0D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F0D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023F0D4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8023F0D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023F0DC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8023F0E0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8023F0E4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8023F0E8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8023F0EC: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x8023F0F0: jal         0x8023D1CC
    // 0x8023F0F4: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    func_8023D1CC(rdram, ctx);
        goto after_0;
    // 0x8023F0F4: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    after_0:
    // 0x8023F0F8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023F0FC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8023F100: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8023F104: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8023F108: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023F10C: jal         0x8023D228
    // 0x8023F110: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    func_8023D228(rdram, ctx);
        goto after_1;
    // 0x8023F110: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    after_1:
    // 0x8023F114: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8023F118: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8023F11C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8023F120: subu        $t8, $t6, $v0
    ctx->r24 = SUB32(ctx->r14, ctx->r2);
    // 0x8023F124: sltu        $at, $t7, $v1
    ctx->r1 = ctx->r15 < ctx->r3 ? 1 : 0;
    // 0x8023F128: subu        $t8, $t8, $at
    ctx->r24 = SUB32(ctx->r24, ctx->r1);
    // 0x8023F12C: subu        $t9, $t7, $v1
    ctx->r25 = SUB32(ctx->r15, ctx->r3);
    // 0x8023F130: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8023F134: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8023F138: bgtz        $t0, L_8023F198
    if (SIGNED(ctx->r8) > 0) {
        // 0x8023F13C: lw          $t1, 0x24($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X24);
            goto L_8023F198;
    }
    // 0x8023F13C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8023F140: bltz        $t0, L_8023F150
    if (SIGNED(ctx->r8) < 0) {
        // 0x8023F144: nop
    
            goto L_8023F150;
    }
    // 0x8023F144: nop

    // 0x8023F148: b           L_8023F19C
    // 0x8023F14C: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
        goto L_8023F19C;
    // 0x8023F14C: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
L_8023F150:
    // 0x8023F150: bltzl       $t8, L_8023F19C
    if (SIGNED(ctx->r24) < 0) {
        // 0x8023F154: addiu       $t0, $sp, 0x20
        ctx->r8 = ADD32(ctx->r29, 0X20);
            goto L_8023F19C;
    }
    goto skip_0;
    // 0x8023F154: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    skip_0:
    // 0x8023F158: bgtz        $t8, L_8023F168
    if (SIGNED(ctx->r24) > 0) {
        // 0x8023F15C: addiu       $t3, $t1, 0x1
        ctx->r11 = ADD32(ctx->r9, 0X1);
            goto L_8023F168;
    }
    // 0x8023F15C: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x8023F160: beql        $t9, $zero, L_8023F19C
    if (ctx->r25 == 0) {
        // 0x8023F164: addiu       $t0, $sp, 0x20
        ctx->r8 = ADD32(ctx->r29, 0X20);
            goto L_8023F19C;
    }
    goto skip_1;
    // 0x8023F164: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    skip_1:
L_8023F168:
    // 0x8023F168: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8023F16C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8023F170: sltiu       $at, $t3, 0x1
    ctx->r1 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x8023F174: addu        $t2, $t0, $at
    ctx->r10 = ADD32(ctx->r8, ctx->r1);
    // 0x8023F178: subu        $t6, $t8, $t4
    ctx->r14 = SUB32(ctx->r24, ctx->r12);
    // 0x8023F17C: sltu        $at, $t9, $t5
    ctx->r1 = ctx->r25 < ctx->r13 ? 1 : 0;
    // 0x8023F180: subu        $t6, $t6, $at
    ctx->r14 = SUB32(ctx->r14, ctx->r1);
    // 0x8023F184: subu        $t7, $t9, $t5
    ctx->r15 = SUB32(ctx->r25, ctx->r13);
    // 0x8023F188: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8023F18C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8023F190: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x8023F194: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
L_8023F198:
    // 0x8023F198: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
L_8023F19C:
    // 0x8023F19C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8023F1A0: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8023F1A4: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x8023F1A8: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x8023F1AC: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x8023F1B0: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x8023F1B4: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x8023F1B8: lw          $t3, 0xC($t0)
    ctx->r11 = MEM_W(ctx->r8, 0XC);
    // 0x8023F1BC: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x8023F1C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023F1C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8023F1C8: jr          $ra
    // 0x8023F1CC: nop

    return;
    // 0x8023F1CC: nop

;}
RECOMP_FUNC void func_80242B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80242B70: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80242B74: bne         $a1, $at, L_80242B98
    if (ctx->r5 != ctx->r1) {
        // 0x80242B78: lw          $v0, 0x1C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X1C);
            goto L_80242B98;
    }
    // 0x80242B78: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x80242B7C: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x80242B80: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80242B84: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80242B88: sw          $a2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r6;
    // 0x80242B8C: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x80242B90: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80242B94: sw          $t0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r8;
L_80242B98:
    // 0x80242B98: jr          $ra
    // 0x80242B9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80242B9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_802359C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802359C0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802359C4: addiu       $t8, $zero, 0x1E8
    ctx->r24 = ADD32(0, 0X1E8);
    // 0x802359C8: beql        $v0, $zero, L_802359EC
    if (ctx->r2 == 0) {
        // 0x802359CC: sw          $t8, 0x24($a0)
        MEM_W(0X24, ctx->r4) = ctx->r24;
            goto L_802359EC;
    }
    goto skip_0;
    // 0x802359CC: sw          $t8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r24;
    skip_0:
    // 0x802359D0: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802359D4: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x802359D8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802359DC: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x802359E0: jr          $ra
    // 0x802359E4: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
    return;
    // 0x802359E4: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
    // 0x802359E8: sw          $t8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r24;
L_802359EC:
    // 0x802359EC: jr          $ra
    // 0x802359F0: nop

    return;
    // 0x802359F0: nop

    // 0x802359F4: jr          $ra
    // 0x802359F8: nop

    return;
    // 0x802359F8: nop

;}
RECOMP_FUNC void func_8021E66C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E66C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8021E670: lw          $v0, -0x18F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X18F0);
    // 0x8021E674: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021E678: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021E67C: lw          $t6, 0x44($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X44);
    // 0x8021E680: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8021E684: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8021E688: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8021E68C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8021E690: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021E694: beq         $t9, $zero, L_8021E6A4
    if (ctx->r25 == 0) {
        // 0x8021E698: nop
    
            goto L_8021E6A4;
    }
    // 0x8021E698: nop

    // 0x8021E69C: b           L_8021E6B8
    // 0x8021E6A0: sw          $a0, -0x187C($at)
    MEM_W(-0X187C, ctx->r1) = ctx->r4;
        goto L_8021E6B8;
    // 0x8021E6A0: sw          $a0, -0x187C($at)
    MEM_W(-0X187C, ctx->r1) = ctx->r4;
L_8021E6A4:
    // 0x8021E6A4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021E6A8: jal         0x80231A24
    // 0x8021E6AC: addiu       $a0, $a0, 0x36A0
    ctx->r4 = ADD32(ctx->r4, 0X36A0);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021E6AC: addiu       $a0, $a0, 0x36A0
    ctx->r4 = ADD32(ctx->r4, 0X36A0);
    after_0:
    // 0x8021E6B0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8021E6B4: lw          $v0, -0x18F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X18F0);
L_8021E6B8:
    // 0x8021E6B8: lui         $t1, 0x8025
    ctx->r9 = S32(0X8025 << 16);
    // 0x8021E6BC: lw          $t1, -0x187C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X187C);
    // 0x8021E6C0: lw          $t0, 0x44($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X44);
    // 0x8021E6C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021E6C8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8021E6CC: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8021E6D0: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8021E6D4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021E6D8: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x8021E6DC: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x8021E6E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021E6E4: jr          $ra
    // 0x8021E6E8: sw          $t6, -0x1878($at)
    MEM_W(-0X1878, ctx->r1) = ctx->r14;
    return;
    // 0x8021E6E8: sw          $t6, -0x1878($at)
    MEM_W(-0X1878, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_8020664C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020664C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80206650: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80206654: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80206658: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020665C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80206660: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80206664: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80206668: addiu       $a2, $a2, 0xBEE
    ctx->r6 = ADD32(ctx->r6, 0XBEE);
    // 0x8020666C: addiu       $a1, $a1, 0x2A44
    ctx->r5 = ADD32(ctx->r5, 0X2A44);
    // 0x80206670: jal         0x80231C58
    // 0x80206674: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80231C58(rdram, ctx);
        goto after_0;
    // 0x80206674: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80206678: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8020667C: bne         $v0, $zero, L_802066FC
    if (ctx->r2 != 0) {
        // 0x80206680: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_802066FC;
    }
    // 0x80206680: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80206684: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80206688: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x8020668C: lw          $t8, -0x4160($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4160);
    // 0x80206690: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80206694: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80206698: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8020669C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802066A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802066A4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802066A8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802066AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802066B0: beq         $a3, $at, L_802066D4
    if (ctx->r7 == ctx->r1) {
        // 0x802066B4: addu        $v0, $t7, $t8
        ctx->r2 = ADD32(ctx->r15, ctx->r24);
            goto L_802066D4;
    }
    // 0x802066B4: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x802066B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802066BC: beq         $a3, $at, L_802066E4
    if (ctx->r7 == ctx->r1) {
        // 0x802066C0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802066E4;
    }
    // 0x802066C0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802066C4: beq         $a3, $at, L_802066F4
    if (ctx->r7 == ctx->r1) {
        // 0x802066C8: nop
    
            goto L_802066F4;
    }
    // 0x802066C8: nop

    // 0x802066CC: b           L_80206700
    // 0x802066D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80206700;
    // 0x802066D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802066D4:
    // 0x802066D4: jal         0x80228DE0
    // 0x802066D8: addiu       $a1, $v0, 0x88
    ctx->r5 = ADD32(ctx->r2, 0X88);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x802066D8: addiu       $a1, $v0, 0x88
    ctx->r5 = ADD32(ctx->r2, 0X88);
    after_1:
    // 0x802066DC: b           L_80206700
    // 0x802066E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80206700;
    // 0x802066E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802066E4:
    // 0x802066E4: jal         0x80228DE0
    // 0x802066E8: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    func_80228DE0(rdram, ctx);
        goto after_2;
    // 0x802066E8: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    after_2:
    // 0x802066EC: b           L_80206700
    // 0x802066F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80206700;
    // 0x802066F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802066F4:
    // 0x802066F4: jal         0x80228DE0
    // 0x802066F8: addiu       $a1, $v0, 0xC8
    ctx->r5 = ADD32(ctx->r2, 0XC8);
    func_80228DE0(rdram, ctx);
        goto after_3;
    // 0x802066F8: addiu       $a1, $v0, 0xC8
    ctx->r5 = ADD32(ctx->r2, 0XC8);
    after_3:
L_802066FC:
    // 0x802066FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80206700:
    // 0x80206700: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80206704: jr          $ra
    // 0x80206708: nop

    return;
    // 0x80206708: nop

;}
RECOMP_FUNC void func_80206BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80206BE4: lui         $a3, 0x8026
    ctx->r7 = S32(0X8026 << 16);
    // 0x80206BE8: addiu       $a3, $a3, -0x415C
    ctx->r7 = ADD32(ctx->r7, -0X415C);
    // 0x80206BEC: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80206BF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80206BF4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80206BF8: blez        $v1, L_80206CAC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80206BFC: addiu       $t2, $zero, 0x24
        ctx->r10 = ADD32(0, 0X24);
            goto L_80206CAC;
    }
    // 0x80206BFC: addiu       $t2, $zero, 0x24
    ctx->r10 = ADD32(0, 0X24);
    // 0x80206C00: lui         $t1, 0x8026
    ctx->r9 = S32(0X8026 << 16);
    // 0x80206C04: lui         $t0, 0x8026
    ctx->r8 = S32(0X8026 << 16);
    // 0x80206C08: addiu       $t0, $t0, -0x4154
    ctx->r8 = ADD32(ctx->r8, -0X4154);
    // 0x80206C0C: addiu       $t1, $t1, -0x4150
    ctx->r9 = ADD32(ctx->r9, -0X4150);
    // 0x80206C10: lwc1        $f2, 0x2AB4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2AB4);
    // 0x80206C14: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80206C18:
    // 0x80206C18: blez        $v1, L_80206C6C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80206C1C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80206C6C;
    }
    // 0x80206C1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80206C20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80206C24: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
L_80206C28:
    // 0x80206C28: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80206C2C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80206C30: nop

    // 0x80206C34: bc1fl       L_80206C5C
    if (!c1cs) {
        // 0x80206C38: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_80206C5C;
    }
    goto skip_0;
    // 0x80206C38: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x80206C3C: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x80206C40: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80206C44: sb          $a0, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r4;
    // 0x80206C48: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x80206C4C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80206C50: addu        $a2, $t8, $a1
    ctx->r6 = ADD32(ctx->r24, ctx->r5);
    // 0x80206C54: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80206C58: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_80206C5C:
    // 0x80206C5C: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80206C60: addiu       $a1, $a1, 0x24
    ctx->r5 = ADD32(ctx->r5, 0X24);
    // 0x80206C64: bne         $at, $zero, L_80206C28
    if (ctx->r1 != 0) {
        // 0x80206C68: addiu       $a2, $a2, 0x24
        ctx->r6 = ADD32(ctx->r6, 0X24);
            goto L_80206C28;
    }
    // 0x80206C68: addiu       $a2, $a2, 0x24
    ctx->r6 = ADD32(ctx->r6, 0X24);
L_80206C6C:
    // 0x80206C6C: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80206C70: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x80206C74: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x80206C78: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x80206C7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80206C80: multu       $t5, $t2
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80206C84: mflo        $t6
    ctx->r14 = lo;
    // 0x80206C88: addu        $a0, $t9, $t6
    ctx->r4 = ADD32(ctx->r25, ctx->r14);
    // 0x80206C8C: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80206C90: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x80206C94: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
    // 0x80206C98: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80206C9C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80206CA0: bnel        $at, $zero, L_80206C18
    if (ctx->r1 != 0) {
        // 0x80206CA4: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_80206C18;
    }
    goto skip_1;
    // 0x80206CA4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_1:
    // 0x80206CA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80206CAC:
    // 0x80206CAC: lui         $t1, 0x8026
    ctx->r9 = S32(0X8026 << 16);
    // 0x80206CB0: blez        $v1, L_80206CFC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80206CB4: addiu       $t1, $t1, -0x4150
        ctx->r9 = ADD32(ctx->r9, -0X4150);
            goto L_80206CFC;
    }
    // 0x80206CB4: addiu       $t1, $t1, -0x4150
    ctx->r9 = ADD32(ctx->r9, -0X4150);
    // 0x80206CB8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80206CBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80206CC0:
    // 0x80206CC0: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x80206CC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80206CC8: addu        $a1, $t7, $a0
    ctx->r5 = ADD32(ctx->r15, ctx->r4);
    // 0x80206CCC: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80206CD0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80206CD4: nop

    // 0x80206CD8: bc1fl       L_80206CF4
    if (!c1cs) {
        // 0x80206CDC: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80206CF4;
    }
    goto skip_2;
    // 0x80206CDC: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    skip_2:
    // 0x80206CE0: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x80206CE4: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x80206CE8: swc1        $f10, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f10.u32l;
    // 0x80206CEC: lw          $v1, -0x415C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X415C);
    // 0x80206CF0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_80206CF4:
    // 0x80206CF4: bne         $at, $zero, L_80206CC0
    if (ctx->r1 != 0) {
        // 0x80206CF8: addiu       $a0, $a0, 0x24
        ctx->r4 = ADD32(ctx->r4, 0X24);
            goto L_80206CC0;
    }
    // 0x80206CF8: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
L_80206CFC:
    // 0x80206CFC: jr          $ra
    // 0x80206D00: nop

    return;
    // 0x80206D00: nop

;}
RECOMP_FUNC void func_80205890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205890: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80205894: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80205898: lui         $s3, 0x8028
    ctx->r19 = S32(0X8028 << 16);
    // 0x8020589C: addiu       $s3, $s3, 0xBC0
    ctx->r19 = ADD32(ctx->r19, 0XBC0);
    // 0x802058A0: lhu         $t6, 0x2E($s3)
    ctx->r14 = MEM_HU(ctx->r19, 0X2E);
    // 0x802058A4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802058A8: addiu       $s1, $zero, 0x2D8
    ctx->r17 = ADD32(0, 0X2D8);
    // 0x802058AC: multu       $t6, $s1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802058B0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802058B4: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x802058B8: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x802058BC: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x802058C0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x802058C4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802058C8: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x802058CC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x802058D0: mflo        $a0
    ctx->r4 = lo;
    // 0x802058D4: jal         0x8022BA58
    // 0x802058D8: nop

    func_8022BA58(rdram, ctx);
        goto after_0;
    // 0x802058D8: nop

    after_0:
    // 0x802058DC: lui         $s6, 0x8026
    ctx->r22 = S32(0X8026 << 16);
    // 0x802058E0: addiu       $s6, $s6, -0x4160
    ctx->r22 = ADD32(ctx->r22, -0X4160);
    // 0x802058E4: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    // 0x802058E8: jal         0x8022BA58
    // 0x802058EC: lhu         $a0, 0x30($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X30);
    func_8022BA58(rdram, ctx);
        goto after_1;
    // 0x802058EC: lhu         $a0, 0x30($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X30);
    after_1:
    // 0x802058F0: lhu         $t7, 0x30($s3)
    ctx->r15 = MEM_HU(ctx->r19, 0X30);
    // 0x802058F4: addiu       $s0, $zero, 0x24
    ctx->r16 = ADD32(0, 0X24);
    // 0x802058F8: lui         $s2, 0x8026
    ctx->r18 = S32(0X8026 << 16);
    // 0x802058FC: multu       $t7, $s0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80205900: addiu       $s2, $s2, -0x4154
    ctx->r18 = ADD32(ctx->r18, -0X4154);
    // 0x80205904: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x80205908: mflo        $a0
    ctx->r4 = lo;
    // 0x8020590C: jal         0x8022BA58
    // 0x80205910: nop

    func_8022BA58(rdram, ctx);
        goto after_2;
    // 0x80205910: nop

    after_2:
    // 0x80205914: lhu         $t8, 0x32($s3)
    ctx->r24 = MEM_HU(ctx->r19, 0X32);
    // 0x80205918: lui         $s4, 0x8026
    ctx->r20 = S32(0X8026 << 16);
    // 0x8020591C: addiu       $s4, $s4, -0x4150
    ctx->r20 = ADD32(ctx->r20, -0X4150);
    // 0x80205920: multu       $t8, $s0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80205924: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x80205928: mflo        $a0
    ctx->r4 = lo;
    // 0x8020592C: jal         0x8022BA58
    // 0x80205930: nop

    func_8022BA58(rdram, ctx);
        goto after_3;
    // 0x80205930: nop

    after_3:
    // 0x80205934: lhu         $t9, 0x2E($s3)
    ctx->r25 = MEM_HU(ctx->r19, 0X2E);
    // 0x80205938: lui         $s5, 0x8026
    ctx->r21 = S32(0X8026 << 16);
    // 0x8020593C: addiu       $s5, $s5, -0x414C
    ctx->r21 = ADD32(ctx->r21, -0X414C);
    // 0x80205940: multu       $t9, $s1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80205944: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x80205948: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x8020594C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80205950: mflo        $a2
    ctx->r6 = lo;
    // 0x80205954: jal         0x8022B780
    // 0x80205958: nop

    func_8022B780(rdram, ctx);
        goto after_4;
    // 0x80205958: nop

    after_4:
    // 0x8020595C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80205960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80205964: jal         0x8022B780
    // 0x80205968: lhu         $a2, 0x30($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X30);
    func_8022B780(rdram, ctx);
        goto after_5;
    // 0x80205968: lhu         $a2, 0x30($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X30);
    after_5:
    // 0x8020596C: lhu         $t0, 0x30($s3)
    ctx->r8 = MEM_HU(ctx->r19, 0X30);
    // 0x80205970: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x80205974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80205978: multu       $t0, $s0
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8020597C: mflo        $a2
    ctx->r6 = lo;
    // 0x80205980: jal         0x8022B780
    // 0x80205984: nop

    func_8022B780(rdram, ctx);
        goto after_6;
    // 0x80205984: nop

    after_6:
    // 0x80205988: lhu         $t1, 0x32($s3)
    ctx->r9 = MEM_HU(ctx->r19, 0X32);
    // 0x8020598C: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x80205990: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80205994: multu       $t1, $s0
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80205998: mflo        $a2
    ctx->r6 = lo;
    // 0x8020599C: jal         0x8022B780
    // 0x802059A0: nop

    func_8022B780(rdram, ctx);
        goto after_7;
    // 0x802059A0: nop

    after_7:
    // 0x802059A4: lhu         $t2, 0x2E($s3)
    ctx->r10 = MEM_HU(ctx->r19, 0X2E);
    // 0x802059A8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802059AC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802059B0: blez        $t2, L_80205A70
    if (SIGNED(ctx->r10) <= 0) {
        // 0x802059B4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80205A70;
    }
    // 0x802059B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802059B8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802059BC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802059C0: addiu       $s5, $zero, 0xF0
    ctx->r21 = ADD32(0, 0XF0);
    // 0x802059C4: addiu       $s4, $zero, 0x140
    ctx->r20 = ADD32(0, 0X140);
    // 0x802059C8: lw          $t3, 0x0($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X0);
L_802059CC:
    // 0x802059CC: addu        $s0, $s2, $t3
    ctx->r16 = ADD32(ctx->r18, ctx->r11);
    // 0x802059D0: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x802059D4: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x802059D8: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x802059DC: sh          $s1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r17;
    // 0x802059E0: jal         0x8022970C
    // 0x802059E4: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    func_8022970C(rdram, ctx);
        goto after_8;
    // 0x802059E4: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    after_8:
    // 0x802059E8: jal         0x8022970C
    // 0x802059EC: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    func_8022970C(rdram, ctx);
        goto after_9;
    // 0x802059EC: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    after_9:
    // 0x802059F0: jal         0x8022970C
    // 0x802059F4: addiu       $a0, $s0, 0x88
    ctx->r4 = ADD32(ctx->r16, 0X88);
    func_8022970C(rdram, ctx);
        goto after_10;
    // 0x802059F4: addiu       $a0, $s0, 0x88
    ctx->r4 = ADD32(ctx->r16, 0X88);
    after_10:
    // 0x802059F8: jal         0x8022970C
    // 0x802059FC: addiu       $a0, $s0, 0xC8
    ctx->r4 = ADD32(ctx->r16, 0XC8);
    func_8022970C(rdram, ctx);
        goto after_11;
    // 0x802059FC: addiu       $a0, $s0, 0xC8
    ctx->r4 = ADD32(ctx->r16, 0XC8);
    after_11:
    // 0x80205A00: swc1        $f20, 0x108($s0)
    MEM_W(0X108, ctx->r16) = ctx->f20.u32l;
    // 0x80205A04: swc1        $f20, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f20.u32l;
    // 0x80205A08: swc1        $f20, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f20.u32l;
    // 0x80205A0C: swc1        $f20, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f20.u32l;
    // 0x80205A10: swc1        $f22, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f22.u32l;
    // 0x80205A14: swc1        $f20, 0x11C($s0)
    MEM_W(0X11C, ctx->r16) = ctx->f20.u32l;
    // 0x80205A18: sw          $zero, 0x2D0($s0)
    MEM_W(0X2D0, ctx->r16) = 0;
    // 0x80205A1C: sw          $zero, 0x2D4($s0)
    MEM_W(0X2D4, ctx->r16) = 0;
    // 0x80205A20: swc1        $f22, 0x138($s0)
    MEM_W(0X138, ctx->r16) = ctx->f22.u32l;
    // 0x80205A24: swc1        $f22, 0x13C($s0)
    MEM_W(0X13C, ctx->r16) = ctx->f22.u32l;
    // 0x80205A28: sh          $zero, 0x2C4($s0)
    MEM_H(0X2C4, ctx->r16) = 0;
    // 0x80205A2C: sh          $s4, 0x2C6($s0)
    MEM_H(0X2C6, ctx->r16) = ctx->r20;
    // 0x80205A30: sh          $zero, 0x2C8($s0)
    MEM_H(0X2C8, ctx->r16) = 0;
    // 0x80205A34: sh          $s5, 0x2CA($s0)
    MEM_H(0X2CA, ctx->r16) = ctx->r21;
    // 0x80205A38: sw          $zero, 0x2CC($s0)
    MEM_W(0X2CC, ctx->r16) = 0;
    // 0x80205A3C: andi        $t4, $s5, 0xFFFF
    ctx->r12 = ctx->r21 & 0XFFFF;
    // 0x80205A40: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80205A44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80205A48: andi        $a1, $zero, 0xFFFF
    ctx->r5 = 0 & 0XFFFF;
    // 0x80205A4C: andi        $a2, $s4, 0xFFFF
    ctx->r6 = ctx->r20 & 0XFFFF;
    // 0x80205A50: jal         0x80205D70
    // 0x80205A54: andi        $a3, $zero, 0xFFFF
    ctx->r7 = 0 & 0XFFFF;
    func_80205D70(rdram, ctx);
        goto after_12;
    // 0x80205A54: andi        $a3, $zero, 0xFFFF
    ctx->r7 = 0 & 0XFFFF;
    after_12:
    // 0x80205A58: lhu         $t5, 0x2E($s3)
    ctx->r13 = MEM_HU(ctx->r19, 0X2E);
    // 0x80205A5C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80205A60: addiu       $s2, $s2, 0x2D8
    ctx->r18 = ADD32(ctx->r18, 0X2D8);
    // 0x80205A64: slt         $at, $s1, $t5
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80205A68: bnel        $at, $zero, L_802059CC
    if (ctx->r1 != 0) {
        // 0x80205A6C: lw          $t3, 0x0($s6)
        ctx->r11 = MEM_W(ctx->r22, 0X0);
            goto L_802059CC;
    }
    goto skip_0;
    // 0x80205A6C: lw          $t3, 0x0($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X0);
    skip_0:
L_80205A70:
    // 0x80205A70: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80205A74: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80205A78: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80205A7C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80205A80: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80205A84: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80205A88: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80205A8C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80205A90: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80205A94: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80205A98: jr          $ra
    // 0x80205A9C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80205A9C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80223F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223F4C: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80223F50: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80223F54: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80223F58: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80223F5C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80223F60: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80223F64: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80223F68: jr          $ra
    // 0x80223F6C: lwc1        $f0, 0x5134($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5134);
    return;
    // 0x80223F6C: lwc1        $f0, 0x5134($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5134);
;}
RECOMP_FUNC void func_8021F6F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021F6F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021F6FC: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x8021F700: lw          $t0, 0x4348($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X4348);
    // 0x8021F704: subu        $t1, $a1, $a0
    ctx->r9 = SUB32(ctx->r5, ctx->r4);
    // 0x8021F708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021F70C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8021F710: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8021F714: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8021F718: blez        $t1, L_8021FB44
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8021F71C: andi        $v1, $t0, 0xFFF
        ctx->r3 = ctx->r8 & 0XFFF;
            goto L_8021FB44;
    }
    // 0x8021F71C: andi        $v1, $t0, 0xFFF
    ctx->r3 = ctx->r8 & 0XFFF;
    // 0x8021F720: subu        $a0, $a3, $a2
    ctx->r4 = SUB32(ctx->r7, ctx->r6);
    // 0x8021F724: blez        $a0, L_8021FB44
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8021F728: slti        $at, $v1, 0xFFE
        ctx->r1 = SIGNED(ctx->r3) < 0XFFE ? 1 : 0;
            goto L_8021FB44;
    }
    // 0x8021F728: slti        $at, $v1, 0xFFE
    ctx->r1 = SIGNED(ctx->r3) < 0XFFE ? 1 : 0;
    // 0x8021F72C: beq         $at, $zero, L_8021F928
    if (ctx->r1 == 0) {
        // 0x8021F730: lui         $t9, 0x8025
        ctx->r25 = S32(0X8025 << 16);
            goto L_8021F928;
    }
    // 0x8021F730: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x8021F734: lw          $t9, -0x18F0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X18F0);
    // 0x8021F738: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x8021F73C: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8021F740: lw          $t6, 0x2C($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X2C);
    // 0x8021F744: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021F748: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021F74C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8021F750: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x8021F754: lhu         $t9, 0xA($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XA);
    // 0x8021F758: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8021F75C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8021F760: bgez        $t9, L_8021F774
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8021F764: cvt.s.w     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8021F774;
    }
    // 0x8021F764: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021F768: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021F76C: nop

    // 0x8021F770: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
L_8021F774:
    // 0x8021F774: lhu         $t6, 0xC($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC);
    // 0x8021F778: mul.s       $f4, $f2, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8021F77C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021F780: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8021F784: bgez        $t6, L_8021F798
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021F788: cvt.s.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8021F798;
    }
    // 0x8021F788: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021F78C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021F790: nop

    // 0x8021F794: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
L_8021F798:
    // 0x8021F798: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x8021F79C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021F7A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021F7A4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021F7A8: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x8021F7AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021F7B0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x8021F7B4: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021F7B8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021F7BC: mul.s       $f8, $f12, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x8021F7C0: add.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8021F7C4: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x8021F7C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021F7CC: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x8021F7D0: div.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8021F7D4: sll         $t8, $t5, 16
    ctx->r24 = S32(ctx->r13 << 16);
    // 0x8021F7D8: sra         $t5, $t8, 16
    ctx->r13 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8021F7DC: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8021F7E0: nop

    // 0x8021F7E4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021F7E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021F7EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021F7F0: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8021F7F4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021F7F8: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021F7FC: mfc1        $ra, $f10
    ctx->r31 = (int32_t)ctx->f10.u32l;
    // 0x8021F800: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x8021F804: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021F808: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x8021F80C: sll         $t7, $ra, 16
    ctx->r15 = S32(ctx->r31 << 16);
    // 0x8021F810: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8021F814: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8021F818: sra         $ra, $t7, 16
    ctx->r31 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8021F81C: lhu         $t7, 0x12($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X12);
    // 0x8021F820: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021F824: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x8021F828: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8021F82C: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021F830: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021F834: nop

    // 0x8021F838: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8021F83C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021F840: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021F844: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x8021F848: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x8021F84C: sll         $t6, $t2, 16
    ctx->r14 = S32(ctx->r10 << 16);
    // 0x8021F850: sra         $t2, $t6, 16
    ctx->r10 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8021F854: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8021F858: div.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8021F85C: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021F860: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8021F864: nop

    // 0x8021F868: sll         $t9, $t4, 16
    ctx->r25 = S32(ctx->r12 << 16);
    // 0x8021F86C: sra         $t6, $t9, 16
    ctx->r14 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8021F870: beq         $t8, $zero, L_8021F8B8
    if (ctx->r24 == 0) {
        // 0x8021F874: or          $t4, $t6, $zero
        ctx->r12 = ctx->r14 | 0;
            goto L_8021F8B8;
    }
    // 0x8021F874: or          $t4, $t6, $zero
    ctx->r12 = ctx->r14 | 0;
    // 0x8021F878: sll         $t9, $t0, 5
    ctx->r25 = S32(ctx->r8 << 5);
    // 0x8021F87C: bltz        $t9, L_8021F8B8
    if (SIGNED(ctx->r25) < 0) {
        // 0x8021F880: lui         $a0, 0x480
        ctx->r4 = S32(0X480 << 16);
            goto L_8021F8B8;
    }
    // 0x8021F880: lui         $a0, 0x480
    ctx->r4 = S32(0X480 << 16);
    // 0x8021F884: sh          $ra, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r31;
    // 0x8021F888: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8021F88C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8021F890: sh          $t2, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r10;
    // 0x8021F894: sh          $t6, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r14;
    // 0x8021F898: jal         0x802233EC
    // 0x8021F89C: sh          $t5, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r13;
    func_802233EC(rdram, ctx);
        goto after_0;
    // 0x8021F89C: sh          $t5, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r13;
    after_0:
    // 0x8021F8A0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8021F8A4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8021F8A8: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x8021F8AC: lh          $t4, 0x24($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X24);
    // 0x8021F8B0: lh          $t5, 0x2A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2A);
    // 0x8021F8B4: lh          $ra, 0x28($sp)
    ctx->r31 = MEM_H(ctx->r29, 0X28);
L_8021F8B8:
    // 0x8021F8B8: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x8021F8BC: addiu       $a3, $a3, 0x3B90
    ctx->r7 = ADD32(ctx->r7, 0X3B90);
    // 0x8021F8C0: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8021F8C4: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8021F8C8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021F8CC: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8021F8D0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021F8D4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021F8D8: lhu         $t8, 0x12($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X12);
    // 0x8021F8DC: lui         $t7, 0xFC11
    ctx->r15 = S32(0XFC11 << 16);
    // 0x8021F8E0: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x8021F8E4: bnel        $t9, $zero, L_8021F90C
    if (ctx->r25 != 0) {
        // 0x8021F8E8: lw          $v0, 0x0($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X0);
            goto L_8021F90C;
    }
    goto skip_0;
    // 0x8021F8E8: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    skip_0:
    // 0x8021F8EC: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8021F8F0: ori         $t7, $t7, 0x97FF
    ctx->r15 = ctx->r15 | 0X97FF;
    // 0x8021F8F4: addiu       $t8, $zero, -0x1C8
    ctx->r24 = ADD32(0, -0X1C8);
    // 0x8021F8F8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021F8FC: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8021F900: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021F904: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021F908: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
L_8021F90C:
    // 0x8021F90C: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x8021F910: ori         $t6, $t6, 0x1301
    ctx->r14 = ctx->r14 | 0X1301;
    // 0x8021F914: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021F918: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x8021F91C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021F920: b           L_8021F940
    // 0x8021F924: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
        goto L_8021F940;
    // 0x8021F924: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_8021F928:
    // 0x8021F928: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x8021F92C: addiu       $a3, $a3, 0x3B90
    ctx->r7 = ADD32(ctx->r7, 0X3B90);
    // 0x8021F930: or          $ra, $zero, $zero
    ctx->r31 = 0 | 0;
    // 0x8021F934: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x8021F938: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x8021F93C: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
L_8021F940:
    // 0x8021F940: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8021F944: lw          $t0, 0x0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X0);
    // 0x8021F948: addiu       $v1, $a1, 0x1
    ctx->r3 = ADD32(ctx->r5, 0X1);
    // 0x8021F94C: sll         $t6, $v1, 18
    ctx->r14 = S32(ctx->r3 << 18);
    // 0x8021F950: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8021F954: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8021F958: addiu       $t9, $t0, 0x8
    ctx->r25 = ADD32(ctx->r8, 0X8);
    // 0x8021F95C: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x8021F960: blez        $t7, L_8021F970
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8021F964: sw          $t9, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r25;
            goto L_8021F970;
    }
    // 0x8021F964: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x8021F968: b           L_8021F974
    // 0x8021F96C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
        goto L_8021F974;
    // 0x8021F96C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_8021F970:
    // 0x8021F970: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8021F974:
    // 0x8021F974: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8021F978: addiu       $t3, $zero, 0xF0
    ctx->r11 = ADD32(0, 0XF0);
    // 0x8021F97C: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8021F980: subu        $t9, $t3, $t8
    ctx->r25 = SUB32(ctx->r11, ctx->r24);
    // 0x8021F984: sll         $t6, $t9, 18
    ctx->r14 = S32(ctx->r25 << 18);
    // 0x8021F988: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8021F98C: blez        $t7, L_8021F99C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8021F990: andi        $t6, $a0, 0xFFF
        ctx->r14 = ctx->r4 & 0XFFF;
            goto L_8021F99C;
    }
    // 0x8021F990: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x8021F994: b           L_8021F9A0
    // 0x8021F998: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
        goto L_8021F9A0;
    // 0x8021F998: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_8021F99C:
    // 0x8021F99C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8021F9A0:
    // 0x8021F9A0: andi        $t8, $v1, 0xFFF
    ctx->r24 = ctx->r3 & 0XFFF;
    // 0x8021F9A4: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8021F9A8: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8021F9AC: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x8021F9B0: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x8021F9B4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8021F9B8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8021F9BC: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x8021F9C0: sll         $t9, $t6, 18
    ctx->r25 = S32(ctx->r14 << 18);
    // 0x8021F9C4: sra         $t7, $t9, 16
    ctx->r15 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8021F9C8: blez        $t7, L_8021F9D8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8021F9CC: or          $a1, $t7, $zero
        ctx->r5 = ctx->r15 | 0;
            goto L_8021F9D8;
    }
    // 0x8021F9CC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8021F9D0: b           L_8021F9DC
    // 0x8021F9D4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
        goto L_8021F9DC;
    // 0x8021F9D4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_8021F9D8:
    // 0x8021F9D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8021F9DC:
    // 0x8021F9DC: subu        $t1, $t3, $t8
    ctx->r9 = SUB32(ctx->r11, ctx->r24);
    // 0x8021F9E0: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x8021F9E4: sll         $a2, $t6, 16
    ctx->r6 = S32(ctx->r14 << 16);
    // 0x8021F9E8: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8021F9EC: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x8021F9F0: blez        $t9, L_8021FA00
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8021F9F4: or          $t1, $t6, $zero
        ctx->r9 = ctx->r14 | 0;
            goto L_8021FA00;
    }
    // 0x8021F9F4: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x8021F9F8: b           L_8021FA04
    // 0x8021F9FC: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
        goto L_8021FA04;
    // 0x8021F9FC: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_8021FA00:
    // 0x8021FA00: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8021FA04:
    // 0x8021FA04: andi        $t7, $v1, 0xFFF
    ctx->r15 = ctx->r3 & 0XFFF;
    // 0x8021FA08: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x8021FA0C: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x8021FA10: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8021FA14: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x8021FA18: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x8021FA1C: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x8021FA20: lui         $t8, 0xB400
    ctx->r24 = S32(0XB400 << 16);
    // 0x8021FA24: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8021FA28: addiu       $t6, $t3, 0x8
    ctx->r14 = ADD32(ctx->r11, 0X8);
    // 0x8021FA2C: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8021FA30: bgez        $a1, L_8021FA94
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8021FA34: sw          $t8, 0x0($t3)
        MEM_W(0X0, ctx->r11) = ctx->r24;
            goto L_8021FA94;
    }
    // 0x8021FA34: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x8021FA38: bgez        $t2, L_8021FA68
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8021FA3C: nop
    
            goto L_8021FA68;
    }
    // 0x8021FA3C: nop

    // 0x8021FA40: multu       $a1, $t2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021FA44: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021FA48: mflo        $v0
    ctx->r2 = lo;
    // 0x8021FA4C: sra         $t9, $v0, 7
    ctx->r25 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8021FA50: blez        $t9, L_8021FA60
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8021FA54: nop
    
            goto L_8021FA60;
    }
    // 0x8021FA54: nop

    // 0x8021FA58: b           L_8021FA94
    // 0x8021FA5C: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
        goto L_8021FA94;
    // 0x8021FA5C: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
L_8021FA60:
    // 0x8021FA60: b           L_8021FA94
    // 0x8021FA64: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
        goto L_8021FA94;
    // 0x8021FA64: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
L_8021FA68:
    // 0x8021FA68: multu       $a1, $t2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021FA6C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021FA70: mflo        $v0
    ctx->r2 = lo;
    // 0x8021FA74: sra         $t7, $v0, 7
    ctx->r15 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8021FA78: bgez        $t7, L_8021FA88
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8021FA7C: nop
    
            goto L_8021FA88;
    }
    // 0x8021FA7C: nop

    // 0x8021FA80: b           L_8021FA88
    // 0x8021FA84: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
        goto L_8021FA88;
    // 0x8021FA84: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_8021FA88:
    // 0x8021FA88: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8021FA8C: b           L_8021FA94
    // 0x8021FA90: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
        goto L_8021FA94;
    // 0x8021FA90: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_8021FA94:
    // 0x8021FA94: bgez        $t1, L_8021FB04
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8021FA98: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8021FB04;
    }
    // 0x8021FA98: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021FA9C: negu        $a1, $t4
    ctx->r5 = SUB32(0, ctx->r12);
    // 0x8021FAA0: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x8021FAA4: sra         $t6, $v1, 16
    ctx->r14 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8021FAA8: bgez        $t6, L_8021FAD8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021FAAC: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_8021FAD8;
    }
    // 0x8021FAAC: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x8021FAB0: multu       $a2, $t6
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021FAB4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021FAB8: mflo        $v0
    ctx->r2 = lo;
    // 0x8021FABC: sra         $t8, $v0, 7
    ctx->r24 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8021FAC0: blez        $t8, L_8021FAD0
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8021FAC4: nop
    
            goto L_8021FAD0;
    }
    // 0x8021FAC4: nop

    // 0x8021FAC8: b           L_8021FB08
    // 0x8021FACC: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_8021FB08;
    // 0x8021FACC: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_8021FAD0:
    // 0x8021FAD0: b           L_8021FB0C
    // 0x8021FAD4: subu        $t7, $ra, $v1
    ctx->r15 = SUB32(ctx->r31, ctx->r3);
        goto L_8021FB0C;
    // 0x8021FAD4: subu        $t7, $ra, $v1
    ctx->r15 = SUB32(ctx->r31, ctx->r3);
L_8021FAD8:
    // 0x8021FAD8: multu       $a2, $v1
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021FADC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021FAE0: mflo        $v0
    ctx->r2 = lo;
    // 0x8021FAE4: sra         $t9, $v0, 7
    ctx->r25 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8021FAE8: bgez        $t9, L_8021FAF8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8021FAEC: nop
    
            goto L_8021FAF8;
    }
    // 0x8021FAEC: nop

    // 0x8021FAF0: b           L_8021FAF8
    // 0x8021FAF4: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
        goto L_8021FAF8;
    // 0x8021FAF4: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_8021FAF8:
    // 0x8021FAF8: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8021FAFC: b           L_8021FB08
    // 0x8021FB00: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_8021FB08;
    // 0x8021FB00: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8021FB04:
    // 0x8021FB04: negu        $a1, $t4
    ctx->r5 = SUB32(0, ctx->r12);
L_8021FB08:
    // 0x8021FB08: subu        $t7, $ra, $v1
    ctx->r15 = SUB32(ctx->r31, ctx->r3);
L_8021FB0C:
    // 0x8021FB0C: andi        $t6, $t7, 0xFFFF
    ctx->r14 = ctx->r15 & 0XFFFF;
    // 0x8021FB10: subu        $t9, $t5, $t0
    ctx->r25 = SUB32(ctx->r13, ctx->r8);
    // 0x8021FB14: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x8021FB18: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8021FB1C: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
    // 0x8021FB20: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8021FB24: lui         $t6, 0xB300
    ctx->r14 = S32(0XB300 << 16);
    // 0x8021FB28: sll         $t8, $t2, 16
    ctx->r24 = S32(ctx->r10 << 16);
    // 0x8021FB2C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021FB30: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x8021FB34: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x8021FB38: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021FB3C: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8021FB40: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_8021FB44:
    // 0x8021FB44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021FB48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8021FB4C: jr          $ra
    // 0x8021FB50: nop

    return;
    // 0x8021FB50: nop

;}
RECOMP_FUNC void func_8021A528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021A528: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x8021A52C: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8021A530: addiu       $t8, $t7, 0x3
    ctx->r24 = ADD32(ctx->r15, 0X3);
    // 0x8021A534: sltiu       $at, $t8, 0x7
    ctx->r1 = ctx->r24 < 0X7 ? 1 : 0;
    // 0x8021A538: beq         $at, $zero, L_8021A620
    if (ctx->r1 == 0) {
        // 0x8021A53C: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_8021A620;
    }
    // 0x8021A53C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8021A540: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8021A544: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021A548: addu        $at, $at, $t8
    gpr jr_addend_8021A550 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8021A54C: lw          $t8, 0x3114($at)
    ctx->r24 = ADD32(ctx->r1, 0X3114);
    // 0x8021A550: jr          $t8
    // 0x8021A554: nop

    switch (jr_addend_8021A550 >> 2) {
        case 0: goto L_8021A5E0; break;
        case 1: goto L_8021A59C; break;
        case 2: goto L_8021A558; break;
        case 3: goto L_8021A620; break;
        case 4: goto L_8021A580; break;
        case 5: goto L_8021A5C4; break;
        case 6: goto L_8021A608; break;
        default: switch_error(__func__, 0x8021A550, 0x80253114);
    }
    // 0x8021A554: nop

L_8021A558:
    // 0x8021A558: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8021A55C: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x8021A560: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x8021A564: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8021A568: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8021A56C: swc1        $f10, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f10.u32l;
    // 0x8021A570: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8021A574: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x8021A578: jr          $ra
    // 0x8021A57C: swc1        $f18, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f18.u32l;
    return;
    // 0x8021A57C: swc1        $f18, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f18.u32l;
L_8021A580:
    // 0x8021A580: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8021A584: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x8021A588: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8021A58C: swc1        $f6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f6.u32l;
    // 0x8021A590: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8021A594: jr          $ra
    // 0x8021A598: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
    return;
    // 0x8021A598: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
L_8021A59C:
    // 0x8021A59C: lwc1        $f10, 0x10($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8021A5A0: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x8021A5A4: swc1        $f16, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f16.u32l;
    // 0x8021A5A8: lwc1        $f18, 0x14($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8021A5AC: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x8021A5B0: swc1        $f4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f4.u32l;
    // 0x8021A5B4: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8021A5B8: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x8021A5BC: jr          $ra
    // 0x8021A5C0: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
    return;
    // 0x8021A5C0: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
L_8021A5C4:
    // 0x8021A5C4: lwc1        $f10, 0x10($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8021A5C8: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x8021A5CC: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8021A5D0: swc1        $f16, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f16.u32l;
    // 0x8021A5D4: lwc1        $f18, 0x18($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8021A5D8: jr          $ra
    // 0x8021A5DC: swc1        $f18, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f18.u32l;
    return;
    // 0x8021A5DC: swc1        $f18, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f18.u32l;
L_8021A5E0:
    // 0x8021A5E0: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8021A5E4: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x8021A5E8: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x8021A5EC: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8021A5F0: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8021A5F4: swc1        $f10, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f10.u32l;
    // 0x8021A5F8: lwc1        $f16, 0x28($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8021A5FC: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x8021A600: jr          $ra
    // 0x8021A604: swc1        $f18, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f18.u32l;
    return;
    // 0x8021A604: swc1        $f18, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f18.u32l;
L_8021A608:
    // 0x8021A608: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8021A60C: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x8021A610: lwc1        $f6, 0x24($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8021A614: swc1        $f6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f6.u32l;
    // 0x8021A618: lwc1        $f8, 0x28($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8021A61C: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
L_8021A620:
    // 0x8021A620: jr          $ra
    // 0x8021A624: nop

    return;
    // 0x8021A624: nop

;}
RECOMP_FUNC void func_8022ADA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022ADA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ADAC: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x8022ADB0: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8022ADB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022ADB8: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x8022ADBC: nop

    // 0x8022ADC0: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8022ADC4: jal         0x8022AA40
    // 0x8022ADC8: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_8022AA40(rdram, ctx);
        goto after_0;
    // 0x8022ADC8: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_0:
    // 0x8022ADCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022ADD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022ADD4: jr          $ra
    // 0x8022ADD8: nop

    return;
    // 0x8022ADD8: nop

;}
RECOMP_FUNC void func_80210A44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80210A44: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80210A48: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x80210A4C: blez        $a1, L_802111FC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80210A50: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802111FC;
    }
    // 0x80210A50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80210A54: andi        $v1, $a1, 0x1
    ctx->r3 = ctx->r5 & 0X1;
    // 0x80210A58: beq         $v1, $zero, L_80210CEC
    if (ctx->r3 == 0) {
        // 0x80210A5C: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80210CEC;
    }
    // 0x80210A5C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80210A60: lbu         $t6, 0xC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XC);
    // 0x80210A64: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80210A68: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80210A6C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80210A70: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80210A74: bgez        $t6, L_80210A8C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80210A78: cvt.s.w     $f16, $f4
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80210A8C;
    }
    // 0x80210A78: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80210A7C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210A80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80210A84: nop

    // 0x80210A88: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_80210A8C:
    // 0x80210A8C: lhu         $a2, 0x6($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X6);
    // 0x80210A90: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x80210A94: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80210A98: beq         $a2, $zero, L_80210AAC
    if (ctx->r6 == 0) {
        // 0x80210A9C: nop
    
            goto L_80210AAC;
    }
    // 0x80210A9C: nop

    // 0x80210AA0: mul.s       $f0, $f12, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x80210AA4: b           L_80210AC8
    // 0x80210AA8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
        goto L_80210AC8;
    // 0x80210AA8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
L_80210AAC:
    // 0x80210AAC: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80210AB0: nop

    // 0x80210AB4: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80210AB8: nop

    // 0x80210ABC: mul.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80210AC0: nop

    // 0x80210AC4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
L_80210AC8:
    // 0x80210AC8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80210ACC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210AD0: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80210AD4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80210AD8: nop

    // 0x80210ADC: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80210AE0: beql        $t8, $zero, L_80210B30
    if (ctx->r24 == 0) {
        // 0x80210AE4: mfc1        $t8, $f4
        ctx->r24 = (int32_t)ctx->f4.u32l;
            goto L_80210B30;
    }
    goto skip_0;
    // 0x80210AE4: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    skip_0:
    // 0x80210AE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80210AEC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80210AF0: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80210AF4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80210AF8: nop

    // 0x80210AFC: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80210B00: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80210B04: nop

    // 0x80210B08: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80210B0C: bne         $t8, $zero, L_80210B24
    if (ctx->r24 != 0) {
        // 0x80210B10: nop
    
            goto L_80210B24;
    }
    // 0x80210B10: nop

    // 0x80210B14: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x80210B18: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210B1C: b           L_80210B3C
    // 0x80210B20: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_80210B3C;
    // 0x80210B20: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_80210B24:
    // 0x80210B24: b           L_80210B3C
    // 0x80210B28: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_80210B3C;
    // 0x80210B28: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80210B2C: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
L_80210B30:
    // 0x80210B30: nop

    // 0x80210B34: bltz        $t8, L_80210B24
    if (SIGNED(ctx->r24) < 0) {
        // 0x80210B38: nop
    
            goto L_80210B24;
    }
    // 0x80210B38: nop

L_80210B3C:
    // 0x80210B3C: lbu         $t9, 0xD($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XD);
    // 0x80210B40: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80210B44: sb          $t8, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r24;
    // 0x80210B48: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80210B4C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210B50: bgez        $t9, L_80210B64
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80210B54: cvt.s.w     $f16, $f6
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80210B64;
    }
    // 0x80210B54: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80210B58: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80210B5C: nop

    // 0x80210B60: add.s       $f16, $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f8.fl;
L_80210B64:
    // 0x80210B64: beq         $a2, $zero, L_80210B78
    if (ctx->r6 == 0) {
        // 0x80210B68: mov.s       $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
            goto L_80210B78;
    }
    // 0x80210B68: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x80210B6C: mul.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x80210B70: b           L_80210B94
    // 0x80210B74: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
        goto L_80210B94;
    // 0x80210B74: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
L_80210B78:
    // 0x80210B78: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80210B7C: nop

    // 0x80210B80: mul.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x80210B84: nop

    // 0x80210B88: mul.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80210B8C: nop

    // 0x80210B90: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
L_80210B94:
    // 0x80210B94: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80210B98: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210B9C: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80210BA0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80210BA4: nop

    // 0x80210BA8: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x80210BAC: beql        $t2, $zero, L_80210BFC
    if (ctx->r10 == 0) {
        // 0x80210BB0: mfc1        $t2, $f6
        ctx->r10 = (int32_t)ctx->f6.u32l;
            goto L_80210BFC;
    }
    goto skip_1;
    // 0x80210BB0: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x80210BB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80210BB8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80210BBC: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x80210BC0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80210BC4: nop

    // 0x80210BC8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80210BCC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80210BD0: nop

    // 0x80210BD4: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x80210BD8: bne         $t2, $zero, L_80210BF0
    if (ctx->r10 != 0) {
        // 0x80210BDC: nop
    
            goto L_80210BF0;
    }
    // 0x80210BDC: nop

    // 0x80210BE0: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x80210BE4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210BE8: b           L_80210C08
    // 0x80210BEC: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_80210C08;
    // 0x80210BEC: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_80210BF0:
    // 0x80210BF0: b           L_80210C08
    // 0x80210BF4: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_80210C08;
    // 0x80210BF4: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80210BF8: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
L_80210BFC:
    // 0x80210BFC: nop

    // 0x80210C00: bltz        $t2, L_80210BF0
    if (SIGNED(ctx->r10) < 0) {
        // 0x80210C04: nop
    
            goto L_80210BF0;
    }
    // 0x80210C04: nop

L_80210C08:
    // 0x80210C08: lbu         $t3, 0xE($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0XE);
    // 0x80210C0C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80210C10: sb          $t2, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r10;
    // 0x80210C14: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80210C18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80210C1C: bgez        $t3, L_80210C34
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80210C20: cvt.s.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80210C34;
    }
    // 0x80210C20: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80210C24: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210C28: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210C2C: nop

    // 0x80210C30: add.s       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f10.fl;
L_80210C34:
    // 0x80210C34: beq         $a2, $zero, L_80210C4C
    if (ctx->r6 == 0) {
        // 0x80210C38: mov.s       $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
            goto L_80210C4C;
    }
    // 0x80210C38: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x80210C3C: lwc1        $f18, 0x10($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80210C40: mul.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x80210C44: b           L_80210C6C
    // 0x80210C48: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
        goto L_80210C6C;
    // 0x80210C48: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
L_80210C4C:
    // 0x80210C4C: lwc1        $f18, 0x10($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80210C50: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80210C54: nop

    // 0x80210C58: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80210C5C: nop

    // 0x80210C60: mul.s       $f0, $f6, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80210C64: nop

    // 0x80210C68: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
L_80210C6C:
    // 0x80210C6C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80210C70: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210C74: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80210C78: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80210C7C: nop

    // 0x80210C80: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80210C84: beql        $t5, $zero, L_80210CD4
    if (ctx->r13 == 0) {
        // 0x80210C88: mfc1        $t5, $f8
        ctx->r13 = (int32_t)ctx->f8.u32l;
            goto L_80210CD4;
    }
    goto skip_2;
    // 0x80210C88: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    skip_2:
    // 0x80210C8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80210C90: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80210C94: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x80210C98: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80210C9C: nop

    // 0x80210CA0: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80210CA4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80210CA8: nop

    // 0x80210CAC: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80210CB0: bne         $t5, $zero, L_80210CC8
    if (ctx->r13 != 0) {
        // 0x80210CB4: nop
    
            goto L_80210CC8;
    }
    // 0x80210CB4: nop

    // 0x80210CB8: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x80210CBC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210CC0: b           L_80210CE0
    // 0x80210CC4: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_80210CE0;
    // 0x80210CC4: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_80210CC8:
    // 0x80210CC8: b           L_80210CE0
    // 0x80210CCC: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_80210CE0;
    // 0x80210CCC: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80210CD0: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
L_80210CD4:
    // 0x80210CD4: nop

    // 0x80210CD8: bltz        $t5, L_80210CC8
    if (SIGNED(ctx->r13) < 0) {
        // 0x80210CDC: nop
    
            goto L_80210CC8;
    }
    // 0x80210CDC: nop

L_80210CE0:
    // 0x80210CE0: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80210CE4: beq         $v0, $a1, L_802111FC
    if (ctx->r2 == ctx->r5) {
        // 0x80210CE8: sb          $t5, 0xE($v1)
        MEM_B(0XE, ctx->r3) = ctx->r13;
            goto L_802111FC;
    }
    // 0x80210CE8: sb          $t5, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r13;
L_80210CEC:
    // 0x80210CEC: lwc1        $f18, 0x10($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X10);
L_80210CF0:
    // 0x80210CF0: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x80210CF4: addu        $a2, $t6, $a0
    ctx->r6 = ADD32(ctx->r14, ctx->r4);
    // 0x80210CF8: lbu         $t7, 0xC($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0XC);
    // 0x80210CFC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80210D00: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80210D04: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80210D08: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80210D0C: bgez        $t7, L_80210D24
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80210D10: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80210D24;
    }
    // 0x80210D10: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80210D14: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210D18: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80210D1C: nop

    // 0x80210D20: add.s       $f16, $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f4.fl;
L_80210D24:
    // 0x80210D24: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80210D28: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x80210D2C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80210D30: beq         $v1, $zero, L_80210D44
    if (ctx->r3 == 0) {
        // 0x80210D34: mov.s       $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
            goto L_80210D44;
    }
    // 0x80210D34: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x80210D38: mul.s       $f0, $f12, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x80210D3C: b           L_80210D60
    // 0x80210D40: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
        goto L_80210D60;
    // 0x80210D40: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
L_80210D44:
    // 0x80210D44: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80210D48: nop

    // 0x80210D4C: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80210D50: nop

    // 0x80210D54: mul.s       $f0, $f8, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80210D58: nop

    // 0x80210D5C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
L_80210D60:
    // 0x80210D60: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80210D64: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210D68: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80210D6C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80210D70: nop

    // 0x80210D74: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80210D78: beql        $t9, $zero, L_80210DC8
    if (ctx->r25 == 0) {
        // 0x80210D7C: mfc1        $t9, $f10
        ctx->r25 = (int32_t)ctx->f10.u32l;
            goto L_80210DC8;
    }
    goto skip_3;
    // 0x80210D7C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    skip_3:
    // 0x80210D80: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210D84: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80210D88: sub.s       $f10, $f0, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80210D8C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80210D90: nop

    // 0x80210D94: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80210D98: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80210D9C: nop

    // 0x80210DA0: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80210DA4: bne         $t9, $zero, L_80210DBC
    if (ctx->r25 != 0) {
        // 0x80210DA8: nop
    
            goto L_80210DBC;
    }
    // 0x80210DA8: nop

    // 0x80210DAC: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x80210DB0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210DB4: b           L_80210DD4
    // 0x80210DB8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_80210DD4;
    // 0x80210DB8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_80210DBC:
    // 0x80210DBC: b           L_80210DD4
    // 0x80210DC0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_80210DD4;
    // 0x80210DC0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80210DC4: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
L_80210DC8:
    // 0x80210DC8: nop

    // 0x80210DCC: bltz        $t9, L_80210DBC
    if (SIGNED(ctx->r25) < 0) {
        // 0x80210DD0: nop
    
            goto L_80210DBC;
    }
    // 0x80210DD0: nop

L_80210DD4:
    // 0x80210DD4: lbu         $t1, 0xD($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0XD);
    // 0x80210DD8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80210DDC: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80210DE0: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80210DE4: sb          $t9, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r25;
    // 0x80210DE8: bgez        $t1, L_80210E00
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80210DEC: cvt.s.w     $f16, $f4
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80210E00;
    }
    // 0x80210DEC: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80210DF0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210DF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80210DF8: nop

    // 0x80210DFC: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_80210E00:
    // 0x80210E00: beq         $v1, $zero, L_80210E14
    if (ctx->r3 == 0) {
        // 0x80210E04: mov.s       $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
            goto L_80210E14;
    }
    // 0x80210E04: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x80210E08: mul.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x80210E0C: b           L_80210E30
    // 0x80210E10: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
        goto L_80210E30;
    // 0x80210E10: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
L_80210E14:
    // 0x80210E14: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80210E18: nop

    // 0x80210E1C: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80210E20: nop

    // 0x80210E24: mul.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80210E28: nop

    // 0x80210E2C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
L_80210E30:
    // 0x80210E30: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80210E34: addu        $a3, $t8, $a0
    ctx->r7 = ADD32(ctx->r24, ctx->r4);
    // 0x80210E38: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80210E3C: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80210E40: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210E44: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80210E48: nop

    // 0x80210E4C: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x80210E50: beql        $t3, $zero, L_80210EA0
    if (ctx->r11 == 0) {
        // 0x80210E54: mfc1        $t3, $f4
        ctx->r11 = (int32_t)ctx->f4.u32l;
            goto L_80210EA0;
    }
    goto skip_4;
    // 0x80210E54: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    skip_4:
    // 0x80210E58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80210E5C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80210E60: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80210E64: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80210E68: nop

    // 0x80210E6C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80210E70: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80210E74: nop

    // 0x80210E78: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x80210E7C: bne         $t3, $zero, L_80210E94
    if (ctx->r11 != 0) {
        // 0x80210E80: nop
    
            goto L_80210E94;
    }
    // 0x80210E80: nop

    // 0x80210E84: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x80210E88: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210E8C: b           L_80210EAC
    // 0x80210E90: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_80210EAC;
    // 0x80210E90: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_80210E94:
    // 0x80210E94: b           L_80210EAC
    // 0x80210E98: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_80210EAC;
    // 0x80210E98: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80210E9C: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
L_80210EA0:
    // 0x80210EA0: nop

    // 0x80210EA4: bltz        $t3, L_80210E94
    if (SIGNED(ctx->r11) < 0) {
        // 0x80210EA8: nop
    
            goto L_80210E94;
    }
    // 0x80210EA8: nop

L_80210EAC:
    // 0x80210EAC: lbu         $t4, 0xE($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0XE);
    // 0x80210EB0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80210EB4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80210EB8: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80210EBC: sb          $t3, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r11;
    // 0x80210EC0: bgez        $t4, L_80210ED8
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80210EC4: cvt.s.w     $f16, $f6
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80210ED8;
    }
    // 0x80210EC4: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80210EC8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210ECC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80210ED0: nop

    // 0x80210ED4: add.s       $f16, $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f8.fl;
L_80210ED8:
    // 0x80210ED8: beq         $v1, $zero, L_80210EEC
    if (ctx->r3 == 0) {
        // 0x80210EDC: mov.s       $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
            goto L_80210EEC;
    }
    // 0x80210EDC: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x80210EE0: mul.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x80210EE4: b           L_80210F08
    // 0x80210EE8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
        goto L_80210F08;
    // 0x80210EE8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
L_80210EEC:
    // 0x80210EEC: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80210EF0: nop

    // 0x80210EF4: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80210EF8: nop

    // 0x80210EFC: mul.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80210F00: nop

    // 0x80210F04: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
L_80210F08:
    // 0x80210F08: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80210F0C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210F10: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80210F14: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80210F18: nop

    // 0x80210F1C: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80210F20: beql        $t6, $zero, L_80210F70
    if (ctx->r14 == 0) {
        // 0x80210F24: mfc1        $t6, $f6
        ctx->r14 = (int32_t)ctx->f6.u32l;
            goto L_80210F70;
    }
    goto skip_5;
    // 0x80210F24: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    skip_5:
    // 0x80210F28: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80210F2C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80210F30: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x80210F34: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80210F38: nop

    // 0x80210F3C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80210F40: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80210F44: nop

    // 0x80210F48: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80210F4C: bne         $t6, $zero, L_80210F64
    if (ctx->r14 != 0) {
        // 0x80210F50: nop
    
            goto L_80210F64;
    }
    // 0x80210F50: nop

    // 0x80210F54: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80210F58: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210F5C: b           L_80210F7C
    // 0x80210F60: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_80210F7C;
    // 0x80210F60: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_80210F64:
    // 0x80210F64: b           L_80210F7C
    // 0x80210F68: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_80210F7C;
    // 0x80210F68: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80210F6C: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
L_80210F70:
    // 0x80210F70: nop

    // 0x80210F74: bltz        $t6, L_80210F64
    if (SIGNED(ctx->r14) < 0) {
        // 0x80210F78: nop
    
            goto L_80210F64;
    }
    // 0x80210F78: nop

L_80210F7C:
    // 0x80210F7C: sb          $t6, 0xE($a2)
    MEM_B(0XE, ctx->r6) = ctx->r14;
    // 0x80210F80: lbu         $t9, 0xC($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0XC);
    // 0x80210F84: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80210F88: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80210F8C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80210F90: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x80210F94: bgez        $t9, L_80210FAC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80210F98: cvt.s.w     $f2, $f8
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80210FAC;
    }
    // 0x80210F98: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80210F9C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210FA0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210FA4: nop

    // 0x80210FA8: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
L_80210FAC:
    // 0x80210FAC: lhu         $t0, 0x6($a3)
    ctx->r8 = MEM_HU(ctx->r7, 0X6);
    // 0x80210FB0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210FB4: beq         $t0, $zero, L_80210FC8
    if (ctx->r8 == 0) {
        // 0x80210FB8: nop
    
            goto L_80210FC8;
    }
    // 0x80210FB8: nop

    // 0x80210FBC: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x80210FC0: b           L_80210FE4
    // 0x80210FC4: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
        goto L_80210FE4;
    // 0x80210FC4: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
L_80210FC8:
    // 0x80210FC8: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80210FCC: nop

    // 0x80210FD0: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80210FD4: nop

    // 0x80210FD8: mul.s       $f0, $f6, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80210FDC: nop

    // 0x80210FE0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
L_80210FE4:
    // 0x80210FE4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80210FE8: nop

    // 0x80210FEC: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80210FF0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80210FF4: nop

    // 0x80210FF8: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x80210FFC: beql        $t2, $zero, L_8021104C
    if (ctx->r10 == 0) {
        // 0x80211000: mfc1        $t2, $f8
        ctx->r10 = (int32_t)ctx->f8.u32l;
            goto L_8021104C;
    }
    goto skip_6;
    // 0x80211000: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    skip_6:
    // 0x80211004: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80211008: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8021100C: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x80211010: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80211014: nop

    // 0x80211018: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8021101C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80211020: nop

    // 0x80211024: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x80211028: bne         $t2, $zero, L_80211040
    if (ctx->r10 != 0) {
        // 0x8021102C: nop
    
            goto L_80211040;
    }
    // 0x8021102C: nop

    // 0x80211030: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x80211034: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80211038: b           L_80211058
    // 0x8021103C: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_80211058;
    // 0x8021103C: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_80211040:
    // 0x80211040: b           L_80211058
    // 0x80211044: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_80211058;
    // 0x80211044: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80211048: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
L_8021104C:
    // 0x8021104C: nop

    // 0x80211050: bltz        $t2, L_80211040
    if (SIGNED(ctx->r10) < 0) {
        // 0x80211054: nop
    
            goto L_80211040;
    }
    // 0x80211054: nop

L_80211058:
    // 0x80211058: lbu         $t3, 0xD($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0XD);
    // 0x8021105C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80211060: sb          $t2, 0xC($a3)
    MEM_B(0XC, ctx->r7) = ctx->r10;
    // 0x80211064: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80211068: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021106C: bgez        $t3, L_80211080
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80211070: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80211080;
    }
    // 0x80211070: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80211074: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80211078: nop

    // 0x8021107C: add.s       $f16, $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f4.fl;
L_80211080:
    // 0x80211080: beq         $t0, $zero, L_80211094
    if (ctx->r8 == 0) {
        // 0x80211084: mov.s       $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
            goto L_80211094;
    }
    // 0x80211084: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x80211088: mul.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x8021108C: b           L_802110B0
    // 0x80211090: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
        goto L_802110B0;
    // 0x80211090: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
L_80211094:
    // 0x80211094: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80211098: nop

    // 0x8021109C: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x802110A0: nop

    // 0x802110A4: mul.s       $f0, $f8, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802110A8: nop

    // 0x802110AC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
L_802110B0:
    // 0x802110B0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802110B4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802110B8: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x802110BC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802110C0: nop

    // 0x802110C4: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x802110C8: beql        $t5, $zero, L_80211118
    if (ctx->r13 == 0) {
        // 0x802110CC: mfc1        $t5, $f10
        ctx->r13 = (int32_t)ctx->f10.u32l;
            goto L_80211118;
    }
    goto skip_7;
    // 0x802110CC: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    skip_7:
    // 0x802110D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802110D4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802110D8: sub.s       $f10, $f0, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x802110DC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802110E0: nop

    // 0x802110E4: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802110E8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802110EC: nop

    // 0x802110F0: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x802110F4: bne         $t5, $zero, L_8021110C
    if (ctx->r13 != 0) {
        // 0x802110F8: nop
    
            goto L_8021110C;
    }
    // 0x802110F8: nop

    // 0x802110FC: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x80211100: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80211104: b           L_80211124
    // 0x80211108: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_80211124;
    // 0x80211108: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8021110C:
    // 0x8021110C: b           L_80211124
    // 0x80211110: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_80211124;
    // 0x80211110: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80211114: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
L_80211118:
    // 0x80211118: nop

    // 0x8021111C: bltz        $t5, L_8021110C
    if (SIGNED(ctx->r13) < 0) {
        // 0x80211120: nop
    
            goto L_8021110C;
    }
    // 0x80211120: nop

L_80211124:
    // 0x80211124: lbu         $t6, 0xE($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0XE);
    // 0x80211128: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8021112C: sb          $t5, 0xD($a3)
    MEM_B(0XD, ctx->r7) = ctx->r13;
    // 0x80211130: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80211134: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80211138: bgez        $t6, L_8021114C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021113C: cvt.s.w     $f16, $f4
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8021114C;
    }
    // 0x8021113C: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80211140: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80211144: nop

    // 0x80211148: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_8021114C:
    // 0x8021114C: beq         $t0, $zero, L_80211160
    if (ctx->r8 == 0) {
        // 0x80211150: mov.s       $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
            goto L_80211160;
    }
    // 0x80211150: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x80211154: mul.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x80211158: b           L_8021117C
    // 0x8021115C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
        goto L_8021117C;
    // 0x8021115C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
L_80211160:
    // 0x80211160: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80211164: nop

    // 0x80211168: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8021116C: nop

    // 0x80211170: mul.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80211174: nop

    // 0x80211178: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
L_8021117C:
    // 0x8021117C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80211180: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80211184: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80211188: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8021118C: nop

    // 0x80211190: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80211194: beql        $t8, $zero, L_802111E4
    if (ctx->r24 == 0) {
        // 0x80211198: mfc1        $t8, $f4
        ctx->r24 = (int32_t)ctx->f4.u32l;
            goto L_802111E4;
    }
    goto skip_8;
    // 0x80211198: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    skip_8:
    // 0x8021119C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802111A0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802111A4: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802111A8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x802111AC: nop

    // 0x802111B0: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802111B4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802111B8: nop

    // 0x802111BC: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x802111C0: bne         $t8, $zero, L_802111D8
    if (ctx->r24 != 0) {
        // 0x802111C4: nop
    
            goto L_802111D8;
    }
    // 0x802111C4: nop

    // 0x802111C8: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x802111CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802111D0: b           L_802111F0
    // 0x802111D4: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_802111F0;
    // 0x802111D4: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_802111D8:
    // 0x802111D8: b           L_802111F0
    // 0x802111DC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_802111F0;
    // 0x802111DC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x802111E0: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
L_802111E4:
    // 0x802111E4: nop

    // 0x802111E8: bltz        $t8, L_802111D8
    if (SIGNED(ctx->r24) < 0) {
        // 0x802111EC: nop
    
            goto L_802111D8;
    }
    // 0x802111EC: nop

L_802111F0:
    // 0x802111F0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802111F4: bne         $v0, $a1, L_80210CF0
    if (ctx->r2 != ctx->r5) {
        // 0x802111F8: sb          $t8, 0xE($v1)
        MEM_B(0XE, ctx->r3) = ctx->r24;
            goto L_80210CF0;
    }
    // 0x802111F8: sb          $t8, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r24;
L_802111FC:
    // 0x802111FC: jr          $ra
    // 0x80211200: nop

    return;
    // 0x80211200: nop

;}
RECOMP_FUNC void func_8023E6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E6A0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023E6A4: jr          $ra
    // 0x8023E6A8: lw          $v0, 0x16E4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X16E4);
    return;
    // 0x8023E6A8: lw          $v0, 0x16E4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X16E4);
;}
RECOMP_FUNC void func_8023F8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F8B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023F8B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023F8B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8023F8BC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8023F8C0: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8023F8C4: beql        $t6, $zero, L_8023F928
    if (ctx->r14 == 0) {
        // 0x8023F8C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8023F928;
    }
    goto skip_0;
    // 0x8023F8C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023F8CC: jal         0x80237840
    // 0x8023F8D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80237840(rdram, ctx);
        goto after_0;
    // 0x8023F8D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8023F8D4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F8D8: beq         $v0, $zero, L_8023F924
    if (ctx->r2 == 0) {
        // 0x8023F8DC: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8023F924;
    }
    // 0x8023F8DC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023F8E0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8023F8E4: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x8023F8E8: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x8023F8EC: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8023F8F0: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x8023F8F4: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x8023F8F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023F8FC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8023F900: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8023F904: lbu         $t3, 0x23($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X23);
    // 0x8023F908: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8023F90C: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x8023F910: lw          $t4, 0x8($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X8);
    // 0x8023F914: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    // 0x8023F918: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8023F91C: jalr        $t9
    // 0x8023F920: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8023F920: nop

    after_1:
L_8023F924:
    // 0x8023F924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023F928:
    // 0x8023F928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023F92C: jr          $ra
    // 0x8023F930: nop

    return;
    // 0x8023F930: nop

;}
RECOMP_FUNC void func_8022B088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B088: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8022B08C: lw          $a1, 0x5F84($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5F84);
    // 0x8022B090: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8022B094: ori         $at, $at, 0xA801
    ctx->r1 = ctx->r1 | 0XA801;
    // 0x8022B098: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B09C: sltu        $at, $a1, $at
    ctx->r1 = ctx->r5 < ctx->r1 ? 1 : 0;
    // 0x8022B0A0: beq         $at, $zero, L_8022B0D4
    if (ctx->r1 == 0) {
        // 0x8022B0A4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022B0D4;
    }
    // 0x8022B0A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B0A8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8022B0AC: ori         $a0, $a0, 0xA800
    ctx->r4 = ctx->r4 | 0XA800;
    // 0x8022B0B0: sltu        $at, $a1, $a0
    ctx->r1 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x8022B0B4: beq         $at, $zero, L_8022B108
    if (ctx->r1 == 0) {
        // 0x8022B0B8: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8022B108;
    }
    // 0x8022B0B8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_8022B0BC:
    // 0x8022B0BC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8022B0C0: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8022B0C4: bne         $at, $zero, L_8022B0BC
    if (ctx->r1 != 0) {
        // 0x8022B0C8: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_8022B0BC;
    }
    // 0x8022B0C8: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x8022B0CC: b           L_8022B108
    // 0x8022B0D0: nop

        goto L_8022B108;
    // 0x8022B0D0: nop

L_8022B0D4:
    // 0x8022B0D4: jal         0x80204530
    // 0x8022B0D8: nop

    func_80204530(rdram, ctx);
        goto after_0;
    // 0x8022B0D8: nop

    after_0:
    // 0x8022B0DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022B0E0: ori         $at, $at, 0x400
    ctx->r1 = ctx->r1 | 0X400;
    // 0x8022B0E4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8022B0E8: ori         $a0, $a0, 0xA800
    ctx->r4 = ctx->r4 | 0XA800;
    // 0x8022B0EC: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
    // 0x8022B0F0: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8022B0F4: beq         $at, $zero, L_8022B108
    if (ctx->r1 == 0) {
        // 0x8022B0F8: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8022B108;
    }
L_8022B0F8:
    // 0x8022B0F8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8022B0FC: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8022B100: bne         $at, $zero, L_8022B0F8
    if (ctx->r1 != 0) {
        // 0x8022B104: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_8022B0F8;
    }
    // 0x8022B104: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
L_8022B108:
    // 0x8022B108: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8022B10C: lw          $a1, 0x5F84($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5F84);
    // 0x8022B110: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8022B114: ori         $at, $at, 0x5801
    ctx->r1 = ctx->r1 | 0X5801;
    // 0x8022B118: sltu        $at, $a1, $at
    ctx->r1 = ctx->r5 < ctx->r1 ? 1 : 0;
    // 0x8022B11C: bne         $at, $zero, L_8022B158
    if (ctx->r1 != 0) {
        // 0x8022B120: lui         $v0, 0x8020
        ctx->r2 = S32(0X8020 << 16);
            goto L_8022B158;
    }
    // 0x8022B120: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B124: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x8022B128: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022B12C: beq         $at, $zero, L_8022B158
    if (ctx->r1 == 0) {
        // 0x8022B130: sltu        $at, $a1, $v0
        ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
            goto L_8022B158;
    }
    // 0x8022B130: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022B134: beq         $at, $zero, L_8022B184
    if (ctx->r1 == 0) {
        // 0x8022B138: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8022B184;
    }
    // 0x8022B138: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_8022B13C:
    // 0x8022B13C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8022B140: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022B144: bne         $at, $zero, L_8022B13C
    if (ctx->r1 != 0) {
        // 0x8022B148: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_8022B13C;
    }
    // 0x8022B148: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x8022B14C: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8022B150: b           L_8022B184
    // 0x8022B154: lw          $a1, 0x5F84($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5F84);
        goto L_8022B184;
    // 0x8022B154: lw          $a1, 0x5F84($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5F84);
L_8022B158:
    // 0x8022B158: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B15C: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x8022B160: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8022B164: beq         $v0, $zero, L_8022B184
    if (ctx->r2 == 0) {
        // 0x8022B168: ori         $v1, $v1, 0x5800
        ctx->r3 = ctx->r3 | 0X5800;
            goto L_8022B184;
    }
    // 0x8022B168: ori         $v1, $v1, 0x5800
    ctx->r3 = ctx->r3 | 0X5800;
L_8022B16C:
    // 0x8022B16C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8022B170: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022B174: bne         $at, $zero, L_8022B16C
    if (ctx->r1 != 0) {
        // 0x8022B178: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_8022B16C;
    }
    // 0x8022B178: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x8022B17C: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8022B180: lw          $a1, 0x5F84($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5F84);
L_8022B184:
    // 0x8022B184: lui         $v0, 0x8035
    ctx->r2 = S32(0X8035 << 16);
    // 0x8022B188: addiu       $v0, $v0, -0x6ACF
    ctx->r2 = ADD32(ctx->r2, -0X6ACF);
    // 0x8022B18C: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022B190: bne         $at, $zero, L_8022B1C4
    if (ctx->r1 != 0) {
        // 0x8022B194: lui         $v1, 0x8035
        ctx->r3 = S32(0X8035 << 16);
            goto L_8022B1C4;
    }
    // 0x8022B194: lui         $v1, 0x8035
    ctx->r3 = S32(0X8035 << 16);
    // 0x8022B198: lui         $v0, 0x803D
    ctx->r2 = S32(0X803D << 16);
    // 0x8022B19C: ori         $v0, $v0, 0xA800
    ctx->r2 = ctx->r2 | 0XA800;
    // 0x8022B1A0: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022B1A4: beq         $at, $zero, L_8022B1E4
    if (ctx->r1 == 0) {
        // 0x8022B1A8: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8022B1E4;
    }
    // 0x8022B1A8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_8022B1AC:
    // 0x8022B1AC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8022B1B0: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022B1B4: bne         $at, $zero, L_8022B1AC
    if (ctx->r1 != 0) {
        // 0x8022B1B8: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_8022B1AC;
    }
    // 0x8022B1B8: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x8022B1BC: b           L_8022B1E8
    // 0x8022B1C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022B1E8;
    // 0x8022B1C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022B1C4:
    // 0x8022B1C4: beq         $v0, $zero, L_8022B1E4
    if (ctx->r2 == 0) {
        // 0x8022B1C8: addiu       $v1, $v1, -0x6AD0
        ctx->r3 = ADD32(ctx->r3, -0X6AD0);
            goto L_8022B1E4;
    }
    // 0x8022B1C8: addiu       $v1, $v1, -0x6AD0
    ctx->r3 = ADD32(ctx->r3, -0X6AD0);
    // 0x8022B1CC: lui         $v0, 0x803D
    ctx->r2 = S32(0X803D << 16);
    // 0x8022B1D0: ori         $v0, $v0, 0xA800
    ctx->r2 = ctx->r2 | 0XA800;
L_8022B1D4:
    // 0x8022B1D4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8022B1D8: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022B1DC: bne         $at, $zero, L_8022B1D4
    if (ctx->r1 != 0) {
        // 0x8022B1E0: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_8022B1D4;
    }
    // 0x8022B1E0: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
L_8022B1E4:
    // 0x8022B1E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022B1E8:
    // 0x8022B1E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022B1EC: jr          $ra
    // 0x8022B1F0: nop

    return;
    // 0x8022B1F0: nop

;}
RECOMP_FUNC void func_802297A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802297A8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802297AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802297B0: beq         $a1, $a0, L_802297C0
    if (ctx->r5 == ctx->r4) {
        // 0x802297B4: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_802297C0;
    }
    // 0x802297B4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802297B8: bnel        $a2, $a0, L_802297C8
    if (ctx->r6 != ctx->r4) {
        // 0x802297BC: lwc1        $f4, 0x0($a2)
        ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
            goto L_802297C8;
    }
    goto skip_0;
    // 0x802297BC: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    skip_0:
L_802297C0:
    // 0x802297C0: addiu       $v0, $sp, 0x1C
    ctx->r2 = ADD32(ctx->r29, 0X1C);
    // 0x802297C4: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
L_802297C8:
    // 0x802297C8: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802297CC: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x802297D0: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x802297D4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802297D8: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x802297DC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802297E0: lwc1        $f10, 0x20($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X20);
    // 0x802297E4: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802297E8: lwc1        $f6, 0xC($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0XC);
    // 0x802297EC: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x802297F0: lwc1        $f18, 0x30($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X30);
    // 0x802297F4: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x802297F8: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x802297FC: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80229800: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x80229804: lwc1        $f18, 0x4($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80229808: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8022980C: lwc1        $f8, 0x14($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X14);
    // 0x80229810: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80229814: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80229818: lwc1        $f18, 0x8($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8022981C: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80229820: lwc1        $f10, 0x24($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X24);
    // 0x80229824: mul.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x80229828: lwc1        $f18, 0xC($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0XC);
    // 0x8022982C: add.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80229830: lwc1        $f4, 0x34($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X34);
    // 0x80229834: mul.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80229838: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x8022983C: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80229840: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x80229844: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80229848: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8022984C: lwc1        $f6, 0x18($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X18);
    // 0x80229850: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80229854: mul.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80229858: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8022985C: mul.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80229860: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80229864: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80229868: lwc1        $f4, 0xC($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0XC);
    // 0x8022986C: add.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x80229870: lwc1        $f16, 0x38($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X38);
    // 0x80229874: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x80229878: add.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8022987C: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80229880: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x80229884: lwc1        $f16, 0xC($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80229888: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8022988C: lwc1        $f18, 0x1C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x80229890: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80229894: mul.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x80229898: lwc1        $f16, 0x8($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8022989C: mul.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x802298A0: lwc1        $f10, 0x2C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x802298A4: mul.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x802298A8: lwc1        $f16, 0xC($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0XC);
    // 0x802298AC: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802298B0: lwc1        $f8, 0x3C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x802298B4: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x802298B8: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x802298BC: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802298C0: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x802298C4: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802298C8: lwc1        $f18, 0x10($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X10);
    // 0x802298CC: lwc1        $f4, 0x10($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X10);
    // 0x802298D0: lwc1        $f10, 0x14($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X14);
    // 0x802298D4: mul.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x802298D8: lwc1        $f8, 0x18($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X18);
    // 0x802298DC: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802298E0: lwc1        $f10, 0x20($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X20);
    // 0x802298E4: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802298E8: lwc1        $f8, 0x1C($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x802298EC: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x802298F0: lwc1        $f6, 0x30($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X30);
    // 0x802298F4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802298F8: add.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802298FC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80229900: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x80229904: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80229908: lwc1        $f4, 0x10($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X10);
    // 0x8022990C: lwc1        $f16, 0x14($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X14);
    // 0x80229910: lwc1        $f10, 0x14($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X14);
    // 0x80229914: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80229918: lwc1        $f6, 0x18($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X18);
    // 0x8022991C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80229920: lwc1        $f10, 0x24($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X24);
    // 0x80229924: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80229928: lwc1        $f6, 0x1C($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x8022992C: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80229930: lwc1        $f18, 0x34($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X34);
    // 0x80229934: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x80229938: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x8022993C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80229940: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    // 0x80229944: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80229948: lwc1        $f16, 0x10($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X10);
    // 0x8022994C: lwc1        $f8, 0x18($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X18);
    // 0x80229950: lwc1        $f10, 0x14($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X14);
    // 0x80229954: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80229958: lwc1        $f18, 0x18($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X18);
    // 0x8022995C: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80229960: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80229964: mul.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x80229968: lwc1        $f18, 0x1C($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x8022996C: add.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80229970: lwc1        $f4, 0x38($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X38);
    // 0x80229974: mul.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80229978: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x8022997C: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80229980: swc1        $f16, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f16.u32l;
    // 0x80229984: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80229988: lwc1        $f8, 0x10($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X10);
    // 0x8022998C: lwc1        $f6, 0x1C($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x80229990: lwc1        $f10, 0x14($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X14);
    // 0x80229994: mul.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80229998: lwc1        $f4, 0x18($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X18);
    // 0x8022999C: mul.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802299A0: lwc1        $f10, 0x2C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x802299A4: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802299A8: lwc1        $f4, 0x1C($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x802299AC: add.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x802299B0: lwc1        $f16, 0x3C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x802299B4: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x802299B8: add.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x802299BC: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x802299C0: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x802299C4: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802299C8: lwc1        $f6, 0x20($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X20);
    // 0x802299CC: lwc1        $f18, 0x10($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X10);
    // 0x802299D0: lwc1        $f10, 0x24($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X24);
    // 0x802299D4: mul.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x802299D8: lwc1        $f16, 0x28($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X28);
    // 0x802299DC: mul.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x802299E0: lwc1        $f10, 0x20($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X20);
    // 0x802299E4: mul.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x802299E8: lwc1        $f16, 0x2C($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X2C);
    // 0x802299EC: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802299F0: lwc1        $f8, 0x30($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X30);
    // 0x802299F4: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x802299F8: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x802299FC: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80229A00: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    // 0x80229A04: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80229A08: lwc1        $f18, 0x20($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X20);
    // 0x80229A0C: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x80229A10: lwc1        $f10, 0x24($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X24);
    // 0x80229A14: mul.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x80229A18: lwc1        $f8, 0x28($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X28);
    // 0x80229A1C: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80229A20: lwc1        $f10, 0x24($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X24);
    // 0x80229A24: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80229A28: lwc1        $f8, 0x2C($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X2C);
    // 0x80229A2C: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x80229A30: lwc1        $f6, 0x34($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X34);
    // 0x80229A34: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80229A38: add.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80229A3C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80229A40: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    // 0x80229A44: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80229A48: lwc1        $f4, 0x20($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X20);
    // 0x80229A4C: lwc1        $f16, 0x18($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X18);
    // 0x80229A50: lwc1        $f10, 0x24($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X24);
    // 0x80229A54: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80229A58: lwc1        $f6, 0x28($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X28);
    // 0x80229A5C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80229A60: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80229A64: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80229A68: lwc1        $f6, 0x2C($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X2C);
    // 0x80229A6C: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80229A70: lwc1        $f18, 0x38($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X38);
    // 0x80229A74: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x80229A78: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80229A7C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80229A80: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
    // 0x80229A84: lwc1        $f18, 0xC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80229A88: lwc1        $f16, 0x20($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X20);
    // 0x80229A8C: lwc1        $f8, 0x1C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x80229A90: lwc1        $f10, 0x24($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X24);
    // 0x80229A94: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80229A98: lwc1        $f18, 0x28($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X28);
    // 0x80229A9C: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80229AA0: lwc1        $f10, 0x2C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x80229AA4: mul.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x80229AA8: lwc1        $f18, 0x2C($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X2C);
    // 0x80229AAC: add.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80229AB0: lwc1        $f4, 0x3C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x80229AB4: mul.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80229AB8: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x80229ABC: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80229AC0: swc1        $f16, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f16.u32l;
    // 0x80229AC4: lwc1        $f8, 0x30($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X30);
    // 0x80229AC8: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80229ACC: lwc1        $f10, 0x34($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X34);
    // 0x80229AD0: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80229AD4: mul.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80229AD8: lwc1        $f4, 0x38($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X38);
    // 0x80229ADC: mul.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80229AE0: lwc1        $f10, 0x20($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X20);
    // 0x80229AE4: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80229AE8: lwc1        $f4, 0x3C($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X3C);
    // 0x80229AEC: add.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x80229AF0: lwc1        $f16, 0x30($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X30);
    // 0x80229AF4: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x80229AF8: add.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80229AFC: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80229B00: swc1        $f8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f8.u32l;
    // 0x80229B04: lwc1        $f6, 0x30($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X30);
    // 0x80229B08: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80229B0C: lwc1        $f10, 0x34($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X34);
    // 0x80229B10: lwc1        $f18, 0x14($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X14);
    // 0x80229B14: mul.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x80229B18: lwc1        $f16, 0x38($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X38);
    // 0x80229B1C: mul.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80229B20: lwc1        $f10, 0x24($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X24);
    // 0x80229B24: mul.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x80229B28: lwc1        $f16, 0x3C($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X3C);
    // 0x80229B2C: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80229B30: lwc1        $f8, 0x34($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X34);
    // 0x80229B34: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80229B38: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x80229B3C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80229B40: swc1        $f6, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f6.u32l;
    // 0x80229B44: lwc1        $f18, 0x30($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X30);
    // 0x80229B48: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80229B4C: lwc1        $f10, 0x34($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X34);
    // 0x80229B50: lwc1        $f4, 0x18($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X18);
    // 0x80229B54: mul.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x80229B58: lwc1        $f8, 0x38($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X38);
    // 0x80229B5C: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80229B60: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80229B64: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80229B68: lwc1        $f8, 0x3C($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X3C);
    // 0x80229B6C: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x80229B70: lwc1        $f6, 0x38($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X38);
    // 0x80229B74: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80229B78: add.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80229B7C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80229B80: swc1        $f18, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f18.u32l;
    // 0x80229B84: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80229B88: lwc1        $f4, 0x30($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X30);
    // 0x80229B8C: lwc1        $f16, 0x1C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x80229B90: lwc1        $f10, 0x34($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X34);
    // 0x80229B94: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80229B98: lwc1        $f6, 0x38($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X38);
    // 0x80229B9C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80229BA0: lwc1        $f10, 0x2C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x80229BA4: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80229BA8: lwc1        $f6, 0x3C($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X3C);
    // 0x80229BAC: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80229BB0: lwc1        $f18, 0x3C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x80229BB4: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x80229BB8: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80229BBC: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80229BC0: beq         $a1, $a0, L_80229BD0
    if (ctx->r5 == ctx->r4) {
        // 0x80229BC4: swc1        $f4, 0x3C($v0)
        MEM_W(0X3C, ctx->r2) = ctx->f4.u32l;
            goto L_80229BD0;
    }
    // 0x80229BC4: swc1        $f4, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f4.u32l;
    // 0x80229BC8: bnel        $a2, $a0, L_80229BDC
    if (ctx->r6 != ctx->r4) {
        // 0x80229BCC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80229BDC;
    }
    goto skip_1;
    // 0x80229BCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
L_80229BD0:
    // 0x80229BD0: jal         0x80228DE0
    // 0x80229BD4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x80229BD4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80229BD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80229BDC:
    // 0x80229BDC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80229BE0: jr          $ra
    // 0x80229BE4: nop

    return;
    // 0x80229BE4: nop

;}
RECOMP_FUNC void func_80249228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249228: jr          $ra
    // 0x8024922C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    return;
    // 0x8024922C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
;}
RECOMP_FUNC void func_80225624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80225624: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80225628: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022562C: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x80225630: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80225634: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80225638: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022563C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80225640: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80225644: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80225648: addiu       $a0, $sp, 0x3D
    ctx->r4 = ADD32(ctx->r29, 0X3D);
    // 0x8022564C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80225650: jal         0x80225424
    // 0x80225654: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_0;
    // 0x80225654: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80225658: lbu         $a0, 0x3D($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3D);
    // 0x8022565C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80225660: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80225664: jal         0x8022B948
    // 0x80225668: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022B948(rdram, ctx);
        goto after_1;
    // 0x80225668: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x8022566C: lbu         $t7, 0x3D($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3D);
    // 0x80225670: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80225674: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80225678: blez        $t7, L_802256CC
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8022567C: addiu       $s4, $zero, 0xFF
        ctx->r20 = ADD32(0, 0XFF);
            goto L_802256CC;
    }
    // 0x8022567C: addiu       $s4, $zero, 0xFF
    ctx->r20 = ADD32(0, 0XFF);
L_80225680:
    // 0x80225680: sll         $t8, $s0, 3
    ctx->r24 = S32(ctx->r16 << 3);
    // 0x80225684: addu        $s1, $t8, $s3
    ctx->r17 = ADD32(ctx->r24, ctx->r19);
    // 0x80225688: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8022568C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80225690: jal         0x80225424
    // 0x80225694: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_2;
    // 0x80225694: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x80225698: addiu       $a0, $s1, 0x4
    ctx->r4 = ADD32(ctx->r17, 0X4);
    // 0x8022569C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802256A0: jal         0x80225424
    // 0x802256A4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_3;
    // 0x802256A4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x802256A8: sll         $t9, $s0, 3
    ctx->r25 = S32(ctx->r16 << 3);
    // 0x802256AC: addu        $t0, $s3, $t9
    ctx->r8 = ADD32(ctx->r19, ctx->r25);
    // 0x802256B0: sb          $s4, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r20;
    // 0x802256B4: lbu         $t2, 0x3D($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X3D);
    // 0x802256B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802256BC: andi        $t1, $s0, 0xFFFF
    ctx->r9 = ctx->r16 & 0XFFFF;
    // 0x802256C0: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x802256C4: bne         $at, $zero, L_80225680
    if (ctx->r1 != 0) {
        // 0x802256C8: or          $s0, $t1, $zero
        ctx->r16 = ctx->r9 | 0;
            goto L_80225680;
    }
    // 0x802256C8: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
L_802256CC:
    // 0x802256CC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x802256D0: jal         0x8022B948
    // 0x802256D4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_4;
    // 0x802256D4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x802256D8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802256DC: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x802256E0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802256E4: jal         0x80225424
    // 0x802256E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_5;
    // 0x802256E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x802256EC: addiu       $a0, $s0, 0x9
    ctx->r4 = ADD32(ctx->r16, 0X9);
    // 0x802256F0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802256F4: jal         0x80225424
    // 0x802256F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_6;
    // 0x802256F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x802256FC: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x80225700: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80225704: jal         0x80225424
    // 0x80225708: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_7;
    // 0x80225708: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_7:
    // 0x8022570C: sw          $s3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r19;
    // 0x80225710: lbu         $t3, 0x3D($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X3D);
    // 0x80225714: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80225718: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
    // 0x8022571C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80225720: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80225724: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80225728: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022572C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80225730: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80225734: jr          $ra
    // 0x80225738: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80225738: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80205358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205358: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8020535C: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80205360: lhu         $a2, 0xBC6($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0XBC6);
    // 0x80205364: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80205368: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8020536C: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80205370: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x80205374: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80205378: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8020537C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80205380: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80205384: beq         $at, $zero, L_802053A8
    if (ctx->r1 == 0) {
        // 0x80205388: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802053A8;
    }
    // 0x80205388: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8020538C: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80205390: lw          $t6, 0x523C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X523C);
    // 0x80205394: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80205398: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8020539C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x802053A0: bne         $a0, $zero, L_802053BC
    if (ctx->r4 != 0) {
        // 0x802053A4: nop
    
            goto L_802053BC;
    }
    // 0x802053A4: nop

L_802053A8:
    // 0x802053A8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802053AC: jal         0x80231A24
    // 0x802053B0: addiu       $a0, $a0, 0x2908
    ctx->r4 = ADD32(ctx->r4, 0X2908);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x802053B0: addiu       $a0, $a0, 0x2908
    ctx->r4 = ADD32(ctx->r4, 0X2908);
    after_0:
    // 0x802053B4: b           L_80205508
    // 0x802053B8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80205508;
    // 0x802053B8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802053BC:
    // 0x802053BC: jal         0x80223840
    // 0x802053C0: nop

    func_80223840(rdram, ctx);
        goto after_1;
    // 0x802053C0: nop

    after_1:
    // 0x802053C4: lui         $a3, 0x2E43
    ctx->r7 = S32(0X2E43 << 16);
    // 0x802053C8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x802053CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802053D0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802053D4: ori         $a3, $a3, 0x544C
    ctx->r7 = ctx->r7 | 0X544C;
    // 0x802053D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802053DC: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x802053E0: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x802053E4: jal         0x80223B30
    // 0x802053E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80223B30(rdram, ctx);
        goto after_2;
    // 0x802053E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x802053EC: lui         $a3, 0x2E54
    ctx->r7 = S32(0X2E54 << 16);
    // 0x802053F0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x802053F4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802053F8: ori         $a3, $a3, 0x424C
    ctx->r7 = ctx->r7 | 0X424C;
    // 0x802053FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80205400: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80205404: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80205408: jal         0x80223B30
    // 0x8020540C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80223B30(rdram, ctx);
        goto after_3;
    // 0x8020540C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80205410: jal         0x802238F0
    // 0x80205414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802238F0(rdram, ctx);
        goto after_4;
    // 0x80205414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80205418: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x8020541C: lui         $s1, 0x8026
    ctx->r17 = S32(0X8026 << 16);
    // 0x80205420: addiu       $s1, $s1, -0x46E8
    ctx->r17 = ADD32(ctx->r17, -0X46E8);
    // 0x80205424: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80205428: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8020542C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80205430: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80205434: jal         0x80236CD0
    // 0x80205438: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80236CD0(rdram, ctx);
        goto after_5;
    // 0x80205438: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_5:
    // 0x8020543C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80205440: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80205444: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x80205448: jal         0x8022B460
    // 0x8020544C: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    func_8022B460(rdram, ctx);
        goto after_6;
    // 0x8020544C: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    after_6:
    // 0x80205450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80205454: jal         0x80236E34
    // 0x80205458: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    func_80236E34(rdram, ctx);
        goto after_7;
    // 0x80205458: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_7:
    // 0x8020545C: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x80205460: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80205464: addiu       $v0, $v0, -0x4684
    ctx->r2 = ADD32(ctx->r2, -0X4684);
    // 0x80205468: lui         $s4, 0x8025
    ctx->r20 = S32(0X8025 << 16);
    // 0x8020546C: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80205470: lw          $t4, 0xC($t2)
    ctx->r12 = MEM_W(ctx->r10, 0XC);
    // 0x80205474: addiu       $s4, $s4, -0x1A4C
    ctx->r20 = ADD32(ctx->r20, -0X1A4C);
    // 0x80205478: lw          $t5, 0x0($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X0);
    // 0x8020547C: lui         $s2, 0x8026
    ctx->r18 = S32(0X8026 << 16);
    // 0x80205480: addiu       $s2, $s2, -0x467C
    ctx->r18 = ADD32(ctx->r18, -0X467C);
    // 0x80205484: sw          $t4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r12;
    // 0x80205488: lw          $t6, 0x44($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X44);
    // 0x8020548C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80205490: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80205494: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80205498: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8020549C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x802054A0: jal         0x80236CD0
    // 0x802054A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80236CD0(rdram, ctx);
        goto after_8;
    // 0x802054A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
    // 0x802054A8: lw          $s0, 0x0($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X0);
    // 0x802054AC: lui         $s5, 0x8026
    ctx->r21 = S32(0X8026 << 16);
    // 0x802054B0: addiu       $s5, $s5, -0x4678
    ctx->r21 = ADD32(ctx->r21, -0X4678);
    // 0x802054B4: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x802054B8: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x802054BC: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x802054C0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802054C4: blez        $t9, L_80205504
    if (SIGNED(ctx->r25) <= 0) {
        // 0x802054C8: lw          $s3, 0x10($t8)
        ctx->r19 = MEM_W(ctx->r24, 0X10);
            goto L_80205504;
    }
    // 0x802054C8: lw          $s3, 0x10($t8)
    ctx->r19 = MEM_W(ctx->r24, 0X10);
    // 0x802054CC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802054D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_802054D4:
    // 0x802054D4: jal         0x80234F70
    // 0x802054D8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80234F70(rdram, ctx);
        goto after_9;
    // 0x802054D8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_9:
    // 0x802054DC: lw          $t0, 0x0($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X0);
    // 0x802054E0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802054E4: addu        $t1, $t0, $s2
    ctx->r9 = ADD32(ctx->r8, ctx->r18);
    // 0x802054E8: sh          $v0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r2;
    // 0x802054EC: lw          $s0, 0x0($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X0);
    // 0x802054F0: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x802054F4: lw          $t2, 0x44($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X44);
    // 0x802054F8: slt         $at, $s1, $t2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x802054FC: bnel        $at, $zero, L_802054D4
    if (ctx->r1 != 0) {
        // 0x80205500: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802054D4;
    }
    goto skip_0;
    // 0x80205500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
L_80205504:
    // 0x80205504: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80205508:
    // 0x80205508: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8020550C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80205510: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80205514: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80205518: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8020551C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80205520: jr          $ra
    // 0x80205524: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80205524: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80231268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231268: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x8023126C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80231270: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80231274: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80231278: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8023127C: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80231280: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80231284: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80231288: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8023128C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80231290: jal         0x8022331C
    // 0x80231294: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    func_8022331C(rdram, ctx);
        goto after_0;
    // 0x80231294: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_0:
    // 0x80231298: jal         0x802233EC
    // 0x8023129C: addiu       $a0, $zero, 0xFFF
    ctx->r4 = ADD32(0, 0XFFF);
    func_802233EC(rdram, ctx);
        goto after_1;
    // 0x8023129C: addiu       $a0, $zero, 0xFFF
    ctx->r4 = ADD32(0, 0XFFF);
    after_1:
    // 0x802312A0: jal         0x8022342C
    // 0x802312A4: lui         $a0, 0xB0
    ctx->r4 = S32(0XB0 << 16);
    func_8022342C(rdram, ctx);
        goto after_2;
    // 0x802312A4: lui         $a0, 0xB0
    ctx->r4 = S32(0XB0 << 16);
    after_2:
    // 0x802312A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802312AC: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x802312B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802312B4: addiu       $s0, $sp, 0x74
    ctx->r16 = ADD32(ctx->r29, 0X74);
    // 0x802312B8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802312BC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802312C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802312C4: lui         $a2, 0x43A0
    ctx->r6 = S32(0X43A0 << 16);
    // 0x802312C8: jal         0x8022A848
    // 0x802312CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8022A848(rdram, ctx);
        goto after_3;
    // 0x802312CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x802312D0: jal         0x80221B2C
    // 0x802312D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80221B2C(rdram, ctx);
        goto after_4;
    // 0x802312D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x802312D8: jal         0x8022970C
    // 0x802312DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_5;
    // 0x802312DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x802312E0: jal         0x8022149C
    // 0x802312E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022149C(rdram, ctx);
        goto after_6;
    // 0x802312E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x802312E8: jal         0x8021F4E4
    // 0x802312EC: nop

    func_8021F4E4(rdram, ctx);
        goto after_7;
    // 0x802312EC: nop

    after_7:
    // 0x802312F0: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x802312F4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x802312F8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802312FC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80231300: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x80231304: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80231308: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023130C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80231310: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80231314: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80231318: jal         0x8021F35C
    // 0x8023131C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_8;
    // 0x8023131C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_8:
    // 0x80231320: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x80231324: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80231328: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8023132C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80231330: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    // 0x80231334: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80231338: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023133C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80231340: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80231344: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80231348: jal         0x8021F35C
    // 0x8023134C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_9;
    // 0x8023134C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_9:
    // 0x80231350: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x80231354: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80231358: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8023135C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80231360: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    // 0x80231364: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    // 0x80231368: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023136C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80231370: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80231374: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80231378: jal         0x8021F35C
    // 0x8023137C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_10;
    // 0x8023137C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_10:
    // 0x80231380: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x80231384: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80231388: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8023138C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80231390: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x80231394: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    // 0x80231398: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023139C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802313A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802313A4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802313A8: jal         0x8021F35C
    // 0x802313AC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8021F35C(rdram, ctx);
        goto after_11;
    // 0x802313AC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_11:
    // 0x802313B0: jal         0x8021FCD0
    // 0x802313B4: nop

    func_8021FCD0(rdram, ctx);
        goto after_12;
    // 0x802313B4: nop

    after_12:
    // 0x802313B8: sh          $zero, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = 0;
L_802313BC:
    // 0x802313BC: lh          $t4, 0xBA($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XBA);
    // 0x802313C0: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x802313C4: lw          $t8, 0xC8C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XC8C);
    // 0x802313C8: addiu       $t5, $zero, 0x1F
    ctx->r13 = ADD32(0, 0X1F);
    // 0x802313CC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802313D0: subu        $s5, $t5, $t4
    ctx->r21 = SUB32(ctx->r13, ctx->r12);
    // 0x802313D4: sllv        $t7, $t6, $s5
    ctx->r15 = S32(ctx->r14 << (ctx->r21 & 31));
    // 0x802313D8: and         $t9, $t7, $t8
    ctx->r25 = ctx->r15 & ctx->r24;
    // 0x802313DC: beq         $t9, $zero, L_802313F4
    if (ctx->r25 == 0) {
        // 0x802313E0: or          $s6, $zero, $zero
        ctx->r22 = 0 | 0;
            goto L_802313F4;
    }
    // 0x802313E0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x802313E4: addiu       $s6, $zero, 0xFF
    ctx->r22 = ADD32(0, 0XFF);
    // 0x802313E8: addiu       $s7, $zero, 0xFF
    ctx->r23 = ADD32(0, 0XFF);
    // 0x802313EC: b           L_802313FC
    // 0x802313F0: addiu       $fp, $zero, 0xFF
    ctx->r30 = ADD32(0, 0XFF);
        goto L_802313FC;
    // 0x802313F0: addiu       $fp, $zero, 0xFF
    ctx->r30 = ADD32(0, 0XFF);
L_802313F4:
    // 0x802313F4: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x802313F8: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
L_802313FC:
    // 0x802313FC: jal         0x8021F4E4
    // 0x80231400: nop

    func_8021F4E4(rdram, ctx);
        goto after_13;
    // 0x80231400: nop

    after_13:
    // 0x80231404: lh          $t0, 0xBA($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XBA);
    // 0x80231408: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8023140C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80231410: bgez        $t0, L_80231424
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80231414: andi        $t1, $t0, 0x3
        ctx->r9 = ctx->r8 & 0X3;
            goto L_80231424;
    }
    // 0x80231414: andi        $t1, $t0, 0x3
    ctx->r9 = ctx->r8 & 0X3;
    // 0x80231418: beq         $t1, $zero, L_80231424
    if (ctx->r9 == 0) {
        // 0x8023141C: nop
    
            goto L_80231424;
    }
    // 0x8023141C: nop

    // 0x80231420: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
L_80231424:
    // 0x80231424: multu       $t1, $v0
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231428: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8023142C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80231430: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80231434: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80231438: or          $s0, $fp, $zero
    ctx->r16 = ctx->r30 | 0;
    // 0x8023143C: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    // 0x80231440: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
    // 0x80231444: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    // 0x80231448: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
    // 0x8023144C: mflo        $s3
    ctx->r19 = lo;
    // 0x80231450: addiu       $s3, $s3, 0x14
    ctx->r19 = ADD32(ctx->r19, 0X14);
    // 0x80231454: sll         $t2, $s3, 16
    ctx->r10 = S32(ctx->r19 << 16);
    // 0x80231458: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8023145C: or          $s3, $t3, $zero
    ctx->r19 = ctx->r11 | 0;
    // 0x80231460: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80231464: bgez        $s5, L_80231474
    if (SIGNED(ctx->r21) >= 0) {
        // 0x80231468: sra         $t5, $s5, 2
        ctx->r13 = S32(SIGNED(ctx->r21) >> 2);
            goto L_80231474;
    }
    // 0x80231468: sra         $t5, $s5, 2
    ctx->r13 = S32(SIGNED(ctx->r21) >> 2);
    // 0x8023146C: addiu       $at, $s5, 0x3
    ctx->r1 = ADD32(ctx->r21, 0X3);
    // 0x80231470: sra         $t5, $at, 2
    ctx->r13 = S32(SIGNED(ctx->r1) >> 2);
L_80231474:
    // 0x80231474: multu       $t5, $v0
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231478: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x8023147C: mflo        $s4
    ctx->r20 = lo;
    // 0x80231480: addiu       $s4, $s4, 0x14
    ctx->r20 = ADD32(ctx->r20, 0X14);
    // 0x80231484: sll         $t4, $s4, 16
    ctx->r12 = S32(ctx->r20 << 16);
    // 0x80231488: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8023148C: jal         0x8021F35C
    // 0x80231490: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    func_8021F35C(rdram, ctx);
        goto after_14;
    // 0x80231490: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    after_14:
    // 0x80231494: addiu       $s6, $s3, 0xA
    ctx->r22 = ADD32(ctx->r19, 0XA);
    // 0x80231498: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8023149C: lh          $s7, 0xBA($sp)
    ctx->r23 = MEM_H(ctx->r29, 0XBA);
    // 0x802314A0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x802314A4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x802314A8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x802314AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802314B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802314B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802314B8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802314BC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802314C0: jal         0x8021F35C
    // 0x802314C4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_8021F35C(rdram, ctx);
        goto after_15;
    // 0x802314C4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_15:
    // 0x802314C8: addiu       $s5, $s4, 0xA
    ctx->r21 = ADD32(ctx->r20, 0XA);
    // 0x802314CC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x802314D0: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802314D4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802314D8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x802314DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802314E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802314E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802314E8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802314EC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802314F0: jal         0x8021F35C
    // 0x802314F4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_8021F35C(rdram, ctx);
        goto after_16;
    // 0x802314F4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_16:
    // 0x802314F8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802314FC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80231500: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80231504: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80231508: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023150C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80231510: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80231514: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80231518: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8023151C: jal         0x8021F35C
    // 0x80231520: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_8021F35C(rdram, ctx);
        goto after_17;
    // 0x80231520: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_17:
    // 0x80231524: jal         0x8021FCD0
    // 0x80231528: nop

    func_8021FCD0(rdram, ctx);
        goto after_18;
    // 0x80231528: nop

    after_18:
    // 0x8023152C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80231530: sll         $t1, $s7, 16
    ctx->r9 = S32(ctx->r23 << 16);
    // 0x80231534: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80231538: slti        $at, $t2, 0x20
    ctx->r1 = SIGNED(ctx->r10) < 0X20 ? 1 : 0;
    // 0x8023153C: bne         $at, $zero, L_802313BC
    if (ctx->r1 != 0) {
        // 0x80231540: sh          $t2, 0xBA($sp)
        MEM_H(0XBA, ctx->r29) = ctx->r10;
            goto L_802313BC;
    }
    // 0x80231540: sh          $t2, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r10;
    // 0x80231544: jal         0x802230E4
    // 0x80231548: nop

    func_802230E4(rdram, ctx);
        goto after_19;
    // 0x80231548: nop

    after_19:
    // 0x8023154C: jal         0x8022337C
    // 0x80231550: nop

    func_8022337C(rdram, ctx);
        goto after_20;
    // 0x80231550: nop

    after_20:
    // 0x80231554: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80231558: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8023155C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80231560: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80231564: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80231568: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8023156C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80231570: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80231574: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80231578: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8023157C: jr          $ra
    // 0x80231580: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x80231580: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_8024711C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024711C: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80247120: lw          $t6, 0x1A70($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1A70);
    // 0x80247124: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80247128: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024712C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80247130: beq         $t7, $t6, L_80247284
    if (ctx->r15 == ctx->r14) {
        // 0x80247134: nop
    
            goto L_80247284;
    }
    // 0x80247134: nop

L_80247138:
    // 0x80247138: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x8024713C: lw          $t8, 0x1A70($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1A70);
    // 0x80247140: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80247144: bne         $t9, $t8, L_80247160
    if (ctx->r25 != ctx->r24) {
        // 0x80247148: sw          $t9, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r25;
            goto L_80247160;
    }
    // 0x80247148: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8024714C: jal         0x8024A740
    // 0x80247150: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8024A740(rdram, ctx);
        goto after_0;
    // 0x80247150: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80247154: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80247158: b           L_80247284
    // 0x8024715C: sw          $zero, 0x5F70($at)
    MEM_W(0X5F70, ctx->r1) = 0;
        goto L_80247284;
    // 0x8024715C: sw          $zero, 0x5F70($at)
    MEM_W(0X5F70, ctx->r1) = 0;
L_80247160:
    // 0x80247160: jal         0x80238B80
    // 0x80247164: nop

    func_80238B80(rdram, ctx);
        goto after_1;
    // 0x80247164: nop

    after_1:
    // 0x80247168: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8024716C: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x80247170: lw          $t1, 0x5F70($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5F70);
    // 0x80247174: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80247178: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8024717C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80247180: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x80247184: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80247188: sw          $t0, 0x5F70($at)
    MEM_W(0X5F70, ctx->r1) = ctx->r8;
    // 0x8024718C: lw          $t6, 0x10($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X10);
    // 0x80247190: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80247194: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    // 0x80247198: or          $t9, $t7, $zero
    ctx->r25 = ctx->r15 | 0;
    // 0x8024719C: sltu        $at, $t6, $t4
    ctx->r1 = ctx->r14 < ctx->r12 ? 1 : 0;
    // 0x802471A0: lw          $t7, 0x14($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X14);
    // 0x802471A4: bne         $at, $zero, L_80247200
    if (ctx->r1 != 0) {
        // 0x802471A8: or          $t5, $t3, $zero
        ctx->r13 = ctx->r11 | 0;
            goto L_80247200;
    }
    // 0x802471A8: or          $t5, $t3, $zero
    ctx->r13 = ctx->r11 | 0;
    // 0x802471AC: sltu        $at, $t4, $t6
    ctx->r1 = ctx->r12 < ctx->r14 ? 1 : 0;
    // 0x802471B0: bne         $at, $zero, L_802471C0
    if (ctx->r1 != 0) {
        // 0x802471B4: sltu        $at, $t5, $t7
        ctx->r1 = ctx->r13 < ctx->r15 ? 1 : 0;
            goto L_802471C0;
    }
    // 0x802471B4: sltu        $at, $t5, $t7
    ctx->r1 = ctx->r13 < ctx->r15 ? 1 : 0;
    // 0x802471B8: beq         $at, $zero, L_80247200
    if (ctx->r1 == 0) {
        // 0x802471BC: nop
    
            goto L_80247200;
    }
    // 0x802471BC: nop

L_802471C0:
    // 0x802471C0: addiu       $t8, $t9, 0x10
    ctx->r24 = ADD32(ctx->r25, 0X10);
    // 0x802471C4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802471C8: lw          $t3, 0x14($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X14);
    // 0x802471CC: lw          $t2, 0x10($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X10);
    // 0x802471D0: sltu        $at, $t3, $t5
    ctx->r1 = ctx->r11 < ctx->r13 ? 1 : 0;
    // 0x802471D4: subu        $t0, $t2, $t4
    ctx->r8 = SUB32(ctx->r10, ctx->r12);
    // 0x802471D8: subu        $t0, $t0, $at
    ctx->r8 = SUB32(ctx->r8, ctx->r1);
    // 0x802471DC: subu        $t1, $t3, $t5
    ctx->r9 = SUB32(ctx->r11, ctx->r13);
    // 0x802471E0: sw          $t1, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r9;
    // 0x802471E4: sw          $t0, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r8;
    // 0x802471E8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x802471EC: lw          $a0, 0x10($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X10);
    // 0x802471F0: jal         0x80247294
    // 0x802471F4: lw          $a1, 0x14($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X14);
    func_80247294(rdram, ctx);
        goto after_2;
    // 0x802471F4: lw          $a1, 0x14($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X14);
    after_2:
    // 0x802471F8: b           L_80247284
    // 0x802471FC: nop

        goto L_80247284;
    // 0x802471FC: nop

L_80247200:
    // 0x80247200: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80247204: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80247208: lw          $t2, 0x4($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X4);
    // 0x8024720C: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x80247210: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80247214: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x80247218: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x8024721C: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80247220: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80247224: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x80247228: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8024722C: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x80247230: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80247234: lw          $t6, 0x18($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X18);
    // 0x80247238: beq         $t6, $zero, L_80247250
    if (ctx->r14 == 0) {
        // 0x8024723C: nop
    
            goto L_80247250;
    }
    // 0x8024723C: nop

    // 0x80247240: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80247244: lw          $a1, 0x1C($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X1C);
    // 0x80247248: jal         0x80236B80
    // 0x8024724C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80236B80(rdram, ctx);
        goto after_3;
    // 0x8024724C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_80247250:
    // 0x80247250: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80247254: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x80247258: lw          $t9, 0xC($t7)
    ctx->r25 = MEM_W(ctx->r15, 0XC);
    // 0x8024725C: bne         $t8, $zero, L_8024726C
    if (ctx->r24 != 0) {
        // 0x80247260: nop
    
            goto L_8024726C;
    }
    // 0x80247260: nop

    // 0x80247264: beq         $t9, $zero, L_80247138
    if (ctx->r25 == 0) {
        // 0x80247268: nop
    
            goto L_80247138;
    }
    // 0x80247268: nop

L_8024726C:
    // 0x8024726C: sw          $t8, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r24;
    // 0x80247270: sw          $t9, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r25;
    // 0x80247274: jal         0x80247308
    // 0x80247278: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_80247308(rdram, ctx);
        goto after_4;
    // 0x80247278: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x8024727C: b           L_80247138
    // 0x80247280: nop

        goto L_80247138;
    // 0x80247280: nop

L_80247284:
    // 0x80247284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80247288: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8024728C: jr          $ra
    // 0x80247290: nop

    return;
    // 0x80247290: nop

;}
RECOMP_FUNC void func_80208B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80208B0C: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x80208B10: beq         $t6, $zero, L_80208B6C
    if (ctx->r14 == 0) {
        // 0x80208B14: andi        $t7, $a2, 0x2
        ctx->r15 = ctx->r6 & 0X2;
            goto L_80208B6C;
    }
    // 0x80208B14: andi        $t7, $a2, 0x2
    ctx->r15 = ctx->r6 & 0X2;
    // 0x80208B18: beq         $t7, $zero, L_80208B34
    if (ctx->r15 == 0) {
        // 0x80208B1C: lh          $v0, 0x0($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X0);
            goto L_80208B34;
    }
    // 0x80208B1C: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80208B20: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80208B24: beql        $at, $zero, L_80208B38
    if (ctx->r1 == 0) {
        // 0x80208B28: andi        $t8, $a2, 0x4
        ctx->r24 = ctx->r6 & 0X4;
            goto L_80208B38;
    }
    goto skip_0;
    // 0x80208B28: andi        $t8, $a2, 0x4
    ctx->r24 = ctx->r6 & 0X4;
    skip_0:
    // 0x80208B2C: jr          $ra
    // 0x80208B30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208B30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208B34:
    // 0x80208B34: andi        $t8, $a2, 0x4
    ctx->r24 = ctx->r6 & 0X4;
L_80208B38:
    // 0x80208B38: beq         $t8, $zero, L_80208B50
    if (ctx->r24 == 0) {
        // 0x80208B3C: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208B50;
    }
    // 0x80208B3C: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208B40: beql        $at, $zero, L_80208B54
    if (ctx->r1 == 0) {
        // 0x80208B44: andi        $t9, $a2, 0x1
        ctx->r25 = ctx->r6 & 0X1;
            goto L_80208B54;
    }
    goto skip_1;
    // 0x80208B44: andi        $t9, $a2, 0x1
    ctx->r25 = ctx->r6 & 0X1;
    skip_1:
    // 0x80208B48: jr          $ra
    // 0x80208B4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208B4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208B50:
    // 0x80208B50: andi        $t9, $a2, 0x1
    ctx->r25 = ctx->r6 & 0X1;
L_80208B54:
    // 0x80208B54: beql        $t9, $zero, L_80208B70
    if (ctx->r25 == 0) {
        // 0x80208B58: andi        $t0, $a1, 0x2
        ctx->r8 = ctx->r5 & 0X2;
            goto L_80208B70;
    }
    goto skip_2;
    // 0x80208B58: andi        $t0, $a1, 0x2
    ctx->r8 = ctx->r5 & 0X2;
    skip_2:
    // 0x80208B5C: bnel        $v0, $a3, L_80208B70
    if (ctx->r2 != ctx->r7) {
        // 0x80208B60: andi        $t0, $a1, 0x2
        ctx->r8 = ctx->r5 & 0X2;
            goto L_80208B70;
    }
    goto skip_3;
    // 0x80208B60: andi        $t0, $a1, 0x2
    ctx->r8 = ctx->r5 & 0X2;
    skip_3:
    // 0x80208B64: jr          $ra
    // 0x80208B68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208B68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208B6C:
    // 0x80208B6C: andi        $t0, $a1, 0x2
    ctx->r8 = ctx->r5 & 0X2;
L_80208B70:
    // 0x80208B70: beq         $t0, $zero, L_80208BCC
    if (ctx->r8 == 0) {
        // 0x80208B74: andi        $t1, $a2, 0x2
        ctx->r9 = ctx->r6 & 0X2;
            goto L_80208BCC;
    }
    // 0x80208B74: andi        $t1, $a2, 0x2
    ctx->r9 = ctx->r6 & 0X2;
    // 0x80208B78: beq         $t1, $zero, L_80208B94
    if (ctx->r9 == 0) {
        // 0x80208B7C: lh          $v0, 0x2($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X2);
            goto L_80208B94;
    }
    // 0x80208B7C: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x80208B80: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80208B84: beql        $at, $zero, L_80208B98
    if (ctx->r1 == 0) {
        // 0x80208B88: andi        $t2, $a2, 0x4
        ctx->r10 = ctx->r6 & 0X4;
            goto L_80208B98;
    }
    goto skip_4;
    // 0x80208B88: andi        $t2, $a2, 0x4
    ctx->r10 = ctx->r6 & 0X4;
    skip_4:
    // 0x80208B8C: jr          $ra
    // 0x80208B90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208B90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208B94:
    // 0x80208B94: andi        $t2, $a2, 0x4
    ctx->r10 = ctx->r6 & 0X4;
L_80208B98:
    // 0x80208B98: beq         $t2, $zero, L_80208BB0
    if (ctx->r10 == 0) {
        // 0x80208B9C: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208BB0;
    }
    // 0x80208B9C: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208BA0: beql        $at, $zero, L_80208BB4
    if (ctx->r1 == 0) {
        // 0x80208BA4: andi        $t3, $a2, 0x1
        ctx->r11 = ctx->r6 & 0X1;
            goto L_80208BB4;
    }
    goto skip_5;
    // 0x80208BA4: andi        $t3, $a2, 0x1
    ctx->r11 = ctx->r6 & 0X1;
    skip_5:
    // 0x80208BA8: jr          $ra
    // 0x80208BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208BB0:
    // 0x80208BB0: andi        $t3, $a2, 0x1
    ctx->r11 = ctx->r6 & 0X1;
L_80208BB4:
    // 0x80208BB4: beql        $t3, $zero, L_80208BD0
    if (ctx->r11 == 0) {
        // 0x80208BB8: andi        $t4, $a1, 0x4
        ctx->r12 = ctx->r5 & 0X4;
            goto L_80208BD0;
    }
    goto skip_6;
    // 0x80208BB8: andi        $t4, $a1, 0x4
    ctx->r12 = ctx->r5 & 0X4;
    skip_6:
    // 0x80208BBC: bnel        $v0, $a3, L_80208BD0
    if (ctx->r2 != ctx->r7) {
        // 0x80208BC0: andi        $t4, $a1, 0x4
        ctx->r12 = ctx->r5 & 0X4;
            goto L_80208BD0;
    }
    goto skip_7;
    // 0x80208BC0: andi        $t4, $a1, 0x4
    ctx->r12 = ctx->r5 & 0X4;
    skip_7:
    // 0x80208BC4: jr          $ra
    // 0x80208BC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208BC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208BCC:
    // 0x80208BCC: andi        $t4, $a1, 0x4
    ctx->r12 = ctx->r5 & 0X4;
L_80208BD0:
    // 0x80208BD0: beq         $t4, $zero, L_80208C2C
    if (ctx->r12 == 0) {
        // 0x80208BD4: andi        $t5, $a2, 0x2
        ctx->r13 = ctx->r6 & 0X2;
            goto L_80208C2C;
    }
    // 0x80208BD4: andi        $t5, $a2, 0x2
    ctx->r13 = ctx->r6 & 0X2;
    // 0x80208BD8: beq         $t5, $zero, L_80208BF4
    if (ctx->r13 == 0) {
        // 0x80208BDC: lh          $v0, 0x4($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X4);
            goto L_80208BF4;
    }
    // 0x80208BDC: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80208BE0: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80208BE4: beql        $at, $zero, L_80208BF8
    if (ctx->r1 == 0) {
        // 0x80208BE8: andi        $t6, $a2, 0x4
        ctx->r14 = ctx->r6 & 0X4;
            goto L_80208BF8;
    }
    goto skip_8;
    // 0x80208BE8: andi        $t6, $a2, 0x4
    ctx->r14 = ctx->r6 & 0X4;
    skip_8:
    // 0x80208BEC: jr          $ra
    // 0x80208BF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208BF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208BF4:
    // 0x80208BF4: andi        $t6, $a2, 0x4
    ctx->r14 = ctx->r6 & 0X4;
L_80208BF8:
    // 0x80208BF8: beq         $t6, $zero, L_80208C10
    if (ctx->r14 == 0) {
        // 0x80208BFC: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208C10;
    }
    // 0x80208BFC: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208C00: beql        $at, $zero, L_80208C14
    if (ctx->r1 == 0) {
        // 0x80208C04: andi        $t7, $a2, 0x1
        ctx->r15 = ctx->r6 & 0X1;
            goto L_80208C14;
    }
    goto skip_9;
    // 0x80208C04: andi        $t7, $a2, 0x1
    ctx->r15 = ctx->r6 & 0X1;
    skip_9:
    // 0x80208C08: jr          $ra
    // 0x80208C0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208C0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208C10:
    // 0x80208C10: andi        $t7, $a2, 0x1
    ctx->r15 = ctx->r6 & 0X1;
L_80208C14:
    // 0x80208C14: beql        $t7, $zero, L_80208C30
    if (ctx->r15 == 0) {
        // 0x80208C18: andi        $t8, $a1, 0x8
        ctx->r24 = ctx->r5 & 0X8;
            goto L_80208C30;
    }
    goto skip_10;
    // 0x80208C18: andi        $t8, $a1, 0x8
    ctx->r24 = ctx->r5 & 0X8;
    skip_10:
    // 0x80208C1C: bnel        $v0, $a3, L_80208C30
    if (ctx->r2 != ctx->r7) {
        // 0x80208C20: andi        $t8, $a1, 0x8
        ctx->r24 = ctx->r5 & 0X8;
            goto L_80208C30;
    }
    goto skip_11;
    // 0x80208C20: andi        $t8, $a1, 0x8
    ctx->r24 = ctx->r5 & 0X8;
    skip_11:
    // 0x80208C24: jr          $ra
    // 0x80208C28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208C28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208C2C:
    // 0x80208C2C: andi        $t8, $a1, 0x8
    ctx->r24 = ctx->r5 & 0X8;
L_80208C30:
    // 0x80208C30: beq         $t8, $zero, L_80208C8C
    if (ctx->r24 == 0) {
        // 0x80208C34: andi        $t9, $a2, 0x2
        ctx->r25 = ctx->r6 & 0X2;
            goto L_80208C8C;
    }
    // 0x80208C34: andi        $t9, $a2, 0x2
    ctx->r25 = ctx->r6 & 0X2;
    // 0x80208C38: beq         $t9, $zero, L_80208C54
    if (ctx->r25 == 0) {
        // 0x80208C3C: lh          $v0, 0x8($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X8);
            goto L_80208C54;
    }
    // 0x80208C3C: lh          $v0, 0x8($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8);
    // 0x80208C40: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80208C44: beql        $at, $zero, L_80208C58
    if (ctx->r1 == 0) {
        // 0x80208C48: andi        $t0, $a2, 0x4
        ctx->r8 = ctx->r6 & 0X4;
            goto L_80208C58;
    }
    goto skip_12;
    // 0x80208C48: andi        $t0, $a2, 0x4
    ctx->r8 = ctx->r6 & 0X4;
    skip_12:
    // 0x80208C4C: jr          $ra
    // 0x80208C50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208C50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208C54:
    // 0x80208C54: andi        $t0, $a2, 0x4
    ctx->r8 = ctx->r6 & 0X4;
L_80208C58:
    // 0x80208C58: beq         $t0, $zero, L_80208C70
    if (ctx->r8 == 0) {
        // 0x80208C5C: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208C70;
    }
    // 0x80208C5C: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208C60: beql        $at, $zero, L_80208C74
    if (ctx->r1 == 0) {
        // 0x80208C64: andi        $t1, $a2, 0x1
        ctx->r9 = ctx->r6 & 0X1;
            goto L_80208C74;
    }
    goto skip_13;
    // 0x80208C64: andi        $t1, $a2, 0x1
    ctx->r9 = ctx->r6 & 0X1;
    skip_13:
    // 0x80208C68: jr          $ra
    // 0x80208C6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208C6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208C70:
    // 0x80208C70: andi        $t1, $a2, 0x1
    ctx->r9 = ctx->r6 & 0X1;
L_80208C74:
    // 0x80208C74: beql        $t1, $zero, L_80208C90
    if (ctx->r9 == 0) {
        // 0x80208C78: andi        $t2, $a1, 0x10
        ctx->r10 = ctx->r5 & 0X10;
            goto L_80208C90;
    }
    goto skip_14;
    // 0x80208C78: andi        $t2, $a1, 0x10
    ctx->r10 = ctx->r5 & 0X10;
    skip_14:
    // 0x80208C7C: bnel        $v0, $a3, L_80208C90
    if (ctx->r2 != ctx->r7) {
        // 0x80208C80: andi        $t2, $a1, 0x10
        ctx->r10 = ctx->r5 & 0X10;
            goto L_80208C90;
    }
    goto skip_15;
    // 0x80208C80: andi        $t2, $a1, 0x10
    ctx->r10 = ctx->r5 & 0X10;
    skip_15:
    // 0x80208C84: jr          $ra
    // 0x80208C88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208C88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208C8C:
    // 0x80208C8C: andi        $t2, $a1, 0x10
    ctx->r10 = ctx->r5 & 0X10;
L_80208C90:
    // 0x80208C90: beq         $t2, $zero, L_80208CEC
    if (ctx->r10 == 0) {
        // 0x80208C94: andi        $t3, $a2, 0x2
        ctx->r11 = ctx->r6 & 0X2;
            goto L_80208CEC;
    }
    // 0x80208C94: andi        $t3, $a2, 0x2
    ctx->r11 = ctx->r6 & 0X2;
    // 0x80208C98: beq         $t3, $zero, L_80208CB4
    if (ctx->r11 == 0) {
        // 0x80208C9C: lh          $v0, 0xA($a0)
        ctx->r2 = MEM_H(ctx->r4, 0XA);
            goto L_80208CB4;
    }
    // 0x80208C9C: lh          $v0, 0xA($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XA);
    // 0x80208CA0: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80208CA4: beql        $at, $zero, L_80208CB8
    if (ctx->r1 == 0) {
        // 0x80208CA8: andi        $t4, $a2, 0x4
        ctx->r12 = ctx->r6 & 0X4;
            goto L_80208CB8;
    }
    goto skip_16;
    // 0x80208CA8: andi        $t4, $a2, 0x4
    ctx->r12 = ctx->r6 & 0X4;
    skip_16:
    // 0x80208CAC: jr          $ra
    // 0x80208CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208CB4:
    // 0x80208CB4: andi        $t4, $a2, 0x4
    ctx->r12 = ctx->r6 & 0X4;
L_80208CB8:
    // 0x80208CB8: beq         $t4, $zero, L_80208CD0
    if (ctx->r12 == 0) {
        // 0x80208CBC: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208CD0;
    }
    // 0x80208CBC: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208CC0: beql        $at, $zero, L_80208CD4
    if (ctx->r1 == 0) {
        // 0x80208CC4: andi        $t5, $a2, 0x1
        ctx->r13 = ctx->r6 & 0X1;
            goto L_80208CD4;
    }
    goto skip_17;
    // 0x80208CC4: andi        $t5, $a2, 0x1
    ctx->r13 = ctx->r6 & 0X1;
    skip_17:
    // 0x80208CC8: jr          $ra
    // 0x80208CCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208CCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208CD0:
    // 0x80208CD0: andi        $t5, $a2, 0x1
    ctx->r13 = ctx->r6 & 0X1;
L_80208CD4:
    // 0x80208CD4: beql        $t5, $zero, L_80208CF0
    if (ctx->r13 == 0) {
        // 0x80208CD8: andi        $t6, $a1, 0x20
        ctx->r14 = ctx->r5 & 0X20;
            goto L_80208CF0;
    }
    goto skip_18;
    // 0x80208CD8: andi        $t6, $a1, 0x20
    ctx->r14 = ctx->r5 & 0X20;
    skip_18:
    // 0x80208CDC: bnel        $v0, $a3, L_80208CF0
    if (ctx->r2 != ctx->r7) {
        // 0x80208CE0: andi        $t6, $a1, 0x20
        ctx->r14 = ctx->r5 & 0X20;
            goto L_80208CF0;
    }
    goto skip_19;
    // 0x80208CE0: andi        $t6, $a1, 0x20
    ctx->r14 = ctx->r5 & 0X20;
    skip_19:
    // 0x80208CE4: jr          $ra
    // 0x80208CE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208CE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208CEC:
    // 0x80208CEC: andi        $t6, $a1, 0x20
    ctx->r14 = ctx->r5 & 0X20;
L_80208CF0:
    // 0x80208CF0: beq         $t6, $zero, L_80208D4C
    if (ctx->r14 == 0) {
        // 0x80208CF4: andi        $t7, $a2, 0x2
        ctx->r15 = ctx->r6 & 0X2;
            goto L_80208D4C;
    }
    // 0x80208CF4: andi        $t7, $a2, 0x2
    ctx->r15 = ctx->r6 & 0X2;
    // 0x80208CF8: beq         $t7, $zero, L_80208D14
    if (ctx->r15 == 0) {
        // 0x80208CFC: lbu         $v0, 0xC($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0XC);
            goto L_80208D14;
    }
    // 0x80208CFC: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x80208D00: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80208D04: beql        $at, $zero, L_80208D18
    if (ctx->r1 == 0) {
        // 0x80208D08: andi        $t8, $a2, 0x4
        ctx->r24 = ctx->r6 & 0X4;
            goto L_80208D18;
    }
    goto skip_20;
    // 0x80208D08: andi        $t8, $a2, 0x4
    ctx->r24 = ctx->r6 & 0X4;
    skip_20:
    // 0x80208D0C: jr          $ra
    // 0x80208D10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208D10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208D14:
    // 0x80208D14: andi        $t8, $a2, 0x4
    ctx->r24 = ctx->r6 & 0X4;
L_80208D18:
    // 0x80208D18: beq         $t8, $zero, L_80208D30
    if (ctx->r24 == 0) {
        // 0x80208D1C: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208D30;
    }
    // 0x80208D1C: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208D20: beql        $at, $zero, L_80208D34
    if (ctx->r1 == 0) {
        // 0x80208D24: andi        $t9, $a2, 0x1
        ctx->r25 = ctx->r6 & 0X1;
            goto L_80208D34;
    }
    goto skip_21;
    // 0x80208D24: andi        $t9, $a2, 0x1
    ctx->r25 = ctx->r6 & 0X1;
    skip_21:
    // 0x80208D28: jr          $ra
    // 0x80208D2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208D2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208D30:
    // 0x80208D30: andi        $t9, $a2, 0x1
    ctx->r25 = ctx->r6 & 0X1;
L_80208D34:
    // 0x80208D34: beql        $t9, $zero, L_80208D50
    if (ctx->r25 == 0) {
        // 0x80208D38: andi        $t0, $a1, 0x40
        ctx->r8 = ctx->r5 & 0X40;
            goto L_80208D50;
    }
    goto skip_22;
    // 0x80208D38: andi        $t0, $a1, 0x40
    ctx->r8 = ctx->r5 & 0X40;
    skip_22:
    // 0x80208D3C: bnel        $v0, $a3, L_80208D50
    if (ctx->r2 != ctx->r7) {
        // 0x80208D40: andi        $t0, $a1, 0x40
        ctx->r8 = ctx->r5 & 0X40;
            goto L_80208D50;
    }
    goto skip_23;
    // 0x80208D40: andi        $t0, $a1, 0x40
    ctx->r8 = ctx->r5 & 0X40;
    skip_23:
    // 0x80208D44: jr          $ra
    // 0x80208D48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208D48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208D4C:
    // 0x80208D4C: andi        $t0, $a1, 0x40
    ctx->r8 = ctx->r5 & 0X40;
L_80208D50:
    // 0x80208D50: beq         $t0, $zero, L_80208DAC
    if (ctx->r8 == 0) {
        // 0x80208D54: andi        $t1, $a2, 0x2
        ctx->r9 = ctx->r6 & 0X2;
            goto L_80208DAC;
    }
    // 0x80208D54: andi        $t1, $a2, 0x2
    ctx->r9 = ctx->r6 & 0X2;
    // 0x80208D58: beq         $t1, $zero, L_80208D74
    if (ctx->r9 == 0) {
        // 0x80208D5C: lbu         $v0, 0xD($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0XD);
            goto L_80208D74;
    }
    // 0x80208D5C: lbu         $v0, 0xD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD);
    // 0x80208D60: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80208D64: beql        $at, $zero, L_80208D78
    if (ctx->r1 == 0) {
        // 0x80208D68: andi        $t2, $a2, 0x4
        ctx->r10 = ctx->r6 & 0X4;
            goto L_80208D78;
    }
    goto skip_24;
    // 0x80208D68: andi        $t2, $a2, 0x4
    ctx->r10 = ctx->r6 & 0X4;
    skip_24:
    // 0x80208D6C: jr          $ra
    // 0x80208D70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208D70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208D74:
    // 0x80208D74: andi        $t2, $a2, 0x4
    ctx->r10 = ctx->r6 & 0X4;
L_80208D78:
    // 0x80208D78: beq         $t2, $zero, L_80208D90
    if (ctx->r10 == 0) {
        // 0x80208D7C: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208D90;
    }
    // 0x80208D7C: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208D80: beql        $at, $zero, L_80208D94
    if (ctx->r1 == 0) {
        // 0x80208D84: andi        $t3, $a2, 0x1
        ctx->r11 = ctx->r6 & 0X1;
            goto L_80208D94;
    }
    goto skip_25;
    // 0x80208D84: andi        $t3, $a2, 0x1
    ctx->r11 = ctx->r6 & 0X1;
    skip_25:
    // 0x80208D88: jr          $ra
    // 0x80208D8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208D8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208D90:
    // 0x80208D90: andi        $t3, $a2, 0x1
    ctx->r11 = ctx->r6 & 0X1;
L_80208D94:
    // 0x80208D94: beql        $t3, $zero, L_80208DB0
    if (ctx->r11 == 0) {
        // 0x80208D98: andi        $t4, $a1, 0x80
        ctx->r12 = ctx->r5 & 0X80;
            goto L_80208DB0;
    }
    goto skip_26;
    // 0x80208D98: andi        $t4, $a1, 0x80
    ctx->r12 = ctx->r5 & 0X80;
    skip_26:
    // 0x80208D9C: bnel        $v0, $a3, L_80208DB0
    if (ctx->r2 != ctx->r7) {
        // 0x80208DA0: andi        $t4, $a1, 0x80
        ctx->r12 = ctx->r5 & 0X80;
            goto L_80208DB0;
    }
    goto skip_27;
    // 0x80208DA0: andi        $t4, $a1, 0x80
    ctx->r12 = ctx->r5 & 0X80;
    skip_27:
    // 0x80208DA4: jr          $ra
    // 0x80208DA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208DA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208DAC:
    // 0x80208DAC: andi        $t4, $a1, 0x80
    ctx->r12 = ctx->r5 & 0X80;
L_80208DB0:
    // 0x80208DB0: beq         $t4, $zero, L_80208E0C
    if (ctx->r12 == 0) {
        // 0x80208DB4: andi        $t5, $a2, 0x2
        ctx->r13 = ctx->r6 & 0X2;
            goto L_80208E0C;
    }
    // 0x80208DB4: andi        $t5, $a2, 0x2
    ctx->r13 = ctx->r6 & 0X2;
    // 0x80208DB8: beq         $t5, $zero, L_80208DD4
    if (ctx->r13 == 0) {
        // 0x80208DBC: lbu         $v0, 0xE($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0XE);
            goto L_80208DD4;
    }
    // 0x80208DBC: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x80208DC0: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80208DC4: beql        $at, $zero, L_80208DD8
    if (ctx->r1 == 0) {
        // 0x80208DC8: andi        $t6, $a2, 0x4
        ctx->r14 = ctx->r6 & 0X4;
            goto L_80208DD8;
    }
    goto skip_28;
    // 0x80208DC8: andi        $t6, $a2, 0x4
    ctx->r14 = ctx->r6 & 0X4;
    skip_28:
    // 0x80208DCC: jr          $ra
    // 0x80208DD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208DD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208DD4:
    // 0x80208DD4: andi        $t6, $a2, 0x4
    ctx->r14 = ctx->r6 & 0X4;
L_80208DD8:
    // 0x80208DD8: beq         $t6, $zero, L_80208DF0
    if (ctx->r14 == 0) {
        // 0x80208DDC: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208DF0;
    }
    // 0x80208DDC: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208DE0: beql        $at, $zero, L_80208DF4
    if (ctx->r1 == 0) {
        // 0x80208DE4: andi        $t7, $a2, 0x1
        ctx->r15 = ctx->r6 & 0X1;
            goto L_80208DF4;
    }
    goto skip_29;
    // 0x80208DE4: andi        $t7, $a2, 0x1
    ctx->r15 = ctx->r6 & 0X1;
    skip_29:
    // 0x80208DE8: jr          $ra
    // 0x80208DEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208DEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208DF0:
    // 0x80208DF0: andi        $t7, $a2, 0x1
    ctx->r15 = ctx->r6 & 0X1;
L_80208DF4:
    // 0x80208DF4: beql        $t7, $zero, L_80208E10
    if (ctx->r15 == 0) {
        // 0x80208DF8: andi        $t8, $a1, 0x100
        ctx->r24 = ctx->r5 & 0X100;
            goto L_80208E10;
    }
    goto skip_30;
    // 0x80208DF8: andi        $t8, $a1, 0x100
    ctx->r24 = ctx->r5 & 0X100;
    skip_30:
    // 0x80208DFC: bnel        $v0, $a3, L_80208E10
    if (ctx->r2 != ctx->r7) {
        // 0x80208E00: andi        $t8, $a1, 0x100
        ctx->r24 = ctx->r5 & 0X100;
            goto L_80208E10;
    }
    goto skip_31;
    // 0x80208E00: andi        $t8, $a1, 0x100
    ctx->r24 = ctx->r5 & 0X100;
    skip_31:
    // 0x80208E04: jr          $ra
    // 0x80208E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208E0C:
    // 0x80208E0C: andi        $t8, $a1, 0x100
    ctx->r24 = ctx->r5 & 0X100;
L_80208E10:
    // 0x80208E10: beq         $t8, $zero, L_80208E6C
    if (ctx->r24 == 0) {
        // 0x80208E14: andi        $t9, $a2, 0x2
        ctx->r25 = ctx->r6 & 0X2;
            goto L_80208E6C;
    }
    // 0x80208E14: andi        $t9, $a2, 0x2
    ctx->r25 = ctx->r6 & 0X2;
    // 0x80208E18: beq         $t9, $zero, L_80208E34
    if (ctx->r25 == 0) {
        // 0x80208E1C: lbu         $v0, 0xF($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0XF);
            goto L_80208E34;
    }
    // 0x80208E1C: lbu         $v0, 0xF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF);
    // 0x80208E20: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80208E24: beql        $at, $zero, L_80208E38
    if (ctx->r1 == 0) {
        // 0x80208E28: andi        $t0, $a2, 0x4
        ctx->r8 = ctx->r6 & 0X4;
            goto L_80208E38;
    }
    goto skip_32;
    // 0x80208E28: andi        $t0, $a2, 0x4
    ctx->r8 = ctx->r6 & 0X4;
    skip_32:
    // 0x80208E2C: jr          $ra
    // 0x80208E30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208E30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208E34:
    // 0x80208E34: andi        $t0, $a2, 0x4
    ctx->r8 = ctx->r6 & 0X4;
L_80208E38:
    // 0x80208E38: beq         $t0, $zero, L_80208E50
    if (ctx->r8 == 0) {
        // 0x80208E3C: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208E50;
    }
    // 0x80208E3C: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208E40: beql        $at, $zero, L_80208E54
    if (ctx->r1 == 0) {
        // 0x80208E44: andi        $t1, $a2, 0x1
        ctx->r9 = ctx->r6 & 0X1;
            goto L_80208E54;
    }
    goto skip_33;
    // 0x80208E44: andi        $t1, $a2, 0x1
    ctx->r9 = ctx->r6 & 0X1;
    skip_33:
    // 0x80208E48: jr          $ra
    // 0x80208E4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208E4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208E50:
    // 0x80208E50: andi        $t1, $a2, 0x1
    ctx->r9 = ctx->r6 & 0X1;
L_80208E54:
    // 0x80208E54: beql        $t1, $zero, L_80208E70
    if (ctx->r9 == 0) {
        // 0x80208E58: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80208E70;
    }
    goto skip_34;
    // 0x80208E58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_34:
    // 0x80208E5C: bnel        $v0, $a3, L_80208E70
    if (ctx->r2 != ctx->r7) {
        // 0x80208E60: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80208E70;
    }
    goto skip_35;
    // 0x80208E60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_35:
    // 0x80208E64: jr          $ra
    // 0x80208E68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208E68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208E6C:
    // 0x80208E6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80208E70:
    // 0x80208E70: jr          $ra
    // 0x80208E74: nop

    return;
    // 0x80208E74: nop

;}
RECOMP_FUNC void func_8022C620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C620: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8022C624: lw          $t6, -0x78C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X78C0);
    // 0x8022C628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C62C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C630: bne         $t6, $zero, L_8022C694
    if (ctx->r14 != 0) {
        // 0x8022C634: lui         $t7, 0x8028
        ctx->r15 = S32(0X8028 << 16);
            goto L_8022C694;
    }
    // 0x8022C634: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8022C638: lw          $t7, -0x78E8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X78E8);
    // 0x8022C63C: addiu       $t8, $zero, 0x61
    ctx->r24 = ADD32(0, 0X61);
    // 0x8022C640: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C644: bne         $t7, $zero, L_8022C660
    if (ctx->r15 != 0) {
        // 0x8022C648: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8022C660;
    }
    // 0x8022C648: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022C64C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022C650: jal         0x80231A24
    // 0x8022C654: addiu       $a0, $a0, 0x4428
    ctx->r4 = ADD32(ctx->r4, 0X4428);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022C654: addiu       $a0, $a0, 0x4428
    ctx->r4 = ADD32(ctx->r4, 0X4428);
    after_0:
    // 0x8022C658: b           L_8022C698
    // 0x8022C65C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022C698;
    // 0x8022C65C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022C660:
    // 0x8022C660: sb          $t8, -0x78D7($at)
    MEM_B(-0X78D7, ctx->r1) = ctx->r24;
    // 0x8022C664: jal         0x8022D560
    // 0x8022C668: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    func_8022D560(rdram, ctx);
        goto after_1;
    // 0x8022C668: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_1:
    // 0x8022C66C: jal         0x8023D7F0
    // 0x8022C670: nop

    func_8023D7F0(rdram, ctx);
        goto after_2;
    // 0x8022C670: nop

    after_2:
    // 0x8022C674: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8022C678: lw          $a0, -0x78E8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X78E8);
    // 0x8022C67C: jal         0x8023D92C
    // 0x8022C680: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_8023D92C(rdram, ctx);
        goto after_3;
    // 0x8022C680: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_3:
    // 0x8022C684: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8022C688: lw          $a0, -0x78E8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X78E8);
    // 0x8022C68C: jal         0x8023DA94
    // 0x8022C690: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_8023DA94(rdram, ctx);
        goto after_4;
    // 0x8022C690: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_4:
L_8022C694:
    // 0x8022C694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022C698:
    // 0x8022C698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022C69C: jr          $ra
    // 0x8022C6A0: nop

    return;
    // 0x8022C6A0: nop

;}
RECOMP_FUNC void func_80239650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80239650: addiu       $sp, $sp, -0x178
    ctx->r29 = ADD32(ctx->r29, -0X178);
    // 0x80239654: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80239658: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8023965C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80239660: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80239664: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80239668: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023966C: sw          $a2, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->r6;
    // 0x80239670: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80239674: andi        $s0, $a2, 0xFF
    ctx->r16 = ctx->r6 & 0XFF;
    // 0x80239678: slt         $at, $a1, $t6
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8023967C: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x80239680: beq         $at, $zero, L_80239690
    if (ctx->r1 == 0) {
        // 0x80239684: or          $s2, $a0, $zero
        ctx->r18 = ctx->r4 | 0;
            goto L_80239690;
    }
    // 0x80239684: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80239688: bgez        $a1, L_8023969C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8023968C: lw          $v0, 0x188($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X188);
            goto L_8023969C;
    }
    // 0x8023968C: lw          $v0, 0x188($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X188);
L_80239690:
    // 0x80239690: b           L_802399A0
    // 0x80239694: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_802399A0;
    // 0x80239694: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80239698: lw          $v0, 0x188($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X188);
L_8023969C:
    // 0x8023969C: nop

    // 0x802396A0: blez        $v0, L_802396B0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802396A4: andi        $t7, $v0, 0x1F
        ctx->r15 = ctx->r2 & 0X1F;
            goto L_802396B0;
    }
    // 0x802396A4: andi        $t7, $v0, 0x1F
    ctx->r15 = ctx->r2 & 0X1F;
    // 0x802396A8: beq         $t7, $zero, L_802396B8
    if (ctx->r15 == 0) {
        // 0x802396AC: nop
    
            goto L_802396B8;
    }
    // 0x802396AC: nop

L_802396B0:
    // 0x802396B0: b           L_802399A0
    // 0x802396B4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_802399A0;
    // 0x802396B4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802396B8:
    // 0x802396B8: bltz        $s1, L_802396C8
    if (SIGNED(ctx->r17) < 0) {
        // 0x802396BC: andi        $t8, $s1, 0x1F
        ctx->r24 = ctx->r17 & 0X1F;
            goto L_802396C8;
    }
    // 0x802396BC: andi        $t8, $s1, 0x1F
    ctx->r24 = ctx->r17 & 0X1F;
    // 0x802396C0: beq         $t8, $zero, L_802396D0
    if (ctx->r24 == 0) {
        // 0x802396C4: nop
    
            goto L_802396D0;
    }
    // 0x802396C4: nop

L_802396C8:
    // 0x802396C8: b           L_802399A0
    // 0x802396CC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_802399A0;
    // 0x802396CC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802396D0:
    // 0x802396D0: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x802396D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802396D8: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x802396DC: bne         $t0, $zero, L_802396EC
    if (ctx->r8 != 0) {
        // 0x802396E0: nop
    
            goto L_802396EC;
    }
    // 0x802396E0: nop

    // 0x802396E4: b           L_802399A0
    // 0x802396E8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_802399A0;
    // 0x802396E8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802396EC:
    // 0x802396EC: jal         0x802452EC
    // 0x802396F0: sw          $a1, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r5;
    func_802452EC(rdram, ctx);
        goto after_0;
    // 0x802396F0: sw          $a1, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802396F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802396F8: bne         $v0, $at, L_80239708
    if (ctx->r2 != ctx->r1) {
        // 0x802396FC: nop
    
            goto L_80239708;
    }
    // 0x802396FC: nop

    // 0x80239700: b           L_802399A0
    // 0x80239704: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802399A0;
    // 0x80239704: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80239708:
    // 0x80239708: lbu         $t1, 0x65($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X65);
    // 0x8023970C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80239710: beq         $t1, $zero, L_80239730
    if (ctx->r9 == 0) {
        // 0x80239714: nop
    
            goto L_80239730;
    }
    // 0x80239714: nop

    // 0x80239718: jal         0x802456A0
    // 0x8023971C: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    func_802456A0(rdram, ctx);
        goto after_1;
    // 0x8023971C: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_1:
    // 0x80239720: beq         $v0, $zero, L_80239730
    if (ctx->r2 == 0) {
        // 0x80239724: nop
    
            goto L_80239730;
    }
    // 0x80239724: nop

    // 0x80239728: b           L_802399A4
    // 0x8023972C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802399A4;
    // 0x8023972C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80239730:
    // 0x80239730: lw          $t2, 0x5C($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X5C);
    // 0x80239734: lw          $t3, 0x17C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X17C);
    // 0x80239738: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x8023973C: addu        $a2, $t2, $t3
    ctx->r6 = ADD32(ctx->r10, ctx->r11);
    // 0x80239740: andi        $t4, $a2, 0xFFFF
    ctx->r12 = ctx->r6 & 0XFFFF;
    // 0x80239744: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80239748: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x8023974C: jal         0x80245710
    // 0x80239750: addiu       $a3, $sp, 0x154
    ctx->r7 = ADD32(ctx->r29, 0X154);
    func_80245710(rdram, ctx);
        goto after_2;
    // 0x80239750: addiu       $a3, $sp, 0x154
    ctx->r7 = ADD32(ctx->r29, 0X154);
    after_2:
    // 0x80239754: beq         $v0, $zero, L_80239768
    if (ctx->r2 == 0) {
        // 0x80239758: lhu         $t5, 0x15A($sp)
        ctx->r13 = MEM_HU(ctx->r29, 0X15A);
            goto L_80239768;
    }
    // 0x80239758: lhu         $t5, 0x15A($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X15A);
    // 0x8023975C: b           L_802399A4
    // 0x80239760: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802399A4;
    // 0x80239760: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80239764: lhu         $t5, 0x15A($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X15A);
L_80239768:
    // 0x80239768: lw          $t6, 0x60($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X60);
    // 0x8023976C: lbu         $t7, 0x15A($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X15A);
    // 0x80239770: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80239774: bne         $at, $zero, L_802397A4
    if (ctx->r1 != 0) {
        // 0x80239778: lhu         $t0, 0x15A($sp)
        ctx->r8 = MEM_HU(ctx->r29, 0X15A);
            goto L_802397A4;
    }
    // 0x80239778: lhu         $t0, 0x15A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X15A);
    // 0x8023977C: lbu         $t8, 0x64($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X64);
    // 0x80239780: lbu         $t9, 0x15B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X15B);
    // 0x80239784: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80239788: beq         $at, $zero, L_802397A4
    if (ctx->r1 == 0) {
        // 0x8023978C: lhu         $t0, 0x15A($sp)
        ctx->r8 = MEM_HU(ctx->r29, 0X15A);
            goto L_802397A4;
    }
    // 0x8023978C: lhu         $t0, 0x15A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X15A);
    // 0x80239790: blez        $t9, L_802397A0
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80239794: slti        $at, $t9, 0x80
        ctx->r1 = SIGNED(ctx->r25) < 0X80 ? 1 : 0;
            goto L_802397A0;
    }
    // 0x80239794: slti        $at, $t9, 0x80
    ctx->r1 = SIGNED(ctx->r25) < 0X80 ? 1 : 0;
    // 0x80239798: bne         $at, $zero, L_802397C0
    if (ctx->r1 != 0) {
        // 0x8023979C: nop
    
            goto L_802397C0;
    }
    // 0x8023979C: nop

L_802397A0:
    // 0x802397A0: lhu         $t0, 0x15A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X15A);
L_802397A4:
    // 0x802397A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802397A8: bne         $t0, $at, L_802397B8
    if (ctx->r8 != ctx->r1) {
        // 0x802397AC: nop
    
            goto L_802397B8;
    }
    // 0x802397AC: nop

    // 0x802397B0: b           L_802399A0
    // 0x802397B4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_802399A0;
    // 0x802397B4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802397B8:
    // 0x802397B8: b           L_802399A0
    // 0x802397BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_802399A0;
    // 0x802397BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802397C0:
    // 0x802397C0: bne         $s0, $zero, L_802397E4
    if (ctx->r16 != 0) {
        // 0x802397C4: sw          $s0, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r16;
            goto L_802397E4;
    }
    // 0x802397C4: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x802397C8: lbu         $t2, 0x15C($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X15C);
    // 0x802397CC: nop

    // 0x802397D0: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x802397D4: bne         $t3, $zero, L_802397E8
    if (ctx->r11 != 0) {
        // 0x802397D8: addiu       $t4, $zero, 0xFF
        ctx->r12 = ADD32(0, 0XFF);
            goto L_802397E8;
    }
    // 0x802397D8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x802397DC: b           L_802399A0
    // 0x802397E0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_802399A0;
    // 0x802397E0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802397E4:
    // 0x802397E4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
L_802397E8:
    // 0x802397E8: sb          $t4, 0x43($sp)
    MEM_B(0X43, ctx->r29) = ctx->r12;
    // 0x802397EC: addiu       $t5, $sp, 0x15A
    ctx->r13 = ADD32(ctx->r29, 0X15A);
    // 0x802397F0: addiu       $s4, $sp, 0x50
    ctx->r20 = ADD32(ctx->r29, 0X50);
    // 0x802397F4: bgez        $s1, L_80239804
    if (SIGNED(ctx->r17) >= 0) {
        // 0x802397F8: sra         $v0, $s1, 5
        ctx->r2 = S32(SIGNED(ctx->r17) >> 5);
            goto L_80239804;
    }
    // 0x802397F8: sra         $v0, $s1, 5
    ctx->r2 = S32(SIGNED(ctx->r17) >> 5);
    // 0x802397FC: addiu       $at, $s1, 0x1F
    ctx->r1 = ADD32(ctx->r17, 0X1F);
    // 0x80239800: sra         $v0, $at, 5
    ctx->r2 = S32(SIGNED(ctx->r1) >> 5);
L_80239804:
    // 0x80239804: lhu         $at, 0x0($t5)
    ctx->r1 = MEM_HU(ctx->r13, 0X0);
    // 0x80239808: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023980C: sh          $at, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r1;
    // 0x80239810: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80239814: bne         $at, $zero, L_80239848
    if (ctx->r1 != 0) {
        // 0x80239818: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80239848;
    }
    // 0x80239818: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_8023981C:
    // 0x8023981C: addiu       $a1, $sp, 0x43
    ctx->r5 = ADD32(ctx->r29, 0X43);
    // 0x80239820: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x80239824: jal         0x80239570
    // 0x80239828: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_80239570(rdram, ctx);
        goto after_3;
    // 0x80239828: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_3:
    // 0x8023982C: beq         $v0, $zero, L_8023983C
    if (ctx->r2 == 0) {
        // 0x80239830: addiu       $s0, $s0, -0x8
        ctx->r16 = ADD32(ctx->r16, -0X8);
            goto L_8023983C;
    }
    // 0x80239830: addiu       $s0, $s0, -0x8
    ctx->r16 = ADD32(ctx->r16, -0X8);
    // 0x80239834: b           L_802399A4
    // 0x80239838: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802399A4;
    // 0x80239838: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8023983C:
    // 0x8023983C: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x80239840: beq         $at, $zero, L_8023981C
    if (ctx->r1 == 0) {
        // 0x80239844: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8023981C;
    }
    // 0x80239844: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80239848:
    // 0x80239848: lw          $v0, 0x188($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X188);
    // 0x8023984C: lw          $s1, 0x18C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18C);
    // 0x80239850: bgez        $v0, L_80239860
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80239854: sra         $t9, $v0, 5
        ctx->r25 = S32(SIGNED(ctx->r2) >> 5);
            goto L_80239860;
    }
    // 0x80239854: sra         $t9, $v0, 5
    ctx->r25 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80239858: addiu       $at, $v0, 0x1F
    ctx->r1 = ADD32(ctx->r2, 0X1F);
    // 0x8023985C: sra         $t9, $at, 5
    ctx->r25 = S32(SIGNED(ctx->r1) >> 5);
L_80239860:
    // 0x80239860: blez        $t9, L_80239928
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80239864: or          $s3, $t9, $zero
        ctx->r19 = ctx->r25 | 0;
            goto L_80239928;
    }
    // 0x80239864: or          $s3, $t9, $zero
    ctx->r19 = ctx->r25 | 0;
L_80239868:
    // 0x80239868: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8023986C: bne         $s0, $at, L_80239894
    if (ctx->r16 != ctx->r1) {
        // 0x80239870: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80239894;
    }
    // 0x80239870: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80239874: addiu       $a1, $sp, 0x43
    ctx->r5 = ADD32(ctx->r29, 0X43);
    // 0x80239878: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x8023987C: jal         0x80239570
    // 0x80239880: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_80239570(rdram, ctx);
        goto after_4;
    // 0x80239880: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_4:
    // 0x80239884: beq         $v0, $zero, L_80239894
    if (ctx->r2 == 0) {
        // 0x80239888: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80239894;
    }
    // 0x80239888: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8023988C: b           L_802399A4
    // 0x80239890: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802399A4;
    // 0x80239890: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80239894:
    // 0x80239894: lbu         $t0, 0x50($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X50);
    // 0x80239898: lbu         $t1, 0x65($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X65);
    // 0x8023989C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802398A0: beq         $t0, $t1, L_802398C4
    if (ctx->r8 == ctx->r9) {
        // 0x802398A4: lbu         $t2, 0x51($sp)
        ctx->r10 = MEM_BU(ctx->r29, 0X51);
            goto L_802398C4;
    }
    // 0x802398A4: lbu         $t2, 0x51($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X51);
    // 0x802398A8: jal         0x802456A0
    // 0x802398AC: sb          $t0, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r8;
    func_802456A0(rdram, ctx);
        goto after_5;
    // 0x802398AC: sb          $t0, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r8;
    after_5:
    // 0x802398B0: beq         $v0, $zero, L_802398C4
    if (ctx->r2 == 0) {
        // 0x802398B4: lbu         $t2, 0x51($sp)
        ctx->r10 = MEM_BU(ctx->r29, 0X51);
            goto L_802398C4;
    }
    // 0x802398B4: lbu         $t2, 0x51($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X51);
    // 0x802398B8: b           L_802399A4
    // 0x802398BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802399A4;
    // 0x802398BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802398C0: lbu         $t2, 0x51($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X51);
L_802398C4:
    // 0x802398C4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x802398C8: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x802398CC: addu        $a2, $t3, $s0
    ctx->r6 = ADD32(ctx->r11, ctx->r16);
    // 0x802398D0: andi        $t4, $a2, 0xFFFF
    ctx->r12 = ctx->r6 & 0XFFFF;
    // 0x802398D4: bne         $t7, $zero, L_802398F4
    if (ctx->r15 != 0) {
        // 0x802398D8: or          $a2, $t4, $zero
        ctx->r6 = ctx->r12 | 0;
            goto L_802398F4;
    }
    // 0x802398D8: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x802398DC: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x802398E0: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x802398E4: jal         0x80245710
    // 0x802398E8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_80245710(rdram, ctx);
        goto after_6;
    // 0x802398E8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_6:
    // 0x802398EC: b           L_8023990C
    // 0x802398F0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8023990C;
    // 0x802398F0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_802398F4:
    // 0x802398F4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x802398F8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x802398FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80239900: jal         0x80246660
    // 0x80239904: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_80246660(rdram, ctx);
        goto after_7;
    // 0x80239904: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_7:
    // 0x80239908: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8023990C:
    // 0x8023990C: beq         $v0, $zero, L_8023991C
    if (ctx->r2 == 0) {
        // 0x80239910: addiu       $s1, $s1, 0x20
        ctx->r17 = ADD32(ctx->r17, 0X20);
            goto L_8023991C;
    }
    // 0x80239910: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x80239914: b           L_802399A0
    // 0x80239918: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_802399A0;
    // 0x80239918: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8023991C:
    // 0x8023991C: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x80239920: bne         $s3, $zero, L_80239868
    if (ctx->r19 != 0) {
        // 0x80239924: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80239868;
    }
    // 0x80239924: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80239928:
    // 0x80239928: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8023992C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80239930: bne         $t6, $at, L_802399A0
    if (ctx->r14 != ctx->r1) {
        // 0x80239934: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802399A0;
    }
    // 0x80239934: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80239938: lbu         $v0, 0x15C($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X15C);
    // 0x8023993C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80239940: andi        $t5, $v0, 0x2
    ctx->r13 = ctx->r2 & 0X2;
    // 0x80239944: bne         $t5, $zero, L_8023999C
    if (ctx->r13 != 0) {
        // 0x80239948: ori         $t8, $v0, 0x2
        ctx->r24 = ctx->r2 | 0X2;
            goto L_8023999C;
    }
    // 0x80239948: ori         $t8, $v0, 0x2
    ctx->r24 = ctx->r2 | 0X2;
    // 0x8023994C: sb          $t8, 0x15C($sp)
    MEM_B(0X15C, ctx->r29) = ctx->r24;
    // 0x80239950: jal         0x802456A0
    // 0x80239954: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    func_802456A0(rdram, ctx);
        goto after_8;
    // 0x80239954: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_8:
    // 0x80239958: beq         $v0, $zero, L_80239968
    if (ctx->r2 == 0) {
        // 0x8023995C: addiu       $a3, $sp, 0x154
        ctx->r7 = ADD32(ctx->r29, 0X154);
            goto L_80239968;
    }
    // 0x8023995C: addiu       $a3, $sp, 0x154
    ctx->r7 = ADD32(ctx->r29, 0X154);
    // 0x80239960: b           L_802399A4
    // 0x80239964: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802399A4;
    // 0x80239964: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80239968:
    // 0x80239968: lw          $t9, 0x5C($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X5C);
    // 0x8023996C: lw          $t1, 0x17C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X17C);
    // 0x80239970: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80239974: addu        $a2, $t9, $t1
    ctx->r6 = ADD32(ctx->r25, ctx->r9);
    // 0x80239978: andi        $t0, $a2, 0xFFFF
    ctx->r8 = ctx->r6 & 0XFFFF;
    // 0x8023997C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80239980: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80239984: jal         0x80246660
    // 0x80239988: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    func_80246660(rdram, ctx);
        goto after_9;
    // 0x80239988: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    after_9:
    // 0x8023998C: beq         $v0, $zero, L_8023999C
    if (ctx->r2 == 0) {
        // 0x80239990: nop
    
            goto L_8023999C;
    }
    // 0x80239990: nop

    // 0x80239994: b           L_802399A4
    // 0x80239998: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802399A4;
    // 0x80239998: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8023999C:
    // 0x8023999C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802399A0:
    // 0x802399A0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802399A4:
    // 0x802399A4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802399A8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802399AC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802399B0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802399B4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x802399B8: jr          $ra
    // 0x802399BC: addiu       $sp, $sp, 0x178
    ctx->r29 = ADD32(ctx->r29, 0X178);
    return;
    // 0x802399BC: addiu       $sp, $sp, 0x178
    ctx->r29 = ADD32(ctx->r29, 0X178);
;}
RECOMP_FUNC void func_80211984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80211984: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80211988: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021198C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211990: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80211994: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80211998: swc1        $f12, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f12.u32l;
    // 0x8021199C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802119A0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x802119A4: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x802119A8: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x802119AC: swc1        $f14, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f14.u32l;
    // 0x802119B0: lw          $t8, -0x18F0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X18F0);
    // 0x802119B4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802119B8: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x802119BC: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x802119C0: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x802119C4: bnel        $v1, $zero, L_802119E4
    if (ctx->r3 != 0) {
        // 0x802119C8: lwc1        $f4, 0x0($v1)
        ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
            goto L_802119E4;
    }
    goto skip_0;
    // 0x802119C8: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x802119CC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802119D0: jal         0x80231A24
    // 0x802119D4: addiu       $a0, $a0, 0x2D7C
    ctx->r4 = ADD32(ctx->r4, 0X2D7C);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x802119D4: addiu       $a0, $a0, 0x2D7C
    ctx->r4 = ADD32(ctx->r4, 0X2D7C);
    after_0:
    // 0x802119D8: b           L_80211AF8
    // 0x802119DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80211AF8;
    // 0x802119DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802119E0: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
L_802119E4:
    // 0x802119E4: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x802119E8: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
    // 0x802119EC: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x802119F0: lbu         $t0, 0x18($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X18);
    // 0x802119F4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802119F8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802119FC: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x80211A00: sub.s       $f4, $f14, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f18.fl;
    // 0x80211A04: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x80211A08: lwc1        $f8, 0x20($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80211A0C: div         $zero, $t4, $t6
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r14)));
    // 0x80211A10: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80211A14: mflo        $a1
    ctx->r5 = lo;
    // 0x80211A18: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80211A1C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80211A20: bne         $t6, $zero, L_80211A2C
    if (ctx->r14 != 0) {
        // 0x80211A24: nop
    
            goto L_80211A2C;
    }
    // 0x80211A24: nop

    // 0x80211A28: break       7
    do_break(2149653032);
L_80211A2C:
    // 0x80211A2C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80211A30: bne         $t6, $at, L_80211A44
    if (ctx->r14 != ctx->r1) {
        // 0x80211A34: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80211A44;
    }
    // 0x80211A34: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80211A38: bne         $t4, $at, L_80211A44
    if (ctx->r12 != ctx->r1) {
        // 0x80211A3C: nop
    
            goto L_80211A44;
    }
    // 0x80211A3C: nop

    // 0x80211A40: break       6
    do_break(2149653056);
L_80211A44:
    // 0x80211A44: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80211A48: nop

    // 0x80211A4C: div         $zero, $t8, $t1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r9)));
    // 0x80211A50: bne         $t1, $zero, L_80211A5C
    if (ctx->r9 != 0) {
        // 0x80211A54: nop
    
            goto L_80211A5C;
    }
    // 0x80211A54: nop

    // 0x80211A58: break       7
    do_break(2149653080);
L_80211A5C:
    // 0x80211A5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80211A60: bne         $t1, $at, L_80211A74
    if (ctx->r9 != ctx->r1) {
        // 0x80211A64: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80211A74;
    }
    // 0x80211A64: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80211A68: bne         $t8, $at, L_80211A74
    if (ctx->r24 != ctx->r1) {
        // 0x80211A6C: nop
    
            goto L_80211A74;
    }
    // 0x80211A6C: nop

    // 0x80211A70: break       6
    do_break(2149653104);
L_80211A74:
    // 0x80211A74: mflo        $a2
    ctx->r6 = lo;
    // 0x80211A78: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80211A7C: beq         $at, $zero, L_80211AA4
    if (ctx->r1 == 0) {
        // 0x80211A80: nop
    
            goto L_80211AA4;
    }
    // 0x80211A80: nop

    // 0x80211A84: bltz        $a1, L_80211AA4
    if (SIGNED(ctx->r5) < 0) {
        // 0x80211A88: nop
    
            goto L_80211AA4;
    }
    // 0x80211A88: nop

    // 0x80211A8C: lbu         $t2, 0x19($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X19);
    // 0x80211A90: slt         $at, $a2, $t2
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80211A94: beq         $at, $zero, L_80211AA4
    if (ctx->r1 == 0) {
        // 0x80211A98: nop
    
            goto L_80211AA4;
    }
    // 0x80211A98: nop

    // 0x80211A9C: bgez        $a2, L_80211AAC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80211AA0: nop
    
            goto L_80211AAC;
    }
    // 0x80211AA0: nop

L_80211AA4:
    // 0x80211AA4: b           L_80211AF8
    // 0x80211AA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80211AF8;
    // 0x80211AA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80211AAC:
    // 0x80211AAC: multu       $t0, $a2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80211AB0: lw          $t5, 0x28($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X28);
    // 0x80211AB4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80211AB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80211ABC: mflo        $t3
    ctx->r11 = lo;
    // 0x80211AC0: addu        $a3, $t3, $a1
    ctx->r7 = ADD32(ctx->r11, ctx->r5);
    // 0x80211AC4: sll         $a0, $a3, 2
    ctx->r4 = S32(ctx->r7 << 2);
    // 0x80211AC8: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80211ACC: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80211AD0: subu        $a0, $a0, $a3
    ctx->r4 = SUB32(ctx->r4, ctx->r7);
    // 0x80211AD4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80211AD8: addu        $t4, $t5, $a0
    ctx->r12 = ADD32(ctx->r13, ctx->r4);
    // 0x80211ADC: lwc1        $f16, 0x30($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X30);
    // 0x80211AE0: swc1        $f16, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f16.u32l;
    // 0x80211AE4: lw          $t7, 0x28($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X28);
    // 0x80211AE8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80211AEC: addu        $t9, $t7, $a0
    ctx->r25 = ADD32(ctx->r15, ctx->r4);
    // 0x80211AF0: lwc1        $f18, 0x34($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X34);
    // 0x80211AF4: swc1        $f18, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f18.u32l;
L_80211AF8:
    // 0x80211AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80211B00: jr          $ra
    // 0x80211B04: nop

    return;
    // 0x80211B04: nop

;}
RECOMP_FUNC void func_802384CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802384CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802384D0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802384D4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802384D8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802384DC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802384E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802384E4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802384E8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802384EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802384F0: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x802384F4: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x802384F8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x802384FC: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x80238500: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80238504: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x80238508: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8023850C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80238510: addiu       $s3, $zero, 0x10
    ctx->r19 = ADD32(0, 0X10);
    // 0x80238514: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x80238518: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
L_8023851C:
    // 0x8023851C: sb          $zero, 0xA8($s1)
    MEM_B(0XA8, ctx->r17) = 0;
    // 0x80238520: sw          $zero, 0x58($t4)
    MEM_W(0X58, ctx->r12) = 0;
    // 0x80238524: sb          $zero, 0x98($s1)
    MEM_B(0X98, ctx->r17) = 0;
    // 0x80238528: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8023852C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80238530: addu        $t8, $t7, $s2
    ctx->r24 = ADD32(ctx->r15, ctx->r18);
    // 0x80238534: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x80238538: sllv        $t7, $t6, $t5
    ctx->r15 = S32(ctx->r14 << (ctx->r13 & 31));
    // 0x8023853C: beq         $v0, $zero, L_80238568
    if (ctx->r2 == 0) {
        // 0x80238540: addu        $t6, $s4, $v0
        ctx->r14 = ADD32(ctx->r20, ctx->r2);
            goto L_80238568;
    }
    // 0x80238540: addu        $t6, $s4, $v0
    ctx->r14 = ADD32(ctx->r20, ctx->r2);
    // 0x80238544: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x80238548: or          $t2, $s0, $zero
    ctx->r10 = ctx->r16 | 0;
    // 0x8023854C: or          $t3, $t5, $zero
    ctx->r11 = ctx->r13 | 0;
    // 0x80238550: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x80238554: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x80238558: jal         0x80238174
    // 0x8023855C: sw          $t6, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->r14;
    func_80238174(rdram, ctx);
        goto after_0;
    // 0x8023855C: sw          $t6, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->r14;
    after_0:
    // 0x80238560: b           L_8023856C
    // 0x80238564: sw          $v0, 0xB8($t4)
    MEM_W(0XB8, ctx->r12) = ctx->r2;
        goto L_8023856C;
    // 0x80238564: sw          $v0, 0xB8($t4)
    MEM_W(0XB8, ctx->r12) = ctx->r2;
L_80238568:
    // 0x80238568: sw          $zero, 0x18($t4)
    MEM_W(0X18, ctx->r12) = 0;
L_8023856C:
    // 0x8023856C: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x80238570: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80238574: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80238578: bne         $t5, $s3, L_8023851C
    if (ctx->r13 != ctx->r19) {
        // 0x8023857C: addiu       $t4, $t4, 0x4
        ctx->r12 = ADD32(ctx->r12, 0X4);
            goto L_8023851C;
    }
    // 0x8023857C: addiu       $t4, $t4, 0x4
    ctx->r12 = ADD32(ctx->r12, 0X4);
    // 0x80238580: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80238584: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80238588: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8023858C: lw          $t7, 0x40($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X40);
    // 0x80238590: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80238594: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80238598: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8023859C: bgez        $t7, L_802385B0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802385A0: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_802385B0;
    }
    // 0x802385A0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802385A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802385A8: nop

    // 0x802385AC: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_802385B0:
    // 0x802385B0: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x802385B4: div.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x802385B8: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x802385BC: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x802385C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802385C4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802385C8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802385CC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802385D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802385D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802385D8: jr          $ra
    // 0x802385DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802385DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022D560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022D560: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8022D564: lw          $t6, -0x78B8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X78B8);
    // 0x8022D568: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D56C: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8022D570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D574: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8022D578: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8022D57C: beq         $t6, $zero, L_8022D670
    if (ctx->r14 == 0) {
        // 0x8022D580: lw          $a3, -0x78C8($a3)
        ctx->r7 = MEM_W(ctx->r7, -0X78C8);
            goto L_8022D670;
    }
    // 0x8022D580: lw          $a3, -0x78C8($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X78C8);
    // 0x8022D584: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8022D588: addiu       $t7, $t7, -0x7940
    ctx->r15 = ADD32(ctx->r15, -0X7940);
    // 0x8022D58C: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x8022D590: addu        $a1, $v0, $t7
    ctx->r5 = ADD32(ctx->r2, ctx->r15);
    // 0x8022D594: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022D598: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8022D59C: addiu       $t8, $t8, -0x7928
    ctx->r24 = ADD32(ctx->r24, -0X7928);
    // 0x8022D5A0: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
    // 0x8022D5A4: beq         $at, $zero, L_8022D670
    if (ctx->r1 == 0) {
        // 0x8022D5A8: addu        $a2, $v0, $t8
        ctx->r6 = ADD32(ctx->r2, ctx->r24);
            goto L_8022D670;
    }
    // 0x8022D5A8: addu        $a2, $v0, $t8
    ctx->r6 = ADD32(ctx->r2, ctx->r24);
    // 0x8022D5AC: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8022D5B0: lbu         $t9, 0x23($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X23);
    // 0x8022D5B4: slti        $at, $a0, 0x3C
    ctx->r1 = SIGNED(ctx->r4) < 0X3C ? 1 : 0;
    // 0x8022D5B8: beql        $at, $zero, L_8022D674
    if (ctx->r1 == 0) {
        // 0x8022D5BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022D674;
    }
    goto skip_0;
    // 0x8022D5BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8022D5C0: bne         $t9, $zero, L_8022D5F0
    if (ctx->r25 != 0) {
        // 0x8022D5C4: sll         $t0, $v1, 4
        ctx->r8 = S32(ctx->r3 << 4);
            goto L_8022D5F0;
    }
    // 0x8022D5C4: sll         $t0, $v1, 4
    ctx->r8 = S32(ctx->r3 << 4);
    // 0x8022D5C8: sll         $t1, $a3, 4
    ctx->r9 = S32(ctx->r7 << 4);
    // 0x8022D5CC: subu        $t1, $t1, $a3
    ctx->r9 = SUB32(ctx->r9, ctx->r7);
    // 0x8022D5D0: sll         $t1, $t1, 6
    ctx->r9 = S32(ctx->r9 << 6);
    // 0x8022D5D4: lui         $t3, 0x8027
    ctx->r11 = S32(0X8027 << 16);
    // 0x8022D5D8: addiu       $t3, $t3, 0x6140
    ctx->r11 = ADD32(ctx->r11, 0X6140);
    // 0x8022D5DC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8022D5E0: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x8022D5E4: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x8022D5E8: b           L_8022D618
    // 0x8022D5EC: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
        goto L_8022D618;
    // 0x8022D5EC: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
L_8022D5F0:
    // 0x8022D5F0: sll         $t6, $a3, 4
    ctx->r14 = S32(ctx->r7 << 4);
    // 0x8022D5F4: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x8022D5F8: sll         $t6, $t6, 6
    ctx->r14 = S32(ctx->r14 << 6);
    // 0x8022D5FC: sll         $t5, $a0, 4
    ctx->r13 = S32(ctx->r4 << 4);
    // 0x8022D600: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x8022D604: addiu       $t8, $t8, 0x7400
    ctx->r24 = ADD32(ctx->r24, 0X7400);
    // 0x8022D608: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8022D60C: addiu       $t9, $a0, 0x1
    ctx->r25 = ADD32(ctx->r4, 0X1);
    // 0x8022D610: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8022D614: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
L_8022D618:
    // 0x8022D618: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    // 0x8022D61C: jal         0x80207130
    // 0x8022D620: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80207130(rdram, ctx);
        goto after_0;
    // 0x8022D620: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8022D624: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D628: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x8022D62C: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x8022D630: sdc1        $f0, 0x0($v0)
    CHECK_FR(ctx, 0);
    SD(ctx->f0.u64, 0X0, ctx->r2);
    // 0x8022D634: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8022D638: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8022D63C: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x8022D640: sw          $t0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r8;
    // 0x8022D644: lbu         $t3, -0x78D6($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X78D6);
    // 0x8022D648: lbu         $t1, -0x78D7($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X78D7);
    // 0x8022D64C: lbu         $t6, -0x78D5($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X78D5);
    // 0x8022D650: lbu         $t9, -0x78D4($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X78D4);
    // 0x8022D654: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x8022D658: sll         $t2, $t1, 24
    ctx->r10 = S32(ctx->r9 << 24);
    // 0x8022D65C: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8022D660: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8022D664: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x8022D668: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x8022D66C: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
L_8022D670:
    // 0x8022D670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022D674:
    // 0x8022D674: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022D678: jr          $ra
    // 0x8022D67C: nop

    return;
    // 0x8022D67C: nop

;}
RECOMP_FUNC void func_802452EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802452EC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802452F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802452F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802452F8: lbu         $t6, 0x65($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X65);
    // 0x802452FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80245300: beq         $t6, $zero, L_80245320
    if (ctx->r14 == 0) {
        // 0x80245304: nop
    
            goto L_80245320;
    }
    // 0x80245304: nop

    // 0x80245308: jal         0x802456A0
    // 0x8024530C: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    func_802456A0(rdram, ctx);
        goto after_0;
    // 0x8024530C: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    after_0:
    // 0x80245310: beq         $v0, $zero, L_80245320
    if (ctx->r2 == 0) {
        // 0x80245314: nop
    
            goto L_80245320;
    }
    // 0x80245314: nop

    // 0x80245318: b           L_802453F8
    // 0x8024531C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802453F8;
    // 0x8024531C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80245320:
    // 0x80245320: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80245324: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x80245328: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8024532C: jal         0x80245710
    // 0x80245330: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_80245710(rdram, ctx);
        goto after_1;
    // 0x80245330: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x80245334: beq         $v0, $zero, L_8024536C
    if (ctx->r2 == 0) {
        // 0x80245338: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8024536C;
    }
    // 0x80245338: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8024533C: beq         $v0, $at, L_8024534C
    if (ctx->r2 == ctx->r1) {
        // 0x80245340: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_8024534C;
    }
    // 0x80245340: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80245344: b           L_802453F8
    // 0x80245348: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802453F8;
    // 0x80245348: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024534C:
    // 0x8024534C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80245350: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x80245354: jal         0x80245710
    // 0x80245358: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_80245710(rdram, ctx);
        goto after_2;
    // 0x80245358: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x8024535C: beq         $v0, $zero, L_80245370
    if (ctx->r2 == 0) {
        // 0x80245360: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_80245370;
    }
    // 0x80245360: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80245364: b           L_802453F8
    // 0x80245368: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802453F8;
    // 0x80245368: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024536C:
    // 0x8024536C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_80245370:
    // 0x80245370: addiu       $v0, $sp, 0x2C
    ctx->r2 = ADD32(ctx->r29, 0X2C);
    // 0x80245374: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
L_80245378:
    // 0x80245378: lbu         $t7, 0xC($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0XC);
    // 0x8024537C: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x80245380: nop

    // 0x80245384: beq         $t7, $t8, L_80245394
    if (ctx->r15 == ctx->r24) {
        // 0x80245388: nop
    
            goto L_80245394;
    }
    // 0x80245388: nop

    // 0x8024538C: b           L_802453F4
    // 0x80245390: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802453F4;
    // 0x80245390: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80245394:
    // 0x80245394: lbu         $t9, 0xD($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0XD);
    // 0x80245398: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x8024539C: nop

    // 0x802453A0: beq         $t9, $t0, L_802453B0
    if (ctx->r25 == ctx->r8) {
        // 0x802453A4: nop
    
            goto L_802453B0;
    }
    // 0x802453A4: nop

    // 0x802453A8: b           L_802453F4
    // 0x802453AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802453F4;
    // 0x802453AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802453B0:
    // 0x802453B0: lbu         $t1, 0xE($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0XE);
    // 0x802453B4: lbu         $t2, 0x2($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X2);
    // 0x802453B8: nop

    // 0x802453BC: beq         $t1, $t2, L_802453CC
    if (ctx->r9 == ctx->r10) {
        // 0x802453C0: nop
    
            goto L_802453CC;
    }
    // 0x802453C0: nop

    // 0x802453C4: b           L_802453F4
    // 0x802453C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802453F4;
    // 0x802453C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802453CC:
    // 0x802453CC: lbu         $t3, 0xF($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0XF);
    // 0x802453D0: lbu         $t4, 0x3($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X3);
    // 0x802453D4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802453D8: beq         $t3, $t4, L_802453E8
    if (ctx->r11 == ctx->r12) {
        // 0x802453DC: nop
    
            goto L_802453E8;
    }
    // 0x802453DC: nop

    // 0x802453E0: b           L_802453F4
    // 0x802453E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802453F4;
    // 0x802453E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802453E8:
    // 0x802453E8: bne         $v0, $a0, L_80245378
    if (ctx->r2 != ctx->r4) {
        // 0x802453EC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80245378;
    }
    // 0x802453EC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802453F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802453F4:
    // 0x802453F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802453F8:
    // 0x802453F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802453FC: jr          $ra
    // 0x80245400: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80245400: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8022D00C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022D00C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D014: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8022D018: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022D01C: sw          $t6, -0x78C0($at)
    MEM_W(-0X78C0, ctx->r1) = ctx->r14;
    // 0x8022D020: jal         0x8023CE10
    // 0x8022D024: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8023CE10(rdram, ctx);
        goto after_0;
    // 0x8022D024: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8022D028: jal         0x8022C314
    // 0x8022D02C: nop

    func_8022C314(rdram, ctx);
        goto after_1;
    // 0x8022D02C: nop

    after_1:
    // 0x8022D030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022D038: jr          $ra
    // 0x8022D03C: nop

    return;
    // 0x8022D03C: nop

;}
RECOMP_FUNC void func_8023ECC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023ECC8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8023ECCC: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8023ECD0: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_8023ECD4:
    // 0x8023ECD4: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x8023ECD8: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x8023ECDC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023ECE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8023ECE4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8023ECE8: sw          $zero, 0x5E70($at)
    MEM_W(0X5E70, ctx->r1) = 0;
    // 0x8023ECEC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8023ECF0: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x8023ECF4: bne         $at, $zero, L_8023ECD4
    if (ctx->r1 != 0) {
        // 0x8023ECF8: sw          $t9, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r25;
            goto L_8023ECD4;
    }
    // 0x8023ECF8: sw          $t9, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r25;
    // 0x8023ECFC: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x8023ED00: lbu         $t9, 0x5EB1($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X5EB1);
    // 0x8023ED04: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x8023ED08: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8023ED0C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023ED10: addiu       $t1, $t1, 0x5E70
    ctx->r9 = ADD32(ctx->r9, 0X5E70);
    // 0x8023ED14: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8023ED18: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8023ED1C: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x8023ED20: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8023ED24: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8023ED28: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8023ED2C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8023ED30: sw          $t0, 0x5EAC($at)
    MEM_W(0X5EAC, ctx->r1) = ctx->r8;
    // 0x8023ED34: sw          $t1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r9;
    // 0x8023ED38: sb          $t2, 0x4($sp)
    MEM_B(0X4, ctx->r29) = ctx->r10;
    // 0x8023ED3C: sb          $t3, 0x5($sp)
    MEM_B(0X5, ctx->r29) = ctx->r11;
    // 0x8023ED40: sb          $t4, 0x6($sp)
    MEM_B(0X6, ctx->r29) = ctx->r12;
    // 0x8023ED44: sb          $a0, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r4;
    // 0x8023ED48: sb          $t5, 0x8($sp)
    MEM_B(0X8, ctx->r29) = ctx->r13;
    // 0x8023ED4C: sb          $t6, 0x9($sp)
    MEM_B(0X9, ctx->r29) = ctx->r14;
    // 0x8023ED50: sb          $t7, 0xA($sp)
    MEM_B(0XA, ctx->r29) = ctx->r15;
    // 0x8023ED54: sb          $t8, 0xB($sp)
    MEM_B(0XB, ctx->r29) = ctx->r24;
    // 0x8023ED58: blez        $t9, L_8023EDA8
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8023ED5C: sw          $zero, 0x0($sp)
        MEM_W(0X0, ctx->r29) = 0;
            goto L_8023EDA8;
    }
    // 0x8023ED5C: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_8023ED60:
    // 0x8023ED60: addiu       $t1, $sp, 0x4
    ctx->r9 = ADD32(ctx->r29, 0X4);
    // 0x8023ED64: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x8023ED68: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8023ED6C: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8023ED70: swl         $at, 0x0($t0)
    do_swl(rdram, 0X0, ctx->r8, ctx->r1);
    // 0x8023ED74: swr         $at, 0x3($t0)
    do_swr(rdram, 0X3, ctx->r8, ctx->r1);
    // 0x8023ED78: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x8023ED7C: swl         $t3, 0x4($t0)
    do_swl(rdram, 0X4, ctx->r8, ctx->r11);
    // 0x8023ED80: swr         $t3, 0x7($t0)
    do_swr(rdram, 0X7, ctx->r8, ctx->r11);
    // 0x8023ED84: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x8023ED88: lbu         $t8, 0x5EB1($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X5EB1);
    // 0x8023ED8C: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x8023ED90: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8023ED94: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8023ED98: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8023ED9C: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
    // 0x8023EDA0: bne         $at, $zero, L_8023ED60
    if (ctx->r1 != 0) {
        // 0x8023EDA4: sw          $t5, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r13;
            goto L_8023ED60;
    }
    // 0x8023EDA4: sw          $t5, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r13;
L_8023EDA8:
    // 0x8023EDA8: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8023EDAC: addiu       $t9, $zero, 0xFE
    ctx->r25 = ADD32(0, 0XFE);
    // 0x8023EDB0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x8023EDB4: jr          $ra
    // 0x8023EDB8: sb          $t9, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r25;
    return;
    // 0x8023EDB8: sb          $t9, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r25;
;}
RECOMP_FUNC void func_802474B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802474B0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802474B4: jr          $ra
    // 0x802474B8: lw          $v0, 0x1770($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1770);
    return;
    // 0x802474B8: lw          $v0, 0x1770($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1770);
;}
