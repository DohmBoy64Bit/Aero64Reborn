#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80241494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80241494: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80241498: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8024149C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802414A0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802414A4: lw          $a2, 0xC($a1)
    ctx->r6 = MEM_W(ctx->r5, 0XC);
    // 0x802414A8: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x802414AC: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x802414B0: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802414B4: lw          $t6, 0x910($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X910);
    // 0x802414B8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x802414BC: addiu       $t8, $zero, 0x1E8
    ctx->r24 = ADD32(0, 0X1E8);
    // 0x802414C0: addiu       $t9, $zero, 0x7FFF
    ctx->r25 = ADD32(0, 0X7FFF);
    // 0x802414C4: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x802414C8: sw          $t8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r24;
    // 0x802414CC: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x802414D0: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x802414D4: sh          $t9, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r25;
    // 0x802414D8: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x802414DC: lbu         $t0, 0x9($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X9);
    // 0x802414E0: addiu       $t1, $zero, 0x3E80
    ctx->r9 = ADD32(0, 0X3E80);
    // 0x802414E4: sw          $t1, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r9;
    // 0x802414E8: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x802414EC: sb          $t0, 0x35($a0)
    MEM_B(0X35, ctx->r4) = ctx->r8;
    // 0x802414F0: lw          $t2, 0x10($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X10);
    // 0x802414F4: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x802414F8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x802414FC: sw          $t2, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r10;
    // 0x80241500: lw          $t3, 0x14($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X14);
    // 0x80241504: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80241508: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x8024150C: sw          $t3, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->r11;
    // 0x80241510: lw          $t4, 0x18($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X18);
    // 0x80241514: sw          $zero, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = 0;
    // 0x80241518: sw          $zero, 0x80($a0)
    MEM_W(0X80, ctx->r4) = 0;
    // 0x8024151C: sw          $zero, 0x84($a0)
    MEM_W(0X84, ctx->r4) = 0;
    // 0x80241520: sh          $t5, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r13;
    // 0x80241524: sw          $t4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r12;
    // 0x80241528: lbu         $t6, 0x8($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X8);
    // 0x8024152C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80241530: sb          $t6, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r14;
    // 0x80241534: lbu         $a3, 0x8($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X8);
    // 0x80241538: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8024153C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80241540: jal         0x80236CD0
    // 0x80241544: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_80236CD0(rdram, ctx);
        goto after_0;
    // 0x80241544: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_0:
    // 0x80241548: sw          $v0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r2;
    // 0x8024154C: jal         0x80241424
    // 0x80241550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80241424(rdram, ctx);
        goto after_1;
    // 0x80241550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80241554: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x80241558: addiu       $t8, $zero, 0x38
    ctx->r24 = ADD32(0, 0X38);
    // 0x8024155C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80241560: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80241564: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80241568: jal         0x80236CD0
    // 0x8024156C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_80236CD0(rdram, ctx);
        goto after_2;
    // 0x8024156C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x80241570: sw          $zero, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = 0;
    // 0x80241574: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80241578: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8024157C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80241580: blez        $t9, L_802415B0
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80241584: addiu       $t2, $zero, 0x1C
        ctx->r10 = ADD32(0, 0X1C);
            goto L_802415B0;
    }
    // 0x80241584: addiu       $t2, $zero, 0x1C
    ctx->r10 = ADD32(0, 0X1C);
    // 0x80241588: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8024158C: lw          $t0, 0x6C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X6C);
L_80241590:
    // 0x80241590: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80241594: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x80241598: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
    // 0x8024159C: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x802415A0: addiu       $v1, $v1, 0x38
    ctx->r3 = ADD32(ctx->r3, 0X38);
    // 0x802415A4: slt         $at, $a0, $t1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x802415A8: bnel        $at, $zero, L_80241590
    if (ctx->r1 != 0) {
        // 0x802415AC: lw          $t0, 0x6C($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X6C);
            goto L_80241590;
    }
    goto skip_0;
    // 0x802415AC: lw          $t0, 0x6C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X6C);
    skip_0:
L_802415B0:
    // 0x802415B0: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x802415B4: sw          $zero, 0x68($s0)
    MEM_W(0X68, ctx->r16) = 0;
    // 0x802415B8: lw          $a3, 0x4($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X4);
    // 0x802415BC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802415C0: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x802415C4: jal         0x80236CD0
    // 0x802415C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80236CD0(rdram, ctx);
        goto after_3;
    // 0x802415C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x802415CC: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    // 0x802415D0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802415D4: jal         0x8023F52C
    // 0x802415D8: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    func_8023F52C(rdram, ctx);
        goto after_4;
    // 0x802415D8: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    after_4:
    // 0x802415DC: lui         $t3, 0x8024
    ctx->r11 = S32(0X8024 << 16);
    // 0x802415E0: addiu       $t3, $t3, 0xCFC
    ctx->r11 = ADD32(ctx->r11, 0XCFC);
    // 0x802415E4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x802415E8: sw          $t3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r11;
    // 0x802415EC: sw          $s0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r16;
    // 0x802415F0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802415F4: lw          $a0, 0x910($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X910);
    // 0x802415F8: jal         0x8023F5A0
    // 0x802415FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8023F5A0(rdram, ctx);
        goto after_5;
    // 0x802415FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x80241600: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80241604: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80241608: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8024160C: jr          $ra
    // 0x80241610: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80241610: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80209508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80209508: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8020950C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80209510: lui         $s3, 0x8026
    ctx->r19 = S32(0X8026 << 16);
    // 0x80209514: addiu       $s3, $s3, -0x3C68
    ctx->r19 = ADD32(ctx->r19, -0X3C68);
    // 0x80209518: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8020951C: lhu         $t6, 0xBD8($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XBD8);
    // 0x80209520: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x80209524: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80209528: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8020952C: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80209530: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80209534: bne         $at, $zero, L_80209550
    if (ctx->r1 != 0) {
        // 0x80209538: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_80209550;
    }
    // 0x80209538: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8020953C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80209540: jal         0x80231A24
    // 0x80209544: addiu       $a0, $a0, 0x2C5C
    ctx->r4 = ADD32(ctx->r4, 0X2C5C);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80209544: addiu       $a0, $a0, 0x2C5C
    ctx->r4 = ADD32(ctx->r4, 0X2C5C);
    after_0:
    // 0x80209548: b           L_802096DC
    // 0x8020954C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802096DC;
    // 0x8020954C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80209550:
    // 0x80209550: blez        $v0, L_80209698
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80209554: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_80209698;
    }
    // 0x80209554: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80209558: lui         $s0, 0x8026
    ctx->r16 = S32(0X8026 << 16);
    // 0x8020955C: lui         $ra, 0x8026
    ctx->r31 = S32(0X8026 << 16);
    // 0x80209560: lui         $t2, 0x8026
    ctx->r10 = S32(0X8026 << 16);
    // 0x80209564: addiu       $t2, $t2, -0x3C5C
    ctx->r10 = ADD32(ctx->r10, -0X3C5C);
    // 0x80209568: addiu       $ra, $ra, -0x3C60
    ctx->r31 = ADD32(ctx->r31, -0X3C60);
    // 0x8020956C: addiu       $s0, $s0, -0x3C64
    ctx->r16 = ADD32(ctx->r16, -0X3C64);
    // 0x80209570: addiu       $s1, $zero, 0xC
    ctx->r17 = ADD32(0, 0XC);
    // 0x80209574: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
L_80209578:
    // 0x80209578: beq         $at, $zero, L_80209688
    if (ctx->r1 == 0) {
        // 0x8020957C: or          $t5, $s2, $zero
        ctx->r13 = ctx->r18 | 0;
            goto L_80209688;
    }
    // 0x8020957C: or          $t5, $s2, $zero
    ctx->r13 = ctx->r18 | 0;
    // 0x80209580: sll         $a1, $t5, 2
    ctx->r5 = S32(ctx->r13 << 2);
    // 0x80209584: sll         $t4, $s2, 2
    ctx->r12 = S32(ctx->r18 << 2);
L_80209588:
    // 0x80209588: lw          $a3, 0x0($ra)
    ctx->r7 = MEM_W(ctx->r31, 0X0);
    // 0x8020958C: addu        $t7, $a3, $t4
    ctx->r15 = ADD32(ctx->r7, ctx->r12);
    // 0x80209590: addu        $t8, $a3, $a1
    ctx->r24 = ADD32(ctx->r7, ctx->r5);
    // 0x80209594: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80209598: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8020959C: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x802095A0: nop

    // 0x802095A4: bc1fl       L_8020967C
    if (!c1cs) {
        // 0x802095A8: addiu       $t5, $t5, 0x1
        ctx->r13 = ADD32(ctx->r13, 0X1);
            goto L_8020967C;
    }
    goto skip_0;
    // 0x802095A8: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    skip_0:
    // 0x802095AC: multu       $s2, $s1
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802095B0: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x802095B4: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x802095B8: addu        $t6, $t0, $a1
    ctx->r14 = ADD32(ctx->r8, ctx->r5);
    // 0x802095BC: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x802095C0: addu        $t1, $t0, $t4
    ctx->r9 = ADD32(ctx->r8, ctx->r12);
    // 0x802095C4: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x802095C8: mflo        $v1
    ctx->r3 = lo;
    // 0x802095CC: addu        $a0, $t9, $v1
    ctx->r4 = ADD32(ctx->r25, ctx->r3);
    // 0x802095D0: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x802095D4: lwc1        $f14, 0x4($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4);
    // 0x802095D8: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x802095DC: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x802095E0: multu       $t5, $s1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802095E4: lw          $a3, 0x0($ra)
    ctx->r7 = MEM_W(ctx->r31, 0X0);
    // 0x802095E8: addu        $t8, $a3, $a1
    ctx->r24 = ADD32(ctx->r7, ctx->r5);
    // 0x802095EC: lwc1        $f6, 0x0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X0);
    // 0x802095F0: addu        $t9, $a3, $t4
    ctx->r25 = ADD32(ctx->r7, ctx->r12);
    // 0x802095F4: swc1        $f6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f6.u32l;
    // 0x802095F8: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x802095FC: mflo        $a2
    ctx->r6 = lo;
    // 0x80209600: addu        $t6, $v0, $a2
    ctx->r14 = ADD32(ctx->r2, ctx->r6);
    // 0x80209604: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80209608: addu        $t7, $v0, $v1
    ctx->r15 = ADD32(ctx->r2, ctx->r3);
    // 0x8020960C: swc1        $f8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f8.u32l;
    // 0x80209610: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80209614: addu        $t8, $v0, $a2
    ctx->r24 = ADD32(ctx->r2, ctx->r6);
    // 0x80209618: lwc1        $f10, 0x4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8020961C: addu        $t9, $v0, $v1
    ctx->r25 = ADD32(ctx->r2, ctx->r3);
    // 0x80209620: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
    // 0x80209624: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80209628: addu        $t6, $v0, $a2
    ctx->r14 = ADD32(ctx->r2, ctx->r6);
    // 0x8020962C: lwc1        $f18, 0x8($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80209630: addu        $t7, $v0, $v1
    ctx->r15 = ADD32(ctx->r2, ctx->r3);
    // 0x80209634: swc1        $f18, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f18.u32l;
    // 0x80209638: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8020963C: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x80209640: sw          $t3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r11;
    // 0x80209644: lw          $t6, 0x0($ra)
    ctx->r14 = MEM_W(ctx->r31, 0X0);
    // 0x80209648: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8020964C: swc1        $f12, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f12.u32l;
    // 0x80209650: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x80209654: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x80209658: swc1        $f2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f2.u32l;
    // 0x8020965C: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x80209660: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x80209664: swc1        $f14, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f14.u32l;
    // 0x80209668: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x8020966C: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x80209670: swc1        $f16, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f16.u32l;
    // 0x80209674: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x80209678: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
L_8020967C:
    // 0x8020967C: slt         $at, $t5, $v0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80209680: bne         $at, $zero, L_80209588
    if (ctx->r1 != 0) {
        // 0x80209684: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_80209588;
    }
    // 0x80209684: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_80209688:
    // 0x80209688: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8020968C: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80209690: bnel        $at, $zero, L_80209578
    if (ctx->r1 != 0) {
        // 0x80209694: slt         $at, $s2, $v0
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80209578;
    }
    goto skip_1;
    // 0x80209694: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    skip_1:
L_80209698:
    // 0x80209698: beq         $v0, $zero, L_802096D8
    if (ctx->r2 == 0) {
        // 0x8020969C: lui         $a3, 0x8026
        ctx->r7 = S32(0X8026 << 16);
            goto L_802096D8;
    }
    // 0x8020969C: lui         $a3, 0x8026
    ctx->r7 = S32(0X8026 << 16);
    // 0x802096A0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802096A4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802096A8: lw          $a3, -0x3C60($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3C60);
L_802096AC:
    // 0x802096AC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x802096B0: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x802096B4: lwc1        $f4, -0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, -0X4);
    // 0x802096B8: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x802096BC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x802096C0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x802096C4: nop

    // 0x802096C8: bc1fl       L_802096DC
    if (!c1cs) {
        // 0x802096CC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802096DC;
    }
    goto skip_2;
    // 0x802096CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x802096D0: bne         $t8, $zero, L_802096AC
    if (ctx->r24 != 0) {
        // 0x802096D4: sw          $t8, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->r24;
            goto L_802096AC;
    }
    // 0x802096D4: sw          $t8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r24;
L_802096D8:
    // 0x802096D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802096DC:
    // 0x802096DC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802096E0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802096E4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802096E8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802096EC: jr          $ra
    // 0x802096F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802096F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80222F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222F30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80222F34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80222F38: jal         0x80222CBC
    // 0x80222F3C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80222CBC(rdram, ctx);
        goto after_0;
    // 0x80222F3C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80222F40: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80222F44: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80222F48: beq         $t6, $zero, L_80222F58
    if (ctx->r14 == 0) {
        // 0x80222F4C: nop
    
            goto L_80222F58;
    }
    // 0x80222F4C: nop

    // 0x80222F50: b           L_80222F58
    // 0x80222F54: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
        goto L_80222F58;
    // 0x80222F54: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
L_80222F58:
    // 0x80222F58: jal         0x80222E24
    // 0x80222F5C: sb          $t0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r8;
    func_80222E24(rdram, ctx);
        goto after_1;
    // 0x80222F5C: sb          $t0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r8;
    after_1:
    // 0x80222F60: jal         0x802375F0
    // 0x80222F64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_802375F0(rdram, ctx);
        goto after_2;
    // 0x80222F64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80222F68: lui         $t1, 0x8027
    ctx->r9 = S32(0X8027 << 16);
    // 0x80222F6C: addiu       $t1, $t1, 0x3B90
    ctx->r9 = ADD32(ctx->r9, 0X3B90);
    // 0x80222F70: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x80222F74: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x80222F78: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x80222F7C: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80222F80: addiu       $t7, $a0, 0x8
    ctx->r15 = ADD32(ctx->r4, 0X8);
    // 0x80222F84: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x80222F88: or          $t2, $t9, $at
    ctx->r10 = ctx->r25 | ctx->r1;
    // 0x80222F8C: ori         $t3, $t2, 0x40
    ctx->r11 = ctx->r10 | 0X40;
    // 0x80222F90: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80222F94: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80222F98: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80222F9C: lhu         $a1, -0x178C($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X178C);
    // 0x80222FA0: lui         $t5, 0x8027
    ctx->r13 = S32(0X8027 << 16);
    // 0x80222FA4: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x80222FA8: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x80222FAC: addiu       $t5, $t5, 0x3BB0
    ctx->r13 = ADD32(ctx->r13, 0X3BB0);
    // 0x80222FB0: addiu       $t8, $t8, 0x3BB8
    ctx->r24 = ADD32(ctx->r24, 0X3BB8);
    // 0x80222FB4: addu        $a2, $t4, $t5
    ctx->r6 = ADD32(ctx->r12, ctx->r13);
    // 0x80222FB8: addu        $a3, $t4, $t8
    ctx->r7 = ADD32(ctx->r12, ctx->r24);
    // 0x80222FBC: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80222FC0: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x80222FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80222FC8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80222FCC: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x80222FD0: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80222FD4: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x80222FD8: jr          $ra
    // 0x80222FDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80222FDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238B90: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80238B94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80238B98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80238B9C: lbu         $t6, 0x65($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X65);
    // 0x80238BA0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80238BA4: beq         $t6, $zero, L_80238BC4
    if (ctx->r14 == 0) {
        // 0x80238BA8: nop
    
            goto L_80238BC4;
    }
    // 0x80238BA8: nop

    // 0x80238BAC: jal         0x802456A0
    // 0x80238BB0: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    func_802456A0(rdram, ctx);
        goto after_0;
    // 0x80238BB0: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    after_0:
    // 0x80238BB4: beq         $v0, $zero, L_80238BC4
    if (ctx->r2 == 0) {
        // 0x80238BB8: nop
    
            goto L_80238BC4;
    }
    // 0x80238BB8: nop

    // 0x80238BBC: b           L_80238D88
    // 0x80238BC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80238D88;
    // 0x80238BC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80238BC4:
    // 0x80238BC4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80238BC8: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x80238BCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80238BD0: jal         0x80245710
    // 0x80238BD4: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    func_80245710(rdram, ctx);
        goto after_1;
    // 0x80238BD4: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    after_1:
    // 0x80238BD8: beq         $v0, $zero, L_80238BE8
    if (ctx->r2 == 0) {
        // 0x80238BDC: addiu       $a0, $sp, 0x60
        ctx->r4 = ADD32(ctx->r29, 0X60);
            goto L_80238BE8;
    }
    // 0x80238BDC: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80238BE0: b           L_80238D88
    // 0x80238BE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80238D88;
    // 0x80238BE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80238BE8:
    // 0x80238BE8: addiu       $a1, $sp, 0x82
    ctx->r5 = ADD32(ctx->r29, 0X82);
    // 0x80238BEC: jal         0x80244B3C
    // 0x80238BF0: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    func_80244B3C(rdram, ctx);
        goto after_2;
    // 0x80238BF0: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    after_2:
    // 0x80238BF4: lhu         $t7, 0x82($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X82);
    // 0x80238BF8: lhu         $t8, 0x7C($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X7C);
    // 0x80238BFC: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x80238C00: bne         $t7, $t8, L_80238C1C
    if (ctx->r15 != ctx->r24) {
        // 0x80238C04: sw          $a1, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r5;
            goto L_80238C1C;
    }
    // 0x80238C04: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x80238C08: lhu         $t9, 0x80($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X80);
    // 0x80238C0C: lhu         $t1, 0x7E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X7E);
    // 0x80238C10: nop

    // 0x80238C14: beq         $t9, $t1, L_80238C6C
    if (ctx->r25 == ctx->r9) {
        // 0x80238C18: lw          $t3, 0x38($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X38);
            goto L_80238C6C;
    }
    // 0x80238C18: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
L_80238C1C:
    // 0x80238C1C: jal         0x80244F84
    // 0x80238C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80244F84(rdram, ctx);
        goto after_3;
    // 0x80238C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80238C24: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80238C28: bne         $v0, $at, L_80238C58
    if (ctx->r2 != ctx->r1) {
        // 0x80238C2C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80238C58;
    }
    // 0x80238C2C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80238C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80238C34: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x80238C38: jal         0x80244C38
    // 0x80238C3C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_80244C38(rdram, ctx);
        goto after_4;
    // 0x80238C3C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x80238C40: beq         $v0, $zero, L_80238C50
    if (ctx->r2 == 0) {
        // 0x80238C44: addiu       $t2, $sp, 0x40
        ctx->r10 = ADD32(ctx->r29, 0X40);
            goto L_80238C50;
    }
    // 0x80238C44: addiu       $t2, $sp, 0x40
    ctx->r10 = ADD32(ctx->r29, 0X40);
    // 0x80238C48: b           L_80238D88
    // 0x80238C4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80238D88;
    // 0x80238C4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80238C50:
    // 0x80238C50: b           L_80238C68
    // 0x80238C54: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
        goto L_80238C68;
    // 0x80238C54: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
L_80238C58:
    // 0x80238C58: beq         $v0, $zero, L_80238C6C
    if (ctx->r2 == 0) {
        // 0x80238C5C: lw          $t3, 0x38($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X38);
            goto L_80238C6C;
    }
    // 0x80238C5C: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80238C60: b           L_80238D84
    // 0x80238C64: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80238D84;
    // 0x80238C64: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80238C68:
    // 0x80238C68: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
L_80238C6C:
    // 0x80238C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80238C70: lhu         $t4, 0x18($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X18);
    // 0x80238C74: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x80238C78: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80238C7C: bne         $t5, $zero, L_80238CBC
    if (ctx->r13 != 0) {
        // 0x80238C80: lw          $v1, 0x38($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X38);
            goto L_80238CBC;
    }
    // 0x80238C80: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80238C84: jal         0x80244C38
    // 0x80238C88: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_80244C38(rdram, ctx);
        goto after_5;
    // 0x80238C88: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_5:
    // 0x80238C8C: beq         $v0, $zero, L_80238CA0
    if (ctx->r2 == 0) {
        // 0x80238C90: lhu         $t7, 0x58($sp)
        ctx->r15 = MEM_HU(ctx->r29, 0X58);
            goto L_80238CA0;
    }
    // 0x80238C90: lhu         $t7, 0x58($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X58);
    // 0x80238C94: b           L_80238D88
    // 0x80238C98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80238D88;
    // 0x80238C98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80238C9C: lhu         $t7, 0x58($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X58);
L_80238CA0:
    // 0x80238CA0: addiu       $t6, $sp, 0x40
    ctx->r14 = ADD32(ctx->r29, 0X40);
    // 0x80238CA4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80238CA8: bne         $t8, $zero, L_80238CB8
    if (ctx->r24 != 0) {
        // 0x80238CAC: sw          $t6, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r14;
            goto L_80238CB8;
    }
    // 0x80238CAC: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x80238CB0: b           L_80238D84
    // 0x80238CB4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_80238D84;
    // 0x80238CB4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_80238CB8:
    // 0x80238CB8: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
L_80238CBC:
    // 0x80238CBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80238CC0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80238CC4: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x80238CC8: addiu       $a1, $v1, 0x1
    ctx->r5 = ADD32(ctx->r3, 0X1);
    // 0x80238CCC: addiu       $a2, $v1, 0x2
    ctx->r6 = ADD32(ctx->r3, 0X2);
    // 0x80238CD0: addiu       $a3, $v1, 0x3
    ctx->r7 = ADD32(ctx->r3, 0X3);
L_80238CD4:
    // 0x80238CD4: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x80238CD8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80238CDC: sb          $t9, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r25;
    // 0x80238CE0: lbu         $t1, 0x0($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X0);
    // 0x80238CE4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80238CE8: sb          $t1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r9;
    // 0x80238CEC: lbu         $t2, 0x0($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X0);
    // 0x80238CF0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80238CF4: sb          $t2, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r10;
    // 0x80238CF8: lbu         $t4, 0x0($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0X0);
    // 0x80238CFC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80238D00: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80238D04: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80238D08: bne         $a0, $t0, L_80238CD4
    if (ctx->r4 != ctx->r8) {
        // 0x80238D0C: sb          $t4, 0xB($v0)
        MEM_B(0XB, ctx->r2) = ctx->r12;
            goto L_80238CD4;
    }
    // 0x80238D0C: sb          $t4, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r12;
    // 0x80238D10: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80238D14: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80238D18: lbu         $t3, 0x1B($t5)
    ctx->r11 = MEM_BU(ctx->r13, 0X1B);
    // 0x80238D1C: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x80238D20: sw          $t3, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r11;
    // 0x80238D24: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80238D28: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80238D2C: lbu         $t7, 0x1A($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1A);
    // 0x80238D30: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x80238D34: andi        $v0, $t7, 0xFF
    ctx->r2 = ctx->r15 & 0XFF;
    // 0x80238D38: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80238D3C: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x80238D40: addiu       $t0, $v1, 0x8
    ctx->r8 = ADD32(ctx->r3, 0X8);
    // 0x80238D44: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x80238D48: addu        $t4, $t0, $v1
    ctx->r12 = ADD32(ctx->r8, ctx->r3);
    // 0x80238D4C: sw          $t9, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r25;
    // 0x80238D50: sw          $t1, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r9;
    // 0x80238D54: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
    // 0x80238D58: sw          $t0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r8;
    // 0x80238D5C: sw          $t4, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r12;
    // 0x80238D60: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80238D64: addiu       $a3, $s0, 0x2C
    ctx->r7 = ADD32(ctx->r16, 0X2C);
    // 0x80238D68: jal         0x80245710
    // 0x80238D6C: sb          $t7, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r15;
    func_80245710(rdram, ctx);
        goto after_6;
    // 0x80238D6C: sb          $t7, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r15;
    after_6:
    // 0x80238D70: beq         $v0, $zero, L_80238D80
    if (ctx->r2 == 0) {
        // 0x80238D74: nop
    
            goto L_80238D80;
    }
    // 0x80238D74: nop

    // 0x80238D78: b           L_80238D88
    // 0x80238D7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80238D88;
    // 0x80238D7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80238D80:
    // 0x80238D80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80238D84:
    // 0x80238D84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80238D88:
    // 0x80238D88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80238D8C: jr          $ra
    // 0x80238D90: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80238D90: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80231A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231A40: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80231A44: lw          $t6, -0x78C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X78C0);
    // 0x80231A48: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80231A4C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80231A50: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80231A54: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x80231A58: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80231A5C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80231A60: bne         $t6, $zero, L_80231B58
    if (ctx->r14 != 0) {
        // 0x80231A64: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_80231B58;
    }
    // 0x80231A64: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80231A68: bgez        $s1, L_80231A7C
    if (SIGNED(ctx->r17) >= 0) {
        // 0x80231A6C: andi        $t7, $s1, 0x7
        ctx->r15 = ctx->r17 & 0X7;
            goto L_80231A7C;
    }
    // 0x80231A6C: andi        $t7, $s1, 0x7
    ctx->r15 = ctx->r17 & 0X7;
    // 0x80231A70: beq         $t7, $zero, L_80231A7C
    if (ctx->r15 == 0) {
        // 0x80231A74: nop
    
            goto L_80231A7C;
    }
    // 0x80231A74: nop

    // 0x80231A78: addiu       $t7, $t7, -0x8
    ctx->r15 = ADD32(ctx->r15, -0X8);
L_80231A7C:
    // 0x80231A7C: beq         $t7, $zero, L_80231A98
    if (ctx->r15 == 0) {
        // 0x80231A80: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80231A98;
    }
    // 0x80231A80: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80231A84: addiu       $a0, $a0, 0x4FD8
    ctx->r4 = ADD32(ctx->r4, 0X4FD8);
    // 0x80231A88: jal         0x80231A24
    // 0x80231A8C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80231A8C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x80231A90: b           L_80231B5C
    // 0x80231A94: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80231B5C;
    // 0x80231A94: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80231A98:
    // 0x80231A98: bgez        $a3, L_80231AAC
    if (SIGNED(ctx->r7) >= 0) {
        // 0x80231A9C: andi        $t8, $a3, 0x1
        ctx->r24 = ctx->r7 & 0X1;
            goto L_80231AAC;
    }
    // 0x80231A9C: andi        $t8, $a3, 0x1
    ctx->r24 = ctx->r7 & 0X1;
    // 0x80231AA0: beq         $t8, $zero, L_80231AAC
    if (ctx->r24 == 0) {
        // 0x80231AA4: nop
    
            goto L_80231AAC;
    }
    // 0x80231AA4: nop

    // 0x80231AA8: addiu       $t8, $t8, -0x2
    ctx->r24 = ADD32(ctx->r24, -0X2);
L_80231AAC:
    // 0x80231AAC: beq         $t8, $zero, L_80231ACC
    if (ctx->r24 == 0) {
        // 0x80231AB0: lui         $t9, 0x8000
        ctx->r25 = S32(0X8000 << 16);
            goto L_80231ACC;
    }
    // 0x80231AB0: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x80231AB4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80231AB8: addiu       $a0, $a0, 0x5008
    ctx->r4 = ADD32(ctx->r4, 0X5008);
    // 0x80231ABC: jal         0x80231A24
    // 0x80231AC0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x80231AC0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x80231AC4: b           L_80231B5C
    // 0x80231AC8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80231B5C;
    // 0x80231AC8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80231ACC:
    // 0x80231ACC: lw          $t9, 0x318($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X318);
    // 0x80231AD0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80231AD4: andi        $t0, $s0, 0x1
    ctx->r8 = ctx->r16 & 0X1;
    // 0x80231AD8: sltu        $at, $t9, $s0
    ctx->r1 = ctx->r25 < ctx->r16 ? 1 : 0;
    // 0x80231ADC: beq         $at, $zero, L_80231AF8
    if (ctx->r1 == 0) {
        // 0x80231AE0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80231AF8;
    }
    // 0x80231AE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80231AE4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80231AE8: jal         0x80231A24
    // 0x80231AEC: addiu       $a0, $a0, 0x5038
    ctx->r4 = ADD32(ctx->r4, 0X5038);
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x80231AEC: addiu       $a0, $a0, 0x5038
    ctx->r4 = ADD32(ctx->r4, 0X5038);
    after_2:
    // 0x80231AF0: b           L_80231B5C
    // 0x80231AF4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80231B5C;
    // 0x80231AF4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80231AF8:
    // 0x80231AF8: beq         $t0, $zero, L_80231B0C
    if (ctx->r8 == 0) {
        // 0x80231AFC: addiu       $at, $zero, -0x2
        ctx->r1 = ADD32(0, -0X2);
            goto L_80231B0C;
    }
    // 0x80231AFC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80231B00: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80231B04: and         $t1, $s0, $at
    ctx->r9 = ctx->r16 & ctx->r1;
    // 0x80231B08: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
L_80231B0C:
    // 0x80231B0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80231B10: jal         0x8023CE80
    // 0x80231B14: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_8023CE80(rdram, ctx);
        goto after_3;
    // 0x80231B14: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_3:
    // 0x80231B18: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x80231B1C: addiu       $t2, $t2, 0xC30
    ctx->r10 = ADD32(ctx->r10, 0XC30);
    // 0x80231B20: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80231B24: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80231B28: addiu       $a0, $a0, 0xC10
    ctx->r4 = ADD32(ctx->r4, 0XC10);
    // 0x80231B2C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80231B30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80231B34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80231B38: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x80231B3C: jal         0x80237E10
    // 0x80231B40: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80237E10(rdram, ctx);
        goto after_4;
    // 0x80231B40: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_4:
    // 0x80231B44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80231B48: jal         0x8023F020
    // 0x80231B4C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8023F020(rdram, ctx);
        goto after_5;
    // 0x80231B4C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x80231B50: jal         0x80230F68
    // 0x80231B54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80230F68(rdram, ctx);
        goto after_6;
    // 0x80231B54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
L_80231B58:
    // 0x80231B58: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80231B5C:
    // 0x80231B5C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80231B60: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80231B64: jr          $ra
    // 0x80231B68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80231B68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80238B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238B50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80238B54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238B58: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x80238B5C: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80238B60: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80238B64: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x80238B68: jal         0x8023F37C
    // 0x80238B6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80238B6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80238B70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238B74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80238B78: jr          $ra
    // 0x80238B7C: nop

    return;
    // 0x80238B7C: nop

;}
RECOMP_FUNC void func_8022818C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022818C: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x80228190: addiu       $v0, $v0, 0x5A58
    ctx->r2 = ADD32(ctx->r2, 0X5A58);
    // 0x80228194: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80228198: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022819C: jr          $ra
    // 0x802281A0: sw          $zero, 0x5A5C($at)
    MEM_W(0X5A5C, ctx->r1) = 0;
    return;
    // 0x802281A0: sw          $zero, 0x5A5C($at)
    MEM_W(0X5A5C, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8023FA70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FA70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023FA74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023FA78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8023FA7C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8023FA80: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8023FA84: beql        $t6, $zero, L_8023FAF8
    if (ctx->r14 == 0) {
        // 0x8023FA88: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8023FAF8;
    }
    goto skip_0;
    // 0x8023FA88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023FA8C: jal         0x80237840
    // 0x8023FA90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80237840(rdram, ctx);
        goto after_0;
    // 0x8023FA90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8023FA94: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8023FA98: beq         $v0, $zero, L_8023FAF4
    if (ctx->r2 == 0) {
        // 0x8023FA9C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8023FAF4;
    }
    // 0x8023FA9C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023FAA0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8023FAA4: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x8023FAA8: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x8023FAAC: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8023FAB0: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x8023FAB4: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x8023FAB8: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8023FABC: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8023FAC0: lbu         $v1, 0x23($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X23);
    // 0x8023FAC4: bgez        $v1, L_8023FAD4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8023FAC8: negu        $t3, $v1
        ctx->r11 = SUB32(0, ctx->r3);
            goto L_8023FAD4;
    }
    // 0x8023FAC8: negu        $t3, $v1
    ctx->r11 = SUB32(0, ctx->r3);
    // 0x8023FACC: b           L_8023FAD8
    // 0x8023FAD0: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
        goto L_8023FAD8;
    // 0x8023FAD0: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
L_8023FAD4:
    // 0x8023FAD4: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
L_8023FAD8:
    // 0x8023FAD8: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x8023FADC: lw          $t4, 0x8($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X8);
    // 0x8023FAE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023FAE4: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    // 0x8023FAE8: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8023FAEC: jalr        $t9
    // 0x8023FAF0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8023FAF0: nop

    after_1:
L_8023FAF4:
    // 0x8023FAF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023FAF8:
    // 0x8023FAF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023FAFC: jr          $ra
    // 0x8023FB00: nop

    return;
    // 0x8023FB00: nop

;}
RECOMP_FUNC void func_802496B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802496B8: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x802496BC: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x802496C0: addiu       $t7, $a1, 0x1
    ctx->r15 = ADD32(ctx->r5, 0X1);
    // 0x802496C4: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
    // 0x802496C8: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x802496CC: sll         $t6, $v1, 24
    ctx->r14 = S32(ctx->r3 << 24);
    // 0x802496D0: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x802496D4: or          $v1, $t6, $t9
    ctx->r3 = ctx->r14 | ctx->r25;
    // 0x802496D8: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x802496DC: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x802496E0: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x802496E4: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x802496E8: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
    // 0x802496EC: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x802496F0: lbu         $t6, 0x0($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X0);
    // 0x802496F4: or          $v1, $v1, $t8
    ctx->r3 = ctx->r3 | ctx->r24;
    // 0x802496F8: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x802496FC: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
    // 0x80249700: jr          $ra
    // 0x80249704: or          $v0, $v1, $t6
    ctx->r2 = ctx->r3 | ctx->r14;
    return;
    // 0x80249704: or          $v0, $v1, $t6
    ctx->r2 = ctx->r3 | ctx->r14;
;}
RECOMP_FUNC void func_8020523C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020523C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80205240: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80205244: lui         $s4, 0x8025
    ctx->r20 = S32(0X8025 << 16);
    // 0x80205248: addiu       $s4, $s4, -0x1A60
    ctx->r20 = ADD32(ctx->r20, -0X1A60);
    // 0x8020524C: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x80205250: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80205254: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80205258: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8020525C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80205260: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80205264: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x80205268: blez        $t6, L_802052A0
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8020526C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_802052A0;
    }
    // 0x8020526C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80205270: lui         $s1, 0x8026
    ctx->r17 = S32(0X8026 << 16);
    // 0x80205274: addiu       $s1, $s1, -0x4728
    ctx->r17 = ADD32(ctx->r17, -0X4728);
    // 0x80205278: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x8020527C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80205280:
    // 0x80205280: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80205284: jal         0x802374B0
    // 0x80205288: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802374B0(rdram, ctx);
        goto after_0;
    // 0x80205288: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8020528C: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x80205290: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80205294: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80205298: bnel        $at, $zero, L_80205280
    if (ctx->r1 != 0) {
        // 0x8020529C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80205280;
    }
    goto skip_0;
    // 0x8020529C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
L_802052A0:
    // 0x802052A0: lui         $s2, 0x8026
    ctx->r18 = S32(0X8026 << 16);
    // 0x802052A4: addiu       $s2, $s2, -0x4750
    ctx->r18 = ADD32(ctx->r18, -0X4750);
    // 0x802052A8: lw          $s0, 0x4($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X4);
    // 0x802052AC: lui         $s3, 0x8026
    ctx->r19 = S32(0X8026 << 16);
    // 0x802052B0: addiu       $s3, $s3, -0x4740
    ctx->r19 = ADD32(ctx->r19, -0X4740);
    // 0x802052B4: beq         $s0, $zero, L_80205320
    if (ctx->r16 == 0) {
        // 0x802052B8: nop
    
            goto L_80205320;
    }
    // 0x802052B8: nop

L_802052BC:
    // 0x802052BC: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x802052C0: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x802052C4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x802052C8: addiu       $t0, $t9, 0x2
    ctx->r8 = ADD32(ctx->r25, 0X2);
    // 0x802052CC: sltu        $at, $t0, $t8
    ctx->r1 = ctx->r8 < ctx->r24 ? 1 : 0;
    // 0x802052D0: beq         $at, $zero, L_80205318
    if (ctx->r1 == 0) {
        // 0x802052D4: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80205318;
    }
    // 0x802052D4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x802052D8: lw          $t1, 0x4($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X4);
    // 0x802052DC: bne         $s0, $t1, L_802052E8
    if (ctx->r16 != ctx->r9) {
        // 0x802052E0: nop
    
            goto L_802052E8;
    }
    // 0x802052E0: nop

    // 0x802052E4: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
L_802052E8:
    // 0x802052E8: jal         0x80237120
    // 0x802052EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80237120(rdram, ctx);
        goto after_1;
    // 0x802052EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802052F0: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x802052F4: beql        $a1, $zero, L_80205310
    if (ctx->r5 == 0) {
        // 0x802052F8: sw          $s0, 0x8($s2)
        MEM_W(0X8, ctx->r18) = ctx->r16;
            goto L_80205310;
    }
    goto skip_1;
    // 0x802052F8: sw          $s0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r16;
    skip_1:
    // 0x802052FC: jal         0x80237150
    // 0x80205300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80237150(rdram, ctx);
        goto after_2;
    // 0x80205300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80205304: b           L_80205318
    // 0x80205308: nop

        goto L_80205318;
    // 0x80205308: nop

    // 0x8020530C: sw          $s0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r16;
L_80205310:
    // 0x80205310: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80205314: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_80205318:
    // 0x80205318: bne         $s1, $zero, L_802052BC
    if (ctx->r17 != 0) {
        // 0x8020531C: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_802052BC;
    }
    // 0x8020531C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_80205320:
    // 0x80205320: lui         $s3, 0x8026
    ctx->r19 = S32(0X8026 << 16);
    // 0x80205324: addiu       $s3, $s3, -0x4740
    ctx->r19 = ADD32(ctx->r19, -0X4740);
    // 0x80205328: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x8020532C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80205330: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x80205334: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80205338: sw          $t3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r11;
    // 0x8020533C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80205340: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80205344: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80205348: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8020534C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80205350: jr          $ra
    // 0x80205354: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80205354: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8023E030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E030: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023E034: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023E038: jal         0x80247820
    // 0x8023E03C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80247820(rdram, ctx);
        goto after_0;
    // 0x8023E03C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8023E040: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023E044: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8023E048: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x8023E04C: beq         $t7, $zero, L_8023E060
    if (ctx->r15 == 0) {
        // 0x8023E050: nop
    
            goto L_8023E060;
    }
    // 0x8023E050: nop

    // 0x8023E054: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8023E058: b           L_8023E064
    // 0x8023E05C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
        goto L_8023E064;
    // 0x8023E05C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
L_8023E060:
    // 0x8023E060: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_8023E064:
    // 0x8023E064: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8023E068: andi        $t0, $t9, 0x80
    ctx->r8 = ctx->r25 & 0X80;
    // 0x8023E06C: beq         $t0, $zero, L_8023E09C
    if (ctx->r8 == 0) {
        // 0x8023E070: nop
    
            goto L_8023E09C;
    }
    // 0x8023E070: nop

    // 0x8023E074: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8023E078: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8023E07C: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8023E080: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x8023E084: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x8023E088: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x8023E08C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8023E090: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x8023E094: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8023E098: sw          $t7, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r15;
L_8023E09C:
    // 0x8023E09C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023E0A0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8023E0A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023E0A8: jr          $ra
    // 0x8023E0AC: nop

    return;
    // 0x8023E0AC: nop

;}
RECOMP_FUNC void func_80247090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247090: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80247094: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x80247098: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x8024709C: sw          $t7, 0x5F64($at)
    MEM_W(0X5F64, ctx->r1) = ctx->r15;
    // 0x802470A0: sw          $t6, 0x5F60($at)
    MEM_W(0X5F60, ctx->r1) = ctx->r14;
    // 0x802470A4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802470A8: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x802470AC: lw          $t8, 0x1A70($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1A70);
    // 0x802470B0: sw          $zero, 0x5F68($at)
    MEM_W(0X5F68, ctx->r1) = 0;
    // 0x802470B4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802470B8: sw          $zero, 0x5F6C($at)
    MEM_W(0X5F6C, ctx->r1) = 0;
    // 0x802470BC: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x802470C0: sw          $t8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r24;
    // 0x802470C4: lw          $t9, 0x1A70($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1A70);
    // 0x802470C8: lui         $t1, 0x8025
    ctx->r9 = S32(0X8025 << 16);
    // 0x802470CC: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x802470D0: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x802470D4: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
    // 0x802470D8: lui         $t4, 0x8025
    ctx->r12 = S32(0X8025 << 16);
    // 0x802470DC: sw          $t0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r8;
    // 0x802470E0: lw          $t1, 0x1A70($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1A70);
    // 0x802470E4: lui         $t5, 0x8025
    ctx->r13 = S32(0X8025 << 16);
    // 0x802470E8: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x802470EC: sw          $t2, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r10;
    // 0x802470F0: sw          $t3, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r11;
    // 0x802470F4: lw          $t4, 0x1A70($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1A70);
    // 0x802470F8: lw          $t6, 0x10($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X10);
    // 0x802470FC: lw          $t7, 0x14($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X14);
    // 0x80247100: sw          $t6, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r14;
    // 0x80247104: sw          $t7, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r15;
    // 0x80247108: lw          $t5, 0x1A70($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1A70);
    // 0x8024710C: sw          $zero, 0x18($t5)
    MEM_W(0X18, ctx->r13) = 0;
    // 0x80247110: lw          $t8, 0x1A70($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1A70);
    // 0x80247114: jr          $ra
    // 0x80247118: sw          $zero, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = 0;
    return;
    // 0x80247118: sw          $zero, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = 0;
;}
RECOMP_FUNC void func_8023EBF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023EBF8: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8023EBFC: lbu         $t7, 0x5EB1($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X5EB1);
    // 0x8023EC00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023EC04: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8023EC08: addiu       $t6, $t6, 0x5E70
    ctx->r14 = ADD32(ctx->r14, 0X5E70);
    // 0x8023EC0C: sb          $zero, 0x7($sp)
    MEM_B(0X7, ctx->r29) = 0;
    // 0x8023EC10: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8023EC14: blez        $t7, L_8023ECB8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8023EC18: sw          $zero, 0x8($sp)
        MEM_W(0X8, ctx->r29) = 0;
            goto L_8023ECB8;
    }
    // 0x8023EC18: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
L_8023EC1C:
    // 0x8023EC1C: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x8023EC20: addiu       $t8, $sp, 0xC
    ctx->r24 = ADD32(ctx->r29, 0XC);
    // 0x8023EC24: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x8023EC28: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x8023EC2C: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x8023EC30: lwl         $t1, 0x4($t9)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r25, 0X4);
    // 0x8023EC34: lwr         $t1, 0x7($t9)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r25, 0X7);
    // 0x8023EC38: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x8023EC3C: lbu         $t2, 0xE($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XE);
    // 0x8023EC40: andi        $t3, $t2, 0xC0
    ctx->r11 = ctx->r10 & 0XC0;
    // 0x8023EC44: sra         $t4, $t3, 4
    ctx->r12 = S32(SIGNED(ctx->r11) >> 4);
    // 0x8023EC48: sb          $t4, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r12;
    // 0x8023EC4C: lbu         $t5, 0x3($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X3);
    // 0x8023EC50: bne         $t5, $zero, L_8023EC8C
    if (ctx->r13 != 0) {
        // 0x8023EC54: nop
    
            goto L_8023EC8C;
    }
    // 0x8023EC54: nop

    // 0x8023EC58: lbu         $t6, 0x11($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X11);
    // 0x8023EC5C: lbu         $t0, 0x10($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X10);
    // 0x8023EC60: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8023EC64: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x8023EC68: or          $t8, $t7, $t0
    ctx->r24 = ctx->r15 | ctx->r8;
    // 0x8023EC6C: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x8023EC70: lbu         $t9, 0x12($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X12);
    // 0x8023EC74: sb          $t9, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r25;
    // 0x8023EC78: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x8023EC7C: lbu         $t1, 0x7($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X7);
    // 0x8023EC80: sllv        $t4, $t3, $t2
    ctx->r12 = S32(ctx->r11 << (ctx->r10 & 31));
    // 0x8023EC84: or          $t5, $t1, $t4
    ctx->r13 = ctx->r9 | ctx->r12;
    // 0x8023EC88: sb          $t5, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r13;
L_8023EC8C:
    // 0x8023EC8C: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x8023EC90: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x8023EC94: lbu         $t9, 0x5EB1($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X5EB1);
    // 0x8023EC98: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x8023EC9C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8023ECA0: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8023ECA4: addiu       $t8, $t0, 0x8
    ctx->r24 = ADD32(ctx->r8, 0X8);
    // 0x8023ECA8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8023ECAC: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x8023ECB0: bne         $at, $zero, L_8023EC1C
    if (ctx->r1 != 0) {
        // 0x8023ECB4: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_8023EC1C;
    }
    // 0x8023ECB4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_8023ECB8:
    // 0x8023ECB8: lbu         $t3, 0x7($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X7);
    // 0x8023ECBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023ECC0: jr          $ra
    // 0x8023ECC4: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
    return;
    // 0x8023ECC4: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
;}
RECOMP_FUNC void func_80232FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80232FE0: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x80232FE4: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x80232FE8: lhu         $s7, 0xCA($sp)
    ctx->r23 = MEM_HU(ctx->r29, 0XCA);
    // 0x80232FEC: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80232FF0: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80232FF4: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80232FF8: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80232FFC: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x80233000: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80233004: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80233008: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x8023300C: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80233010: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80233014: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80233018: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x8023301C: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x80233020: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x80233024: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x80233028: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x8023302C: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x80233030: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80233034: beq         $s7, $zero, L_8023317C
    if (ctx->r23 == 0) {
        // 0x80233038: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_8023317C;
    }
    // 0x80233038: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8023303C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80233040: lwc1        $f28, 0x5190($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X5190);
    // 0x80233044: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x80233048: or          $s6, $t6, $zero
    ctx->r22 = ctx->r14 | 0;
    // 0x8023304C: lbu         $fp, 0xCF($sp)
    ctx->r30 = MEM_BU(ctx->r29, 0XCF);
L_80233050:
    // 0x80233050: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x80233054: and         $t8, $s6, $t7
    ctx->r24 = ctx->r22 & ctx->r15;
    // 0x80233058: beql        $t8, $zero, L_80233174
    if (ctx->r24 == 0) {
        // 0x8023305C: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_80233174;
    }
    goto skip_0;
    // 0x8023305C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x80233060: lwc1        $f4, 0x108($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X108);
    // 0x80233064: lwc1        $f6, 0x30($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X30);
    // 0x80233068: sll         $a0, $fp, 16
    ctx->r4 = S32(ctx->r30 << 16);
    // 0x8023306C: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80233070: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80233074: negu        $s1, $t9
    ctx->r17 = SUB32(0, ctx->r25);
    // 0x80233078: sll         $t0, $s1, 16
    ctx->r8 = S32(ctx->r17 << 16);
    // 0x8023307C: sra         $s1, $t0, 16
    ctx->r17 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80233080: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    // 0x80233084: lwc1        $f16, 0x34($s5)
    ctx->f16.u32l = MEM_W(ctx->r21, 0X34);
    // 0x80233088: lwc1        $f10, 0x10C($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X10C);
    // 0x8023308C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80233090: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x80233094: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80233098: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    // 0x8023309C: addiu       $s2, $s3, 0x218
    ctx->r18 = ADD32(ctx->r19, 0X218);
    // 0x802330A0: swc1        $f18, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f18.u32l;
    // 0x802330A4: lwc1        $f6, 0x38($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X38);
    // 0x802330A8: lwc1        $f4, 0x110($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X110);
    // 0x802330AC: jal         0x80218C74
    // 0x802330B0: sub.s       $f26, $f4, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = ctx->f4.fl - ctx->f6.fl;
    func_80218C74(rdram, ctx);
        goto after_0;
    // 0x802330B0: sub.s       $f26, $f4, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x802330B4: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x802330B8: lwc1        $f10, 0xA4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x802330BC: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x802330C0: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802330C4: sub.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802330C8: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x802330CC: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x802330D0: sub.s       $f22, $f16, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x802330D4: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x802330D8: swc1        $f20, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f20.u32l;
    // 0x802330DC: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x802330E0: swc1        $f22, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f22.u32l;
    // 0x802330E4: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    // 0x802330E8: addiu       $a2, $sp, 0xA8
    ctx->r6 = ADD32(ctx->r29, 0XA8);
    // 0x802330EC: jal         0x80218C74
    // 0x802330F0: sub.s       $f24, $f4, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f24.fl = ctx->f4.fl - ctx->f26.fl;
    func_80218C74(rdram, ctx);
        goto after_1;
    // 0x802330F0: sub.s       $f24, $f4, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f24.fl = ctx->f4.fl - ctx->f26.fl;
    after_1:
    // 0x802330F4: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x802330F8: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x802330FC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80233100: lw          $a1, 0xAC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XAC);
    // 0x80233104: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x80233108: jal         0x8020802C
    // 0x8023310C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8020802C(rdram, ctx);
        goto after_2;
    // 0x8023310C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80233110: beql        $v0, $zero, L_80233174
    if (ctx->r2 == 0) {
        // 0x80233114: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_80233174;
    }
    goto skip_1;
    // 0x80233114: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_1:
    // 0x80233118: mul.s       $f8, $f20, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8023311C: nop

    // 0x80233120: mul.s       $f10, $f22, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x80233124: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80233128: mul.s       $f18, $f24, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x8023312C: jal         0x8022AA40
    // 0x80233130: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    func_8022AA40(rdram, ctx);
        goto after_3;
    // 0x80233130: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_3:
    // 0x80233134: lwc1        $f2, 0x28($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80233138: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x8023313C: div.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80233140: c.lt.s      $f6, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f6.fl < ctx->f28.fl;
    // 0x80233144: nop

    // 0x80233148: bc1f        L_80233160
    if (!c1cs) {
        // 0x8023314C: nop
    
            goto L_80233160;
    }
    // 0x8023314C: nop

    // 0x80233150: jal         0x8022363C
    // 0x80233154: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8022363C(rdram, ctx);
        goto after_4;
    // 0x80233154: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80233158: b           L_80233168
    // 0x8023315C: nop

        goto L_80233168;
    // 0x8023315C: nop

L_80233160:
    // 0x80233160: jal         0x8022363C
    // 0x80233164: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8022363C(rdram, ctx);
        goto after_5;
    // 0x80233164: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
L_80233168:
    // 0x80233168: jal         0x802331C0
    // 0x8023316C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802331C0(rdram, ctx);
        goto after_6;
    // 0x8023316C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80233170: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80233174:
    // 0x80233174: bne         $s4, $s7, L_80233050
    if (ctx->r20 != ctx->r23) {
        // 0x80233178: addiu       $s0, $s0, 0x2C
        ctx->r16 = ADD32(ctx->r16, 0X2C);
            goto L_80233050;
    }
    // 0x80233178: addiu       $s0, $s0, 0x2C
    ctx->r16 = ADD32(ctx->r16, 0X2C);
L_8023317C:
    // 0x8023317C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x80233180: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80233184: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80233188: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x8023318C: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x80233190: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x80233194: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80233198: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8023319C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x802331A0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x802331A4: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x802331A8: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x802331AC: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x802331B0: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x802331B4: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x802331B8: jr          $ra
    // 0x802331BC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x802331BC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_80201C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80201C00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201C04: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80201C08: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80201C0C: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x80201C10: lbu         $v1, 0x23($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X23);
    // 0x80201C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201C18: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80201C1C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201C20: bne         $at, $zero, L_80201C4C
    if (ctx->r1 != 0) {
        // 0x80201C24: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80201C4C;
    }
    // 0x80201C24: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201C28: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80201C2C: addiu       $a1, $a1, 0x1EE8
    ctx->r5 = ADD32(ctx->r5, 0X1EE8);
    // 0x80201C30: addiu       $a0, $a0, 0x1ED0
    ctx->r4 = ADD32(ctx->r4, 0X1ED0);
    // 0x80201C34: addiu       $a2, $zero, 0x1C0
    ctx->r6 = ADD32(0, 0X1C0);
    // 0x80201C38: jal         0x80231C9C
    // 0x80201C3C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80201C3C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80201C40: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80201C44: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x80201C48: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_80201C4C:
    // 0x80201C4C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201C50: beq         $at, $zero, L_80201CD0
    if (ctx->r1 == 0) {
        // 0x80201C54: lw          $t6, 0x24($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X24);
            goto L_80201CD0;
    }
    // 0x80201C54: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80201C58: bgez        $t6, L_80201C74
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80201C5C: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80201C74;
    }
    // 0x80201C5C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201C60: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80201C64: addiu       $a1, $a1, 0x1F00
    ctx->r5 = ADD32(ctx->r5, 0X1F00);
    // 0x80201C68: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x80201C6C: jal         0x80231C9C
    // 0x80201C70: addiu       $a2, $zero, 0x1C2
    ctx->r6 = ADD32(0, 0X1C2);
    func_80231C9C(rdram, ctx);
        goto after_1;
    // 0x80201C70: addiu       $a2, $zero, 0x1C2
    ctx->r6 = ADD32(0, 0X1C2);
    after_1:
L_80201C74:
    // 0x80201C74: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80201C78: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80201C7C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201C80: slt         $at, $t7, $at
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80201C84: bne         $at, $zero, L_80201C9C
    if (ctx->r1 != 0) {
        // 0x80201C88: addiu       $a0, $a0, 0x1F08
        ctx->r4 = ADD32(ctx->r4, 0X1F08);
            goto L_80201C9C;
    }
    // 0x80201C88: addiu       $a0, $a0, 0x1F08
    ctx->r4 = ADD32(ctx->r4, 0X1F08);
    // 0x80201C8C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80201C90: addiu       $a1, $a1, 0x1F1C
    ctx->r5 = ADD32(ctx->r5, 0X1F1C);
    // 0x80201C94: jal         0x80231C9C
    // 0x80201C98: addiu       $a2, $zero, 0x1C3
    ctx->r6 = ADD32(0, 0X1C3);
    func_80231C9C(rdram, ctx);
        goto after_2;
    // 0x80201C98: addiu       $a2, $zero, 0x1C3
    ctx->r6 = ADD32(0, 0X1C3);
    after_2:
L_80201C9C:
    // 0x80201C9C: lbu         $t0, 0x23($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X23);
    // 0x80201CA0: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x80201CA4: lw          $t9, 0x6DE4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6DE4);
    // 0x80201CA8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80201CAC: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80201CB0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80201CB4: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80201CB8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80201CBC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80201CC0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80201CC4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80201CC8: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80201CCC: sw          $t8, 0x88($t2)
    MEM_W(0X88, ctx->r10) = ctx->r24;
L_80201CD0:
    // 0x80201CD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201CD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80201CD8: jr          $ra
    // 0x80201CDC: nop

    return;
    // 0x80201CDC: nop

;}
RECOMP_FUNC void func_80237150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237150: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80237154: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x80237158: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8023715C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80237160: beq         $v0, $zero, L_8023716C
    if (ctx->r2 == 0) {
        // 0x80237164: nop
    
            goto L_8023716C;
    }
    // 0x80237164: nop

    // 0x80237168: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
L_8023716C:
    // 0x8023716C: jr          $ra
    // 0x80237170: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    return;
    // 0x80237170: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
;}
RECOMP_FUNC void func_8022E044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022E044: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x8022E048: lw          $t6, -0x4160($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4160);
    // 0x8022E04C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8022E050: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x8022E054: addiu       $at, $zero, 0x2D8
    ctx->r1 = ADD32(0, 0X2D8);
    // 0x8022E058: subu        $s6, $a0, $t6
    ctx->r22 = SUB32(ctx->r4, ctx->r14);
    // 0x8022E05C: div         $zero, $s6, $at
    lo = S32(S64(S32(ctx->r22)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r22)) % S64(S32(ctx->r1)));
    // 0x8022E060: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8022E064: lhu         $v1, 0xC06($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XC06);
    // 0x8022E068: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8022E06C: mflo        $s6
    ctx->r22 = lo;
    // 0x8022E070: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8022E074: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x8022E078: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x8022E07C: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x8022E080: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x8022E084: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x8022E088: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8022E08C: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x8022E090: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x8022E094: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x8022E098: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x8022E09C: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x8022E0A0: blez        $v1, L_8022E25C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8022E0A4: sdc1        $f20, 0x20($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
            goto L_8022E25C;
    }
    // 0x8022E0A4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x8022E0A8: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x8022E0AC: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x8022E0B0: addiu       $s3, $s3, 0x8D0
    ctx->r19 = ADD32(ctx->r19, 0X8D0);
    // 0x8022E0B4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8022E0B8: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x8022E0BC: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x8022E0C0: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
L_8022E0C4:
    // 0x8022E0C4: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022E0C8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E0CC: addu        $s0, $s2, $t8
    ctx->r16 = ADD32(ctx->r18, ctx->r24);
    // 0x8022E0D0: lbu         $t9, 0x3($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3);
    // 0x8022E0D4: bnel        $t9, $zero, L_8022E0E8
    if (ctx->r25 != 0) {
        // 0x8022E0D8: lwc1        $f4, 0x60($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X60);
            goto L_8022E0E8;
    }
    goto skip_0;
    // 0x8022E0D8: lwc1        $f4, 0x60($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X60);
    skip_0:
    // 0x8022E0DC: b           L_8022E24C
    // 0x8022E0E0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
        goto L_8022E24C;
    // 0x8022E0E0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E0E4: lwc1        $f4, 0x60($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X60);
L_8022E0E8:
    // 0x8022E0E8: lwc1        $f6, 0x108($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X108);
    // 0x8022E0EC: lwc1        $f8, 0x64($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X64);
    // 0x8022E0F0: lwc1        $f10, 0x10C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10C);
    // 0x8022E0F4: sub.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8022E0F8: lwc1        $f16, 0x68($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X68);
    // 0x8022E0FC: lwc1        $f18, 0x110($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X110);
    // 0x8022E100: sub.s       $f24, $f8, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8022E104: mul.s       $f4, $f22, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x8022E108: sub.s       $f20, $f16, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8022E10C: mul.s       $f6, $f24, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x8022E110: add.s       $f26, $f4, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022E114: mul.s       $f8, $f20, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8022E118: jal         0x8022AA40
    // 0x8022E11C: add.s       $f12, $f26, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f26.fl + ctx->f8.fl;
    func_8022AA40(rdram, ctx);
        goto after_0;
    // 0x8022E11C: add.s       $f12, $f26, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f26.fl + ctx->f8.fl;
    after_0:
    // 0x8022E120: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8022E124: mov.s       $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    ctx->f30.fl = ctx->f0.fl;
    // 0x8022E128: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8022E12C: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8022E130: addiu       $a0, $s1, 0x218
    ctx->r4 = ADD32(ctx->r17, 0X218);
    // 0x8022E134: bc1fl       L_8022E154
    if (!c1cs) {
        // 0x8022E138: lwc1        $f16, 0xC($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
            goto L_8022E154;
    }
    goto skip_1;
    // 0x8022E138: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    skip_1:
    // 0x8022E13C: lhu         $v1, 0xC06($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XC06);
    // 0x8022E140: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022E144: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E148: b           L_8022E24C
    // 0x8022E14C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
        goto L_8022E24C;
    // 0x8022E14C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E150: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
L_8022E154:
    // 0x8022E154: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x8022E158: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x8022E15C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8022E160: jal         0x8020802C
    // 0x8022E164: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_8020802C(rdram, ctx);
        goto after_1;
    // 0x8022E164: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x8022E168: bne         $v0, $zero, L_8022E184
    if (ctx->r2 != 0) {
        // 0x8022E16C: lui         $v1, 0x8028
        ctx->r3 = S32(0X8028 << 16);
            goto L_8022E184;
    }
    // 0x8022E16C: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8022E170: lhu         $v1, 0xC06($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XC06);
    // 0x8022E174: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022E178: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E17C: b           L_8022E24C
    // 0x8022E180: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
        goto L_8022E24C;
    // 0x8022E180: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
L_8022E184:
    // 0x8022E184: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022E188: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x8022E18C: bne         $s4, $v0, L_8022E1A4
    if (ctx->r20 != ctx->r2) {
        // 0x8022E190: nop
    
            goto L_8022E1A4;
    }
    // 0x8022E190: nop

    // 0x8022E194: jal         0x80228E64
    // 0x8022E198: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    func_80228E64(rdram, ctx);
        goto after_2;
    // 0x8022E198: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    after_2:
    // 0x8022E19C: b           L_8022E218
    // 0x8022E1A0: lwc1        $f8, 0x60($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X60);
        goto L_8022E218;
    // 0x8022E1A0: lwc1        $f8, 0x60($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X60);
L_8022E1A4:
    // 0x8022E1A4: bnel        $s5, $v0, L_8022E218
    if (ctx->r21 != ctx->r2) {
        // 0x8022E1A8: lwc1        $f8, 0x60($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X60);
            goto L_8022E218;
    }
    goto skip_2;
    // 0x8022E1A8: lwc1        $f8, 0x60($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X60);
    skip_2:
    // 0x8022E1AC: jal         0x8022AA40
    // 0x8022E1B0: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    func_8022AA40(rdram, ctx);
        goto after_3;
    // 0x8022E1B0: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    after_3:
    // 0x8022E1B4: c.eq.s      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f0.fl == ctx->f28.fl;
    // 0x8022E1B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022E1BC: bc1tl       L_8022E1D8
    if (c1cs) {
        // 0x8022E1C0: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_8022E1D8;
    }
    goto skip_3;
    // 0x8022E1C0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_3:
    // 0x8022E1C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022E1C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8022E1CC: b           L_8022E1DC
    // 0x8022E1D0: div.s       $f12, $f18, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
        goto L_8022E1DC;
    // 0x8022E1D0: div.s       $f12, $f18, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8022E1D4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_8022E1D8:
    // 0x8022E1D8: nop

L_8022E1DC:
    // 0x8022E1DC: mul.s       $f2, $f24, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f24.fl, ctx->f12.fl);
    // 0x8022E1E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022E1E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022E1E8: mul.s       $f0, $f22, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f12.fl);
    // 0x8022E1EC: swc1        $f28, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f28.u32l;
    // 0x8022E1F0: swc1        $f28, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f28.u32l;
    // 0x8022E1F4: swc1        $f28, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f28.u32l;
    // 0x8022E1F8: neg.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = -ctx->f2.fl;
    // 0x8022E1FC: swc1        $f2, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f2.u32l;
    // 0x8022E200: swc1        $f4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f4.u32l;
    // 0x8022E204: swc1        $f0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f0.u32l;
    // 0x8022E208: swc1        $f0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f0.u32l;
    // 0x8022E20C: swc1        $f28, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f28.u32l;
    // 0x8022E210: swc1        $f6, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f6.u32l;
    // 0x8022E214: lwc1        $f8, 0x60($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X60);
L_8022E218:
    // 0x8022E218: mfc1        $a1, $f30
    ctx->r5 = (int32_t)ctx->f30.u32l;
    // 0x8022E21C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x8022E220: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8022E224: lwc1        $f10, 0x64($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X64);
    // 0x8022E228: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8022E22C: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8022E230: jal         0x8020672C
    // 0x8022E234: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_8020672C(rdram, ctx);
        goto after_4;
    // 0x8022E234: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x8022E238: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8022E23C: lhu         $v1, 0xC06($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XC06);
    // 0x8022E240: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022E244: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E248: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
L_8022E24C:
    // 0x8022E24C: addiu       $s2, $s2, 0x78
    ctx->r18 = ADD32(ctx->r18, 0X78);
    // 0x8022E250: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022E254: bnel        $at, $zero, L_8022E0C4
    if (ctx->r1 != 0) {
        // 0x8022E258: lw          $t8, 0x0($s3)
        ctx->r24 = MEM_W(ctx->r19, 0X0);
            goto L_8022E0C4;
    }
    goto skip_4;
    // 0x8022E258: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    skip_4:
L_8022E25C:
    // 0x8022E25C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x8022E260: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x8022E264: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x8022E268: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x8022E26C: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x8022E270: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x8022E274: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x8022E278: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8022E27C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8022E280: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x8022E284: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x8022E288: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x8022E28C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x8022E290: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x8022E294: jr          $ra
    // 0x8022E298: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8022E298: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8023F940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F940: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023F944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023F948: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8023F94C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8023F950: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8023F954: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x8023F958: beql        $t7, $zero, L_8023F9D0
    if (ctx->r15 == 0) {
        // 0x8023F95C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8023F9D0;
    }
    goto skip_0;
    // 0x8023F95C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023F960: jal         0x80237840
    // 0x8023F964: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80237840(rdram, ctx);
        goto after_0;
    // 0x8023F964: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8023F968: beq         $v0, $zero, L_8023F9CC
    if (ctx->r2 == 0) {
        // 0x8023F96C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8023F9CC;
    }
    // 0x8023F96C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8023F970: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8023F974: lw          $t8, 0x1C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1C);
    // 0x8023F978: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x8023F97C: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x8023F980: lw          $t1, 0xD8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XD8);
    // 0x8023F984: sh          $t3, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r11;
    // 0x8023F988: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x8023F98C: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x8023F990: lh          $t4, 0x2A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2A);
    // 0x8023F994: sw          $t4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r12;
    // 0x8023F998: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023F99C: jal         0x80237738
    // 0x8023F9A0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_80237738(rdram, ctx);
        goto after_1;
    // 0x8023F9A0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x8023F9A4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F9A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023F9AC: sw          $v0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r2;
    // 0x8023F9B0: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x8023F9B4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8023F9B8: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x8023F9BC: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    // 0x8023F9C0: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8023F9C4: jalr        $t9
    // 0x8023F9C8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8023F9C8: nop

    after_2:
L_8023F9CC:
    // 0x8023F9CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023F9D0:
    // 0x8023F9D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023F9D4: jr          $ra
    // 0x8023F9D8: nop

    return;
    // 0x8023F9D8: nop

;}
RECOMP_FUNC void func_8024A24C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A24C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x8024A250: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8024A254: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8024A258: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8024A25C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8024A260: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8024A264: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8024A268: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8024A26C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8024A270: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8024A274: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8024A278: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8024A27C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8024A280: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x8024A284: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x8024A288: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x8024A28C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8024A290: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x8024A294: jalr        $t9
    // 0x8024A298: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8024A298: nop

    after_0:
    // 0x8024A29C: sll         $s1, $s6, 1
    ctx->r17 = S32(ctx->r22 << 1);
    // 0x8024A2A0: lui         $t8, 0xC00
    ctx->r24 = S32(0XC00 << 16);
    // 0x8024A2A4: lui         $t2, 0x6C0
    ctx->r10 = S32(0X6C0 << 16);
    // 0x8024A2A8: lui         $t3, 0xC00
    ctx->r11 = S32(0XC00 << 16);
    // 0x8024A2AC: lui         $t4, 0x800
    ctx->r12 = S32(0X800 << 16);
    // 0x8024A2B0: andi        $t1, $s1, 0xFFFF
    ctx->r9 = ctx->r17 & 0XFFFF;
    // 0x8024A2B4: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x8024A2B8: ori         $t2, $t2, 0x6C0
    ctx->r10 = ctx->r10 | 0X6C0;
    // 0x8024A2BC: ori         $t8, $t8, 0xDA83
    ctx->r24 = ctx->r24 | 0XDA83;
    // 0x8024A2C0: ori         $t4, $t4, 0x6C0
    ctx->r12 = ctx->r12 | 0X6C0;
    // 0x8024A2C4: ori         $t3, $t3, 0x5A82
    ctx->r11 = ctx->r11 | 0X5A82;
    // 0x8024A2C8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8024A2CC: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8024A2D0: sw          $t8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r24;
    // 0x8024A2D4: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x8024A2D8: sw          $t3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r11;
    // 0x8024A2DC: sw          $t4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r12;
    // 0x8024A2E0: lw          $a1, 0x18($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X18);
    // 0x8024A2E4: addiu       $t5, $v0, 0x18
    ctx->r13 = ADD32(ctx->r2, 0X18);
    // 0x8024A2E8: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8024A2EC: addiu       $s2, $zero, 0x140
    ctx->r18 = ADD32(0, 0X140);
    // 0x8024A2F0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8024A2F4: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x8024A2F8: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x8024A2FC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8024A300: addiu       $a2, $zero, 0x6C0
    ctx->r6 = ADD32(0, 0X6C0);
    // 0x8024A304: jal         0x80249AA0
    // 0x8024A308: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    func_80249AA0(rdram, ctx);
        goto after_1;
    // 0x8024A308: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    after_1:
    // 0x8024A30C: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x8024A310: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x8024A314: ori         $t6, $t6, 0x800
    ctx->r14 = ctx->r14 | 0X800;
    // 0x8024A318: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8024A31C: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x8024A320: lbu         $t9, 0x24($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X24);
    // 0x8024A324: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x8024A328: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x8024A32C: blezl       $t9, L_8024A50C
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8024A330: lw          $v1, 0x1C($s3)
        ctx->r3 = MEM_W(ctx->r19, 0X1C);
            goto L_8024A50C;
    }
    goto skip_0;
    // 0x8024A330: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    skip_0:
    // 0x8024A334: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
L_8024A338:
    // 0x8024A338: lw          $t7, 0x20($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X20);
    // 0x8024A33C: sll         $t8, $s7, 2
    ctx->r24 = S32(ctx->r23 << 2);
    // 0x8024A340: addu        $t8, $t8, $s7
    ctx->r24 = ADD32(ctx->r24, ctx->r23);
    // 0x8024A344: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8024A348: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    // 0x8024A34C: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x8024A350: lw          $t5, 0x4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X4);
    // 0x8024A354: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8024A358: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x8024A35C: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8024A360: negu        $t6, $t5
    ctx->r14 = SUB32(0, ctx->r13);
    // 0x8024A364: addu        $s4, $v0, $t4
    ctx->r20 = ADD32(ctx->r2, ctx->r12);
    // 0x8024A368: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x8024A36C: bne         $s4, $v1, L_8024A394
    if (ctx->r20 != ctx->r3) {
        // 0x8024A370: addu        $fp, $v0, $t9
        ctx->r30 = ADD32(ctx->r2, ctx->r25);
            goto L_8024A394;
    }
    // 0x8024A370: addu        $fp, $v0, $t9
    ctx->r30 = ADD32(ctx->r2, ctx->r25);
    // 0x8024A374: or          $t7, $s2, $zero
    ctx->r15 = ctx->r18 | 0;
    // 0x8024A378: sll         $s2, $s5, 16
    ctx->r18 = S32(ctx->r21 << 16);
    // 0x8024A37C: sll         $s5, $t7, 16
    ctx->r21 = S32(ctx->r15 << 16);
    // 0x8024A380: sra         $t2, $s5, 16
    ctx->r10 = S32(SIGNED(ctx->r21) >> 16);
    // 0x8024A384: sra         $t8, $s2, 16
    ctx->r24 = S32(SIGNED(ctx->r18) >> 16);
    // 0x8024A388: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    // 0x8024A38C: b           L_8024A3AC
    // 0x8024A390: or          $s5, $t2, $zero
    ctx->r21 = ctx->r10 | 0;
        goto L_8024A3AC;
    // 0x8024A390: or          $s5, $t2, $zero
    ctx->r21 = ctx->r10 | 0;
L_8024A394:
    // 0x8024A394: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8024A398: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8024A39C: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8024A3A0: jal         0x80249C28
    // 0x8024A3A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80249C28(rdram, ctx);
        goto after_2;
    // 0x8024A3A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_2:
    // 0x8024A3A8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8024A3AC:
    // 0x8024A3AC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8024A3B0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8024A3B4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8024A3B8: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8024A3BC: jal         0x80249DB4
    // 0x8024A3C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80249DB4(rdram, ctx);
        goto after_3;
    // 0x8024A3C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
    // 0x8024A3C4: lh          $a0, 0x8($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X8);
    // 0x8024A3C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8024A3CC: lui         $at, 0xC00
    ctx->r1 = S32(0XC00 << 16);
    // 0x8024A3D0: beq         $a0, $zero, L_8024A424
    if (ctx->r4 == 0) {
        // 0x8024A3D4: andi        $t4, $a0, 0xFFFF
        ctx->r12 = ctx->r4 & 0XFFFF;
            goto L_8024A424;
    }
    // 0x8024A3D4: andi        $t4, $a0, 0xFFFF
    ctx->r12 = ctx->r4 & 0XFFFF;
    // 0x8024A3D8: sll         $t9, $s5, 16
    ctx->r25 = S32(ctx->r21 << 16);
    // 0x8024A3DC: andi        $t7, $s2, 0xFFFF
    ctx->r15 = ctx->r18 & 0XFFFF;
    // 0x8024A3E0: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x8024A3E4: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x8024A3E8: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8024A3EC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8024A3F0: lw          $t2, 0x24($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X24);
    // 0x8024A3F4: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x8024A3F8: bnel        $t2, $zero, L_8024A428
    if (ctx->r10 != 0) {
        // 0x8024A3FC: lh          $v1, 0xA($s1)
        ctx->r3 = MEM_H(ctx->r17, 0XA);
            goto L_8024A428;
    }
    goto skip_1;
    // 0x8024A3FC: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    skip_1:
    // 0x8024A400: lw          $t3, 0x20($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X20);
    // 0x8024A404: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8024A408: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x8024A40C: bne         $t3, $zero, L_8024A424
    if (ctx->r11 != 0) {
        // 0x8024A410: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_8024A424;
    }
    // 0x8024A410: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8024A414: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8024A418: jal         0x80249AA0
    // 0x8024A41C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80249AA0(rdram, ctx);
        goto after_4;
    // 0x8024A41C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_4:
    // 0x8024A420: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8024A424:
    // 0x8024A424: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
L_8024A428:
    // 0x8024A428: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8024A42C: lui         $at, 0xC00
    ctx->r1 = S32(0XC00 << 16);
    // 0x8024A430: beq         $v1, $zero, L_8024A470
    if (ctx->r3 == 0) {
        // 0x8024A434: andi        $t5, $v1, 0xFFFF
        ctx->r13 = ctx->r3 & 0XFFFF;
            goto L_8024A470;
    }
    // 0x8024A434: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x8024A438: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x8024A43C: andi        $t8, $s5, 0xFFFF
    ctx->r24 = ctx->r21 & 0XFFFF;
    // 0x8024A440: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x8024A444: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x8024A448: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8024A44C: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x8024A450: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8024A454: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024A458: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8024A45C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8024A460: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8024A464: jal         0x80249AA0
    // 0x8024A468: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    func_80249AA0(rdram, ctx);
        goto after_5;
    // 0x8024A468: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    after_5:
    // 0x8024A46C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8024A470:
    // 0x8024A470: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x8024A474: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8024A478: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x8024A47C: beql        $a0, $zero, L_8024A494
    if (ctx->r4 == 0) {
        // 0x8024A480: lw          $t3, 0x24($s1)
        ctx->r11 = MEM_W(ctx->r17, 0X24);
            goto L_8024A494;
    }
    goto skip_2;
    // 0x8024A480: lw          $t3, 0x24($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X24);
    skip_2:
    // 0x8024A484: jal         0x802499E8
    // 0x8024A488: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_802499E8(rdram, ctx);
        goto after_6;
    // 0x8024A488: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_6:
    // 0x8024A48C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8024A490: lw          $t3, 0x24($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X24);
L_8024A494:
    // 0x8024A494: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8024A498: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x8024A49C: bne         $t3, $zero, L_8024A4B4
    if (ctx->r11 != 0) {
        // 0x8024A4A0: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_8024A4B4;
    }
    // 0x8024A4A0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8024A4A4: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8024A4A8: jal         0x80249AA0
    // 0x8024A4AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80249AA0(rdram, ctx);
        goto after_7;
    // 0x8024A4AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_7:
    // 0x8024A4B0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8024A4B4:
    // 0x8024A4B4: lh          $v1, 0xC($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC);
    // 0x8024A4B8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8024A4BC: sll         $t4, $s7, 16
    ctx->r12 = S32(ctx->r23 << 16);
    // 0x8024A4C0: beq         $v1, $zero, L_8024A4EC
    if (ctx->r3 == 0) {
        // 0x8024A4C4: sra         $s7, $t4, 16
        ctx->r23 = S32(SIGNED(ctx->r12) >> 16);
            goto L_8024A4EC;
    }
    // 0x8024A4C4: sra         $s7, $t4, 16
    ctx->r23 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8024A4C8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8024A4CC: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x8024A4D0: lui         $at, 0xC00
    ctx->r1 = S32(0XC00 << 16);
    // 0x8024A4D4: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x8024A4D8: ori         $t8, $t7, 0x800
    ctx->r24 = ctx->r15 | 0X800;
    // 0x8024A4DC: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x8024A4E0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8024A4E4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8024A4E8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8024A4EC:
    // 0x8024A4EC: lbu         $t6, 0x24($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X24);
    // 0x8024A4F0: lw          $t2, 0x4($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X4);
    // 0x8024A4F4: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
    // 0x8024A4F8: slt         $at, $s7, $t6
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8024A4FC: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8024A500: bne         $at, $zero, L_8024A338
    if (ctx->r1 != 0) {
        // 0x8024A504: addu        $v1, $v0, $t3
        ctx->r3 = ADD32(ctx->r2, ctx->r11);
            goto L_8024A338;
    }
    // 0x8024A504: addu        $v1, $v0, $t3
    ctx->r3 = ADD32(ctx->r2, ctx->r11);
    // 0x8024A508: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
L_8024A50C:
    // 0x8024A50C: lw          $t9, 0x18($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X18);
    // 0x8024A510: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x8024A514: lw          $t3, 0x14($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X14);
    // 0x8024A518: sll         $t2, $v1, 1
    ctx->r10 = S32(ctx->r3 << 1);
    // 0x8024A51C: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x8024A520: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x8024A524: sltu        $at, $t4, $t8
    ctx->r1 = ctx->r12 < ctx->r24 ? 1 : 0;
    // 0x8024A528: beq         $at, $zero, L_8024A538
    if (ctx->r1 == 0) {
        // 0x8024A52C: sw          $t8, 0x18($s3)
        MEM_W(0X18, ctx->r19) = ctx->r24;
            goto L_8024A538;
    }
    // 0x8024A52C: sw          $t8, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r24;
    // 0x8024A530: subu        $t5, $t8, $t2
    ctx->r13 = SUB32(ctx->r24, ctx->r10);
    // 0x8024A534: sw          $t5, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r13;
L_8024A538:
    // 0x8024A538: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x8024A53C: ori         $t6, $t6, 0x800
    ctx->r14 = ctx->r14 | 0X800;
    // 0x8024A540: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x8024A544: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8024A548: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8024A54C: lui         $at, 0x6C0
    ctx->r1 = S32(0X6C0 << 16);
    // 0x8024A550: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x8024A554: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x8024A558: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8024A55C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8024A560: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8024A564: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8024A568: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8024A56C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8024A570: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8024A574: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8024A578: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8024A57C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8024A580: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8024A584: jr          $ra
    // 0x8024A588: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x8024A588: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_80236F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80236F80: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80236F84: lw          $t6, 0x1778($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1778);
    // 0x80236F88: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x80236F8C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80236F90: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80236F94: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80236F98: bgez        $a0, L_80236FB0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80236F9C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80236FB0;
    }
    // 0x80236F9C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80236FA0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80236FA4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80236FA8: nop

    // 0x80236FAC: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_80236FB0:
    // 0x80236FB0: div.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80236FB4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80236FB8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80236FBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80236FC0: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80236FC4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80236FC8: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x80236FCC: nop

    // 0x80236FD0: cvt.w.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    ctx->f8.u32l = CVT_W_S(ctx->f12.fl);
    // 0x80236FD4: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x80236FD8: nop

    // 0x80236FDC: andi        $at, $a1, 0x4
    ctx->r1 = ctx->r5 & 0X4;
    // 0x80236FE0: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x80236FE4: beq         $a1, $zero, L_80237034
    if (ctx->r5 == 0) {
        // 0x80236FE8: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_80237034;
    }
    // 0x80236FE8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80236FEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80236FF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80236FF4: sub.s       $f8, $f12, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x80236FF8: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x80236FFC: nop

    // 0x80237000: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80237004: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x80237008: nop

    // 0x8023700C: andi        $at, $a1, 0x4
    ctx->r1 = ctx->r5 & 0X4;
    // 0x80237010: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x80237014: bne         $a1, $zero, L_8023702C
    if (ctx->r5 != 0) {
        // 0x80237018: nop
    
            goto L_8023702C;
    }
    // 0x80237018: nop

    // 0x8023701C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80237020: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80237024: b           L_80237044
    // 0x80237028: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_80237044;
    // 0x80237028: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_8023702C:
    // 0x8023702C: b           L_80237044
    // 0x80237030: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_80237044;
    // 0x80237030: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_80237034:
    // 0x80237034: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80237038: nop

    // 0x8023703C: bltz        $a1, L_8023702C
    if (SIGNED(ctx->r5) < 0) {
        // 0x80237040: nop
    
            goto L_8023702C;
    }
    // 0x80237040: nop

L_80237044:
    // 0x80237044: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80237048: sltiu       $at, $a1, 0x84
    ctx->r1 = ctx->r5 < 0X84 ? 1 : 0;
    // 0x8023704C: beq         $at, $zero, L_8023705C
    if (ctx->r1 == 0) {
        // 0x80237050: nop
    
            goto L_8023705C;
    }
    // 0x80237050: nop

    // 0x80237054: b           L_802370D8
    // 0x80237058: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_802370D8;
    // 0x80237058: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8023705C:
    // 0x8023705C: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x80237060: divu        $zero, $a1, $at
    lo = S32(U32(ctx->r5) / U32(ctx->r1)); hi = S32(U32(ctx->r5) % U32(ctx->r1));
    // 0x80237064: mflo        $a2
    ctx->r6 = lo;
    // 0x80237068: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x8023706C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80237070: slti        $at, $a2, 0x11
    ctx->r1 = SIGNED(ctx->r6) < 0X11 ? 1 : 0;
    // 0x80237074: bne         $at, $zero, L_80237080
    if (ctx->r1 != 0) {
        // 0x80237078: nop
    
            goto L_80237080;
    }
    // 0x80237078: nop

    // 0x8023707C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
L_80237080:
    // 0x80237080: addiu       $t9, $a1, -0x1
    ctx->r25 = ADD32(ctx->r5, -0X1);
    // 0x80237084: lui         $t0, 0xA450
    ctx->r8 = S32(0XA450 << 16);
    // 0x80237088: sw          $t9, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r25;
    // 0x8023708C: addiu       $t1, $a2, -0x1
    ctx->r9 = ADD32(ctx->r6, -0X1);
    // 0x80237090: lui         $t2, 0xA450
    ctx->r10 = S32(0XA450 << 16);
    // 0x80237094: sw          $t1, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r9;
    // 0x80237098: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8023709C: lui         $t4, 0xA450
    ctx->r12 = S32(0XA450 << 16);
    // 0x802370A0: sw          $t3, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r11;
    // 0x802370A4: lui         $t5, 0x8025
    ctx->r13 = S32(0X8025 << 16);
    // 0x802370A8: lw          $t5, 0x1778($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1778);
    // 0x802370AC: div         $zero, $t5, $a1
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r5)));
    // 0x802370B0: mflo        $v0
    ctx->r2 = lo;
    // 0x802370B4: bne         $a1, $zero, L_802370C0
    if (ctx->r5 != 0) {
        // 0x802370B8: nop
    
            goto L_802370C0;
    }
    // 0x802370B8: nop

    // 0x802370BC: break       7
    do_break(2149806268);
L_802370C0:
    // 0x802370C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802370C4: bne         $a1, $at, L_802370D8
    if (ctx->r5 != ctx->r1) {
        // 0x802370C8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802370D8;
    }
    // 0x802370C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802370CC: bne         $t5, $at, L_802370D8
    if (ctx->r13 != ctx->r1) {
        // 0x802370D0: nop
    
            goto L_802370D8;
    }
    // 0x802370D0: nop

    // 0x802370D4: break       6
    do_break(2149806292);
L_802370D8:
    // 0x802370D8: jr          $ra
    // 0x802370DC: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x802370DC: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_802281A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802281A4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802281A8: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x802281AC: lhu         $v0, 0xBFE($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFE);
    // 0x802281B0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x802281B4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802281B8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802281BC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802281C0: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x802281C4: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x802281C8: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x802281CC: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x802281D0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802281D4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802281D8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802281DC: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802281E0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802281E4: blez        $v0, L_802284C8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802281E8: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_802284C8;
    }
    // 0x802281E8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802281EC: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x802281F0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802281F4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802281F8: lui         $fp, 0x8025
    ctx->r30 = S32(0X8025 << 16);
    // 0x802281FC: lui         $s7, 0x8025
    ctx->r23 = S32(0X8025 << 16);
    // 0x80228200: lui         $s6, 0x8027
    ctx->r22 = S32(0X8027 << 16);
    // 0x80228204: lui         $s5, 0x8027
    ctx->r21 = S32(0X8027 << 16);
    // 0x80228208: lui         $s2, 0x8027
    ctx->r18 = S32(0X8027 << 16);
    // 0x8022820C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80228210: addiu       $s2, $s2, 0x5A58
    ctx->r18 = ADD32(ctx->r18, 0X5A58);
    // 0x80228214: addiu       $s5, $s5, 0x5A44
    ctx->r21 = ADD32(ctx->r21, 0X5A44);
    // 0x80228218: addiu       $s6, $s6, 0x5A48
    ctx->r22 = ADD32(ctx->r22, 0X5A48);
    // 0x8022821C: addiu       $s7, $s7, -0x178C
    ctx->r23 = ADD32(ctx->r23, -0X178C);
    // 0x80228220: addiu       $fp, $fp, 0x3D40
    ctx->r30 = ADD32(ctx->r30, 0X3D40);
    // 0x80228224: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
L_80228228:
    // 0x80228228: sll         $t6, $s3, 5
    ctx->r14 = S32(ctx->r19 << 5);
    // 0x8022822C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x80228230: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x80228234: lbu         $t8, 0x0($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X0);
    // 0x80228238: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8022823C: beql        $t8, $zero, L_802284BC
    if (ctx->r24 == 0) {
        // 0x80228240: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_802284BC;
    }
    goto skip_0;
    // 0x80228240: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x80228244: lhu         $t9, 0x0($s7)
    ctx->r25 = MEM_HU(ctx->r23, 0X0);
    // 0x80228248: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8022824C: addiu       $a2, $a2, 0xC02
    ctx->r6 = ADD32(ctx->r6, 0XC02);
    // 0x80228250: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80228254: addu        $t1, $s6, $t0
    ctx->r9 = ADD32(ctx->r22, ctx->r8);
    // 0x80228258: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8022825C: sll         $t3, $v0, 4
    ctx->r11 = S32(ctx->r2 << 4);
    // 0x80228260: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x80228264: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    // 0x80228268: jal         0x80231C58
    // 0x8022826C: addu        $s0, $t2, $t3
    ctx->r16 = ADD32(ctx->r10, ctx->r11);
    func_80231C58(rdram, ctx);
        goto after_0;
    // 0x8022826C: addu        $s0, $t2, $t3
    ctx->r16 = ADD32(ctx->r10, ctx->r11);
    after_0:
    // 0x80228270: beq         $v0, $zero, L_80228284
    if (ctx->r2 == 0) {
        // 0x80228274: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_80228284;
    }
    // 0x80228274: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80228278: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x8022827C: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80228280: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
L_80228284:
    // 0x80228284: sw          $s0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r16;
    // 0x80228288: lwc1        $f4, 0xC($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0XC);
    // 0x8022828C: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80228290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228294: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80228298: nop

    // 0x8022829C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802282A0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802282A4: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x802282A8: nop

    // 0x802282AC: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802282B0: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x802282B4: nop

    // 0x802282B8: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x802282BC: beq         $v0, $zero, L_80228308
    if (ctx->r2 == 0) {
        // 0x802282C0: nop
    
            goto L_80228308;
    }
    // 0x802282C0: nop

    // 0x802282C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802282C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802282CC: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x802282D0: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x802282D4: nop

    // 0x802282D8: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x802282DC: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x802282E0: nop

    // 0x802282E4: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x802282E8: bne         $v0, $zero, L_80228300
    if (ctx->r2 != 0) {
        // 0x802282EC: nop
    
            goto L_80228300;
    }
    // 0x802282EC: nop

    // 0x802282F0: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x802282F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802282F8: b           L_80228318
    // 0x802282FC: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_80228318;
    // 0x802282FC: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_80228300:
    // 0x80228300: b           L_80228318
    // 0x80228304: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80228318;
    // 0x80228304: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80228308:
    // 0x80228308: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x8022830C: nop

    // 0x80228310: bltz        $v0, L_80228300
    if (SIGNED(ctx->r2) < 0) {
        // 0x80228314: nop
    
            goto L_80228300;
    }
    // 0x80228314: nop

L_80228318:
    // 0x80228318: or          $t8, $v0, $zero
    ctx->r24 = ctx->r2 | 0;
    // 0x8022831C: sb          $t8, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r24;
    // 0x80228320: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
    // 0x80228324: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80228328: lwc1        $f18, 0x10($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0X10);
    // 0x8022832C: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80228330: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228334: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x80228338: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022833C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80228340: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80228344: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80228348: nop

    // 0x8022834C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80228350: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80228354: nop

    // 0x80228358: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8022835C: beql        $v0, $zero, L_802283AC
    if (ctx->r2 == 0) {
        // 0x80228360: mfc1        $v0, $f10
        ctx->r2 = (int32_t)ctx->f10.u32l;
            goto L_802283AC;
    }
    goto skip_1;
    // 0x80228360: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x80228364: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80228368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022836C: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80228370: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80228374: nop

    // 0x80228378: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8022837C: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80228380: nop

    // 0x80228384: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80228388: bne         $v0, $zero, L_802283A0
    if (ctx->r2 != 0) {
        // 0x8022838C: nop
    
            goto L_802283A0;
    }
    // 0x8022838C: nop

    // 0x80228390: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x80228394: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80228398: b           L_802283B8
    // 0x8022839C: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_802283B8;
    // 0x8022839C: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_802283A0:
    // 0x802283A0: b           L_802283B8
    // 0x802283A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_802283B8;
    // 0x802283A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802283A8: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
L_802283AC:
    // 0x802283AC: nop

    // 0x802283B0: bltz        $v0, L_802283A0
    if (SIGNED(ctx->r2) < 0) {
        // 0x802283B4: nop
    
            goto L_802283A0;
    }
    // 0x802283B4: nop

L_802283B8:
    // 0x802283B8: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x802283BC: sb          $t0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r8;
    // 0x802283C0: sb          $t0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r8;
    // 0x802283C4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802283C8: lwc1        $f16, 0x14($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X14);
    // 0x802283CC: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x802283D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802283D4: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x802283D8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802283DC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802283E0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802283E4: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x802283E8: nop

    // 0x802283EC: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802283F0: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x802283F4: nop

    // 0x802283F8: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x802283FC: beql        $v0, $zero, L_8022844C
    if (ctx->r2 == 0) {
        // 0x80228400: mfc1        $v0, $f8
        ctx->r2 = (int32_t)ctx->f8.u32l;
            goto L_8022844C;
    }
    goto skip_2;
    // 0x80228400: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    skip_2:
    // 0x80228404: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80228408: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022840C: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80228410: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80228414: nop

    // 0x80228418: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8022841C: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80228420: nop

    // 0x80228424: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80228428: bne         $v0, $zero, L_80228440
    if (ctx->r2 != 0) {
        // 0x8022842C: nop
    
            goto L_80228440;
    }
    // 0x8022842C: nop

    // 0x80228430: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x80228434: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80228438: b           L_80228458
    // 0x8022843C: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_80228458;
    // 0x8022843C: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_80228440:
    // 0x80228440: b           L_80228458
    // 0x80228444: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80228458;
    // 0x80228444: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228448: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
L_8022844C:
    // 0x8022844C: nop

    // 0x80228450: bltz        $v0, L_80228440
    if (SIGNED(ctx->r2) < 0) {
        // 0x80228454: nop
    
            goto L_80228440;
    }
    // 0x80228454: nop

L_80228458:
    // 0x80228458: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x8022845C: sb          $t2, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r10;
    // 0x80228460: sb          $t2, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r10;
    // 0x80228464: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80228468: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x8022846C: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80228470: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80228474: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80228478: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x8022847C: nop

    // 0x80228480: sb          $t4, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r12;
    // 0x80228484: lwc1        $f4, 0x14($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X14);
    // 0x80228488: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x8022848C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80228490: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x80228494: nop

    // 0x80228498: sb          $t6, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r14;
    // 0x8022849C: lwc1        $f10, 0x18($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X18);
    // 0x802284A0: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x802284A4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x802284A8: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x802284AC: nop

    // 0x802284B0: sb          $t8, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r24;
    // 0x802284B4: lhu         $v0, 0xBFE($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFE);
    // 0x802284B8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_802284BC:
    // 0x802284BC: slt         $at, $s3, $v0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802284C0: bnel        $at, $zero, L_80228228
    if (ctx->r1 != 0) {
        // 0x802284C4: lw          $t7, 0x0($s5)
        ctx->r15 = MEM_W(ctx->r21, 0X0);
            goto L_80228228;
    }
    goto skip_3;
    // 0x802284C4: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    skip_3:
L_802284C8:
    // 0x802284C8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x802284CC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802284D0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802284D4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802284D8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802284DC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802284E0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802284E4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x802284E8: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x802284EC: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x802284F0: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x802284F4: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x802284F8: jr          $ra
    // 0x802284FC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x802284FC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_802070D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802070D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802070D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802070DC: jal         0x80238B80
    // 0x802070E0: nop

    func_80238B80(rdram, ctx);
        goto after_0;
    // 0x802070E0: nop

    after_0:
    // 0x802070E4: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x802070E8: lw          $t6, -0x3D40($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3D40);
    // 0x802070EC: lui         $at, 0xF000
    ctx->r1 = S32(0XF000 << 16);
    // 0x802070F0: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x802070F4: sltu        $at, $t6, $at
    ctx->r1 = ctx->r14 < ctx->r1 ? 1 : 0;
    // 0x802070F8: bne         $at, $zero, L_8020711C
    if (ctx->r1 != 0) {
        // 0x802070FC: lui         $at, 0x1000
        ctx->r1 = S32(0X1000 << 16);
            goto L_8020711C;
    }
    // 0x802070FC: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80207100: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x80207104: beq         $at, $zero, L_8020711C
    if (ctx->r1 == 0) {
        // 0x80207108: lui         $v1, 0x8026
        ctx->r3 = S32(0X8026 << 16);
            goto L_8020711C;
    }
    // 0x80207108: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x8020710C: addiu       $v1, $v1, -0x3D3C
    ctx->r3 = ADD32(ctx->r3, -0X3D3C);
    // 0x80207110: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80207114: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80207118: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_8020711C:
    // 0x8020711C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80207120: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80207124: sw          $v0, -0x3D40($at)
    MEM_W(-0X3D40, ctx->r1) = ctx->r2;
    // 0x80207128: jr          $ra
    // 0x8020712C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8020712C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80207B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80207B64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80207B68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80207B6C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80207B70: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80207B74: lwc1        $f6, 0x0($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80207B78: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80207B7C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80207B80: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80207B84: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80207B88: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80207B8C: lwc1        $f16, 0x4($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X4);
    // 0x80207B90: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80207B94: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80207B98: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x80207B9C: lwc1        $f6, 0x8($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80207BA0: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80207BA4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x80207BA8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80207BAC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80207BB0: jal         0x80234D30
    // 0x80207BB4: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    func_80234D30(rdram, ctx);
        goto after_0;
    // 0x80207BB4: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80207BB8: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80207BBC: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80207BC0: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80207BC4: lwc1        $f16, 0x8($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80207BC8: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80207BCC: lwc1        $f6, 0x0($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80207BD0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80207BD4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80207BD8: div.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80207BDC: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80207BE0: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80207BE4: swc1        $f16, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f16.u32l;
    // 0x80207BE8: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80207BEC: lwc1        $f18, 0x4($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X4);
    // 0x80207BF0: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80207BF4: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x80207BF8: swc1        $f6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f6.u32l;
    // 0x80207BFC: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80207C00: lwc1        $f10, 0x8($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80207C04: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80207C08: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80207C0C: swc1        $f18, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f18.u32l;
    // 0x80207C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80207C14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80207C18: jr          $ra
    // 0x80207C1C: nop

    return;
    // 0x80207C1C: nop

;}
RECOMP_FUNC void func_80244A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80244A90: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80244A94: lw          $t6, 0x16A0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X16A0);
    // 0x80244A98: bne         $t6, $zero, L_80244AA8
    if (ctx->r14 != 0) {
        // 0x80244A9C: nop
    
            goto L_80244AA8;
    }
    // 0x80244A9C: nop

    // 0x80244AA0: jr          $ra
    // 0x80244AA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80244AA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80244AA8:
    // 0x80244AA8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80244AAC: lw          $v0, 0x16A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X16A8);
    // 0x80244AB0: jr          $ra
    // 0x80244AB4: nop

    return;
    // 0x80244AB4: nop

;}
RECOMP_FUNC void func_80227458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227458: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8022745C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80227460: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
    // 0x80227464: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80227468: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8022746C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80227470: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x80227474: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80227478: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8022747C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80227480: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80227484: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80227488: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8022748C: sw          $a1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r5;
    // 0x80227490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227494: jal         0x8022B460
    // 0x80227498: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8022B460(rdram, ctx);
        goto after_0;
    // 0x80227498: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x8022749C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x802274A0: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x802274A4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802274A8: jal         0x8023D0C0
    // 0x802274AC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8023D0C0(rdram, ctx);
        goto after_1;
    // 0x802274AC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_1:
    // 0x802274B0: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x802274B4: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x802274B8: sw          $v1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r3;
    // 0x802274BC: and         $a1, $v1, $at
    ctx->r5 = ctx->r3 & ctx->r1;
    // 0x802274C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802274C4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802274C8: jal         0x8023D0C0
    // 0x802274CC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8023D0C0(rdram, ctx);
        goto after_2;
    // 0x802274CC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_2:
    // 0x802274D0: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x802274D4: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x802274D8: sh          $v1, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r3;
    // 0x802274DC: addiu       $a1, $a3, 0x4
    ctx->r5 = ADD32(ctx->r7, 0X4);
    // 0x802274E0: sw          $a1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r5;
    // 0x802274E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802274E8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x802274EC: jal         0x8022B460
    // 0x802274F0: sh          $t7, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r15;
    func_8022B460(rdram, ctx);
        goto after_3;
    // 0x802274F0: sh          $t7, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r15;
    after_3:
    // 0x802274F4: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x802274F8: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x802274FC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80227500: jal         0x8023D0C0
    // 0x80227504: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8023D0C0(rdram, ctx);
        goto after_4;
    // 0x80227504: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_4:
    // 0x80227508: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x8022750C: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x80227510: sw          $v1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r3;
    // 0x80227514: and         $a1, $v1, $at
    ctx->r5 = ctx->r3 & ctx->r1;
    // 0x80227518: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8022751C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80227520: jal         0x8023D0C0
    // 0x80227524: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8023D0C0(rdram, ctx);
        goto after_5;
    // 0x80227524: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_5:
    // 0x80227528: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x8022752C: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80227530: sh          $v1, 0x96($sp)
    MEM_H(0X96, ctx->r29) = ctx->r3;
    // 0x80227534: addiu       $a1, $a3, 0x4
    ctx->r5 = ADD32(ctx->r7, 0X4);
    // 0x80227538: sw          $a1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r5;
    // 0x8022753C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227540: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80227544: jal         0x8022B460
    // 0x80227548: sh          $t9, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r25;
    func_8022B460(rdram, ctx);
        goto after_6;
    // 0x80227548: sh          $t9, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r25;
    after_6:
    // 0x8022754C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80227550: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x80227554: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80227558: jal         0x8023D0C0
    // 0x8022755C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8023D0C0(rdram, ctx);
        goto after_7;
    // 0x8022755C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_7:
    // 0x80227560: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x80227564: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x80227568: sw          $v1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r3;
    // 0x8022756C: and         $a1, $v1, $at
    ctx->r5 = ctx->r3 & ctx->r1;
    // 0x80227570: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80227574: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80227578: jal         0x8023D0C0
    // 0x8022757C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8023D0C0(rdram, ctx);
        goto after_8;
    // 0x8022757C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_8:
    // 0x80227580: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x80227584: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80227588: sh          $v1, 0x92($sp)
    MEM_H(0X92, ctx->r29) = ctx->r3;
    // 0x8022758C: addiu       $a1, $a3, 0x4
    ctx->r5 = ADD32(ctx->r7, 0X4);
    // 0x80227590: sw          $a1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r5;
    // 0x80227594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227598: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8022759C: jal         0x8022B460
    // 0x802275A0: sh          $t7, 0x90($sp)
    MEM_H(0X90, ctx->r29) = ctx->r15;
    func_8022B460(rdram, ctx);
        goto after_9;
    // 0x802275A0: sh          $t7, 0x90($sp)
    MEM_H(0X90, ctx->r29) = ctx->r15;
    after_9:
    // 0x802275A4: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x802275A8: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x802275AC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802275B0: jal         0x8023D0C0
    // 0x802275B4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8023D0C0(rdram, ctx);
        goto after_10;
    // 0x802275B4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_10:
    // 0x802275B8: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x802275BC: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x802275C0: sw          $v1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r3;
    // 0x802275C4: and         $a1, $v1, $at
    ctx->r5 = ctx->r3 & ctx->r1;
    // 0x802275C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802275CC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802275D0: jal         0x8023D0C0
    // 0x802275D4: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8023D0C0(rdram, ctx);
        goto after_11;
    // 0x802275D4: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_11:
    // 0x802275D8: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x802275DC: sh          $v1, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r3;
    // 0x802275E0: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x802275E4: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x802275E8: sw          $a3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r7;
    // 0x802275EC: jal         0x8022B948
    // 0x802275F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_12;
    // 0x802275F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_12:
    // 0x802275F4: lhu         $t6, 0x9A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X9A);
    // 0x802275F8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x802275FC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80227600: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
    // 0x80227604: lhu         $s1, 0x98($sp)
    ctx->r17 = MEM_HU(ctx->r29, 0X98);
    // 0x80227608: sh          $s1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r17;
    // 0x8022760C: lhu         $ra, 0x96($sp)
    ctx->r31 = MEM_HU(ctx->r29, 0X96);
    // 0x80227610: sh          $ra, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r31;
    // 0x80227614: lhu         $s5, 0x92($sp)
    ctx->r21 = MEM_HU(ctx->r29, 0X92);
    // 0x80227618: sh          $s5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r21;
    // 0x8022761C: lhu         $a3, 0x90($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X90);
    // 0x80227620: sh          $a3, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r7;
    // 0x80227624: lhu         $s0, 0x8E($sp)
    ctx->r16 = MEM_HU(ctx->r29, 0X8E);
    // 0x80227628: sh          $s0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r16;
    // 0x8022762C: lhu         $t7, 0x94($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X94);
    // 0x80227630: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80227634: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80227638: multu       $t7, $s5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022763C: mflo        $t8
    ctx->r24 = lo;
    // 0x80227640: nop

    // 0x80227644: nop

    // 0x80227648: multu       $t8, $s1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022764C: mflo        $a2
    ctx->r6 = lo;
    // 0x80227650: bgez        $a2, L_80227660
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80227654: sra         $t9, $a2, 3
        ctx->r25 = S32(SIGNED(ctx->r6) >> 3);
            goto L_80227660;
    }
    // 0x80227654: sra         $t9, $a2, 3
    ctx->r25 = S32(SIGNED(ctx->r6) >> 3);
    // 0x80227658: addiu       $at, $a2, 0x7
    ctx->r1 = ADD32(ctx->r6, 0X7);
    // 0x8022765C: sra         $t9, $at, 3
    ctx->r25 = S32(SIGNED(ctx->r1) >> 3);
L_80227660:
    // 0x80227660: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80227664: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80227668: jal         0x8022B948
    // 0x8022766C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    func_8022B948(rdram, ctx);
        goto after_13;
    // 0x8022766C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    after_13:
    // 0x80227670: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80227674: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x80227678: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8022767C: jal         0x80225424
    // 0x80227680: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    func_80225424(rdram, ctx);
        goto after_14;
    // 0x80227680: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    after_14:
    // 0x80227684: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x80227688: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8022768C: div         $zero, $ra, $a3
    lo = S32(S64(S32(ctx->r31)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r31)) % S64(S32(ctx->r7)));
    // 0x80227690: mflo        $v0
    ctx->r2 = lo;
    // 0x80227694: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x80227698: bne         $a3, $zero, L_802276A4
    if (ctx->r7 != 0) {
        // 0x8022769C: nop
    
            goto L_802276A4;
    }
    // 0x8022769C: nop

    // 0x802276A0: break       7
    do_break(2149742240);
L_802276A4:
    // 0x802276A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802276A8: bne         $a3, $at, L_802276BC
    if (ctx->r7 != ctx->r1) {
        // 0x802276AC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802276BC;
    }
    // 0x802276AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802276B0: bne         $ra, $at, L_802276BC
    if (ctx->r31 != ctx->r1) {
        // 0x802276B4: nop
    
            goto L_802276BC;
    }
    // 0x802276B4: nop

    // 0x802276B8: break       6
    do_break(2149742264);
L_802276BC:
    // 0x802276BC: div         $zero, $s5, $s0
    lo = S32(S64(S32(ctx->r21)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r21)) % S64(S32(ctx->r16)));
    // 0x802276C0: mflo        $v1
    ctx->r3 = lo;
    // 0x802276C4: or          $t5, $v1, $zero
    ctx->r13 = ctx->r3 | 0;
    // 0x802276C8: bne         $s0, $zero, L_802276D4
    if (ctx->r16 != 0) {
        // 0x802276CC: nop
    
            goto L_802276D4;
    }
    // 0x802276CC: nop

    // 0x802276D0: break       7
    do_break(2149742288);
L_802276D4:
    // 0x802276D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802276D8: bne         $s0, $at, L_802276EC
    if (ctx->r16 != ctx->r1) {
        // 0x802276DC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802276EC;
    }
    // 0x802276DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802276E0: bne         $s5, $at, L_802276EC
    if (ctx->r21 != ctx->r1) {
        // 0x802276E4: nop
    
            goto L_802276EC;
    }
    // 0x802276E4: nop

    // 0x802276E8: break       6
    do_break(2149742312);
L_802276EC:
    // 0x802276EC: div         $zero, $ra, $a3
    lo = S32(S64(S32(ctx->r31)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r31)) % S64(S32(ctx->r7)));
    // 0x802276F0: mfhi        $t6
    ctx->r14 = hi;
    // 0x802276F4: bne         $a3, $zero, L_80227700
    if (ctx->r7 != 0) {
        // 0x802276F8: nop
    
            goto L_80227700;
    }
    // 0x802276F8: nop

    // 0x802276FC: break       7
    do_break(2149742332);
L_80227700:
    // 0x80227700: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80227704: bne         $a3, $at, L_80227718
    if (ctx->r7 != ctx->r1) {
        // 0x80227708: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80227718;
    }
    // 0x80227708: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022770C: bne         $ra, $at, L_80227718
    if (ctx->r31 != ctx->r1) {
        // 0x80227710: nop
    
            goto L_80227718;
    }
    // 0x80227710: nop

    // 0x80227714: break       6
    do_break(2149742356);
L_80227718:
    // 0x80227718: beq         $t6, $zero, L_80227728
    if (ctx->r14 == 0) {
        // 0x8022771C: nop
    
            goto L_80227728;
    }
    // 0x8022771C: nop

    // 0x80227720: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x80227724: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_80227728:
    // 0x80227728: div         $zero, $s5, $s0
    lo = S32(S64(S32(ctx->r21)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r21)) % S64(S32(ctx->r16)));
    // 0x8022772C: mfhi        $t4
    ctx->r12 = hi;
    // 0x80227730: bne         $s0, $zero, L_8022773C
    if (ctx->r16 != 0) {
        // 0x80227734: nop
    
            goto L_8022773C;
    }
    // 0x80227734: nop

    // 0x80227738: break       7
    do_break(2149742392);
L_8022773C:
    // 0x8022773C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80227740: bne         $s0, $at, L_80227754
    if (ctx->r16 != ctx->r1) {
        // 0x80227744: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80227754;
    }
    // 0x80227744: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80227748: bne         $s5, $at, L_80227754
    if (ctx->r21 != ctx->r1) {
        // 0x8022774C: nop
    
            goto L_80227754;
    }
    // 0x8022774C: nop

    // 0x80227750: break       6
    do_break(2149742416);
L_80227754:
    // 0x80227754: beq         $t4, $zero, L_80227764
    if (ctx->r12 == 0) {
        // 0x80227758: nop
    
            goto L_80227764;
    }
    // 0x80227758: nop

    // 0x8022775C: addiu       $t5, $v1, 0x1
    ctx->r13 = ADD32(ctx->r3, 0X1);
    // 0x80227760: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80227764:
    // 0x80227764: multu       $t0, $t5
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227768: mflo        $t7
    ctx->r15 = lo;
    // 0x8022776C: sh          $t7, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r15;
    // 0x80227770: lh          $a0, 0xE($s2)
    ctx->r4 = MEM_H(ctx->r18, 0XE);
    // 0x80227774: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80227778: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
    // 0x8022777C: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x80227780: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80227784: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x80227788: sw          $t0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r8;
    // 0x8022778C: jal         0x8022BE54
    // 0x80227790: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    func_8022BE54(rdram, ctx);
        goto after_15;
    // 0x80227790: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_15:
    // 0x80227794: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x80227798: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x8022779C: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x802277A0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x802277A4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x802277A8: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x802277AC: lw          $a1, 0x10($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X10);
    // 0x802277B0: blez        $t5, L_802279D4
    if (SIGNED(ctx->r13) <= 0) {
        // 0x802277B4: or          $t3, $zero, $zero
        ctx->r11 = 0 | 0;
            goto L_802279D4;
    }
    // 0x802277B4: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x802277B8: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_802277BC:
    // 0x802277BC: blez        $t0, L_802279C8
    if (SIGNED(ctx->r8) <= 0) {
        // 0x802277C0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_802279C8;
    }
    // 0x802277C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802277C4: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802277C8: andi        $v0, $t0, 0x1
    ctx->r2 = ctx->r8 & 0X1;
    // 0x802277CC: mflo        $a0
    ctx->r4 = lo;
    // 0x802277D0: beql        $v0, $zero, L_8022787C
    if (ctx->r2 == 0) {
        // 0x802277D4: addu        $t1, $a2, $a0
        ctx->r9 = ADD32(ctx->r6, ctx->r4);
            goto L_8022787C;
    }
    goto skip_0;
    // 0x802277D4: addu        $t1, $a2, $a0
    ctx->r9 = ADD32(ctx->r6, ctx->r4);
    skip_0:
    // 0x802277D8: lw          $t9, 0x14($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X14);
    // 0x802277DC: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x802277E0: beq         $s3, $zero, L_802277FC
    if (ctx->r19 == 0) {
        // 0x802277E4: addu        $v0, $t9, $t6
        ctx->r2 = ADD32(ctx->r25, ctx->r14);
            goto L_802277FC;
    }
    // 0x802277E4: addu        $v0, $t9, $t6
    ctx->r2 = ADD32(ctx->r25, ctx->r14);
    // 0x802277E8: addiu       $t7, $t3, 0x1
    ctx->r15 = ADD32(ctx->r11, 0X1);
    // 0x802277EC: bnel        $t5, $t7, L_80227800
    if (ctx->r13 != ctx->r15) {
        // 0x802277F0: sh          $s0, 0xC($v0)
        MEM_H(0XC, ctx->r2) = ctx->r16;
            goto L_80227800;
    }
    goto skip_1;
    // 0x802277F0: sh          $s0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r16;
    skip_1:
    // 0x802277F4: b           L_80227800
    // 0x802277F8: sh          $t4, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r12;
        goto L_80227800;
    // 0x802277F8: sh          $t4, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r12;
L_802277FC:
    // 0x802277FC: sh          $s0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r16;
L_80227800:
    // 0x80227800: beql        $s4, $zero, L_80227828
    if (ctx->r20 == 0) {
        // 0x80227804: sh          $a3, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r7;
            goto L_80227828;
    }
    goto skip_2;
    // 0x80227804: sh          $a3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r7;
    skip_2:
    // 0x80227808: bne         $t0, $s5, L_80227824
    if (ctx->r8 != ctx->r21) {
        // 0x8022780C: addiu       $t8, $t0, -0x1
        ctx->r24 = ADD32(ctx->r8, -0X1);
            goto L_80227824;
    }
    // 0x8022780C: addiu       $t8, $t0, -0x1
    ctx->r24 = ADD32(ctx->r8, -0X1);
    // 0x80227810: multu       $a3, $t8
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227814: mflo        $t9
    ctx->r25 = lo;
    // 0x80227818: subu        $t6, $ra, $t9
    ctx->r14 = SUB32(ctx->r31, ctx->r25);
    // 0x8022781C: b           L_80227828
    // 0x80227820: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
        goto L_80227828;
    // 0x80227820: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
L_80227824:
    // 0x80227824: sh          $a3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r7;
L_80227828:
    // 0x80227828: lh          $t7, 0xC($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XC);
    // 0x8022782C: sh          $zero, 0xE($v0)
    MEM_H(0XE, ctx->r2) = 0;
    // 0x80227830: lh          $v1, 0xE($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XE);
    // 0x80227834: multu       $t7, $a3
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227838: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
    // 0x8022783C: sh          $a3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r7;
    // 0x80227840: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80227844: sh          $v1, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r3;
    // 0x80227848: sh          $v1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r3;
    // 0x8022784C: mflo        $t8
    ctx->r24 = lo;
    // 0x80227850: nop

    // 0x80227854: nop

    // 0x80227858: multu       $t8, $s1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022785C: mflo        $t9
    ctx->r25 = lo;
    // 0x80227860: bgez        $t9, L_80227870
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80227864: sra         $t6, $t9, 3
        ctx->r14 = S32(SIGNED(ctx->r25) >> 3);
            goto L_80227870;
    }
    // 0x80227864: sra         $t6, $t9, 3
    ctx->r14 = S32(SIGNED(ctx->r25) >> 3);
    // 0x80227868: addiu       $at, $t9, 0x7
    ctx->r1 = ADD32(ctx->r25, 0X7);
    // 0x8022786C: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_80227870:
    // 0x80227870: beq         $s5, $t0, L_802279C8
    if (ctx->r21 == ctx->r8) {
        // 0x80227874: addu        $a1, $a1, $t6
        ctx->r5 = ADD32(ctx->r5, ctx->r14);
            goto L_802279C8;
    }
    // 0x80227874: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x80227878: addu        $t1, $a2, $a0
    ctx->r9 = ADD32(ctx->r6, ctx->r4);
L_8022787C:
    // 0x8022787C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
L_80227880:
    // 0x80227880: lw          $t7, 0x14($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X14);
    // 0x80227884: sll         $t8, $t1, 4
    ctx->r24 = S32(ctx->r9 << 4);
    // 0x80227888: beq         $s3, $zero, L_802278A4
    if (ctx->r19 == 0) {
        // 0x8022788C: addu        $v0, $t7, $t8
        ctx->r2 = ADD32(ctx->r15, ctx->r24);
            goto L_802278A4;
    }
    // 0x8022788C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80227890: addiu       $t9, $t3, 0x1
    ctx->r25 = ADD32(ctx->r11, 0X1);
    // 0x80227894: bnel        $t5, $t9, L_802278A8
    if (ctx->r13 != ctx->r25) {
        // 0x80227898: sh          $s0, 0xC($v0)
        MEM_H(0XC, ctx->r2) = ctx->r16;
            goto L_802278A8;
    }
    goto skip_3;
    // 0x80227898: sh          $s0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r16;
    skip_3:
    // 0x8022789C: b           L_802278A8
    // 0x802278A0: sh          $t4, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r12;
        goto L_802278A8;
    // 0x802278A0: sh          $t4, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r12;
L_802278A4:
    // 0x802278A4: sh          $s0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r16;
L_802278A8:
    // 0x802278A8: beq         $s4, $zero, L_802278CC
    if (ctx->r20 == 0) {
        // 0x802278AC: addiu       $t6, $a2, 0x1
        ctx->r14 = ADD32(ctx->r6, 0X1);
            goto L_802278CC;
    }
    // 0x802278AC: addiu       $t6, $a2, 0x1
    ctx->r14 = ADD32(ctx->r6, 0X1);
    // 0x802278B0: bne         $t0, $t6, L_802278CC
    if (ctx->r8 != ctx->r14) {
        // 0x802278B4: addiu       $t7, $t0, -0x1
        ctx->r15 = ADD32(ctx->r8, -0X1);
            goto L_802278CC;
    }
    // 0x802278B4: addiu       $t7, $t0, -0x1
    ctx->r15 = ADD32(ctx->r8, -0X1);
    // 0x802278B8: multu       $a3, $t7
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802278BC: mflo        $t8
    ctx->r24 = lo;
    // 0x802278C0: subu        $t9, $ra, $t8
    ctx->r25 = SUB32(ctx->r31, ctx->r24);
    // 0x802278C4: b           L_802278D0
    // 0x802278C8: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
        goto L_802278D0;
    // 0x802278C8: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
L_802278CC:
    // 0x802278CC: sh          $a3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r7;
L_802278D0:
    // 0x802278D0: lh          $t6, 0xC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XC);
    // 0x802278D4: sh          $zero, 0xE($v0)
    MEM_H(0XE, ctx->r2) = 0;
    // 0x802278D8: lh          $v1, 0xE($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XE);
    // 0x802278DC: multu       $t6, $a3
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802278E0: sh          $a3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r7;
    // 0x802278E4: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
    // 0x802278E8: sh          $v1, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r3;
    // 0x802278EC: sh          $v1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r3;
    // 0x802278F0: lw          $t6, 0x14($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X14);
    // 0x802278F4: addiu       $a0, $a2, 0x2
    ctx->r4 = ADD32(ctx->r6, 0X2);
    // 0x802278F8: mflo        $t7
    ctx->r15 = lo;
    // 0x802278FC: nop

    // 0x80227900: nop

    // 0x80227904: multu       $t7, $s1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227908: sll         $t7, $t2, 4
    ctx->r15 = S32(ctx->r10 << 4);
    // 0x8022790C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80227910: mflo        $t8
    ctx->r24 = lo;
    // 0x80227914: bgez        $t8, L_80227924
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80227918: sra         $t9, $t8, 3
        ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
            goto L_80227924;
    }
    // 0x80227918: sra         $t9, $t8, 3
    ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8022791C: addiu       $at, $t8, 0x7
    ctx->r1 = ADD32(ctx->r24, 0X7);
    // 0x80227920: sra         $t9, $at, 3
    ctx->r25 = S32(SIGNED(ctx->r1) >> 3);
L_80227924:
    // 0x80227924: beq         $s3, $zero, L_80227940
    if (ctx->r19 == 0) {
        // 0x80227928: addu        $a1, $a1, $t9
        ctx->r5 = ADD32(ctx->r5, ctx->r25);
            goto L_80227940;
    }
    // 0x80227928: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x8022792C: addiu       $t8, $t3, 0x1
    ctx->r24 = ADD32(ctx->r11, 0X1);
    // 0x80227930: bnel        $t5, $t8, L_80227944
    if (ctx->r13 != ctx->r24) {
        // 0x80227934: sh          $s0, 0xC($v0)
        MEM_H(0XC, ctx->r2) = ctx->r16;
            goto L_80227944;
    }
    goto skip_4;
    // 0x80227934: sh          $s0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r16;
    skip_4:
    // 0x80227938: b           L_80227944
    // 0x8022793C: sh          $t4, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r12;
        goto L_80227944;
    // 0x8022793C: sh          $t4, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r12;
L_80227940:
    // 0x80227940: sh          $s0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r16;
L_80227944:
    // 0x80227944: beql        $s4, $zero, L_8022796C
    if (ctx->r20 == 0) {
        // 0x80227948: sh          $a3, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r7;
            goto L_8022796C;
    }
    goto skip_5;
    // 0x80227948: sh          $a3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r7;
    skip_5:
    // 0x8022794C: bne         $t0, $a0, L_80227968
    if (ctx->r8 != ctx->r4) {
        // 0x80227950: addiu       $t9, $t0, -0x1
        ctx->r25 = ADD32(ctx->r8, -0X1);
            goto L_80227968;
    }
    // 0x80227950: addiu       $t9, $t0, -0x1
    ctx->r25 = ADD32(ctx->r8, -0X1);
    // 0x80227954: multu       $a3, $t9
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227958: mflo        $t6
    ctx->r14 = lo;
    // 0x8022795C: subu        $t7, $ra, $t6
    ctx->r15 = SUB32(ctx->r31, ctx->r14);
    // 0x80227960: b           L_80227970
    // 0x80227964: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
        goto L_80227970;
    // 0x80227964: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
L_80227968:
    // 0x80227968: sh          $a3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r7;
L_8022796C:
    // 0x8022796C: addiu       $a0, $a2, 0x2
    ctx->r4 = ADD32(ctx->r6, 0X2);
L_80227970:
    // 0x80227970: lh          $t8, 0xC($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XC);
    // 0x80227974: sh          $zero, 0xE($v0)
    MEM_H(0XE, ctx->r2) = 0;
    // 0x80227978: lh          $v1, 0xE($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XE);
    // 0x8022797C: multu       $t8, $a3
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227980: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
    // 0x80227984: sh          $a3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r7;
    // 0x80227988: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8022798C: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x80227990: addiu       $t2, $t2, 0x2
    ctx->r10 = ADD32(ctx->r10, 0X2);
    // 0x80227994: sh          $v1, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r3;
    // 0x80227998: sh          $v1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r3;
    // 0x8022799C: mflo        $t9
    ctx->r25 = lo;
    // 0x802279A0: nop

    // 0x802279A4: nop

    // 0x802279A8: multu       $t9, $s1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802279AC: mflo        $t6
    ctx->r14 = lo;
    // 0x802279B0: bgez        $t6, L_802279C0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802279B4: sra         $t7, $t6, 3
        ctx->r15 = S32(SIGNED(ctx->r14) >> 3);
            goto L_802279C0;
    }
    // 0x802279B4: sra         $t7, $t6, 3
    ctx->r15 = S32(SIGNED(ctx->r14) >> 3);
    // 0x802279B8: addiu       $at, $t6, 0x7
    ctx->r1 = ADD32(ctx->r14, 0X7);
    // 0x802279BC: sra         $t7, $at, 3
    ctx->r15 = S32(SIGNED(ctx->r1) >> 3);
L_802279C0:
    // 0x802279C0: bne         $a0, $t0, L_80227880
    if (ctx->r4 != ctx->r8) {
        // 0x802279C4: addu        $a1, $a1, $t7
        ctx->r5 = ADD32(ctx->r5, ctx->r15);
            goto L_80227880;
    }
    // 0x802279C4: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
L_802279C8:
    // 0x802279C8: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x802279CC: bne         $t3, $t5, L_802277BC
    if (ctx->r11 != ctx->r13) {
        // 0x802279D0: nop
    
            goto L_802277BC;
    }
    // 0x802279D0: nop

L_802279D4:
    // 0x802279D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802279D8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x802279DC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802279E0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802279E4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802279E8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802279EC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x802279F0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x802279F4: jr          $ra
    // 0x802279F8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x802279F8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_80202288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80202288: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8020228C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80202290: lhu         $a1, 0xBFA($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0XBFA);
    // 0x80202294: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80202298: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8020229C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x802022A0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x802022A4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x802022A8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x802022AC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802022B0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802022B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802022B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802022BC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x802022C0: blez        $a1, L_802023F4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x802022C4: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_802023F4;
    }
    // 0x802022C4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802022C8: lui         $fp, 0x8025
    ctx->r30 = S32(0X8025 << 16);
    // 0x802022CC: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x802022D0: addiu       $s3, $s3, 0x6DE4
    ctx->r19 = ADD32(ctx->r19, 0X6DE4);
    // 0x802022D4: addiu       $fp, $fp, 0x204C
    ctx->r30 = ADD32(ctx->r30, 0X204C);
    // 0x802022D8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802022DC: addiu       $s7, $zero, 0x10
    ctx->r23 = ADD32(0, 0X10);
    // 0x802022E0: addiu       $s6, $zero, 0x8
    ctx->r22 = ADD32(0, 0X8);
    // 0x802022E4: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x802022E8: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
L_802022EC:
    // 0x802022EC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802022F0: addu        $v0, $s1, $a0
    ctx->r2 = ADD32(ctx->r17, ctx->r4);
    // 0x802022F4: lbu         $t6, 0xAC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XAC);
    // 0x802022F8: bnel        $s5, $t6, L_802023E8
    if (ctx->r21 != ctx->r14) {
        // 0x802022FC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802023E8;
    }
    goto skip_0;
    // 0x802022FC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x80202300: lw          $v1, 0xA0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XA0);
    // 0x80202304: andi        $s0, $s2, 0xFF
    ctx->r16 = ctx->r18 & 0XFF;
    // 0x80202308: beq         $s5, $v1, L_8020232C
    if (ctx->r21 == ctx->r3) {
        // 0x8020230C: nop
    
            goto L_8020232C;
    }
    // 0x8020230C: nop

    // 0x80202310: beq         $s4, $v1, L_8020232C
    if (ctx->r20 == ctx->r3) {
        // 0x80202314: nop
    
            goto L_8020232C;
    }
    // 0x80202314: nop

    // 0x80202318: beq         $s6, $v1, L_8020232C
    if (ctx->r22 == ctx->r3) {
        // 0x8020231C: nop
    
            goto L_8020232C;
    }
    // 0x8020231C: nop

    // 0x80202320: lw          $t7, 0xA8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XA8);
    // 0x80202324: bnel        $s7, $t7, L_802023E8
    if (ctx->r23 != ctx->r15) {
        // 0x80202328: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802023E8;
    }
    goto skip_1;
    // 0x80202328: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
L_8020232C:
    // 0x8020232C: bne         $s4, $v1, L_80202340
    if (ctx->r20 != ctx->r3) {
        // 0x80202330: addu        $v0, $a0, $s1
        ctx->r2 = ADD32(ctx->r4, ctx->r17);
            goto L_80202340;
    }
    // 0x80202330: addu        $v0, $a0, $s1
    ctx->r2 = ADD32(ctx->r4, ctx->r17);
    // 0x80202334: lbu         $t8, 0xB0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XB0);
    // 0x80202338: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8020233C: sb          $t9, 0xB0($v0)
    MEM_B(0XB0, ctx->r2) = ctx->r25;
L_80202340:
    // 0x80202340: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x80202344: jal         0x80202424
    // 0x80202348: lhu         $a1, 0x42($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X42);
    func_80202424(rdram, ctx);
        goto after_0;
    // 0x80202348: lhu         $a1, 0x42($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X42);
    after_0:
    // 0x8020234C: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x80202350: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80202354: addu        $v0, $t0, $s1
    ctx->r2 = ADD32(ctx->r8, ctx->r17);
    // 0x80202358: lw          $t1, 0x88($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X88);
    // 0x8020235C: lw          $t2, 0xA4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XA4);
    // 0x80202360: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80202364: beq         $t3, $zero, L_80202388
    if (ctx->r11 == 0) {
        // 0x80202368: nop
    
            goto L_80202388;
    }
    // 0x80202368: nop

    // 0x8020236C: lw          $t4, 0xA0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XA0);
    // 0x80202370: bne         $s4, $t4, L_802023D4
    if (ctx->r20 != ctx->r12) {
        // 0x80202374: nop
    
            goto L_802023D4;
    }
    // 0x80202374: nop

    // 0x80202378: lbu         $t5, 0xB0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XB0);
    // 0x8020237C: slti        $at, $t5, 0x5
    ctx->r1 = SIGNED(ctx->r13) < 0X5 ? 1 : 0;
    // 0x80202380: bne         $at, $zero, L_802023D4
    if (ctx->r1 != 0) {
        // 0x80202384: nop
    
            goto L_802023D4;
    }
    // 0x80202384: nop

L_80202388:
    // 0x80202388: jal         0x802011D0
    // 0x8020238C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_802011D0(rdram, ctx);
        goto after_1;
    // 0x8020238C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x80202390: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80202394: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x80202398: lw          $t8, 0x98($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X98);
    // 0x8020239C: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x802023A0: beq         $t9, $zero, L_802023B8
    if (ctx->r25 == 0) {
        // 0x802023A4: nop
    
            goto L_802023B8;
    }
    // 0x802023A4: nop

    // 0x802023A8: jal         0x80201FB8
    // 0x802023AC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80201FB8(rdram, ctx);
        goto after_2;
    // 0x802023AC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_2:
    // 0x802023B0: b           L_802023C8
    // 0x802023B4: nop

        goto L_802023C8;
    // 0x802023B4: nop

L_802023B8:
    // 0x802023B8: jal         0x80201FB8
    // 0x802023BC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80201FB8(rdram, ctx);
        goto after_3;
    // 0x802023BC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_3:
    // 0x802023C0: jal         0x80201F14
    // 0x802023C4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80201F14(rdram, ctx);
        goto after_4;
    // 0x802023C4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_4:
L_802023C8:
    // 0x802023C8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802023CC: b           L_802023E4
    // 0x802023D0: lhu         $a1, 0xBFA($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0XBFA);
        goto L_802023E4;
    // 0x802023D0: lhu         $a1, 0xBFA($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0XBFA);
L_802023D4:
    // 0x802023D4: jal         0x8020292C
    // 0x802023D8: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_8020292C(rdram, ctx);
        goto after_5;
    // 0x802023D8: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_5:
    // 0x802023DC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802023E0: lhu         $a1, 0xBFA($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0XBFA);
L_802023E4:
    // 0x802023E4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_802023E8:
    // 0x802023E8: slt         $at, $s2, $a1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802023EC: bne         $at, $zero, L_802022EC
    if (ctx->r1 != 0) {
        // 0x802023F0: addiu       $s1, $s1, 0xB4
        ctx->r17 = ADD32(ctx->r17, 0XB4);
            goto L_802022EC;
    }
    // 0x802023F0: addiu       $s1, $s1, 0xB4
    ctx->r17 = ADD32(ctx->r17, 0XB4);
L_802023F4:
    // 0x802023F4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802023F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802023FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80202400: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80202404: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80202408: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8020240C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80202410: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80202414: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80202418: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8020241C: jr          $ra
    // 0x80202420: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80202420: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802020D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802020D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802020D8: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x802020DC: lhu         $v1, 0xBFA($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XBFA);
    // 0x802020E0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x802020E4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802020E8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802020EC: andi        $s5, $a0, 0xFF
    ctx->r21 = ctx->r4 & 0XFF;
    // 0x802020F0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802020F4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x802020F8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802020FC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80202100: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80202104: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80202108: blez        $v1, L_80202180
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8020210C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80202180;
    }
    // 0x8020210C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80202110: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x80202114: addiu       $s3, $s3, 0x6DE4
    ctx->r19 = ADD32(ctx->r19, 0X6DE4);
    // 0x80202118: addiu       $s4, $zero, 0xB4
    ctx->r20 = ADD32(0, 0XB4);
    // 0x8020211C: addiu       $s2, $zero, 0xFF
    ctx->r18 = ADD32(0, 0XFF);
L_80202120:
    // 0x80202120: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80202124: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80202128: mflo        $t7
    ctx->r15 = lo;
    // 0x8020212C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80202130: lbu         $t8, 0x8C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X8C);
    // 0x80202134: beql        $s2, $t8, L_80202170
    if (ctx->r18 == ctx->r24) {
        // 0x80202138: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80202170;
    }
    goto skip_0;
    // 0x80202138: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x8020213C: beql        $s5, $zero, L_80202164
    if (ctx->r21 == 0) {
        // 0x80202140: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80202164;
    }
    goto skip_1;
    // 0x80202140: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x80202144: lw          $t9, 0x98($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X98);
    // 0x80202148: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x8020214C: ori         $t0, $t9, 0x20
    ctx->r8 = ctx->r25 | 0X20;
    // 0x80202150: jal         0x80201FB8
    // 0x80202154: sw          $t0, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->r8;
    func_80201FB8(rdram, ctx);
        goto after_0;
    // 0x80202154: sw          $t0, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->r8;
    after_0:
    // 0x80202158: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8020215C: lhu         $v1, 0xBFA($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XBFA);
    // 0x80202160: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80202164:
    // 0x80202164: andi        $t1, $s1, 0xFF
    ctx->r9 = ctx->r17 & 0XFF;
    // 0x80202168: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x8020216C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80202170:
    // 0x80202170: andi        $t2, $s0, 0xFF
    ctx->r10 = ctx->r16 & 0XFF;
    // 0x80202174: slt         $at, $t2, $v1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80202178: bne         $at, $zero, L_80202120
    if (ctx->r1 != 0) {
        // 0x8020217C: or          $s0, $t2, $zero
        ctx->r16 = ctx->r10 | 0;
            goto L_80202120;
    }
    // 0x8020217C: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
L_80202180:
    // 0x80202180: blez        $s1, L_802021AC
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80202184: or          $a1, $s1, $zero
        ctx->r5 = ctx->r17 | 0;
            goto L_802021AC;
    }
    // 0x80202184: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80202188: beq         $s5, $zero, L_8020219C
    if (ctx->r21 == 0) {
        // 0x8020218C: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_8020219C;
    }
    // 0x8020218C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202190: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x80202194: b           L_802021A4
    // 0x80202198: addiu       $a2, $a2, 0x1FEC
    ctx->r6 = ADD32(ctx->r6, 0X1FEC);
        goto L_802021A4;
    // 0x80202198: addiu       $a2, $a2, 0x1FEC
    ctx->r6 = ADD32(ctx->r6, 0X1FEC);
L_8020219C:
    // 0x8020219C: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x802021A0: addiu       $a2, $a2, 0x1FF8
    ctx->r6 = ADD32(ctx->r6, 0X1FF8);
L_802021A4:
    // 0x802021A4: jal         0x80231A24
    // 0x802021A8: addiu       $a0, $a0, 0x1FD4
    ctx->r4 = ADD32(ctx->r4, 0X1FD4);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x802021A8: addiu       $a0, $a0, 0x1FD4
    ctx->r4 = ADD32(ctx->r4, 0X1FD4);
    after_1:
L_802021AC:
    // 0x802021AC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802021B0: lw          $a1, 0x6DE0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6DE0);
    // 0x802021B4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802021B8: blezl       $a1, L_802021CC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x802021BC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802021CC;
    }
    goto skip_2;
    // 0x802021BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_2:
    // 0x802021C0: jal         0x80231A24
    // 0x802021C4: addiu       $a0, $a0, 0x2008
    ctx->r4 = ADD32(ctx->r4, 0X2008);
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x802021C4: addiu       $a0, $a0, 0x2008
    ctx->r4 = ADD32(ctx->r4, 0X2008);
    after_2:
    // 0x802021C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802021CC:
    // 0x802021CC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802021D0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802021D4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802021D8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802021DC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x802021E0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x802021E4: jr          $ra
    // 0x802021E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802021E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80249660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249660: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80249664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80249668: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x8024966C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80249670: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80249674: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80249678: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8024967C: sltu        $at, $v0, $t8
    ctx->r1 = ctx->r2 < ctx->r24 ? 1 : 0;
    // 0x80249680: bne         $at, $zero, L_80249690
    if (ctx->r1 != 0) {
        // 0x80249684: or          $t0, $a1, $zero
        ctx->r8 = ctx->r5 | 0;
            goto L_80249690;
    }
    // 0x80249684: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80249688: b           L_802496A8
    // 0x8024968C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802496A8;
    // 0x8024968C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80249690:
    // 0x80249690: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80249694: jal         0x80249238
    // 0x80249698: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80249238(rdram, ctx);
        goto after_0;
    // 0x80249698: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x8024969C: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x802496A0: sw          $a3, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r7;
    // 0x802496A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802496A8:
    // 0x802496A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802496AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802496B0: jr          $ra
    // 0x802496B4: nop

    return;
    // 0x802496B4: nop

;}
RECOMP_FUNC void func_8022F378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022F378: lbu         $v1, 0x10($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X10);
    // 0x8022F37C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x8022F380: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8022F384: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8022F388: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x8022F38C: lwc1        $f4, -0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, -0X4);
    // 0x8022F390: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x8022F394: nop

    // 0x8022F398: bc1f        L_8022F3A8
    if (!c1cs) {
        // 0x8022F39C: nop
    
            goto L_8022F3A8;
    }
    // 0x8022F39C: nop

    // 0x8022F3A0: jr          $ra
    // 0x8022F3A4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    return;
    // 0x8022F3A4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022F3A8:
    // 0x8022F3A8: blez        $v1, L_8022F484
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8022F3AC: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_8022F484;
    }
    // 0x8022F3AC: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8022F3B0: andi        $a3, $v1, 0x3
    ctx->r7 = ctx->r3 & 0X3;
    // 0x8022F3B4: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
    // 0x8022F3B8: beq         $a3, $zero, L_8022F3F4
    if (ctx->r7 == 0) {
        // 0x8022F3BC: addu        $a2, $a3, $v1
        ctx->r6 = ADD32(ctx->r7, ctx->r3);
            goto L_8022F3F4;
    }
    // 0x8022F3BC: addu        $a2, $a3, $v1
    ctx->r6 = ADD32(ctx->r7, ctx->r3);
    // 0x8022F3C0: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x8022F3C4: addu        $a1, $v0, $t8
    ctx->r5 = ADD32(ctx->r2, ctx->r24);
L_8022F3C8:
    // 0x8022F3C8: lwc1        $f6, -0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, -0X4);
    // 0x8022F3CC: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x8022F3D0: nop

    // 0x8022F3D4: bc1fl       L_8022F3E8
    if (!c1cs) {
        // 0x8022F3D8: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_8022F3E8;
    }
    goto skip_0;
    // 0x8022F3D8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    skip_0:
    // 0x8022F3DC: jr          $ra
    // 0x8022F3E0: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    return;
    // 0x8022F3E0: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022F3E4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_8022F3E8:
    // 0x8022F3E8: bne         $a2, $a0, L_8022F3C8
    if (ctx->r6 != ctx->r4) {
        // 0x8022F3EC: addiu       $a1, $a1, -0x4
        ctx->r5 = ADD32(ctx->r5, -0X4);
            goto L_8022F3C8;
    }
    // 0x8022F3EC: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x8022F3F0: beq         $a0, $zero, L_8022F484
    if (ctx->r4 == 0) {
        // 0x8022F3F4: sll         $t9, $a0, 2
        ctx->r25 = S32(ctx->r4 << 2);
            goto L_8022F484;
    }
L_8022F3F4:
    // 0x8022F3F4: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8022F3F8: addu        $a1, $v0, $t9
    ctx->r5 = ADD32(ctx->r2, ctx->r25);
L_8022F3FC:
    // 0x8022F3FC: lwc1        $f8, -0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, -0X4);
    // 0x8022F400: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x8022F404: nop

    // 0x8022F408: bc1fl       L_8022F41C
    if (!c1cs) {
        // 0x8022F40C: lwc1        $f10, -0x8($a1)
        ctx->f10.u32l = MEM_W(ctx->r5, -0X8);
            goto L_8022F41C;
    }
    goto skip_1;
    // 0x8022F40C: lwc1        $f10, -0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, -0X8);
    skip_1:
    // 0x8022F410: jr          $ra
    // 0x8022F414: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    return;
    // 0x8022F414: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022F418: lwc1        $f10, -0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, -0X8);
L_8022F41C:
    // 0x8022F41C: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x8022F420: nop

    // 0x8022F424: bc1f        L_8022F438
    if (!c1cs) {
        // 0x8022F428: addiu       $v0, $a0, -0x1
        ctx->r2 = ADD32(ctx->r4, -0X1);
            goto L_8022F438;
    }
    // 0x8022F428: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x8022F42C: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x8022F430: jr          $ra
    // 0x8022F434: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    return;
    // 0x8022F434: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_8022F438:
    // 0x8022F438: lwc1        $f16, -0xC($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, -0XC);
    // 0x8022F43C: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x8022F440: nop

    // 0x8022F444: bc1f        L_8022F458
    if (!c1cs) {
        // 0x8022F448: addiu       $v0, $a0, -0x2
        ctx->r2 = ADD32(ctx->r4, -0X2);
            goto L_8022F458;
    }
    // 0x8022F448: addiu       $v0, $a0, -0x2
    ctx->r2 = ADD32(ctx->r4, -0X2);
    // 0x8022F44C: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x8022F450: jr          $ra
    // 0x8022F454: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    return;
    // 0x8022F454: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_8022F458:
    // 0x8022F458: lwc1        $f18, -0x10($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, -0X10);
    // 0x8022F45C: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x8022F460: nop

    // 0x8022F464: bc1f        L_8022F478
    if (!c1cs) {
        // 0x8022F468: addiu       $v0, $a0, -0x3
        ctx->r2 = ADD32(ctx->r4, -0X3);
            goto L_8022F478;
    }
    // 0x8022F468: addiu       $v0, $a0, -0x3
    ctx->r2 = ADD32(ctx->r4, -0X3);
    // 0x8022F46C: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8022F470: jr          $ra
    // 0x8022F474: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    return;
    // 0x8022F474: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_8022F478:
    // 0x8022F478: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x8022F47C: bne         $a0, $zero, L_8022F3FC
    if (ctx->r4 != 0) {
        // 0x8022F480: addiu       $a1, $a1, -0x10
        ctx->r5 = ADD32(ctx->r5, -0X10);
            goto L_8022F3FC;
    }
    // 0x8022F480: addiu       $a1, $a1, -0x10
    ctx->r5 = ADD32(ctx->r5, -0X10);
L_8022F484:
    // 0x8022F484: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022F488: jr          $ra
    // 0x8022F48C: nop

    return;
    // 0x8022F48C: nop

;}
RECOMP_FUNC void func_8022B780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B780: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8022B784: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8022B788: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8022B78C: beq         $a2, $zero, L_8022B7AC
    if (ctx->r6 == 0) {
        // 0x8022B790: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8022B7AC;
    }
    // 0x8022B790: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022B794: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8022B798:
    // 0x8022B798: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B79C: sltu        $at, $v0, $a2
    ctx->r1 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x8022B7A0: sb          $a1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r5;
    // 0x8022B7A4: bne         $at, $zero, L_8022B798
    if (ctx->r1 != 0) {
        // 0x8022B7A8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8022B798;
    }
    // 0x8022B7A8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8022B7AC:
    // 0x8022B7AC: jr          $ra
    // 0x8022B7B0: nop

    return;
    // 0x8022B7B0: nop

;}
RECOMP_FUNC void func_80205204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205204: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x80205208: addiu       $v1, $v1, -0x4750
    ctx->r3 = ADD32(ctx->r3, -0X4750);
    // 0x8020520C: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x80205210: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80205214: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x80205218: bne         $t6, $zero, L_80205234
    if (ctx->r14 != 0) {
        // 0x8020521C: addiu       $v0, $v0, 0x505C
        ctx->r2 = ADD32(ctx->r2, 0X505C);
            goto L_80205234;
    }
    // 0x8020521C: addiu       $v0, $v0, 0x505C
    ctx->r2 = ADD32(ctx->r2, 0X505C);
    // 0x80205220: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80205224: lw          $t7, -0x4744($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4744);
    // 0x80205228: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020522C: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x80205230: sw          $t7, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r15;
L_80205234:
    // 0x80205234: jr          $ra
    // 0x80205238: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    return;
    // 0x80205238: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80231EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231EE0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80231EE4: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80231EE8: lw          $v1, 0x3930($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3930);
    // 0x80231EEC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80231EF0: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x80231EF4: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x80231EF8: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x80231EFC: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80231F00: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x80231F04: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80231F08: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80231F0C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80231F10: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80231F14: blez        $v1, L_80231FDC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80231F18: sw          $s0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r16;
            goto L_80231FDC;
    }
    // 0x80231F18: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80231F1C: lui         $s0, 0x8028
    ctx->r16 = S32(0X8028 << 16);
    // 0x80231F20: lui         $s1, 0x8026
    ctx->r17 = S32(0X8026 << 16);
    // 0x80231F24: addiu       $s1, $s1, -0x4148
    ctx->r17 = ADD32(ctx->r17, -0X4148);
    // 0x80231F28: addiu       $s0, $s0, 0x3530
    ctx->r16 = ADD32(ctx->r16, 0X3530);
    // 0x80231F2C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80231F30: addiu       $s2, $zero, 0x4C
    ctx->r18 = ADD32(0, 0X4C);
    // 0x80231F34: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
L_80231F38:
    // 0x80231F38: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80231F3C: addiu       $t7, $t7, 0x3530
    ctx->r15 = ADD32(ctx->r15, 0X3530);
    // 0x80231F40: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x80231F44: sll         $t6, $v1, 4
    ctx->r14 = S32(ctx->r3 << 4);
    // 0x80231F48: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80231F4C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80231F50: bc1fl       L_80231F64
    if (!c1cs) {
        // 0x80231F54: lw          $a1, 0x0($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X0);
            goto L_80231F64;
    }
    goto skip_0;
    // 0x80231F54: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x80231F58: b           L_80231FCC
    // 0x80231F5C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
        goto L_80231FCC;
    // 0x80231F5C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80231F60: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
L_80231F64:
    // 0x80231F64: lhu         $a2, 0x6($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X6);
    // 0x80231F68: lbu         $a3, 0x4($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X4);
    // 0x80231F6C: jal         0x80232EE0
    // 0x80231F70: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80232EE0(rdram, ctx);
        goto after_0;
    // 0x80231F70: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x80231F74: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80231F78: lw          $t0, 0x28($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X28);
    // 0x80231F7C: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80231F80: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x80231F84: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x80231F88: div         $zero, $t1, $s2
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r18)));
    // 0x80231F8C: mflo        $t2
    ctx->r10 = lo;
    // 0x80231F90: addu        $t3, $s1, $t2
    ctx->r11 = ADD32(ctx->r17, ctx->r10);
    // 0x80231F94: sb          $s3, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r19;
    // 0x80231F98: lw          $v1, 0x3930($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3930);
    // 0x80231F9C: addiu       $t5, $t5, 0x3530
    ctx->r13 = ADD32(ctx->r13, 0X3530);
    // 0x80231FA0: bne         $s2, $zero, L_80231FAC
    if (ctx->r18 != 0) {
        // 0x80231FA4: nop
    
            goto L_80231FAC;
    }
    // 0x80231FA4: nop

    // 0x80231FA8: break       7
    do_break(2149785512);
L_80231FAC:
    // 0x80231FAC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80231FB0: bne         $s2, $at, L_80231FC4
    if (ctx->r18 != ctx->r1) {
        // 0x80231FB4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80231FC4;
    }
    // 0x80231FB4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80231FB8: bne         $t1, $at, L_80231FC4
    if (ctx->r9 != ctx->r1) {
        // 0x80231FBC: nop
    
            goto L_80231FC4;
    }
    // 0x80231FBC: nop

    // 0x80231FC0: break       6
    do_break(2149785536);
L_80231FC4:
    // 0x80231FC4: sll         $t4, $v1, 4
    ctx->r12 = S32(ctx->r3 << 4);
    // 0x80231FC8: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
L_80231FCC:
    // 0x80231FCC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x80231FD0: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x80231FD4: bnel        $at, $zero, L_80231F38
    if (ctx->r1 != 0) {
        // 0x80231FD8: lwc1        $f4, 0x8($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
            goto L_80231F38;
    }
    goto skip_1;
    // 0x80231FD8: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    skip_1:
L_80231FDC:
    // 0x80231FDC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80231FE0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80231FE4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80231FE8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80231FEC: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80231FF0: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80231FF4: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x80231FF8: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x80231FFC: jr          $ra
    // 0x80232000: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80232000: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80228894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228894: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80228898: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8022889C: addiu       $a2, $a2, 0x5A38
    ctx->r6 = ADD32(ctx->r6, 0X5A38);
    // 0x802288A0: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
    // 0x802288A4: lwc1        $f12, 0x8($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X8);
    // 0x802288A8: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x802288AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802288B0: swc1        $f12, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f12.u32l;
    // 0x802288B4: swc1        $f12, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f12.u32l;
    // 0x802288B8: lhu         $v1, 0xBFE($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XBFE);
    // 0x802288BC: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802288C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802288C4: blezl       $v1, L_80228930
    if (SIGNED(ctx->r3) <= 0) {
        // 0x802288C8: lwc1        $f8, 0x0($a2)
        ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
            goto L_80228930;
    }
    goto skip_0;
    // 0x802288C8: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    skip_0:
    // 0x802288CC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802288D0: lw          $a1, 0x5A44($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5A44);
    // 0x802288D4: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
L_802288D8:
    // 0x802288D8: addu        $a0, $t6, $a1
    ctx->r4 = ADD32(ctx->r14, ctx->r5);
    // 0x802288DC: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x802288E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802288E4: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802288E8: beq         $t7, $zero, L_80228924
    if (ctx->r15 == 0) {
        // 0x802288EC: nop
    
            goto L_80228924;
    }
    // 0x802288EC: nop

    // 0x802288F0: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802288F4: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x802288F8: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x802288FC: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x80228900: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80228904: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x80228908: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8022890C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80228910: swc1        $f18, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f18.u32l;
    // 0x80228914: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80228918: add.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x8022891C: swc1        $f6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f6.u32l;
    // 0x80228920: lwc1        $f12, 0x8($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X8);
L_80228924:
    // 0x80228924: bnel        $at, $zero, L_802288D8
    if (ctx->r1 != 0) {
        // 0x80228928: sll         $t6, $v0, 5
        ctx->r14 = S32(ctx->r2 << 5);
            goto L_802288D8;
    }
    goto skip_1;
    // 0x80228928: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    skip_1:
    // 0x8022892C: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
L_80228930:
    // 0x80228930: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80228934: div.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80228938: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8022893C: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x80228940: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80228944: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x80228948: jr          $ra
    // 0x8022894C: swc1        $f18, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f18.u32l;
    return;
    // 0x8022894C: swc1        $f18, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_80234880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234880: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80234884: lw          $t6, 0x5238($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5238);
    // 0x80234888: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023488C: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80234890: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80234894: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80234898: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8023489C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x802348A0: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x802348A4: jal         0x802235C8
    // 0x802348A8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    func_802235C8(rdram, ctx);
        goto after_0;
    // 0x802348A8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    after_0:
    // 0x802348AC: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x802348B0: lhu         $t2, 0xBC4($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0XBC4);
    // 0x802348B4: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x802348B8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802348BC: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x802348C0: bne         $at, $zero, L_802348D8
    if (ctx->r1 != 0) {
        // 0x802348C4: nop
    
            goto L_802348D8;
    }
    // 0x802348C4: nop

    // 0x802348C8: jal         0x80231A24
    // 0x802348CC: addiu       $a0, $a0, 0x5390
    ctx->r4 = ADD32(ctx->r4, 0X5390);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x802348CC: addiu       $a0, $a0, 0x5390
    ctx->r4 = ADD32(ctx->r4, 0X5390);
    after_1:
    // 0x802348D0: b           L_80234978
    // 0x802348D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80234978;
    // 0x802348D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802348D8:
    // 0x802348D8: jal         0x80223840
    // 0x802348DC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_80223840(rdram, ctx);
        goto after_2;
    // 0x802348DC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_2:
    // 0x802348E0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x802348E4: jal         0x80223914
    // 0x802348E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80223914(rdram, ctx);
        goto after_3;
    // 0x802348E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x802348EC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x802348F0: jal         0x80223928
    // 0x802348F4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80223928(rdram, ctx);
        goto after_4;
    // 0x802348F4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_4:
    // 0x802348F8: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x802348FC: ori         $at, $at, 0x5257
    ctx->r1 = ctx->r1 | 0X5257;
    // 0x80234900: bne         $v0, $at, L_80234924
    if (ctx->r2 != ctx->r1) {
        // 0x80234904: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_80234924;
    }
    // 0x80234904: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80234908: lui         $a3, 0x434F
    ctx->r7 = S32(0X434F << 16);
    // 0x8023490C: ori         $a3, $a3, 0x4D4D
    ctx->r7 = ctx->r7 | 0X4D4D;
    // 0x80234910: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80234914: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x80234918: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8023491C: jal         0x80223B30
    // 0x80234920: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80223B30(rdram, ctx);
        goto after_5;
    // 0x80234920: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_5:
L_80234924:
    // 0x80234924: jal         0x802238F0
    // 0x80234928: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_802238F0(rdram, ctx);
        goto after_6;
    // 0x80234928: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_6:
    // 0x8023492C: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x80234930: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80234934: bne         $v0, $at, L_80234944
    if (ctx->r2 != ctx->r1) {
        // 0x80234938: nop
    
            goto L_80234944;
    }
    // 0x80234938: nop

    // 0x8023493C: b           L_80234978
    // 0x80234940: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
        goto L_80234978;
    // 0x80234940: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
L_80234944:
    // 0x80234944: bne         $v0, $zero, L_80234960
    if (ctx->r2 != 0) {
        // 0x80234948: lui         $a0, 0x803D
        ctx->r4 = S32(0X803D << 16);
            goto L_80234960;
    }
    // 0x80234948: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x8023494C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80234950: jal         0x8022B948
    // 0x80234954: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8022B948(rdram, ctx);
        goto after_7;
    // 0x80234954: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_7:
    // 0x80234958: b           L_80234964
    // 0x8023495C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_80234964;
    // 0x8023495C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80234960:
    // 0x80234960: ori         $a0, $a0, 0xA800
    ctx->r4 = ctx->r4 | 0XA800;
L_80234964:
    // 0x80234964: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80234968: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8023496C: jal         0x8022B460
    // 0x80234970: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_8022B460(rdram, ctx);
        goto after_8;
    // 0x80234970: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_8:
    // 0x80234974: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_80234978:
    // 0x80234978: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023497C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80234980: jr          $ra
    // 0x80234984: nop

    return;
    // 0x80234984: nop

;}
RECOMP_FUNC void func_802233EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802233EC: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x802233F0: lw          $v0, 0x4348($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4348);
    // 0x802233F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802233F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802233FC: or          $v1, $a0, $v0
    ctx->r3 = ctx->r4 | ctx->r2;
    // 0x80223400: beq         $v1, $v0, L_8022341C
    if (ctx->r3 == ctx->r2) {
        // 0x80223404: ori         $t6, $zero, 0xFFFF
        ctx->r14 = 0 | 0XFFFF;
            goto L_8022341C;
    }
    // 0x80223404: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x80223408: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8022340C: sh          $t6, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r14;
    // 0x80223410: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x80223414: jal         0x80220C44
    // 0x80223418: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_80220C44(rdram, ctx);
        goto after_0;
    // 0x80223418: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
L_8022341C:
    // 0x8022341C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80223420: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80223424: jr          $ra
    // 0x80223428: nop

    return;
    // 0x80223428: nop

;}
RECOMP_FUNC void func_802331C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802331C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802331C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802331C8: jal         0x80220C44
    // 0x802331CC: nop

    func_80220C44(rdram, ctx);
        goto after_0;
    // 0x802331CC: nop

    after_0:
    // 0x802331D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802331D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802331D8: jr          $ra
    // 0x802331DC: nop

    return;
    // 0x802331DC: nop

;}
RECOMP_FUNC void func_802304A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802304A0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802304A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802304A8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802304AC: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x802304B0: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x802304B4: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x802304B8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x802304BC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802304C0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802304C4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802304C8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802304CC: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802304D0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802304D4: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x802304D8: bc1f        L_802304F0
    if (!c1cs) {
        // 0x802304DC: lw          $s4, 0x0($a1)
        ctx->r20 = MEM_W(ctx->r5, 0X0);
            goto L_802304F0;
    }
    // 0x802304DC: lw          $s4, 0x0($a1)
    ctx->r20 = MEM_W(ctx->r5, 0X0);
    // 0x802304E0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802304E4: sh          $t7, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r15;
    // 0x802304E8: b           L_802304F4
    // 0x802304EC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_802304F4;
    // 0x802304EC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_802304F0:
    // 0x802304F0: sh          $zero, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = 0;
L_802304F4:
    // 0x802304F4: trunc.w.s   $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    ctx->f6.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x802304F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802304FC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80230500: addiu       $s5, $zero, 0xA
    ctx->r21 = ADD32(0, 0XA);
    // 0x80230504: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x80230508: lhu         $a1, 0x5E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X5E);
    // 0x8023050C: addiu       $t1, $zero, 0x2E
    ctx->r9 = ADD32(0, 0X2E);
    // 0x80230510: beq         $v1, $zero, L_80230548
    if (ctx->r3 == 0) {
        // 0x80230514: or          $s3, $v1, $zero
        ctx->r19 = ctx->r3 | 0;
            goto L_80230548;
    }
    // 0x80230514: or          $s3, $v1, $zero
    ctx->r19 = ctx->r3 | 0;
    // 0x80230518: blez        $v1, L_80230540
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8023051C: addiu       $s5, $zero, 0xA
        ctx->r21 = ADD32(0, 0XA);
            goto L_80230540;
    }
    // 0x8023051C: addiu       $s5, $zero, 0xA
    ctx->r21 = ADD32(0, 0XA);
L_80230520:
    // 0x80230520: multu       $s0, $s5
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80230524: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230528: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x8023052C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80230530: mflo        $s0
    ctx->r16 = lo;
    // 0x80230534: slt         $at, $s3, $s0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80230538: beq         $at, $zero, L_80230520
    if (ctx->r1 == 0) {
        // 0x8023053C: nop
    
            goto L_80230520;
    }
    // 0x8023053C: nop

L_80230540:
    // 0x80230540: b           L_8023054C
    // 0x80230544: addiu       $s5, $zero, 0xA
    ctx->r21 = ADD32(0, 0XA);
        goto L_8023054C;
    // 0x80230544: addiu       $s5, $zero, 0xA
    ctx->r21 = ADD32(0, 0XA);
L_80230548:
    // 0x80230548: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023054C:
    // 0x8023054C: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x80230550: addu        $t0, $s4, $v0
    ctx->r8 = ADD32(ctx->r20, ctx->r2);
    // 0x80230554: addu        $s4, $t0, $a1
    ctx->r20 = ADD32(ctx->r8, ctx->r5);
    // 0x80230558: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8023055C: addu        $t2, $a2, $s4
    ctx->r10 = ADD32(ctx->r6, ctx->r20);
    // 0x80230560: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80230564: sb          $t1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r9;
    // 0x80230568: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8023056C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80230570: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x80230574: sub.s       $f20, $f12, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x80230578: addu        $s2, $a2, $s4
    ctx->r18 = ADD32(ctx->r6, ctx->r20);
    // 0x8023057C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80230580: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80230584:
    // 0x80230584: mul.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x80230588: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8023058C: trunc.w.s   $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    ctx->f16.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x80230590: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x80230594: nop

    // 0x80230598: andi        $t4, $v0, 0xFFFF
    ctx->r12 = ctx->r2 & 0XFFFF;
    // 0x8023059C: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x802305A0: andi        $s1, $v0, 0xFFFF
    ctx->r17 = ctx->r2 & 0XFFFF;
    // 0x802305A4: bgez        $t4, L_802305B8
    if (SIGNED(ctx->r12) >= 0) {
        // 0x802305A8: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_802305B8;
    }
    // 0x802305A8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802305AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802305B0: nop

    // 0x802305B4: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_802305B8:
    // 0x802305B8: sub.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f4.fl;
    // 0x802305BC: jal         0x802306D0
    // 0x802305C0: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    func_802306D0(rdram, ctx);
        goto after_0;
    // 0x802305C0: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    after_0:
    // 0x802305C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802305C8: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x802305CC: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x802305D0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x802305D4: bne         $at, $zero, L_80230584
    if (ctx->r1 != 0) {
        // 0x802305D8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80230584;
    }
    // 0x802305D8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x802305DC: addiu       $s4, $s4, -0x4
    ctx->r20 = ADD32(ctx->r20, -0X4);
    // 0x802305E0: addiu       $s2, $s2, -0x4
    ctx->r18 = ADD32(ctx->r18, -0X4);
    // 0x802305E4: blez        $s6, L_80230670
    if (SIGNED(ctx->r22) <= 0) {
        // 0x802305E8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80230670;
    }
    // 0x802305E8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_802305EC:
    // 0x802305EC: div         $zero, $s3, $s5
    lo = S32(S64(S32(ctx->r19)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r19)) % S64(S32(ctx->r21)));
    // 0x802305F0: mfhi        $v0
    ctx->r2 = hi;
    // 0x802305F4: andi        $s1, $v0, 0xFFFF
    ctx->r17 = ctx->r2 & 0XFFFF;
    // 0x802305F8: bne         $s5, $zero, L_80230604
    if (ctx->r21 != 0) {
        // 0x802305FC: nop
    
            goto L_80230604;
    }
    // 0x802305FC: nop

    // 0x80230600: break       7
    do_break(2149778944);
L_80230604:
    // 0x80230604: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80230608: bne         $s5, $at, L_8023061C
    if (ctx->r21 != ctx->r1) {
        // 0x8023060C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023061C;
    }
    // 0x8023060C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80230610: bne         $s3, $at, L_8023061C
    if (ctx->r19 != ctx->r1) {
        // 0x80230614: nop
    
            goto L_8023061C;
    }
    // 0x80230614: nop

    // 0x80230618: break       6
    do_break(2149778968);
L_8023061C:
    // 0x8023061C: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x80230620: jal         0x802306D0
    // 0x80230624: nop

    func_802306D0(rdram, ctx);
        goto after_1;
    // 0x80230624: nop

    after_1:
    // 0x80230628: subu        $t5, $s3, $s1
    ctx->r13 = SUB32(ctx->r19, ctx->r17);
    // 0x8023062C: div         $zero, $t5, $s5
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r21)));
    // 0x80230630: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80230634: mflo        $s3
    ctx->r19 = lo;
    // 0x80230638: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8023063C: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x80230640: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80230644: bne         $s5, $zero, L_80230650
    if (ctx->r21 != 0) {
        // 0x80230648: nop
    
            goto L_80230650;
    }
    // 0x80230648: nop

    // 0x8023064C: break       7
    do_break(2149779020);
L_80230650:
    // 0x80230650: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80230654: bne         $s5, $at, L_80230668
    if (ctx->r21 != ctx->r1) {
        // 0x80230658: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80230668;
    }
    // 0x80230658: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023065C: bne         $t5, $at, L_80230668
    if (ctx->r13 != ctx->r1) {
        // 0x80230660: nop
    
            goto L_80230668;
    }
    // 0x80230660: nop

    // 0x80230664: break       6
    do_break(2149779044);
L_80230668:
    // 0x80230668: bne         $s0, $s6, L_802305EC
    if (ctx->r16 != ctx->r22) {
        // 0x8023066C: nop
    
            goto L_802305EC;
    }
    // 0x8023066C: nop

L_80230670:
    // 0x80230670: lhu         $t6, 0x5E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X5E);
    // 0x80230674: addiu       $t7, $zero, 0x2D
    ctx->r15 = ADD32(0, 0X2D);
    // 0x80230678: beql        $t6, $zero, L_8023068C
    if (ctx->r14 == 0) {
        // 0x8023067C: lw          $t9, 0x4C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X4C);
            goto L_8023068C;
    }
    goto skip_0;
    // 0x8023067C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x80230680: sb          $t7, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r15;
    // 0x80230684: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x80230688: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
L_8023068C:
    // 0x8023068C: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x80230690: addu        $t8, $s4, $s6
    ctx->r24 = ADD32(ctx->r20, ctx->r22);
    // 0x80230694: addu        $s4, $t8, $t9
    ctx->r20 = ADD32(ctx->r24, ctx->r25);
    // 0x80230698: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8023069C: sw          $s4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r20;
    // 0x802306A0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802306A4: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x802306A8: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x802306AC: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x802306B0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802306B4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802306B8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802306BC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802306C0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802306C4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802306C8: jr          $ra
    // 0x802306CC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x802306CC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_802371E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802371E0: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802371E4: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x802371E8: addiu       $t6, $t6, 0x16D0
    ctx->r14 = ADD32(ctx->r14, 0X16D0);
    // 0x802371EC: addiu       $t7, $t7, 0x16D0
    ctx->r15 = ADD32(ctx->r15, 0X16D0);
    // 0x802371F0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x802371F4: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x802371F8: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x802371FC: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80237200: sw          $a2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r6;
    // 0x80237204: jr          $ra
    // 0x80237208: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    return;
    // 0x80237208: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80241320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80241320: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80241324: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80241328: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8024132C: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80241330: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80241334: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80241338: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8024133C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80241340: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80241344: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80241348: lw          $s0, 0x50($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X50);
    // 0x8024134C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80241350: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80241354: beq         $s0, $zero, L_802413F8
    if (ctx->r16 == 0) {
        // 0x80241358: addiu       $s7, $zero, 0x17
        ctx->r23 = ADD32(0, 0X17);
            goto L_802413F8;
    }
    // 0x80241358: addiu       $s7, $zero, 0x17
    ctx->r23 = ADD32(0, 0X17);
    // 0x8024135C: addiu       $s6, $zero, 0x16
    ctx->r22 = ADD32(0, 0X16);
L_80241360:
    // 0x80241360: lh          $s3, 0xC($s0)
    ctx->r19 = MEM_H(ctx->r16, 0XC);
    // 0x80241364: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x80241368: beql        $s3, $s6, L_8024137C
    if (ctx->r19 == ctx->r22) {
        // 0x8024136C: lw          $t6, 0x10($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X10);
            goto L_8024137C;
    }
    goto skip_0;
    // 0x8024136C: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    skip_0:
    // 0x80241370: bne         $s3, $s7, L_802413F0
    if (ctx->r19 != ctx->r23) {
        // 0x80241374: nop
    
            goto L_802413F0;
    }
    // 0x80241374: nop

    // 0x80241378: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
L_8024137C:
    // 0x8024137C: bne         $s2, $t6, L_802413F0
    if (ctx->r18 != ctx->r14) {
        // 0x80241380: nop
    
            goto L_802413F0;
    }
    // 0x80241380: nop

    // 0x80241384: lw          $t9, 0x78($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X78);
    // 0x80241388: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x8024138C: addiu       $s4, $s5, 0x48
    ctx->r20 = ADD32(ctx->r21, 0X48);
    // 0x80241390: jalr        $t9
    // 0x80241394: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80241394: nop

    after_0:
    // 0x80241398: jal         0x80237120
    // 0x8024139C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80237120(rdram, ctx);
        goto after_1;
    // 0x8024139C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802413A0: beq         $s1, $zero, L_802413B8
    if (ctx->r17 == 0) {
        // 0x802413A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802413B8;
    }
    // 0x802413A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802413A8: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x802413AC: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x802413B0: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x802413B4: sw          $t0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r8;
L_802413B8:
    // 0x802413B8: jal         0x80237150
    // 0x802413BC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80237150(rdram, ctx);
        goto after_2;
    // 0x802413BC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_2:
    // 0x802413C0: bnel        $s3, $s6, L_802413DC
    if (ctx->r19 != ctx->r22) {
        // 0x802413C4: lbu         $t3, 0x37($s2)
        ctx->r11 = MEM_BU(ctx->r18, 0X37);
            goto L_802413DC;
    }
    goto skip_1;
    // 0x802413C4: lbu         $t3, 0x37($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X37);
    skip_1:
    // 0x802413C8: lbu         $t1, 0x37($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X37);
    // 0x802413CC: andi        $t2, $t1, 0xFE
    ctx->r10 = ctx->r9 & 0XFE;
    // 0x802413D0: b           L_802413E4
    // 0x802413D4: sb          $t2, 0x37($s2)
    MEM_B(0X37, ctx->r18) = ctx->r10;
        goto L_802413E4;
    // 0x802413D4: sb          $t2, 0x37($s2)
    MEM_B(0X37, ctx->r18) = ctx->r10;
    // 0x802413D8: lbu         $t3, 0x37($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X37);
L_802413DC:
    // 0x802413DC: andi        $t4, $t3, 0xFD
    ctx->r12 = ctx->r11 & 0XFD;
    // 0x802413E0: sb          $t4, 0x37($s2)
    MEM_B(0X37, ctx->r18) = ctx->r12;
L_802413E4:
    // 0x802413E4: lbu         $t5, 0x37($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X37);
    // 0x802413E8: beql        $t5, $zero, L_802413FC
    if (ctx->r13 == 0) {
        // 0x802413EC: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_802413FC;
    }
    goto skip_2;
    // 0x802413EC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_2:
L_802413F0:
    // 0x802413F0: bne         $s1, $zero, L_80241360
    if (ctx->r17 != 0) {
        // 0x802413F4: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80241360;
    }
    // 0x802413F4: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_802413F8:
    // 0x802413F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802413FC:
    // 0x802413FC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80241400: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80241404: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80241408: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8024140C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80241410: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80241414: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80241418: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8024141C: jr          $ra
    // 0x80241420: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80241420: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80219210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80219210: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80219214: swc1        $f12, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f12.u32l;
    // 0x80219218: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x8021921C: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80219220: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80219224: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80219228: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x8021922C: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80219230: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80219234: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80219238: sub.s       $f18, $f8, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x8021923C: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80219240: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80219244: sub.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80219248: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x8021924C: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x80219250: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x80219254: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80219258: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021925C: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80219260: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80219264: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80219268: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x8021926C: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x80219270: bc1fl       L_802192B8
    if (!c1cs) {
        // 0x80219274: lwc1        $f10, 0x70($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
            goto L_802192B8;
    }
    goto skip_0;
    // 0x80219274: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    skip_0:
    // 0x80219278: mov.s       $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = ctx->f6.fl;
    // 0x8021927C: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80219280: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80219284: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80219288: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8021928C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x80219290: jal         0x80216464
    // 0x80219294: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80216464(rdram, ctx);
        goto after_0;
    // 0x80219294: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80219298: beq         $v0, $zero, L_802192AC
    if (ctx->r2 == 0) {
        // 0x8021929C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802192AC;
    }
    // 0x8021929C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802192A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802192A4: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x802192A8: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
L_802192AC:
    // 0x802192AC: b           L_802194F0
    // 0x802192B0: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
        goto L_802194F0;
    // 0x802192B0: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x802192B4: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
L_802192B8:
    // 0x802192B8: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802192BC: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    // 0x802192C0: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x802192C4: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802192C8: sub.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x802192CC: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x802192D0: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802192D4: sub.s       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x802192D8: mul.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802192DC: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x802192E0: sub.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x802192E4: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x802192E8: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802192EC: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802192F0: mul.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x802192F4: add.s       $f14, $f10, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802192F8: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802192FC: nop

    // 0x80219300: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80219304: add.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f14.fl;
    // 0x80219308: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x8021930C: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80219310: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80219314: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80219318: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8021931C: mul.s       $f6, $f10, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80219320: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x80219324: sub.s       $f4, $f12, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x80219328: jal         0x8022AA40
    // 0x8021932C: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    func_8022AA40(rdram, ctx);
        goto after_1;
    // 0x8021932C: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80219330: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80219334: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80219338: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8021933C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80219340: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x80219344: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80219348: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8021934C: bc1f        L_80219358
    if (!c1cs) {
        // 0x80219350: sub.s       $f0, $f6, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f4.fl;
            goto L_80219358;
    }
    // 0x80219350: sub.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80219354: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80219358:
    // 0x80219358: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021935C: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80219360: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80219364: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80219368: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021936C: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x80219370: sub.s       $f14, $f6, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80219374: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80219378: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8021937C: jal         0x8022AA40
    // 0x80219380: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    func_8022AA40(rdram, ctx);
        goto after_2;
    // 0x80219380: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    after_2:
    // 0x80219384: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80219388: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x8021938C: lwc1        $f14, 0x68($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80219390: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80219394: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80219398: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8021939C: bc1f        L_802193BC
    if (!c1cs) {
        // 0x802193A0: nop
    
            goto L_802193BC;
    }
    // 0x802193A0: nop

    // 0x802193A4: beq         $v0, $zero, L_802193BC
    if (ctx->r2 == 0) {
        // 0x802193A8: lw          $t7, 0x98($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X98);
            goto L_802193BC;
    }
    // 0x802193A8: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x802193AC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802193B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802193B4: b           L_802194F0
    // 0x802193B8: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
        goto L_802194F0;
    // 0x802193B8: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
L_802193BC:
    // 0x802193BC: mul.s       $f0, $f14, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x802193C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802193C4: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x802193C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802193CC: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802193D0: nop

    // 0x802193D4: mul.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802193D8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802193DC: nop

    // 0x802193E0: bc1f        L_802193F0
    if (!c1cs) {
        // 0x802193E4: nop
    
            goto L_802193F0;
    }
    // 0x802193E4: nop

    // 0x802193E8: b           L_802194F0
    // 0x802193EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802194F0;
    // 0x802193EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802193F0:
    // 0x802193F0: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x802193F4: jal         0x8022AA40
    // 0x802193F8: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    func_8022AA40(rdram, ctx);
        goto after_3;
    // 0x802193F8: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    after_3:
    // 0x802193FC: lwc1        $f2, 0x68($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80219400: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80219404: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80219408: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8021940C: add.s       $f12, $f6, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f6.fl;
    // 0x80219410: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x80219414: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80219418: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8021941C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80219420: add.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x80219424: div.s       $f14, $f4, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80219428: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8021942C: div.s       $f16, $f6, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80219430: c.le.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl <= ctx->f14.fl;
    // 0x80219434: nop

    // 0x80219438: bc1fl       L_80219460
    if (!c1cs) {
        // 0x8021943C: c.le.s      $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
            goto L_80219460;
    }
    goto skip_1;
    // 0x8021943C: c.le.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
    skip_1:
    // 0x80219440: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80219444: nop

    // 0x80219448: c.le.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl <= ctx->f10.fl;
    // 0x8021944C: nop

    // 0x80219450: bc1fl       L_80219460
    if (!c1cs) {
        // 0x80219454: c.le.s      $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
            goto L_80219460;
    }
    goto skip_2;
    // 0x80219454: c.le.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
    skip_2:
    // 0x80219458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8021945C: c.le.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
L_80219460:
    // 0x80219460: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80219464: bc1f        L_80219488
    if (!c1cs) {
        // 0x80219468: nop
    
            goto L_80219488;
    }
    // 0x80219468: nop

    // 0x8021946C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80219470: nop

    // 0x80219474: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x80219478: nop

    // 0x8021947C: bc1f        L_80219488
    if (!c1cs) {
        // 0x80219480: nop
    
            goto L_80219488;
    }
    // 0x80219480: nop

    // 0x80219484: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80219488:
    // 0x80219488: beq         $v0, $zero, L_802194C4
    if (ctx->r2 == 0) {
        // 0x8021948C: nop
    
            goto L_802194C4;
    }
    // 0x8021948C: nop

    // 0x80219490: beq         $v1, $zero, L_802194C4
    if (ctx->r3 == 0) {
        // 0x80219494: nop
    
            goto L_802194C4;
    }
    // 0x80219494: nop

    // 0x80219498: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x8021949C: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x802194A0: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x802194A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802194A8: bc1fl       L_802194BC
    if (!c1cs) {
        // 0x802194AC: swc1        $f16, 0x0($t9)
        MEM_W(0X0, ctx->r25) = ctx->f16.u32l;
            goto L_802194BC;
    }
    goto skip_3;
    // 0x802194AC: swc1        $f16, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f16.u32l;
    skip_3:
    // 0x802194B0: b           L_802194F0
    // 0x802194B4: swc1        $f14, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f14.u32l;
        goto L_802194F0;
    // 0x802194B4: swc1        $f14, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f14.u32l;
    // 0x802194B8: swc1        $f16, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f16.u32l;
L_802194BC:
    // 0x802194BC: b           L_802194F0
    // 0x802194C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802194F0;
    // 0x802194C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802194C4:
    // 0x802194C4: beq         $v0, $zero, L_802194D8
    if (ctx->r2 == 0) {
        // 0x802194C8: lw          $t0, 0x98($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X98);
            goto L_802194D8;
    }
    // 0x802194C8: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x802194CC: swc1        $f14, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f14.u32l;
    // 0x802194D0: b           L_802194F0
    // 0x802194D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802194F0;
    // 0x802194D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802194D8:
    // 0x802194D8: beq         $v1, $zero, L_802194F0
    if (ctx->r3 == 0) {
        // 0x802194DC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802194F0;
    }
    // 0x802194DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802194E0: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
    // 0x802194E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802194E8: b           L_802194F0
    // 0x802194EC: swc1        $f16, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f16.u32l;
        goto L_802194F0;
    // 0x802194EC: swc1        $f16, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f16.u32l;
L_802194F0:
    // 0x802194F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802194F4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x802194F8: jr          $ra
    // 0x802194FC: nop

    return;
    // 0x802194FC: nop

;}
RECOMP_FUNC void func_8023F9E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F9E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023F9E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023F9E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8023F9EC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8023F9F0: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8023F9F4: beql        $t6, $zero, L_8023FA58
    if (ctx->r14 == 0) {
        // 0x8023F9F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8023FA58;
    }
    goto skip_0;
    // 0x8023F9F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023F9FC: jal         0x80237840
    // 0x8023FA00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80237840(rdram, ctx);
        goto after_0;
    // 0x8023FA00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8023FA04: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8023FA08: beq         $v0, $zero, L_8023FA54
    if (ctx->r2 == 0) {
        // 0x8023FA0C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8023FA54;
    }
    // 0x8023FA0C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023FA10: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8023FA14: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x8023FA18: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x8023FA1C: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8023FA20: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x8023FA24: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x8023FA28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023FA2C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8023FA30: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8023FA34: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8023FA38: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8023FA3C: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x8023FA40: lw          $t3, 0x8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X8);
    // 0x8023FA44: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x8023FA48: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8023FA4C: jalr        $t9
    // 0x8023FA50: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8023FA50: nop

    after_1:
L_8023FA54:
    // 0x8023FA54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023FA58:
    // 0x8023FA58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023FA5C: jr          $ra
    // 0x8023FA60: nop

    return;
    // 0x8023FA60: nop

;}
RECOMP_FUNC void func_8020DB78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020DB78: lwc1        $f12, 0x14($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8020DB7C: lwc1        $f14, 0x10($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8020DB80: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8020DB84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020DB88: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x8020DB8C: nop

    // 0x8020DB90: bc1fl       L_8020DBC0
    if (!c1cs) {
        // 0x8020DB94: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_8020DBC0;
    }
    goto skip_0;
    // 0x8020DB94: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_0:
    // 0x8020DB98: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8020DB9C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8020DBA0: nop

    // 0x8020DBA4: bc1f        L_8020DBB4
    if (!c1cs) {
        // 0x8020DBA8: nop
    
            goto L_8020DBB4;
    }
    // 0x8020DBA8: nop

    // 0x8020DBAC: b           L_8020DBD8
    // 0x8020DBB0: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
        goto L_8020DBD8;
    // 0x8020DBB0: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_8020DBB4:
    // 0x8020DBB4: b           L_8020DBD8
    // 0x8020DBB8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_8020DBD8;
    // 0x8020DBB8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8020DBBC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_8020DBC0:
    // 0x8020DBC0: nop

    // 0x8020DBC4: bc1fl       L_8020DBD8
    if (!c1cs) {
        // 0x8020DBC8: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_8020DBD8;
    }
    goto skip_1;
    // 0x8020DBC8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_1:
    // 0x8020DBCC: b           L_8020DBD8
    // 0x8020DBD0: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_8020DBD8;
    // 0x8020DBD0: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x8020DBD4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8020DBD8:
    // 0x8020DBD8: beq         $a0, $at, L_8020E834
    if (ctx->r4 == ctx->r1) {
        // 0x8020DBDC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8020E834;
    }
    // 0x8020DBDC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8020DBE0: beq         $a0, $at, L_8020DF28
    if (ctx->r4 == ctx->r1) {
        // 0x8020DBE4: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8020DF28;
    }
    // 0x8020DBE4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020DBE8: bne         $a0, $at, L_8020F3B4
    if (ctx->r4 != ctx->r1) {
        // 0x8020DBEC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8020F3B4;
    }
    // 0x8020DBEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020DBF0: bgez        $a2, L_8020DC00
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8020DBF4: sra         $v1, $a2, 1
        ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
            goto L_8020DC00;
    }
    // 0x8020DBF4: sra         $v1, $a2, 1
    ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8020DBF8: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x8020DBFC: sra         $v1, $at, 1
    ctx->r3 = S32(SIGNED(ctx->r1) >> 1);
L_8020DC00:
    // 0x8020DC00: blez        $v1, L_8020F3B4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8020DC04: andi        $a2, $v1, 0x3
        ctx->r6 = ctx->r3 & 0X3;
            goto L_8020F3B4;
    }
    // 0x8020DC04: andi        $a2, $v1, 0x3
    ctx->r6 = ctx->r3 & 0X3;
    // 0x8020DC08: beq         $a2, $zero, L_8020DD24
    if (ctx->r6 == 0) {
        // 0x8020DC0C: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8020DD24;
    }
    // 0x8020DC0C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8020DC10: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x8020DC14: addu        $a1, $a3, $t6
    ctx->r5 = ADD32(ctx->r7, ctx->r14);
    // 0x8020DC18: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x8020DC1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020DC20: andi        $t7, $a2, 0xF800
    ctx->r15 = ctx->r6 & 0XF800;
    // 0x8020DC24: sra         $t8, $t7, 11
    ctx->r24 = S32(SIGNED(ctx->r15) >> 11);
    // 0x8020DC28: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x8020DC2C: beq         $a0, $v0, L_8020DCB8
    if (ctx->r4 == ctx->r2) {
        // 0x8020DC30: andi        $t9, $a2, 0x7C0
        ctx->r25 = ctx->r6 & 0X7C0;
            goto L_8020DCB8;
    }
    // 0x8020DC30: andi        $t9, $a2, 0x7C0
    ctx->r25 = ctx->r6 & 0X7C0;
L_8020DC34:
    // 0x8020DC34: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020DC38: sra         $t2, $t9, 6
    ctx->r10 = S32(SIGNED(ctx->r25) >> 6);
    // 0x8020DC3C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8020DC40: andi        $t3, $a2, 0x3E
    ctx->r11 = ctx->r6 & 0X3E;
    // 0x8020DC44: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8020DC48: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020DC4C: mul.s       $f16, $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x8020DC50: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x8020DC54: andi        $t5, $a2, 0x1
    ctx->r13 = ctx->r6 & 0X1;
    // 0x8020DC58: lhu         $a2, 0x2($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X2);
    // 0x8020DC5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020DC60: mul.s       $f10, $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8020DC64: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8020DC68: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020DC6C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020DC70: mul.s       $f8, $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8020DC74: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020DC78: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020DC7C: sll         $t8, $t7, 11
    ctx->r24 = S32(ctx->r15 << 11);
    // 0x8020DC80: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x8020DC84: trunc.w.s   $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8020DC88: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8020DC8C: andi        $t7, $a2, 0xF800
    ctx->r15 = ctx->r6 & 0XF800;
    // 0x8020DC90: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8020DC94: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x8020DC98: or          $t6, $t9, $t4
    ctx->r14 = ctx->r25 | ctx->r12;
    // 0x8020DC9C: sll         $t8, $t5, 1
    ctx->r24 = S32(ctx->r13 << 1);
    // 0x8020DCA0: or          $t2, $t6, $t8
    ctx->r10 = ctx->r14 | ctx->r24;
    // 0x8020DCA4: sra         $t8, $t7, 11
    ctx->r24 = S32(SIGNED(ctx->r15) >> 11);
    // 0x8020DCA8: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x8020DCAC: sh          $t2, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r10;
    // 0x8020DCB0: bne         $a0, $v0, L_8020DC34
    if (ctx->r4 != ctx->r2) {
        // 0x8020DCB4: andi        $t9, $a2, 0x7C0
        ctx->r25 = ctx->r6 & 0X7C0;
            goto L_8020DC34;
    }
    // 0x8020DCB4: andi        $t9, $a2, 0x7C0
    ctx->r25 = ctx->r6 & 0X7C0;
L_8020DCB8:
    // 0x8020DCB8: sra         $t2, $t9, 6
    ctx->r10 = S32(SIGNED(ctx->r25) >> 6);
    // 0x8020DCBC: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020DCC0: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8020DCC4: andi        $t3, $a2, 0x3E
    ctx->r11 = ctx->r6 & 0X3E;
    // 0x8020DCC8: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8020DCCC: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x8020DCD0: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020DCD4: mul.s       $f16, $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x8020DCD8: andi        $t5, $a2, 0x1
    ctx->r13 = ctx->r6 & 0X1;
    // 0x8020DCDC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8020DCE0: mul.s       $f10, $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8020DCE4: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020DCE8: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020DCEC: mul.s       $f8, $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8020DCF0: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020DCF4: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020DCF8: sll         $t8, $t7, 11
    ctx->r24 = S32(ctx->r15 << 11);
    // 0x8020DCFC: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x8020DD00: trunc.w.s   $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8020DD04: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8020DD08: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8020DD0C: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x8020DD10: or          $t6, $t9, $t4
    ctx->r14 = ctx->r25 | ctx->r12;
    // 0x8020DD14: sll         $t8, $t5, 1
    ctx->r24 = S32(ctx->r13 << 1);
    // 0x8020DD18: or          $t2, $t6, $t8
    ctx->r10 = ctx->r14 | ctx->r24;
    // 0x8020DD1C: sh          $t2, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r10;
    // 0x8020DD20: beq         $v0, $v1, L_8020F3B4
    if (ctx->r2 == ctx->r3) {
        // 0x8020DD24: sll         $t3, $v1, 1
        ctx->r11 = S32(ctx->r3 << 1);
            goto L_8020F3B4;
    }
L_8020DD24:
    // 0x8020DD24: sll         $t3, $v1, 1
    ctx->r11 = S32(ctx->r3 << 1);
    // 0x8020DD28: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x8020DD2C: addu        $a1, $a3, $t9
    ctx->r5 = ADD32(ctx->r7, ctx->r25);
    // 0x8020DD30: addu        $a0, $t3, $a3
    ctx->r4 = ADD32(ctx->r11, ctx->r7);
L_8020DD34:
    // 0x8020DD34: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x8020DD38: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8020DD3C: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
    // 0x8020DD40: andi        $t4, $a2, 0xF800
    ctx->r12 = ctx->r6 & 0XF800;
    // 0x8020DD44: sra         $t7, $t4, 11
    ctx->r15 = S32(SIGNED(ctx->r12) >> 11);
    // 0x8020DD48: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8020DD4C: andi        $t5, $a2, 0x7C0
    ctx->r13 = ctx->r6 & 0X7C0;
    // 0x8020DD50: sra         $t6, $t5, 6
    ctx->r14 = S32(SIGNED(ctx->r13) >> 6);
    // 0x8020DD54: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020DD58: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8020DD5C: andi        $t8, $a2, 0x3E
    ctx->r24 = ctx->r6 & 0X3E;
    // 0x8020DD60: sra         $t2, $t8, 1
    ctx->r10 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8020DD64: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8020DD68: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020DD6C: mul.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020DD70: andi        $t3, $a2, 0x1
    ctx->r11 = ctx->r6 & 0X1;
    // 0x8020DD74: lhu         $t0, 0x6($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X6);
    // 0x8020DD78: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8020DD7C: mul.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8020DD80: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020DD84: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8020DD88: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8020DD8C: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8020DD90: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8020DD94: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8020DD98: sll         $t2, $t8, 6
    ctx->r10 = S32(ctx->r24 << 6);
    // 0x8020DD9C: andi        $t8, $v0, 0xF800
    ctx->r24 = ctx->r2 & 0XF800;
    // 0x8020DDA0: sll         $t7, $t4, 11
    ctx->r15 = S32(ctx->r12 << 11);
    // 0x8020DDA4: or          $t5, $t3, $t7
    ctx->r13 = ctx->r11 | ctx->r15;
    // 0x8020DDA8: or          $t9, $t5, $t2
    ctx->r25 = ctx->r13 | ctx->r10;
    // 0x8020DDAC: sra         $t5, $t8, 11
    ctx->r13 = S32(SIGNED(ctx->r24) >> 11);
    // 0x8020DDB0: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8020DDB4: andi        $t2, $v0, 0x7C0
    ctx->r10 = ctx->r2 & 0X7C0;
    // 0x8020DDB8: sra         $t4, $t2, 6
    ctx->r12 = S32(SIGNED(ctx->r10) >> 6);
    // 0x8020DDBC: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020DDC0: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x8020DDC4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8020DDC8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020DDCC: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x8020DDD0: mul.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020DDD4: sll         $t7, $t3, 1
    ctx->r15 = S32(ctx->r11 << 1);
    // 0x8020DDD8: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x8020DDDC: mul.s       $f10, $f16, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8020DDE0: andi        $t3, $v0, 0x3E
    ctx->r11 = ctx->r2 & 0X3E;
    // 0x8020DDE4: sra         $t9, $t3, 1
    ctx->r25 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8020DDE8: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8020DDEC: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x8020DDF0: sh          $t6, -0x8($a1)
    MEM_H(-0X8, ctx->r5) = ctx->r14;
    // 0x8020DDF4: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020DDF8: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020DDFC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8020DE00: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8020DE04: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x8020DE08: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x8020DE0C: sll         $t9, $t3, 6
    ctx->r25 = S32(ctx->r11 << 6);
    // 0x8020DE10: andi        $t3, $v1, 0xF800
    ctx->r11 = ctx->r3 & 0XF800;
    // 0x8020DE14: sll         $t5, $t8, 11
    ctx->r13 = S32(ctx->r24 << 11);
    // 0x8020DE18: or          $t2, $t7, $t5
    ctx->r10 = ctx->r15 | ctx->r13;
    // 0x8020DE1C: or          $t6, $t2, $t9
    ctx->r14 = ctx->r10 | ctx->r25;
    // 0x8020DE20: sra         $t2, $t3, 11
    ctx->r10 = S32(SIGNED(ctx->r11) >> 11);
    // 0x8020DE24: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8020DE28: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8020DE2C: andi        $t9, $v1, 0x7C0
    ctx->r25 = ctx->r3 & 0X7C0;
    // 0x8020DE30: sra         $t8, $t9, 6
    ctx->r24 = S32(SIGNED(ctx->r25) >> 6);
    // 0x8020DE34: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020DE38: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8020DE3C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8020DE40: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020DE44: sll         $t5, $t7, 1
    ctx->r13 = S32(ctx->r15 << 1);
    // 0x8020DE48: mul.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020DE4C: or          $t4, $t6, $t5
    ctx->r12 = ctx->r14 | ctx->r13;
    // 0x8020DE50: andi        $t7, $v1, 0x3E
    ctx->r15 = ctx->r3 & 0X3E;
    // 0x8020DE54: sra         $t6, $t7, 1
    ctx->r14 = S32(SIGNED(ctx->r15) >> 1);
    // 0x8020DE58: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8020DE5C: mul.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8020DE60: andi        $t5, $v1, 0x1
    ctx->r13 = ctx->r3 & 0X1;
    // 0x8020DE64: sh          $t4, -0x6($a1)
    MEM_H(-0X6, ctx->r5) = ctx->r12;
    // 0x8020DE68: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020DE6C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8020DE70: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8020DE74: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8020DE78: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8020DE7C: sll         $t2, $t3, 11
    ctx->r10 = S32(ctx->r11 << 11);
    // 0x8020DE80: or          $t9, $t5, $t2
    ctx->r25 = ctx->r13 | ctx->r10;
    // 0x8020DE84: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8020DE88: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8020DE8C: nop

    // 0x8020DE90: sll         $t6, $t7, 6
    ctx->r14 = S32(ctx->r15 << 6);
    // 0x8020DE94: or          $t4, $t9, $t6
    ctx->r12 = ctx->r25 | ctx->r14;
    // 0x8020DE98: andi        $t7, $t0, 0xF800
    ctx->r15 = ctx->r8 & 0XF800;
    // 0x8020DE9C: sra         $t9, $t7, 11
    ctx->r25 = S32(SIGNED(ctx->r15) >> 11);
    // 0x8020DEA0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8020DEA4: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x8020DEA8: andi        $t6, $t0, 0x7C0
    ctx->r14 = ctx->r8 & 0X7C0;
    // 0x8020DEAC: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020DEB0: sra         $t3, $t6, 6
    ctx->r11 = S32(SIGNED(ctx->r14) >> 6);
    // 0x8020DEB4: sll         $t2, $t5, 1
    ctx->r10 = S32(ctx->r13 << 1);
    // 0x8020DEB8: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x8020DEBC: or          $t8, $t4, $t2
    ctx->r24 = ctx->r12 | ctx->r10;
    // 0x8020DEC0: andi        $t5, $t0, 0x3E
    ctx->r13 = ctx->r8 & 0X3E;
    // 0x8020DEC4: sra         $t4, $t5, 1
    ctx->r12 = S32(SIGNED(ctx->r13) >> 1);
    // 0x8020DEC8: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020DECC: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x8020DED0: mul.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020DED4: andi        $t2, $t0, 0x1
    ctx->r10 = ctx->r8 & 0X1;
    // 0x8020DED8: sh          $t8, -0x4($a1)
    MEM_H(-0X4, ctx->r5) = ctx->r24;
    // 0x8020DEDC: mul.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8020DEE0: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020DEE4: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020DEE8: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8020DEEC: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x8020DEF0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8020DEF4: sll         $t9, $t7, 11
    ctx->r25 = S32(ctx->r15 << 11);
    // 0x8020DEF8: or          $t6, $t2, $t9
    ctx->r14 = ctx->r10 | ctx->r25;
    // 0x8020DEFC: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020DF00: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8020DF04: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x8020DF08: sll         $t4, $t5, 6
    ctx->r12 = S32(ctx->r13 << 6);
    // 0x8020DF0C: or          $t8, $t6, $t4
    ctx->r24 = ctx->r14 | ctx->r12;
    // 0x8020DF10: sll         $t9, $t2, 1
    ctx->r25 = S32(ctx->r10 << 1);
    // 0x8020DF14: or          $t3, $t8, $t9
    ctx->r11 = ctx->r24 | ctx->r25;
    // 0x8020DF18: bne         $a1, $a0, L_8020DD34
    if (ctx->r5 != ctx->r4) {
        // 0x8020DF1C: sh          $t3, -0x2($a1)
        MEM_H(-0X2, ctx->r5) = ctx->r11;
            goto L_8020DD34;
    }
    // 0x8020DF1C: sh          $t3, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r11;
    // 0x8020DF20: jr          $ra
    // 0x8020DF24: nop

    return;
    // 0x8020DF24: nop

L_8020DF28:
    // 0x8020DF28: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020DF2C: beq         $a1, $at, L_8020DF4C
    if (ctx->r5 == ctx->r1) {
        // 0x8020DF30: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8020DF4C;
    }
    // 0x8020DF30: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8020DF34: beq         $a1, $at, L_8020E398
    if (ctx->r5 == ctx->r1) {
        // 0x8020DF38: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8020E398;
    }
    // 0x8020DF38: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8020DF3C: beq         $a1, $at, L_8020E5DC
    if (ctx->r5 == ctx->r1) {
        // 0x8020DF40: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8020E5DC;
    }
    // 0x8020DF40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020DF44: jr          $ra
    // 0x8020DF48: nop

    return;
    // 0x8020DF48: nop

L_8020DF4C:
    // 0x8020DF4C: blez        $a2, L_8020F3B4
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8020DF50: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8020F3B4;
    }
    // 0x8020DF50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020DF54: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x8020DF58: beq         $a1, $zero, L_8020E054
    if (ctx->r5 == 0) {
        // 0x8020DF5C: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8020E054;
    }
    // 0x8020DF5C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020DF60: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8020DF64: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020DF68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020DF6C: andi        $t5, $a1, 0xE
    ctx->r13 = ctx->r5 & 0XE;
    // 0x8020DF70: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x8020DF74: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8020DF78: nop

    // 0x8020DF7C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020DF80: mul.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020DF84: beql        $v1, $v0, L_8020E004
    if (ctx->r3 == ctx->r2) {
        // 0x8020DF88: trunc.w.s   $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
            goto L_8020E004;
    }
    goto skip_2;
    // 0x8020DF88: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    skip_2:
    // 0x8020DF8C: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
L_8020DF90:
    // 0x8020DF90: andi        $t4, $a1, 0xF1
    ctx->r12 = ctx->r5 & 0XF1;
    // 0x8020DF94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020DF98: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020DF9C: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020DFA0: nop

    // 0x8020DFA4: sll         $t8, $t2, 1
    ctx->r24 = S32(ctx->r10 << 1);
    // 0x8020DFA8: or          $a1, $t4, $t8
    ctx->r5 = ctx->r12 | ctx->r24;
    // 0x8020DFAC: andi        $t3, $a1, 0xE0
    ctx->r11 = ctx->r5 & 0XE0;
    // 0x8020DFB0: sra         $t5, $t3, 5
    ctx->r13 = S32(SIGNED(ctx->r11) >> 5);
    // 0x8020DFB4: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8020DFB8: sb          $a1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r5;
    // 0x8020DFBC: andi        $t6, $a1, 0x1F
    ctx->r14 = ctx->r5 & 0X1F;
    // 0x8020DFC0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020DFC4: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020DFC8: andi        $t5, $a1, 0xE
    ctx->r13 = ctx->r5 & 0XE;
    // 0x8020DFCC: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020DFD0: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020DFD4: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020DFD8: nop

    // 0x8020DFDC: sll         $t4, $t2, 5
    ctx->r12 = S32(ctx->r10 << 5);
    // 0x8020DFE0: or          $t8, $t6, $t4
    ctx->r24 = ctx->r14 | ctx->r12;
    // 0x8020DFE4: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x8020DFE8: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8020DFEC: sb          $t8, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r24;
    // 0x8020DFF0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020DFF4: mul.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020DFF8: bnel        $v1, $v0, L_8020DF90
    if (ctx->r3 != ctx->r2) {
        // 0x8020DFFC: trunc.w.s   $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
            goto L_8020DF90;
    }
    goto skip_3;
    // 0x8020DFFC: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    skip_3:
    // 0x8020E000: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
L_8020E004:
    // 0x8020E004: andi        $t4, $a1, 0xF1
    ctx->r12 = ctx->r5 & 0XF1;
    // 0x8020E008: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020E00C: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E010: nop

    // 0x8020E014: sll         $t8, $t2, 1
    ctx->r24 = S32(ctx->r10 << 1);
    // 0x8020E018: or          $a1, $t4, $t8
    ctx->r5 = ctx->r12 | ctx->r24;
    // 0x8020E01C: andi        $t3, $a1, 0xE0
    ctx->r11 = ctx->r5 & 0XE0;
    // 0x8020E020: sra         $t5, $t3, 5
    ctx->r13 = S32(SIGNED(ctx->r11) >> 5);
    // 0x8020E024: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8020E028: andi        $t6, $a1, 0x1F
    ctx->r14 = ctx->r5 & 0X1F;
    // 0x8020E02C: sb          $a1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r5;
    // 0x8020E030: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E034: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E038: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E03C: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E040: nop

    // 0x8020E044: sll         $t4, $t2, 5
    ctx->r12 = S32(ctx->r10 << 5);
    // 0x8020E048: or          $t8, $t6, $t4
    ctx->r24 = ctx->r14 | ctx->r12;
    // 0x8020E04C: sb          $t8, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r24;
    // 0x8020E050: beq         $v0, $a2, L_8020F3B4
    if (ctx->r2 == ctx->r6) {
        // 0x8020E054: addu        $a0, $a3, $v0
        ctx->r4 = ADD32(ctx->r7, ctx->r2);
            goto L_8020F3B4;
    }
L_8020E054:
    // 0x8020E054: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
    // 0x8020E058: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020E05C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020E060: andi        $t9, $a1, 0xE
    ctx->r25 = ctx->r5 & 0XE;
    // 0x8020E064: sra         $t3, $t9, 1
    ctx->r11 = S32(SIGNED(ctx->r25) >> 1);
    // 0x8020E068: mtc1        $t3, $f14
    ctx->f14.u32l = ctx->r11;
    // 0x8020E06C: nop

    // 0x8020E070: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E074: mul.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E078: beql        $v0, $a2, L_8020E21C
    if (ctx->r2 == ctx->r6) {
        // 0x8020E07C: trunc.w.s   $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
            goto L_8020E21C;
    }
    goto skip_4;
    // 0x8020E07C: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    skip_4:
    // 0x8020E080: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
L_8020E084:
    // 0x8020E084: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8020E088: andi        $t5, $a1, 0xF1
    ctx->r13 = ctx->r5 & 0XF1;
    // 0x8020E08C: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020E090: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E094: andi        $t4, $v1, 0xE
    ctx->r12 = ctx->r3 & 0XE;
    // 0x8020E098: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020E09C: sll         $t6, $t2, 1
    ctx->r14 = S32(ctx->r10 << 1);
    // 0x8020E0A0: or          $a1, $t5, $t6
    ctx->r5 = ctx->r13 | ctx->r14;
    // 0x8020E0A4: andi        $t8, $a1, 0xE0
    ctx->r24 = ctx->r5 & 0XE0;
    // 0x8020E0A8: sra         $t9, $t8, 5
    ctx->r25 = S32(SIGNED(ctx->r24) >> 5);
    // 0x8020E0AC: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8020E0B0: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8020E0B4: andi        $t3, $a1, 0x1F
    ctx->r11 = ctx->r5 & 0X1F;
    // 0x8020E0B8: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E0BC: sra         $t8, $t4, 1
    ctx->r24 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020E0C0: mtc1        $t8, $f14
    ctx->f14.u32l = ctx->r24;
    // 0x8020E0C4: andi        $t9, $v1, 0xF1
    ctx->r25 = ctx->r3 & 0XF1;
    // 0x8020E0C8: lbu         $a1, 0x4($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X4);
    // 0x8020E0CC: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E0D0: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E0D4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020E0D8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020E0DC: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E0E0: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E0E4: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E0E8: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E0EC: nop

    // 0x8020E0F0: sll         $t5, $t2, 5
    ctx->r13 = S32(ctx->r10 << 5);
    // 0x8020E0F4: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020E0F8: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x8020E0FC: sb          $t6, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r14;
    // 0x8020E100: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8020E104: or          $v1, $t9, $t3
    ctx->r3 = ctx->r25 | ctx->r11;
    // 0x8020E108: andi        $t6, $v1, 0xE0
    ctx->r14 = ctx->r3 & 0XE0;
    // 0x8020E10C: sra         $t4, $t6, 5
    ctx->r12 = S32(SIGNED(ctx->r14) >> 5);
    // 0x8020E110: mtc1        $t4, $f14
    ctx->f14.u32l = ctx->r12;
    // 0x8020E114: sb          $v1, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r3;
    // 0x8020E118: andi        $t5, $t0, 0xE
    ctx->r13 = ctx->r8 & 0XE;
    // 0x8020E11C: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E120: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x8020E124: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8020E128: andi        $t8, $v1, 0x1F
    ctx->r24 = ctx->r3 & 0X1F;
    // 0x8020E12C: andi        $t4, $t0, 0xF1
    ctx->r12 = ctx->r8 & 0XF1;
    // 0x8020E130: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E134: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E138: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E13C: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E140: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020E144: nop

    // 0x8020E148: sll         $t9, $t2, 5
    ctx->r25 = S32(ctx->r10 << 5);
    // 0x8020E14C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E150: or          $t3, $t8, $t9
    ctx->r11 = ctx->r24 | ctx->r25;
    // 0x8020E154: sb          $t3, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r11;
    // 0x8020E158: andi        $t9, $t1, 0xE
    ctx->r25 = ctx->r9 & 0XE;
    // 0x8020E15C: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E160: nop

    // 0x8020E164: sll         $t8, $t2, 1
    ctx->r24 = S32(ctx->r10 << 1);
    // 0x8020E168: or          $t0, $t4, $t8
    ctx->r8 = ctx->r12 | ctx->r24;
    // 0x8020E16C: andi        $t3, $t0, 0xE0
    ctx->r11 = ctx->r8 & 0XE0;
    // 0x8020E170: sra         $t5, $t3, 5
    ctx->r13 = S32(SIGNED(ctx->r11) >> 5);
    // 0x8020E174: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8020E178: sra         $t3, $t9, 1
    ctx->r11 = S32(SIGNED(ctx->r25) >> 1);
    // 0x8020E17C: mtc1        $t3, $f14
    ctx->f14.u32l = ctx->r11;
    // 0x8020E180: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E184: sb          $t0, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r8;
    // 0x8020E188: andi        $t6, $t0, 0x1F
    ctx->r14 = ctx->r8 & 0X1F;
    // 0x8020E18C: andi        $t5, $t1, 0xF1
    ctx->r13 = ctx->r9 & 0XF1;
    // 0x8020E190: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E194: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E198: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E19C: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E1A0: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E1A4: nop

    // 0x8020E1A8: sll         $t4, $t2, 5
    ctx->r12 = S32(ctx->r10 << 5);
    // 0x8020E1AC: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E1B0: or          $t8, $t6, $t4
    ctx->r24 = ctx->r14 | ctx->r12;
    // 0x8020E1B4: sb          $t8, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r24;
    // 0x8020E1B8: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020E1BC: nop

    // 0x8020E1C0: sll         $t6, $t2, 1
    ctx->r14 = S32(ctx->r10 << 1);
    // 0x8020E1C4: or          $t1, $t5, $t6
    ctx->r9 = ctx->r13 | ctx->r14;
    // 0x8020E1C8: andi        $t8, $t1, 0xE0
    ctx->r24 = ctx->r9 & 0XE0;
    // 0x8020E1CC: sra         $t9, $t8, 5
    ctx->r25 = S32(SIGNED(ctx->r24) >> 5);
    // 0x8020E1D0: mtc1        $t9, $f14
    ctx->f14.u32l = ctx->r25;
    // 0x8020E1D4: andi        $t3, $t1, 0x1F
    ctx->r11 = ctx->r9 & 0X1F;
    // 0x8020E1D8: andi        $t9, $a1, 0xE
    ctx->r25 = ctx->r5 & 0XE;
    // 0x8020E1DC: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E1E0: sb          $t1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r9;
    // 0x8020E1E4: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E1E8: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E1EC: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020E1F0: nop

    // 0x8020E1F4: sll         $t5, $t2, 5
    ctx->r13 = S32(ctx->r10 << 5);
    // 0x8020E1F8: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x8020E1FC: sra         $t3, $t9, 1
    ctx->r11 = S32(SIGNED(ctx->r25) >> 1);
    // 0x8020E200: mtc1        $t3, $f14
    ctx->f14.u32l = ctx->r11;
    // 0x8020E204: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
    // 0x8020E208: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E20C: mul.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E210: bnel        $v0, $a2, L_8020E084
    if (ctx->r2 != ctx->r6) {
        // 0x8020E214: trunc.w.s   $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
            goto L_8020E084;
    }
    goto skip_5;
    // 0x8020E214: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    skip_5:
    // 0x8020E218: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
L_8020E21C:
    // 0x8020E21C: andi        $t5, $a1, 0xF1
    ctx->r13 = ctx->r5 & 0XF1;
    // 0x8020E220: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8020E224: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020E228: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E22C: andi        $t4, $v1, 0xE
    ctx->r12 = ctx->r3 & 0XE;
    // 0x8020E230: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020E234: sll         $t6, $t2, 1
    ctx->r14 = S32(ctx->r10 << 1);
    // 0x8020E238: or          $a1, $t5, $t6
    ctx->r5 = ctx->r13 | ctx->r14;
    // 0x8020E23C: andi        $t8, $a1, 0xE0
    ctx->r24 = ctx->r5 & 0XE0;
    // 0x8020E240: sra         $t9, $t8, 5
    ctx->r25 = S32(SIGNED(ctx->r24) >> 5);
    // 0x8020E244: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8020E248: sra         $t8, $t4, 1
    ctx->r24 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020E24C: mtc1        $t8, $f14
    ctx->f14.u32l = ctx->r24;
    // 0x8020E250: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E254: andi        $t3, $a1, 0x1F
    ctx->r11 = ctx->r5 & 0X1F;
    // 0x8020E258: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8020E25C: andi        $t9, $v1, 0xF1
    ctx->r25 = ctx->r3 & 0XF1;
    // 0x8020E260: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020E264: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E268: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E26C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E270: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E274: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E278: nop

    // 0x8020E27C: sll         $t5, $t2, 5
    ctx->r13 = S32(ctx->r10 << 5);
    // 0x8020E280: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E284: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x8020E288: sb          $t6, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r14;
    // 0x8020E28C: andi        $t5, $t0, 0xE
    ctx->r13 = ctx->r8 & 0XE;
    // 0x8020E290: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020E294: nop

    // 0x8020E298: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8020E29C: or          $v1, $t9, $t3
    ctx->r3 = ctx->r25 | ctx->r11;
    // 0x8020E2A0: andi        $t6, $v1, 0xE0
    ctx->r14 = ctx->r3 & 0XE0;
    // 0x8020E2A4: sra         $t4, $t6, 5
    ctx->r12 = S32(SIGNED(ctx->r14) >> 5);
    // 0x8020E2A8: mtc1        $t4, $f14
    ctx->f14.u32l = ctx->r12;
    // 0x8020E2AC: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x8020E2B0: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8020E2B4: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E2B8: andi        $t8, $v1, 0x1F
    ctx->r24 = ctx->r3 & 0X1F;
    // 0x8020E2BC: sb          $v1, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r3;
    // 0x8020E2C0: andi        $t4, $t0, 0xF1
    ctx->r12 = ctx->r8 & 0XF1;
    // 0x8020E2C4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E2C8: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E2CC: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E2D0: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E2D4: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020E2D8: nop

    // 0x8020E2DC: sll         $t9, $t2, 5
    ctx->r25 = S32(ctx->r10 << 5);
    // 0x8020E2E0: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E2E4: or          $t3, $t8, $t9
    ctx->r11 = ctx->r24 | ctx->r25;
    // 0x8020E2E8: sb          $t3, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r11;
    // 0x8020E2EC: andi        $t9, $t1, 0xE
    ctx->r25 = ctx->r9 & 0XE;
    // 0x8020E2F0: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E2F4: nop

    // 0x8020E2F8: sll         $t8, $t2, 1
    ctx->r24 = S32(ctx->r10 << 1);
    // 0x8020E2FC: or          $t0, $t4, $t8
    ctx->r8 = ctx->r12 | ctx->r24;
    // 0x8020E300: andi        $t3, $t0, 0xE0
    ctx->r11 = ctx->r8 & 0XE0;
    // 0x8020E304: sra         $t5, $t3, 5
    ctx->r13 = S32(SIGNED(ctx->r11) >> 5);
    // 0x8020E308: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8020E30C: sra         $t3, $t9, 1
    ctx->r11 = S32(SIGNED(ctx->r25) >> 1);
    // 0x8020E310: mtc1        $t3, $f14
    ctx->f14.u32l = ctx->r11;
    // 0x8020E314: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E318: andi        $t6, $t0, 0x1F
    ctx->r14 = ctx->r8 & 0X1F;
    // 0x8020E31C: sb          $t0, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r8;
    // 0x8020E320: andi        $t5, $t1, 0xF1
    ctx->r13 = ctx->r9 & 0XF1;
    // 0x8020E324: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E328: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E32C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E330: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E334: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E338: nop

    // 0x8020E33C: sll         $t4, $t2, 5
    ctx->r12 = S32(ctx->r10 << 5);
    // 0x8020E340: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E344: or          $t8, $t6, $t4
    ctx->r24 = ctx->r14 | ctx->r12;
    // 0x8020E348: sb          $t8, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r24;
    // 0x8020E34C: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020E350: nop

    // 0x8020E354: sll         $t6, $t2, 1
    ctx->r14 = S32(ctx->r10 << 1);
    // 0x8020E358: or          $t1, $t5, $t6
    ctx->r9 = ctx->r13 | ctx->r14;
    // 0x8020E35C: andi        $t8, $t1, 0xE0
    ctx->r24 = ctx->r9 & 0XE0;
    // 0x8020E360: sra         $t9, $t8, 5
    ctx->r25 = S32(SIGNED(ctx->r24) >> 5);
    // 0x8020E364: mtc1        $t9, $f14
    ctx->f14.u32l = ctx->r25;
    // 0x8020E368: andi        $t3, $t1, 0x1F
    ctx->r11 = ctx->r9 & 0X1F;
    // 0x8020E36C: sb          $t1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r9;
    // 0x8020E370: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E374: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E378: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E37C: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020E380: nop

    // 0x8020E384: sll         $t5, $t2, 5
    ctx->r13 = S32(ctx->r10 << 5);
    // 0x8020E388: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x8020E38C: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
    // 0x8020E390: jr          $ra
    // 0x8020E394: nop

    return;
    // 0x8020E394: nop

L_8020E398:
    // 0x8020E398: blez        $a2, L_8020F3B4
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8020E39C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8020F3B4;
    }
    // 0x8020E39C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020E3A0: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x8020E3A4: beq         $a1, $zero, L_8020E438
    if (ctx->r5 == 0) {
        // 0x8020E3A8: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8020E438;
    }
    // 0x8020E3A8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020E3AC: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8020E3B0: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020E3B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020E3B8: andi        $t4, $a1, 0xF0
    ctx->r12 = ctx->r5 & 0XF0;
    // 0x8020E3BC: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E3C0: mtc1        $t8, $f14
    ctx->f14.u32l = ctx->r24;
    // 0x8020E3C4: beq         $v1, $v0, L_8020E410
    if (ctx->r3 == ctx->r2) {
        // 0x8020E3C8: cvt.s.w     $f18, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = CVT_S_W(ctx->f14.u32l);
            goto L_8020E410;
    }
    // 0x8020E3C8: cvt.s.w     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = CVT_S_W(ctx->f14.u32l);
L_8020E3CC:
    // 0x8020E3CC: mul.s       $f16, $f2, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8020E3D0: andi        $t9, $a1, 0xF
    ctx->r25 = ctx->r5 & 0XF;
    // 0x8020E3D4: lbu         $a1, 0x1($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X1);
    // 0x8020E3D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020E3DC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020E3E0: andi        $t4, $a1, 0xF0
    ctx->r12 = ctx->r5 & 0XF0;
    // 0x8020E3E4: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E3E8: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E3EC: mtc1        $t8, $f14
    ctx->f14.u32l = ctx->r24;
    // 0x8020E3F0: nop

    // 0x8020E3F4: cvt.s.w     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E3F8: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8020E3FC: nop

    // 0x8020E400: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x8020E404: or          $t6, $t9, $t5
    ctx->r14 = ctx->r25 | ctx->r13;
    // 0x8020E408: bne         $v1, $v0, L_8020E3CC
    if (ctx->r3 != ctx->r2) {
        // 0x8020E40C: sb          $t6, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r14;
            goto L_8020E3CC;
    }
    // 0x8020E40C: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
L_8020E410:
    // 0x8020E410: mul.s       $f16, $f2, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8020E414: andi        $t9, $a1, 0xF
    ctx->r25 = ctx->r5 & 0XF;
    // 0x8020E418: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020E41C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E420: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8020E424: nop

    // 0x8020E428: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x8020E42C: or          $t6, $t9, $t5
    ctx->r14 = ctx->r25 | ctx->r13;
    // 0x8020E430: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
    // 0x8020E434: beq         $v0, $a2, L_8020F3B4
    if (ctx->r2 == ctx->r6) {
        // 0x8020E438: addu        $a0, $a3, $v0
        ctx->r4 = ADD32(ctx->r7, ctx->r2);
            goto L_8020F3B4;
    }
L_8020E438:
    // 0x8020E438: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
    // 0x8020E43C: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020E440: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8020E444: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020E448: andi        $t4, $a1, 0xF0
    ctx->r12 = ctx->r5 & 0XF0;
    // 0x8020E44C: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E450: mtc1        $t8, $f12
    ctx->f12.u32l = ctx->r24;
    // 0x8020E454: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020E458: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E45C: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E460: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020E464: mul.s       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020E468: mtc1        $t8, $f12
    ctx->f12.u32l = ctx->r24;
    // 0x8020E46C: beq         $v0, $a2, L_8020E540
    if (ctx->r2 == ctx->r6) {
        // 0x8020E470: cvt.s.w     $f18, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = CVT_S_W(ctx->f12.u32l);
            goto L_8020E540;
    }
    // 0x8020E470: cvt.s.w     $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = CVT_S_W(ctx->f12.u32l);
L_8020E474:
    // 0x8020E474: mul.s       $f14, $f2, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8020E478: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020E47C: andi        $t4, $t0, 0xF0
    ctx->r12 = ctx->r8 & 0XF0;
    // 0x8020E480: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E484: mtc1        $t8, $f12
    ctx->f12.u32l = ctx->r24;
    // 0x8020E488: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x8020E48C: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E490: lbu         $a1, 0x4($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X4);
    // 0x8020E494: andi        $t4, $t1, 0xF0
    ctx->r12 = ctx->r9 & 0XF0;
    // 0x8020E498: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E49C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8020E4A0: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E4A4: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8020E4A8: sll         $t5, $t9, 4
    ctx->r13 = S32(ctx->r25 << 4);
    // 0x8020E4AC: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E4B0: mul.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020E4B4: or          $t6, $t7, $t5
    ctx->r14 = ctx->r15 | ctx->r13;
    // 0x8020E4B8: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x8020E4BC: mfc1        $t7, $f14
    ctx->r15 = (int32_t)ctx->f14.u32l;
    // 0x8020E4C0: andi        $t2, $v1, 0xF
    ctx->r10 = ctx->r3 & 0XF;
    // 0x8020E4C4: lbu         $v1, 0x5($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X5);
    // 0x8020E4C8: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020E4CC: sll         $t5, $t7, 4
    ctx->r13 = S32(ctx->r15 << 4);
    // 0x8020E4D0: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x8020E4D4: sb          $t6, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r14;
    // 0x8020E4D8: andi        $t3, $t0, 0xF
    ctx->r11 = ctx->r8 & 0XF;
    // 0x8020E4DC: trunc.w.s   $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x8020E4E0: mul.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8020E4E4: andi        $t4, $a1, 0xF0
    ctx->r12 = ctx->r5 & 0XF0;
    // 0x8020E4E8: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E4EC: mfc1        $t2, $f12
    ctx->r10 = (int32_t)ctx->f12.u32l;
    // 0x8020E4F0: mtc1        $t8, $f12
    ctx->f12.u32l = ctx->r24;
    // 0x8020E4F4: andi        $t9, $t1, 0xF
    ctx->r25 = ctx->r9 & 0XF;
    // 0x8020E4F8: sll         $t5, $t2, 4
    ctx->r13 = S32(ctx->r10 << 4);
    // 0x8020E4FC: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E500: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x8020E504: sb          $t6, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r14;
    // 0x8020E508: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020E50C: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E510: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020E514: mul.s       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020E518: mtc1        $t8, $f12
    ctx->f12.u32l = ctx->r24;
    // 0x8020E51C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020E520: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8020E524: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020E528: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020E52C: cvt.s.w     $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E530: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x8020E534: or          $t6, $t9, $t5
    ctx->r14 = ctx->r25 | ctx->r13;
    // 0x8020E538: bne         $v0, $a2, L_8020E474
    if (ctx->r2 != ctx->r6) {
        // 0x8020E53C: sb          $t6, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r14;
            goto L_8020E474;
    }
    // 0x8020E53C: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
L_8020E540:
    // 0x8020E540: andi        $t4, $t0, 0xF0
    ctx->r12 = ctx->r8 & 0XF0;
    // 0x8020E544: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E548: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E54C: mtc1        $t8, $f12
    ctx->f12.u32l = ctx->r24;
    // 0x8020E550: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020E554: mul.s       $f14, $f2, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8020E558: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8020E55C: andi        $t4, $t1, 0xF0
    ctx->r12 = ctx->r9 & 0XF0;
    // 0x8020E560: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E564: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8020E568: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x8020E56C: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E570: sll         $t5, $t9, 4
    ctx->r13 = S32(ctx->r25 << 4);
    // 0x8020E574: or          $t6, $t7, $t5
    ctx->r14 = ctx->r15 | ctx->r13;
    // 0x8020E578: andi        $t2, $v1, 0xF
    ctx->r10 = ctx->r3 & 0XF;
    // 0x8020E57C: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x8020E580: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020E584: mul.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020E588: andi        $t3, $t0, 0xF
    ctx->r11 = ctx->r8 & 0XF;
    // 0x8020E58C: andi        $t9, $t1, 0xF
    ctx->r25 = ctx->r9 & 0XF;
    // 0x8020E590: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020E594: mul.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8020E598: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E59C: trunc.w.s   $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x8020E5A0: mfc1        $t7, $f14
    ctx->r15 = (int32_t)ctx->f14.u32l;
    // 0x8020E5A4: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020E5A8: sll         $t5, $t7, 4
    ctx->r13 = S32(ctx->r15 << 4);
    // 0x8020E5AC: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x8020E5B0: mfc1        $t2, $f12
    ctx->r10 = (int32_t)ctx->f12.u32l;
    // 0x8020E5B4: sb          $t6, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r14;
    // 0x8020E5B8: sll         $t5, $t2, 4
    ctx->r13 = S32(ctx->r10 << 4);
    // 0x8020E5BC: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x8020E5C0: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8020E5C4: sb          $t6, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r14;
    // 0x8020E5C8: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x8020E5CC: or          $t6, $t9, $t5
    ctx->r14 = ctx->r25 | ctx->r13;
    // 0x8020E5D0: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
    // 0x8020E5D4: jr          $ra
    // 0x8020E5D8: nop

    return;
    // 0x8020E5D8: nop

L_8020E5DC:
    // 0x8020E5DC: bgez        $a2, L_8020E5EC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8020E5E0: sra         $v1, $a2, 1
        ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
            goto L_8020E5EC;
    }
    // 0x8020E5E0: sra         $v1, $a2, 1
    ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8020E5E4: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x8020E5E8: sra         $v1, $at, 1
    ctx->r3 = S32(SIGNED(ctx->r1) >> 1);
L_8020E5EC:
    // 0x8020E5EC: blez        $v1, L_8020F3B4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8020E5F0: andi        $a2, $v1, 0x3
        ctx->r6 = ctx->r3 & 0X3;
            goto L_8020F3B4;
    }
    // 0x8020E5F0: andi        $a2, $v1, 0x3
    ctx->r6 = ctx->r3 & 0X3;
    // 0x8020E5F4: beq         $a2, $zero, L_8020E68C
    if (ctx->r6 == 0) {
        // 0x8020E5F8: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8020E68C;
    }
    // 0x8020E5F8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8020E5FC: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x8020E600: addu        $a1, $a3, $t4
    ctx->r5 = ADD32(ctx->r7, ctx->r12);
    // 0x8020E604: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x8020E608: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020E60C: andi        $t8, $a2, 0xFF00
    ctx->r24 = ctx->r6 & 0XFF00;
    // 0x8020E610: sra         $t7, $t8, 8
    ctx->r15 = S32(SIGNED(ctx->r24) >> 8);
    // 0x8020E614: mtc1        $t7, $f14
    ctx->f14.u32l = ctx->r15;
    // 0x8020E618: beq         $a0, $v0, L_8020E664
    if (ctx->r4 == ctx->r2) {
        // 0x8020E61C: cvt.s.w     $f18, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = CVT_S_W(ctx->f14.u32l);
            goto L_8020E664;
    }
    // 0x8020E61C: cvt.s.w     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = CVT_S_W(ctx->f14.u32l);
L_8020E620:
    // 0x8020E620: mul.s       $f16, $f2, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8020E624: andi        $t2, $a2, 0xFF
    ctx->r10 = ctx->r6 & 0XFF;
    // 0x8020E628: lhu         $a2, 0x2($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X2);
    // 0x8020E62C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020E630: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8020E634: andi        $t8, $a2, 0xFF00
    ctx->r24 = ctx->r6 & 0XFF00;
    // 0x8020E638: sra         $t7, $t8, 8
    ctx->r15 = S32(SIGNED(ctx->r24) >> 8);
    // 0x8020E63C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E640: mtc1        $t7, $f14
    ctx->f14.u32l = ctx->r15;
    // 0x8020E644: nop

    // 0x8020E648: cvt.s.w     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E64C: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x8020E650: nop

    // 0x8020E654: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x8020E658: or          $t4, $t2, $t6
    ctx->r12 = ctx->r10 | ctx->r14;
    // 0x8020E65C: bne         $a0, $v0, L_8020E620
    if (ctx->r4 != ctx->r2) {
        // 0x8020E660: sh          $t4, -0x2($a1)
        MEM_H(-0X2, ctx->r5) = ctx->r12;
            goto L_8020E620;
    }
    // 0x8020E660: sh          $t4, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r12;
L_8020E664:
    // 0x8020E664: mul.s       $f16, $f2, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8020E668: andi        $t2, $a2, 0xFF
    ctx->r10 = ctx->r6 & 0XFF;
    // 0x8020E66C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8020E670: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E674: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x8020E678: nop

    // 0x8020E67C: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x8020E680: or          $t4, $t2, $t6
    ctx->r12 = ctx->r10 | ctx->r14;
    // 0x8020E684: sh          $t4, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r12;
    // 0x8020E688: beq         $v0, $v1, L_8020F3B4
    if (ctx->r2 == ctx->r3) {
        // 0x8020E68C: sll         $t8, $v1, 1
        ctx->r24 = S32(ctx->r3 << 1);
            goto L_8020F3B4;
    }
L_8020E68C:
    // 0x8020E68C: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x8020E690: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x8020E694: addu        $a1, $a3, $t7
    ctx->r5 = ADD32(ctx->r7, ctx->r15);
    // 0x8020E698: addu        $a0, $t8, $a3
    ctx->r4 = ADD32(ctx->r24, ctx->r7);
    // 0x8020E69C: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x8020E6A0: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8020E6A4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8020E6A8: andi        $t3, $a2, 0xFF00
    ctx->r11 = ctx->r6 & 0XFF00;
    // 0x8020E6AC: sra         $t9, $t3, 8
    ctx->r25 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020E6B0: mtc1        $t9, $f12
    ctx->f12.u32l = ctx->r25;
    // 0x8020E6B4: andi        $t3, $v0, 0xFF00
    ctx->r11 = ctx->r2 & 0XFF00;
    // 0x8020E6B8: sra         $t9, $t3, 8
    ctx->r25 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020E6BC: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E6C0: lhu         $v1, -0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, -0X4);
    // 0x8020E6C4: mul.s       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020E6C8: mtc1        $t9, $f12
    ctx->f12.u32l = ctx->r25;
    // 0x8020E6CC: beq         $a1, $a0, L_8020E79C
    if (ctx->r5 == ctx->r4) {
        // 0x8020E6D0: cvt.s.w     $f18, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = CVT_S_W(ctx->f12.u32l);
            goto L_8020E79C;
    }
    // 0x8020E6D0: cvt.s.w     $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = CVT_S_W(ctx->f12.u32l);
L_8020E6D4:
    // 0x8020E6D4: mul.s       $f14, $f2, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8020E6D8: lhu         $t0, -0x2($a1)
    ctx->r8 = MEM_HU(ctx->r5, -0X2);
    // 0x8020E6DC: andi        $t3, $v1, 0xFF00
    ctx->r11 = ctx->r3 & 0XFF00;
    // 0x8020E6E0: sra         $t9, $t3, 8
    ctx->r25 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020E6E4: mtc1        $t9, $f12
    ctx->f12.u32l = ctx->r25;
    // 0x8020E6E8: andi        $t5, $a2, 0xFF
    ctx->r13 = ctx->r6 & 0XFF;
    // 0x8020E6EC: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E6F0: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x8020E6F4: andi        $t3, $t0, 0xFF00
    ctx->r11 = ctx->r8 & 0XFF00;
    // 0x8020E6F8: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E6FC: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x8020E700: sra         $t9, $t3, 8
    ctx->r25 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020E704: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8020E708: sll         $t8, $t4, 8
    ctx->r24 = S32(ctx->r12 << 8);
    // 0x8020E70C: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E710: mul.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020E714: or          $t7, $t5, $t8
    ctx->r15 = ctx->r13 | ctx->r24;
    // 0x8020E718: sh          $t7, -0x8($a1)
    MEM_H(-0X8, ctx->r5) = ctx->r15;
    // 0x8020E71C: mfc1        $t5, $f14
    ctx->r13 = (int32_t)ctx->f14.u32l;
    // 0x8020E720: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8020E724: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8020E728: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020E72C: sll         $t8, $t5, 8
    ctx->r24 = S32(ctx->r13 << 8);
    // 0x8020E730: or          $t7, $t2, $t8
    ctx->r15 = ctx->r10 | ctx->r24;
    // 0x8020E734: sh          $t7, -0x6($a1)
    MEM_H(-0X6, ctx->r5) = ctx->r15;
    // 0x8020E738: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x8020E73C: trunc.w.s   $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x8020E740: mul.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8020E744: andi        $t3, $a2, 0xFF00
    ctx->r11 = ctx->r6 & 0XFF00;
    // 0x8020E748: sra         $t9, $t3, 8
    ctx->r25 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020E74C: mfc1        $t2, $f12
    ctx->r10 = (int32_t)ctx->f12.u32l;
    // 0x8020E750: mtc1        $t9, $f12
    ctx->f12.u32l = ctx->r25;
    // 0x8020E754: andi        $t4, $t0, 0xFF
    ctx->r12 = ctx->r8 & 0XFF;
    // 0x8020E758: sll         $t8, $t2, 8
    ctx->r24 = S32(ctx->r10 << 8);
    // 0x8020E75C: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E760: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8020E764: sh          $t7, -0x4($a1)
    MEM_H(-0X4, ctx->r5) = ctx->r15;
    // 0x8020E768: andi        $t3, $v0, 0xFF00
    ctx->r11 = ctx->r2 & 0XFF00;
    // 0x8020E76C: sra         $t9, $t3, 8
    ctx->r25 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020E770: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020E774: mul.s       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020E778: mtc1        $t9, $f12
    ctx->f12.u32l = ctx->r25;
    // 0x8020E77C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8020E780: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x8020E784: lhu         $v1, -0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, -0X4);
    // 0x8020E788: cvt.s.w     $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E78C: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x8020E790: or          $t7, $t4, $t8
    ctx->r15 = ctx->r12 | ctx->r24;
    // 0x8020E794: bne         $a1, $a0, L_8020E6D4
    if (ctx->r5 != ctx->r4) {
        // 0x8020E798: sh          $t7, -0xA($a1)
        MEM_H(-0XA, ctx->r5) = ctx->r15;
            goto L_8020E6D4;
    }
    // 0x8020E798: sh          $t7, -0xA($a1)
    MEM_H(-0XA, ctx->r5) = ctx->r15;
L_8020E79C:
    // 0x8020E79C: andi        $t3, $v1, 0xFF00
    ctx->r11 = ctx->r3 & 0XFF00;
    // 0x8020E7A0: sra         $t9, $t3, 8
    ctx->r25 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020E7A4: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E7A8: mtc1        $t9, $f12
    ctx->f12.u32l = ctx->r25;
    // 0x8020E7AC: lhu         $t0, -0x2($a1)
    ctx->r8 = MEM_HU(ctx->r5, -0X2);
    // 0x8020E7B0: mul.s       $f14, $f2, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8020E7B4: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x8020E7B8: andi        $t3, $t0, 0xFF00
    ctx->r11 = ctx->r8 & 0XFF00;
    // 0x8020E7BC: sra         $t9, $t3, 8
    ctx->r25 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020E7C0: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8020E7C4: andi        $t5, $a2, 0xFF
    ctx->r13 = ctx->r6 & 0XFF;
    // 0x8020E7C8: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E7CC: sll         $t8, $t4, 8
    ctx->r24 = S32(ctx->r12 << 8);
    // 0x8020E7D0: or          $t7, $t5, $t8
    ctx->r15 = ctx->r13 | ctx->r24;
    // 0x8020E7D4: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8020E7D8: sh          $t7, -0x8($a1)
    MEM_H(-0X8, ctx->r5) = ctx->r15;
    // 0x8020E7DC: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020E7E0: mul.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020E7E4: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x8020E7E8: andi        $t4, $t0, 0xFF
    ctx->r12 = ctx->r8 & 0XFF;
    // 0x8020E7EC: mul.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8020E7F0: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E7F4: trunc.w.s   $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x8020E7F8: mfc1        $t5, $f14
    ctx->r13 = (int32_t)ctx->f14.u32l;
    // 0x8020E7FC: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020E800: sll         $t8, $t5, 8
    ctx->r24 = S32(ctx->r13 << 8);
    // 0x8020E804: or          $t7, $t2, $t8
    ctx->r15 = ctx->r10 | ctx->r24;
    // 0x8020E808: mfc1        $t2, $f12
    ctx->r10 = (int32_t)ctx->f12.u32l;
    // 0x8020E80C: sh          $t7, -0x6($a1)
    MEM_H(-0X6, ctx->r5) = ctx->r15;
    // 0x8020E810: sll         $t8, $t2, 8
    ctx->r24 = S32(ctx->r10 << 8);
    // 0x8020E814: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8020E818: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x8020E81C: sh          $t7, -0x4($a1)
    MEM_H(-0X4, ctx->r5) = ctx->r15;
    // 0x8020E820: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x8020E824: or          $t7, $t4, $t8
    ctx->r15 = ctx->r12 | ctx->r24;
    // 0x8020E828: sh          $t7, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r15;
    // 0x8020E82C: jr          $ra
    // 0x8020E830: nop

    return;
    // 0x8020E830: nop

L_8020E834:
    // 0x8020E834: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020E838: beq         $a1, $at, L_8020E858
    if (ctx->r5 == ctx->r1) {
        // 0x8020E83C: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8020E858;
    }
    // 0x8020E83C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8020E840: beq         $a1, $at, L_8020EC6C
    if (ctx->r5 == ctx->r1) {
        // 0x8020E844: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8020EC6C;
    }
    // 0x8020E844: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8020E848: beq         $a1, $at, L_8020F008
    if (ctx->r5 == ctx->r1) {
        // 0x8020E84C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8020F008;
    }
    // 0x8020E84C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020E850: jr          $ra
    // 0x8020E854: nop

    return;
    // 0x8020E854: nop

L_8020E858:
    // 0x8020E858: blez        $a2, L_8020F3B4
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8020E85C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8020F3B4;
    }
    // 0x8020E85C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020E860: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x8020E864: beq         $a1, $zero, L_8020E958
    if (ctx->r5 == 0) {
        // 0x8020E868: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8020E958;
    }
    // 0x8020E868: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020E86C: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8020E870: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020E874: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020E878: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020E87C: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8020E880: nop

    // 0x8020E884: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E888: mul.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E88C: beql        $v1, $v0, L_8020E908
    if (ctx->r3 == ctx->r2) {
        // 0x8020E890: trunc.w.s   $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
            goto L_8020E908;
    }
    goto skip_6;
    // 0x8020E890: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    skip_6:
    // 0x8020E894: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
L_8020E898:
    // 0x8020E898: andi        $t9, $a1, 0xF0
    ctx->r25 = ctx->r5 & 0XF0;
    // 0x8020E89C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020E8A0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020E8A4: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E8A8: nop

    // 0x8020E8AC: andi        $t6, $t2, 0xF
    ctx->r14 = ctx->r10 & 0XF;
    // 0x8020E8B0: or          $a1, $t9, $t6
    ctx->r5 = ctx->r25 | ctx->r14;
    // 0x8020E8B4: andi        $t8, $a1, 0xF0
    ctx->r24 = ctx->r5 & 0XF0;
    // 0x8020E8B8: sra         $t7, $t8, 4
    ctx->r15 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020E8BC: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8020E8C0: sb          $a1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r5;
    // 0x8020E8C4: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020E8C8: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E8CC: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020E8D0: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E8D4: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E8D8: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020E8DC: nop

    // 0x8020E8E0: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x8020E8E4: or          $t4, $t3, $t6
    ctx->r12 = ctx->r11 | ctx->r14;
    // 0x8020E8E8: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020E8EC: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8020E8F0: sb          $t4, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r12;
    // 0x8020E8F4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E8F8: mul.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E8FC: bnel        $v1, $v0, L_8020E898
    if (ctx->r3 != ctx->r2) {
        // 0x8020E900: trunc.w.s   $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
            goto L_8020E898;
    }
    goto skip_7;
    // 0x8020E900: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    skip_7:
    // 0x8020E904: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
L_8020E908:
    // 0x8020E908: andi        $t9, $a1, 0xF0
    ctx->r25 = ctx->r5 & 0XF0;
    // 0x8020E90C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020E910: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E914: nop

    // 0x8020E918: andi        $t6, $t2, 0xF
    ctx->r14 = ctx->r10 & 0XF;
    // 0x8020E91C: or          $a1, $t9, $t6
    ctx->r5 = ctx->r25 | ctx->r14;
    // 0x8020E920: andi        $t8, $a1, 0xF0
    ctx->r24 = ctx->r5 & 0XF0;
    // 0x8020E924: sra         $t7, $t8, 4
    ctx->r15 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020E928: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8020E92C: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020E930: sb          $a1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r5;
    // 0x8020E934: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E938: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E93C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E940: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020E944: nop

    // 0x8020E948: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x8020E94C: or          $t4, $t3, $t6
    ctx->r12 = ctx->r11 | ctx->r14;
    // 0x8020E950: sb          $t4, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r12;
    // 0x8020E954: beq         $v0, $a2, L_8020F3B4
    if (ctx->r2 == ctx->r6) {
        // 0x8020E958: addu        $a0, $a3, $v0
        ctx->r4 = ADD32(ctx->r7, ctx->r2);
            goto L_8020F3B4;
    }
L_8020E958:
    // 0x8020E958: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
    // 0x8020E95C: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020E960: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020E964: andi        $t8, $a1, 0xF
    ctx->r24 = ctx->r5 & 0XF;
    // 0x8020E968: mtc1        $t8, $f14
    ctx->f14.u32l = ctx->r24;
    // 0x8020E96C: nop

    // 0x8020E970: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E974: mul.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E978: beql        $v0, $a2, L_8020EB08
    if (ctx->r2 == ctx->r6) {
        // 0x8020E97C: trunc.w.s   $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
            goto L_8020EB08;
    }
    goto skip_8;
    // 0x8020E97C: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    skip_8:
    // 0x8020E980: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
L_8020E984:
    // 0x8020E984: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8020E988: andi        $t7, $a1, 0xF0
    ctx->r15 = ctx->r5 & 0XF0;
    // 0x8020E98C: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020E990: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E994: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020E998: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020E99C: andi        $t9, $t2, 0xF
    ctx->r25 = ctx->r10 & 0XF;
    // 0x8020E9A0: or          $a1, $t7, $t9
    ctx->r5 = ctx->r15 | ctx->r25;
    // 0x8020E9A4: andi        $t6, $a1, 0xF0
    ctx->r14 = ctx->r5 & 0XF0;
    // 0x8020E9A8: sra         $t4, $t6, 4
    ctx->r12 = S32(SIGNED(ctx->r14) >> 4);
    // 0x8020E9AC: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020E9B0: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8020E9B4: andi        $t8, $a1, 0xF
    ctx->r24 = ctx->r5 & 0XF;
    // 0x8020E9B8: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E9BC: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020E9C0: mtc1        $t6, $f14
    ctx->f14.u32l = ctx->r14;
    // 0x8020E9C4: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020E9C8: lbu         $a1, 0x4($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X4);
    // 0x8020E9CC: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E9D0: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E9D4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020E9D8: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E9DC: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E9E0: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E9E4: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020E9E8: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020E9EC: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x8020E9F0: or          $t3, $t8, $t9
    ctx->r11 = ctx->r24 | ctx->r25;
    // 0x8020E9F4: sb          $t3, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r11;
    // 0x8020E9F8: andi        $t7, $t2, 0xF
    ctx->r15 = ctx->r10 & 0XF;
    // 0x8020E9FC: or          $v1, $t4, $t7
    ctx->r3 = ctx->r12 | ctx->r15;
    // 0x8020EA00: andi        $t9, $v1, 0xF0
    ctx->r25 = ctx->r3 & 0XF0;
    // 0x8020EA04: sra         $t3, $t9, 4
    ctx->r11 = S32(SIGNED(ctx->r25) >> 4);
    // 0x8020EA08: mtc1        $t3, $f14
    ctx->f14.u32l = ctx->r11;
    // 0x8020EA0C: sb          $v1, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r3;
    // 0x8020EA10: andi        $t9, $t0, 0xF
    ctx->r25 = ctx->r8 & 0XF;
    // 0x8020EA14: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020EA18: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8020EA1C: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020EA20: andi        $t3, $t0, 0xF0
    ctx->r11 = ctx->r8 & 0XF0;
    // 0x8020EA24: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020EA28: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020EA2C: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020EA30: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020EA34: mfc1        $t4, $f14
    ctx->r12 = (int32_t)ctx->f14.u32l;
    // 0x8020EA38: nop

    // 0x8020EA3C: sll         $t7, $t4, 4
    ctx->r15 = S32(ctx->r12 << 4);
    // 0x8020EA40: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020EA44: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8020EA48: sb          $t8, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r24;
    // 0x8020EA4C: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020EA50: nop

    // 0x8020EA54: andi        $t4, $t2, 0xF
    ctx->r12 = ctx->r10 & 0XF;
    // 0x8020EA58: or          $t0, $t3, $t4
    ctx->r8 = ctx->r11 | ctx->r12;
    // 0x8020EA5C: andi        $t7, $t0, 0xF0
    ctx->r15 = ctx->r8 & 0XF0;
    // 0x8020EA60: sra         $t8, $t7, 4
    ctx->r24 = S32(SIGNED(ctx->r15) >> 4);
    // 0x8020EA64: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8020EA68: andi        $t7, $t1, 0xF
    ctx->r15 = ctx->r9 & 0XF;
    // 0x8020EA6C: mtc1        $t7, $f14
    ctx->f14.u32l = ctx->r15;
    // 0x8020EA70: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020EA74: sb          $t0, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r8;
    // 0x8020EA78: andi        $t9, $t0, 0xF
    ctx->r25 = ctx->r8 & 0XF;
    // 0x8020EA7C: andi        $t8, $t1, 0xF0
    ctx->r24 = ctx->r9 & 0XF0;
    // 0x8020EA80: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020EA84: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020EA88: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020EA8C: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020EA90: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8020EA94: nop

    // 0x8020EA98: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x8020EA9C: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020EAA0: or          $t6, $t9, $t4
    ctx->r14 = ctx->r25 | ctx->r12;
    // 0x8020EAA4: sb          $t6, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r14;
    // 0x8020EAA8: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020EAAC: nop

    // 0x8020EAB0: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x8020EAB4: or          $t1, $t8, $t3
    ctx->r9 = ctx->r24 | ctx->r11;
    // 0x8020EAB8: andi        $t4, $t1, 0xF0
    ctx->r12 = ctx->r9 & 0XF0;
    // 0x8020EABC: sra         $t6, $t4, 4
    ctx->r14 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020EAC0: mtc1        $t6, $f14
    ctx->f14.u32l = ctx->r14;
    // 0x8020EAC4: andi        $t7, $t1, 0xF
    ctx->r15 = ctx->r9 & 0XF;
    // 0x8020EAC8: sb          $t1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r9;
    // 0x8020EACC: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020EAD0: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020EAD4: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020EAD8: mfc1        $t8, $f14
    ctx->r24 = (int32_t)ctx->f14.u32l;
    // 0x8020EADC: nop

    // 0x8020EAE0: sll         $t3, $t8, 4
    ctx->r11 = S32(ctx->r24 << 4);
    // 0x8020EAE4: andi        $t8, $a1, 0xF
    ctx->r24 = ctx->r5 & 0XF;
    // 0x8020EAE8: mtc1        $t8, $f14
    ctx->f14.u32l = ctx->r24;
    // 0x8020EAEC: or          $t9, $t7, $t3
    ctx->r25 = ctx->r15 | ctx->r11;
    // 0x8020EAF0: sb          $t9, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r25;
    // 0x8020EAF4: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020EAF8: mul.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020EAFC: bnel        $v0, $a2, L_8020E984
    if (ctx->r2 != ctx->r6) {
        // 0x8020EB00: trunc.w.s   $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
            goto L_8020E984;
    }
    goto skip_9;
    // 0x8020EB00: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    skip_9:
    // 0x8020EB04: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
L_8020EB08:
    // 0x8020EB08: andi        $t7, $a1, 0xF0
    ctx->r15 = ctx->r5 & 0XF0;
    // 0x8020EB0C: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8020EB10: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020EB14: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020EB18: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020EB1C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020EB20: andi        $t9, $t2, 0xF
    ctx->r25 = ctx->r10 & 0XF;
    // 0x8020EB24: or          $a1, $t7, $t9
    ctx->r5 = ctx->r15 | ctx->r25;
    // 0x8020EB28: andi        $t6, $a1, 0xF0
    ctx->r14 = ctx->r5 & 0XF0;
    // 0x8020EB2C: sra         $t4, $t6, 4
    ctx->r12 = S32(SIGNED(ctx->r14) >> 4);
    // 0x8020EB30: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020EB34: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020EB38: mtc1        $t6, $f14
    ctx->f14.u32l = ctx->r14;
    // 0x8020EB3C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020EB40: andi        $t8, $a1, 0xF
    ctx->r24 = ctx->r5 & 0XF;
    // 0x8020EB44: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020EB48: sb          $a1, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r5;
    // 0x8020EB4C: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020EB50: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020EB54: nop

    // 0x8020EB58: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020EB5C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020EB60: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020EB64: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020EB68: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020EB6C: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x8020EB70: or          $t3, $t8, $t9
    ctx->r11 = ctx->r24 | ctx->r25;
    // 0x8020EB74: andi        $t7, $t2, 0xF
    ctx->r15 = ctx->r10 & 0XF;
    // 0x8020EB78: or          $v1, $t4, $t7
    ctx->r3 = ctx->r12 | ctx->r15;
    // 0x8020EB7C: andi        $t9, $v1, 0xF0
    ctx->r25 = ctx->r3 & 0XF0;
    // 0x8020EB80: sb          $t3, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r11;
    // 0x8020EB84: sra         $t3, $t9, 4
    ctx->r11 = S32(SIGNED(ctx->r25) >> 4);
    // 0x8020EB88: mtc1        $t3, $f14
    ctx->f14.u32l = ctx->r11;
    // 0x8020EB8C: andi        $t9, $t0, 0xF
    ctx->r25 = ctx->r8 & 0XF;
    // 0x8020EB90: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8020EB94: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020EB98: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020EB9C: andi        $t3, $t0, 0xF0
    ctx->r11 = ctx->r8 & 0XF0;
    // 0x8020EBA0: sb          $v1, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r3;
    // 0x8020EBA4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020EBA8: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020EBAC: nop

    // 0x8020EBB0: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020EBB4: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020EBB8: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020EBBC: mfc1        $t4, $f14
    ctx->r12 = (int32_t)ctx->f14.u32l;
    // 0x8020EBC0: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020EBC4: sll         $t7, $t4, 4
    ctx->r15 = S32(ctx->r12 << 4);
    // 0x8020EBC8: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8020EBCC: andi        $t4, $t2, 0xF
    ctx->r12 = ctx->r10 & 0XF;
    // 0x8020EBD0: or          $t0, $t3, $t4
    ctx->r8 = ctx->r11 | ctx->r12;
    // 0x8020EBD4: andi        $t7, $t0, 0xF0
    ctx->r15 = ctx->r8 & 0XF0;
    // 0x8020EBD8: sb          $t8, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r24;
    // 0x8020EBDC: sra         $t8, $t7, 4
    ctx->r24 = S32(SIGNED(ctx->r15) >> 4);
    // 0x8020EBE0: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8020EBE4: andi        $t7, $t1, 0xF
    ctx->r15 = ctx->r9 & 0XF;
    // 0x8020EBE8: mtc1        $t7, $f14
    ctx->f14.u32l = ctx->r15;
    // 0x8020EBEC: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020EBF0: andi        $t9, $t0, 0xF
    ctx->r25 = ctx->r8 & 0XF;
    // 0x8020EBF4: andi        $t8, $t1, 0xF0
    ctx->r24 = ctx->r9 & 0XF0;
    // 0x8020EBF8: sb          $t0, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r8;
    // 0x8020EBFC: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020EC00: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020EC04: nop

    // 0x8020EC08: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020EC0C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020EC10: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020EC14: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8020EC18: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020EC1C: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x8020EC20: or          $t6, $t9, $t4
    ctx->r14 = ctx->r25 | ctx->r12;
    // 0x8020EC24: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x8020EC28: or          $t1, $t8, $t3
    ctx->r9 = ctx->r24 | ctx->r11;
    // 0x8020EC2C: andi        $t4, $t1, 0xF0
    ctx->r12 = ctx->r9 & 0XF0;
    // 0x8020EC30: sb          $t6, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r14;
    // 0x8020EC34: sra         $t6, $t4, 4
    ctx->r14 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020EC38: mtc1        $t6, $f14
    ctx->f14.u32l = ctx->r14;
    // 0x8020EC3C: andi        $t7, $t1, 0xF
    ctx->r15 = ctx->r9 & 0XF;
    // 0x8020EC40: sb          $t1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r9;
    // 0x8020EC44: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020EC48: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020EC4C: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020EC50: mfc1        $t8, $f14
    ctx->r24 = (int32_t)ctx->f14.u32l;
    // 0x8020EC54: nop

    // 0x8020EC58: sll         $t3, $t8, 4
    ctx->r11 = S32(ctx->r24 << 4);
    // 0x8020EC5C: or          $t9, $t7, $t3
    ctx->r25 = ctx->r15 | ctx->r11;
    // 0x8020EC60: sb          $t9, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r25;
    // 0x8020EC64: jr          $ra
    // 0x8020EC68: nop

    return;
    // 0x8020EC68: nop

L_8020EC6C:
    // 0x8020EC6C: blez        $a2, L_8020F3B4
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8020EC70: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8020F3B4;
    }
    // 0x8020EC70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020EC74: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x8020EC78: beq         $a1, $zero, L_8020ED40
    if (ctx->r5 == 0) {
        // 0x8020EC7C: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8020ED40;
    }
    // 0x8020EC7C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020EC80: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
L_8020EC84:
    // 0x8020EC84: lbu         $t4, 0x0($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X0);
    // 0x8020EC88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020EC8C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020EC90: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x8020EC94: bgez        $t4, L_8020ECA8
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8020EC98: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020ECA8;
    }
    // 0x8020EC98: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020EC9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020ECA0: nop

    // 0x8020ECA4: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020ECA8:
    // 0x8020ECA8: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020ECAC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020ECB0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020ECB4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020ECB8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020ECBC: nop

    // 0x8020ECC0: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020ECC4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020ECC8: nop

    // 0x8020ECCC: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020ECD0: beql        $t5, $zero, L_8020ED20
    if (ctx->r13 == 0) {
        // 0x8020ECD4: mfc1        $t5, $f8
        ctx->r13 = (int32_t)ctx->f8.u32l;
            goto L_8020ED20;
    }
    goto skip_10;
    // 0x8020ECD4: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    skip_10:
    // 0x8020ECD8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020ECDC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020ECE0: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020ECE4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020ECE8: nop

    // 0x8020ECEC: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020ECF0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020ECF4: nop

    // 0x8020ECF8: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020ECFC: bne         $t5, $zero, L_8020ED14
    if (ctx->r13 != 0) {
        // 0x8020ED00: nop
    
            goto L_8020ED14;
    }
    // 0x8020ED00: nop

    // 0x8020ED04: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8020ED08: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020ED0C: b           L_8020ED2C
    // 0x8020ED10: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8020ED2C;
    // 0x8020ED10: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8020ED14:
    // 0x8020ED14: b           L_8020ED2C
    // 0x8020ED18: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8020ED2C;
    // 0x8020ED18: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8020ED1C: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
L_8020ED20:
    // 0x8020ED20: nop

    // 0x8020ED24: bltz        $t5, L_8020ED14
    if (SIGNED(ctx->r13) < 0) {
        // 0x8020ED28: nop
    
            goto L_8020ED14;
    }
    // 0x8020ED28: nop

L_8020ED2C:
    // 0x8020ED2C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020ED30: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
    // 0x8020ED34: bne         $v1, $v0, L_8020EC84
    if (ctx->r3 != ctx->r2) {
        // 0x8020ED38: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8020EC84;
    }
    // 0x8020ED38: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020ED3C: beq         $v0, $a2, L_8020F3B4
    if (ctx->r2 == ctx->r6) {
        // 0x8020ED40: addu        $a0, $a3, $v0
        ctx->r4 = ADD32(ctx->r7, ctx->r2);
            goto L_8020F3B4;
    }
L_8020ED40:
    // 0x8020ED40: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
L_8020ED44:
    // 0x8020ED44: lbu         $t2, 0x0($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X0);
    // 0x8020ED48: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020ED4C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020ED50: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8020ED54: bgez        $t2, L_8020ED68
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8020ED58: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020ED68;
    }
    // 0x8020ED58: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020ED5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020ED60: nop

    // 0x8020ED64: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020ED68:
    // 0x8020ED68: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020ED6C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020ED70: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020ED74: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020ED78: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020ED7C: nop

    // 0x8020ED80: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020ED84: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020ED88: nop

    // 0x8020ED8C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020ED90: beql        $t7, $zero, L_8020EDE0
    if (ctx->r15 == 0) {
        // 0x8020ED94: mfc1        $t7, $f8
        ctx->r15 = (int32_t)ctx->f8.u32l;
            goto L_8020EDE0;
    }
    goto skip_11;
    // 0x8020ED94: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    skip_11:
    // 0x8020ED98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020ED9C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020EDA0: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020EDA4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020EDA8: nop

    // 0x8020EDAC: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020EDB0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020EDB4: nop

    // 0x8020EDB8: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020EDBC: bne         $t7, $zero, L_8020EDD4
    if (ctx->r15 != 0) {
        // 0x8020EDC0: nop
    
            goto L_8020EDD4;
    }
    // 0x8020EDC0: nop

    // 0x8020EDC4: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8020EDC8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020EDCC: b           L_8020EDEC
    // 0x8020EDD0: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8020EDEC;
    // 0x8020EDD0: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8020EDD4:
    // 0x8020EDD4: b           L_8020EDEC
    // 0x8020EDD8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8020EDEC;
    // 0x8020EDD8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8020EDDC: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
L_8020EDE0:
    // 0x8020EDE0: nop

    // 0x8020EDE4: bltz        $t7, L_8020EDD4
    if (SIGNED(ctx->r15) < 0) {
        // 0x8020EDE8: nop
    
            goto L_8020EDD4;
    }
    // 0x8020EDE8: nop

L_8020EDEC:
    // 0x8020EDEC: lbu         $t3, 0x1($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X1);
    // 0x8020EDF0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020EDF4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020EDF8: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x8020EDFC: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    // 0x8020EE00: bgez        $t3, L_8020EE14
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8020EE04: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020EE14;
    }
    // 0x8020EE04: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020EE08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020EE0C: nop

    // 0x8020EE10: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020EE14:
    // 0x8020EE14: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020EE18: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020EE1C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020EE20: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020EE24: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020EE28: nop

    // 0x8020EE2C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020EE30: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020EE34: nop

    // 0x8020EE38: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020EE3C: beql        $t4, $zero, L_8020EE8C
    if (ctx->r12 == 0) {
        // 0x8020EE40: mfc1        $t4, $f8
        ctx->r12 = (int32_t)ctx->f8.u32l;
            goto L_8020EE8C;
    }
    goto skip_12;
    // 0x8020EE40: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    skip_12:
    // 0x8020EE44: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020EE48: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020EE4C: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020EE50: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020EE54: nop

    // 0x8020EE58: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020EE5C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020EE60: nop

    // 0x8020EE64: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020EE68: bne         $t4, $zero, L_8020EE80
    if (ctx->r12 != 0) {
        // 0x8020EE6C: nop
    
            goto L_8020EE80;
    }
    // 0x8020EE6C: nop

    // 0x8020EE70: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x8020EE74: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020EE78: b           L_8020EE98
    // 0x8020EE7C: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_8020EE98;
    // 0x8020EE7C: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_8020EE80:
    // 0x8020EE80: b           L_8020EE98
    // 0x8020EE84: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_8020EE98;
    // 0x8020EE84: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8020EE88: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
L_8020EE8C:
    // 0x8020EE8C: nop

    // 0x8020EE90: bltz        $t4, L_8020EE80
    if (SIGNED(ctx->r12) < 0) {
        // 0x8020EE94: nop
    
            goto L_8020EE80;
    }
    // 0x8020EE94: nop

L_8020EE98:
    // 0x8020EE98: lbu         $t6, 0x2($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X2);
    // 0x8020EE9C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020EEA0: sb          $t4, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r12;
    // 0x8020EEA4: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8020EEA8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020EEAC: bgez        $t6, L_8020EEC0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8020EEB0: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020EEC0;
    }
    // 0x8020EEB0: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020EEB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020EEB8: nop

    // 0x8020EEBC: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020EEC0:
    // 0x8020EEC0: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020EEC4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020EEC8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020EECC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020EED0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020EED4: nop

    // 0x8020EED8: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020EEDC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020EEE0: nop

    // 0x8020EEE4: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8020EEE8: beql        $t2, $zero, L_8020EF38
    if (ctx->r10 == 0) {
        // 0x8020EEEC: mfc1        $t2, $f8
        ctx->r10 = (int32_t)ctx->f8.u32l;
            goto L_8020EF38;
    }
    goto skip_13;
    // 0x8020EEEC: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    skip_13:
    // 0x8020EEF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020EEF4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020EEF8: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020EEFC: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020EF00: nop

    // 0x8020EF04: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020EF08: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020EF0C: nop

    // 0x8020EF10: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8020EF14: bne         $t2, $zero, L_8020EF2C
    if (ctx->r10 != 0) {
        // 0x8020EF18: nop
    
            goto L_8020EF2C;
    }
    // 0x8020EF18: nop

    // 0x8020EF1C: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x8020EF20: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020EF24: b           L_8020EF44
    // 0x8020EF28: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_8020EF44;
    // 0x8020EF28: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_8020EF2C:
    // 0x8020EF2C: b           L_8020EF44
    // 0x8020EF30: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_8020EF44;
    // 0x8020EF30: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8020EF34: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
L_8020EF38:
    // 0x8020EF38: nop

    // 0x8020EF3C: bltz        $t2, L_8020EF2C
    if (SIGNED(ctx->r10) < 0) {
        // 0x8020EF40: nop
    
            goto L_8020EF2C;
    }
    // 0x8020EF40: nop

L_8020EF44:
    // 0x8020EF44: lbu         $t8, 0x3($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X3);
    // 0x8020EF48: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020EF4C: sb          $t2, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r10;
    // 0x8020EF50: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8020EF54: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020EF58: bgez        $t8, L_8020EF6C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8020EF5C: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020EF6C;
    }
    // 0x8020EF5C: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020EF60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020EF64: nop

    // 0x8020EF68: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020EF6C:
    // 0x8020EF6C: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020EF70: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020EF74: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020EF78: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020EF7C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020EF80: nop

    // 0x8020EF84: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020EF88: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020EF8C: nop

    // 0x8020EF90: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8020EF94: beql        $t3, $zero, L_8020EFE4
    if (ctx->r11 == 0) {
        // 0x8020EF98: mfc1        $t3, $f8
        ctx->r11 = (int32_t)ctx->f8.u32l;
            goto L_8020EFE4;
    }
    goto skip_14;
    // 0x8020EF98: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    skip_14:
    // 0x8020EF9C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020EFA0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020EFA4: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020EFA8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020EFAC: nop

    // 0x8020EFB0: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020EFB4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020EFB8: nop

    // 0x8020EFBC: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8020EFC0: bne         $t3, $zero, L_8020EFD8
    if (ctx->r11 != 0) {
        // 0x8020EFC4: nop
    
            goto L_8020EFD8;
    }
    // 0x8020EFC4: nop

    // 0x8020EFC8: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x8020EFCC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020EFD0: b           L_8020EFF0
    // 0x8020EFD4: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_8020EFF0;
    // 0x8020EFD4: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_8020EFD8:
    // 0x8020EFD8: b           L_8020EFF0
    // 0x8020EFDC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_8020EFF0;
    // 0x8020EFDC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8020EFE0: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
L_8020EFE4:
    // 0x8020EFE4: nop

    // 0x8020EFE8: bltz        $t3, L_8020EFD8
    if (SIGNED(ctx->r11) < 0) {
        // 0x8020EFEC: nop
    
            goto L_8020EFD8;
    }
    // 0x8020EFEC: nop

L_8020EFF0:
    // 0x8020EFF0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020EFF4: sb          $t3, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r11;
    // 0x8020EFF8: bne         $v0, $a2, L_8020ED44
    if (ctx->r2 != ctx->r6) {
        // 0x8020EFFC: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_8020ED44;
    }
    // 0x8020EFFC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020F000: jr          $ra
    // 0x8020F004: nop

    return;
    // 0x8020F004: nop

L_8020F008:
    // 0x8020F008: bgez        $a2, L_8020F018
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8020F00C: sra         $v1, $a2, 1
        ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
            goto L_8020F018;
    }
    // 0x8020F00C: sra         $v1, $a2, 1
    ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8020F010: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x8020F014: sra         $v1, $at, 1
    ctx->r3 = S32(SIGNED(ctx->r1) >> 1);
L_8020F018:
    // 0x8020F018: blez        $v1, L_8020F3B4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8020F01C: andi        $a2, $v1, 0x3
        ctx->r6 = ctx->r3 & 0X3;
            goto L_8020F3B4;
    }
    // 0x8020F01C: andi        $a2, $v1, 0x3
    ctx->r6 = ctx->r3 & 0X3;
    // 0x8020F020: beq         $a2, $zero, L_8020F0EC
    if (ctx->r6 == 0) {
        // 0x8020F024: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8020F0EC;
    }
    // 0x8020F024: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8020F028: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x8020F02C: addu        $a1, $a3, $t9
    ctx->r5 = ADD32(ctx->r7, ctx->r25);
L_8020F030:
    // 0x8020F030: lhu         $t4, 0x0($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X0);
    // 0x8020F034: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020F038: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020F03C: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x8020F040: bgez        $t4, L_8020F054
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8020F044: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020F054;
    }
    // 0x8020F044: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020F048: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020F04C: nop

    // 0x8020F050: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020F054:
    // 0x8020F054: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020F058: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020F05C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020F060: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020F064: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020F068: nop

    // 0x8020F06C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020F070: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020F074: nop

    // 0x8020F078: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020F07C: beql        $t5, $zero, L_8020F0CC
    if (ctx->r13 == 0) {
        // 0x8020F080: mfc1        $t5, $f8
        ctx->r13 = (int32_t)ctx->f8.u32l;
            goto L_8020F0CC;
    }
    goto skip_15;
    // 0x8020F080: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    skip_15:
    // 0x8020F084: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020F088: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020F08C: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020F090: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020F094: nop

    // 0x8020F098: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020F09C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020F0A0: nop

    // 0x8020F0A4: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020F0A8: bne         $t5, $zero, L_8020F0C0
    if (ctx->r13 != 0) {
        // 0x8020F0AC: nop
    
            goto L_8020F0C0;
    }
    // 0x8020F0AC: nop

    // 0x8020F0B0: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8020F0B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020F0B8: b           L_8020F0D8
    // 0x8020F0BC: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8020F0D8;
    // 0x8020F0BC: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8020F0C0:
    // 0x8020F0C0: b           L_8020F0D8
    // 0x8020F0C4: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8020F0D8;
    // 0x8020F0C4: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8020F0C8: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
L_8020F0CC:
    // 0x8020F0CC: nop

    // 0x8020F0D0: bltz        $t5, L_8020F0C0
    if (SIGNED(ctx->r13) < 0) {
        // 0x8020F0D4: nop
    
            goto L_8020F0C0;
    }
    // 0x8020F0D4: nop

L_8020F0D8:
    // 0x8020F0D8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020F0DC: sh          $t5, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r13;
    // 0x8020F0E0: bne         $a0, $v0, L_8020F030
    if (ctx->r4 != ctx->r2) {
        // 0x8020F0E4: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_8020F030;
    }
    // 0x8020F0E4: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8020F0E8: beq         $v0, $v1, L_8020F3B4
    if (ctx->r2 == ctx->r3) {
        // 0x8020F0EC: sll         $t2, $v1, 1
        ctx->r10 = S32(ctx->r3 << 1);
            goto L_8020F3B4;
    }
L_8020F0EC:
    // 0x8020F0EC: sll         $t2, $v1, 1
    ctx->r10 = S32(ctx->r3 << 1);
    // 0x8020F0F0: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x8020F0F4: addu        $a1, $a3, $t8
    ctx->r5 = ADD32(ctx->r7, ctx->r24);
    // 0x8020F0F8: addu        $a0, $t2, $a3
    ctx->r4 = ADD32(ctx->r10, ctx->r7);
L_8020F0FC:
    // 0x8020F0FC: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x8020F100: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020F104: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8020F108: bgez        $t7, L_8020F11C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8020F10C: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020F11C;
    }
    // 0x8020F10C: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020F110: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020F114: nop

    // 0x8020F118: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020F11C:
    // 0x8020F11C: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020F120: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020F124: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020F128: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020F12C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020F130: nop

    // 0x8020F134: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020F138: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020F13C: nop

    // 0x8020F140: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020F144: beql        $t9, $zero, L_8020F194
    if (ctx->r25 == 0) {
        // 0x8020F148: mfc1        $t9, $f8
        ctx->r25 = (int32_t)ctx->f8.u32l;
            goto L_8020F194;
    }
    goto skip_16;
    // 0x8020F148: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    skip_16:
    // 0x8020F14C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020F150: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020F154: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020F158: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020F15C: nop

    // 0x8020F160: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020F164: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020F168: nop

    // 0x8020F16C: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020F170: bne         $t9, $zero, L_8020F188
    if (ctx->r25 != 0) {
        // 0x8020F174: nop
    
            goto L_8020F188;
    }
    // 0x8020F174: nop

    // 0x8020F178: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x8020F17C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020F180: b           L_8020F1A0
    // 0x8020F184: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8020F1A0;
    // 0x8020F184: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8020F188:
    // 0x8020F188: b           L_8020F1A0
    // 0x8020F18C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8020F1A0;
    // 0x8020F18C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8020F190: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
L_8020F194:
    // 0x8020F194: nop

    // 0x8020F198: bltz        $t9, L_8020F188
    if (SIGNED(ctx->r25) < 0) {
        // 0x8020F19C: nop
    
            goto L_8020F188;
    }
    // 0x8020F19C: nop

L_8020F1A0:
    // 0x8020F1A0: lhu         $t4, 0x2($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X2);
    // 0x8020F1A4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020F1A8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020F1AC: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x8020F1B0: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
    // 0x8020F1B4: bgez        $t4, L_8020F1C8
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8020F1B8: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020F1C8;
    }
    // 0x8020F1B8: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020F1BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020F1C0: nop

    // 0x8020F1C4: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020F1C8:
    // 0x8020F1C8: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020F1CC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020F1D0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020F1D4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020F1D8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020F1DC: nop

    // 0x8020F1E0: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020F1E4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020F1E8: nop

    // 0x8020F1EC: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020F1F0: beql        $t5, $zero, L_8020F240
    if (ctx->r13 == 0) {
        // 0x8020F1F4: mfc1        $t5, $f8
        ctx->r13 = (int32_t)ctx->f8.u32l;
            goto L_8020F240;
    }
    goto skip_17;
    // 0x8020F1F4: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    skip_17:
    // 0x8020F1F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020F1FC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020F200: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020F204: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020F208: nop

    // 0x8020F20C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020F210: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020F214: nop

    // 0x8020F218: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020F21C: bne         $t5, $zero, L_8020F234
    if (ctx->r13 != 0) {
        // 0x8020F220: nop
    
            goto L_8020F234;
    }
    // 0x8020F220: nop

    // 0x8020F224: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8020F228: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020F22C: b           L_8020F24C
    // 0x8020F230: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8020F24C;
    // 0x8020F230: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8020F234:
    // 0x8020F234: b           L_8020F24C
    // 0x8020F238: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8020F24C;
    // 0x8020F238: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8020F23C: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
L_8020F240:
    // 0x8020F240: nop

    // 0x8020F244: bltz        $t5, L_8020F234
    if (SIGNED(ctx->r13) < 0) {
        // 0x8020F248: nop
    
            goto L_8020F234;
    }
    // 0x8020F248: nop

L_8020F24C:
    // 0x8020F24C: lhu         $t2, 0x4($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X4);
    // 0x8020F250: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020F254: sh          $t5, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r13;
    // 0x8020F258: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8020F25C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020F260: bgez        $t2, L_8020F274
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8020F264: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020F274;
    }
    // 0x8020F264: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020F268: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020F26C: nop

    // 0x8020F270: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020F274:
    // 0x8020F274: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020F278: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020F27C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020F280: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020F284: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020F288: nop

    // 0x8020F28C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020F290: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020F294: nop

    // 0x8020F298: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020F29C: beql        $t7, $zero, L_8020F2EC
    if (ctx->r15 == 0) {
        // 0x8020F2A0: mfc1        $t7, $f8
        ctx->r15 = (int32_t)ctx->f8.u32l;
            goto L_8020F2EC;
    }
    goto skip_18;
    // 0x8020F2A0: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    skip_18:
    // 0x8020F2A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020F2A8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020F2AC: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020F2B0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020F2B4: nop

    // 0x8020F2B8: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020F2BC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020F2C0: nop

    // 0x8020F2C4: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020F2C8: bne         $t7, $zero, L_8020F2E0
    if (ctx->r15 != 0) {
        // 0x8020F2CC: nop
    
            goto L_8020F2E0;
    }
    // 0x8020F2CC: nop

    // 0x8020F2D0: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8020F2D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020F2D8: b           L_8020F2F8
    // 0x8020F2DC: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8020F2F8;
    // 0x8020F2DC: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8020F2E0:
    // 0x8020F2E0: b           L_8020F2F8
    // 0x8020F2E4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8020F2F8;
    // 0x8020F2E4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8020F2E8: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
L_8020F2EC:
    // 0x8020F2EC: nop

    // 0x8020F2F0: bltz        $t7, L_8020F2E0
    if (SIGNED(ctx->r15) < 0) {
        // 0x8020F2F4: nop
    
            goto L_8020F2E0;
    }
    // 0x8020F2F4: nop

L_8020F2F8:
    // 0x8020F2F8: lhu         $t3, 0x6($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X6);
    // 0x8020F2FC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020F300: sh          $t7, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r15;
    // 0x8020F304: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x8020F308: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020F30C: bgez        $t3, L_8020F320
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8020F310: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020F320;
    }
    // 0x8020F310: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020F314: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020F318: nop

    // 0x8020F31C: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020F320:
    // 0x8020F320: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020F324: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020F328: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020F32C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020F330: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020F334: nop

    // 0x8020F338: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020F33C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020F340: nop

    // 0x8020F344: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020F348: beql        $t4, $zero, L_8020F398
    if (ctx->r12 == 0) {
        // 0x8020F34C: mfc1        $t4, $f8
        ctx->r12 = (int32_t)ctx->f8.u32l;
            goto L_8020F398;
    }
    goto skip_19;
    // 0x8020F34C: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    skip_19:
    // 0x8020F350: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020F354: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020F358: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020F35C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020F360: nop

    // 0x8020F364: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020F368: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020F36C: nop

    // 0x8020F370: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020F374: bne         $t4, $zero, L_8020F38C
    if (ctx->r12 != 0) {
        // 0x8020F378: nop
    
            goto L_8020F38C;
    }
    // 0x8020F378: nop

    // 0x8020F37C: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x8020F380: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020F384: b           L_8020F3A4
    // 0x8020F388: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_8020F3A4;
    // 0x8020F388: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_8020F38C:
    // 0x8020F38C: b           L_8020F3A4
    // 0x8020F390: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_8020F3A4;
    // 0x8020F390: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8020F394: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
L_8020F398:
    // 0x8020F398: nop

    // 0x8020F39C: bltz        $t4, L_8020F38C
    if (SIGNED(ctx->r12) < 0) {
        // 0x8020F3A0: nop
    
            goto L_8020F38C;
    }
    // 0x8020F3A0: nop

L_8020F3A4:
    // 0x8020F3A4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020F3A8: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8020F3AC: bne         $a1, $a0, L_8020F0FC
    if (ctx->r5 != ctx->r4) {
        // 0x8020F3B0: sh          $t4, -0x2($a1)
        MEM_H(-0X2, ctx->r5) = ctx->r12;
            goto L_8020F0FC;
    }
    // 0x8020F3B0: sh          $t4, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r12;
L_8020F3B4:
    // 0x8020F3B4: jr          $ra
    // 0x8020F3B8: nop

    return;
    // 0x8020F3B8: nop

;}
RECOMP_FUNC void func_802245B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802245B8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802245BC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802245C0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802245C4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802245C8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802245CC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802245D0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802245D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802245D8: jal         0x80223840
    // 0x802245DC: lw          $a0, 0x5208($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5208);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x802245DC: lw          $a0, 0x5208($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5208);
    after_0:
    // 0x802245E0: addiu       $s3, $sp, 0x34
    ctx->r19 = ADD32(ctx->r29, 0X34);
    // 0x802245E4: addiu       $s4, $sp, 0x30
    ctx->r20 = ADD32(ctx->r29, 0X30);
    // 0x802245E8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x802245EC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x802245F0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802245F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802245F8: jal         0x8022393C
    // 0x802245FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8022393C(rdram, ctx);
        goto after_1;
    // 0x802245FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x80224600: beq         $v0, $zero, L_80224644
    if (ctx->r2 == 0) {
        // 0x80224604: lui         $s1, 0x8027
        ctx->r17 = S32(0X8027 << 16);
            goto L_80224644;
    }
    // 0x80224604: lui         $s1, 0x8027
    ctx->r17 = S32(0X8027 << 16);
    // 0x80224608: lui         $s0, 0x434F
    ctx->r16 = S32(0X434F << 16);
    // 0x8022460C: ori         $s0, $s0, 0x4D4D
    ctx->r16 = ctx->r16 | 0X4D4D;
    // 0x80224610: addiu       $s1, $s1, 0x51E8
    ctx->r17 = ADD32(ctx->r17, 0X51E8);
L_80224614:
    // 0x80224614: bne         $v0, $s0, L_80224628
    if (ctx->r2 != ctx->r16) {
        // 0x80224618: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80224628;
    }
    // 0x80224618: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8022461C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80224620: jal         0x8022B460
    // 0x80224624: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_8022B460(rdram, ctx);
        goto after_2;
    // 0x80224624: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_2:
L_80224628:
    // 0x80224628: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8022462C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80224630: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80224634: jal         0x8022393C
    // 0x80224638: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8022393C(rdram, ctx);
        goto after_3;
    // 0x80224638: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x8022463C: bne         $v0, $zero, L_80224614
    if (ctx->r2 != 0) {
        // 0x80224640: nop
    
            goto L_80224614;
    }
    // 0x80224640: nop

L_80224644:
    // 0x80224644: jal         0x802238F0
    // 0x80224648: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_802238F0(rdram, ctx);
        goto after_4;
    // 0x80224648: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x8022464C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80224650: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80224654: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80224658: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022465C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80224660: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80224664: jr          $ra
    // 0x80224668: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80224668: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802057A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802057A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802057A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802057A8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802057AC: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x802057B0: jal         0x80237F60
    // 0x802057B4: lw          $a0, -0x1A50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A50);
    func_80237F60(rdram, ctx);
        goto after_0;
    // 0x802057B4: lw          $a0, -0x1A50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A50);
    after_0:
    // 0x802057B8: beq         $v0, $zero, L_802057EC
    if (ctx->r2 == 0) {
        // 0x802057BC: lwc1        $f4, 0x18($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
            goto L_802057EC;
    }
    // 0x802057BC: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802057C0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802057C4: lwc1        $f6, 0x2980($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2980);
    // 0x802057C8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802057CC: lw          $a0, -0x1A50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A50);
    // 0x802057D0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802057D4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802057D8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802057DC: nop

    // 0x802057E0: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x802057E4: jal         0x80238B10
    // 0x802057E8: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    func_80238B10(rdram, ctx);
        goto after_1;
    // 0x802057E8: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    after_1:
L_802057EC:
    // 0x802057EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802057F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802057F4: jr          $ra
    // 0x802057F8: nop

    return;
    // 0x802057F8: nop

;}
RECOMP_FUNC void func_80217940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80217940: addiu       $sp, $sp, -0x180
    ctx->r29 = ADD32(ctx->r29, -0X180);
    // 0x80217944: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x80217948: lui         $s5, 0x8026
    ctx->r21 = S32(0X8026 << 16);
    // 0x8021794C: addiu       $s5, $s5, -0x3C68
    ctx->r21 = ADD32(ctx->r21, -0X3C68);
    // 0x80217950: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x80217954: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x80217958: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x8021795C: lw          $s7, 0x190($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X190);
    // 0x80217960: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80217964: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x80217968: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x8021796C: mtc1        $a3, $f24
    ctx->f24.u32l = ctx->r7;
    // 0x80217970: addiu       $s0, $sp, 0x140
    ctx->r16 = ADD32(ctx->r29, 0X140);
    // 0x80217974: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x80217978: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x8021797C: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x80217980: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x80217984: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x80217988: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x8021798C: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x80217990: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x80217994: swc1        $f12, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f12.u32l;
    // 0x80217998: swc1        $f14, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f14.u32l;
    // 0x8021799C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802179A0: swc1        $f20, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f20.u32l;
    // 0x802179A4: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x802179A8: jal         0x8022A2F0
    // 0x802179AC: sw          $t6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r14;
    func_8022A2F0(rdram, ctx);
        goto after_0;
    // 0x802179AC: sw          $t6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r14;
    after_0:
    // 0x802179B0: addiu       $a1, $sp, 0x134
    ctx->r5 = ADD32(ctx->r29, 0X134);
    // 0x802179B4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802179B8: jal         0x8022A4F4
    // 0x802179BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022A4F4(rdram, ctx);
        goto after_1;
    // 0x802179BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802179C0: lw          $a2, 0x198($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X198);
    // 0x802179C4: lw          $a1, 0x194($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X194);
    // 0x802179C8: lwc1        $f6, 0x134($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X134);
    // 0x802179CC: lbu         $v1, 0x11($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X11);
    // 0x802179D0: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x802179D4: beq         $t7, $zero, L_80217ACC
    if (ctx->r15 == 0) {
        // 0x802179D8: andi        $t8, $v1, 0x4
        ctx->r24 = ctx->r3 & 0X4;
            goto L_80217ACC;
    }
    // 0x802179D8: andi        $t8, $v1, 0x4
    ctx->r24 = ctx->r3 & 0X4;
    // 0x802179DC: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x802179E0: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x802179E4: lwc1        $f8, 0x134($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X134);
    // 0x802179E8: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802179EC: c.lt.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl < ctx->f2.fl;
    // 0x802179F0: nop

    // 0x802179F4: bc1fl       L_80217A08
    if (!c1cs) {
        // 0x802179F8: lwc1        $f10, 0xC($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
            goto L_80217A08;
    }
    goto skip_0;
    // 0x802179F8: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x802179FC: b           L_802184B4
    // 0x80217A00: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_802184B4;
    // 0x80217A00: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80217A04: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
L_80217A08:
    // 0x80217A08: lwc1        $f18, 0x138($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X138);
    // 0x80217A0C: sub.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80217A10: c.lt.s      $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f24.fl < ctx->f22.fl;
    // 0x80217A14: nop

    // 0x80217A18: bc1fl       L_80217A2C
    if (!c1cs) {
        // 0x80217A1C: lwc1        $f16, 0x4($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80217A2C;
    }
    goto skip_1;
    // 0x80217A1C: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    skip_1:
    // 0x80217A20: b           L_802184B4
    // 0x80217A24: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_802184B4;
    // 0x80217A24: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80217A28: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
L_80217A2C:
    // 0x80217A2C: lwc1        $f8, 0x138($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X138);
    // 0x80217A30: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80217A34: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    // 0x80217A38: lwc1        $f6, 0xF4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x80217A3C: c.lt.s      $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f24.fl < ctx->f6.fl;
    // 0x80217A40: nop

    // 0x80217A44: bc1fl       L_80217A58
    if (!c1cs) {
        // 0x80217A48: lwc1        $f10, 0x10($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
            goto L_80217A58;
    }
    goto skip_2;
    // 0x80217A48: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    skip_2:
    // 0x80217A4C: b           L_802184B4
    // 0x80217A50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_802184B4;
    // 0x80217A50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80217A54: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
L_80217A58:
    // 0x80217A58: lwc1        $f4, 0x13C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x80217A5C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80217A60: c.lt.s      $f24, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f24.fl < ctx->f16.fl;
    // 0x80217A64: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    // 0x80217A68: bc1fl       L_80217A7C
    if (!c1cs) {
        // 0x80217A6C: lwc1        $f18, 0x8($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
            goto L_80217A7C;
    }
    goto skip_3;
    // 0x80217A6C: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    skip_3:
    // 0x80217A70: b           L_802184B4
    // 0x80217A74: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_802184B4;
    // 0x80217A74: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80217A78: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
L_80217A7C:
    // 0x80217A7C: lwc1        $f10, 0x13C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x80217A80: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80217A84: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
    // 0x80217A88: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80217A8C: c.lt.s      $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f24.fl < ctx->f8.fl;
    // 0x80217A90: nop

    // 0x80217A94: bc1fl       L_80217AA8
    if (!c1cs) {
        // 0x80217A98: lwc1        $f16, 0x14($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
            goto L_80217AA8;
    }
    goto skip_4;
    // 0x80217A98: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    skip_4:
    // 0x80217A9C: b           L_802184B4
    // 0x80217AA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_802184B4;
    // 0x80217AA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80217AA4: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
L_80217AA8:
    // 0x80217AA8: swc1        $f22, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f22.u32l;
    // 0x80217AAC: swc1        $f2, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f2.u32l;
    // 0x80217AB0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80217AB4: c.lt.s      $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f24.fl < ctx->f18.fl;
    // 0x80217AB8: swc1        $f18, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f18.u32l;
    // 0x80217ABC: bc1fl       L_80217AD0
    if (!c1cs) {
        // 0x80217AC0: lw          $a1, 0x194($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X194);
            goto L_80217AD0;
    }
    goto skip_5;
    // 0x80217AC0: lw          $a1, 0x194($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X194);
    skip_5:
    // 0x80217AC4: b           L_802184B4
    // 0x80217AC8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_802184B4;
    // 0x80217AC8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80217ACC:
    // 0x80217ACC: lw          $a1, 0x194($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X194);
L_80217AD0:
    // 0x80217AD0: lwc1        $f2, 0xFC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x80217AD4: bne         $t8, $zero, L_8021810C
    if (ctx->r24 != 0) {
        // 0x80217AD8: lwc1        $f22, 0xF8($sp)
        ctx->f22.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_8021810C;
    }
    // 0x80217AD8: lwc1        $f22, 0xF8($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x80217ADC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80217AE0: nop

    // 0x80217AE4: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x80217AE8: nop

    // 0x80217AEC: bc1fl       L_80217B00
    if (!c1cs) {
        // 0x80217AF0: neg.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
            goto L_80217B00;
    }
    goto skip_6;
    // 0x80217AF0: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    skip_6:
    // 0x80217AF4: b           L_80217B00
    // 0x80217AF8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_80217B00;
    // 0x80217AF8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80217AFC: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_80217B00:
    // 0x80217B00: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x80217B04: nop

    // 0x80217B08: bc1fl       L_80217BC0
    if (!c1cs) {
        // 0x80217B0C: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_80217BC0;
    }
    goto skip_7;
    // 0x80217B0C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_7:
    // 0x80217B10: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x80217B14: lui         $t4, 0x8026
    ctx->r12 = S32(0X8026 << 16);
    // 0x80217B18: lw          $t4, -0x3C5C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3C5C);
    // 0x80217B1C: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80217B20: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x80217B24: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80217B28: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80217B2C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80217B30: neg.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = -ctx->f2.fl;
    // 0x80217B34: jal         0x8021A528
    // 0x80217B38: addu        $a2, $t3, $t4
    ctx->r6 = ADD32(ctx->r11, ctx->r12);
    func_8021A528(rdram, ctx);
        goto after_2;
    // 0x80217B38: addu        $a2, $t3, $t4
    ctx->r6 = ADD32(ctx->r11, ctx->r12);
    after_2:
    // 0x80217B3C: div.s       $f6, $f20, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = DIV_S(ctx->f20.fl, ctx->f24.fl);
    // 0x80217B40: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80217B44: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x80217B48: lw          $t6, -0x3C64($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3C64);
    // 0x80217B4C: lui         $t5, 0x8026
    ctx->r13 = S32(0X8026 << 16);
    // 0x80217B50: lw          $t5, -0x3C6C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3C6C);
    // 0x80217B54: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80217B58: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80217B5C: sw          $t5, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r13;
    // 0x80217B60: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80217B64: lui         $t3, 0x8026
    ctx->r11 = S32(0X8026 << 16);
    // 0x80217B68: lw          $t3, -0x3C60($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3C60);
    // 0x80217B6C: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80217B70: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80217B74: addu        $t6, $t3, $t7
    ctx->r14 = ADD32(ctx->r11, ctx->r15);
    // 0x80217B78: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80217B7C: addiu       $a1, $a1, 0x301C
    ctx->r5 = ADD32(ctx->r5, 0X301C);
    // 0x80217B80: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80217B84: swc1        $f6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
    // 0x80217B88: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x80217B8C: addiu       $t5, $t8, 0x1
    ctx->r13 = ADD32(ctx->r24, 0X1);
    // 0x80217B90: sw          $t5, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r13;
    // 0x80217B94: lhu         $t9, 0xBD8($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XBD8);
    // 0x80217B98: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80217B9C: slt         $at, $t5, $t9
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80217BA0: bnel        $at, $zero, L_80217BC0
    if (ctx->r1 != 0) {
        // 0x80217BA4: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_80217BC0;
    }
    goto skip_8;
    // 0x80217BA4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_8:
    // 0x80217BA8: jal         0x80231C58
    // 0x80217BAC: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    func_80231C58(rdram, ctx);
        goto after_3;
    // 0x80217BAC: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    after_3:
    // 0x80217BB0: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80217BB4: addiu       $t3, $t4, -0x1
    ctx->r11 = ADD32(ctx->r12, -0X1);
    // 0x80217BB8: sw          $t3, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r11;
    // 0x80217BBC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_80217BC0:
    // 0x80217BC0: lw          $s4, 0x0($s5)
    ctx->r20 = MEM_W(ctx->r21, 0X0);
    // 0x80217BC4: c.lt.s      $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f8.fl < ctx->f22.fl;
    // 0x80217BC8: nop

    // 0x80217BCC: bc1fl       L_80217BE0
    if (!c1cs) {
        // 0x80217BD0: neg.s       $f0, $f22
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
            goto L_80217BE0;
    }
    goto skip_9;
    // 0x80217BD0: neg.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
    skip_9:
    // 0x80217BD4: b           L_80217BE0
    // 0x80217BD8: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
        goto L_80217BE0;
    // 0x80217BD8: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    // 0x80217BDC: neg.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
L_80217BE0:
    // 0x80217BE0: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x80217BE4: sll         $t7, $s4, 2
    ctx->r15 = S32(ctx->r20 << 2);
    // 0x80217BE8: subu        $t7, $t7, $s4
    ctx->r15 = SUB32(ctx->r15, ctx->r20);
    // 0x80217BEC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80217BF0: bc1f        L_80217C94
    if (!c1cs) {
        // 0x80217BF4: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80217C94;
    }
    // 0x80217BF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80217BF8: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x80217BFC: lw          $t6, -0x3C5C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3C5C);
    // 0x80217C00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80217C04: neg.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = -ctx->f22.fl;
    // 0x80217C08: jal         0x8021A528
    // 0x80217C0C: addu        $a2, $t7, $t6
    ctx->r6 = ADD32(ctx->r15, ctx->r14);
    func_8021A528(rdram, ctx);
        goto after_4;
    // 0x80217C0C: addu        $a2, $t7, $t6
    ctx->r6 = ADD32(ctx->r15, ctx->r14);
    after_4:
    // 0x80217C10: div.s       $f10, $f20, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = DIV_S(ctx->f20.fl, ctx->f24.fl);
    // 0x80217C14: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x80217C18: lui         $t5, 0x8026
    ctx->r13 = S32(0X8026 << 16);
    // 0x80217C1C: lw          $t5, -0x3C64($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3C64);
    // 0x80217C20: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x80217C24: lw          $t8, -0x3C6C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C6C);
    // 0x80217C28: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x80217C2C: addu        $t3, $t5, $t4
    ctx->r11 = ADD32(ctx->r13, ctx->r12);
    // 0x80217C30: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x80217C34: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80217C38: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x80217C3C: lw          $t7, -0x3C60($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3C60);
    // 0x80217C40: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80217C44: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x80217C48: addu        $t5, $t7, $t9
    ctx->r13 = ADD32(ctx->r15, ctx->r25);
    // 0x80217C4C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80217C50: addiu       $a1, $a1, 0x3028
    ctx->r5 = ADD32(ctx->r5, 0X3028);
    // 0x80217C54: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80217C58: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
    // 0x80217C5C: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80217C60: addiu       $t8, $t4, 0x1
    ctx->r24 = ADD32(ctx->r12, 0X1);
    // 0x80217C64: sw          $t8, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r24;
    // 0x80217C68: lhu         $t3, 0xBD8($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XBD8);
    // 0x80217C6C: or          $s4, $t8, $zero
    ctx->r20 = ctx->r24 | 0;
    // 0x80217C70: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80217C74: slt         $at, $t8, $t3
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80217C78: bnel        $at, $zero, L_80217C98
    if (ctx->r1 != 0) {
        // 0x80217C7C: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_80217C98;
    }
    goto skip_10;
    // 0x80217C7C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_10:
    // 0x80217C80: jal         0x80231C58
    // 0x80217C84: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    func_80231C58(rdram, ctx);
        goto after_5;
    // 0x80217C84: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    after_5:
    // 0x80217C88: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80217C8C: addiu       $s4, $t6, -0x1
    ctx->r20 = ADD32(ctx->r14, -0X1);
    // 0x80217C90: sw          $s4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r20;
L_80217C94:
    // 0x80217C94: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_80217C98:
    // 0x80217C98: lwc1        $f18, 0xF4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x80217C9C: lwc1        $f0, 0xF4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x80217CA0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80217CA4: nop

    // 0x80217CA8: bc1fl       L_80217CBC
    if (!c1cs) {
        // 0x80217CAC: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_80217CBC;
    }
    goto skip_11;
    // 0x80217CAC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_11:
    // 0x80217CB0: b           L_80217CBC
    // 0x80217CB4: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
        goto L_80217CBC;
    // 0x80217CB4: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    // 0x80217CB8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80217CBC:
    // 0x80217CBC: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x80217CC0: sll         $t9, $s4, 2
    ctx->r25 = S32(ctx->r20 << 2);
    // 0x80217CC4: subu        $t9, $t9, $s4
    ctx->r25 = SUB32(ctx->r25, ctx->r20);
    // 0x80217CC8: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80217CCC: bc1f        L_80217D74
    if (!c1cs) {
        // 0x80217CD0: addiu       $a1, $zero, -0x2
        ctx->r5 = ADD32(0, -0X2);
            goto L_80217D74;
    }
    // 0x80217CD0: addiu       $a1, $zero, -0x2
    ctx->r5 = ADD32(0, -0X2);
    // 0x80217CD4: lui         $t5, 0x8026
    ctx->r13 = S32(0X8026 << 16);
    // 0x80217CD8: lw          $t5, -0x3C5C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3C5C);
    // 0x80217CDC: lwc1        $f20, 0xF4($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x80217CE0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80217CE4: addu        $a2, $t9, $t5
    ctx->r6 = ADD32(ctx->r25, ctx->r13);
    // 0x80217CE8: jal         0x8021A528
    // 0x80217CEC: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    func_8021A528(rdram, ctx);
        goto after_6;
    // 0x80217CEC: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    after_6:
    // 0x80217CF0: div.s       $f4, $f20, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = DIV_S(ctx->f20.fl, ctx->f24.fl);
    // 0x80217CF4: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80217CF8: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x80217CFC: lw          $t8, -0x3C64($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C64);
    // 0x80217D00: lui         $t4, 0x8026
    ctx->r12 = S32(0X8026 << 16);
    // 0x80217D04: lw          $t4, -0x3C6C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3C6C);
    // 0x80217D08: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x80217D0C: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x80217D10: sw          $t4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r12;
    // 0x80217D14: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
    // 0x80217D18: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x80217D1C: lw          $t9, -0x3C60($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C60);
    // 0x80217D20: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x80217D24: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80217D28: addu        $t8, $t9, $t3
    ctx->r24 = ADD32(ctx->r25, ctx->r11);
    // 0x80217D2C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80217D30: addiu       $a1, $a1, 0x3034
    ctx->r5 = ADD32(ctx->r5, 0X3034);
    // 0x80217D34: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80217D38: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x80217D3C: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80217D40: addiu       $t4, $t6, 0x1
    ctx->r12 = ADD32(ctx->r14, 0X1);
    // 0x80217D44: sw          $t4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r12;
    // 0x80217D48: lhu         $t7, 0xBD8($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XBD8);
    // 0x80217D4C: or          $s4, $t4, $zero
    ctx->r20 = ctx->r12 | 0;
    // 0x80217D50: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80217D54: slt         $at, $t4, $t7
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80217D58: bnel        $at, $zero, L_80217D78
    if (ctx->r1 != 0) {
        // 0x80217D5C: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_80217D78;
    }
    goto skip_12;
    // 0x80217D5C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_12:
    // 0x80217D60: jal         0x80231C58
    // 0x80217D64: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    func_80231C58(rdram, ctx);
        goto after_7;
    // 0x80217D64: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    after_7:
    // 0x80217D68: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
    // 0x80217D6C: addiu       $s4, $t5, -0x1
    ctx->r20 = ADD32(ctx->r13, -0X1);
    // 0x80217D70: sw          $s4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r20;
L_80217D74:
    // 0x80217D74: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_80217D78:
    // 0x80217D78: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x80217D7C: sll         $t3, $s4, 2
    ctx->r11 = S32(ctx->r20 << 2);
    // 0x80217D80: lwc1        $f0, 0xF0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x80217D84: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80217D88: subu        $t3, $t3, $s4
    ctx->r11 = SUB32(ctx->r11, ctx->r20);
    // 0x80217D8C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80217D90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80217D94: bc1f        L_80217DA4
    if (!c1cs) {
        // 0x80217D98: lui         $t8, 0x8026
        ctx->r24 = S32(0X8026 << 16);
            goto L_80217DA4;
    }
    // 0x80217D98: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x80217D9C: b           L_80217DA8
    // 0x80217DA0: mov.s       $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = ctx->f8.fl;
        goto L_80217DA8;
    // 0x80217DA0: mov.s       $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = ctx->f8.fl;
L_80217DA4:
    // 0x80217DA4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80217DA8:
    // 0x80217DA8: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x80217DAC: lwc1        $f20, 0xF0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x80217DB0: bc1fl       L_80217E54
    if (!c1cs) {
        // 0x80217DB4: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_80217E54;
    }
    goto skip_13;
    // 0x80217DB4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_13:
    // 0x80217DB8: lw          $t8, -0x3C5C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C5C);
    // 0x80217DBC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80217DC0: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x80217DC4: jal         0x8021A528
    // 0x80217DC8: addu        $a2, $t3, $t8
    ctx->r6 = ADD32(ctx->r11, ctx->r24);
    func_8021A528(rdram, ctx);
        goto after_8;
    // 0x80217DC8: addu        $a2, $t3, $t8
    ctx->r6 = ADD32(ctx->r11, ctx->r24);
    after_8:
    // 0x80217DCC: div.s       $f10, $f20, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = DIV_S(ctx->f20.fl, ctx->f24.fl);
    // 0x80217DD0: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80217DD4: lui         $t4, 0x8026
    ctx->r12 = S32(0X8026 << 16);
    // 0x80217DD8: lw          $t4, -0x3C64($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3C64);
    // 0x80217DDC: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x80217DE0: lw          $t6, -0x3C6C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3C6C);
    // 0x80217DE4: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x80217DE8: addu        $t9, $t4, $t5
    ctx->r25 = ADD32(ctx->r12, ctx->r13);
    // 0x80217DEC: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x80217DF0: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x80217DF4: lui         $t3, 0x8026
    ctx->r11 = S32(0X8026 << 16);
    // 0x80217DF8: lw          $t3, -0x3C60($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3C60);
    // 0x80217DFC: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80217E00: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80217E04: addu        $t4, $t3, $t7
    ctx->r12 = ADD32(ctx->r11, ctx->r15);
    // 0x80217E08: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80217E0C: addiu       $a1, $a1, 0x3040
    ctx->r5 = ADD32(ctx->r5, 0X3040);
    // 0x80217E10: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80217E14: swc1        $f10, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f10.u32l;
    // 0x80217E18: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
    // 0x80217E1C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80217E20: sw          $t6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r14;
    // 0x80217E24: lhu         $t9, 0xBD8($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XBD8);
    // 0x80217E28: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x80217E2C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80217E30: slt         $at, $t6, $t9
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80217E34: bnel        $at, $zero, L_80217E54
    if (ctx->r1 != 0) {
        // 0x80217E38: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_80217E54;
    }
    goto skip_14;
    // 0x80217E38: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_14:
    // 0x80217E3C: jal         0x80231C58
    // 0x80217E40: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    func_80231C58(rdram, ctx);
        goto after_9;
    // 0x80217E40: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    after_9:
    // 0x80217E44: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x80217E48: addiu       $s4, $t8, -0x1
    ctx->r20 = ADD32(ctx->r24, -0X1);
    // 0x80217E4C: sw          $s4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r20;
    // 0x80217E50: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_80217E54:
    // 0x80217E54: lwc1        $f18, 0xEC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80217E58: sll         $t7, $s4, 2
    ctx->r15 = S32(ctx->r20 << 2);
    // 0x80217E5C: lwc1        $f0, 0xEC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80217E60: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80217E64: subu        $t7, $t7, $s4
    ctx->r15 = SUB32(ctx->r15, ctx->r20);
    // 0x80217E68: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80217E6C: addiu       $a1, $zero, -0x3
    ctx->r5 = ADD32(0, -0X3);
    // 0x80217E70: bc1f        L_80217E80
    if (!c1cs) {
        // 0x80217E74: lui         $t4, 0x8026
        ctx->r12 = S32(0X8026 << 16);
            goto L_80217E80;
    }
    // 0x80217E74: lui         $t4, 0x8026
    ctx->r12 = S32(0X8026 << 16);
    // 0x80217E78: b           L_80217E84
    // 0x80217E7C: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
        goto L_80217E84;
    // 0x80217E7C: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
L_80217E80:
    // 0x80217E80: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80217E84:
    // 0x80217E84: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x80217E88: lwc1        $f20, 0xEC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80217E8C: bc1fl       L_80217F30
    if (!c1cs) {
        // 0x80217E90: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_80217F30;
    }
    goto skip_15;
    // 0x80217E90: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_15:
    // 0x80217E94: lw          $t4, -0x3C5C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3C5C);
    // 0x80217E98: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80217E9C: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x80217EA0: jal         0x8021A528
    // 0x80217EA4: addu        $a2, $t7, $t4
    ctx->r6 = ADD32(ctx->r15, ctx->r12);
    func_8021A528(rdram, ctx);
        goto after_10;
    // 0x80217EA4: addu        $a2, $t7, $t4
    ctx->r6 = ADD32(ctx->r15, ctx->r12);
    after_10:
    // 0x80217EA8: div.s       $f4, $f20, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = DIV_S(ctx->f20.fl, ctx->f24.fl);
    // 0x80217EAC: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x80217EB0: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x80217EB4: lw          $t6, -0x3C64($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3C64);
    // 0x80217EB8: lui         $t5, 0x8026
    ctx->r13 = S32(0X8026 << 16);
    // 0x80217EBC: lw          $t5, -0x3C6C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3C6C);
    // 0x80217EC0: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80217EC4: addu        $t3, $t6, $t8
    ctx->r11 = ADD32(ctx->r14, ctx->r24);
    // 0x80217EC8: sw          $t5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r13;
    // 0x80217ECC: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80217ED0: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x80217ED4: lw          $t7, -0x3C60($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3C60);
    // 0x80217ED8: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x80217EDC: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x80217EE0: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80217EE4: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80217EE8: addiu       $a1, $a1, 0x304C
    ctx->r5 = ADD32(ctx->r5, 0X304C);
    // 0x80217EEC: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80217EF0: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x80217EF4: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x80217EF8: addiu       $t5, $t8, 0x1
    ctx->r13 = ADD32(ctx->r24, 0X1);
    // 0x80217EFC: sw          $t5, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r13;
    // 0x80217F00: lhu         $t3, 0xBD8($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XBD8);
    // 0x80217F04: or          $s4, $t5, $zero
    ctx->r20 = ctx->r13 | 0;
    // 0x80217F08: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80217F0C: slt         $at, $t5, $t3
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80217F10: bnel        $at, $zero, L_80217F30
    if (ctx->r1 != 0) {
        // 0x80217F14: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_80217F30;
    }
    goto skip_16;
    // 0x80217F14: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_16:
    // 0x80217F18: jal         0x80231C58
    // 0x80217F1C: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    func_80231C58(rdram, ctx);
        goto after_11;
    // 0x80217F1C: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    after_11:
    // 0x80217F20: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80217F24: addiu       $s4, $t4, -0x1
    ctx->r20 = ADD32(ctx->r12, -0X1);
    // 0x80217F28: sw          $s4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r20;
    // 0x80217F2C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_80217F30:
    // 0x80217F30: lwc1        $f8, 0xE8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80217F34: sll         $t9, $s4, 2
    ctx->r25 = S32(ctx->r20 << 2);
    // 0x80217F38: lwc1        $f0, 0xE8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80217F3C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80217F40: subu        $t9, $t9, $s4
    ctx->r25 = SUB32(ctx->r25, ctx->r20);
    // 0x80217F44: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80217F48: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80217F4C: bc1f        L_80217F5C
    if (!c1cs) {
        // 0x80217F50: lui         $t6, 0x8026
        ctx->r14 = S32(0X8026 << 16);
            goto L_80217F5C;
    }
    // 0x80217F50: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x80217F54: b           L_80217F60
    // 0x80217F58: mov.s       $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = ctx->f8.fl;
        goto L_80217F60;
    // 0x80217F58: mov.s       $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = ctx->f8.fl;
L_80217F5C:
    // 0x80217F5C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80217F60:
    // 0x80217F60: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x80217F64: lwc1        $f20, 0xE8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80217F68: bc1fl       L_8021800C
    if (!c1cs) {
        // 0x80217F6C: lw          $t3, 0x124($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X124);
            goto L_8021800C;
    }
    goto skip_17;
    // 0x80217F6C: lw          $t3, 0x124($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X124);
    skip_17:
    // 0x80217F70: lw          $t6, -0x3C5C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3C5C);
    // 0x80217F74: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80217F78: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x80217F7C: jal         0x8021A528
    // 0x80217F80: addu        $a2, $t9, $t6
    ctx->r6 = ADD32(ctx->r25, ctx->r14);
    func_8021A528(rdram, ctx);
        goto after_12;
    // 0x80217F80: addu        $a2, $t9, $t6
    ctx->r6 = ADD32(ctx->r25, ctx->r14);
    after_12:
    // 0x80217F84: div.s       $f10, $f20, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = DIV_S(ctx->f20.fl, ctx->f24.fl);
    // 0x80217F88: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80217F8C: lui         $t5, 0x8026
    ctx->r13 = S32(0X8026 << 16);
    // 0x80217F90: lw          $t5, -0x3C64($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3C64);
    // 0x80217F94: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x80217F98: lw          $t8, -0x3C6C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C6C);
    // 0x80217F9C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80217FA0: addu        $t7, $t5, $t4
    ctx->r15 = ADD32(ctx->r13, ctx->r12);
    // 0x80217FA4: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x80217FA8: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80217FAC: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x80217FB0: lw          $t9, -0x3C60($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C60);
    // 0x80217FB4: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x80217FB8: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80217FBC: addu        $t5, $t9, $t3
    ctx->r13 = ADD32(ctx->r25, ctx->r11);
    // 0x80217FC0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80217FC4: addiu       $a1, $a1, 0x3058
    ctx->r5 = ADD32(ctx->r5, 0X3058);
    // 0x80217FC8: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80217FCC: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
    // 0x80217FD0: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80217FD4: addiu       $t8, $t4, 0x1
    ctx->r24 = ADD32(ctx->r12, 0X1);
    // 0x80217FD8: sw          $t8, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r24;
    // 0x80217FDC: lhu         $t7, 0xBD8($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XBD8);
    // 0x80217FE0: or          $s4, $t8, $zero
    ctx->r20 = ctx->r24 | 0;
    // 0x80217FE4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80217FE8: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80217FEC: bnel        $at, $zero, L_8021800C
    if (ctx->r1 != 0) {
        // 0x80217FF0: lw          $t3, 0x124($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X124);
            goto L_8021800C;
    }
    goto skip_18;
    // 0x80217FF0: lw          $t3, 0x124($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X124);
    skip_18:
    // 0x80217FF4: jal         0x80231C58
    // 0x80217FF8: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    func_80231C58(rdram, ctx);
        goto after_13;
    // 0x80217FF8: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    after_13:
    // 0x80217FFC: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80218000: addiu       $s4, $t6, -0x1
    ctx->r20 = ADD32(ctx->r14, -0X1);
    // 0x80218004: sw          $s4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r20;
    // 0x80218008: lw          $t3, 0x124($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X124);
L_8021800C:
    // 0x8021800C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80218010: bnel        $t3, $s4, L_802180FC
    if (ctx->r11 != ctx->r20) {
        // 0x80218014: lw          $t3, 0x124($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X124);
            goto L_802180FC;
    }
    goto skip_19;
    // 0x80218014: lw          $t3, 0x124($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X124);
    skip_19:
    // 0x80218018: multu       $s4, $v0
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021801C: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x80218020: addiu       $v1, $v1, -0x3C5C
    ctx->r3 = ADD32(ctx->r3, -0X3C5C);
    // 0x80218024: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80218028: lwc1        $f16, 0x20($s7)
    ctx->f16.u32l = MEM_W(ctx->r23, 0X20);
    // 0x8021802C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80218030: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80218034: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80218038: addiu       $a1, $a1, 0x3064
    ctx->r5 = ADD32(ctx->r5, 0X3064);
    // 0x8021803C: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80218040: mflo        $t4
    ctx->r12 = lo;
    // 0x80218044: addu        $t8, $t5, $t4
    ctx->r24 = ADD32(ctx->r13, ctx->r12);
    // 0x80218048: swc1        $f16, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f16.u32l;
    // 0x8021804C: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80218050: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80218054: lwc1        $f18, 0x24($s7)
    ctx->f18.u32l = MEM_W(ctx->r23, 0X24);
    // 0x80218058: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021805C: mflo        $t9
    ctx->r25 = lo;
    // 0x80218060: addu        $t3, $t7, $t9
    ctx->r11 = ADD32(ctx->r15, ctx->r25);
    // 0x80218064: swc1        $f18, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f18.u32l;
    // 0x80218068: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x8021806C: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80218070: lwc1        $f4, 0x28($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0X28);
    // 0x80218074: multu       $t4, $v0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80218078: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x8021807C: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x80218080: mflo        $t8
    ctx->r24 = lo;
    // 0x80218084: addu        $t6, $t5, $t8
    ctx->r14 = ADD32(ctx->r13, ctx->r24);
    // 0x80218088: swc1        $f4, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f4.u32l;
    // 0x8021808C: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80218090: lw          $t9, -0x3C64($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C64);
    // 0x80218094: lw          $t7, -0x3C6C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3C6C);
    // 0x80218098: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8021809C: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x802180A0: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
    // 0x802180A4: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x802180A8: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x802180AC: lw          $t8, -0x3C60($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C60);
    // 0x802180B0: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x802180B4: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x802180B8: addu        $t9, $t8, $t3
    ctx->r25 = ADD32(ctx->r24, ctx->r11);
    // 0x802180BC: swc1        $f6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f6.u32l;
    // 0x802180C0: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x802180C4: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x802180C8: sw          $t7, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r15;
    // 0x802180CC: lhu         $t5, 0xBD8($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0XBD8);
    // 0x802180D0: or          $s4, $t7, $zero
    ctx->r20 = ctx->r15 | 0;
    // 0x802180D4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x802180D8: slt         $at, $t7, $t5
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x802180DC: bnel        $at, $zero, L_802180FC
    if (ctx->r1 != 0) {
        // 0x802180E0: lw          $t3, 0x124($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X124);
            goto L_802180FC;
    }
    goto skip_20;
    // 0x802180E0: lw          $t3, 0x124($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X124);
    skip_20:
    // 0x802180E4: jal         0x80231C58
    // 0x802180E8: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    func_80231C58(rdram, ctx);
        goto after_14;
    // 0x802180E8: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    after_14:
    // 0x802180EC: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x802180F0: addiu       $s4, $t6, -0x1
    ctx->r20 = ADD32(ctx->r14, -0X1);
    // 0x802180F4: sw          $s4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r20;
    // 0x802180F8: lw          $t3, 0x124($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X124);
L_802180FC:
    // 0x802180FC: subu        $v0, $s4, $t3
    ctx->r2 = SUB32(ctx->r20, ctx->r11);
    // 0x80218100: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x80218104: b           L_802184B4
    // 0x80218108: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
        goto L_802184B4;
    // 0x80218108: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
L_8021810C:
    // 0x8021810C: lwc1        $f8, 0x134($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X134);
    // 0x80218110: lwc1        $f10, 0x20($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X20);
    // 0x80218114: lw          $s3, 0x0($a2)
    ctx->r19 = MEM_W(ctx->r6, 0X0);
    // 0x80218118: lwc1        $f18, 0x138($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X138);
    // 0x8021811C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80218120: lwc1        $f8, 0x13C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x80218124: addiu       $v0, $sp, 0xA0
    ctx->r2 = ADD32(ctx->r29, 0XA0);
    // 0x80218128: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x8021812C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80218130: lui         $fp, 0xB800
    ctx->r30 = S32(0XB800 << 16);
    // 0x80218134: lui         $s6, 0x8000
    ctx->r22 = S32(0X8000 << 16);
    // 0x80218138: swc1        $f16, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f16.u32l;
    // 0x8021813C: lwc1        $f4, 0x20($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X20);
    // 0x80218140: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
    // 0x80218144: addiu       $s1, $sp, 0xA0
    ctx->r17 = ADD32(ctx->r29, 0XA0);
    // 0x80218148: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8021814C: swc1        $f6, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f6.u32l;
    // 0x80218150: lwc1        $f10, 0x20($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X20);
    // 0x80218154: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80218158: swc1        $f16, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f16.u32l;
    // 0x8021815C: lwc1        $f18, 0x20($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X20);
    // 0x80218160: mul.s       $f24, $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f18.fl);
    // 0x80218164: nop

L_80218168:
    // 0x80218168: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8021816C: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80218170: bne         $at, $zero, L_80218168
    if (ctx->r1 != 0) {
        // 0x80218174: sw          $v1, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r3;
            goto L_80218168;
    }
    // 0x80218174: sw          $v1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r3;
    // 0x80218178: lbu         $t7, 0x4($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X4);
    // 0x8021817C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80218180: blezl       $t7, L_802184A4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80218184: lw          $t5, 0x0($s5)
        ctx->r13 = MEM_W(ctx->r21, 0X0);
            goto L_802184A4;
    }
    goto skip_21;
    // 0x80218184: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
    skip_21:
    // 0x80218188: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8021818C: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
L_80218190:
    // 0x80218190: lw          $a1, 0x194($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X194);
    // 0x80218194: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x80218198: lw          $a2, 0x198($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X198);
    // 0x8021819C: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x802181A0: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x802181A4: lw          $s0, 0xC($t8)
    ctx->r16 = MEM_W(ctx->r24, 0XC);
    // 0x802181A8: or          $s0, $s0, $s6
    ctx->r16 = ctx->r16 | ctx->r22;
L_802181AC:
    // 0x802181AC: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x802181B0: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x802181B4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802181B8: and         $v0, $a3, $at
    ctx->r2 = ctx->r7 & ctx->r1;
    // 0x802181BC: bne         $fp, $v0, L_802181DC
    if (ctx->r30 != ctx->r2) {
        // 0x802181C0: lui         $at, 0x400
        ctx->r1 = S32(0X400 << 16);
            goto L_802181DC;
    }
    // 0x802181C0: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x802181C4: lw          $t3, 0x194($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X194);
    // 0x802181C8: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x802181CC: lbu         $v0, 0x4($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X4);
    // 0x802181D0: addiu       $t6, $t8, 0x10
    ctx->r14 = ADD32(ctx->r24, 0X10);
    // 0x802181D4: b           L_80218494
    // 0x802181D8: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
        goto L_80218494;
    // 0x802181D8: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
L_802181DC:
    // 0x802181DC: bne         $v0, $at, L_8021825C
    if (ctx->r2 != ctx->r1) {
        // 0x802181E0: andi        $t4, $a1, 0xFF00
        ctx->r12 = ctx->r5 & 0XFF00;
            goto L_8021825C;
    }
    // 0x802181E0: andi        $t4, $a1, 0xFF00
    ctx->r12 = ctx->r5 & 0XFF00;
    // 0x802181E4: lw          $t9, 0x198($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X198);
    // 0x802181E8: lui         $at, 0xF0
    ctx->r1 = S32(0XF0 << 16);
    // 0x802181EC: and         $v0, $a3, $at
    ctx->r2 = ctx->r7 & ctx->r1;
    // 0x802181F0: lw          $t4, 0x0($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X0);
    // 0x802181F4: srl         $t6, $v0, 20
    ctx->r14 = S32(U32(ctx->r2) >> 20);
    // 0x802181F8: addiu       $a0, $t6, 0x1
    ctx->r4 = ADD32(ctx->r14, 0X1);
    // 0x802181FC: subu        $t7, $a1, $t4
    ctx->r15 = SUB32(ctx->r5, ctx->r12);
    // 0x80218200: addu        $t0, $t7, $s6
    ctx->r8 = ADD32(ctx->r15, ctx->r22);
    // 0x80218204: srl         $t5, $t0, 4
    ctx->r13 = S32(U32(ctx->r8) >> 4);
    // 0x80218208: or          $t0, $t5, $zero
    ctx->r8 = ctx->r13 | 0;
    // 0x8021820C: blez        $a0, L_8021848C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80218210: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8021848C;
    }
    // 0x80218210: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80218214: lui         $at, 0xF
    ctx->r1 = S32(0XF << 16);
    // 0x80218218: and         $a2, $a3, $at
    ctx->r6 = ctx->r7 & ctx->r1;
    // 0x8021821C: srl         $t9, $a2, 16
    ctx->r25 = S32(U32(ctx->r6) >> 16);
    // 0x80218220: addiu       $t8, $sp, 0xA0
    ctx->r24 = ADD32(ctx->r29, 0XA0);
    // 0x80218224: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x80218228: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x8021822C: addu        $a1, $t3, $t8
    ctx->r5 = ADD32(ctx->r11, ctx->r24);
    // 0x80218230: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x80218234: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x80218238: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_8021823C:
    // 0x8021823C: addu        $t7, $v0, $a2
    ctx->r15 = ADD32(ctx->r2, ctx->r6);
    // 0x80218240: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80218244: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x80218248: sw          $v1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r3;
    // 0x8021824C: bne         $at, $zero, L_8021823C
    if (ctx->r1 != 0) {
        // 0x80218250: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8021823C;
    }
    // 0x80218250: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80218254: b           L_802181AC
    // 0x80218258: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_802181AC;
    // 0x80218258: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8021825C:
    // 0x8021825C: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80218260: and         $t5, $a1, $at
    ctx->r13 = ctx->r5 & ctx->r1;
    // 0x80218264: divu        $zero, $t5, $s2
    lo = S32(U32(ctx->r13) / U32(ctx->r18)); hi = S32(U32(ctx->r13) % U32(ctx->r18));
    // 0x80218268: mflo        $t6
    ctx->r14 = lo;
    // 0x8021826C: srl         $t3, $t6, 16
    ctx->r11 = S32(U32(ctx->r14) >> 16);
    // 0x80218270: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x80218274: divu        $zero, $t4, $s2
    lo = S32(U32(ctx->r12) / U32(ctx->r18)); hi = S32(U32(ctx->r12) % U32(ctx->r18));
    // 0x80218278: mflo        $t7
    ctx->r15 = lo;
    // 0x8021827C: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x80218280: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x80218284: divu        $zero, $t8, $s2
    lo = S32(U32(ctx->r24) / U32(ctx->r18)); hi = S32(U32(ctx->r24) % U32(ctx->r18));
    // 0x80218288: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x8021828C: srl         $t5, $t7, 8
    ctx->r13 = S32(U32(ctx->r15) >> 8);
    // 0x80218290: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80218294: sll         $t5, $t0, 4
    ctx->r13 = S32(ctx->r8 << 4);
    // 0x80218298: addu        $t3, $s1, $t6
    ctx->r11 = ADD32(ctx->r17, ctx->r14);
    // 0x8021829C: addu        $v0, $s3, $t5
    ctx->r2 = ADD32(ctx->r19, ctx->r13);
    // 0x802182A0: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x802182A4: mflo        $t9
    ctx->r25 = lo;
    // 0x802182A8: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x802182AC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802182B0: addu        $t7, $s1, $t4
    ctx->r15 = ADD32(ctx->r17, ctx->r12);
    // 0x802182B4: lw          $t1, 0x0($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X0);
    // 0x802182B8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802182BC: lw          $t2, 0x0($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X0);
    // 0x802182C0: sll         $t9, $t1, 4
    ctx->r25 = S32(ctx->r9 << 4);
    // 0x802182C4: addu        $v1, $s3, $t9
    ctx->r3 = ADD32(ctx->r19, ctx->r25);
    // 0x802182C8: sll         $t6, $t2, 4
    ctx->r14 = S32(ctx->r10 << 4);
    // 0x802182CC: addu        $a0, $s3, $t6
    ctx->r4 = ADD32(ctx->r19, ctx->r14);
    // 0x802182D0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x802182D4: lh          $t3, 0x2($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X2);
    // 0x802182D8: lw          $s4, 0x0($s5)
    ctx->r20 = MEM_W(ctx->r21, 0X0);
    // 0x802182DC: bne         $s2, $zero, L_802182E8
    if (ctx->r18 != 0) {
        // 0x802182E0: nop
    
            goto L_802182E8;
    }
    // 0x802182E0: nop

    // 0x802182E4: break       7
    do_break(2149679844);
L_802182E8:
    // 0x802182E8: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x802182EC: sll         $t6, $s4, 2
    ctx->r14 = S32(ctx->r20 << 2);
    // 0x802182F0: bne         $s2, $zero, L_802182FC
    if (ctx->r18 != 0) {
        // 0x802182F4: nop
    
            goto L_802182FC;
    }
    // 0x802182F4: nop

    // 0x802182F8: break       7
    do_break(2149679864);
L_802182FC:
    // 0x802182FC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80218300: bne         $s2, $zero, L_8021830C
    if (ctx->r18 != 0) {
        // 0x80218304: nop
    
            goto L_8021830C;
    }
    // 0x80218304: nop

    // 0x80218308: break       7
    do_break(2149679880);
L_8021830C:
    // 0x8021830C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80218310: lh          $t8, 0x4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4);
    // 0x80218314: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x80218318: lwc1        $f12, 0x134($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X134);
    // 0x8021831C: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80218320: lwc1        $f14, 0x138($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X138);
    // 0x80218324: lw          $a2, 0x13C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X13C);
    // 0x80218328: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8021832C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80218330: lh          $t4, 0x0($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X0);
    // 0x80218334: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80218338: sll         $t4, $s4, 2
    ctx->r12 = S32(ctx->r20 << 2);
    // 0x8021833C: subu        $t4, $t4, $s4
    ctx->r12 = SUB32(ctx->r12, ctx->r20);
    // 0x80218340: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80218344: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80218348: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8021834C: lh          $t7, 0x2($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2);
    // 0x80218350: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80218354: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x80218358: lw          $t7, -0x3C5C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3C5C);
    // 0x8021835C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80218360: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x80218364: lh          $t5, 0x4($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X4);
    // 0x80218368: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8021836C: addu        $t5, $t4, $t7
    ctx->r13 = ADD32(ctx->r12, ctx->r15);
    // 0x80218370: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80218374: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x80218378: lh          $t3, 0x0($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X0);
    // 0x8021837C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80218380: lui         $t3, 0x8026
    ctx->r11 = S32(0X8026 << 16);
    // 0x80218384: lw          $t3, -0x3C60($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3C60);
    // 0x80218388: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021838C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x80218390: lh          $t8, 0x2($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X2);
    // 0x80218394: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80218398: addu        $t8, $t6, $t3
    ctx->r24 = ADD32(ctx->r14, ctx->r11);
    // 0x8021839C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802183A0: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x802183A4: lh          $t9, 0x4($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X4);
    // 0x802183A8: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x802183AC: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x802183B0: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x802183B4: nop

    // 0x802183B8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802183BC: jal         0x80213020
    // 0x802183C0: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_80213020(rdram, ctx);
        goto after_15;
    // 0x802183C0: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_15:
    // 0x802183C4: beq         $v0, $zero, L_8021848C
    if (ctx->r2 == 0) {
        // 0x802183C8: nop
    
            goto L_8021848C;
    }
    // 0x802183C8: nop

    // 0x802183CC: swc1        $f22, 0x30($s7)
    MEM_W(0X30, ctx->r23) = ctx->f22.u32l;
    // 0x802183D0: swc1        $f22, 0x34($s7)
    MEM_W(0X34, ctx->r23) = ctx->f22.u32l;
    // 0x802183D4: swc1        $f22, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->f22.u32l;
    // 0x802183D8: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x802183DC: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x802183E0: lw          $t7, -0x3C5C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3C5C);
    // 0x802183E4: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x802183E8: subu        $t4, $t4, $t9
    ctx->r12 = SUB32(ctx->r12, ctx->r25);
    // 0x802183EC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x802183F0: addu        $a1, $t4, $t7
    ctx->r5 = ADD32(ctx->r12, ctx->r15);
    // 0x802183F4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802183F8: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x802183FC: jal         0x8022A4F4
    // 0x80218400: neg.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = -ctx->f24.fl;
    func_8022A4F4(rdram, ctx);
        goto after_16;
    // 0x80218400: neg.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = -ctx->f24.fl;
    after_16:
    // 0x80218404: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80218408: lui         $t5, 0x8026
    ctx->r13 = S32(0X8026 << 16);
    // 0x8021840C: lw          $t5, -0x3C60($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3C60);
    // 0x80218410: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x80218414: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x80218418: addu        $v0, $t5, $t3
    ctx->r2 = ADD32(ctx->r13, ctx->r11);
    // 0x8021841C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80218420: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x80218424: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80218428: div.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8021842C: addiu       $a1, $a1, 0x3070
    ctx->r5 = ADD32(ctx->r5, 0X3070);
    // 0x80218430: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x80218434: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80218438: lw          $t9, -0x3C64($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C64);
    // 0x8021843C: lw          $t8, -0x3C6C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C6C);
    // 0x80218440: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80218444: addu        $t6, $t9, $t7
    ctx->r14 = ADD32(ctx->r25, ctx->r15);
    // 0x80218448: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x8021844C: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
    // 0x80218450: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80218454: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x80218458: sw          $t3, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r11;
    // 0x8021845C: lhu         $t4, 0xBD8($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0XBD8);
    // 0x80218460: or          $s4, $t3, $zero
    ctx->r20 = ctx->r11 | 0;
    // 0x80218464: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80218468: bne         $at, $zero, L_8021848C
    if (ctx->r1 != 0) {
        // 0x8021846C: nop
    
            goto L_8021848C;
    }
    // 0x8021846C: nop

    // 0x80218470: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80218474: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    // 0x80218478: jal         0x80231C58
    // 0x8021847C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_80231C58(rdram, ctx);
        goto after_17;
    // 0x8021847C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_17:
    // 0x80218480: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x80218484: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x80218488: sw          $t7, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r15;
L_8021848C:
    // 0x8021848C: b           L_802181AC
    // 0x80218490: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_802181AC;
    // 0x80218490: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80218494:
    // 0x80218494: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80218498: bne         $at, $zero, L_80218190
    if (ctx->r1 != 0) {
        // 0x8021849C: sw          $t6, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r14;
            goto L_80218190;
    }
    // 0x8021849C: sw          $t6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r14;
    // 0x802184A0: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
L_802184A4:
    // 0x802184A4: lw          $t3, 0x124($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X124);
    // 0x802184A8: subu        $v0, $t5, $t3
    ctx->r2 = SUB32(ctx->r13, ctx->r11);
    // 0x802184AC: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x802184B0: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
L_802184B4:
    // 0x802184B4: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x802184B8: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x802184BC: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x802184C0: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x802184C4: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x802184C8: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x802184CC: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x802184D0: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x802184D4: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x802184D8: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x802184DC: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x802184E0: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x802184E4: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x802184E8: jr          $ra
    // 0x802184EC: addiu       $sp, $sp, 0x180
    ctx->r29 = ADD32(ctx->r29, 0X180);
    return;
    // 0x802184EC: addiu       $sp, $sp, 0x180
    ctx->r29 = ADD32(ctx->r29, 0X180);
;}
RECOMP_FUNC void func_8023CF00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023CF00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023CF04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023CF08: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8023CF0C: jal         0x80241760
    // 0x8023CF10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x8023CF10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023CF14: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023CF18: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023CF1C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8023CF20: beq         $t7, $zero, L_8023CF3C
    if (ctx->r15 == 0) {
        // 0x8023CF24: nop
    
            goto L_8023CF3C;
    }
    // 0x8023CF24: nop

    // 0x8023CF28: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x8023CF2C: lw          $t8, 0x1774($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1774);
    // 0x8023CF30: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x8023CF34: ori         $t0, $t9, 0x8
    ctx->r8 = ctx->r25 | 0X8;
    // 0x8023CF38: sw          $t0, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r8;
L_8023CF3C:
    // 0x8023CF3C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8023CF40: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x8023CF44: beq         $t2, $zero, L_8023CF64
    if (ctx->r10 == 0) {
        // 0x8023CF48: nop
    
            goto L_8023CF64;
    }
    // 0x8023CF48: nop

    // 0x8023CF4C: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x8023CF50: lw          $t3, 0x1774($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1774);
    // 0x8023CF54: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x8023CF58: lw          $t4, 0xC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC);
    // 0x8023CF5C: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x8023CF60: sw          $t5, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r13;
L_8023CF64:
    // 0x8023CF64: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023CF68: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8023CF6C: beq         $t7, $zero, L_8023CF88
    if (ctx->r15 == 0) {
        // 0x8023CF70: nop
    
            goto L_8023CF88;
    }
    // 0x8023CF70: nop

    // 0x8023CF74: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x8023CF78: lw          $t9, 0x1774($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1774);
    // 0x8023CF7C: lw          $t0, 0xC($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XC);
    // 0x8023CF80: ori         $t8, $t0, 0x4
    ctx->r24 = ctx->r8 | 0X4;
    // 0x8023CF84: sw          $t8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r24;
L_8023CF88:
    // 0x8023CF88: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8023CF8C: andi        $t2, $t1, 0x8
    ctx->r10 = ctx->r9 & 0X8;
    // 0x8023CF90: beq         $t2, $zero, L_8023CFB0
    if (ctx->r10 == 0) {
        // 0x8023CF94: nop
    
            goto L_8023CFB0;
    }
    // 0x8023CF94: nop

    // 0x8023CF98: lui         $t4, 0x8025
    ctx->r12 = S32(0X8025 << 16);
    // 0x8023CF9C: lw          $t4, 0x1774($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1774);
    // 0x8023CFA0: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x8023CFA4: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x8023CFA8: and         $t3, $t5, $at
    ctx->r11 = ctx->r13 & ctx->r1;
    // 0x8023CFAC: sw          $t3, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r11;
L_8023CFB0:
    // 0x8023CFB0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023CFB4: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x8023CFB8: beq         $t7, $zero, L_8023CFD4
    if (ctx->r15 == 0) {
        // 0x8023CFBC: nop
    
            goto L_8023CFD4;
    }
    // 0x8023CFBC: nop

    // 0x8023CFC0: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x8023CFC4: lw          $t0, 0x1774($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1774);
    // 0x8023CFC8: lw          $t8, 0xC($t0)
    ctx->r24 = MEM_W(ctx->r8, 0XC);
    // 0x8023CFCC: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x8023CFD0: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
L_8023CFD4:
    // 0x8023CFD4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8023CFD8: andi        $t2, $t1, 0x20
    ctx->r10 = ctx->r9 & 0X20;
    // 0x8023CFDC: beq         $t2, $zero, L_8023CFFC
    if (ctx->r10 == 0) {
        // 0x8023CFE0: nop
    
            goto L_8023CFFC;
    }
    // 0x8023CFE0: nop

    // 0x8023CFE4: lui         $t5, 0x8025
    ctx->r13 = S32(0X8025 << 16);
    // 0x8023CFE8: lw          $t5, 0x1774($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1774);
    // 0x8023CFEC: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x8023CFF0: lw          $t3, 0xC($t5)
    ctx->r11 = MEM_W(ctx->r13, 0XC);
    // 0x8023CFF4: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x8023CFF8: sw          $t4, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r12;
L_8023CFFC:
    // 0x8023CFFC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023D000: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x8023D004: beq         $t7, $zero, L_8023D03C
    if (ctx->r15 == 0) {
        // 0x8023D008: nop
    
            goto L_8023D03C;
    }
    // 0x8023D008: nop

    // 0x8023D00C: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x8023D010: lw          $t8, 0x1774($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1774);
    // 0x8023D014: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8023D018: lui         $t1, 0x8025
    ctx->r9 = S32(0X8025 << 16);
    // 0x8023D01C: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x8023D020: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x8023D024: sw          $t0, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r8;
    // 0x8023D028: lw          $t1, 0x1774($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1774);
    // 0x8023D02C: addiu       $at, $zero, -0x301
    ctx->r1 = ADD32(0, -0X301);
    // 0x8023D030: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x8023D034: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x8023D038: sw          $t3, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r11;
L_8023D03C:
    // 0x8023D03C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8023D040: andi        $t5, $t4, 0x80
    ctx->r13 = ctx->r12 & 0X80;
    // 0x8023D044: beq         $t5, $zero, L_8023D088
    if (ctx->r13 == 0) {
        // 0x8023D048: nop
    
            goto L_8023D088;
    }
    // 0x8023D048: nop

    // 0x8023D04C: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8023D050: lw          $t6, 0x1774($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1774);
    // 0x8023D054: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x8023D058: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8023D05C: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x8023D060: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x8023D064: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x8023D068: sw          $t9, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r25;
    // 0x8023D06C: lw          $t0, 0x1774($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1774);
    // 0x8023D070: lw          $t2, 0x8($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X8);
    // 0x8023D074: lw          $t8, 0xC($t0)
    ctx->r24 = MEM_W(ctx->r8, 0XC);
    // 0x8023D078: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x8023D07C: andi        $t1, $t3, 0x300
    ctx->r9 = ctx->r11 & 0X300;
    // 0x8023D080: or          $t4, $t8, $t1
    ctx->r12 = ctx->r24 | ctx->r9;
    // 0x8023D084: sw          $t4, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r12;
L_8023D088:
    // 0x8023D088: lui         $t5, 0x8025
    ctx->r13 = S32(0X8025 << 16);
    // 0x8023D08C: lw          $t5, 0x1774($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1774);
    // 0x8023D090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023D094: lhu         $t7, 0x0($t5)
    ctx->r15 = MEM_HU(ctx->r13, 0X0);
    // 0x8023D098: ori         $t9, $t7, 0x8
    ctx->r25 = ctx->r15 | 0X8;
    // 0x8023D09C: jal         0x80241780
    // 0x8023D0A0: sh          $t9, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r25;
    func_80241780(rdram, ctx);
        goto after_1;
    // 0x8023D0A0: sh          $t9, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r25;
    after_1:
    // 0x8023D0A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023D0A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023D0AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8023D0B0: jr          $ra
    // 0x8023D0B4: nop

    return;
    // 0x8023D0B4: nop

;}
RECOMP_FUNC void func_80228CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228CE0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80228CE4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228CE8: jr          $ra
    // 0x80228CEC: sw          $t6, 0x8C0($at)
    MEM_W(0X8C0, ctx->r1) = ctx->r14;
    return;
    // 0x80228CEC: sw          $t6, 0x8C0($at)
    MEM_W(0X8C0, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80218D34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80218D34: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80218D38: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x80218D3C: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80218D40: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80218D44: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80218D48: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80218D4C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80218D50: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x80218D54: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x80218D58: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x80218D5C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80218D60: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80218D64: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80218D68: sdc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X18, ctx->r29);
    // 0x80218D6C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80218D70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80218D74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80218D78: neg.s       $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = -ctx->f16.fl;
    // 0x80218D7C: add.s       $f22, $f16, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f16.fl + ctx->f16.fl;
    // 0x80218D80: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80218D84: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80218D88: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80218D8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80218D90: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80218D94: c.le.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl <= ctx->f22.fl;
    // 0x80218D98: mul.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80218D9C: neg.s       $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = -ctx->f18.fl;
    // 0x80218DA0: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x80218DA4: bc1f        L_80218E0C
    if (!c1cs) {
        // 0x80218DA8: lwc1        $f2, 0x20($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
            goto L_80218E0C;
    }
    // 0x80218DA8: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80218DAC: sub.s       $f24, $f12, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = ctx->f12.fl - ctx->f20.fl;
    // 0x80218DB0: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
L_80218DB4:
    // 0x80218DB4: nop

    // 0x80218DB8: bc1fl       L_80218DF0
    if (!c1cs) {
        // 0x80218DBC: add.s       $f0, $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f16.fl;
            goto L_80218DF0;
    }
    goto skip_0;
    // 0x80218DBC: add.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f16.fl;
    skip_0:
    // 0x80218DC0: add.s       $f4, $f12, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f20.fl;
    // 0x80218DC4: ori         $t6, $zero, 0x8888
    ctx->r14 = 0 | 0X8888;
    // 0x80218DC8: srav        $t7, $t6, $v0
    ctx->r15 = S32(SIGNED(ctx->r14) >> (ctx->r2 & 31));
    // 0x80218DCC: sub.s       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x80218DD0: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x80218DD4: nop

    // 0x80218DD8: bc1fl       L_80218DF0
    if (!c1cs) {
        // 0x80218DDC: add.s       $f0, $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f16.fl;
            goto L_80218DF0;
    }
    goto skip_1;
    // 0x80218DDC: add.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f16.fl;
    skip_1:
    // 0x80218DE0: or          $a0, $a0, $t7
    ctx->r4 = ctx->r4 | ctx->r15;
    // 0x80218DE4: andi        $t8, $a0, 0xFFFF
    ctx->r24 = ctx->r4 & 0XFFFF;
    // 0x80218DE8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80218DEC: add.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f16.fl;
L_80218DF0:
    // 0x80218DF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80218DF4: c.le.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl <= ctx->f22.fl;
    // 0x80218DF8: nop

    // 0x80218DFC: bc1fl       L_80218E10
    if (!c1cs) {
        // 0x80218E00: add.s       $f12, $f18, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f18.fl;
            goto L_80218E10;
    }
    goto skip_2;
    // 0x80218E00: add.s       $f12, $f18, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f18.fl;
    skip_2:
    // 0x80218E04: bnel        $v0, $a1, L_80218DB4
    if (ctx->r2 != ctx->r5) {
        // 0x80218E08: c.le.s      $f24, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
            goto L_80218DB4;
    }
    goto skip_3;
    // 0x80218E08: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    skip_3:
L_80218E0C:
    // 0x80218E0C: add.s       $f12, $f18, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f18.fl;
L_80218E10:
    // 0x80218E10: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80218E14: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80218E18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80218E1C: c.le.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl <= ctx->f12.fl;
    // 0x80218E20: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x80218E24: ldc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X18);
    // 0x80218E28: bc1fl       L_80218E98
    if (!c1cs) {
        // 0x80218E2C: and         $v0, $v1, $a0
        ctx->r2 = ctx->r3 & ctx->r4;
            goto L_80218E98;
    }
    goto skip_4;
    // 0x80218E2C: and         $v0, $v1, $a0
    ctx->r2 = ctx->r3 & ctx->r4;
    skip_4:
    // 0x80218E30: sub.s       $f0, $f14, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f20.fl;
    // 0x80218E34: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
L_80218E38:
    // 0x80218E38: nop

    // 0x80218E3C: bc1fl       L_80218E78
    if (!c1cs) {
        // 0x80218E40: add.s       $f2, $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
            goto L_80218E78;
    }
    goto skip_5;
    // 0x80218E40: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
    skip_5:
    // 0x80218E44: add.s       $f6, $f14, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f20.fl;
    // 0x80218E48: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80218E4C: ori         $t0, $zero, 0xF000
    ctx->r8 = 0 | 0XF000;
    // 0x80218E50: sub.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x80218E54: srav        $t1, $t0, $t9
    ctx->r9 = S32(SIGNED(ctx->r8) >> (ctx->r25 & 31));
    // 0x80218E58: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80218E5C: nop

    // 0x80218E60: bc1fl       L_80218E78
    if (!c1cs) {
        // 0x80218E64: add.s       $f2, $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
            goto L_80218E78;
    }
    goto skip_6;
    // 0x80218E64: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
    skip_6:
    // 0x80218E68: or          $v1, $v1, $t1
    ctx->r3 = ctx->r3 | ctx->r9;
    // 0x80218E6C: andi        $t2, $v1, 0xFFFF
    ctx->r10 = ctx->r3 & 0XFFFF;
    // 0x80218E70: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x80218E74: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
L_80218E78:
    // 0x80218E78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80218E7C: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x80218E80: nop

    // 0x80218E84: bc1fl       L_80218E98
    if (!c1cs) {
        // 0x80218E88: and         $v0, $v1, $a0
        ctx->r2 = ctx->r3 & ctx->r4;
            goto L_80218E98;
    }
    goto skip_7;
    // 0x80218E88: and         $v0, $v1, $a0
    ctx->r2 = ctx->r3 & ctx->r4;
    skip_7:
    // 0x80218E8C: bnel        $v0, $a1, L_80218E38
    if (ctx->r2 != ctx->r5) {
        // 0x80218E90: c.le.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
            goto L_80218E38;
    }
    goto skip_8;
    // 0x80218E90: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    skip_8:
    // 0x80218E94: and         $v0, $v1, $a0
    ctx->r2 = ctx->r3 & ctx->r4;
L_80218E98:
    // 0x80218E98: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x80218E9C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x80218EA0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80218EA4: jr          $ra
    // 0x80218EA8: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    return;
    // 0x80218EA8: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
;}
RECOMP_FUNC void func_80218884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80218884: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80218888: sdc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X20, ctx->r29);
    // 0x8021888C: sdc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X18, ctx->r29);
    // 0x80218890: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x80218894: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x80218898: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8021889C: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x802188A0: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802188A4: lwc1        $f24, 0x0($a1)
    ctx->f24.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802188A8: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x802188AC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x802188B0: lwc1        $f22, 0x0($t6)
    ctx->f22.u32l = MEM_W(ctx->r14, 0X0);
    // 0x802188B4: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x802188B8: lwc1        $f26, 0x30($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802188BC: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x802188C0: lwc1        $f2, 0x0($t7)
    ctx->f2.u32l = MEM_W(ctx->r15, 0X0);
    // 0x802188C4: c.eq.s      $f26, $f16
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f26.fl == ctx->f16.fl;
    // 0x802188C8: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x802188CC: sub.s       $f14, $f22, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f14.fl = ctx->f22.fl - ctx->f24.fl;
    // 0x802188D0: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x802188D4: mov.s       $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    ctx->f20.fl = ctx->f16.fl;
    // 0x802188D8: sub.s       $f12, $f26, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f26.fl - ctx->f16.fl;
    // 0x802188DC: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    // 0x802188E0: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x802188E4: sub.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x802188E8: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    // 0x802188EC: swc1        $f2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
    // 0x802188F0: bc1f        L_802189AC
    if (!c1cs) {
        // 0x802188F4: swc1        $f8, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
            goto L_802189AC;
    }
    // 0x802188F4: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x802188F8: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802188FC: lwc1        $f12, 0x84($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80218900: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80218904: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80218908: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8021890C: bc1fl       L_80218924
    if (!c1cs) {
        // 0x80218910: c.lt.s      $f12, $f20
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
            goto L_80218924;
    }
    goto skip_0;
    // 0x80218910: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    skip_0:
    // 0x80218914: mov.s       $f26, $f18
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    ctx->f26.fl = ctx->f18.fl;
    // 0x80218918: b           L_80218938
    // 0x8021891C: mov.s       $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = ctx->f18.fl;
        goto L_80218938;
    // 0x8021891C: mov.s       $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = ctx->f18.fl;
    // 0x80218920: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
L_80218924:
    // 0x80218924: nop

    // 0x80218928: bc1fl       L_8021893C
    if (!c1cs) {
        // 0x8021892C: c.lt.s      $f24, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
            goto L_8021893C;
    }
    goto skip_1;
    // 0x8021892C: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    skip_1:
    // 0x80218930: mov.s       $f26, $f12
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    ctx->f26.fl = ctx->f12.fl;
    // 0x80218934: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
L_80218938:
    // 0x80218938: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
L_8021893C:
    // 0x8021893C: nop

    // 0x80218940: bc1fl       L_80218958
    if (!c1cs) {
        // 0x80218944: c.lt.s      $f14, $f24
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f14.fl < ctx->f24.fl;
            goto L_80218958;
    }
    goto skip_2;
    // 0x80218944: c.lt.s      $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f14.fl < ctx->f24.fl;
    skip_2:
    // 0x80218948: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x8021894C: b           L_80218968
    // 0x80218950: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
        goto L_80218968;
    // 0x80218950: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80218954: c.lt.s      $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f14.fl < ctx->f24.fl;
L_80218958:
    // 0x80218958: nop

    // 0x8021895C: bc1fl       L_8021896C
    if (!c1cs) {
        // 0x80218960: c.lt.s      $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
            goto L_8021896C;
    }
    goto skip_3;
    // 0x80218960: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    skip_3:
    // 0x80218964: mov.s       $f24, $f14
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    ctx->f24.fl = ctx->f14.fl;
L_80218968:
    // 0x80218968: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8021896C:
    // 0x8021896C: nop

    // 0x80218970: bc1fl       L_80218984
    if (!c1cs) {
        // 0x80218974: c.lt.s      $f14, $f22
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.fl < ctx->f22.fl;
            goto L_80218984;
    }
    goto skip_4;
    // 0x80218974: c.lt.s      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.fl < ctx->f22.fl;
    skip_4:
    // 0x80218978: b           L_80218994
    // 0x8021897C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
        goto L_80218994;
    // 0x8021897C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80218980: c.lt.s      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.fl < ctx->f22.fl;
L_80218984:
    // 0x80218984: nop

    // 0x80218988: bc1fl       L_80218998
    if (!c1cs) {
        // 0x8021898C: swc1        $f20, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
            goto L_80218998;
    }
    goto skip_5;
    // 0x8021898C: swc1        $f20, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
    skip_5:
    // 0x80218990: mov.s       $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.fl = ctx->f14.fl;
L_80218994:
    // 0x80218994: swc1        $f20, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
L_80218998:
    // 0x80218998: swc1        $f24, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f24.u32l;
    // 0x8021899C: swc1        $f26, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f26.u32l;
    // 0x802189A0: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x802189A4: b           L_80218C5C
    // 0x802189A8: swc1        $f22, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f22.u32l;
        goto L_80218C5C;
    // 0x802189A8: swc1        $f22, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f22.u32l;
L_802189AC:
    // 0x802189AC: div.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
    // 0x802189B0: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802189B4: lwc1        $f12, 0x84($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802189B8: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802189BC: c.lt.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl < ctx->f18.fl;
    // 0x802189C0: mul.s       $f10, $f0, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x802189C4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802189C8: bc1f        L_802189E4
    if (!c1cs) {
        // 0x802189CC: sub.s       $f16, $f22, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f22.fl - ctx->f10.fl;
            goto L_802189E4;
    }
    // 0x802189CC: sub.s       $f16, $f22, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f22.fl - ctx->f10.fl;
    // 0x802189D0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x802189D4: mov.s       $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = ctx->f18.fl;
    // 0x802189D8: lwc1        $f12, 0x84($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802189DC: b           L_80218A00
    // 0x802189E0: add.s       $f24, $f4, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = ctx->f4.fl + ctx->f16.fl;
        goto L_80218A00;
    // 0x802189E0: add.s       $f24, $f4, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = ctx->f4.fl + ctx->f16.fl;
L_802189E4:
    // 0x802189E4: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x802189E8: nop

    // 0x802189EC: bc1fl       L_80218A04
    if (!c1cs) {
        // 0x802189F0: lwc1        $f0, 0x88($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
            goto L_80218A04;
    }
    goto skip_6;
    // 0x802189F0: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    skip_6:
    // 0x802189F4: mul.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x802189F8: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x802189FC: add.s       $f24, $f6, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = ctx->f6.fl + ctx->f16.fl;
L_80218A00:
    // 0x80218A00: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
L_80218A04:
    // 0x80218A04: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x80218A08: nop

    // 0x80218A0C: bc1fl       L_80218A40
    if (!c1cs) {
        // 0x80218A10: c.lt.s      $f14, $f24
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f14.fl < ctx->f24.fl;
            goto L_80218A40;
    }
    goto skip_7;
    // 0x80218A10: c.lt.s      $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f14.fl < ctx->f24.fl;
    skip_7:
    // 0x80218A14: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80218A18: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x80218A1C: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x80218A20: nop

    // 0x80218A24: bc1t        L_80218A34
    if (c1cs) {
        // 0x80218A28: nop
    
            goto L_80218A34;
    }
    // 0x80218A28: nop

    // 0x80218A2C: sub.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x80218A30: div.s       $f20, $f10, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
L_80218A34:
    // 0x80218A34: b           L_80218A6C
    // 0x80218A38: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
        goto L_80218A6C;
    // 0x80218A38: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80218A3C: c.lt.s      $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f14.fl < ctx->f24.fl;
L_80218A40:
    // 0x80218A40: nop

    // 0x80218A44: bc1fl       L_80218A70
    if (!c1cs) {
        // 0x80218A48: c.lt.s      $f26, $f18
        CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f26.fl < ctx->f18.fl;
            goto L_80218A70;
    }
    goto skip_8;
    // 0x80218A48: c.lt.s      $f26, $f18
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f26.fl < ctx->f18.fl;
    skip_8:
    // 0x80218A4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80218A50: mov.s       $f24, $f14
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    ctx->f24.fl = ctx->f14.fl;
    // 0x80218A54: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x80218A58: nop

    // 0x80218A5C: bc1tl       L_80218A70
    if (c1cs) {
        // 0x80218A60: c.lt.s      $f26, $f18
        CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f26.fl < ctx->f18.fl;
            goto L_80218A70;
    }
    goto skip_9;
    // 0x80218A60: c.lt.s      $f26, $f18
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f26.fl < ctx->f18.fl;
    skip_9:
    // 0x80218A64: sub.s       $f6, $f14, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x80218A68: div.s       $f20, $f6, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
L_80218A6C:
    // 0x80218A6C: c.lt.s      $f26, $f18
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f26.fl < ctx->f18.fl;
L_80218A70:
    // 0x80218A70: nop

    // 0x80218A74: bc1fl       L_80218A90
    if (!c1cs) {
        // 0x80218A78: c.lt.s      $f12, $f26
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f12.fl < ctx->f26.fl;
            goto L_80218A90;
    }
    goto skip_10;
    // 0x80218A78: c.lt.s      $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f12.fl < ctx->f26.fl;
    skip_10:
    // 0x80218A7C: mul.s       $f8, $f2, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x80218A80: mov.s       $f26, $f18
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    ctx->f26.fl = ctx->f18.fl;
    // 0x80218A84: b           L_80218AA8
    // 0x80218A88: add.s       $f22, $f8, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f8.fl + ctx->f16.fl;
        goto L_80218AA8;
    // 0x80218A88: add.s       $f22, $f8, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80218A8C: c.lt.s      $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f12.fl < ctx->f26.fl;
L_80218A90:
    // 0x80218A90: nop

    // 0x80218A94: bc1fl       L_80218AAC
    if (!c1cs) {
        // 0x80218A98: c.lt.s      $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
            goto L_80218AAC;
    }
    goto skip_11;
    // 0x80218A98: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    skip_11:
    // 0x80218A9C: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x80218AA0: mov.s       $f26, $f12
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    ctx->f26.fl = ctx->f12.fl;
    // 0x80218AA4: add.s       $f22, $f10, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f10.fl + ctx->f16.fl;
L_80218AA8:
    // 0x80218AA8: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_80218AAC:
    // 0x80218AAC: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80218AB0: bc1fl       L_80218AE0
    if (!c1cs) {
        // 0x80218AB4: c.lt.s      $f14, $f22
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.fl < ctx->f22.fl;
            goto L_80218AE0;
    }
    goto skip_12;
    // 0x80218AB4: c.lt.s      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.fl < ctx->f22.fl;
    skip_12:
    // 0x80218AB8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80218ABC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80218AC0: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x80218AC4: nop

    // 0x80218AC8: bc1tl       L_80218B10
    if (c1cs) {
        // 0x80218ACC: c.eq.s      $f20, $f12
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl == ctx->f12.fl;
            goto L_80218B10;
    }
    goto skip_13;
    // 0x80218ACC: c.eq.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl == ctx->f12.fl;
    skip_13:
    // 0x80218AD0: sub.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x80218AD4: b           L_80218B0C
    // 0x80218AD8: div.s       $f26, $f6, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
        goto L_80218B0C;
    // 0x80218AD8: div.s       $f26, $f6, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80218ADC: c.lt.s      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.fl < ctx->f22.fl;
L_80218AE0:
    // 0x80218AE0: nop

    // 0x80218AE4: bc1fl       L_80218B10
    if (!c1cs) {
        // 0x80218AE8: c.eq.s      $f20, $f12
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl == ctx->f12.fl;
            goto L_80218B10;
    }
    goto skip_14;
    // 0x80218AE8: c.eq.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl == ctx->f12.fl;
    skip_14:
    // 0x80218AEC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80218AF0: mov.s       $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.fl = ctx->f14.fl;
    // 0x80218AF4: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x80218AF8: nop

    // 0x80218AFC: bc1tl       L_80218B10
    if (c1cs) {
        // 0x80218B00: c.eq.s      $f20, $f12
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl == ctx->f12.fl;
            goto L_80218B10;
    }
    goto skip_15;
    // 0x80218B00: c.eq.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl == ctx->f12.fl;
    skip_15:
    // 0x80218B04: sub.s       $f10, $f14, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x80218B08: div.s       $f26, $f10, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
L_80218B0C:
    // 0x80218B0C: c.eq.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl == ctx->f12.fl;
L_80218B10:
    // 0x80218B10: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80218B14: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80218B18: bc1tl       L_80218B5C
    if (c1cs) {
        // 0x80218B1C: c.eq.s      $f24, $f2
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl == ctx->f2.fl;
            goto L_80218B5C;
    }
    goto skip_16;
    // 0x80218B1C: c.eq.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl == ctx->f2.fl;
    skip_16:
    // 0x80218B20: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80218B24: nop

    // 0x80218B28: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80218B2C: nop

    // 0x80218B30: bc1tl       L_80218B5C
    if (c1cs) {
        // 0x80218B34: c.eq.s      $f24, $f2
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl == ctx->f2.fl;
            goto L_80218B5C;
    }
    goto skip_17;
    // 0x80218B34: c.eq.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl == ctx->f2.fl;
    skip_17:
    // 0x80218B38: sub.s       $f8, $f20, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f20.fl - ctx->f12.fl;
    // 0x80218B3C: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80218B40: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80218B44: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80218B48: mul.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x80218B4C: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80218B50: b           L_80218BA0
    // 0x80218B54: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
        goto L_80218BA0;
    // 0x80218B54: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x80218B58: c.eq.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl == ctx->f2.fl;
L_80218B5C:
    // 0x80218B5C: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80218B60: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80218B64: bc1tl       L_80218BA4
    if (c1cs) {
        // 0x80218B68: lwc1        $f12, 0x30($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
            goto L_80218BA4;
    }
    goto skip_18;
    // 0x80218B68: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    skip_18:
    // 0x80218B6C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80218B70: nop

    // 0x80218B74: c.eq.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl == ctx->f6.fl;
    // 0x80218B78: nop

    // 0x80218B7C: bc1tl       L_80218BA4
    if (c1cs) {
        // 0x80218B80: lwc1        $f12, 0x30($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
            goto L_80218BA4;
    }
    goto skip_19;
    // 0x80218B80: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    skip_19:
    // 0x80218B84: sub.s       $f4, $f24, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f24.fl - ctx->f2.fl;
    // 0x80218B88: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80218B8C: div.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80218B90: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80218B94: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80218B98: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80218B9C: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
L_80218BA0:
    // 0x80218BA0: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
L_80218BA4:
    // 0x80218BA4: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80218BA8: c.eq.s      $f26, $f12
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f26.fl == ctx->f12.fl;
    // 0x80218BAC: nop

    // 0x80218BB0: bc1tl       L_80218BF0
    if (c1cs) {
        // 0x80218BB4: lwc1        $f12, 0x2C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_80218BF0;
    }
    goto skip_20;
    // 0x80218BB4: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    skip_20:
    // 0x80218BB8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80218BBC: nop

    // 0x80218BC0: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x80218BC4: nop

    // 0x80218BC8: bc1tl       L_80218BF0
    if (c1cs) {
        // 0x80218BCC: lwc1        $f12, 0x2C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_80218BF0;
    }
    goto skip_21;
    // 0x80218BCC: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    skip_21:
    // 0x80218BD0: sub.s       $f4, $f26, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f26.fl - ctx->f12.fl;
    // 0x80218BD4: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80218BD8: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80218BDC: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x80218BE0: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80218BE4: b           L_80218C34
    // 0x80218BE8: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
        goto L_80218C34;
    // 0x80218BE8: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x80218BEC: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
L_80218BF0:
    // 0x80218BF0: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80218BF4: c.eq.s      $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f22.fl == ctx->f12.fl;
    // 0x80218BF8: nop

    // 0x80218BFC: bc1tl       L_80218C38
    if (c1cs) {
        // 0x80218C00: swc1        $f20, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
            goto L_80218C38;
    }
    goto skip_22;
    // 0x80218C00: swc1        $f20, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
    skip_22:
    // 0x80218C04: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80218C08: nop

    // 0x80218C0C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80218C10: nop

    // 0x80218C14: bc1tl       L_80218C38
    if (c1cs) {
        // 0x80218C18: swc1        $f20, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
            goto L_80218C38;
    }
    goto skip_23;
    // 0x80218C18: swc1        $f20, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
    skip_23:
    // 0x80218C1C: sub.s       $f8, $f22, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f22.fl - ctx->f12.fl;
    // 0x80218C20: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80218C24: div.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80218C28: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80218C2C: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80218C30: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
L_80218C34:
    // 0x80218C34: swc1        $f20, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
L_80218C38:
    // 0x80218C38: swc1        $f24, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f24.u32l;
    // 0x80218C3C: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80218C40: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x80218C44: swc1        $f26, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f26.u32l;
    // 0x80218C48: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x80218C4C: swc1        $f22, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f22.u32l;
    // 0x80218C50: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80218C54: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80218C58: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
L_80218C5C:
    // 0x80218C5C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x80218C60: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x80218C64: ldc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X18);
    // 0x80218C68: ldc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X20);
    // 0x80218C6C: jr          $ra
    // 0x80218C70: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80218C70: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8021157C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021157C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80211580: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80211584: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80211588: bne         $a0, $at, L_802115B0
    if (ctx->r4 != ctx->r1) {
        // 0x8021158C: sw          $a3, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r7;
            goto L_802115B0;
    }
    // 0x8021158C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80211590: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80211594: swc1        $f12, -0x3C4C($at)
    MEM_W(-0X3C4C, ctx->r1) = ctx->f12.u32l;
    // 0x80211598: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x8021159C: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x802115A0: swc1        $f14, -0x3C48($at)
    MEM_W(-0X3C48, ctx->r1) = ctx->f14.u32l;
    // 0x802115A4: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802115A8: jr          $ra
    // 0x802115AC: swc1        $f4, -0x3C44($at)
    MEM_W(-0X3C44, ctx->r1) = ctx->f4.u32l;
    return;
    // 0x802115AC: swc1        $f4, -0x3C44($at)
    MEM_W(-0X3C44, ctx->r1) = ctx->f4.u32l;
L_802115B0:
    // 0x802115B0: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802115B4: swc1        $f12, -0x3C58($at)
    MEM_W(-0X3C58, ctx->r1) = ctx->f12.u32l;
    // 0x802115B8: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x802115BC: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802115C0: swc1        $f14, -0x3C54($at)
    MEM_W(-0X3C54, ctx->r1) = ctx->f14.u32l;
    // 0x802115C4: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802115C8: swc1        $f6, -0x3C50($at)
    MEM_W(-0X3C50, ctx->r1) = ctx->f6.u32l;
    // 0x802115CC: jr          $ra
    // 0x802115D0: nop

    return;
    // 0x802115D0: nop

;}
