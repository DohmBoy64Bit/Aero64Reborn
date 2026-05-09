#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80244770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80244770: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80244774: bne         $a1, $at, L_80244798
    if (ctx->r5 != ctx->r1) {
        // 0x80244778: lw          $v0, 0x1C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X1C);
            goto L_80244798;
    }
    // 0x80244778: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x8024477C: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x80244780: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80244784: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80244788: sw          $a2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r6;
    // 0x8024478C: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x80244790: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80244794: sw          $t0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r8;
L_80244798:
    // 0x80244798: jr          $ra
    // 0x8024479C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8024479C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80202F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80202F38: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80202F3C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80202F40: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202F44: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80202F48: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80202F4C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80202F50: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80202F54: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80202F58: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80202F5C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80202F60: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80202F64: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80202F68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80202F6C: lw          $a1, 0x6DE0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6DE0);
    // 0x80202F70: jal         0x802011D0
    // 0x80202F74: addiu       $a0, $a0, 0x2348
    ctx->r4 = ADD32(ctx->r4, 0X2348);
    func_802011D0(rdram, ctx);
        goto after_0;
    // 0x80202F74: addiu       $a0, $a0, 0x2348
    ctx->r4 = ADD32(ctx->r4, 0X2348);
    after_0:
    // 0x80202F78: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80202F7C: lw          $t6, 0x6DE0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6DE0);
    // 0x80202F80: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x80202F84: addiu       $s3, $s3, 0x6DC0
    ctx->r19 = ADD32(ctx->r19, 0X6DC0);
    // 0x80202F88: blez        $t6, L_802031EC
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80202F8C: or          $fp, $zero, $zero
        ctx->r30 = 0 | 0;
            goto L_802031EC;
    }
    // 0x80202F8C: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x80202F90: lui         $s6, 0x8025
    ctx->r22 = S32(0X8025 << 16);
    // 0x80202F94: addiu       $s6, $s6, 0x6DE4
    ctx->r22 = ADD32(ctx->r22, 0X6DE4);
    // 0x80202F98: addiu       $s7, $zero, 0xB4
    ctx->r23 = ADD32(0, 0XB4);
    // 0x80202F9C: addiu       $s5, $zero, 0xF
    ctx->r21 = ADD32(0, 0XF);
    // 0x80202FA0: addiu       $s4, $zero, 0xFF
    ctx->r20 = ADD32(0, 0XFF);
L_80202FA4:
    // 0x80202FA4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202FA8: addiu       $a0, $a0, 0x2364
    ctx->r4 = ADD32(ctx->r4, 0X2364);
    // 0x80202FAC: jal         0x802011D0
    // 0x80202FB0: lbu         $a1, 0x0($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X0);
    func_802011D0(rdram, ctx);
        goto after_1;
    // 0x80202FB0: lbu         $a1, 0x0($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X0);
    after_1:
    // 0x80202FB4: jal         0x802037EC
    // 0x80202FB8: lbu         $a0, 0x0($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X0);
    func_802037EC(rdram, ctx);
        goto after_2;
    // 0x80202FB8: lbu         $a0, 0x0($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X0);
    after_2:
    // 0x80202FBC: lbu         $s2, 0x0($s3)
    ctx->r18 = MEM_BU(ctx->r19, 0X0);
    // 0x80202FC0: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x80202FC4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202FC8: multu       $s2, $s7
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80202FCC: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x80202FD0: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x80202FD4: addiu       $t3, $t3, 0x6DD0
    ctx->r11 = ADD32(ctx->r11, 0X6DD0);
    // 0x80202FD8: addiu       $a0, $a0, 0x2378
    ctx->r4 = ADD32(ctx->r4, 0X2378);
    // 0x80202FDC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80202FE0: mflo        $t8
    ctx->r24 = lo;
    // 0x80202FE4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80202FE8: lw          $v0, 0xA0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0XA0);
    // 0x80202FEC: bnel        $v0, $zero, L_8020308C
    if (ctx->r2 != 0) {
        // 0x80202FF0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8020308C;
    }
    goto skip_0;
    // 0x80202FF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
    // 0x80202FF4: lbu         $t0, 0x6DD0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X6DD0);
    // 0x80202FF8: lui         $t1, 0x8025
    ctx->r9 = S32(0X8025 << 16);
    // 0x80202FFC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80203000: beq         $s4, $t0, L_80203028
    if (ctx->r20 == ctx->r8) {
        // 0x80203004: addiu       $t1, $t1, 0x6DD0
        ctx->r9 = ADD32(ctx->r9, 0X6DD0);
            goto L_80203028;
    }
    // 0x80203004: addiu       $t1, $t1, 0x6DD0
    ctx->r9 = ADD32(ctx->r9, 0X6DD0);
    // 0x80203008: addu        $s0, $zero, $t1
    ctx->r16 = ADD32(0, ctx->r9);
    // 0x8020300C: lbu         $t2, 0x1($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1);
L_80203010:
    // 0x80203010: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80203014: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80203018: beql        $s4, $t2, L_8020302C
    if (ctx->r20 == ctx->r10) {
        // 0x8020301C: addu        $s0, $s1, $t3
        ctx->r16 = ADD32(ctx->r17, ctx->r11);
            goto L_8020302C;
    }
    goto skip_1;
    // 0x8020301C: addu        $s0, $s1, $t3
    ctx->r16 = ADD32(ctx->r17, ctx->r11);
    skip_1:
    // 0x80203020: bnel        $s1, $s5, L_80203010
    if (ctx->r17 != ctx->r21) {
        // 0x80203024: lbu         $t2, 0x1($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X1);
            goto L_80203010;
    }
    goto skip_2;
    // 0x80203024: lbu         $t2, 0x1($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1);
    skip_2:
L_80203028:
    // 0x80203028: addu        $s0, $s1, $t3
    ctx->r16 = ADD32(ctx->r17, ctx->r11);
L_8020302C:
    // 0x8020302C: lbu         $a2, 0x0($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X0);
    // 0x80203030: jal         0x802011D0
    // 0x80203034: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_802011D0(rdram, ctx);
        goto after_3;
    // 0x80203034: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_3:
    // 0x80203038: lbu         $s2, 0x0($s3)
    ctx->r18 = MEM_BU(ctx->r19, 0X0);
    // 0x8020303C: lw          $t4, 0x0($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X0);
    // 0x80203040: multu       $s2, $s7
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80203044: sb          $s2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r18;
    // 0x80203048: mflo        $t5
    ctx->r13 = lo;
    // 0x8020304C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80203050: sb          $s1, 0xAD($t6)
    MEM_B(0XAD, ctx->r14) = ctx->r17;
    // 0x80203054: jal         0x8020321C
    // 0x80203058: lbu         $a0, 0x0($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X0);
    func_8020321C(rdram, ctx);
        goto after_4;
    // 0x80203058: lbu         $a0, 0x0($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X0);
    after_4:
    // 0x8020305C: lbu         $s2, 0x0($s3)
    ctx->r18 = MEM_BU(ctx->r19, 0X0);
    // 0x80203060: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x80203064: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80203068: subu        $t8, $t8, $s2
    ctx->r24 = SUB32(ctx->r24, ctx->r18);
    // 0x8020306C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80203070: subu        $t8, $t8, $s2
    ctx->r24 = SUB32(ctx->r24, ctx->r18);
    // 0x80203074: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80203078: addu        $t8, $t8, $s2
    ctx->r24 = ADD32(ctx->r24, ctx->r18);
    // 0x8020307C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80203080: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80203084: lw          $v0, 0xA0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0XA0);
    // 0x80203088: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8020308C:
    // 0x8020308C: bnel        $v0, $at, L_802030CC
    if (ctx->r2 != ctx->r1) {
        // 0x80203090: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802030CC;
    }
    goto skip_3;
    // 0x80203090: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_3:
    // 0x80203094: jal         0x8020321C
    // 0x80203098: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_8020321C(rdram, ctx);
        goto after_5;
    // 0x80203098: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_5:
    // 0x8020309C: lbu         $s2, 0x0($s3)
    ctx->r18 = MEM_BU(ctx->r19, 0X0);
    // 0x802030A0: lw          $t0, 0x0($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X0);
    // 0x802030A4: sll         $t1, $s2, 2
    ctx->r9 = S32(ctx->r18 << 2);
    // 0x802030A8: subu        $t1, $t1, $s2
    ctx->r9 = SUB32(ctx->r9, ctx->r18);
    // 0x802030AC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x802030B0: subu        $t1, $t1, $s2
    ctx->r9 = SUB32(ctx->r9, ctx->r18);
    // 0x802030B4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x802030B8: addu        $t1, $t1, $s2
    ctx->r9 = ADD32(ctx->r9, ctx->r18);
    // 0x802030BC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x802030C0: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x802030C4: lw          $v0, 0xA0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0XA0);
    // 0x802030C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_802030CC:
    // 0x802030CC: bne         $v0, $at, L_802031A4
    if (ctx->r2 != ctx->r1) {
        // 0x802030D0: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_802031A4;
    }
    // 0x802030D0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802030D4: addiu       $a0, $a0, 0x23A4
    ctx->r4 = ADD32(ctx->r4, 0X23A4);
    // 0x802030D8: jal         0x802011D0
    // 0x802030DC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_802011D0(rdram, ctx);
        goto after_6;
    // 0x802030DC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_6:
    // 0x802030E0: lbu         $t4, 0x0($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X0);
    // 0x802030E4: lw          $t3, 0x0($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X0);
    // 0x802030E8: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x802030EC: multu       $t4, $s7
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802030F0: lw          $t9, -0x4678($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4678);
    // 0x802030F4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802030F8: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
    // 0x802030FC: mflo        $t5
    ctx->r13 = lo;
    // 0x80203100: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80203104: lbu         $t7, 0xAD($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XAD);
    // 0x80203108: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8020310C: addu        $t0, $t9, $t8
    ctx->r8 = ADD32(ctx->r25, ctx->r24);
    // 0x80203110: jal         0x80234E90
    // 0x80203114: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    func_80234E90(rdram, ctx);
        goto after_7;
    // 0x80203114: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    after_7:
    // 0x80203118: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8020311C: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
    // 0x80203120: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80203124: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80203128: lw          $t1, 0x3C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X3C);
    // 0x8020312C: addiu       $a1, $a1, 0x23E0
    ctx->r5 = ADD32(ctx->r5, 0X23E0);
    // 0x80203130: addiu       $a2, $zero, 0x411
    ctx->r6 = ADD32(0, 0X411);
    // 0x80203134: bne         $t1, $at, L_80203150
    if (ctx->r9 != ctx->r1) {
        // 0x80203138: nop
    
            goto L_80203150;
    }
    // 0x80203138: nop

    // 0x8020313C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203140: jal         0x80231C9C
    // 0x80203144: addiu       $a0, $a0, 0x23C8
    ctx->r4 = ADD32(ctx->r4, 0X23C8);
    func_80231C9C(rdram, ctx);
        goto after_8;
    // 0x80203144: addiu       $a0, $a0, 0x23C8
    ctx->r4 = ADD32(ctx->r4, 0X23C8);
    after_8:
    // 0x80203148: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8020314C: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
L_80203150:
    // 0x80203150: jal         0x80234EB0
    // 0x80203154: nop

    func_80234EB0(rdram, ctx);
        goto after_9;
    // 0x80203154: nop

    after_9:
    // 0x80203158: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020315C: bne         $v0, $at, L_802031A4
    if (ctx->r2 != ctx->r1) {
        // 0x80203160: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_802031A4;
    }
    // 0x80203160: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203164: addiu       $a0, $a0, 0x23E8
    ctx->r4 = ADD32(ctx->r4, 0X23E8);
    // 0x80203168: jal         0x802011D0
    // 0x8020316C: lbu         $a1, 0x0($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X0);
    func_802011D0(rdram, ctx);
        goto after_10;
    // 0x8020316C: lbu         $a1, 0x0($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X0);
    after_10:
    // 0x80203170: lbu         $t3, 0x0($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0X0);
    // 0x80203174: lw          $t4, 0x0($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X0);
    // 0x80203178: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x8020317C: multu       $t3, $s7
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80203180: mflo        $t5
    ctx->r13 = lo;
    // 0x80203184: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80203188: sw          $t2, 0xA0($t6)
    MEM_W(0XA0, ctx->r14) = ctx->r10;
    // 0x8020318C: lbu         $t9, 0x0($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X0);
    // 0x80203190: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x80203194: multu       $t9, $s7
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80203198: mflo        $t8
    ctx->r24 = lo;
    // 0x8020319C: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x802031A0: sb          $zero, 0xB0($t0)
    MEM_B(0XB0, ctx->r8) = 0;
L_802031A4:
    // 0x802031A4: lbu         $s2, 0x0($s3)
    ctx->r18 = MEM_BU(ctx->r19, 0X0);
    // 0x802031A8: lw          $t1, 0x0($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X0);
    // 0x802031AC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802031B0: multu       $s2, $s7
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802031B4: mflo        $t3
    ctx->r11 = lo;
    // 0x802031B8: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x802031BC: lw          $t5, 0xA0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XA0);
    // 0x802031C0: bne         $t5, $at, L_802031D0
    if (ctx->r13 != ctx->r1) {
        // 0x802031C4: nop
    
            goto L_802031D0;
    }
    // 0x802031C4: nop

    // 0x802031C8: jal         0x80203464
    // 0x802031CC: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_80203464(rdram, ctx);
        goto after_11;
    // 0x802031CC: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_11:
L_802031D0:
    // 0x802031D0: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x802031D4: lw          $t2, 0x6DE0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6DE0);
    // 0x802031D8: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x802031DC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802031E0: slt         $at, $fp, $t2
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x802031E4: bne         $at, $zero, L_80202FA4
    if (ctx->r1 != 0) {
        // 0x802031E8: nop
    
            goto L_80202FA4;
    }
    // 0x802031E8: nop

L_802031EC:
    // 0x802031EC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802031F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802031F4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802031F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802031FC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80203200: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80203204: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80203208: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8020320C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80203210: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80203214: jr          $ra
    // 0x80203218: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80203218: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022261C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022261C: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80222620: addiu       $a1, $a1, 0x3B90
    ctx->r5 = ADD32(ctx->r5, 0X3B90);
    // 0x80222624: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222628: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022262C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80222630: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80222634: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80222638: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x8022263C: ori         $t8, $t8, 0x3C0
    ctx->r24 = ctx->r24 | 0X3C0;
    // 0x80222640: lui         $t7, 0xED00
    ctx->r15 = S32(0XED00 << 16);
    // 0x80222644: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80222648: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8022264C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222650: lui         $a2, 0xE700
    ctx->r6 = S32(0XE700 << 16);
    // 0x80222654: lui         $t8, 0xF0A
    ctx->r24 = S32(0XF0A << 16);
    // 0x80222658: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8022265C: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80222660: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80222664: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222668: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022266C: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x80222670: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x80222674: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80222678: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8022267C: ori         $t8, $t8, 0x4000
    ctx->r24 = ctx->r24 | 0X4000;
    // 0x80222680: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80222684: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80222688: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022268C: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x80222690: ori         $t7, $t7, 0x1402
    ctx->r15 = ctx->r15 | 0X1402;
    // 0x80222694: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80222698: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8022269C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x802226A0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802226A4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802226A8: lui         $t8, 0x30
    ctx->r24 = S32(0X30 << 16);
    // 0x802226AC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802226B0: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802226B4: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802226B8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802226BC: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x802226C0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802226C4: lui         $t8, 0xFFFC
    ctx->r24 = S32(0XFFFC << 16);
    // 0x802226C8: ori         $t8, $t8, 0xFFFC
    ctx->r24 = ctx->r24 | 0XFFFC;
    // 0x802226CC: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x802226D0: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x802226D4: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x802226D8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802226DC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802226E0: lui         $t7, 0xF700
    ctx->r15 = S32(0XF700 << 16);
    // 0x802226E4: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802226E8: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802226EC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802226F0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x802226F4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802226F8: lui         $t7, 0xFF10
    ctx->r15 = S32(0XFF10 << 16);
    // 0x802226FC: ori         $t7, $t7, 0x13F
    ctx->r15 = ctx->r15 | 0X13F;
    // 0x80222700: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80222704: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80222708: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x8022270C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222710: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222714: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80222718: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8022271C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80222720: lw          $a0, 0x4388($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4388);
    // 0x80222724: jal         0x802375F0
    // 0x80222728: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    func_802375F0(rdram, ctx);
        goto after_0;
    // 0x80222728: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8022272C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80222730: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80222734: addiu       $a1, $a1, 0x3B90
    ctx->r5 = ADD32(ctx->r5, 0X3B90);
    // 0x80222738: sw          $v0, 0x4($ra)
    MEM_W(0X4, ctx->r31) = ctx->r2;
    // 0x8022273C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222740: lui         $a2, 0xE700
    ctx->r6 = S32(0XE700 << 16);
    // 0x80222744: lui         $t6, 0xF64F
    ctx->r14 = S32(0XF64F << 16);
    // 0x80222748: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8022274C: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80222750: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80222754: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222758: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022275C: ori         $t6, $t6, 0xC3BC
    ctx->r14 = ctx->r14 | 0XC3BC;
    // 0x80222760: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80222764: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80222768: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8022276C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80222770: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222774: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222778: lui         $t9, 0xFF10
    ctx->r25 = S32(0XFF10 << 16);
    // 0x8022277C: ori         $t9, $t9, 0x13F
    ctx->r25 = ctx->r25 | 0X13F;
    // 0x80222780: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80222784: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80222788: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x8022278C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222790: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222794: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80222798: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8022279C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x802227A0: lw          $a0, -0x17A8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X17A8);
    // 0x802227A4: jal         0x802375F0
    // 0x802227A8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_802375F0(rdram, ctx);
        goto after_1;
    // 0x802227A8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x802227AC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x802227B0: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802227B4: addiu       $a1, $a1, 0x3B90
    ctx->r5 = ADD32(ctx->r5, 0X3B90);
    // 0x802227B8: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x802227BC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802227C0: lui         $a2, 0xE700
    ctx->r6 = S32(0XE700 << 16);
    // 0x802227C4: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x802227C8: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802227CC: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802227D0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802227D4: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x802227D8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802227DC: ori         $t8, $t8, 0x1402
    ctx->r24 = ctx->r24 | 0X1402;
    // 0x802227E0: lui         $t9, 0x10
    ctx->r25 = S32(0X10 << 16);
    // 0x802227E4: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x802227E8: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x802227EC: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x802227F0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x802227F4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802227F8: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802227FC: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80222800: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222804: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80222808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022280C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80222810: jr          $ra
    // 0x80222814: nop

    return;
    // 0x80222814: nop

;}
RECOMP_FUNC void func_80205BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205BBC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80205BC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80205BC4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80205BC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80205BCC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80205BD0: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80205BD4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80205BD8: addiu       $a2, $a2, 0xBEE
    ctx->r6 = ADD32(ctx->r6, 0XBEE);
    // 0x80205BDC: jal         0x80231C58
    // 0x80205BE0: addiu       $a1, $a1, 0x29A8
    ctx->r5 = ADD32(ctx->r5, 0X29A8);
    func_80231C58(rdram, ctx);
        goto after_0;
    // 0x80205BE0: addiu       $a1, $a1, 0x29A8
    ctx->r5 = ADD32(ctx->r5, 0X29A8);
    after_0:
    // 0x80205BE4: bne         $v0, $zero, L_80205C68
    if (ctx->r2 != 0) {
        // 0x80205BE8: lw          $t6, 0x28($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X28);
            goto L_80205C68;
    }
    // 0x80205BE8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80205BEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80205BF0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80205BF4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80205BF8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80205BFC: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x80205C00: lw          $t8, -0x4160($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4160);
    // 0x80205C04: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80205C08: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80205C0C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80205C10: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80205C14: addiu       $a0, $v0, 0x88
    ctx->r4 = ADD32(ctx->r2, 0X88);
    // 0x80205C18: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80205C1C: jal         0x80228DE0
    // 0x80205C20: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80205C20: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80205C24: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80205C28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80205C2C: jal         0x8020670C
    // 0x80205C30: addiu       $a0, $v0, 0xC8
    ctx->r4 = ADD32(ctx->r2, 0XC8);
    func_8020670C(rdram, ctx);
        goto after_2;
    // 0x80205C30: addiu       $a0, $v0, 0xC8
    ctx->r4 = ADD32(ctx->r2, 0XC8);
    after_2:
    // 0x80205C34: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80205C38: lwc1        $f4, 0x30($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30);
    // 0x80205C3C: swc1        $f4, 0x108($v0)
    MEM_W(0X108, ctx->r2) = ctx->f4.u32l;
    // 0x80205C40: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x80205C44: swc1        $f6, 0x10C($v0)
    MEM_W(0X10C, ctx->r2) = ctx->f6.u32l;
    // 0x80205C48: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x80205C4C: swc1        $f8, 0x110($v0)
    MEM_W(0X110, ctx->r2) = ctx->f8.u32l;
    // 0x80205C50: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80205C54: swc1        $f10, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->f10.u32l;
    // 0x80205C58: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80205C5C: swc1        $f16, 0x118($v0)
    MEM_W(0X118, ctx->r2) = ctx->f16.u32l;
    // 0x80205C60: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x80205C64: swc1        $f18, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->f18.u32l;
L_80205C68:
    // 0x80205C68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80205C6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80205C70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80205C74: jr          $ra
    // 0x80205C78: nop

    return;
    // 0x80205C78: nop

;}
RECOMP_FUNC void func_8020455C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020455C: addiu       $sp, $sp, -0x170
    ctx->r29 = ADD32(ctx->r29, -0X170);
    // 0x80204560: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80204564: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80204568: jal         0x80204530
    // 0x8020456C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_80204530(rdram, ctx);
        goto after_0;
    // 0x8020456C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_0:
    // 0x80204570: jal         0x80204530
    // 0x80204574: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    func_80204530(rdram, ctx);
        goto after_1;
    // 0x80204574: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_1:
    // 0x80204578: lui         $a3, 0x8000
    ctx->r7 = S32(0X8000 << 16);
    // 0x8020457C: ori         $a3, $a3, 0x400
    ctx->r7 = ctx->r7 | 0X400;
    // 0x80204580: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80204584: addiu       $a0, $a0, 0x2860
    ctx->r4 = ADD32(ctx->r4, 0X2860);
    // 0x80204588: addu        $a2, $v0, $a3
    ctx->r6 = ADD32(ctx->r2, ctx->r7);
    // 0x8020458C: jal         0x80231A24
    // 0x80204590: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x80204590: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    after_2:
    // 0x80204594: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80204598: lhu         $a0, 0xBFC($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XBFC);
    // 0x8020459C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x802045A0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x802045A4: jal         0x8022BA58
    // 0x802045A8: sll         $a0, $t6, 2
    ctx->r4 = S32(ctx->r14 << 2);
    func_8022BA58(rdram, ctx);
        goto after_3;
    // 0x802045A8: sll         $a0, $t6, 2
    ctx->r4 = S32(ctx->r14 << 2);
    after_3:
    // 0x802045AC: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x802045B0: addiu       $v1, $v1, -0x4744
    ctx->r3 = ADD32(ctx->r3, -0X4744);
    // 0x802045B4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x802045B8: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x802045BC: lhu         $a2, 0xBFC($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0XBFC);
    // 0x802045C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802045C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802045C8: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x802045CC: addu        $t7, $t7, $a2
    ctx->r15 = ADD32(ctx->r15, ctx->r6);
    // 0x802045D0: jal         0x8022B780
    // 0x802045D4: sll         $a2, $t7, 2
    ctx->r6 = S32(ctx->r15 << 2);
    func_8022B780(rdram, ctx);
        goto after_4;
    // 0x802045D4: sll         $a2, $t7, 2
    ctx->r6 = S32(ctx->r15 << 2);
    after_4:
    // 0x802045D8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802045DC: lhu         $a0, 0xBFC($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XBFC);
    // 0x802045E0: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x802045E4: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x802045E8: jal         0x8022BA58
    // 0x802045EC: sll         $a0, $t8, 3
    ctx->r4 = S32(ctx->r24 << 3);
    func_8022BA58(rdram, ctx);
        goto after_5;
    // 0x802045EC: sll         $a0, $t8, 3
    ctx->r4 = S32(ctx->r24 << 3);
    after_5:
    // 0x802045F0: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x802045F4: addiu       $v1, $v1, -0x4730
    ctx->r3 = ADD32(ctx->r3, -0X4730);
    // 0x802045F8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x802045FC: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80204600: lhu         $a2, 0xBFC($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0XBFC);
    // 0x80204604: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80204608: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020460C: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x80204610: subu        $t9, $t9, $a2
    ctx->r25 = SUB32(ctx->r25, ctx->r6);
    // 0x80204614: jal         0x8022B780
    // 0x80204618: sll         $a2, $t9, 3
    ctx->r6 = S32(ctx->r25 << 3);
    func_8022B780(rdram, ctx);
        goto after_6;
    // 0x80204618: sll         $a2, $t9, 3
    ctx->r6 = S32(ctx->r25 << 3);
    after_6:
    // 0x8020461C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80204620: lhu         $a0, 0xBFC($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XBFC);
    // 0x80204624: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x80204628: jal         0x8022BA58
    // 0x8020462C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8022BA58(rdram, ctx);
        goto after_7;
    // 0x8020462C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_7:
    // 0x80204630: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x80204634: addiu       $v1, $v1, -0x4710
    ctx->r3 = ADD32(ctx->r3, -0X4710);
    // 0x80204638: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8020463C: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80204640: lhu         $a2, 0xBFC($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0XBFC);
    // 0x80204644: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80204648: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020464C: sll         $t1, $a2, 2
    ctx->r9 = S32(ctx->r6 << 2);
    // 0x80204650: jal         0x8022B780
    // 0x80204654: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    func_8022B780(rdram, ctx);
        goto after_8;
    // 0x80204654: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    after_8:
    // 0x80204658: jal         0x802011EC
    // 0x8020465C: nop

    func_802011EC(rdram, ctx);
        goto after_9;
    // 0x8020465C: nop

    after_9:
    // 0x80204660: jal         0x802000A0
    // 0x80204664: nop

    func_802000A0(rdram, ctx);
        goto after_10;
    // 0x80204664: nop

    after_10:
    // 0x80204668: jal         0x80203930
    // 0x8020466C: nop

    func_80203930(rdram, ctx);
        goto after_11;
    // 0x8020466C: nop

    after_11:
    // 0x80204670: jal         0x80204530
    // 0x80204674: nop

    func_80204530(rdram, ctx);
        goto after_12;
    // 0x80204674: nop

    after_12:
    // 0x80204678: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8020467C: lw          $a0, -0x1A54($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A54);
    // 0x80204680: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80204684: jal         0x8022B780
    // 0x80204688: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_8022B780(rdram, ctx);
        goto after_13;
    // 0x80204688: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_13:
    // 0x8020468C: jal         0x80204530
    // 0x80204690: nop

    func_80204530(rdram, ctx);
        goto after_14;
    // 0x80204690: nop

    after_14:
    // 0x80204694: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80204698: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8020469C: lw          $a1, -0x1A54($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1A54);
    // 0x802046A0: addiu       $a0, $a0, -0x46E8
    ctx->r4 = ADD32(ctx->r4, -0X46E8);
    // 0x802046A4: jal         0x80235200
    // 0x802046A8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_80235200(rdram, ctx);
        goto after_15;
    // 0x802046A8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_15:
    // 0x802046AC: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x802046B0: addiu       $a0, $a0, -0x46D8
    ctx->r4 = ADD32(ctx->r4, -0X46D8);
    // 0x802046B4: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x802046B8: lui         $t3, 0x8026
    ctx->r11 = S32(0X8026 << 16);
    // 0x802046BC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802046C0: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x802046C4: addiu       $t3, $t3, -0x46E8
    ctx->r11 = ADD32(ctx->r11, -0X46E8);
    // 0x802046C8: andi        $t4, $t2, 0xFF
    ctx->r12 = ctx->r10 & 0XFF;
    // 0x802046CC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802046D0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x802046D4: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x802046D8: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x802046DC: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x802046E0: sb          $t2, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = ctx->r10;
    // 0x802046E4: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x802046E8: bne         $t4, $at, L_8020472C
    if (ctx->r12 != ctx->r1) {
        // 0x802046EC: sw          $t3, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->r11;
            goto L_8020472C;
    }
    // 0x802046EC: sw          $t3, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r11;
    // 0x802046F0: lui         $t5, 0x8025
    ctx->r13 = S32(0X8025 << 16);
    // 0x802046F4: addiu       $v0, $sp, 0x58
    ctx->r2 = ADD32(ctx->r29, 0X58);
    // 0x802046F8: addiu       $t5, $t5, -0x1A48
    ctx->r13 = ADD32(ctx->r13, -0X1A48);
    // 0x802046FC: addiu       $t7, $t5, 0x108
    ctx->r15 = ADD32(ctx->r13, 0X108);
    // 0x80204700: or          $t8, $v0, $zero
    ctx->r24 = ctx->r2 | 0;
L_80204704:
    // 0x80204704: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80204708: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x8020470C: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80204710: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x80204714: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x80204718: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x8020471C: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x80204720: bne         $t5, $t7, L_80204704
    if (ctx->r13 != ctx->r15) {
        // 0x80204724: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_80204704;
    }
    // 0x80204724: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x80204728: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_8020472C:
    // 0x8020472C: jal         0x802048EC
    // 0x80204730: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    func_802048EC(rdram, ctx);
        goto after_16;
    // 0x80204730: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    after_16:
    // 0x80204734: lui         $a2, 0x8026
    ctx->r6 = S32(0X8026 << 16);
    // 0x80204738: addiu       $a2, $a2, -0x46B0
    ctx->r6 = ADD32(ctx->r6, -0X46B0);
    // 0x8020473C: lui         $a1, 0x8026
    ctx->r5 = S32(0X8026 << 16);
    // 0x80204740: addiu       $a1, $a1, -0x4690
    ctx->r5 = ADD32(ctx->r5, -0X4690);
    // 0x80204744: lui         $a3, 0x8026
    ctx->r7 = S32(0X8026 << 16);
    // 0x80204748: addiu       $a3, $a3, -0x46E8
    ctx->r7 = ADD32(ctx->r7, -0X46E8);
    // 0x8020474C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80204750: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x80204754: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80204758: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x8020475C: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x80204760: sb          $t9, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r25;
    // 0x80204764: sw          $a3, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r7;
    // 0x80204768: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8020476C: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x80204770: sw          $a3, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r7;
    // 0x80204774: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80204778: jal         0x80235814
    // 0x8020477C: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
    func_80235814(rdram, ctx);
        goto after_17;
    // 0x8020477C: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
    after_17:
    // 0x80204780: lui         $a2, 0x8026
    ctx->r6 = S32(0X8026 << 16);
    // 0x80204784: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80204788: addiu       $a1, $a2, -0x46B0
    ctx->r5 = ADD32(ctx->r6, -0X46B0);
    // 0x8020478C: jal         0x80236A10
    // 0x80204790: lw          $a0, -0x1A50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A50);
    func_80236A10(rdram, ctx);
        goto after_18;
    // 0x80204790: lw          $a0, -0x1A50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A50);
    after_18:
    // 0x80204794: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80204798: addiu       $a0, $a0, -0x4708
    ctx->r4 = ADD32(ctx->r4, -0X4708);
    // 0x8020479C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802047A0: jal         0x80236B80
    // 0x802047A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80236B80(rdram, ctx);
        goto after_19;
    // 0x802047A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_19:
    // 0x802047A8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802047AC: lw          $a0, 0x5244($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5244);
    // 0x802047B0: beq         $a0, $zero, L_802048CC
    if (ctx->r4 == 0) {
        // 0x802047B4: nop
    
            goto L_802048CC;
    }
    // 0x802047B4: nop

    // 0x802047B8: jal         0x80223840
    // 0x802047BC: nop

    func_80223840(rdram, ctx);
        goto after_20;
    // 0x802047BC: nop

    after_20:
    // 0x802047C0: lui         $a3, 0x5345
    ctx->r7 = S32(0X5345 << 16);
    // 0x802047C4: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x802047C8: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x802047CC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802047D0: ori         $a3, $a3, 0x5153
    ctx->r7 = ctx->r7 | 0X5153;
    // 0x802047D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802047D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802047DC: addiu       $a2, $sp, 0x16C
    ctx->r6 = ADD32(ctx->r29, 0X16C);
    // 0x802047E0: jal         0x80223B30
    // 0x802047E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80223B30(rdram, ctx);
        goto after_21;
    // 0x802047E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_21:
    // 0x802047E8: jal         0x802238F0
    // 0x802047EC: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    func_802238F0(rdram, ctx);
        goto after_22;
    // 0x802047EC: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    after_22:
    // 0x802047F0: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x802047F4: lw          $a1, 0x16C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X16C);
    // 0x802047F8: jal         0x8022B460
    // 0x802047FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8022B460(rdram, ctx);
        goto after_23;
    // 0x802047FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_23:
    // 0x80204800: lh          $v0, 0x4A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X4A);
    // 0x80204804: lui         $a2, 0x8026
    ctx->r6 = S32(0X8026 << 16);
    // 0x80204808: addiu       $a2, $a2, -0x46E8
    ctx->r6 = ADD32(ctx->r6, -0X46E8);
    // 0x8020480C: sll         $t1, $v0, 3
    ctx->r9 = S32(ctx->r2 << 3);
    // 0x80204810: addiu       $v0, $t1, 0x4
    ctx->r2 = ADD32(ctx->r9, 0X4);
    // 0x80204814: sw          $v0, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r2;
    // 0x80204818: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8020481C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80204820: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80204824: jal         0x80236CD0
    // 0x80204828: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80236CD0(rdram, ctx);
        goto after_24;
    // 0x80204828: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_24:
    // 0x8020482C: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x80204830: addiu       $v1, $v1, -0x4674
    ctx->r3 = ADD32(ctx->r3, -0X4674);
    // 0x80204834: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80204838: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020483C: lw          $a1, 0x16C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X16C);
    // 0x80204840: jal         0x8022B460
    // 0x80204844: lw          $a2, 0x168($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X168);
    func_8022B460(rdram, ctx);
        goto after_25;
    // 0x80204844: lw          $a2, 0x168($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X168);
    after_25:
    // 0x80204848: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8020484C: lw          $a0, -0x4674($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4674);
    // 0x80204850: jal         0x80236F38
    // 0x80204854: lw          $a1, 0x16C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X16C);
    func_80236F38(rdram, ctx);
        goto after_26;
    // 0x80204854: lw          $a1, 0x16C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X16C);
    after_26:
    // 0x80204858: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8020485C: lw          $a0, -0x4674($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4674);
    // 0x80204860: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80204864: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80204868: lh          $a2, 0x2($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X2);
    // 0x8020486C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80204870: blez        $a2, L_8020489C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80204874: sll         $a1, $a2, 3
        ctx->r5 = S32(ctx->r6 << 3);
            goto L_8020489C;
    }
    // 0x80204874: sll         $a1, $a2, 3
    ctx->r5 = S32(ctx->r6 << 3);
L_80204878:
    // 0x80204878: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x8020487C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80204880: slt         $at, $a0, $s0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80204884: bnel        $at, $zero, L_80204894
    if (ctx->r1 != 0) {
        // 0x80204888: slt         $at, $v0, $a1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
            goto L_80204894;
    }
    goto skip_0;
    // 0x80204888: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    skip_0:
    // 0x8020488C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80204890: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
L_80204894:
    // 0x80204894: bne         $at, $zero, L_80204878
    if (ctx->r1 != 0) {
        // 0x80204898: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_80204878;
    }
    // 0x80204898: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_8020489C:
    // 0x8020489C: andi        $t2, $s0, 0x1
    ctx->r10 = ctx->r16 & 0X1;
    // 0x802048A0: beq         $t2, $zero, L_802048AC
    if (ctx->r10 == 0) {
        // 0x802048A4: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_802048AC;
    }
    // 0x802048A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802048A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802048AC:
    // 0x802048AC: lui         $a2, 0x8026
    ctx->r6 = S32(0X8026 << 16);
    // 0x802048B0: addiu       $a2, $a2, -0x46E8
    ctx->r6 = ADD32(ctx->r6, -0X46E8);
    // 0x802048B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802048B8: jal         0x80236CD0
    // 0x802048BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80236CD0(rdram, ctx);
        goto after_27;
    // 0x802048BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_27:
    // 0x802048C0: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802048C4: b           L_802048D8
    // 0x802048C8: sw          $v0, -0x4670($at)
    MEM_W(-0X4670, ctx->r1) = ctx->r2;
        goto L_802048D8;
    // 0x802048C8: sw          $v0, -0x4670($at)
    MEM_W(-0X4670, ctx->r1) = ctx->r2;
L_802048CC:
    // 0x802048CC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802048D0: jal         0x80231A24
    // 0x802048D4: addiu       $a0, $a0, 0x288C
    ctx->r4 = ADD32(ctx->r4, 0X288C);
    func_80231A24(rdram, ctx);
        goto after_28;
    // 0x802048D4: addiu       $a0, $a0, 0x288C
    ctx->r4 = ADD32(ctx->r4, 0X288C);
    after_28:
L_802048D8:
    // 0x802048D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802048DC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802048E0: addiu       $sp, $sp, 0x170
    ctx->r29 = ADD32(ctx->r29, 0X170);
    // 0x802048E4: jr          $ra
    // 0x802048E8: nop

    return;
    // 0x802048E8: nop

;}
RECOMP_FUNC void func_8021ACB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021ACB0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8021ACB4: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x8021ACB8: lw          $t7, -0x3C20($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3C20);
    // 0x8021ACBC: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8021ACC0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8021ACC4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8021ACC8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8021ACCC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021ACD0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8021ACD4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8021ACD8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8021ACDC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8021ACE0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8021ACE4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021ACE8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021ACEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021ACF0: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x8021ACF4: addu        $s7, $t6, $t7
    ctx->r23 = ADD32(ctx->r14, ctx->r15);
    // 0x8021ACF8: lhu         $v1, 0x0($s7)
    ctx->r3 = MEM_HU(ctx->r23, 0X0);
    // 0x8021ACFC: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x8021AD00: lw          $t8, -0x18F0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X18F0);
    // 0x8021AD04: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8021AD08: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x8021AD0C: beq         $a1, $v1, L_8021B210
    if (ctx->r5 == ctx->r3) {
        // 0x8021AD10: lw          $v0, 0x1C($t8)
        ctx->r2 = MEM_W(ctx->r24, 0X1C);
            goto L_8021B210;
    }
    // 0x8021AD10: lw          $v0, 0x1C($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X1C);
    // 0x8021AD14: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8021AD18: addiu       $a2, $a2, 0xBC0
    ctx->r6 = ADD32(ctx->r6, 0XBC0);
    // 0x8021AD1C: lhu         $t1, 0x26($a2)
    ctx->r9 = MEM_HU(ctx->r6, 0X26);
    // 0x8021AD20: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
    // 0x8021AD24: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x8021AD28: slt         $at, $a0, $t1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8021AD2C: bne         $at, $zero, L_8021AD48
    if (ctx->r1 != 0) {
        // 0x8021AD30: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_8021AD48;
    }
    // 0x8021AD30: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021AD34: addiu       $a0, $a0, 0x3130
    ctx->r4 = ADD32(ctx->r4, 0X3130);
    // 0x8021AD38: jal         0x80231A24
    // 0x8021AD3C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021AD3C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_0:
    // 0x8021AD40: b           L_8021B214
    // 0x8021AD44: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8021B214;
    // 0x8021AD44: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8021AD48:
    // 0x8021AD48: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x8021AD4C: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x8021AD50: bne         $t4, $a1, L_8021AF20
    if (ctx->r12 != ctx->r5) {
        // 0x8021AD54: lw          $a0, 0x0($t3)
        ctx->r4 = MEM_W(ctx->r11, 0X0);
            goto L_8021AF20;
    }
    // 0x8021AD54: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x8021AD58: lbu         $a1, 0x18($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X18);
    // 0x8021AD5C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8021AD60: lui         $a2, 0x8026
    ctx->r6 = S32(0X8026 << 16);
    // 0x8021AD64: blez        $a1, L_8021AE88
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8021AD68: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8021AE88;
    }
    // 0x8021AD68: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8021AD6C: andi        $a0, $a1, 0x3
    ctx->r4 = ctx->r5 & 0X3;
    // 0x8021AD70: beq         $a0, $zero, L_8021ADC4
    if (ctx->r4 == 0) {
        // 0x8021AD74: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8021ADC4;
    }
    // 0x8021AD74: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8021AD78: lui         $s4, 0x8026
    ctx->r20 = S32(0X8026 << 16);
    // 0x8021AD7C: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8021AD80: addiu       $a0, $a0, -0x3C14
    ctx->r4 = ADD32(ctx->r4, -0X3C14);
    // 0x8021AD84: addiu       $s4, $s4, -0x3C18
    ctx->r20 = ADD32(ctx->r20, -0X3C18);
    // 0x8021AD88: sll         $s1, $zero, 1
    ctx->r17 = S32(0 << 1);
L_8021AD8C:
    // 0x8021AD8C: lw          $t5, 0x4($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X4);
    // 0x8021AD90: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8021AD94: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8021AD98: addu        $t6, $t5, $s1
    ctx->r14 = ADD32(ctx->r13, ctx->r17);
    // 0x8021AD9C: lhu         $s0, 0x0($t6)
    ctx->r16 = MEM_HU(ctx->r14, 0X0);
    // 0x8021ADA0: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x8021ADA4: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x8021ADA8: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x8021ADAC: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x8021ADB0: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x8021ADB4: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8021ADB8: bne         $v0, $s2, L_8021AD8C
    if (ctx->r2 != ctx->r18) {
        // 0x8021ADBC: sw          $zero, 0x0($t2)
        MEM_W(0X0, ctx->r10) = 0;
            goto L_8021AD8C;
    }
    // 0x8021ADBC: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    // 0x8021ADC0: beq         $s2, $v1, L_8021AE84
    if (ctx->r18 == ctx->r3) {
        // 0x8021ADC4: lui         $a0, 0x8026
        ctx->r4 = S32(0X8026 << 16);
            goto L_8021AE84;
    }
L_8021ADC4:
    // 0x8021ADC4: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8021ADC8: lui         $s4, 0x8026
    ctx->r20 = S32(0X8026 << 16);
    // 0x8021ADCC: addiu       $s4, $s4, -0x3C18
    ctx->r20 = ADD32(ctx->r20, -0X3C18);
    // 0x8021ADD0: addiu       $a0, $a0, -0x3C14
    ctx->r4 = ADD32(ctx->r4, -0X3C14);
    // 0x8021ADD4: sll         $s1, $s2, 1
    ctx->r17 = S32(ctx->r18 << 1);
    // 0x8021ADD8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
L_8021ADDC:
    // 0x8021ADDC: lw          $t3, 0x4($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X4);
    // 0x8021ADE0: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8021ADE4: addu        $t4, $t3, $s1
    ctx->r12 = ADD32(ctx->r11, ctx->r17);
    // 0x8021ADE8: lhu         $s0, 0x0($t4)
    ctx->r16 = MEM_HU(ctx->r12, 0X0);
    // 0x8021ADEC: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x8021ADF0: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x8021ADF4: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x8021ADF8: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x8021ADFC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8021AE00: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x8021AE04: lw          $t1, 0x4($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X4);
    // 0x8021AE08: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8021AE0C: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x8021AE10: lhu         $s0, 0x2($t2)
    ctx->r16 = MEM_HU(ctx->r10, 0X2);
    // 0x8021AE14: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x8021AE18: sb          $zero, 0x0($t4)
    MEM_B(0X0, ctx->r12) = 0;
    // 0x8021AE1C: lw          $t5, 0x0($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X0);
    // 0x8021AE20: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x8021AE24: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8021AE28: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x8021AE2C: lw          $t8, 0x4($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X4);
    // 0x8021AE30: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8021AE34: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x8021AE38: lhu         $s0, 0x4($t9)
    ctx->r16 = MEM_HU(ctx->r25, 0X4);
    // 0x8021AE3C: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x8021AE40: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
    // 0x8021AE44: lw          $t3, 0x0($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X0);
    // 0x8021AE48: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x8021AE4C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8021AE50: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x8021AE54: lw          $t6, 0x4($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X4);
    // 0x8021AE58: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8021AE5C: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x8021AE60: lhu         $s0, 0x6($t7)
    ctx->r16 = MEM_HU(ctx->r15, 0X6);
    // 0x8021AE64: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8021AE68: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x8021AE6C: sb          $zero, 0x0($t9)
    MEM_B(0X0, ctx->r25) = 0;
    // 0x8021AE70: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x8021AE74: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x8021AE78: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8021AE7C: bne         $s1, $v0, L_8021ADDC
    if (ctx->r17 != ctx->r2) {
        // 0x8021AE80: sw          $zero, 0x0($t3)
        MEM_W(0X0, ctx->r11) = 0;
            goto L_8021ADDC;
    }
    // 0x8021AE80: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
L_8021AE84:
    // 0x8021AE84: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8021AE88:
    // 0x8021AE88: lui         $a1, 0x8026
    ctx->r5 = S32(0X8026 << 16);
    // 0x8021AE8C: ori         $t4, $zero, 0xFFFF
    ctx->r12 = 0 | 0XFFFF;
    // 0x8021AE90: addiu       $a1, $a1, -0x3C06
    ctx->r5 = ADD32(ctx->r5, -0X3C06);
    // 0x8021AE94: sh          $t4, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r12;
    // 0x8021AE98: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x8021AE9C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8021AEA0: addiu       $a2, $a2, -0x3C10
    ctx->r6 = ADD32(ctx->r6, -0X3C10);
    // 0x8021AEA4: blez        $a0, L_8021B210
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8021AEA8: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8021B210;
    }
    // 0x8021AEA8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8021AEAC:
    // 0x8021AEAC: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x8021AEB0: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021AEB4: addu        $t6, $t5, $s1
    ctx->r14 = ADD32(ctx->r13, ctx->r17);
    // 0x8021AEB8: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x8021AEBC: bnel        $a3, $t7, L_8021AF0C
    if (ctx->r7 != ctx->r15) {
        // 0x8021AEC0: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8021AF0C;
    }
    goto skip_0;
    // 0x8021AEC0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x8021AEC4: beq         $at, $zero, L_8021AEF8
    if (ctx->r1 == 0) {
        // 0x8021AEC8: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_8021AEF8;
    }
    // 0x8021AEC8: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8021AECC: sll         $v1, $s0, 1
    ctx->r3 = S32(ctx->r16 << 1);
    // 0x8021AED0: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
L_8021AED4:
    // 0x8021AED4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021AED8: addu        $v0, $t8, $v1
    ctx->r2 = ADD32(ctx->r24, ctx->r3);
    // 0x8021AEDC: lhu         $t9, 0x2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2);
    // 0x8021AEE0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8021AEE4: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x8021AEE8: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x8021AEEC: slt         $at, $s0, $a0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021AEF0: bnel        $at, $zero, L_8021AED4
    if (ctx->r1 != 0) {
        // 0x8021AEF4: lw          $t8, 0x0($a2)
        ctx->r24 = MEM_W(ctx->r6, 0X0);
            goto L_8021AED4;
    }
    goto skip_1;
    // 0x8021AEF4: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    skip_1:
L_8021AEF8:
    // 0x8021AEF8: addiu       $t1, $a0, -0x1
    ctx->r9 = ADD32(ctx->r4, -0X1);
    // 0x8021AEFC: andi        $a0, $t1, 0xFFFF
    ctx->r4 = ctx->r9 & 0XFFFF;
    // 0x8021AF00: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8021AF04: sh          $t1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r9;
    // 0x8021AF08: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8021AF0C:
    // 0x8021AF0C: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021AF10: bne         $at, $zero, L_8021AEAC
    if (ctx->r1 != 0) {
        // 0x8021AF14: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_8021AEAC;
    }
    // 0x8021AF14: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x8021AF18: b           L_8021B214
    // 0x8021AF1C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8021B214;
    // 0x8021AF1C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8021AF20:
    // 0x8021AF20: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x8021AF24: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8021AF28: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x8021AF2C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8021AF30: bne         $t5, $zero, L_8021AF54
    if (ctx->r13 != 0) {
        // 0x8021AF34: sw          $t5, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r13;
            goto L_8021AF54;
    }
    // 0x8021AF34: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x8021AF38: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021AF3C: addiu       $a0, $a0, 0x3160
    ctx->r4 = ADD32(ctx->r4, 0X3160);
    // 0x8021AF40: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8021AF44: jal         0x80231A24
    // 0x8021AF48: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8021AF48: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_1:
    // 0x8021AF4C: b           L_8021B214
    // 0x8021AF50: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8021B214;
    // 0x8021AF50: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8021AF54:
    // 0x8021AF54: sw          $zero, 0x10($s7)
    MEM_W(0X10, ctx->r23) = 0;
    // 0x8021AF58: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x8021AF5C: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8021AF60: bne         $a1, $t0, L_8021AF74
    if (ctx->r5 != ctx->r8) {
        // 0x8021AF64: swc1        $f4, 0xC($s7)
        MEM_W(0XC, ctx->r23) = ctx->f4.u32l;
            goto L_8021AF74;
    }
    // 0x8021AF64: swc1        $f4, 0xC($s7)
    MEM_W(0XC, ctx->r23) = ctx->f4.u32l;
    // 0x8021AF68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021AF6C: b           L_8021AFE4
    // 0x8021AF70: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
        goto L_8021AFE4;
    // 0x8021AF70: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
L_8021AF74:
    // 0x8021AF74: beq         $a0, $zero, L_8021AF84
    if (ctx->r4 == 0) {
        // 0x8021AF78: lw          $s0, 0x44($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X44);
            goto L_8021AF84;
    }
    // 0x8021AF78: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x8021AF7C: b           L_8021AFE4
    // 0x8021AF80: lbu         $a1, 0x18($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X18);
        goto L_8021AFE4;
    // 0x8021AF80: lbu         $a1, 0x18($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X18);
L_8021AF84:
    // 0x8021AF84: lhu         $t7, 0x28($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X28);
    // 0x8021AF88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021AF8C: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x8021AF90: blez        $t7, L_8021AFE4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8021AF94: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8021AFE4;
    }
    // 0x8021AF94: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8021AF98: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8021AF9C: addiu       $a0, $a0, -0x3C14
    ctx->r4 = ADD32(ctx->r4, -0X3C14);
    // 0x8021AFA0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8021AFA4: lw          $t8, 0x4($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X4);
L_8021AFA8:
    // 0x8021AFA8: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x8021AFAC: lhu         $v0, 0x0($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X0);
    // 0x8021AFB0: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021AFB4: beql        $at, $zero, L_8021AFE8
    if (ctx->r1 == 0) {
        // 0x8021AFB8: lw          $t5, 0x54($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X54);
            goto L_8021AFE8;
    }
    goto skip_2;
    // 0x8021AFB8: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    skip_2:
    // 0x8021AFBC: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8021AFC0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8021AFC4: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x8021AFC8: addu        $t3, $t1, $v0
    ctx->r11 = ADD32(ctx->r9, ctx->r2);
    // 0x8021AFCC: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
    // 0x8021AFD0: lhu         $t4, 0x28($a2)
    ctx->r12 = MEM_HU(ctx->r6, 0X28);
    // 0x8021AFD4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8021AFD8: slt         $at, $s2, $t4
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8021AFDC: bnel        $at, $zero, L_8021AFA8
    if (ctx->r1 != 0) {
        // 0x8021AFE0: lw          $t8, 0x4($s7)
        ctx->r24 = MEM_W(ctx->r23, 0X4);
            goto L_8021AFA8;
    }
    goto skip_3;
    // 0x8021AFE0: lw          $t8, 0x4($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X4);
    skip_3:
L_8021AFE4:
    // 0x8021AFE4: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
L_8021AFE8:
    // 0x8021AFE8: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8021AFEC: addiu       $a0, $a0, -0x3C14
    ctx->r4 = ADD32(ctx->r4, -0X3C14);
    // 0x8021AFF0: lbu         $t0, 0x18($t5)
    ctx->r8 = MEM_BU(ctx->r13, 0X18);
    // 0x8021AFF4: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8021AFF8: slt         $at, $t0, $a1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8021AFFC: beq         $at, $zero, L_8021B094
    if (ctx->r1 == 0) {
        // 0x8021B000: or          $fp, $t0, $zero
        ctx->r30 = ctx->r8 | 0;
            goto L_8021B094;
    }
    // 0x8021B000: or          $fp, $t0, $zero
    ctx->r30 = ctx->r8 | 0;
    // 0x8021B004: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8021B008: slt         $at, $a1, $fp
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x8021B00C: bne         $at, $zero, L_8021B06C
    if (ctx->r1 != 0) {
        // 0x8021B010: or          $s2, $a1, $zero
        ctx->r18 = ctx->r5 | 0;
            goto L_8021B06C;
    }
    // 0x8021B010: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8021B014: subu        $a2, $a1, $fp
    ctx->r6 = SUB32(ctx->r5, ctx->r30);
    // 0x8021B018: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8021B01C: andi        $t2, $a2, 0x3
    ctx->r10 = ctx->r6 & 0X3;
    // 0x8021B020: negu        $a2, $t2
    ctx->r6 = SUB32(0, ctx->r10);
    // 0x8021B024: beq         $a2, $zero, L_8021B050
    if (ctx->r6 == 0) {
        // 0x8021B028: lw          $a3, 0x4($s7)
        ctx->r7 = MEM_W(ctx->r23, 0X4);
            goto L_8021B050;
    }
    // 0x8021B028: lw          $a3, 0x4($s7)
    ctx->r7 = MEM_W(ctx->r23, 0X4);
    // 0x8021B02C: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x8021B030: addu        $v0, $a3, $t6
    ctx->r2 = ADD32(ctx->r7, ctx->r14);
    // 0x8021B034: addu        $v1, $a2, $a1
    ctx->r3 = ADD32(ctx->r6, ctx->r5);
L_8021B038:
    // 0x8021B038: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x8021B03C: lhu         $s0, 0x0($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X0);
    // 0x8021B040: bne         $v1, $s2, L_8021B038
    if (ctx->r3 != ctx->r18) {
        // 0x8021B044: addiu       $v0, $v0, -0x2
        ctx->r2 = ADD32(ctx->r2, -0X2);
            goto L_8021B038;
    }
    // 0x8021B044: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8021B048: addiu       $t7, $s2, 0x1
    ctx->r15 = ADD32(ctx->r18, 0X1);
    // 0x8021B04C: beq         $t7, $fp, L_8021B06C
    if (ctx->r15 == ctx->r30) {
        // 0x8021B050: sll         $t8, $s2, 1
        ctx->r24 = S32(ctx->r18 << 1);
            goto L_8021B06C;
    }
L_8021B050:
    // 0x8021B050: sll         $t8, $s2, 1
    ctx->r24 = S32(ctx->r18 << 1);
    // 0x8021B054: addu        $v0, $a3, $t8
    ctx->r2 = ADD32(ctx->r7, ctx->r24);
    // 0x8021B058: addiu       $v1, $fp, -0x1
    ctx->r3 = ADD32(ctx->r30, -0X1);
L_8021B05C:
    // 0x8021B05C: addiu       $s2, $s2, -0x4
    ctx->r18 = ADD32(ctx->r18, -0X4);
    // 0x8021B060: lhu         $s0, -0x6($v0)
    ctx->r16 = MEM_HU(ctx->r2, -0X6);
    // 0x8021B064: bne         $s2, $v1, L_8021B05C
    if (ctx->r18 != ctx->r3) {
        // 0x8021B068: addiu       $v0, $v0, -0x8
        ctx->r2 = ADD32(ctx->r2, -0X8);
            goto L_8021B05C;
    }
    // 0x8021B068: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
L_8021B06C:
    // 0x8021B06C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8021B070: lui         $s4, 0x8026
    ctx->r20 = S32(0X8026 << 16);
    // 0x8021B074: addiu       $s4, $s4, -0x3C18
    ctx->r20 = ADD32(ctx->r20, -0X3C18);
    // 0x8021B078: addu        $t1, $t9, $s0
    ctx->r9 = ADD32(ctx->r25, ctx->r16);
    // 0x8021B07C: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
    // 0x8021B080: lw          $t3, 0x0($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X0);
    // 0x8021B084: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x8021B088: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8021B08C: b           L_8021B154
    // 0x8021B090: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
        goto L_8021B154;
    // 0x8021B090: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
L_8021B094:
    // 0x8021B094: slt         $at, $v1, $fp
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x8021B098: beq         $at, $zero, L_8021B154
    if (ctx->r1 == 0) {
        // 0x8021B09C: slt         $at, $v1, $fp
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r30) ? 1 : 0;
            goto L_8021B154;
    }
    // 0x8021B09C: slt         $at, $v1, $fp
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x8021B0A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021B0A4: beq         $at, $zero, L_8021B154
    if (ctx->r1 == 0) {
        // 0x8021B0A8: or          $s2, $v1, $zero
        ctx->r18 = ctx->r3 | 0;
            goto L_8021B154;
    }
    // 0x8021B0A8: or          $s2, $v1, $zero
    ctx->r18 = ctx->r3 | 0;
    // 0x8021B0AC: lui         $s4, 0x8026
    ctx->r20 = S32(0X8026 << 16);
    // 0x8021B0B0: addiu       $s4, $s4, -0x3C18
    ctx->r20 = ADD32(ctx->r20, -0X3C18);
    // 0x8021B0B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8021B0B8:
    // 0x8021B0B8: lhu         $v1, 0x2A($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X2A);
    // 0x8021B0BC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8021B0C0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8021B0C4: beql        $at, $zero, L_8021B0F4
    if (ctx->r1 == 0) {
        // 0x8021B0C8: slt         $at, $s0, $v1
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8021B0F4;
    }
    goto skip_4;
    // 0x8021B0C8: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    skip_4:
    // 0x8021B0CC: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8021B0D0: addu        $v0, $t2, $v0
    ctx->r2 = ADD32(ctx->r10, ctx->r2);
L_8021B0D4:
    // 0x8021B0D4: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8021B0D8: beql        $t6, $zero, L_8021B0F4
    if (ctx->r14 == 0) {
        // 0x8021B0DC: slt         $at, $s0, $v1
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8021B0F4;
    }
    goto skip_5;
    // 0x8021B0DC: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    skip_5:
    // 0x8021B0E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021B0E4: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8021B0E8: bne         $at, $zero, L_8021B0D4
    if (ctx->r1 != 0) {
        // 0x8021B0EC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8021B0D4;
    }
    // 0x8021B0EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8021B0F0: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
L_8021B0F4:
    // 0x8021B0F4: bne         $at, $zero, L_8021B11C
    if (ctx->r1 != 0) {
        // 0x8021B0F8: addu        $t7, $fp, $s0
        ctx->r15 = ADD32(ctx->r30, ctx->r16);
            goto L_8021B11C;
    }
    // 0x8021B0F8: addu        $t7, $fp, $s0
    ctx->r15 = ADD32(ctx->r30, ctx->r16);
    // 0x8021B0FC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8021B100: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8021B104: addiu       $a2, $a2, 0xBEA
    ctx->r6 = ADD32(ctx->r6, 0XBEA);
    // 0x8021B108: addiu       $a1, $a1, 0x319C
    ctx->r5 = ADD32(ctx->r5, 0X319C);
    // 0x8021B10C: jal         0x80231C58
    // 0x8021B110: subu        $a0, $t7, $s2
    ctx->r4 = SUB32(ctx->r15, ctx->r18);
    func_80231C58(rdram, ctx);
        goto after_2;
    // 0x8021B110: subu        $a0, $t7, $s2
    ctx->r4 = SUB32(ctx->r15, ctx->r18);
    after_2:
    // 0x8021B114: b           L_8021B214
    // 0x8021B118: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8021B214;
    // 0x8021B118: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8021B11C:
    // 0x8021B11C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8021B120: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x8021B124: sll         $t2, $s2, 1
    ctx->r10 = S32(ctx->r18 << 1);
    // 0x8021B128: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x8021B12C: sb          $a1, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r5;
    // 0x8021B130: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x8021B134: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8021B138: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8021B13C: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8021B140: sw          $zero, 0x0($t4)
    MEM_W(0X0, ctx->r12) = 0;
    // 0x8021B144: lw          $t5, 0x4($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X4);
    // 0x8021B148: addu        $t6, $t5, $t2
    ctx->r14 = ADD32(ctx->r13, ctx->r10);
    // 0x8021B14C: bne         $s2, $fp, L_8021B0B8
    if (ctx->r18 != ctx->r30) {
        // 0x8021B150: sh          $s0, 0x0($t6)
        MEM_H(0X0, ctx->r14) = ctx->r16;
            goto L_8021B0B8;
    }
    // 0x8021B150: sh          $s0, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r16;
L_8021B154:
    // 0x8021B154: lw          $t7, 0x4($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X4);
    // 0x8021B158: sll         $t8, $t0, 1
    ctx->r24 = S32(ctx->r8 << 1);
    // 0x8021B15C: lui         $s4, 0x8026
    ctx->r20 = S32(0X8026 << 16);
    // 0x8021B160: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8021B164: addiu       $s4, $s4, -0x3C18
    ctx->r20 = ADD32(ctx->r20, -0X3C18);
    // 0x8021B168: sh          $zero, 0x0($t9)
    MEM_H(0X0, ctx->r25) = 0;
    // 0x8021B16C: blez        $fp, L_8021B200
    if (SIGNED(ctx->r30) <= 0) {
        // 0x8021B170: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8021B200;
    }
    // 0x8021B170: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8021B174: lui         $s6, 0x8026
    ctx->r22 = S32(0X8026 << 16);
    // 0x8021B178: addiu       $s6, $s6, -0x3C1C
    ctx->r22 = ADD32(ctx->r22, -0X3C1C);
    // 0x8021B17C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8021B180: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_8021B184:
    // 0x8021B184: lw          $t1, 0x4($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X4);
    // 0x8021B188: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x8021B18C: lw          $t4, 0x0($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X0);
    // 0x8021B190: addu        $t3, $t1, $s1
    ctx->r11 = ADD32(ctx->r9, ctx->r17);
    // 0x8021B194: lhu         $s0, 0x0($t3)
    ctx->r16 = MEM_HU(ctx->r11, 0X0);
    // 0x8021B198: lw          $t2, 0x14($t5)
    ctx->r10 = MEM_W(ctx->r13, 0X14);
    // 0x8021B19C: sll         $s3, $s0, 6
    ctx->r19 = S32(ctx->r16 << 6);
    // 0x8021B1A0: addu        $a0, $t4, $s3
    ctx->r4 = ADD32(ctx->r12, ctx->r19);
    // 0x8021B1A4: jal         0x80228DE0
    // 0x8021B1A8: addu        $a1, $t2, $s5
    ctx->r5 = ADD32(ctx->r10, ctx->r21);
    func_80228DE0(rdram, ctx);
        goto after_3;
    // 0x8021B1A8: addu        $a1, $t2, $s5
    ctx->r5 = ADD32(ctx->r10, ctx->r21);
    after_3:
    // 0x8021B1AC: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x8021B1B0: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x8021B1B4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8021B1B8: bne         $s2, $zero, L_8021B1F0
    if (ctx->r18 != 0) {
        // 0x8021B1BC: sw          $zero, 0x0($t8)
        MEM_W(0X0, ctx->r24) = 0;
            goto L_8021B1F0;
    }
    // 0x8021B1BC: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x8021B1C0: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8021B1C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021B1C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021B1CC: lwc1        $f8, 0x20($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X20);
    // 0x8021B1D0: lw          $t1, 0x0($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X0);
    // 0x8021B1D4: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021B1D8: addu        $a0, $t1, $s3
    ctx->r4 = ADD32(ctx->r9, ctx->r19);
    // 0x8021B1DC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8021B1E0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8021B1E4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8021B1E8: jal         0x8022A210
    // 0x8021B1EC: nop

    func_8022A210(rdram, ctx);
        goto after_4;
    // 0x8021B1EC: nop

    after_4:
L_8021B1F0:
    // 0x8021B1F0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8021B1F4: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x8021B1F8: bne         $s2, $fp, L_8021B184
    if (ctx->r18 != ctx->r30) {
        // 0x8021B1FC: addiu       $s5, $s5, 0x40
        ctx->r21 = ADD32(ctx->r21, 0X40);
            goto L_8021B184;
    }
    // 0x8021B1FC: addiu       $s5, $s5, 0x40
    ctx->r21 = ADD32(ctx->r21, 0X40);
L_8021B200:
    // 0x8021B200: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x8021B204: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x8021B208: sb          $t4, 0x8($s7)
    MEM_B(0X8, ctx->r23) = ctx->r12;
    // 0x8021B20C: sh          $t3, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r11;
L_8021B210:
    // 0x8021B210: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8021B214:
    // 0x8021B214: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021B218: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021B21C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021B220: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8021B224: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8021B228: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8021B22C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8021B230: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8021B234: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8021B238: jr          $ra
    // 0x8021B23C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8021B23C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8021CEF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021CEF8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8021CEFC: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8021CF00: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x8021CF04: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8021CF08: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x8021CF0C: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x8021CF10: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x8021CF14: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x8021CF18: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x8021CF1C: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x8021CF20: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x8021CF24: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8021CF28: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8021CF2C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8021CF30: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8021CF34: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8021CF38: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x8021CF3C: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8021CF40: or          $t8, $a0, $zero
    ctx->r24 = ctx->r4 | 0;
    // 0x8021CF44: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8021CF48: lw          $s1, 0x0($t0)
    ctx->r17 = MEM_W(ctx->r8, 0X0);
    // 0x8021CF4C: addiu       $s0, $sp, 0x54
    ctx->r16 = ADD32(ctx->r29, 0X54);
    // 0x8021CF50: addiu       $s3, $zero, -0x8
    ctx->r19 = ADD32(0, -0X8);
    // 0x8021CF54: bne         $s1, $zero, L_8021CF74
    if (ctx->r17 != 0) {
        // 0x8021CF58: lui         $at, 0x447A
        ctx->r1 = S32(0X447A << 16);
            goto L_8021CF74;
    }
    // 0x8021CF58: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8021CF5C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021CF60: addiu       $a0, $a0, 0x3480
    ctx->r4 = ADD32(ctx->r4, 0X3480);
    // 0x8021CF64: jal         0x80231A24
    // 0x8021CF68: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021CF68: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_0:
    // 0x8021CF6C: b           L_8021D200
    // 0x8021CF70: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_8021D200;
    // 0x8021CF70: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_8021CF74:
    // 0x8021CF74: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8021CF78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021CF7C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8021CF80: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8021CF84: addiu       $s2, $zero, -0x4
    ctx->r18 = ADD32(0, -0X4);
L_8021CF88:
    // 0x8021CF88: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
L_8021CF8C:
    // 0x8021CF8C: and         $s0, $t1, $s2
    ctx->r16 = ctx->r9 & ctx->r18;
    // 0x8021CF90: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8021CF94: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021CF98: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021CF9C: sltiu       $at, $a1, 0x6
    ctx->r1 = ctx->r5 < 0X6 ? 1 : 0;
    // 0x8021CFA0: beq         $at, $zero, L_8021D1EC
    if (ctx->r1 == 0) {
        // 0x8021CFA4: sll         $t2, $a1, 2
        ctx->r10 = S32(ctx->r5 << 2);
            goto L_8021D1EC;
    }
    // 0x8021CFA4: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x8021CFA8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021CFAC: addu        $at, $at, $t2
    gpr jr_addend_8021CFB4 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8021CFB0: lw          $t2, 0x3598($at)
    ctx->r10 = ADD32(ctx->r1, 0X3598);
    // 0x8021CFB4: jr          $t2
    // 0x8021CFB8: nop

    switch (jr_addend_8021CFB4 >> 2) {
        case 0: goto L_8021D1FC; break;
        case 1: goto L_8021D15C; break;
        case 2: goto L_8021D1A4; break;
        case 3: goto L_8021CFBC; break;
        case 4: goto L_8021D114; break;
        case 5: goto L_8021D074; break;
        default: switch_error(__func__, 0x8021CFB4, 0x80253598);
    }
    // 0x8021CFB8: nop

L_8021CFBC:
    // 0x8021CFBC: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x8021CFC0: beq         $t3, $zero, L_8021CFD4
    if (ctx->r11 == 0) {
        // 0x8021CFC4: andi        $t4, $s0, 0x2
        ctx->r12 = ctx->r16 & 0X2;
            goto L_8021CFD4;
    }
    // 0x8021CFC4: andi        $t4, $s0, 0x2
    ctx->r12 = ctx->r16 & 0X2;
    // 0x8021CFC8: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8021CFCC: b           L_8021CFF8
    // 0x8021CFD0: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8021CFF8;
    // 0x8021CFD0: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8021CFD4:
    // 0x8021CFD4: beq         $t4, $zero, L_8021CFE8
    if (ctx->r12 == 0) {
        // 0x8021CFD8: addiu       $t5, $s0, 0x7
        ctx->r13 = ADD32(ctx->r16, 0X7);
            goto L_8021CFE8;
    }
    // 0x8021CFD8: addiu       $t5, $s0, 0x7
    ctx->r13 = ADD32(ctx->r16, 0X7);
    // 0x8021CFDC: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8021CFE0: b           L_8021CFF4
    // 0x8021CFE4: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8021CFF4;
    // 0x8021CFE4: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8021CFE8:
    // 0x8021CFE8: and         $s0, $t5, $s3
    ctx->r16 = ctx->r13 & ctx->r19;
    // 0x8021CFEC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8021CFF0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8021CFF4:
    // 0x8021CFF4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8021CFF8:
    // 0x8021CFF8: ldc1        $f4, -0x8($v0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r2, -0X8);
    // 0x8021CFFC: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    // 0x8021D000: c.lt.s      $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f24.fl < ctx->f20.fl;
    // 0x8021D004: nop

    // 0x8021D008: bc1tl       L_8021D024
    if (c1cs) {
        // 0x8021D00C: cvt.d.s     $f6, $f20
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f6.d = CVT_D_S(ctx->f20.fl);
            goto L_8021D024;
    }
    goto skip_0;
    // 0x8021D00C: cvt.d.s     $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f6.d = CVT_D_S(ctx->f20.fl);
    skip_0:
    // 0x8021D010: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x8021D014: nop

    // 0x8021D018: bc1f        L_8021D040
    if (!c1cs) {
        // 0x8021D01C: nop
    
            goto L_8021D040;
    }
    // 0x8021D01C: nop

    // 0x8021D020: cvt.d.s     $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f6.d = CVT_D_S(ctx->f20.fl);
L_8021D024:
    // 0x8021D024: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021D028: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8021D02C: mfc1        $a2, $f7
    ctx->r6 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x8021D030: jal         0x80231A24
    // 0x8021D034: addiu       $a0, $a0, 0x34A4
    ctx->r4 = ADD32(ctx->r4, 0X34A4);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8021D034: addiu       $a0, $a0, 0x34A4
    ctx->r4 = ADD32(ctx->r4, 0X34A4);
    after_1:
    // 0x8021D038: b           L_8021CF8C
    // 0x8021D03C: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
        goto L_8021CF8C;
    // 0x8021D03C: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
L_8021D040:
    // 0x8021D040: jal         0x80220534
    // 0x8021D044: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80220534(rdram, ctx);
        goto after_2;
    // 0x8021D044: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x8021D048: c.eq.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl == ctx->f22.fl;
    // 0x8021D04C: mul.s       $f8, $f20, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x8021D050: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8021D054: bc1fl       L_8021D068
    if (!c1cs) {
        // 0x8021D058: sb          $t6, 0x1C($s1)
        MEM_B(0X1C, ctx->r17) = ctx->r14;
            goto L_8021D068;
    }
    goto skip_1;
    // 0x8021D058: sb          $t6, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r14;
    skip_1:
    // 0x8021D05C: b           L_8021D068
    // 0x8021D060: sb          $zero, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = 0;
        goto L_8021D068;
    // 0x8021D060: sb          $zero, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = 0;
    // 0x8021D064: sb          $t6, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r14;
L_8021D068:
    // 0x8021D068: swc1        $f8, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f8.u32l;
    // 0x8021D06C: b           L_8021CF88
    // 0x8021D070: swc1        $f26, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f26.u32l;
        goto L_8021CF88;
    // 0x8021D070: swc1        $f26, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f26.u32l;
L_8021D074:
    // 0x8021D074: andi        $t7, $s0, 0x1
    ctx->r15 = ctx->r16 & 0X1;
    // 0x8021D078: beq         $t7, $zero, L_8021D08C
    if (ctx->r15 == 0) {
        // 0x8021D07C: andi        $t9, $s0, 0x2
        ctx->r25 = ctx->r16 & 0X2;
            goto L_8021D08C;
    }
    // 0x8021D07C: andi        $t9, $s0, 0x2
    ctx->r25 = ctx->r16 & 0X2;
    // 0x8021D080: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8021D084: b           L_8021D0B0
    // 0x8021D088: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8021D0B0;
    // 0x8021D088: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8021D08C:
    // 0x8021D08C: beq         $t9, $zero, L_8021D0A0
    if (ctx->r25 == 0) {
        // 0x8021D090: addiu       $t0, $s0, 0x7
        ctx->r8 = ADD32(ctx->r16, 0X7);
            goto L_8021D0A0;
    }
    // 0x8021D090: addiu       $t0, $s0, 0x7
    ctx->r8 = ADD32(ctx->r16, 0X7);
    // 0x8021D094: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8021D098: b           L_8021D0AC
    // 0x8021D09C: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8021D0AC;
    // 0x8021D09C: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8021D0A0:
    // 0x8021D0A0: and         $s0, $t0, $s3
    ctx->r16 = ctx->r8 & ctx->r19;
    // 0x8021D0A4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8021D0A8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8021D0AC:
    // 0x8021D0AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8021D0B0:
    // 0x8021D0B0: ldc1        $f10, -0x8($v0)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r2, -0X8);
    // 0x8021D0B4: cvt.s.d     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f20.fl = CVT_S_D(ctx->f10.d);
    // 0x8021D0B8: c.lt.s      $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f24.fl < ctx->f20.fl;
    // 0x8021D0BC: nop

    // 0x8021D0C0: bc1tl       L_8021D0E0
    if (c1cs) {
        // 0x8021D0C4: cvt.d.s     $f16, $f20
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f16.d = CVT_D_S(ctx->f20.fl);
            goto L_8021D0E0;
    }
    goto skip_2;
    // 0x8021D0C4: cvt.d.s     $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f16.d = CVT_D_S(ctx->f20.fl);
    skip_2:
    // 0x8021D0C8: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x8021D0CC: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x8021D0D0: addiu       $t8, $t8, -0x3C00
    ctx->r24 = ADD32(ctx->r24, -0X3C00);
    // 0x8021D0D4: bc1fl       L_8021D100
    if (!c1cs) {
        // 0x8021D0D8: swc1        $f20, 0x3C($s1)
        MEM_W(0X3C, ctx->r17) = ctx->f20.u32l;
            goto L_8021D100;
    }
    goto skip_3;
    // 0x8021D0D8: swc1        $f20, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f20.u32l;
    skip_3:
    // 0x8021D0DC: cvt.d.s     $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f16.d = CVT_D_S(ctx->f20.fl);
L_8021D0E0:
    // 0x8021D0E0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021D0E4: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8021D0E8: mfc1        $a2, $f17
    ctx->r6 = (int32_t)ctx->f_odd[(17 - 1) * 2];
    // 0x8021D0EC: jal         0x80231A24
    // 0x8021D0F0: addiu       $a0, $a0, 0x34D0
    ctx->r4 = ADD32(ctx->r4, 0X34D0);
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x8021D0F0: addiu       $a0, $a0, 0x34D0
    ctx->r4 = ADD32(ctx->r4, 0X34D0);
    after_3:
    // 0x8021D0F4: b           L_8021CF8C
    // 0x8021D0F8: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
        goto L_8021CF8C;
    // 0x8021D0F8: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
    // 0x8021D0FC: swc1        $f20, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f20.u32l;
L_8021D100:
    // 0x8021D100: sw          $t8, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r24;
    // 0x8021D104: jal         0x8021CD80
    // 0x8021D108: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_8021CD80(rdram, ctx);
        goto after_4;
    // 0x8021D108: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_4:
    // 0x8021D10C: b           L_8021CF8C
    // 0x8021D110: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
        goto L_8021CF8C;
    // 0x8021D110: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
L_8021D114:
    // 0x8021D114: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
    // 0x8021D118: and         $s0, $t1, $s2
    ctx->r16 = ctx->r9 & ctx->r18;
    // 0x8021D11C: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x8021D120: addiu       $t3, $s0, 0x7
    ctx->r11 = ADD32(ctx->r16, 0X7);
    // 0x8021D124: and         $s0, $t3, $s2
    ctx->r16 = ctx->r11 & ctx->r18;
    // 0x8021D128: sb          $t2, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r10;
    // 0x8021D12C: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x8021D130: addiu       $t5, $s0, 0x7
    ctx->r13 = ADD32(ctx->r16, 0X7);
    // 0x8021D134: and         $s0, $t5, $s2
    ctx->r16 = ctx->r13 & ctx->r18;
    // 0x8021D138: sb          $t4, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r12;
    // 0x8021D13C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8021D140: addiu       $t7, $s0, 0x7
    ctx->r15 = ADD32(ctx->r16, 0X7);
    // 0x8021D144: and         $s0, $t7, $s2
    ctx->r16 = ctx->r15 & ctx->r18;
    // 0x8021D148: sb          $t6, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r14;
    // 0x8021D14C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8021D150: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021D154: b           L_8021CF88
    // 0x8021D158: sb          $t9, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r25;
        goto L_8021CF88;
    // 0x8021D158: sb          $t9, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r25;
L_8021D15C:
    // 0x8021D15C: addiu       $t0, $s0, 0x3
    ctx->r8 = ADD32(ctx->r16, 0X3);
    // 0x8021D160: and         $s0, $t0, $s2
    ctx->r16 = ctx->r8 & ctx->r18;
    // 0x8021D164: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8021D168: addiu       $t1, $s0, 0x7
    ctx->r9 = ADD32(ctx->r16, 0X7);
    // 0x8021D16C: and         $s0, $t1, $s2
    ctx->r16 = ctx->r9 & ctx->r18;
    // 0x8021D170: sb          $t8, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r24;
    // 0x8021D174: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x8021D178: addiu       $t3, $s0, 0x7
    ctx->r11 = ADD32(ctx->r16, 0X7);
    // 0x8021D17C: and         $s0, $t3, $s2
    ctx->r16 = ctx->r11 & ctx->r18;
    // 0x8021D180: sb          $t2, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r10;
    // 0x8021D184: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x8021D188: addiu       $t5, $s0, 0x7
    ctx->r13 = ADD32(ctx->r16, 0X7);
    // 0x8021D18C: and         $s0, $t5, $s2
    ctx->r16 = ctx->r13 & ctx->r18;
    // 0x8021D190: sb          $t4, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r12;
    // 0x8021D194: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8021D198: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021D19C: b           L_8021CF88
    // 0x8021D1A0: sb          $t6, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r14;
        goto L_8021CF88;
    // 0x8021D1A0: sb          $t6, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r14;
L_8021D1A4:
    // 0x8021D1A4: addiu       $t7, $s0, 0x3
    ctx->r15 = ADD32(ctx->r16, 0X3);
    // 0x8021D1A8: and         $s0, $t7, $s2
    ctx->r16 = ctx->r15 & ctx->r18;
    // 0x8021D1AC: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8021D1B0: addiu       $t0, $s0, 0x7
    ctx->r8 = ADD32(ctx->r16, 0X7);
    // 0x8021D1B4: and         $s0, $t0, $s2
    ctx->r16 = ctx->r8 & ctx->r18;
    // 0x8021D1B8: sb          $t9, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r25;
    // 0x8021D1BC: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8021D1C0: addiu       $t1, $s0, 0x7
    ctx->r9 = ADD32(ctx->r16, 0X7);
    // 0x8021D1C4: and         $s0, $t1, $s2
    ctx->r16 = ctx->r9 & ctx->r18;
    // 0x8021D1C8: sb          $t8, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r24;
    // 0x8021D1CC: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x8021D1D0: addiu       $t3, $s0, 0x7
    ctx->r11 = ADD32(ctx->r16, 0X7);
    // 0x8021D1D4: and         $s0, $t3, $s2
    ctx->r16 = ctx->r11 & ctx->r18;
    // 0x8021D1D8: sb          $t2, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r10;
    // 0x8021D1DC: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x8021D1E0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021D1E4: b           L_8021CF88
    // 0x8021D1E8: sb          $t4, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r12;
        goto L_8021CF88;
    // 0x8021D1E8: sb          $t4, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r12;
L_8021D1EC:
    // 0x8021D1EC: jal         0x80231A24
    // 0x8021D1F0: addiu       $a0, $a0, 0x3504
    ctx->r4 = ADD32(ctx->r4, 0X3504);
    func_80231A24(rdram, ctx);
        goto after_5;
    // 0x8021D1F0: addiu       $a0, $a0, 0x3504
    ctx->r4 = ADD32(ctx->r4, 0X3504);
    after_5:
    // 0x8021D1F4: b           L_8021CF8C
    // 0x8021D1F8: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
        goto L_8021CF8C;
    // 0x8021D1F8: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
L_8021D1FC:
    // 0x8021D1FC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_8021D200:
    // 0x8021D200: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8021D204: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x8021D208: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x8021D20C: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x8021D210: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x8021D214: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x8021D218: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x8021D21C: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x8021D220: jr          $ra
    // 0x8021D224: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8021D224: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80234E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234E90: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80234E94: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80234E98: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80234E9C: jr          $ra
    // 0x80234EA0: sw          $t7, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r15;
    return;
    // 0x80234EA0: sw          $t7, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_802171F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802171F0: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x802171F4: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
    // 0x802171F8: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802171FC: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x80217200: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x80217204: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x80217208: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x8021720C: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x80217210: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x80217214: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x80217218: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x8021721C: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x80217220: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x80217224: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80217228: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x8021722C: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x80217230: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x80217234: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x80217238: swc1        $f12, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f12.u32l;
    // 0x8021723C: swc1        $f14, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f14.u32l;
    // 0x80217240: sw          $a2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r6;
    // 0x80217244: sw          $a3, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r7;
    // 0x80217248: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x8021724C: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x80217250: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80217254: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x80217258: lw          $fp, 0x0($t1)
    ctx->r30 = MEM_W(ctx->r9, 0X0);
    // 0x8021725C: lw          $s6, 0x8($fp)
    ctx->r22 = MEM_W(ctx->r30, 0X8);
    // 0x80217260: lbu         $t2, 0x4($s6)
    ctx->r10 = MEM_BU(ctx->r22, 0X4);
    // 0x80217264: jal         0x80228CE0
    // 0x80217268: sh          $t2, 0xFE($sp)
    MEM_H(0XFE, ctx->r29) = ctx->r10;
    func_80228CE0(rdram, ctx);
        goto after_0;
    // 0x80217268: sh          $t2, 0xFE($sp)
    MEM_H(0XFE, ctx->r29) = ctx->r10;
    after_0:
    // 0x8021726C: lh          $a2, 0xFE($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XFE);
    // 0x80217270: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80217274: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80217278: blez        $a2, L_80217588
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8021727C: lwc1        $f26, 0x8C($sp)
        ctx->f26.u32l = MEM_W(ctx->r29, 0X8C);
            goto L_80217588;
    }
    // 0x8021727C: lwc1        $f26, 0x8C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80217280: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80217284: lui         $s7, 0x8026
    ctx->r23 = S32(0X8026 << 16);
    // 0x80217288: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8021728C: addiu       $s7, $s7, -0x3C6C
    ctx->r23 = ADD32(ctx->r23, -0X3C6C);
    // 0x80217290: lwc1        $f24, 0x88($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80217294: lwc1        $f22, 0x84($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80217298: addiu       $s5, $sp, 0xA8
    ctx->r21 = ADD32(ctx->r29, 0XA8);
    // 0x8021729C: lw          $v1, 0x118($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X118);
    // 0x802172A0: sll         $s4, $s3, 3
    ctx->r20 = S32(ctx->r19 << 3);
L_802172A4:
    // 0x802172A4: lw          $t3, 0x0($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X0);
    // 0x802172A8: addu        $s4, $s4, $s3
    ctx->r20 = ADD32(ctx->r20, ctx->r19);
    // 0x802172AC: sll         $s4, $s4, 2
    ctx->r20 = S32(ctx->r20 << 2);
    // 0x802172B0: slti        $at, $s3, 0x20
    ctx->r1 = SIGNED(ctx->r19) < 0X20 ? 1 : 0;
    // 0x802172B4: beq         $at, $zero, L_802172D4
    if (ctx->r1 == 0) {
        // 0x802172B8: addu        $v0, $t3, $s4
        ctx->r2 = ADD32(ctx->r11, ctx->r20);
            goto L_802172D4;
    }
    // 0x802172B8: addu        $v0, $t3, $s4
    ctx->r2 = ADD32(ctx->r11, ctx->r20);
    // 0x802172BC: lw          $t4, 0x10($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X10);
    // 0x802172C0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802172C4: sllv        $t6, $t5, $s3
    ctx->r14 = S32(ctx->r13 << (ctx->r19 & 31));
    // 0x802172C8: and         $t8, $t4, $t6
    ctx->r24 = ctx->r12 & ctx->r14;
    // 0x802172CC: bne         $t8, $zero, L_802172E8
    if (ctx->r24 != 0) {
        // 0x802172D0: nop
    
            goto L_802172E8;
    }
    // 0x802172D0: nop

L_802172D4:
    // 0x802172D4: lbu         $t9, 0x7($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X7);
    // 0x802172D8: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x802172DC: andi        $t7, $t9, 0x1
    ctx->r15 = ctx->r25 & 0X1;
    // 0x802172E0: beq         $t7, $zero, L_802172F0
    if (ctx->r15 == 0) {
        // 0x802172E4: nop
    
            goto L_802172F0;
    }
    // 0x802172E4: nop

L_802172E8:
    // 0x802172E8: b           L_802172F0
    // 0x802172EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_802172F0;
    // 0x802172EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_802172F0:
    // 0x802172F0: bne         $s0, $zero, L_80217308
    if (ctx->r16 != 0) {
        // 0x802172F4: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80217308;
    }
    // 0x802172F4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x802172F8: lbu         $t0, 0x7($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X7);
    // 0x802172FC: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x80217300: bnel        $t1, $zero, L_80217564
    if (ctx->r9 != 0) {
        // 0x80217304: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80217564;
    }
    goto skip_0;
    // 0x80217304: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
L_80217308:
    // 0x80217308: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x8021730C: sll         $t3, $s3, 1
    ctx->r11 = S32(ctx->r19 << 1);
    // 0x80217310: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x80217314: addu        $t5, $t2, $t3
    ctx->r13 = ADD32(ctx->r10, ctx->r11);
    // 0x80217318: lhu         $t4, 0x0($t5)
    ctx->r12 = MEM_HU(ctx->r13, 0X0);
    // 0x8021731C: lw          $t8, -0x3C1C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C1C);
    // 0x80217320: addiu       $s1, $a2, -0x1
    ctx->r17 = ADD32(ctx->r6, -0X1);
    // 0x80217324: sll         $t6, $t4, 6
    ctx->r14 = S32(ctx->r12 << 6);
    // 0x80217328: jal         0x80228DE0
    // 0x8021732C: addu        $a1, $t8, $t6
    ctx->r5 = ADD32(ctx->r24, ctx->r14);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x8021732C: addu        $a1, $t8, $t6
    ctx->r5 = ADD32(ctx->r24, ctx->r14);
    after_1:
    // 0x80217330: bne         $s3, $zero, L_802173DC
    if (ctx->r19 != 0) {
        // 0x80217334: lwc1        $f4, 0xD8($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
            goto L_802173DC;
    }
    // 0x80217334: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x80217338: lwc1        $f4, 0xA8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8021733C: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80217340: lwc1        $f0, 0x20($fp)
    ctx->f0.u32l = MEM_W(ctx->r30, 0X20);
    // 0x80217344: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80217348: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8021734C: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80217350: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80217354: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80217358: mul.s       $f6, $f8, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8021735C: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80217360: mul.s       $f8, $f10, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80217364: add.s       $f22, $f6, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80217368: lwc1        $f6, 0xBC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x8021736C: mul.s       $f4, $f6, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x80217370: lwc1        $f6, 0xC0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80217374: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80217378: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x8021737C: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80217380: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80217384: add.s       $f24, $f8, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80217388: lwc1        $f8, 0xCC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x8021738C: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80217390: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x80217394: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80217398: mul.s       $f6, $f8, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8021739C: add.s       $f26, $f6, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802173A0: mul.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x802173A4: nop

    // 0x802173A8: mul.s       $f24, $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
    // 0x802173AC: nop

    // 0x802173B0: mul.s       $f26, $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f0.fl);
    // 0x802173B4: div.s       $f8, $f20, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = DIV_S(ctx->f20.fl, ctx->f24.fl);
    // 0x802173B8: div.s       $f6, $f20, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = DIV_S(ctx->f20.fl, ctx->f26.fl);
    // 0x802173BC: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802173C0: div.s       $f10, $f20, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = DIV_S(ctx->f20.fl, ctx->f22.fl);
    // 0x802173C4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x802173C8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802173CC: jal         0x8022A210
    // 0x802173D0: nop

    func_8022A210(rdram, ctx);
        goto after_2;
    // 0x802173D0: nop

    after_2:
    // 0x802173D4: b           L_80217488
    // 0x802173D8: nop

        goto L_80217488;
    // 0x802173D8: nop

L_802173DC:
    // 0x802173DC: mul.s       $f10, $f4, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x802173E0: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802173E4: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802173E8: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x802173EC: mul.s       $f6, $f8, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x802173F0: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x802173F4: lwc1        $f14, 0xB0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x802173F8: swc1        $f10, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f10.u32l;
    // 0x802173FC: mul.s       $f10, $f4, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x80217400: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80217404: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80217408: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    // 0x8021740C: mul.s       $f6, $f18, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80217410: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x80217414: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80217418: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8021741C: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80217420: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80217424: mul.s       $f10, $f6, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x80217428: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x8021742C: div.s       $f0, $f20, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f20.fl, ctx->f8.fl);
    // 0x80217430: mul.s       $f8, $f4, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80217434: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80217438: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8021743C: mul.s       $f10, $f4, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80217440: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80217444: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80217448: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8021744C: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80217450: div.s       $f2, $f20, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f20.fl, ctx->f8.fl);
    // 0x80217454: lwc1        $f8, 0xCC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80217458: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8021745C: lwc1        $f4, 0xCC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80217460: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80217464: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x80217468: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8021746C: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80217470: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80217474: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80217478: div.s       $f12, $f20, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = DIV_S(ctx->f20.fl, ctx->f10.fl);
    // 0x8021747C: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x80217480: jal         0x8022A210
    // 0x80217484: nop

    func_8022A210(rdram, ctx);
        goto after_3;
    // 0x80217484: nop

    after_3:
L_80217488:
    // 0x80217488: jal         0x80228D0C
    // 0x8021748C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80228D0C(rdram, ctx);
        goto after_4;
    // 0x8021748C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_4:
    // 0x80217490: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80217494: sll         $t9, $s2, 16
    ctx->r25 = S32(ctx->r18 << 16);
    // 0x80217498: beq         $s0, $zero, L_802174F8
    if (ctx->r16 == 0) {
        // 0x8021749C: sra         $s2, $t9, 16
        ctx->r18 = S32(SIGNED(ctx->r25) >> 16);
            goto L_802174F8;
    }
    // 0x8021749C: sra         $s2, $t9, 16
    ctx->r18 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802174A0: lw          $t0, 0x0($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X0);
    // 0x802174A4: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x802174A8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802174AC: sll         $t2, $s3, 24
    ctx->r10 = S32(ctx->r19 << 24);
    // 0x802174B0: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x802174B4: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x802174B8: jal         0x80228CF0
    // 0x802174BC: sw          $t3, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r11;
    func_80228CF0(rdram, ctx);
        goto after_5;
    // 0x802174BC: sw          $t3, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r11;
    after_5:
    // 0x802174C0: lwc1        $f4, 0x110($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X110);
    // 0x802174C4: lwc1        $f6, 0x114($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X114);
    // 0x802174C8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802174CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802174D0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x802174D4: lw          $t5, 0x0($s6)
    ctx->r13 = MEM_W(ctx->r22, 0X0);
    // 0x802174D8: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    // 0x802174DC: lwc1        $f12, 0x100($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X100);
    // 0x802174E0: addu        $t4, $t5, $s4
    ctx->r12 = ADD32(ctx->r13, ctx->r20);
    // 0x802174E4: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x802174E8: lwc1        $f14, 0x104($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X104);
    // 0x802174EC: lw          $a2, 0x108($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X108);
    // 0x802174F0: jal         0x80219500
    // 0x802174F4: lw          $a3, 0x10C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X10C);
    func_80219500(rdram, ctx);
        goto after_6;
    // 0x802174F4: lw          $a3, 0x10C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X10C);
    after_6:
L_802174F8:
    // 0x802174F8: bnel        $s3, $s1, L_8021750C
    if (ctx->r19 != ctx->r17) {
        // 0x802174FC: lw          $t8, 0x0($s6)
        ctx->r24 = MEM_W(ctx->r22, 0X0);
            goto L_8021750C;
    }
    goto skip_1;
    // 0x802174FC: lw          $t8, 0x0($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X0);
    skip_1:
    // 0x80217500: b           L_80217588
    // 0x80217504: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_80217588;
    // 0x80217504: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80217508: lw          $t8, 0x0($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X0);
L_8021750C:
    // 0x8021750C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80217510: addu        $v0, $t8, $s4
    ctx->r2 = ADD32(ctx->r24, ctx->r20);
    // 0x80217514: lbu         $t6, 0x6($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6);
    // 0x80217518: lbu         $t9, 0x2A($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2A);
    // 0x8021751C: subu        $s1, $t6, $t9
    ctx->r17 = SUB32(ctx->r14, ctx->r25);
    // 0x80217520: sll         $t7, $s1, 16
    ctx->r15 = S32(ctx->r17 << 16);
    // 0x80217524: sra         $s1, $t7, 16
    ctx->r17 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80217528: bltzl       $s1, L_8021755C
    if (SIGNED(ctx->r17) < 0) {
        // 0x8021752C: lh          $a2, 0xFE($sp)
        ctx->r6 = MEM_H(ctx->r29, 0XFE);
            goto L_8021755C;
    }
    goto skip_2;
    // 0x8021752C: lh          $a2, 0xFE($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XFE);
    skip_2:
L_80217530:
    // 0x80217530: jal         0x80228D9C
    // 0x80217534: nop

    func_80228D9C(rdram, ctx);
        goto after_7;
    // 0x80217534: nop

    after_7:
    // 0x80217538: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021753C: sll         $t3, $s0, 16
    ctx->r11 = S32(ctx->r16 << 16);
    // 0x80217540: sra         $s0, $t3, 16
    ctx->r16 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80217544: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80217548: sll         $t1, $s2, 16
    ctx->r9 = S32(ctx->r18 << 16);
    // 0x8021754C: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80217550: beq         $at, $zero, L_80217530
    if (ctx->r1 == 0) {
        // 0x80217554: sra         $s2, $t1, 16
        ctx->r18 = S32(SIGNED(ctx->r9) >> 16);
            goto L_80217530;
    }
    // 0x80217554: sra         $s2, $t1, 16
    ctx->r18 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80217558: lh          $a2, 0xFE($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XFE);
L_8021755C:
    // 0x8021755C: lw          $v1, 0x118($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X118);
    // 0x80217560: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_80217564:
    // 0x80217564: sll         $t4, $s3, 16
    ctx->r12 = S32(ctx->r19 << 16);
    // 0x80217568: sra         $s3, $t4, 16
    ctx->r19 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8021756C: slt         $at, $s3, $a2
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80217570: bnel        $at, $zero, L_802172A4
    if (ctx->r1 != 0) {
        // 0x80217574: sll         $s4, $s3, 3
        ctx->r20 = S32(ctx->r19 << 3);
            goto L_802172A4;
    }
    goto skip_3;
    // 0x80217574: sll         $s4, $s3, 3
    ctx->r20 = S32(ctx->r19 << 3);
    skip_3:
    // 0x80217578: swc1        $f26, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f26.u32l;
    // 0x8021757C: swc1        $f24, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f24.u32l;
    // 0x80217580: swc1        $f22, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f22.u32l;
    // 0x80217584: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80217588:
    // 0x80217588: blezl       $s2, L_802175B4
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8021758C: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_802175B4;
    }
    goto skip_4;
    // 0x8021758C: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_4:
L_80217590:
    // 0x80217590: jal         0x80228D9C
    // 0x80217594: nop

    func_80228D9C(rdram, ctx);
        goto after_8;
    // 0x80217594: nop

    after_8:
    // 0x80217598: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8021759C: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x802175A0: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802175A4: slt         $at, $s3, $s2
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x802175A8: bne         $at, $zero, L_80217590
    if (ctx->r1 != 0) {
        // 0x802175AC: nop
    
            goto L_80217590;
    }
    // 0x802175AC: nop

    // 0x802175B0: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_802175B4:
    // 0x802175B4: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x802175B8: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x802175BC: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x802175C0: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x802175C4: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x802175C8: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x802175CC: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x802175D0: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x802175D4: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x802175D8: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x802175DC: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x802175E0: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x802175E4: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x802175E8: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    // 0x802175EC: jr          $ra
    // 0x802175F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x802175F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_8022BE54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022BE54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BE58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BE5C: jal         0x8022B948
    // 0x8022BE60: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8022B948(rdram, ctx);
        goto after_0;
    // 0x8022BE60: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x8022BE64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BE68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022BE6C: jr          $ra
    // 0x8022BE70: nop

    return;
    // 0x8022BE70: nop

;}
RECOMP_FUNC void func_80247308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247308: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8024730C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80247310: jal         0x80241760
    // 0x80247314: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x80247314: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x80247318: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8024731C: lw          $t6, 0x1A70($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1A70);
    // 0x80247320: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80247324: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80247328: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8024732C: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x80247330: lw          $t1, 0x14($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X14);
    // 0x80247334: lw          $t0, 0x10($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X10);
    // 0x80247338: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x8024733C: beq         $t7, $t6, L_802473E4
    if (ctx->r15 == ctx->r14) {
        // 0x80247340: sw          $t0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r8;
            goto L_802473E4;
    }
    // 0x80247340: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80247344: lw          $t2, 0x10($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X10);
    // 0x80247348: lw          $t3, 0x14($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X14);
    // 0x8024734C: sltu        $at, $t0, $t2
    ctx->r1 = ctx->r8 < ctx->r10 ? 1 : 0;
    // 0x80247350: bne         $at, $zero, L_802473E4
    if (ctx->r1 != 0) {
        // 0x80247354: sltu        $at, $t2, $t0
        ctx->r1 = ctx->r10 < ctx->r8 ? 1 : 0;
            goto L_802473E4;
    }
    // 0x80247354: sltu        $at, $t2, $t0
    ctx->r1 = ctx->r10 < ctx->r8 ? 1 : 0;
    // 0x80247358: bne         $at, $zero, L_80247368
    if (ctx->r1 != 0) {
        // 0x8024735C: sltu        $at, $t3, $t1
        ctx->r1 = ctx->r11 < ctx->r9 ? 1 : 0;
            goto L_80247368;
    }
    // 0x8024735C: sltu        $at, $t3, $t1
    ctx->r1 = ctx->r11 < ctx->r9 ? 1 : 0;
    // 0x80247360: beq         $at, $zero, L_802473E4
    if (ctx->r1 == 0) {
        // 0x80247364: nop
    
            goto L_802473E4;
    }
    // 0x80247364: nop

L_80247368:
    // 0x80247368: addiu       $t9, $sp, 0x28
    ctx->r25 = ADD32(ctx->r29, 0X28);
    // 0x8024736C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80247370: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80247374: lw          $t5, 0x4($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X4);
    // 0x80247378: lw          $t4, 0x0($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X0);
    // 0x8024737C: lw          $t7, 0x14($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X14);
    // 0x80247380: lw          $t6, 0x10($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X10);
    // 0x80247384: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x80247388: sltu        $at, $t5, $t7
    ctx->r1 = ctx->r13 < ctx->r15 ? 1 : 0;
    // 0x8024738C: subu        $t0, $t4, $t6
    ctx->r8 = SUB32(ctx->r12, ctx->r14);
    // 0x80247390: subu        $t0, $t0, $at
    ctx->r8 = SUB32(ctx->r8, ctx->r1);
    // 0x80247394: subu        $t1, $t5, $t7
    ctx->r9 = SUB32(ctx->r13, ctx->r15);
    // 0x80247398: sw          $t1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r9;
    // 0x8024739C: sw          $t0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r8;
    // 0x802473A0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x802473A4: lw          $t8, 0x1A70($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1A70);
    // 0x802473A8: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x802473AC: beq         $t3, $t8, L_802473E4
    if (ctx->r11 == ctx->r24) {
        // 0x802473B0: sw          $t3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r11;
            goto L_802473E4;
    }
    // 0x802473B0: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x802473B4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x802473B8: lw          $t6, 0x10($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X10);
    // 0x802473BC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x802473C0: lw          $t7, 0x14($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X14);
    // 0x802473C4: sltu        $at, $t6, $t4
    ctx->r1 = ctx->r14 < ctx->r12 ? 1 : 0;
    // 0x802473C8: bne         $at, $zero, L_80247368
    if (ctx->r1 != 0) {
        // 0x802473CC: nop
    
            goto L_80247368;
    }
    // 0x802473CC: nop

    // 0x802473D0: sltu        $at, $t4, $t6
    ctx->r1 = ctx->r12 < ctx->r14 ? 1 : 0;
    // 0x802473D4: bne         $at, $zero, L_802473E4
    if (ctx->r1 != 0) {
        // 0x802473D8: sltu        $at, $t7, $t5
        ctx->r1 = ctx->r15 < ctx->r13 ? 1 : 0;
            goto L_802473E4;
    }
    // 0x802473D8: sltu        $at, $t7, $t5
    ctx->r1 = ctx->r15 < ctx->r13 ? 1 : 0;
    // 0x802473DC: bne         $at, $zero, L_80247368
    if (ctx->r1 != 0) {
        // 0x802473E0: nop
    
            goto L_80247368;
    }
    // 0x802473E0: nop

L_802473E4:
    // 0x802473E4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x802473E8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x802473EC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x802473F0: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x802473F4: sw          $t0, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r8;
    // 0x802473F8: sw          $t1, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r9;
    // 0x802473FC: lw          $t8, 0x1A70($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1A70);
    // 0x80247400: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80247404: beq         $t2, $t8, L_8024743C
    if (ctx->r10 == ctx->r24) {
        // 0x80247408: nop
    
            goto L_8024743C;
    }
    // 0x80247408: nop

    // 0x8024740C: addiu       $t3, $t2, 0x10
    ctx->r11 = ADD32(ctx->r10, 0X10);
    // 0x80247410: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80247414: lw          $t5, 0x14($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X14);
    // 0x80247418: lw          $t4, 0x10($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X10);
    // 0x8024741C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80247420: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80247424: subu        $t0, $t4, $t6
    ctx->r8 = SUB32(ctx->r12, ctx->r14);
    // 0x80247428: sltu        $at, $t5, $t7
    ctx->r1 = ctx->r13 < ctx->r15 ? 1 : 0;
    // 0x8024742C: subu        $t0, $t0, $at
    ctx->r8 = SUB32(ctx->r8, ctx->r1);
    // 0x80247430: subu        $t1, $t5, $t7
    ctx->r9 = SUB32(ctx->r13, ctx->r15);
    // 0x80247434: sw          $t1, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r9;
    // 0x80247438: sw          $t0, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r8;
L_8024743C:
    // 0x8024743C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80247440: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80247444: sw          $t9, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r25;
    // 0x80247448: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8024744C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80247450: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x80247454: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80247458: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8024745C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80247460: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x80247464: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80247468: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8024746C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80247470: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x80247474: jal         0x80241780
    // 0x80247478: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_80241780(rdram, ctx);
        goto after_1;
    // 0x80247478: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x8024747C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80247480: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80247484: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80247488: jr          $ra
    // 0x8024748C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8024748C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022CA30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022CA30: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022CA34: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022CA38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022CA3C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022CA40: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022CA44: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022CA48: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022CA4C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022CA50: lui         $s0, 0x8028
    ctx->r16 = S32(0X8028 << 16);
    // 0x8022CA54: lui         $s6, 0x8025
    ctx->r22 = S32(0X8025 << 16);
    // 0x8022CA58: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022CA5C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8022CA60: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8022CA64: addiu       $s6, $s6, 0x4488
    ctx->r22 = ADD32(ctx->r22, 0X4488);
    // 0x8022CA68: addiu       $s0, $s0, 0x1258
    ctx->r16 = ADD32(ctx->r16, 0X1258);
    // 0x8022CA6C: addiu       $s1, $sp, 0x3C
    ctx->r17 = ADD32(ctx->r29, 0X3C);
    // 0x8022CA70: addiu       $s2, $zero, 0x29A
    ctx->r18 = ADD32(0, 0X29A);
    // 0x8022CA74: addiu       $s3, $zero, 0x29B
    ctx->r19 = ADD32(0, 0X29B);
    // 0x8022CA78: addiu       $s4, $zero, 0x29C
    ctx->r20 = ADD32(0, 0X29C);
    // 0x8022CA7C: addiu       $s5, $zero, 0x29D
    ctx->r21 = ADD32(0, 0X29D);
    // 0x8022CA80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8022CA84:
    // 0x8022CA84: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022CA88: jal         0x802374B0
    // 0x8022CA8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_0;
    // 0x8022CA8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8022CA90: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8022CA94: beq         $t6, $s2, L_8022CABC
    if (ctx->r14 == ctx->r18) {
        // 0x8022CA98: nop
    
            goto L_8022CABC;
    }
    // 0x8022CA98: nop

    // 0x8022CA9C: beq         $t6, $s3, L_8022CACC
    if (ctx->r14 == ctx->r19) {
        // 0x8022CAA0: nop
    
            goto L_8022CACC;
    }
    // 0x8022CAA0: nop

    // 0x8022CAA4: beq         $t6, $s4, L_8022CADC
    if (ctx->r14 == ctx->r20) {
        // 0x8022CAA8: nop
    
            goto L_8022CADC;
    }
    // 0x8022CAA8: nop

    // 0x8022CAAC: beq         $t6, $s5, L_8022CAEC
    if (ctx->r14 == ctx->r21) {
        // 0x8022CAB0: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_8022CAEC;
    }
    // 0x8022CAB0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8022CAB4: b           L_8022CAFC
    // 0x8022CAB8: nop

        goto L_8022CAFC;
    // 0x8022CAB8: nop

L_8022CABC:
    // 0x8022CABC: jal         0x8022CB48
    // 0x8022CAC0: nop

    func_8022CB48(rdram, ctx);
        goto after_1;
    // 0x8022CAC0: nop

    after_1:
    // 0x8022CAC4: b           L_8022CA84
    // 0x8022CAC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8022CA84;
    // 0x8022CAC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8022CACC:
    // 0x8022CACC: jal         0x8022CE68
    // 0x8022CAD0: nop

    func_8022CE68(rdram, ctx);
        goto after_2;
    // 0x8022CAD0: nop

    after_2:
    // 0x8022CAD4: b           L_8022CA84
    // 0x8022CAD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8022CA84;
    // 0x8022CAD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8022CADC:
    // 0x8022CADC: jal         0x8022CFAC
    // 0x8022CAE0: nop

    func_8022CFAC(rdram, ctx);
        goto after_3;
    // 0x8022CAE0: nop

    after_3:
    // 0x8022CAE4: b           L_8022CA84
    // 0x8022CAE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8022CA84;
    // 0x8022CAE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8022CAEC:
    // 0x8022CAEC: jal         0x8022D00C
    // 0x8022CAF0: nop

    func_8022D00C(rdram, ctx);
        goto after_4;
    // 0x8022CAF0: nop

    after_4:
    // 0x8022CAF4: b           L_8022CA84
    // 0x8022CAF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8022CA84;
    // 0x8022CAF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8022CAFC:
    // 0x8022CAFC: jal         0x80231A24
    // 0x8022CB00: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_80231A24(rdram, ctx);
        goto after_5;
    // 0x8022CB00: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_5:
    // 0x8022CB04: b           L_8022CA84
    // 0x8022CB08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8022CA84;
    // 0x8022CB08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8022CB0C: nop

    // 0x8022CB10: nop

    // 0x8022CB14: nop

    // 0x8022CB18: nop

    // 0x8022CB1C: nop

    // 0x8022CB20: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022CB24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022CB28: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CB2C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022CB30: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022CB34: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022CB38: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022CB3C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022CB40: jr          $ra
    // 0x8022CB44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8022CB44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80248010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248010: mtc0        $a0, Status
    cop0_status_write(ctx, ctx->r4);    // 0x80248014: nop

    // 0x80248018: jr          $ra
    // 0x8024801C: nop

    return;
    // 0x8024801C: nop

;}
RECOMP_FUNC void func_8023A7B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023A7B4: addiu       $sp, $sp, -0x1F0
    ctx->r29 = ADD32(ctx->r29, -0X1F0);
    // 0x8023A7B8: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023A7BC: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8023A7C0: lw          $v1, 0x3960($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3960);
    // 0x8023A7C4: lh          $t7, 0x2E($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2E);
    // 0x8023A7C8: lw          $t8, 0x1F0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1F0);
    // 0x8023A7CC: lh          $s4, 0x2($t2)
    ctx->r20 = MEM_H(ctx->r10, 0X2);
    // 0x8023A7D0: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023A7D4: sw          $t7, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->r15;
    // 0x8023A7D8: beq         $at, $zero, L_8023BE7C
    if (ctx->r1 == 0) {
        // 0x8023A7DC: lw          $t1, 0x0($t8)
        ctx->r9 = MEM_W(ctx->r24, 0X0);
            goto L_8023BE7C;
    }
    // 0x8023A7DC: lw          $t1, 0x0($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X0);
    // 0x8023A7E0: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8023A7E4: lw          $a2, 0x3964($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X3964);
    // 0x8023A7E8: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x8023A7EC: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8023A7F0: beq         $at, $zero, L_8023BE7C
    if (ctx->r1 == 0) {
        // 0x8023A7F4: nop
    
            goto L_8023BE7C;
    }
    // 0x8023A7F4: nop

    // 0x8023A7F8: lw          $t5, 0x3968($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3968);
    // 0x8023A7FC: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8023A800: slt         $at, $a3, $t5
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8023A804: bne         $at, $zero, L_8023BE7C
    if (ctx->r1 != 0) {
        // 0x8023A808: nop
    
            goto L_8023BE7C;
    }
    // 0x8023A808: nop

    // 0x8023A80C: lw          $v0, 0x396C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X396C);
    // 0x8023A810: slt         $at, $t3, $v0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023A814: bne         $at, $zero, L_8023BE7C
    if (ctx->r1 != 0) {
        // 0x8023A818: slt         $at, $a0, $t5
        ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r13) ? 1 : 0;
            goto L_8023BE7C;
    }
    // 0x8023A818: slt         $at, $a0, $t5
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8023A81C: beq         $at, $zero, L_8023A858
    if (ctx->r1 == 0) {
        // 0x8023A820: sll         $t7, $a0, 2
        ctx->r15 = S32(ctx->r4 << 2);
            goto L_8023A858;
    }
    // 0x8023A820: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8023A824: lw          $t7, 0x214($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X214);
    // 0x8023A828: subu        $t6, $t5, $a0
    ctx->r14 = SUB32(ctx->r13, ctx->r4);
    // 0x8023A82C: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x8023A830: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023A834: sw          $t9, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->r25;
    // 0x8023A838: lh          $t6, 0x4($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X4);
    // 0x8023A83C: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8023A840: mflo        $t8
    ctx->r24 = lo;
    // 0x8023A844: sra         $t9, $t8, 5
    ctx->r25 = S32(SIGNED(ctx->r24) >> 5);
    // 0x8023A848: addu        $t8, $t7, $t0
    ctx->r24 = ADD32(ctx->r15, ctx->r8);
    // 0x8023A84C: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x8023A850: b           L_8023A86C
    // 0x8023A854: sw          $t6, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->r14;
        goto L_8023A86C;
    // 0x8023A854: sw          $t6, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->r14;
L_8023A858:
    // 0x8023A858: sw          $t7, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->r15;
    // 0x8023A85C: lh          $t8, 0x4($t2)
    ctx->r24 = MEM_H(ctx->r10, 0X4);
    // 0x8023A860: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x8023A864: addu        $t6, $t9, $t0
    ctx->r14 = ADD32(ctx->r25, ctx->r8);
    // 0x8023A868: sw          $t6, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->r14;
L_8023A86C:
    // 0x8023A86C: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023A870: beq         $at, $zero, L_8023A8AC
    if (ctx->r1 == 0) {
        // 0x8023A874: sll         $t9, $a1, 2
        ctx->r25 = S32(ctx->r5 << 2);
            goto L_8023A8AC;
    }
    // 0x8023A874: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x8023A878: lw          $t9, 0x218($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X218);
    // 0x8023A87C: subu        $t8, $v0, $a1
    ctx->r24 = SUB32(ctx->r2, ctx->r5);
    // 0x8023A880: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8023A884: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023A888: sw          $t7, 0x1E0($sp)
    MEM_W(0X1E0, ctx->r29) = ctx->r15;
    // 0x8023A88C: lh          $t8, 0x6($t2)
    ctx->r24 = MEM_H(ctx->r10, 0X6);
    // 0x8023A890: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x8023A894: mflo        $t6
    ctx->r14 = lo;
    // 0x8023A898: sra         $t7, $t6, 5
    ctx->r15 = S32(SIGNED(ctx->r14) >> 5);
    // 0x8023A89C: addu        $t6, $t9, $t4
    ctx->r14 = ADD32(ctx->r25, ctx->r12);
    // 0x8023A8A0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8023A8A4: b           L_8023A8C0
    // 0x8023A8A8: sw          $t8, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->r24;
        goto L_8023A8C0;
    // 0x8023A8A8: sw          $t8, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->r24;
L_8023A8AC:
    // 0x8023A8AC: sw          $t9, 0x1E0($sp)
    MEM_W(0X1E0, ctx->r29) = ctx->r25;
    // 0x8023A8B0: lh          $t6, 0x6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X6);
    // 0x8023A8B4: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8023A8B8: addu        $t8, $t7, $t4
    ctx->r24 = ADD32(ctx->r15, ctx->r12);
    // 0x8023A8BC: sw          $t8, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->r24;
L_8023A8C0:
    // 0x8023A8C0: slt         $at, $a3, $v1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023A8C4: bne         $at, $zero, L_8023A8D8
    if (ctx->r1 != 0) {
        // 0x8023A8C8: sll         $t6, $a3, 2
        ctx->r14 = S32(ctx->r7 << 2);
            goto L_8023A8D8;
    }
    // 0x8023A8C8: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x8023A8CC: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x8023A8D0: b           L_8023A8DC
    // 0x8023A8D4: sw          $t9, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->r25;
        goto L_8023A8DC;
    // 0x8023A8D4: sw          $t9, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->r25;
L_8023A8D8:
    // 0x8023A8D8: sw          $t6, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->r14;
L_8023A8DC:
    // 0x8023A8DC: slt         $at, $t3, $a2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8023A8E0: bne         $at, $zero, L_8023A8F8
    if (ctx->r1 != 0) {
        // 0x8023A8E4: sll         $t8, $t3, 2
        ctx->r24 = S32(ctx->r11 << 2);
            goto L_8023A8F8;
    }
    // 0x8023A8E4: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x8023A8E8: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x8023A8EC: sw          $t7, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->r15;
    // 0x8023A8F0: b           L_8023A900
    // 0x8023A8F4: sw          $t2, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->r10;
        goto L_8023A900;
    // 0x8023A8F4: sw          $t2, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->r10;
L_8023A8F8:
    // 0x8023A8F8: sw          $t8, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->r24;
    // 0x8023A8FC: sw          $t2, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->r10;
L_8023A900:
    // 0x8023A900: lw          $a1, 0x1F8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023A904: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x8023A908: lw          $t9, 0x930($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X930);
    // 0x8023A90C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x8023A910: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023A914: beql        $t9, $v0, L_8023BCEC
    if (ctx->r25 == ctx->r2) {
        // 0x8023A918: addiu       $v0, $sp, 0x1BC
        ctx->r2 = ADD32(ctx->r29, 0X1BC);
            goto L_8023BCEC;
    }
    goto skip_0;
    // 0x8023A918: addiu       $v0, $sp, 0x1BC
    ctx->r2 = ADD32(ctx->r29, 0X1BC);
    skip_0:
    // 0x8023A91C: lbu         $a0, 0x31($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X31);
    // 0x8023A920: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023A924: lw          $t7, 0x1F4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023A928: beql        $a0, $zero, L_8023A95C
    if (ctx->r4 == 0) {
        // 0x8023A92C: lhu         $t8, 0x14($t7)
        ctx->r24 = MEM_HU(ctx->r15, 0X14);
            goto L_8023A95C;
    }
    goto skip_1;
    // 0x8023A92C: lhu         $t8, 0x14($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X14);
    skip_1:
    // 0x8023A930: beq         $a0, $at, L_8023AC94
    if (ctx->r4 == ctx->r1) {
        // 0x8023A934: lw          $t6, 0x1F4($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1F4);
            goto L_8023AC94;
    }
    // 0x8023A934: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023A938: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8023A93C: beq         $a0, $at, L_8023AFF0
    if (ctx->r4 == ctx->r1) {
        // 0x8023A940: lw          $a2, 0x1F4($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X1F4);
            goto L_8023AFF0;
    }
    // 0x8023A940: lw          $a2, 0x1F4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023A944: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8023A948: beq         $a0, $at, L_8023B9A0
    if (ctx->r4 == ctx->r1) {
        // 0x8023A94C: lw          $t8, 0x1F4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X1F4);
            goto L_8023B9A0;
    }
    // 0x8023A94C: lw          $t8, 0x1F4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023A950: b           L_8023BCE0
    // 0x8023A954: nop

        goto L_8023BCE0;
    // 0x8023A954: nop

    // 0x8023A958: lhu         $t8, 0x14($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X14);
L_8023A95C:
    // 0x8023A95C: lui         $a3, 0x10
    ctx->r7 = S32(0X10 << 16);
    // 0x8023A960: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023A964: andi        $t9, $t8, 0x200
    ctx->r25 = ctx->r24 & 0X200;
    // 0x8023A968: beq         $t9, $zero, L_8023AACC
    if (ctx->r25 == 0) {
        // 0x8023A96C: lui         $s2, 0xE600
        ctx->r18 = S32(0XE600 << 16);
            goto L_8023AACC;
    }
    // 0x8023A96C: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023A970: lbu         $t6, 0x30($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X30);
    // 0x8023A974: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023A978: lui         $a3, 0x10
    ctx->r7 = S32(0X10 << 16);
    // 0x8023A97C: andi        $t8, $t6, 0x7
    ctx->r24 = ctx->r14 & 0X7;
    // 0x8023A980: sll         $t9, $t8, 21
    ctx->r25 = S32(ctx->r24 << 21);
    // 0x8023A984: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x8023A988: or          $t6, $t7, $a3
    ctx->r14 = ctx->r15 | ctx->r7;
    // 0x8023A98C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023A990: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8023A994: lw          $t8, 0x8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X8);
    // 0x8023A998: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023A99C: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023A9A0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8023A9A4: lw          $t9, 0x1F4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023A9A8: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023A9AC: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023A9B0: lbu         $t7, 0x30($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X30);
    // 0x8023A9B4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023A9B8: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023A9BC: andi        $t6, $t7, 0x7
    ctx->r14 = ctx->r15 & 0X7;
    // 0x8023A9C0: sll         $t8, $t6, 21
    ctx->r24 = S32(ctx->r14 << 21);
    // 0x8023A9C4: or          $t9, $t8, $t3
    ctx->r25 = ctx->r24 | ctx->r11;
    // 0x8023A9C8: or          $t7, $t9, $a3
    ctx->r15 = ctx->r25 | ctx->r7;
    // 0x8023A9CC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8023A9D0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023A9D4: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023A9D8: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023A9DC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023A9E0: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8023A9E4: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x8023A9E8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8023A9EC: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023A9F0: sw          $fp, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r30;
    // 0x8023A9F4: lw          $t6, 0x1CC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023A9F8: addiu       $a0, $zero, 0x7FF
    ctx->r4 = ADD32(0, 0X7FF);
    // 0x8023A9FC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AA00: multu       $s4, $t6
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023AA04: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023AA08: mflo        $v0
    ctx->r2 = lo;
    // 0x8023AA0C: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x8023AA10: sra         $t8, $v0, 2
    ctx->r24 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8023AA14: addiu       $v0, $t8, -0x1
    ctx->r2 = ADD32(ctx->r24, -0X1);
    // 0x8023AA18: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023AA1C: beq         $at, $zero, L_8023AA2C
    if (ctx->r1 == 0) {
        // 0x8023AA20: lui         $t8, 0xE700
        ctx->r24 = S32(0XE700 << 16);
            goto L_8023AA2C;
    }
    // 0x8023AA20: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8023AA24: b           L_8023AA2C
    // 0x8023AA28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_8023AA2C;
    // 0x8023AA28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8023AA2C:
    // 0x8023AA2C: andi        $t9, $a0, 0xFFF
    ctx->r25 = ctx->r4 & 0XFFF;
    // 0x8023AA30: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x8023AA34: or          $t6, $t7, $s5
    ctx->r14 = ctx->r15 | ctx->r21;
    // 0x8023AA38: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x8023AA3C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023AA40: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8023AA44: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023AA48: lw          $t9, 0x1F4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023AA4C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AA50: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023AA54: lbu         $t7, 0x30($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X30);
    // 0x8023AA58: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AA5C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8023AA60: andi        $t6, $t7, 0x7
    ctx->r14 = ctx->r15 & 0X7;
    // 0x8023AA64: sll         $t8, $t6, 21
    ctx->r24 = S32(ctx->r14 << 21);
    // 0x8023AA68: sra         $t7, $s4, 1
    ctx->r15 = S32(SIGNED(ctx->r20) >> 1);
    // 0x8023AA6C: addiu       $t6, $t7, 0x7
    ctx->r14 = ADD32(ctx->r15, 0X7);
    // 0x8023AA70: or          $t9, $t8, $t3
    ctx->r25 = ctx->r24 | ctx->r11;
    // 0x8023AA74: sra         $t8, $t6, 3
    ctx->r24 = S32(SIGNED(ctx->r14) >> 3);
    // 0x8023AA78: andi        $t7, $t8, 0x1FF
    ctx->r15 = ctx->r24 & 0X1FF;
    // 0x8023AA7C: sll         $t6, $t7, 9
    ctx->r14 = S32(ctx->r15 << 9);
    // 0x8023AA80: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8023AA84: lui         $t7, 0x8
    ctx->r15 = S32(0X8 << 16);
    // 0x8023AA88: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x8023AA8C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8023AA90: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8023AA94: addiu       $t6, $s4, -0x1
    ctx->r14 = ADD32(ctx->r20, -0X1);
    // 0x8023AA98: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x8023AA9C: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8023AAA0: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8023AAA4: lw          $t6, 0x1CC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023AAA8: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8023AAAC: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x8023AAB0: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x8023AAB4: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8023AAB8: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x8023AABC: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8023AAC0: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x8023AAC4: b           L_8023AC88
    // 0x8023AAC8: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_8023AC88;
    // 0x8023AAC8: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023AACC:
    // 0x8023AACC: lw          $t7, 0x1F4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023AAD0: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023AAD4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023AAD8: lbu         $t9, 0x30($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X30);
    // 0x8023AADC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AAE0: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023AAE4: andi        $t6, $t9, 0x7
    ctx->r14 = ctx->r25 & 0X7;
    // 0x8023AAE8: sll         $t8, $t6, 21
    ctx->r24 = S32(ctx->r14 << 21);
    // 0x8023AAEC: or          $t7, $t8, $at
    ctx->r15 = ctx->r24 | ctx->r1;
    // 0x8023AAF0: or          $t9, $t7, $a3
    ctx->r25 = ctx->r15 | ctx->r7;
    // 0x8023AAF4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8023AAF8: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8023AAFC: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023AB00: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AB04: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8023AB08: lw          $t8, 0x1F4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023AB0C: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023AB10: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8023AB14: lbu         $t7, 0x30($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X30);
    // 0x8023AB18: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023AB1C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AB20: andi        $t9, $t7, 0x7
    ctx->r25 = ctx->r15 & 0X7;
    // 0x8023AB24: sll         $t6, $t9, 21
    ctx->r14 = S32(ctx->r25 << 21);
    // 0x8023AB28: or          $t8, $t6, $t3
    ctx->r24 = ctx->r14 | ctx->r11;
    // 0x8023AB2C: or          $t7, $t8, $a3
    ctx->r15 = ctx->r24 | ctx->r7;
    // 0x8023AB30: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023AB34: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8023AB38: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x8023AB3C: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x8023AB40: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023AB44: sw          $fp, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r30;
    // 0x8023AB48: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023AB4C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AB50: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023AB54: multu       $s4, $t9
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023AB58: addiu       $a2, $zero, 0x7FF
    ctx->r6 = ADD32(0, 0X7FF);
    // 0x8023AB5C: mflo        $v0
    ctx->r2 = lo;
    // 0x8023AB60: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x8023AB64: sra         $t6, $v0, 2
    ctx->r14 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8023AB68: addiu       $v0, $t6, -0x1
    ctx->r2 = ADD32(ctx->r14, -0X1);
    // 0x8023AB6C: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023AB70: beq         $at, $zero, L_8023AB80
    if (ctx->r1 == 0) {
        // 0x8023AB74: nop
    
            goto L_8023AB80;
    }
    // 0x8023AB74: nop

    // 0x8023AB78: b           L_8023AB80
    // 0x8023AB7C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_8023AB80;
    // 0x8023AB7C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_8023AB80:
    // 0x8023AB80: bgez        $s4, L_8023AB90
    if (SIGNED(ctx->r20) >= 0) {
        // 0x8023AB84: sra         $v0, $s4, 4
        ctx->r2 = S32(SIGNED(ctx->r20) >> 4);
            goto L_8023AB90;
    }
    // 0x8023AB84: sra         $v0, $s4, 4
    ctx->r2 = S32(SIGNED(ctx->r20) >> 4);
    // 0x8023AB88: addiu       $at, $s4, 0xF
    ctx->r1 = ADD32(ctx->r20, 0XF);
    // 0x8023AB8C: sra         $v0, $at, 4
    ctx->r2 = S32(SIGNED(ctx->r1) >> 4);
L_8023AB90:
    // 0x8023AB90: bgtz        $v0, L_8023ABA0
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023AB94: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8023ABA0;
    }
    // 0x8023AB94: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8023AB98: b           L_8023ABA0
    // 0x8023AB9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8023ABA0;
    // 0x8023AB9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8023ABA0:
    // 0x8023ABA0: bgtz        $v0, L_8023ABB0
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023ABA4: addiu       $t8, $a1, 0x7FF
        ctx->r24 = ADD32(ctx->r5, 0X7FF);
            goto L_8023ABB0;
    }
    // 0x8023ABA4: addiu       $t8, $a1, 0x7FF
    ctx->r24 = ADD32(ctx->r5, 0X7FF);
    // 0x8023ABA8: b           L_8023ABB4
    // 0x8023ABAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8023ABB4;
    // 0x8023ABAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023ABB0:
    // 0x8023ABB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8023ABB4:
    // 0x8023ABB4: div         $zero, $t8, $a0
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r4)));
    // 0x8023ABB8: mflo        $t7
    ctx->r15 = lo;
    // 0x8023ABBC: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8023ABC0: bne         $a0, $zero, L_8023ABCC
    if (ctx->r4 != 0) {
        // 0x8023ABC4: nop
    
            goto L_8023ABCC;
    }
    // 0x8023ABC4: nop

    // 0x8023ABC8: break       7
    do_break(2149821384);
L_8023ABCC:
    // 0x8023ABCC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023ABD0: bne         $a0, $at, L_8023ABE4
    if (ctx->r4 != ctx->r1) {
        // 0x8023ABD4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023ABE4;
    }
    // 0x8023ABD4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023ABD8: bne         $t8, $at, L_8023ABE4
    if (ctx->r24 != ctx->r1) {
        // 0x8023ABDC: nop
    
            goto L_8023ABE4;
    }
    // 0x8023ABDC: nop

    // 0x8023ABE0: break       6
    do_break(2149821408);
L_8023ABE4:
    // 0x8023ABE4: andi        $t8, $a2, 0xFFF
    ctx->r24 = ctx->r6 & 0XFFF;
    // 0x8023ABE8: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x8023ABEC: or          $t6, $t9, $s5
    ctx->r14 = ctx->r25 | ctx->r21;
    // 0x8023ABF0: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x8023ABF4: sw          $t9, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r25;
    // 0x8023ABF8: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023ABFC: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8023AC00: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8023AC04: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023AC08: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023AC0C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AC10: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023AC14: lbu         $t7, 0x30($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X30);
    // 0x8023AC18: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AC1C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023AC20: andi        $t9, $t7, 0x7
    ctx->r25 = ctx->r15 & 0X7;
    // 0x8023AC24: sll         $t8, $t9, 21
    ctx->r24 = S32(ctx->r25 << 21);
    // 0x8023AC28: sra         $t7, $s4, 1
    ctx->r15 = S32(SIGNED(ctx->r20) >> 1);
    // 0x8023AC2C: addiu       $t9, $t7, 0x7
    ctx->r25 = ADD32(ctx->r15, 0X7);
    // 0x8023AC30: or          $t6, $t8, $t3
    ctx->r14 = ctx->r24 | ctx->r11;
    // 0x8023AC34: sra         $t8, $t9, 3
    ctx->r24 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8023AC38: andi        $t7, $t8, 0x1FF
    ctx->r15 = ctx->r24 & 0X1FF;
    // 0x8023AC3C: sll         $t9, $t7, 9
    ctx->r25 = S32(ctx->r15 << 9);
    // 0x8023AC40: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8023AC44: lui         $t7, 0x8
    ctx->r15 = S32(0X8 << 16);
    // 0x8023AC48: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x8023AC4C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8023AC50: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8023AC54: addiu       $t9, $s4, -0x1
    ctx->r25 = ADD32(ctx->r20, -0X1);
    // 0x8023AC58: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x8023AC5C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8023AC60: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8023AC64: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023AC68: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8023AC6C: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x8023AC70: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x8023AC74: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8023AC78: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8023AC7C: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8023AC80: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8023AC84: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023AC88:
    // 0x8023AC88: lw          $t7, 0x1F8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023AC8C: b           L_8023BCE0
    // 0x8023AC90: lw          $v0, 0x8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X8);
        goto L_8023BCE0;
    // 0x8023AC90: lw          $v0, 0x8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X8);
L_8023AC94:
    // 0x8023AC94: lhu         $t9, 0x14($t6)
    ctx->r25 = MEM_HU(ctx->r14, 0X14);
    // 0x8023AC98: lui         $a3, 0x10
    ctx->r7 = S32(0X10 << 16);
    // 0x8023AC9C: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023ACA0: andi        $t8, $t9, 0x200
    ctx->r24 = ctx->r25 & 0X200;
    // 0x8023ACA4: beq         $t8, $zero, L_8023AE10
    if (ctx->r24 == 0) {
        // 0x8023ACA8: or          $t2, $s4, $zero
        ctx->r10 = ctx->r20 | 0;
            goto L_8023AE10;
    }
    // 0x8023ACA8: or          $t2, $s4, $zero
    ctx->r10 = ctx->r20 | 0;
    // 0x8023ACAC: lbu         $t7, 0x30($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X30);
    // 0x8023ACB0: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023ACB4: lui         $a3, 0x10
    ctx->r7 = S32(0X10 << 16);
    // 0x8023ACB8: andi        $t9, $t7, 0x7
    ctx->r25 = ctx->r15 & 0X7;
    // 0x8023ACBC: sll         $t8, $t9, 21
    ctx->r24 = S32(ctx->r25 << 21);
    // 0x8023ACC0: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x8023ACC4: or          $t7, $t6, $a3
    ctx->r15 = ctx->r14 | ctx->r7;
    // 0x8023ACC8: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023ACCC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023ACD0: lw          $t9, 0x1F8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023ACD4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023ACD8: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023ACDC: lw          $t8, 0x8($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X8);
    // 0x8023ACE0: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023ACE4: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023ACE8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8023ACEC: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023ACF0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023ACF4: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023ACF8: lbu         $t7, 0x30($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X30);
    // 0x8023ACFC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8023AD00: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023AD04: andi        $t9, $t7, 0x7
    ctx->r25 = ctx->r15 & 0X7;
    // 0x8023AD08: sll         $t8, $t9, 21
    ctx->r24 = S32(ctx->r25 << 21);
    // 0x8023AD0C: or          $t6, $t8, $t3
    ctx->r14 = ctx->r24 | ctx->r11;
    // 0x8023AD10: or          $t7, $t6, $a3
    ctx->r15 = ctx->r14 | ctx->r7;
    // 0x8023AD14: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023AD18: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023AD1C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AD20: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8023AD24: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x8023AD28: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8023AD2C: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023AD30: sw          $fp, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r30;
    // 0x8023AD34: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023AD38: addiu       $a0, $zero, 0x7FF
    ctx->r4 = ADD32(0, 0X7FF);
    // 0x8023AD3C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AD40: multu       $s4, $t9
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023AD44: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023AD48: mflo        $v0
    ctx->r2 = lo;
    // 0x8023AD4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023AD50: sra         $t8, $v0, 1
    ctx->r24 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8023AD54: addiu       $v0, $t8, -0x1
    ctx->r2 = ADD32(ctx->r24, -0X1);
    // 0x8023AD58: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023AD5C: beq         $at, $zero, L_8023AD6C
    if (ctx->r1 == 0) {
        // 0x8023AD60: lui         $t8, 0xE700
        ctx->r24 = S32(0XE700 << 16);
            goto L_8023AD6C;
    }
    // 0x8023AD60: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8023AD64: b           L_8023AD6C
    // 0x8023AD68: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_8023AD6C;
    // 0x8023AD68: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8023AD6C:
    // 0x8023AD6C: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x8023AD70: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8023AD74: or          $t9, $t7, $s5
    ctx->r25 = ctx->r15 | ctx->r21;
    // 0x8023AD78: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x8023AD7C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023AD80: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8023AD84: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023AD88: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023AD8C: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x8023AD90: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AD94: lbu         $t7, 0x30($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X30);
    // 0x8023AD98: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023AD9C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023ADA0: andi        $t9, $t7, 0x7
    ctx->r25 = ctx->r15 & 0X7;
    // 0x8023ADA4: sll         $t8, $t9, 21
    ctx->r24 = S32(ctx->r25 << 21);
    // 0x8023ADA8: or          $t6, $t8, $t3
    ctx->r14 = ctx->r24 | ctx->r11;
    // 0x8023ADAC: addiu       $t9, $s4, 0x7
    ctx->r25 = ADD32(ctx->r20, 0X7);
    // 0x8023ADB0: sra         $t8, $t9, 3
    ctx->r24 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8023ADB4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8023ADB8: andi        $t6, $t8, 0x1FF
    ctx->r14 = ctx->r24 & 0X1FF;
    // 0x8023ADBC: sll         $t9, $t6, 9
    ctx->r25 = S32(ctx->r14 << 9);
    // 0x8023ADC0: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x8023ADC4: lui         $t6, 0x8
    ctx->r14 = S32(0X8 << 16);
    // 0x8023ADC8: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x8023ADCC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8023ADD0: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8023ADD4: addiu       $t9, $s4, -0x1
    ctx->r25 = ADD32(ctx->r20, -0X1);
    // 0x8023ADD8: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x8023ADDC: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8023ADE0: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8023ADE4: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8023ADE8: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023ADEC: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x8023ADF0: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8023ADF4: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x8023ADF8: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8023ADFC: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8023AE00: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x8023AE04: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x8023AE08: b           L_8023AFE4
    // 0x8023AE0C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_8023AFE4;
    // 0x8023AE0C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023AE10:
    // 0x8023AE10: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023AE14: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023AE18: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023AE1C: lbu         $t7, 0x30($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X30);
    // 0x8023AE20: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AE24: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023AE28: andi        $t9, $t7, 0x7
    ctx->r25 = ctx->r15 & 0X7;
    // 0x8023AE2C: sll         $t8, $t9, 21
    ctx->r24 = S32(ctx->r25 << 21);
    // 0x8023AE30: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x8023AE34: or          $t7, $t6, $a3
    ctx->r15 = ctx->r14 | ctx->r7;
    // 0x8023AE38: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023AE3C: lw          $t9, 0x1F8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023AE40: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023AE44: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AE48: lw          $t8, 0x8($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X8);
    // 0x8023AE4C: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023AE50: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8023AE54: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8023AE58: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023AE5C: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023AE60: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AE64: lbu         $t7, 0x30($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X30);
    // 0x8023AE68: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023AE6C: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023AE70: andi        $t9, $t7, 0x7
    ctx->r25 = ctx->r15 & 0X7;
    // 0x8023AE74: sll         $t8, $t9, 21
    ctx->r24 = S32(ctx->r25 << 21);
    // 0x8023AE78: or          $t6, $t8, $t3
    ctx->r14 = ctx->r24 | ctx->r11;
    // 0x8023AE7C: or          $t7, $t6, $a3
    ctx->r15 = ctx->r14 | ctx->r7;
    // 0x8023AE80: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023AE84: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8023AE88: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x8023AE8C: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x8023AE90: sw          $fp, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r30;
    // 0x8023AE94: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023AE98: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AE9C: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023AEA0: multu       $s4, $t9
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023AEA4: addiu       $a2, $zero, 0x7FF
    ctx->r6 = ADD32(0, 0X7FF);
    // 0x8023AEA8: mflo        $v0
    ctx->r2 = lo;
    // 0x8023AEAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023AEB0: sra         $t8, $v0, 1
    ctx->r24 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8023AEB4: addiu       $v0, $t8, -0x1
    ctx->r2 = ADD32(ctx->r24, -0X1);
    // 0x8023AEB8: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023AEBC: beq         $at, $zero, L_8023AECC
    if (ctx->r1 == 0) {
        // 0x8023AEC0: nop
    
            goto L_8023AECC;
    }
    // 0x8023AEC0: nop

    // 0x8023AEC4: b           L_8023AECC
    // 0x8023AEC8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_8023AECC;
    // 0x8023AEC8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_8023AECC:
    // 0x8023AECC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023AED0: bgez        $t2, L_8023AEE0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8023AED4: sra         $t6, $t2, 3
        ctx->r14 = S32(SIGNED(ctx->r10) >> 3);
            goto L_8023AEE0;
    }
    // 0x8023AED4: sra         $t6, $t2, 3
    ctx->r14 = S32(SIGNED(ctx->r10) >> 3);
    // 0x8023AED8: addiu       $at, $t2, 0x7
    ctx->r1 = ADD32(ctx->r10, 0X7);
    // 0x8023AEDC: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_8023AEE0:
    // 0x8023AEE0: bgtz        $t6, L_8023AEF0
    if (SIGNED(ctx->r14) > 0) {
        // 0x8023AEE4: or          $t2, $t6, $zero
        ctx->r10 = ctx->r14 | 0;
            goto L_8023AEF0;
    }
    // 0x8023AEE4: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
    // 0x8023AEE8: b           L_8023AEF4
    // 0x8023AEEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8023AEF4;
    // 0x8023AEEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8023AEF0:
    // 0x8023AEF0: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
L_8023AEF4:
    // 0x8023AEF4: bgtz        $t2, L_8023AF04
    if (SIGNED(ctx->r10) > 0) {
        // 0x8023AEF8: addiu       $t7, $a1, 0x7FF
        ctx->r15 = ADD32(ctx->r5, 0X7FF);
            goto L_8023AF04;
    }
    // 0x8023AEF8: addiu       $t7, $a1, 0x7FF
    ctx->r15 = ADD32(ctx->r5, 0X7FF);
    // 0x8023AEFC: b           L_8023AF08
    // 0x8023AF00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8023AF08;
    // 0x8023AF00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023AF04:
    // 0x8023AF04: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
L_8023AF08:
    // 0x8023AF08: div         $zero, $t7, $a0
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r4)));
    // 0x8023AF0C: mflo        $t9
    ctx->r25 = lo;
    // 0x8023AF10: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x8023AF14: bne         $a0, $zero, L_8023AF20
    if (ctx->r4 != 0) {
        // 0x8023AF18: nop
    
            goto L_8023AF20;
    }
    // 0x8023AF18: nop

    // 0x8023AF1C: break       7
    do_break(2149822236);
L_8023AF20:
    // 0x8023AF20: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023AF24: bne         $a0, $at, L_8023AF38
    if (ctx->r4 != ctx->r1) {
        // 0x8023AF28: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023AF38;
    }
    // 0x8023AF28: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023AF2C: bne         $t7, $at, L_8023AF38
    if (ctx->r15 != ctx->r1) {
        // 0x8023AF30: nop
    
            goto L_8023AF38;
    }
    // 0x8023AF30: nop

    // 0x8023AF34: break       6
    do_break(2149822260);
L_8023AF38:
    // 0x8023AF38: andi        $t7, $a2, 0xFFF
    ctx->r15 = ctx->r6 & 0XFFF;
    // 0x8023AF3C: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x8023AF40: or          $t6, $t8, $s5
    ctx->r14 = ctx->r24 | ctx->r21;
    // 0x8023AF44: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8023AF48: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x8023AF4C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023AF50: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8023AF54: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023AF58: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023AF5C: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023AF60: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x8023AF64: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AF68: lbu         $t9, 0x30($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X30);
    // 0x8023AF6C: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023AF70: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AF74: andi        $t8, $t9, 0x7
    ctx->r24 = ctx->r25 & 0X7;
    // 0x8023AF78: sll         $t7, $t8, 21
    ctx->r15 = S32(ctx->r24 << 21);
    // 0x8023AF7C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8023AF80: or          $t6, $t7, $t3
    ctx->r14 = ctx->r15 | ctx->r11;
    // 0x8023AF84: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x8023AF88: addiu       $t7, $t8, 0x7
    ctx->r15 = ADD32(ctx->r24, 0X7);
    // 0x8023AF8C: sra         $t6, $t7, 3
    ctx->r14 = S32(SIGNED(ctx->r15) >> 3);
    // 0x8023AF90: andi        $t8, $t6, 0x1FF
    ctx->r24 = ctx->r14 & 0X1FF;
    // 0x8023AF94: sll         $t7, $t8, 9
    ctx->r15 = S32(ctx->r24 << 9);
    // 0x8023AF98: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x8023AF9C: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x8023AFA0: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x8023AFA4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8023AFA8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8023AFAC: addiu       $t7, $s4, -0x1
    ctx->r15 = ADD32(ctx->r20, -0X1);
    // 0x8023AFB0: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x8023AFB4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023AFB8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8023AFBC: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8023AFC0: lw          $t7, 0x1CC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023AFC4: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8023AFC8: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x8023AFCC: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x8023AFD0: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8023AFD4: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8023AFD8: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x8023AFDC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8023AFE0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023AFE4:
    // 0x8023AFE4: lw          $t8, 0x1F8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023AFE8: b           L_8023BCE0
    // 0x8023AFEC: lw          $v0, 0x8($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X8);
        goto L_8023BCE0;
    // 0x8023AFEC: lw          $v0, 0x8($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X8);
L_8023AFF0:
    // 0x8023AFF0: lbu         $a0, 0x30($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X30);
    // 0x8023AFF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023AFF8: bnel        $a0, $at, L_8023B670
    if (ctx->r4 != ctx->r1) {
        // 0x8023AFFC: lhu         $t6, 0x14($a2)
        ctx->r14 = MEM_HU(ctx->r6, 0X14);
            goto L_8023B670;
    }
    goto skip_2;
    // 0x8023AFFC: lhu         $t6, 0x14($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X14);
    skip_2:
    // 0x8023B000: lhu         $t9, 0x14($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X14);
    // 0x8023B004: lui         $a3, 0x10
    ctx->r7 = S32(0X10 << 16);
    // 0x8023B008: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023B00C: andi        $t7, $t9, 0x200
    ctx->r15 = ctx->r25 & 0X200;
    // 0x8023B010: beq         $t7, $zero, L_8023B164
    if (ctx->r15 == 0) {
        // 0x8023B014: lw          $a1, 0x1F8($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1F8);
            goto L_8023B164;
    }
    // 0x8023B014: lw          $a1, 0x1F8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023B018: andi        $t6, $a0, 0x7
    ctx->r14 = ctx->r4 & 0X7;
    // 0x8023B01C: sll         $t8, $t6, 21
    ctx->r24 = S32(ctx->r14 << 21);
    // 0x8023B020: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023B024: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8023B028: or          $t7, $t9, $a3
    ctx->r15 = ctx->r25 | ctx->r7;
    // 0x8023B02C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B030: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023B034: lw          $t6, 0x1F8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023B038: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B03C: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023B040: lw          $t8, 0x8($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X8);
    // 0x8023B044: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B048: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023B04C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8023B050: lbu         $t9, 0x30($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X30);
    // 0x8023B054: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B058: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023B05C: andi        $t7, $t9, 0x7
    ctx->r15 = ctx->r25 & 0X7;
    // 0x8023B060: sll         $t6, $t7, 21
    ctx->r14 = S32(ctx->r15 << 21);
    // 0x8023B064: or          $t8, $t6, $t3
    ctx->r24 = ctx->r14 | ctx->r11;
    // 0x8023B068: or          $t9, $t8, $a3
    ctx->r25 = ctx->r24 | ctx->r7;
    // 0x8023B06C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8023B070: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8023B074: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023B078: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B07C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8023B080: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8023B084: sw          $s2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r18;
    // 0x8023B088: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023B08C: sw          $fp, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r30;
    // 0x8023B090: lw          $t7, 0x1CC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B094: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B098: addiu       $a0, $zero, 0x7FF
    ctx->r4 = ADD32(0, 0X7FF);
    // 0x8023B09C: multu       $s4, $t7
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B0A0: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8023B0A4: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023B0A8: mflo        $v0
    ctx->r2 = lo;
    // 0x8023B0AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023B0B0: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023B0B4: beq         $at, $zero, L_8023B0C4
    if (ctx->r1 == 0) {
        // 0x8023B0B8: nop
    
            goto L_8023B0C4;
    }
    // 0x8023B0B8: nop

    // 0x8023B0BC: b           L_8023B0C4
    // 0x8023B0C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_8023B0C4;
    // 0x8023B0C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8023B0C4:
    // 0x8023B0C4: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x8023B0C8: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x8023B0CC: or          $t9, $t8, $s5
    ctx->r25 = ctx->r24 | ctx->r21;
    // 0x8023B0D0: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x8023B0D4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B0D8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023B0DC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023B0E0: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023B0E4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B0E8: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B0EC: lbu         $t8, 0x30($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X30);
    // 0x8023B0F0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B0F4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8023B0F8: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x8023B0FC: sll         $t7, $t9, 21
    ctx->r15 = S32(ctx->r25 << 21);
    // 0x8023B100: or          $t6, $t7, $t3
    ctx->r14 = ctx->r15 | ctx->r11;
    // 0x8023B104: addiu       $t9, $s4, 0x7
    ctx->r25 = ADD32(ctx->r20, 0X7);
    // 0x8023B108: sra         $t7, $t9, 3
    ctx->r15 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8023B10C: or          $t8, $t6, $a3
    ctx->r24 = ctx->r14 | ctx->r7;
    // 0x8023B110: andi        $t6, $t7, 0x1FF
    ctx->r14 = ctx->r15 & 0X1FF;
    // 0x8023B114: sll         $t9, $t6, 9
    ctx->r25 = S32(ctx->r14 << 9);
    // 0x8023B118: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x8023B11C: lui         $t6, 0x8
    ctx->r14 = S32(0X8 << 16);
    // 0x8023B120: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x8023B124: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023B128: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8023B12C: addiu       $t9, $s4, -0x1
    ctx->r25 = ADD32(ctx->r20, -0X1);
    // 0x8023B130: lui         $t8, 0xF200
    ctx->r24 = S32(0XF200 << 16);
    // 0x8023B134: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8023B138: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8023B13C: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B140: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x8023B144: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x8023B148: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x8023B14C: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8023B150: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8023B154: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x8023B158: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x8023B15C: b           L_8023B994
    // 0x8023B160: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_8023B994;
    // 0x8023B160: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023B164:
    // 0x8023B164: lh          $t6, 0xE($a1)
    ctx->r14 = MEM_H(ctx->r5, 0XE);
    // 0x8023B168: lui         $a3, 0x10
    ctx->r7 = S32(0X10 << 16);
    // 0x8023B16C: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023B170: beq         $t6, $zero, L_8023B4B0
    if (ctx->r14 == 0) {
        // 0x8023B174: lui         $s7, 0x708
        ctx->r23 = S32(0X708 << 16);
            goto L_8023B4B0;
    }
    // 0x8023B174: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023B178: lui         $s6, 0xFD88
    ctx->r22 = S32(0XFD88 << 16);
    // 0x8023B17C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B180: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x8023B184: lw          $t8, 0x8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X8);
    // 0x8023B188: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B18C: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B190: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023B194: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B198: lui         $t9, 0xF588
    ctx->r25 = S32(0XF588 << 16);
    // 0x8023B19C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8023B1A0: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023B1A4: ori         $t9, $t9, 0x100
    ctx->r25 = ctx->r25 | 0X100;
    // 0x8023B1A8: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8023B1AC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8023B1B0: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023B1B4: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023B1B8: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B1BC: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x8023B1C0: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8023B1C4: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x8023B1C8: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023B1CC: sw          $fp, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r30;
    // 0x8023B1D0: lw          $t7, 0x1CC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B1D4: sll         $t5, $s4, 2
    ctx->r13 = S32(ctx->r20 << 2);
    // 0x8023B1D8: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B1DC: multu       $s4, $t7
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B1E0: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023B1E4: addiu       $a2, $zero, 0x7FF
    ctx->r6 = ADD32(0, 0X7FF);
    // 0x8023B1E8: subu        $t5, $t5, $s4
    ctx->r13 = SUB32(ctx->r13, ctx->r20);
    // 0x8023B1EC: mflo        $v1
    ctx->r3 = lo;
    // 0x8023B1F0: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023B1F4: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023B1F8: beq         $at, $zero, L_8023B208
    if (ctx->r1 == 0) {
        // 0x8023B1FC: nop
    
            goto L_8023B208;
    }
    // 0x8023B1FC: nop

    // 0x8023B200: b           L_8023B208
    // 0x8023B204: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_8023B208;
    // 0x8023B204: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_8023B208:
    // 0x8023B208: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x8023B20C: bgez        $v0, L_8023B21C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023B210: sra         $t2, $v0, 3
        ctx->r10 = S32(SIGNED(ctx->r2) >> 3);
            goto L_8023B21C;
    }
    // 0x8023B210: sra         $t2, $v0, 3
    ctx->r10 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8023B214: addiu       $at, $v0, 0x7
    ctx->r1 = ADD32(ctx->r2, 0X7);
    // 0x8023B218: sra         $t2, $at, 3
    ctx->r10 = S32(SIGNED(ctx->r1) >> 3);
L_8023B21C:
    // 0x8023B21C: bgtz        $t2, L_8023B22C
    if (SIGNED(ctx->r10) > 0) {
        // 0x8023B220: sw          $v0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r2;
            goto L_8023B22C;
    }
    // 0x8023B220: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023B224: b           L_8023B230
    // 0x8023B228: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8023B230;
    // 0x8023B228: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8023B22C:
    // 0x8023B22C: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
L_8023B230:
    // 0x8023B230: bgtz        $t2, L_8023B240
    if (SIGNED(ctx->r10) > 0) {
        // 0x8023B234: addiu       $t6, $a1, 0x7FF
        ctx->r14 = ADD32(ctx->r5, 0X7FF);
            goto L_8023B240;
    }
    // 0x8023B234: addiu       $t6, $a1, 0x7FF
    ctx->r14 = ADD32(ctx->r5, 0X7FF);
    // 0x8023B238: b           L_8023B244
    // 0x8023B23C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8023B244;
    // 0x8023B23C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023B240:
    // 0x8023B240: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
L_8023B244:
    // 0x8023B244: div         $zero, $t6, $a0
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r4)));
    // 0x8023B248: mflo        $t8
    ctx->r24 = lo;
    // 0x8023B24C: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8023B250: bne         $a0, $zero, L_8023B25C
    if (ctx->r4 != 0) {
        // 0x8023B254: nop
    
            goto L_8023B25C;
    }
    // 0x8023B254: nop

    // 0x8023B258: break       7
    do_break(2149823064);
L_8023B25C:
    // 0x8023B25C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023B260: bne         $a0, $at, L_8023B274
    if (ctx->r4 != ctx->r1) {
        // 0x8023B264: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023B274;
    }
    // 0x8023B264: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023B268: bne         $t6, $at, L_8023B274
    if (ctx->r14 != ctx->r1) {
        // 0x8023B26C: nop
    
            goto L_8023B274;
    }
    // 0x8023B26C: nop

    // 0x8023B270: break       6
    do_break(2149823088);
L_8023B274:
    // 0x8023B274: andi        $t6, $a2, 0xFFF
    ctx->r14 = ctx->r6 & 0XFFF;
    // 0x8023B278: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x8023B27C: or          $t7, $t9, $s5
    ctx->r15 = ctx->r25 | ctx->r21;
    // 0x8023B280: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x8023B284: sw          $t9, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r25;
    // 0x8023B288: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B28C: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x8023B290: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023B294: lw          $t7, 0x1F8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023B298: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B29C: bgez        $v1, L_8023B2AC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8023B2A0: sra         $t6, $v1, 1
        ctx->r14 = S32(SIGNED(ctx->r3) >> 1);
            goto L_8023B2AC;
    }
    // 0x8023B2A0: sra         $t6, $v1, 1
    ctx->r14 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8023B2A4: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x8023B2A8: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_8023B2AC:
    // 0x8023B2AC: lh          $t8, 0xE($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE);
    // 0x8023B2B0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8023B2B4: multu       $t6, $t8
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B2B8: lw          $t8, 0x1CC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B2BC: lw          $t6, 0x8($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X8);
    // 0x8023B2C0: addiu       $t3, $t8, -0x2
    ctx->r11 = ADD32(ctx->r24, -0X2);
    // 0x8023B2C4: mflo        $t9
    ctx->r25 = lo;
    // 0x8023B2C8: addu        $s0, $t6, $t9
    ctx->r16 = ADD32(ctx->r14, ctx->r25);
    // 0x8023B2CC: bgez        $t8, L_8023B2DC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8023B2D0: sra         $t4, $t8, 1
        ctx->r12 = S32(SIGNED(ctx->r24) >> 1);
            goto L_8023B2DC;
    }
    // 0x8023B2D0: sra         $t4, $t8, 1
    ctx->r12 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8023B2D4: addiu       $at, $t8, 0x1
    ctx->r1 = ADD32(ctx->r24, 0X1);
    // 0x8023B2D8: sra         $t4, $at, 1
    ctx->r12 = S32(SIGNED(ctx->r1) >> 1);
L_8023B2DC:
    // 0x8023B2DC: bltzl       $t4, L_8023B428
    if (SIGNED(ctx->r12) < 0) {
        // 0x8023B2E0: lw          $t9, 0x1F4($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1F4);
            goto L_8023B428;
    }
    goto skip_3;
    // 0x8023B2E0: lw          $t9, 0x1F4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F4);
    skip_3:
    // 0x8023B2E4: bgez        $s4, L_8023B2F4
    if (SIGNED(ctx->r20) >= 0) {
        // 0x8023B2E8: sra         $s1, $s4, 3
        ctx->r17 = S32(SIGNED(ctx->r20) >> 3);
            goto L_8023B2F4;
    }
    // 0x8023B2E8: sra         $s1, $s4, 3
    ctx->r17 = S32(SIGNED(ctx->r20) >> 3);
    // 0x8023B2EC: addiu       $at, $s4, 0x7
    ctx->r1 = ADD32(ctx->r20, 0X7);
    // 0x8023B2F0: sra         $s1, $at, 3
    ctx->r17 = S32(SIGNED(ctx->r1) >> 3);
L_8023B2F4:
    // 0x8023B2F4: lui         $s3, 0xF588
    ctx->r19 = S32(0XF588 << 16);
L_8023B2F8:
    // 0x8023B2F8: subu        $t7, $t4, $t0
    ctx->r15 = SUB32(ctx->r12, ctx->r8);
    // 0x8023B2FC: addiu       $t6, $t7, -0x2
    ctx->r14 = ADD32(ctx->r15, -0X2);
    // 0x8023B300: multu       $t6, $s4
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B304: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x8023B308: mflo        $t9
    ctx->r25 = lo;
    // 0x8023B30C: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    // 0x8023B310: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8023B314: multu       $s1, $t3
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B318: addiu       $t3, $t3, -0x2
    ctx->r11 = ADD32(ctx->r11, -0X2);
    // 0x8023B31C: mflo        $v1
    ctx->r3 = lo;
    // 0x8023B320: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x8023B324: bgez        $v1, L_8023B33C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8023B328: negu        $v0, $v1
        ctx->r2 = SUB32(0, ctx->r3);
            goto L_8023B33C;
    }
    // 0x8023B328: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x8023B32C: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x8023B330: addu        $a1, $a0, $t8
    ctx->r5 = ADD32(ctx->r4, ctx->r24);
    // 0x8023B334: subu        $a3, $t5, $t8
    ctx->r7 = SUB32(ctx->r13, ctx->r24);
    // 0x8023B338: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8023B33C:
    // 0x8023B33C: bne         $t0, $zero, L_8023B348
    if (ctx->r8 != 0) {
        // 0x8023B340: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_8023B348;
    }
    // 0x8023B340: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B344: sll         $a3, $s4, 1
    ctx->r7 = S32(ctx->r20 << 1);
L_8023B348:
    // 0x8023B348: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B34C: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B350: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x8023B354: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x8023B358: andi        $t7, $a2, 0x1FF
    ctx->r15 = ctx->r6 & 0X1FF;
    // 0x8023B35C: or          $t6, $t7, $s3
    ctx->r14 = ctx->r15 | ctx->r19;
    // 0x8023B360: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B364: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8023B368: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023B36C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8023B370: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B374: addiu       $v0, $a3, -0x1
    ctx->r2 = ADD32(ctx->r7, -0X1);
    // 0x8023B378: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x8023B37C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8023B380: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023B384: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B388: sw          $fp, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r30;
    // 0x8023B38C: beq         $at, $zero, L_8023B39C
    if (ctx->r1 == 0) {
        // 0x8023B390: addiu       $t1, $t1, 0x8
        ctx->r9 = ADD32(ctx->r9, 0X8);
            goto L_8023B39C;
    }
    // 0x8023B390: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B394: b           L_8023B3A0
    // 0x8023B398: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_8023B3A0;
    // 0x8023B398: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_8023B39C:
    // 0x8023B39C: addiu       $a2, $zero, 0x7FF
    ctx->r6 = ADD32(0, 0X7FF);
L_8023B3A0:
    // 0x8023B3A0: bgtz        $t2, L_8023B3B0
    if (SIGNED(ctx->r10) > 0) {
        // 0x8023B3A4: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_8023B3B0;
    }
    // 0x8023B3A4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B3A8: b           L_8023B3B4
    // 0x8023B3AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8023B3B4;
    // 0x8023B3AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8023B3B0:
    // 0x8023B3B0: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
L_8023B3B4:
    // 0x8023B3B4: bgtz        $t2, L_8023B3C4
    if (SIGNED(ctx->r10) > 0) {
        // 0x8023B3B8: addiu       $t9, $a1, 0x7FF
        ctx->r25 = ADD32(ctx->r5, 0X7FF);
            goto L_8023B3C4;
    }
    // 0x8023B3B8: addiu       $t9, $a1, 0x7FF
    ctx->r25 = ADD32(ctx->r5, 0X7FF);
    // 0x8023B3BC: b           L_8023B3C8
    // 0x8023B3C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8023B3C8;
    // 0x8023B3C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023B3C4:
    // 0x8023B3C4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
L_8023B3C8:
    // 0x8023B3C8: div         $zero, $t9, $a0
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r4)));
    // 0x8023B3CC: bne         $a0, $zero, L_8023B3D8
    if (ctx->r4 != 0) {
        // 0x8023B3D0: nop
    
            goto L_8023B3D8;
    }
    // 0x8023B3D0: nop

    // 0x8023B3D4: break       7
    do_break(2149823444);
L_8023B3D8:
    // 0x8023B3D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023B3DC: bne         $a0, $at, L_8023B3F0
    if (ctx->r4 != ctx->r1) {
        // 0x8023B3E0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023B3F0;
    }
    // 0x8023B3E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023B3E4: bne         $t9, $at, L_8023B3F0
    if (ctx->r25 != ctx->r1) {
        // 0x8023B3E8: nop
    
            goto L_8023B3F0;
    }
    // 0x8023B3E8: nop

    // 0x8023B3EC: break       6
    do_break(2149823468);
L_8023B3F0:
    // 0x8023B3F0: mflo        $t8
    ctx->r24 = lo;
    // 0x8023B3F4: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8023B3F8: andi        $t9, $a2, 0xFFF
    ctx->r25 = ctx->r6 & 0XFFF;
    // 0x8023B3FC: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x8023B400: or          $t6, $t7, $s5
    ctx->r14 = ctx->r15 | ctx->r21;
    // 0x8023B404: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8023B408: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8023B40C: slt         $at, $t4, $t0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8023B410: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8023B414: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023B418: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x8023B41C: beq         $at, $zero, L_8023B2F8
    if (ctx->r1 == 0) {
        // 0x8023B420: addiu       $t1, $t1, 0x8
        ctx->r9 = ADD32(ctx->r9, 0X8);
            goto L_8023B2F8;
    }
    // 0x8023B420: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B424: lw          $t9, 0x1F4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F4);
L_8023B428:
    // 0x8023B428: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023B42C: lui         $a3, 0x10
    ctx->r7 = S32(0X10 << 16);
    // 0x8023B430: lbu         $t6, 0x30($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X30);
    // 0x8023B434: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B438: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B43C: andi        $t8, $t6, 0x7
    ctx->r24 = ctx->r14 & 0X7;
    // 0x8023B440: sll         $t7, $t8, 21
    ctx->r15 = S32(ctx->r24 << 21);
    // 0x8023B444: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8023B448: or          $t9, $t7, $t3
    ctx->r25 = ctx->r15 | ctx->r11;
    // 0x8023B44C: or          $t6, $t9, $a3
    ctx->r14 = ctx->r25 | ctx->r7;
    // 0x8023B450: addiu       $t7, $t8, 0x7
    ctx->r15 = ADD32(ctx->r24, 0X7);
    // 0x8023B454: sra         $t9, $t7, 3
    ctx->r25 = S32(SIGNED(ctx->r15) >> 3);
    // 0x8023B458: andi        $t8, $t9, 0x1FF
    ctx->r24 = ctx->r25 & 0X1FF;
    // 0x8023B45C: sll         $t7, $t8, 9
    ctx->r15 = S32(ctx->r24 << 9);
    // 0x8023B460: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x8023B464: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x8023B468: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x8023B46C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8023B470: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8023B474: addiu       $t7, $s4, -0x1
    ctx->r15 = ADD32(ctx->r20, -0X1);
    // 0x8023B478: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x8023B47C: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B480: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8023B484: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8023B488: lw          $t7, 0x1CC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B48C: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x8023B490: sll         $t6, $t8, 12
    ctx->r14 = S32(ctx->r24 << 12);
    // 0x8023B494: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x8023B498: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8023B49C: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8023B4A0: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x8023B4A4: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8023B4A8: b           L_8023B994
    // 0x8023B4AC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_8023B994;
    // 0x8023B4AC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023B4B0:
    // 0x8023B4B0: andi        $t8, $a0, 0x7
    ctx->r24 = ctx->r4 & 0X7;
    // 0x8023B4B4: sll         $t6, $t8, 21
    ctx->r14 = S32(ctx->r24 << 21);
    // 0x8023B4B8: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023B4BC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8023B4C0: or          $t9, $t7, $a3
    ctx->r25 = ctx->r15 | ctx->r7;
    // 0x8023B4C4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B4C8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8023B4CC: lw          $t8, 0x1F8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023B4D0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B4D4: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023B4D8: lw          $t6, 0x8($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X8);
    // 0x8023B4DC: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B4E0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B4E4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8023B4E8: lw          $t7, 0x1F4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023B4EC: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023B4F0: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8023B4F4: lbu         $t9, 0x30($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X30);
    // 0x8023B4F8: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023B4FC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B500: andi        $t8, $t9, 0x7
    ctx->r24 = ctx->r25 & 0X7;
    // 0x8023B504: sll         $t6, $t8, 21
    ctx->r14 = S32(ctx->r24 << 21);
    // 0x8023B508: or          $t7, $t6, $t3
    ctx->r15 = ctx->r14 | ctx->r11;
    // 0x8023B50C: or          $t9, $t7, $a3
    ctx->r25 = ctx->r15 | ctx->r7;
    // 0x8023B510: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8023B514: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8023B518: sw          $s2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r18;
    // 0x8023B51C: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x8023B520: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023B524: sw          $fp, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r30;
    // 0x8023B528: lw          $t8, 0x1CC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B52C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B530: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023B534: multu       $s4, $t8
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B538: addiu       $a2, $zero, 0x7FF
    ctx->r6 = ADD32(0, 0X7FF);
    // 0x8023B53C: mflo        $v0
    ctx->r2 = lo;
    // 0x8023B540: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023B544: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023B548: beq         $at, $zero, L_8023B558
    if (ctx->r1 == 0) {
        // 0x8023B54C: nop
    
            goto L_8023B558;
    }
    // 0x8023B54C: nop

    // 0x8023B550: b           L_8023B558
    // 0x8023B554: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_8023B558;
    // 0x8023B554: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_8023B558:
    // 0x8023B558: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
    // 0x8023B55C: bgez        $v0, L_8023B56C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023B560: sra         $t6, $v0, 3
        ctx->r14 = S32(SIGNED(ctx->r2) >> 3);
            goto L_8023B56C;
    }
    // 0x8023B560: sra         $t6, $v0, 3
    ctx->r14 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8023B564: addiu       $at, $v0, 0x7
    ctx->r1 = ADD32(ctx->r2, 0X7);
    // 0x8023B568: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_8023B56C:
    // 0x8023B56C: bgtz        $t6, L_8023B57C
    if (SIGNED(ctx->r14) > 0) {
        // 0x8023B570: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8023B57C;
    }
    // 0x8023B570: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8023B574: b           L_8023B580
    // 0x8023B578: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8023B580;
    // 0x8023B578: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8023B57C:
    // 0x8023B57C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8023B580:
    // 0x8023B580: bgtz        $v0, L_8023B590
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023B584: addiu       $t7, $a1, 0x7FF
        ctx->r15 = ADD32(ctx->r5, 0X7FF);
            goto L_8023B590;
    }
    // 0x8023B584: addiu       $t7, $a1, 0x7FF
    ctx->r15 = ADD32(ctx->r5, 0X7FF);
    // 0x8023B588: b           L_8023B594
    // 0x8023B58C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8023B594;
    // 0x8023B58C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023B590:
    // 0x8023B590: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8023B594:
    // 0x8023B594: div         $zero, $t7, $a0
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r4)));
    // 0x8023B598: mflo        $t9
    ctx->r25 = lo;
    // 0x8023B59C: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x8023B5A0: bne         $a0, $zero, L_8023B5AC
    if (ctx->r4 != 0) {
        // 0x8023B5A4: nop
    
            goto L_8023B5AC;
    }
    // 0x8023B5A4: nop

    // 0x8023B5A8: break       7
    do_break(2149823912);
L_8023B5AC:
    // 0x8023B5AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023B5B0: bne         $a0, $at, L_8023B5C4
    if (ctx->r4 != ctx->r1) {
        // 0x8023B5B4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023B5C4;
    }
    // 0x8023B5B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023B5B8: bne         $t7, $at, L_8023B5C4
    if (ctx->r15 != ctx->r1) {
        // 0x8023B5BC: nop
    
            goto L_8023B5C4;
    }
    // 0x8023B5BC: nop

    // 0x8023B5C0: break       6
    do_break(2149823936);
L_8023B5C4:
    // 0x8023B5C4: andi        $t7, $a2, 0xFFF
    ctx->r15 = ctx->r6 & 0XFFF;
    // 0x8023B5C8: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x8023B5CC: or          $t6, $t8, $s5
    ctx->r14 = ctx->r24 | ctx->r21;
    // 0x8023B5D0: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8023B5D4: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x8023B5D8: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B5DC: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8023B5E0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023B5E4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023B5E8: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023B5EC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B5F0: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B5F4: lbu         $t9, 0x30($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X30);
    // 0x8023B5F8: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B5FC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B600: andi        $t8, $t9, 0x7
    ctx->r24 = ctx->r25 & 0X7;
    // 0x8023B604: sll         $t7, $t8, 21
    ctx->r15 = S32(ctx->r24 << 21);
    // 0x8023B608: or          $t6, $t7, $t3
    ctx->r14 = ctx->r15 | ctx->r11;
    // 0x8023B60C: addiu       $t8, $s4, 0x7
    ctx->r24 = ADD32(ctx->r20, 0X7);
    // 0x8023B610: sra         $t7, $t8, 3
    ctx->r15 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8023B614: or          $t9, $t6, $a3
    ctx->r25 = ctx->r14 | ctx->r7;
    // 0x8023B618: andi        $t6, $t7, 0x1FF
    ctx->r14 = ctx->r15 & 0X1FF;
    // 0x8023B61C: sll         $t8, $t6, 9
    ctx->r24 = S32(ctx->r14 << 9);
    // 0x8023B620: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x8023B624: lui         $t6, 0x8
    ctx->r14 = S32(0X8 << 16);
    // 0x8023B628: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x8023B62C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023B630: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8023B634: addiu       $t8, $s4, -0x1
    ctx->r24 = ADD32(ctx->r20, -0X1);
    // 0x8023B638: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x8023B63C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8023B640: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8023B644: lw          $t8, 0x1CC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B648: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x8023B64C: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x8023B650: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x8023B654: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8023B658: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8023B65C: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x8023B660: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8023B664: b           L_8023B994
    // 0x8023B668: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_8023B994;
    // 0x8023B668: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B66C: lhu         $t6, 0x14($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X14);
L_8023B670:
    // 0x8023B670: lui         $a3, 0x10
    ctx->r7 = S32(0X10 << 16);
    // 0x8023B674: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023B678: andi        $t9, $t6, 0x200
    ctx->r25 = ctx->r14 & 0X200;
    // 0x8023B67C: beq         $t9, $zero, L_8023B7E0
    if (ctx->r25 == 0) {
        // 0x8023B680: lui         $s2, 0xE600
        ctx->r18 = S32(0XE600 << 16);
            goto L_8023B7E0;
    }
    // 0x8023B680: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023B684: andi        $t8, $a0, 0x7
    ctx->r24 = ctx->r4 & 0X7;
    // 0x8023B688: sll         $t7, $t8, 21
    ctx->r15 = S32(ctx->r24 << 21);
    // 0x8023B68C: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023B690: lui         $a3, 0x10
    ctx->r7 = S32(0X10 << 16);
    // 0x8023B694: or          $t6, $t7, $at
    ctx->r14 = ctx->r15 | ctx->r1;
    // 0x8023B698: or          $t9, $t6, $a3
    ctx->r25 = ctx->r14 | ctx->r7;
    // 0x8023B69C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B6A0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8023B6A4: lw          $t8, 0x1F8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023B6A8: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B6AC: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023B6B0: lw          $t7, 0x8($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X8);
    // 0x8023B6B4: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B6B8: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023B6BC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8023B6C0: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023B6C4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B6C8: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023B6CC: lbu         $t9, 0x30($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X30);
    // 0x8023B6D0: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8023B6D4: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023B6D8: andi        $t8, $t9, 0x7
    ctx->r24 = ctx->r25 & 0X7;
    // 0x8023B6DC: sll         $t7, $t8, 21
    ctx->r15 = S32(ctx->r24 << 21);
    // 0x8023B6E0: or          $t6, $t7, $t3
    ctx->r14 = ctx->r15 | ctx->r11;
    // 0x8023B6E4: or          $t9, $t6, $a3
    ctx->r25 = ctx->r14 | ctx->r7;
    // 0x8023B6E8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8023B6EC: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023B6F0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B6F4: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8023B6F8: sw          $s2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r18;
    // 0x8023B6FC: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8023B700: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023B704: sw          $fp, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r30;
    // 0x8023B708: lw          $t8, 0x1CC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B70C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B710: addiu       $a0, $zero, 0x7FF
    ctx->r4 = ADD32(0, 0X7FF);
    // 0x8023B714: multu       $s4, $t8
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B718: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8023B71C: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023B720: mflo        $v0
    ctx->r2 = lo;
    // 0x8023B724: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023B728: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023B72C: beq         $at, $zero, L_8023B73C
    if (ctx->r1 == 0) {
        // 0x8023B730: nop
    
            goto L_8023B73C;
    }
    // 0x8023B730: nop

    // 0x8023B734: b           L_8023B73C
    // 0x8023B738: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_8023B73C;
    // 0x8023B738: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8023B73C:
    // 0x8023B73C: andi        $t7, $a0, 0xFFF
    ctx->r15 = ctx->r4 & 0XFFF;
    // 0x8023B740: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x8023B744: or          $t9, $t6, $s5
    ctx->r25 = ctx->r14 | ctx->r21;
    // 0x8023B748: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x8023B74C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B750: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8023B754: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023B758: lw          $t7, 0x1F4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023B75C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B760: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B764: lbu         $t6, 0x30($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X30);
    // 0x8023B768: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B76C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8023B770: andi        $t9, $t6, 0x7
    ctx->r25 = ctx->r14 & 0X7;
    // 0x8023B774: sll         $t8, $t9, 21
    ctx->r24 = S32(ctx->r25 << 21);
    // 0x8023B778: or          $t7, $t8, $t3
    ctx->r15 = ctx->r24 | ctx->r11;
    // 0x8023B77C: sll         $t9, $s4, 1
    ctx->r25 = S32(ctx->r20 << 1);
    // 0x8023B780: addiu       $t8, $t9, 0x7
    ctx->r24 = ADD32(ctx->r25, 0X7);
    // 0x8023B784: or          $t6, $t7, $a3
    ctx->r14 = ctx->r15 | ctx->r7;
    // 0x8023B788: sra         $t7, $t8, 3
    ctx->r15 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8023B78C: andi        $t9, $t7, 0x1FF
    ctx->r25 = ctx->r15 & 0X1FF;
    // 0x8023B790: sll         $t8, $t9, 9
    ctx->r24 = S32(ctx->r25 << 9);
    // 0x8023B794: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8023B798: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x8023B79C: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x8023B7A0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023B7A4: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8023B7A8: addiu       $t8, $s4, -0x1
    ctx->r24 = ADD32(ctx->r20, -0X1);
    // 0x8023B7AC: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x8023B7B0: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8023B7B4: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8023B7B8: lw          $t8, 0x1CC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B7BC: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8023B7C0: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x8023B7C4: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x8023B7C8: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8023B7CC: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x8023B7D0: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8023B7D4: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x8023B7D8: b           L_8023B994
    // 0x8023B7DC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_8023B994;
    // 0x8023B7DC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023B7E0:
    // 0x8023B7E0: andi        $t9, $a0, 0x7
    ctx->r25 = ctx->r4 & 0X7;
    // 0x8023B7E4: sll         $t6, $t9, 21
    ctx->r14 = S32(ctx->r25 << 21);
    // 0x8023B7E8: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023B7EC: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x8023B7F0: or          $t7, $t8, $a3
    ctx->r15 = ctx->r24 | ctx->r7;
    // 0x8023B7F4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B7F8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023B7FC: lw          $t9, 0x1F8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023B800: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B804: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B808: lw          $t6, 0x8($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X8);
    // 0x8023B80C: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023B810: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B814: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8023B818: lw          $t8, 0x1F4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023B81C: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023B820: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8023B824: lbu         $t7, 0x30($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X30);
    // 0x8023B828: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023B82C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B830: andi        $t9, $t7, 0x7
    ctx->r25 = ctx->r15 & 0X7;
    // 0x8023B834: sll         $t6, $t9, 21
    ctx->r14 = S32(ctx->r25 << 21);
    // 0x8023B838: or          $t8, $t6, $t3
    ctx->r24 = ctx->r14 | ctx->r11;
    // 0x8023B83C: or          $t7, $t8, $a3
    ctx->r15 = ctx->r24 | ctx->r7;
    // 0x8023B840: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023B844: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8023B848: sw          $s2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r18;
    // 0x8023B84C: or          $t2, $t1, $zero
    ctx->r10 = ctx->r9 | 0;
    // 0x8023B850: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023B854: sw          $fp, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r30;
    // 0x8023B858: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B85C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B860: sll         $t0, $s4, 1
    ctx->r8 = S32(ctx->r20 << 1);
    // 0x8023B864: multu       $s4, $t9
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B868: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023B86C: addiu       $a2, $zero, 0x7FF
    ctx->r6 = ADD32(0, 0X7FF);
    // 0x8023B870: mflo        $v0
    ctx->r2 = lo;
    // 0x8023B874: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023B878: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023B87C: beq         $at, $zero, L_8023B88C
    if (ctx->r1 == 0) {
        // 0x8023B880: nop
    
            goto L_8023B88C;
    }
    // 0x8023B880: nop

    // 0x8023B884: b           L_8023B88C
    // 0x8023B888: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_8023B88C;
    // 0x8023B888: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_8023B88C:
    // 0x8023B88C: bgez        $t0, L_8023B89C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8023B890: sra         $v0, $t0, 3
        ctx->r2 = S32(SIGNED(ctx->r8) >> 3);
            goto L_8023B89C;
    }
    // 0x8023B890: sra         $v0, $t0, 3
    ctx->r2 = S32(SIGNED(ctx->r8) >> 3);
    // 0x8023B894: addiu       $at, $t0, 0x7
    ctx->r1 = ADD32(ctx->r8, 0X7);
    // 0x8023B898: sra         $v0, $at, 3
    ctx->r2 = S32(SIGNED(ctx->r1) >> 3);
L_8023B89C:
    // 0x8023B89C: bgtz        $v0, L_8023B8AC
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023B8A0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8023B8AC;
    }
    // 0x8023B8A0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8023B8A4: b           L_8023B8AC
    // 0x8023B8A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8023B8AC;
    // 0x8023B8A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8023B8AC:
    // 0x8023B8AC: bgtz        $v0, L_8023B8BC
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023B8B0: addiu       $t6, $a1, 0x7FF
        ctx->r14 = ADD32(ctx->r5, 0X7FF);
            goto L_8023B8BC;
    }
    // 0x8023B8B0: addiu       $t6, $a1, 0x7FF
    ctx->r14 = ADD32(ctx->r5, 0X7FF);
    // 0x8023B8B4: b           L_8023B8C0
    // 0x8023B8B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8023B8C0;
    // 0x8023B8B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023B8BC:
    // 0x8023B8BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8023B8C0:
    // 0x8023B8C0: div         $zero, $t6, $a0
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r4)));
    // 0x8023B8C4: mflo        $t8
    ctx->r24 = lo;
    // 0x8023B8C8: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8023B8CC: bne         $a0, $zero, L_8023B8D8
    if (ctx->r4 != 0) {
        // 0x8023B8D0: nop
    
            goto L_8023B8D8;
    }
    // 0x8023B8D0: nop

    // 0x8023B8D4: break       7
    do_break(2149824724);
L_8023B8D8:
    // 0x8023B8D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023B8DC: bne         $a0, $at, L_8023B8F0
    if (ctx->r4 != ctx->r1) {
        // 0x8023B8E0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023B8F0;
    }
    // 0x8023B8E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023B8E4: bne         $t6, $at, L_8023B8F0
    if (ctx->r14 != ctx->r1) {
        // 0x8023B8E8: nop
    
            goto L_8023B8F0;
    }
    // 0x8023B8E8: nop

    // 0x8023B8EC: break       6
    do_break(2149824748);
L_8023B8F0:
    // 0x8023B8F0: andi        $t6, $a2, 0xFFF
    ctx->r14 = ctx->r6 & 0XFFF;
    // 0x8023B8F4: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x8023B8F8: or          $t9, $t7, $s5
    ctx->r25 = ctx->r15 | ctx->r21;
    // 0x8023B8FC: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x8023B900: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x8023B904: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B908: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8023B90C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8023B910: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023B914: lw          $t9, 0x1F4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023B918: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B91C: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B920: lbu         $t8, 0x30($t9)
    ctx->r24 = MEM_BU(ctx->r25, 0X30);
    // 0x8023B924: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B928: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B92C: andi        $t7, $t8, 0x7
    ctx->r15 = ctx->r24 & 0X7;
    // 0x8023B930: sll         $t6, $t7, 21
    ctx->r14 = S32(ctx->r15 << 21);
    // 0x8023B934: or          $t9, $t6, $t3
    ctx->r25 = ctx->r14 | ctx->r11;
    // 0x8023B938: addiu       $t7, $t0, 0x7
    ctx->r15 = ADD32(ctx->r8, 0X7);
    // 0x8023B93C: sra         $t6, $t7, 3
    ctx->r14 = S32(SIGNED(ctx->r15) >> 3);
    // 0x8023B940: or          $t8, $t9, $a3
    ctx->r24 = ctx->r25 | ctx->r7;
    // 0x8023B944: andi        $t9, $t6, 0x1FF
    ctx->r25 = ctx->r14 & 0X1FF;
    // 0x8023B948: sll         $t7, $t9, 9
    ctx->r15 = S32(ctx->r25 << 9);
    // 0x8023B94C: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x8023B950: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x8023B954: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x8023B958: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8023B95C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8023B960: addiu       $t7, $s4, -0x1
    ctx->r15 = ADD32(ctx->r20, -0X1);
    // 0x8023B964: lui         $t8, 0xF200
    ctx->r24 = S32(0XF200 << 16);
    // 0x8023B968: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8023B96C: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8023B970: lw          $t7, 0x1CC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B974: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8023B978: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x8023B97C: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x8023B980: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8023B984: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x8023B988: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x8023B98C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8023B990: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023B994:
    // 0x8023B994: lw          $t9, 0x1F8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023B998: b           L_8023BCE0
    // 0x8023B99C: lw          $v0, 0x8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X8);
        goto L_8023BCE0;
    // 0x8023B99C: lw          $v0, 0x8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X8);
L_8023B9A0:
    // 0x8023B9A0: lhu         $t7, 0x14($t8)
    ctx->r15 = MEM_HU(ctx->r24, 0X14);
    // 0x8023B9A4: lw          $a1, 0x1F4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023B9A8: lui         $a3, 0x18
    ctx->r7 = S32(0X18 << 16);
    // 0x8023B9AC: andi        $t6, $t7, 0x200
    ctx->r14 = ctx->r15 & 0X200;
    // 0x8023B9B0: beq         $t6, $zero, L_8023BB18
    if (ctx->r14 == 0) {
        // 0x8023B9B4: lui         $t3, 0xF500
        ctx->r11 = S32(0XF500 << 16);
            goto L_8023BB18;
    }
    // 0x8023B9B4: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023B9B8: lbu         $t9, 0x30($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X30);
    // 0x8023B9BC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x8023B9C0: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023B9C4: andi        $t7, $t9, 0x7
    ctx->r15 = ctx->r25 & 0X7;
    // 0x8023B9C8: sll         $t6, $t7, 21
    ctx->r14 = S32(ctx->r15 << 21);
    // 0x8023B9CC: lui         $a3, 0x18
    ctx->r7 = S32(0X18 << 16);
    // 0x8023B9D0: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x8023B9D4: or          $t9, $t8, $a3
    ctx->r25 = ctx->r24 | ctx->r7;
    // 0x8023B9D8: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B9DC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8023B9E0: lw          $t7, 0x1F8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023B9E4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B9E8: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023B9EC: lw          $t6, 0x8($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X8);
    // 0x8023B9F0: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B9F4: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023B9F8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8023B9FC: lbu         $t8, 0x30($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X30);
    // 0x8023BA00: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023BA04: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023BA08: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x8023BA0C: sll         $t7, $t9, 21
    ctx->r15 = S32(ctx->r25 << 21);
    // 0x8023BA10: or          $t6, $t7, $t3
    ctx->r14 = ctx->r15 | ctx->r11;
    // 0x8023BA14: or          $t8, $t6, $a3
    ctx->r24 = ctx->r14 | ctx->r7;
    // 0x8023BA18: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8023BA1C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8023BA20: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023BA24: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023BA28: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023BA2C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8023BA30: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x8023BA34: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8023BA38: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023BA3C: sw          $fp, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r30;
    // 0x8023BA40: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023BA44: addiu       $a0, $zero, 0x7FF
    ctx->r4 = ADD32(0, 0X7FF);
    // 0x8023BA48: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023BA4C: multu       $s4, $t9
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023BA50: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8023BA54: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023BA58: mflo        $v0
    ctx->r2 = lo;
    // 0x8023BA5C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023BA60: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023BA64: beq         $at, $zero, L_8023BA74
    if (ctx->r1 == 0) {
        // 0x8023BA68: nop
    
            goto L_8023BA74;
    }
    // 0x8023BA68: nop

    // 0x8023BA6C: b           L_8023BA74
    // 0x8023BA70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_8023BA74;
    // 0x8023BA70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8023BA74:
    // 0x8023BA74: andi        $t7, $a0, 0xFFF
    ctx->r15 = ctx->r4 & 0XFFF;
    // 0x8023BA78: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x8023BA7C: or          $t8, $t6, $s5
    ctx->r24 = ctx->r14 | ctx->r21;
    // 0x8023BA80: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x8023BA84: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023BA88: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8023BA8C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023BA90: lw          $t7, 0x1F4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023BA94: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023BA98: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023BA9C: lbu         $t6, 0x30($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X30);
    // 0x8023BAA0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023BAA4: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8023BAA8: andi        $t8, $t6, 0x7
    ctx->r24 = ctx->r14 & 0X7;
    // 0x8023BAAC: sll         $t9, $t8, 21
    ctx->r25 = S32(ctx->r24 << 21);
    // 0x8023BAB0: or          $t7, $t9, $t3
    ctx->r15 = ctx->r25 | ctx->r11;
    // 0x8023BAB4: sll         $t8, $s4, 1
    ctx->r24 = S32(ctx->r20 << 1);
    // 0x8023BAB8: addiu       $t9, $t8, 0x7
    ctx->r25 = ADD32(ctx->r24, 0X7);
    // 0x8023BABC: or          $t6, $t7, $a3
    ctx->r14 = ctx->r15 | ctx->r7;
    // 0x8023BAC0: sra         $t7, $t9, 3
    ctx->r15 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8023BAC4: andi        $t8, $t7, 0x1FF
    ctx->r24 = ctx->r15 & 0X1FF;
    // 0x8023BAC8: sll         $t9, $t8, 9
    ctx->r25 = S32(ctx->r24 << 9);
    // 0x8023BACC: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x8023BAD0: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x8023BAD4: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x8023BAD8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023BADC: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8023BAE0: addiu       $t9, $s4, -0x1
    ctx->r25 = ADD32(ctx->r20, -0X1);
    // 0x8023BAE4: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x8023BAE8: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x8023BAEC: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8023BAF0: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023BAF4: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x8023BAF8: sll         $t6, $t8, 12
    ctx->r14 = S32(ctx->r24 << 12);
    // 0x8023BAFC: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x8023BB00: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8023BB04: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8023BB08: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x8023BB0C: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x8023BB10: b           L_8023BCD8
    // 0x8023BB14: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_8023BCD8;
    // 0x8023BB14: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023BB18:
    // 0x8023BB18: lbu         $t8, 0x30($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X30);
    // 0x8023BB1C: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023BB20: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023BB24: andi        $t6, $t8, 0x7
    ctx->r14 = ctx->r24 & 0X7;
    // 0x8023BB28: sll         $t9, $t6, 21
    ctx->r25 = S32(ctx->r14 << 21);
    // 0x8023BB2C: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x8023BB30: or          $t8, $t7, $a3
    ctx->r24 = ctx->r15 | ctx->r7;
    // 0x8023BB34: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8023BB38: lw          $t6, 0x1F8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023BB3C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023BB40: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023BB44: lw          $t9, 0x8($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X8);
    // 0x8023BB48: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023BB4C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023BB50: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8023BB54: lbu         $t7, 0x30($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X30);
    // 0x8023BB58: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023BB5C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8023BB60: andi        $t8, $t7, 0x7
    ctx->r24 = ctx->r15 & 0X7;
    // 0x8023BB64: sll         $t6, $t8, 21
    ctx->r14 = S32(ctx->r24 << 21);
    // 0x8023BB68: or          $t9, $t6, $t3
    ctx->r25 = ctx->r14 | ctx->r11;
    // 0x8023BB6C: or          $t7, $t9, $a3
    ctx->r15 = ctx->r25 | ctx->r7;
    // 0x8023BB70: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023BB74: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023BB78: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023BB7C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023BB80: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x8023BB84: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x8023BB88: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8023BB8C: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023BB90: sw          $fp, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r30;
    // 0x8023BB94: lw          $t8, 0x1CC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023BB98: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023BB9C: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023BBA0: multu       $s4, $t8
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023BBA4: addiu       $a2, $zero, 0x7FF
    ctx->r6 = ADD32(0, 0X7FF);
    // 0x8023BBA8: mflo        $v0
    ctx->r2 = lo;
    // 0x8023BBAC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023BBB0: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023BBB4: beq         $at, $zero, L_8023BBC4
    if (ctx->r1 == 0) {
        // 0x8023BBB8: nop
    
            goto L_8023BBC4;
    }
    // 0x8023BBB8: nop

    // 0x8023BBBC: b           L_8023BBC4
    // 0x8023BBC0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_8023BBC4;
    // 0x8023BBC0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_8023BBC4:
    // 0x8023BBC4: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x8023BBC8: bgez        $v0, L_8023BBD8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023BBCC: sra         $t6, $v0, 3
        ctx->r14 = S32(SIGNED(ctx->r2) >> 3);
            goto L_8023BBD8;
    }
    // 0x8023BBCC: sra         $t6, $v0, 3
    ctx->r14 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8023BBD0: addiu       $at, $v0, 0x7
    ctx->r1 = ADD32(ctx->r2, 0X7);
    // 0x8023BBD4: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_8023BBD8:
    // 0x8023BBD8: bgtz        $t6, L_8023BBE8
    if (SIGNED(ctx->r14) > 0) {
        // 0x8023BBDC: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8023BBE8;
    }
    // 0x8023BBDC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8023BBE0: b           L_8023BBEC
    // 0x8023BBE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8023BBEC;
    // 0x8023BBE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8023BBE8:
    // 0x8023BBE8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8023BBEC:
    // 0x8023BBEC: bgtz        $v0, L_8023BBFC
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023BBF0: addiu       $t9, $a1, 0x7FF
        ctx->r25 = ADD32(ctx->r5, 0X7FF);
            goto L_8023BBFC;
    }
    // 0x8023BBF0: addiu       $t9, $a1, 0x7FF
    ctx->r25 = ADD32(ctx->r5, 0X7FF);
    // 0x8023BBF4: b           L_8023BC00
    // 0x8023BBF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8023BC00;
    // 0x8023BBF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023BBFC:
    // 0x8023BBFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8023BC00:
    // 0x8023BC00: div         $zero, $t9, $a0
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r4)));
    // 0x8023BC04: mflo        $t7
    ctx->r15 = lo;
    // 0x8023BC08: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x8023BC0C: bne         $a0, $zero, L_8023BC18
    if (ctx->r4 != 0) {
        // 0x8023BC10: nop
    
            goto L_8023BC18;
    }
    // 0x8023BC10: nop

    // 0x8023BC14: break       7
    do_break(2149825556);
L_8023BC18:
    // 0x8023BC18: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023BC1C: bne         $a0, $at, L_8023BC30
    if (ctx->r4 != ctx->r1) {
        // 0x8023BC20: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023BC30;
    }
    // 0x8023BC20: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023BC24: bne         $t9, $at, L_8023BC30
    if (ctx->r25 != ctx->r1) {
        // 0x8023BC28: nop
    
            goto L_8023BC30;
    }
    // 0x8023BC28: nop

    // 0x8023BC2C: break       6
    do_break(2149825580);
L_8023BC30:
    // 0x8023BC30: andi        $t9, $a2, 0xFFF
    ctx->r25 = ctx->r6 & 0XFFF;
    // 0x8023BC34: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x8023BC38: or          $t6, $t8, $s5
    ctx->r14 = ctx->r24 | ctx->r21;
    // 0x8023BC3C: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8023BC40: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x8023BC44: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023BC48: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8023BC4C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8023BC50: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023BC54: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023BC58: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023BC5C: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023BC60: lbu         $t7, 0x30($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X30);
    // 0x8023BC64: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023BC68: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023BC6C: andi        $t8, $t7, 0x7
    ctx->r24 = ctx->r15 & 0X7;
    // 0x8023BC70: sll         $t9, $t8, 21
    ctx->r25 = S32(ctx->r24 << 21);
    // 0x8023BC74: or          $t6, $t9, $t3
    ctx->r14 = ctx->r25 | ctx->r11;
    // 0x8023BC78: sll         $t8, $s4, 1
    ctx->r24 = S32(ctx->r20 << 1);
    // 0x8023BC7C: addiu       $t9, $t8, 0x7
    ctx->r25 = ADD32(ctx->r24, 0X7);
    // 0x8023BC80: or          $t7, $t6, $a3
    ctx->r15 = ctx->r14 | ctx->r7;
    // 0x8023BC84: sra         $t6, $t9, 3
    ctx->r14 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8023BC88: andi        $t8, $t6, 0x1FF
    ctx->r24 = ctx->r14 & 0X1FF;
    // 0x8023BC8C: sll         $t9, $t8, 9
    ctx->r25 = S32(ctx->r24 << 9);
    // 0x8023BC90: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x8023BC94: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x8023BC98: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x8023BC9C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8023BCA0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8023BCA4: addiu       $t9, $s4, -0x1
    ctx->r25 = ADD32(ctx->r20, -0X1);
    // 0x8023BCA8: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x8023BCAC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023BCB0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8023BCB4: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023BCB8: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8023BCBC: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x8023BCC0: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8023BCC4: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8023BCC8: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8023BCCC: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x8023BCD0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8023BCD4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023BCD8:
    // 0x8023BCD8: lw          $t8, 0x1F8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023BCDC: lw          $v0, 0x8($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X8);
L_8023BCE0:
    // 0x8023BCE0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023BCE4: sw          $v0, 0x930($at)
    MEM_W(0X930, ctx->r1) = ctx->r2;
    // 0x8023BCE8: addiu       $v0, $sp, 0x1BC
    ctx->r2 = ADD32(ctx->r29, 0X1BC);
L_8023BCEC:
    // 0x8023BCEC: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
    // 0x8023BCF0: addiu       $t7, $zero, 0xE4
    ctx->r15 = ADD32(0, 0XE4);
    // 0x8023BCF4: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8023BCF8: andi        $t6, $t9, 0xFFF8
    ctx->r14 = ctx->r25 & 0XFFF8;
    // 0x8023BCFC: sb          $t6, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r14;
    // 0x8023BD00: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x8023BD04: lw          $t7, 0x1E4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1E4);
    // 0x8023BD08: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8023BD0C: srl         $t9, $v1, 12
    ctx->r25 = S32(U32(ctx->r3) >> 12);
    // 0x8023BD10: xor         $t6, $t7, $t9
    ctx->r14 = ctx->r15 ^ ctx->r25;
    // 0x8023BD14: sll         $t8, $t6, 20
    ctx->r24 = S32(ctx->r14 << 20);
    // 0x8023BD18: srl         $t7, $t8, 8
    ctx->r15 = S32(U32(ctx->r24) >> 8);
    // 0x8023BD1C: xor         $t9, $t7, $v1
    ctx->r25 = ctx->r15 ^ ctx->r3;
    // 0x8023BD20: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8023BD24: lw          $t8, 0x1DC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1DC);
    // 0x8023BD28: srl         $t7, $a0, 12
    ctx->r15 = S32(U32(ctx->r4) >> 12);
    // 0x8023BD2C: addiu       $a1, $t1, 0x8
    ctx->r5 = ADD32(ctx->r9, 0X8);
    // 0x8023BD30: xor         $t9, $t8, $t7
    ctx->r25 = ctx->r24 ^ ctx->r15;
    // 0x8023BD34: sll         $t6, $t9, 20
    ctx->r14 = S32(ctx->r25 << 20);
    // 0x8023BD38: srl         $t8, $t6, 8
    ctx->r24 = S32(U32(ctx->r14) >> 8);
    // 0x8023BD3C: xor         $t7, $t8, $a0
    ctx->r15 = ctx->r24 ^ ctx->r4;
    // 0x8023BD40: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023BD44: lw          $t6, 0x1E0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1E0);
    // 0x8023BD48: lhu         $t7, 0x6($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X6);
    // 0x8023BD4C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8023BD50: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8023BD54: andi        $t9, $t7, 0xF000
    ctx->r25 = ctx->r15 & 0XF000;
    // 0x8023BD58: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8023BD5C: sh          $t6, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r14;
    // 0x8023BD60: lw          $t8, 0x1D8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1D8);
    // 0x8023BD64: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x8023BD68: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x8023BD6C: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8023BD70: andi        $t7, $t6, 0xF000
    ctx->r15 = ctx->r14 & 0XF000;
    // 0x8023BD74: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x8023BD78: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    // 0x8023BD7C: lw          $t6, 0x1EC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1EC);
    // 0x8023BD80: lw          $t9, 0x1E8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1E8);
    // 0x8023BD84: lw          $v1, 0x1F4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023BD88: sh          $t6, 0x1C4($sp)
    MEM_H(0X1C4, ctx->r29) = ctx->r14;
    // 0x8023BD8C: sh          $t9, 0x1C6($sp)
    MEM_H(0X1C6, ctx->r29) = ctx->r25;
    // 0x8023BD90: lhu         $t7, 0x14($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X14);
    // 0x8023BD94: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x8023BD98: beql        $t8, $zero, L_8023BDC0
    if (ctx->r24 == 0) {
        // 0x8023BD9C: lw          $t8, 0x214($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X214);
            goto L_8023BDC0;
    }
    goto skip_4;
    // 0x8023BD9C: lw          $t8, 0x214($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X214);
    skip_4:
    // 0x8023BDA0: lbu         $t6, 0x30($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X30);
    // 0x8023BDA4: lw          $t9, 0x214($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X214);
    // 0x8023BDA8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023BDAC: beq         $t6, $at, L_8023BDBC
    if (ctx->r14 == ctx->r1) {
        // 0x8023BDB0: sll         $t7, $t9, 2
        ctx->r15 = S32(ctx->r25 << 2);
            goto L_8023BDBC;
    }
    // 0x8023BDB0: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8023BDB4: b           L_8023BDC4
    // 0x8023BDB8: sh          $t7, 0x1C8($sp)
    MEM_H(0X1C8, ctx->r29) = ctx->r15;
        goto L_8023BDC4;
    // 0x8023BDB8: sh          $t7, 0x1C8($sp)
    MEM_H(0X1C8, ctx->r29) = ctx->r15;
L_8023BDBC:
    // 0x8023BDBC: lw          $t8, 0x214($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X214);
L_8023BDC0:
    // 0x8023BDC0: sh          $t8, 0x1C8($sp)
    MEM_H(0X1C8, ctx->r29) = ctx->r24;
L_8023BDC4:
    // 0x8023BDC4: lw          $t9, 0x1BC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1BC);
    // 0x8023BDC8: lw          $t6, 0x218($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X218);
    // 0x8023BDCC: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8023BDD0: sll         $t7, $t9, 8
    ctx->r15 = S32(ctx->r25 << 8);
    // 0x8023BDD4: srl         $t8, $t7, 20
    ctx->r24 = S32(U32(ctx->r15) >> 20);
    // 0x8023BDD8: sh          $t6, 0x1CA($sp)
    MEM_H(0X1CA, ctx->r29) = ctx->r14;
    // 0x8023BDDC: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x8023BDE0: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8023BDE4: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8023BDE8: or          $t6, $t9, $zero
    ctx->r14 = ctx->r25 | 0;
    // 0x8023BDEC: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8023BDF0: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8023BDF4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8023BDF8: lbu         $t8, 0x1C0($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1C0);
    // 0x8023BDFC: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x8023BE00: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x8023BE04: andi        $t7, $t8, 0x7
    ctx->r15 = ctx->r24 & 0X7;
    // 0x8023BE08: sll         $t6, $v1, 8
    ctx->r14 = S32(ctx->r3 << 8);
    // 0x8023BE0C: srl         $t8, $t6, 20
    ctx->r24 = S32(U32(ctx->r14) >> 20);
    // 0x8023BE10: sll         $t9, $t7, 24
    ctx->r25 = S32(ctx->r15 << 24);
    // 0x8023BE14: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8023BE18: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x8023BE1C: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8023BE20: andi        $t9, $v1, 0xFFF
    ctx->r25 = ctx->r3 & 0XFFF;
    // 0x8023BE24: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8023BE28: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x8023BE2C: lui         $t7, 0xB400
    ctx->r15 = S32(0XB400 << 16);
    // 0x8023BE30: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8023BE34: lhu         $t9, 0x1C4($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X1C4);
    // 0x8023BE38: lhu         $t8, 0x1C6($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X1C6);
    // 0x8023BE3C: lui         $t7, 0xB300
    ctx->r15 = S32(0XB300 << 16);
    // 0x8023BE40: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x8023BE44: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x8023BE48: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x8023BE4C: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8023BE50: lhu         $t8, 0x1C8($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X1C8);
    // 0x8023BE54: lhu         $t6, 0x1CA($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X1CA);
    // 0x8023BE58: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8023BE5C: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8023BE60: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8023BE64: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x8023BE68: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023BE6C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023BE70: lw          $t9, 0x1F0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F0);
    // 0x8023BE74: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x8023BE78: sw          $t1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r9;
L_8023BE7C:
    // 0x8023BE7C: jr          $ra
    // 0x8023BE80: addiu       $sp, $sp, 0x1F0
    ctx->r29 = ADD32(ctx->r29, 0X1F0);
    return;
    // 0x8023BE80: addiu       $sp, $sp, 0x1F0
    ctx->r29 = ADD32(ctx->r29, 0X1F0);
;}
RECOMP_FUNC void func_80238850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238850: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x80238854: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x80238858: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8023885C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80238860: bgez        $a2, L_80238874
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80238864: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80238874;
    }
    // 0x80238864: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80238868: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8023886C: nop

    // 0x80238870: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_80238874:
    // 0x80238874: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80238878: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8023887C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80238880: lw          $t7, 0x40($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X40);
    // 0x80238884: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80238888: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8023888C: bgez        $t7, L_802388A0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80238890: cvt.s.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
            goto L_802388A0;
    }
    // 0x80238890: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80238894: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80238898: nop

    // 0x8023889C: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_802388A0:
    // 0x802388A0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802388A4: ldc1        $f18, 0x5658($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X5658);
    // 0x802388A8: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x802388AC: mul.d       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x802388B0: div.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x802388B4: jr          $ra
    // 0x802388B8: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    return;
    // 0x802388B8: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
;}
RECOMP_FUNC void func_8023DCE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023DCE8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023DCEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023DCF0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8023DCF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023DCF8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8023DCFC: jal         0x802474B0
    // 0x8023DD00: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    func_802474B0(rdram, ctx);
        goto after_0;
    // 0x8023DD00: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    after_0:
    // 0x8023DD04: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8023DD08: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8023DD0C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023DD10: lhu         $t7, 0x2($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X2);
    // 0x8023DD14: bne         $t7, $zero, L_8023DD28
    if (ctx->r15 != 0) {
        // 0x8023DD18: sh          $t7, 0x4C00($at)
        MEM_H(0X4C00, ctx->r1) = ctx->r15;
            goto L_8023DD28;
    }
    // 0x8023DD18: sh          $t7, 0x4C00($at)
    MEM_H(0X4C00, ctx->r1) = ctx->r15;
    // 0x8023DD1C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8023DD20: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023DD24: sh          $t8, 0x4C00($at)
    MEM_H(0X4C00, ctx->r1) = ctx->r24;
L_8023DD28:
    // 0x8023DD28: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8023DD2C: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_8023DD30:
    // 0x8023DD30: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8023DD34: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8023DD38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8023DD3C: jal         0x802374B0
    // 0x8023DD40: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    func_802374B0(rdram, ctx);
        goto after_1;
    // 0x8023DD40: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    after_1:
    // 0x8023DD44: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8023DD48: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x8023DD4C: lhu         $s0, 0x0($t1)
    ctx->r16 = MEM_HU(ctx->r9, 0X0);
    // 0x8023DD50: beq         $s0, $at, L_8023DD68
    if (ctx->r16 == ctx->r1) {
        // 0x8023DD54: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_8023DD68;
    }
    // 0x8023DD54: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8023DD58: beq         $s0, $at, L_8023DE78
    if (ctx->r16 == ctx->r1) {
        // 0x8023DD5C: nop
    
            goto L_8023DE78;
    }
    // 0x8023DD5C: nop

    // 0x8023DD60: b           L_8023DD30
    // 0x8023DD64: nop

        goto L_8023DD30;
    // 0x8023DD64: nop

L_8023DD68:
    // 0x8023DD68: jal         0x802474C0
    // 0x8023DD6C: nop

    func_802474C0(rdram, ctx);
        goto after_2;
    // 0x8023DD6C: nop

    after_2:
    // 0x8023DD70: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x8023DD74: lhu         $t2, 0x4C00($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X4C00);
    // 0x8023DD78: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023DD7C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x8023DD80: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x8023DD84: bne         $t4, $zero, L_8023DDC8
    if (ctx->r12 != 0) {
        // 0x8023DD88: sh          $t3, 0x4C00($at)
        MEM_H(0X4C00, ctx->r1) = ctx->r11;
            goto L_8023DDC8;
    }
    // 0x8023DD88: sh          $t3, 0x4C00($at)
    MEM_H(0X4C00, ctx->r1) = ctx->r11;
    // 0x8023DD8C: jal         0x802474B0
    // 0x8023DD90: nop

    func_802474B0(rdram, ctx);
        goto after_3;
    // 0x8023DD90: nop

    after_3:
    // 0x8023DD94: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8023DD98: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8023DD9C: lw          $t6, 0x10($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X10);
    // 0x8023DDA0: beq         $t6, $zero, L_8023DDB8
    if (ctx->r14 == 0) {
        // 0x8023DDA4: nop
    
            goto L_8023DDB8;
    }
    // 0x8023DDA4: nop

    // 0x8023DDA8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8023DDAC: lw          $a1, 0x14($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X14);
    // 0x8023DDB0: jal         0x80236B80
    // 0x8023DDB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80236B80(rdram, ctx);
        goto after_4;
    // 0x8023DDB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_8023DDB8:
    // 0x8023DDB8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8023DDBC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023DDC0: lhu         $t8, 0x2($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X2);
    // 0x8023DDC4: sh          $t8, 0x4C00($at)
    MEM_H(0X4C00, ctx->r1) = ctx->r24;
L_8023DDC8:
    // 0x8023DDC8: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x8023DDCC: lw          $t9, 0x5F6C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5F6C);
    // 0x8023DDD0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8023DDD4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023DDD8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8023DDDC: beq         $t1, $zero, L_8023DE10
    if (ctx->r9 == 0) {
        // 0x8023DDE0: sw          $t0, 0x5F6C($at)
        MEM_W(0X5F6C, ctx->r1) = ctx->r8;
            goto L_8023DE10;
    }
    // 0x8023DDE0: sw          $t0, 0x5F6C($at)
    MEM_W(0X5F6C, ctx->r1) = ctx->r8;
    // 0x8023DDE4: jal         0x80238B80
    // 0x8023DDE8: nop

    func_80238B80(rdram, ctx);
        goto after_5;
    // 0x8023DDE8: nop

    after_5:
    // 0x8023DDEC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8023DDF0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8023DDF4: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    // 0x8023DDF8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023DDFC: sw          $t4, 0x5F60($at)
    MEM_W(0X5F60, ctx->r1) = ctx->r12;
    // 0x8023DE00: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023DE04: or          $t5, $t2, $zero
    ctx->r13 = ctx->r10 | 0;
    // 0x8023DE08: sw          $t5, 0x5F64($at)
    MEM_W(0X5F64, ctx->r1) = ctx->r13;
    // 0x8023DE0C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_8023DE10:
    // 0x8023DE10: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x8023DE14: lw          $t3, 0x5F68($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5F68);
    // 0x8023DE18: jal         0x80238B80
    // 0x8023DE1C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    func_80238B80(rdram, ctx);
        goto after_6;
    // 0x8023DE1C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_6:
    // 0x8023DE20: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023DE24: sw          $v0, 0x5F68($at)
    MEM_W(0X5F68, ctx->r1) = ctx->r2;
    // 0x8023DE28: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8023DE2C: lw          $t6, 0x5F68($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5F68);
    // 0x8023DE30: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8023DE34: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x8023DE38: lw          $t3, 0x5F64($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5F64);
    // 0x8023DE3C: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x8023DE40: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x8023DE44: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x8023DE48: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x8023DE4C: lw          $t2, 0x5F60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5F60);
    // 0x8023DE50: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x8023DE54: sltu        $at, $t5, $t3
    ctx->r1 = ctx->r13 < ctx->r11 ? 1 : 0;
    // 0x8023DE58: addu        $t4, $at, $t0
    ctx->r12 = ADD32(ctx->r1, ctx->r8);
    // 0x8023DE5C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023DE60: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8023DE64: sw          $t4, 0x5F60($at)
    MEM_W(0X5F60, ctx->r1) = ctx->r12;
    // 0x8023DE68: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023DE6C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8023DE70: b           L_8023DD30
    // 0x8023DE74: sw          $t5, 0x5F64($at)
    MEM_W(0X5F64, ctx->r1) = ctx->r13;
        goto L_8023DD30;
    // 0x8023DE74: sw          $t5, 0x5F64($at)
    MEM_W(0X5F64, ctx->r1) = ctx->r13;
L_8023DE78:
    // 0x8023DE78: jal         0x8024711C
    // 0x8023DE7C: nop

    func_8024711C(rdram, ctx);
        goto after_7;
    // 0x8023DE7C: nop

    after_7:
    // 0x8023DE80: b           L_8023DD30
    // 0x8023DE84: nop

        goto L_8023DD30;
    // 0x8023DE84: nop

    // 0x8023DE88: nop

    // 0x8023DE8C: nop

    // 0x8023DE90: nop

    // 0x8023DE94: nop

    // 0x8023DE98: nop

    // 0x8023DE9C: nop

    // 0x8023DEA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023DEA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023DEA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8023DEAC: jr          $ra
    // 0x8023DEB0: nop

    return;
    // 0x8023DEB0: nop

;}
RECOMP_FUNC void func_80216534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80216534: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80216538: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x8021653C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80216540: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x80216544: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80216548: lwc1        $f4, 0x310C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X310C);
    // 0x8021654C: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80216550: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80216554: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80216558: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8021655C: nop

    // 0x80216560: bc1fl       L_80216574
    if (!c1cs) {
        // 0x80216564: lwc1        $f8, 0x70($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
            goto L_80216574;
    }
    goto skip_0;
    // 0x80216564: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    skip_0:
    // 0x80216568: b           L_802165C0
    // 0x8021656C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_802165C0;
    // 0x8021656C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80216570: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
L_80216574:
    // 0x80216574: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x80216578: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    // 0x8021657C: jal         0x8022A2F0
    // 0x80216580: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_8022A2F0(rdram, ctx);
        goto after_0;
    // 0x80216580: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80216584: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80216588: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8021658C: jal         0x8022A4F4
    // 0x80216590: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_8022A4F4(rdram, ctx);
        goto after_1;
    // 0x80216590: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x80216594: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x80216598: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021659C: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802165A0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802165A4: jal         0x8021A468
    // 0x802165A8: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    func_8021A468(rdram, ctx);
        goto after_2;
    // 0x802165A8: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    after_2:
    // 0x802165AC: beql        $v0, $zero, L_802165C0
    if (ctx->r2 == 0) {
        // 0x802165B0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802165C0;
    }
    goto skip_1;
    // 0x802165B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_1:
    // 0x802165B4: b           L_802165C0
    // 0x802165B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802165C0;
    // 0x802165B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802165BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_802165C0:
    // 0x802165C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802165C4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x802165C8: jr          $ra
    // 0x802165CC: nop

    return;
    // 0x802165CC: nop

;}
RECOMP_FUNC void func_80233AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80233AB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233ABC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80233AC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80233AC4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80233AC8: lhu         $t6, 0xC($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XC);
    // 0x80233ACC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80233AD0: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80233AD4: bne         $t6, $at, L_80233AE8
    if (ctx->r14 != ctx->r1) {
        // 0x80233AD8: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80233AE8;
    }
    // 0x80233AD8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80233ADC: jal         0x80231A24
    // 0x80233AE0: addiu       $a0, $a0, 0x51D0
    ctx->r4 = ADD32(ctx->r4, 0X51D0);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80233AE0: addiu       $a0, $a0, 0x51D0
    ctx->r4 = ADD32(ctx->r4, 0X51D0);
    after_0:
    // 0x80233AE4: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
L_80233AE8:
    // 0x80233AE8: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x80233AEC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80233AF0: bnel        $t7, $zero, L_80233B08
    if (ctx->r15 != 0) {
        // 0x80233AF4: lw          $t8, 0x5C($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X5C);
            goto L_80233B08;
    }
    goto skip_0;
    // 0x80233AF4: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    skip_0:
    // 0x80233AF8: jal         0x8022B948
    // 0x80233AFC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_1;
    // 0x80233AFC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x80233B00: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80233B04: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
L_80233B08:
    // 0x80233B08: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    // 0x80233B0C: bnel        $t8, $zero, L_80233B34
    if (ctx->r24 != 0) {
        // 0x80233B10: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_80233B34;
    }
    goto skip_1;
    // 0x80233B10: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x80233B14: jal         0x8022B948
    // 0x80233B18: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8022B948(rdram, ctx);
        goto after_2;
    // 0x80233B18: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_2:
    // 0x80233B1C: sw          $v0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r2;
    // 0x80233B20: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    // 0x80233B24: jal         0x8022B948
    // 0x80233B28: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8022B948(rdram, ctx);
        goto after_3;
    // 0x80233B28: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x80233B2C: sw          $v0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r2;
    // 0x80233B30: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_80233B34:
    // 0x80233B34: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x80233B38: lhu         $t0, 0xA($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0XA);
    // 0x80233B3C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80233B40: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x80233B44: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80233B48: lw          $t5, 0x14($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X14);
    // 0x80233B4C: lhu         $t4, 0xA($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0XA);
    // 0x80233B50: sh          $t4, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r12;
    // 0x80233B54: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x80233B58: sh          $zero, 0x4($t6)
    MEM_H(0X4, ctx->r14) = 0;
    // 0x80233B5C: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x80233B60: sh          $zero, 0x6($t7)
    MEM_H(0X6, ctx->r15) = 0;
    // 0x80233B64: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80233B68: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x80233B6C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80233B70: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
    // 0x80233B74: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80233B78: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x80233B7C: lhu         $t2, 0xC($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0XC);
    // 0x80233B80: sh          $t2, 0xC($t3)
    MEM_H(0XC, ctx->r11) = ctx->r10;
    // 0x80233B84: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x80233B88: sh          $zero, 0xE($t4)
    MEM_H(0XE, ctx->r12) = 0;
    // 0x80233B8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80233B90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80233B94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80233B98: jr          $ra
    // 0x80233B9C: nop

    return;
    // 0x80233B9C: nop

;}
RECOMP_FUNC void func_8023FF1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FF1C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8023FF20: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8023FF24: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8023FF28: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8023FF2C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8023FF30: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023FF34: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023FF38: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023FF3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023FF40: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x8023FF44: lw          $s6, 0x10($a1)
    ctx->r22 = MEM_W(ctx->r5, 0X10);
    // 0x8023FF48: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8023FF4C: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x8023FF50: lbu         $t6, 0x34($s6)
    ctx->r14 = MEM_BU(ctx->r22, 0X34);
    // 0x8023FF54: bnel        $t6, $zero, L_8023FFC0
    if (ctx->r14 != 0) {
        // 0x8023FF58: addiu       $t2, $zero, 0x3
        ctx->r10 = ADD32(0, 0X3);
            goto L_8023FFC0;
    }
    goto skip_0;
    // 0x8023FF58: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    skip_0:
    // 0x8023FF5C: lw          $s0, 0x50($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X50);
    // 0x8023FF60: addiu       $s3, $zero, 0x6
    ctx->r19 = ADD32(0, 0X6);
    // 0x8023FF64: beql        $s0, $zero, L_8023FFC0
    if (ctx->r16 == 0) {
        // 0x8023FF68: addiu       $t2, $zero, 0x3
        ctx->r10 = ADD32(0, 0X3);
            goto L_8023FFC0;
    }
    goto skip_1;
    // 0x8023FF68: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    skip_1:
L_8023FF6C:
    // 0x8023FF6C: lh          $t7, 0xC($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XC);
    // 0x8023FF70: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8023FF74: bne         $s3, $t7, L_8023FFB4
    if (ctx->r19 != ctx->r15) {
        // 0x8023FF78: nop
    
            goto L_8023FFB4;
    }
    // 0x8023FF78: nop

    // 0x8023FF7C: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x8023FF80: bne         $s5, $t8, L_8023FFB4
    if (ctx->r21 != ctx->r24) {
        // 0x8023FF84: nop
    
            goto L_8023FFB4;
    }
    // 0x8023FF84: nop

    // 0x8023FF88: beq         $s1, $zero, L_8023FFA0
    if (ctx->r17 == 0) {
        // 0x8023FF8C: addiu       $s2, $s4, 0x48
        ctx->r18 = ADD32(ctx->r20, 0X48);
            goto L_8023FFA0;
    }
    // 0x8023FF8C: addiu       $s2, $s4, 0x48
    ctx->r18 = ADD32(ctx->r20, 0X48);
    // 0x8023FF90: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x8023FF94: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x8023FF98: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8023FF9C: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
L_8023FFA0:
    // 0x8023FFA0: jal         0x80237120
    // 0x8023FFA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80237120(rdram, ctx);
        goto after_0;
    // 0x8023FFA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8023FFA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023FFAC: jal         0x80237150
    // 0x8023FFB0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80237150(rdram, ctx);
        goto after_1;
    // 0x8023FFB0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
L_8023FFB4:
    // 0x8023FFB4: bne         $s1, $zero, L_8023FF6C
    if (ctx->r17 != 0) {
        // 0x8023FFB8: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8023FF6C;
    }
    // 0x8023FFB8: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8023FFBC: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
L_8023FFC0:
    // 0x8023FFC0: sb          $zero, 0x33($s6)
    MEM_B(0X33, ctx->r22) = 0;
    // 0x8023FFC4: sb          $t2, 0x34($s6)
    MEM_B(0X34, ctx->r22) = ctx->r10;
    // 0x8023FFC8: sb          $zero, 0x30($s6)
    MEM_B(0X30, ctx->r22) = 0;
    // 0x8023FFCC: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x8023FFD0: lw          $t3, 0x1C($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X1C);
    // 0x8023FFD4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8023FFD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023FFDC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8023FFE0: sw          $t5, 0x24($s6)
    MEM_W(0X24, ctx->r22) = ctx->r13;
    // 0x8023FFE4: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x8023FFE8: jal         0x80249810
    // 0x8023FFEC: addiu       $s2, $s4, 0x48
    ctx->r18 = ADD32(ctx->r20, 0X48);
    func_80249810(rdram, ctx);
        goto after_2;
    // 0x8023FFEC: addiu       $s2, $s4, 0x48
    ctx->r18 = ADD32(ctx->r20, 0X48);
    after_2:
    // 0x8023FFF0: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x8023FFF4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8023FFF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023FFFC: jal         0x8023F940
    // 0x80240000: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    func_8023F940(rdram, ctx);
        goto after_3;
    // 0x80240000: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    after_3:
    // 0x80240004: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80240008: sh          $t6, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r14;
    // 0x8024000C: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80240010: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80240014: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80240018: jal         0x8023F37C
    // 0x8024001C: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    func_8023F37C(rdram, ctx);
        goto after_4;
    // 0x8024001C: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    after_4:
    // 0x80240020: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80240024: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80240028: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8024002C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80240030: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80240034: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80240038: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8024003C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80240040: jr          $ra
    // 0x80240044: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80240044: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8022FE5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022FE5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FE60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FE64: jal         0x8022FB4C
    // 0x8022FE68: nop

    func_8022FB4C(rdram, ctx);
        goto after_0;
    // 0x8022FE68: nop

    after_0:
    // 0x8022FE6C: bne         $v0, $zero, L_8022FE7C
    if (ctx->r2 != 0) {
        // 0x8022FE70: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8022FE7C;
    }
    // 0x8022FE70: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8022FE74: b           L_8022FE80
    // 0x8022FE78: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
        goto L_8022FE80;
    // 0x8022FE78: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_8022FE7C:
    // 0x8022FE7C: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
L_8022FE80:
    // 0x8022FE80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FE84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022FE88: jr          $ra
    // 0x8022FE8C: nop

    return;
    // 0x8022FE8C: nop

;}
RECOMP_FUNC void func_80209078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80209078: addiu       $sp, $sp, -0x218
    ctx->r29 = ADD32(ctx->r29, -0X218);
    // 0x8020907C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80209080: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80209084: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x80209088: andi        $t8, $a2, 0xC
    ctx->r24 = ctx->r6 & 0XC;
    // 0x8020908C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80209090: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80209094: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80209098: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8020909C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x802090A0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802090A4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802090A8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802090AC: sw          $a0, 0x218($sp)
    MEM_W(0X218, ctx->r29) = ctx->r4;
    // 0x802090B0: sw          $a1, 0x21C($sp)
    MEM_W(0X21C, ctx->r29) = ctx->r5;
    // 0x802090B4: sw          $a2, 0x220($sp)
    MEM_W(0X220, ctx->r29) = ctx->r6;
    // 0x802090B8: sw          $a3, 0x224($sp)
    MEM_W(0X224, ctx->r29) = ctx->r7;
    // 0x802090BC: addiu       $s0, $sp, 0x224
    ctx->r16 = ADD32(ctx->r29, 0X224);
    // 0x802090C0: sw          $zero, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = 0;
    // 0x802090C4: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x802090C8: beq         $t8, $zero, L_802090E8
    if (ctx->r24 == 0) {
        // 0x802090CC: sw          $t6, 0x208($sp)
        MEM_W(0X208, ctx->r29) = ctx->r14;
            goto L_802090E8;
    }
    // 0x802090CC: sw          $t6, 0x208($sp)
    MEM_W(0X208, ctx->r29) = ctx->r14;
    // 0x802090D0: addiu       $s1, $zero, -0x4
    ctx->r17 = ADD32(0, -0X4);
    // 0x802090D4: addiu       $t9, $sp, 0x227
    ctx->r25 = ADD32(ctx->r29, 0X227);
    // 0x802090D8: and         $s0, $t9, $s1
    ctx->r16 = ctx->r25 & ctx->r17;
    // 0x802090DC: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x802090E0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802090E4: sw          $t0, 0x208($sp)
    MEM_W(0X208, ctx->r29) = ctx->r8;
L_802090E8:
    // 0x802090E8: lui         $s6, 0x8025
    ctx->r22 = S32(0X8025 << 16);
    // 0x802090EC: addiu       $s1, $zero, -0x4
    ctx->r17 = ADD32(0, -0X4);
    // 0x802090F0: addiu       $s6, $s6, 0x2BF0
    ctx->r22 = ADD32(ctx->r22, 0X2BF0);
    // 0x802090F4: addiu       $s5, $sp, 0x74
    ctx->r21 = ADD32(ctx->r29, 0X74);
    // 0x802090F8: addiu       $s3, $sp, 0xF4
    ctx->r19 = ADD32(ctx->r29, 0XF4);
    // 0x802090FC: addiu       $s2, $sp, 0x174
    ctx->r18 = ADD32(ctx->r29, 0X174);
L_80209100:
    // 0x80209100: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
    // 0x80209104: and         $s0, $t1, $s1
    ctx->r16 = ctx->r9 & ctx->r17;
    // 0x80209108: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8020910C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80209110: addiu       $t2, $s0, 0x3
    ctx->r10 = ADD32(ctx->r16, 0X3);
    // 0x80209114: beq         $v1, $zero, L_80209170
    if (ctx->r3 == 0) {
        // 0x80209118: and         $s0, $t2, $s1
        ctx->r16 = ctx->r10 & ctx->r17;
            goto L_80209170;
    }
    // 0x80209118: and         $s0, $t2, $s1
    ctx->r16 = ctx->r10 & ctx->r17;
    // 0x8020911C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80209120: addiu       $t4, $s0, 0x7
    ctx->r12 = ADD32(ctx->r16, 0X7);
    // 0x80209124: and         $s0, $t4, $s1
    ctx->r16 = ctx->r12 & ctx->r17;
    // 0x80209128: sll         $v0, $fp, 2
    ctx->r2 = S32(ctx->r30 << 2);
    // 0x8020912C: sw          $t3, 0x210($sp)
    MEM_W(0X210, ctx->r29) = ctx->r11;
    // 0x80209130: lw          $s4, 0x0($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X0);
    // 0x80209134: addu        $t5, $s2, $v0
    ctx->r13 = ADD32(ctx->r18, ctx->r2);
    // 0x80209138: sw          $v1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r3;
    // 0x8020913C: lw          $t6, 0x210($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X210);
    // 0x80209140: addu        $t7, $s3, $v0
    ctx->r15 = ADD32(ctx->r19, ctx->r2);
    // 0x80209144: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x80209148: addu        $t8, $s5, $v0
    ctx->r24 = ADD32(ctx->r21, ctx->r2);
    // 0x8020914C: slti        $at, $fp, 0x20
    ctx->r1 = SIGNED(ctx->r30) < 0X20 ? 1 : 0;
    // 0x80209150: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80209154: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80209158: bne         $at, $zero, L_80209100
    if (ctx->r1 != 0) {
        // 0x8020915C: sw          $s4, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->r20;
            goto L_80209100;
    }
    // 0x8020915C: sw          $s4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r20;
    // 0x80209160: jal         0x80231A24
    // 0x80209164: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80209164: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_0:
    // 0x80209168: b           L_80209100
    // 0x8020916C: addiu       $fp, $fp, -0x1
    ctx->r30 = ADD32(ctx->r30, -0X1);
        goto L_80209100;
    // 0x8020916C: addiu       $fp, $fp, -0x1
    ctx->r30 = ADD32(ctx->r30, -0X1);
L_80209170:
    // 0x80209170: lw          $t9, 0x220($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X220);
    // 0x80209174: lw          $t2, 0x220($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X220);
    // 0x80209178: lw          $v1, 0x208($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X208);
    // 0x8020917C: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x80209180: beq         $t0, $zero, L_80209190
    if (ctx->r8 == 0) {
        // 0x80209184: andi        $t3, $t2, 0x1
        ctx->r11 = ctx->r10 & 0X1;
            goto L_80209190;
    }
    // 0x80209184: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80209188: b           L_802091B0
    // 0x8020918C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_802091B0;
    // 0x8020918C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80209190:
    // 0x80209190: beq         $t3, $zero, L_802091AC
    if (ctx->r11 == 0) {
        // 0x80209194: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802091AC;
    }
    // 0x80209194: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80209198: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8020919C: lhu         $v1, 0xBD2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XBD2);
    // 0x802091A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802091A4: b           L_802091B0
    // 0x802091A8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
        goto L_802091B0;
    // 0x802091A8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_802091AC:
    // 0x802091AC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_802091B0:
    // 0x802091B0: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802091B4: bne         $at, $zero, L_80209320
    if (ctx->r1 != 0) {
        // 0x802091B8: sw          $v0, 0x214($sp)
        MEM_W(0X214, ctx->r29) = ctx->r2;
            goto L_80209320;
    }
    // 0x802091B8: sw          $v0, 0x214($sp)
    MEM_W(0X214, ctx->r29) = ctx->r2;
    // 0x802091BC: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x802091C0: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x802091C4: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x802091C8: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
L_802091CC:
    // 0x802091CC: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x802091D0: lw          $t7, -0x18F0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X18F0);
    // 0x802091D4: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x802091D8: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x802091DC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x802091E0: lw          $s7, 0x0($t0)
    ctx->r23 = MEM_W(ctx->r8, 0X0);
    // 0x802091E4: beql        $s7, $zero, L_80209304
    if (ctx->r23 == 0) {
        // 0x802091E8: lw          $t3, 0x214($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X214);
            goto L_80209304;
    }
    goto skip_0;
    // 0x802091E8: lw          $t3, 0x214($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X214);
    skip_0:
    // 0x802091EC: sw          $zero, 0x210($sp)
    MEM_W(0X210, ctx->r29) = 0;
    // 0x802091F0: lhu         $t1, 0x4($s7)
    ctx->r9 = MEM_HU(ctx->r23, 0X4);
    // 0x802091F4: blezl       $t1, L_80209304
    if (SIGNED(ctx->r9) <= 0) {
        // 0x802091F8: lw          $t3, 0x214($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X214);
            goto L_80209304;
    }
    goto skip_1;
    // 0x802091F8: lw          $t3, 0x214($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X214);
    skip_1:
    // 0x802091FC: lw          $t3, 0x210($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X210);
L_80209200:
    // 0x80209200: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x80209204: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80209208: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x8020920C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80209210: blez        $fp, L_80209280
    if (SIGNED(ctx->r30) <= 0) {
        // 0x80209214: addu        $s6, $t2, $t4
        ctx->r22 = ADD32(ctx->r10, ctx->r12);
            goto L_80209280;
    }
    // 0x80209214: addu        $s6, $t2, $t4
    ctx->r22 = ADD32(ctx->r10, ctx->r12);
    // 0x80209218: addiu       $s5, $sp, 0x174
    ctx->r21 = ADD32(ctx->r29, 0X174);
    // 0x8020921C: addiu       $s1, $sp, 0xF4
    ctx->r17 = ADD32(ctx->r29, 0XF4);
    // 0x80209220: addiu       $s2, $sp, 0x74
    ctx->r18 = ADD32(ctx->r29, 0X74);
L_80209224:
    // 0x80209224: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x80209228: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8020922C: andi        $t5, $s0, 0x600
    ctx->r13 = ctx->r16 & 0X600;
    // 0x80209230: beq         $t5, $zero, L_8020925C
    if (ctx->r13 == 0) {
        // 0x80209234: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_8020925C;
    }
    // 0x80209234: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80209238: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8020923C: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x80209240: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80209244: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80209248: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8020924C: jal         0x802088E4
    // 0x80209250: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_802088E4(rdram, ctx);
        goto after_1;
    // 0x80209250: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x80209254: b           L_8020926C
    // 0x80209258: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
        goto L_8020926C;
    // 0x80209258: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
L_8020925C:
    // 0x8020925C: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x80209260: jal         0x80208B0C
    // 0x80209264: lw          $a3, 0x0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X0);
    func_80208B0C(rdram, ctx);
        goto after_2;
    // 0x80209264: lw          $a3, 0x0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X0);
    after_2:
    // 0x80209268: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
L_8020926C:
    // 0x8020926C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80209270: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x80209274: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80209278: bne         $s4, $fp, L_80209224
    if (ctx->r20 != ctx->r30) {
        // 0x8020927C: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80209224;
    }
    // 0x8020927C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_80209280:
    // 0x80209280: bne         $s3, $fp, L_802092E4
    if (ctx->r19 != ctx->r30) {
        // 0x80209284: lw          $t7, 0x21C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X21C);
            goto L_802092E4;
    }
    // 0x80209284: lw          $t7, 0x21C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X21C);
    // 0x80209288: lw          $s1, 0x214($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X214);
    // 0x8020928C: lw          $t8, 0x1FC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1FC);
    // 0x80209290: lw          $t3, 0x218($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X218);
    // 0x80209294: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80209298: sll         $t0, $s1, 16
    ctx->r8 = S32(ctx->r17 << 16);
    // 0x8020929C: or          $s1, $t0, $at
    ctx->r17 = ctx->r8 | ctx->r1;
    // 0x802092A0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x802092A4: slt         $at, $t8, $t3
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x802092A8: bne         $at, $zero, L_802092CC
    if (ctx->r1 != 0) {
        // 0x802092AC: addu        $s0, $t7, $t9
        ctx->r16 = ADD32(ctx->r15, ctx->r25);
            goto L_802092CC;
    }
    // 0x802092AC: addu        $s0, $t7, $t9
    ctx->r16 = ADD32(ctx->r15, ctx->r25);
    // 0x802092B0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802092B4: jal         0x80231A24
    // 0x802092B8: addiu       $a0, $a0, 0x2C24
    ctx->r4 = ADD32(ctx->r4, 0X2C24);
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x802092B8: addiu       $a0, $a0, 0x2C24
    ctx->r4 = ADD32(ctx->r4, 0X2C24);
    after_3:
    // 0x802092BC: lw          $t2, 0x1FC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1FC);
    // 0x802092C0: addiu       $s0, $s0, -0x4
    ctx->r16 = ADD32(ctx->r16, -0X4);
    // 0x802092C4: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x802092C8: sw          $t4, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->r12;
L_802092CC:
    // 0x802092CC: lw          $t5, 0x210($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X210);
    // 0x802092D0: or          $t6, $s1, $t5
    ctx->r14 = ctx->r17 | ctx->r13;
    // 0x802092D4: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x802092D8: lw          $t7, 0x1FC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1FC);
    // 0x802092DC: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x802092E0: sw          $t9, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->r25;
L_802092E4:
    // 0x802092E4: lw          $t0, 0x210($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X210);
    // 0x802092E8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x802092EC: sw          $t1, 0x210($sp)
    MEM_W(0X210, ctx->r29) = ctx->r9;
    // 0x802092F0: lhu         $t8, 0x4($s7)
    ctx->r24 = MEM_HU(ctx->r23, 0X4);
    // 0x802092F4: slt         $at, $t1, $t8
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802092F8: bnel        $at, $zero, L_80209200
    if (ctx->r1 != 0) {
        // 0x802092FC: lw          $t3, 0x210($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X210);
            goto L_80209200;
    }
    goto skip_2;
    // 0x802092FC: lw          $t3, 0x210($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X210);
    skip_2:
    // 0x80209300: lw          $t3, 0x214($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X214);
L_80209304:
    // 0x80209304: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x80209308: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8020930C: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x80209310: addiu       $t5, $t4, 0x4
    ctx->r13 = ADD32(ctx->r12, 0X4);
    // 0x80209314: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x80209318: bne         $t6, $t2, L_802091CC
    if (ctx->r14 != ctx->r10) {
        // 0x8020931C: sw          $t2, 0x214($sp)
        MEM_W(0X214, ctx->r29) = ctx->r10;
            goto L_802091CC;
    }
    // 0x8020931C: sw          $t2, 0x214($sp)
    MEM_W(0X214, ctx->r29) = ctx->r10;
L_80209320:
    // 0x80209320: lw          $t7, 0x220($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X220);
    // 0x80209324: lw          $t1, 0x220($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X220);
    // 0x80209328: lw          $v1, 0x208($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X208);
    // 0x8020932C: andi        $t9, $t7, 0x8
    ctx->r25 = ctx->r15 & 0X8;
    // 0x80209330: beq         $t9, $zero, L_80209340
    if (ctx->r25 == 0) {
        // 0x80209334: andi        $t8, $t1, 0x2
        ctx->r24 = ctx->r9 & 0X2;
            goto L_80209340;
    }
    // 0x80209334: andi        $t8, $t1, 0x2
    ctx->r24 = ctx->r9 & 0X2;
    // 0x80209338: b           L_8020935C
    // 0x8020933C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8020935C;
    // 0x8020933C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80209340:
    // 0x80209340: beq         $t8, $zero, L_80209358
    if (ctx->r24 == 0) {
        // 0x80209344: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80209358;
    }
    // 0x80209344: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80209348: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8020934C: lhu         $v1, 0xBD0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XBD0);
    // 0x80209350: b           L_8020935C
    // 0x80209354: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
        goto L_8020935C;
    // 0x80209354: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_80209358:
    // 0x80209358: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8020935C:
    // 0x8020935C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80209360: bne         $at, $zero, L_802094C8
    if (ctx->r1 != 0) {
        // 0x80209364: sw          $v0, 0x214($sp)
        MEM_W(0X214, ctx->r29) = ctx->r2;
            goto L_802094C8;
    }
    // 0x80209364: sw          $v0, 0x214($sp)
    MEM_W(0X214, ctx->r29) = ctx->r2;
    // 0x80209368: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x8020936C: addiu       $t5, $v1, 0x1
    ctx->r13 = ADD32(ctx->r3, 0X1);
    // 0x80209370: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
    // 0x80209374: sw          $t4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r12;
L_80209378:
    // 0x80209378: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8020937C: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x80209380: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80209384: lw          $t2, 0x1C($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X1C);
    // 0x80209388: addu        $t9, $t2, $t7
    ctx->r25 = ADD32(ctx->r10, ctx->r15);
    // 0x8020938C: lw          $s7, 0x0($t9)
    ctx->r23 = MEM_W(ctx->r25, 0X0);
    // 0x80209390: beql        $s7, $zero, L_802094AC
    if (ctx->r23 == 0) {
        // 0x80209394: lw          $t0, 0x214($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X214);
            goto L_802094AC;
    }
    goto skip_3;
    // 0x80209394: lw          $t0, 0x214($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X214);
    skip_3:
    // 0x80209398: sw          $zero, 0x210($sp)
    MEM_W(0X210, ctx->r29) = 0;
    // 0x8020939C: lhu         $t0, 0x4($s7)
    ctx->r8 = MEM_HU(ctx->r23, 0X4);
    // 0x802093A0: blezl       $t0, L_802094AC
    if (SIGNED(ctx->r8) <= 0) {
        // 0x802093A4: lw          $t0, 0x214($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X214);
            goto L_802094AC;
    }
    goto skip_4;
    // 0x802093A4: lw          $t0, 0x214($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X214);
    skip_4:
    // 0x802093A8: lw          $t8, 0x210($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X210);
L_802093AC:
    // 0x802093AC: lw          $t1, 0x0($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X0);
    // 0x802093B0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802093B4: sll         $t3, $t8, 4
    ctx->r11 = S32(ctx->r24 << 4);
    // 0x802093B8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x802093BC: blez        $fp, L_8020942C
    if (SIGNED(ctx->r30) <= 0) {
        // 0x802093C0: addu        $s6, $t1, $t3
        ctx->r22 = ADD32(ctx->r9, ctx->r11);
            goto L_8020942C;
    }
    // 0x802093C0: addu        $s6, $t1, $t3
    ctx->r22 = ADD32(ctx->r9, ctx->r11);
    // 0x802093C4: addiu       $s5, $sp, 0x174
    ctx->r21 = ADD32(ctx->r29, 0X174);
    // 0x802093C8: addiu       $s1, $sp, 0xF4
    ctx->r17 = ADD32(ctx->r29, 0XF4);
    // 0x802093CC: addiu       $s2, $sp, 0x74
    ctx->r18 = ADD32(ctx->r29, 0X74);
L_802093D0:
    // 0x802093D0: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x802093D4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x802093D8: andi        $t4, $s0, 0x600
    ctx->r12 = ctx->r16 & 0X600;
    // 0x802093DC: beq         $t4, $zero, L_80209408
    if (ctx->r12 == 0) {
        // 0x802093E0: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_80209408;
    }
    // 0x802093E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802093E4: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x802093E8: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x802093EC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x802093F0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x802093F4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802093F8: jal         0x802086CC
    // 0x802093FC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_802086CC(rdram, ctx);
        goto after_4;
    // 0x802093FC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_4:
    // 0x80209400: b           L_80209418
    // 0x80209404: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
        goto L_80209418;
    // 0x80209404: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
L_80209408:
    // 0x80209408: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8020940C: jal         0x80208B0C
    // 0x80209410: lw          $a3, 0x0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X0);
    func_80208B0C(rdram, ctx);
        goto after_5;
    // 0x80209410: lw          $a3, 0x0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X0);
    after_5:
    // 0x80209414: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
L_80209418:
    // 0x80209418: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8020941C: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x80209420: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80209424: bne         $s4, $fp, L_802093D0
    if (ctx->r20 != ctx->r30) {
        // 0x80209428: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_802093D0;
    }
    // 0x80209428: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_8020942C:
    // 0x8020942C: bne         $s3, $fp, L_8020948C
    if (ctx->r19 != ctx->r30) {
        // 0x80209430: lw          $t6, 0x21C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X21C);
            goto L_8020948C;
    }
    // 0x80209430: lw          $t6, 0x21C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X21C);
    // 0x80209434: lw          $t2, 0x1FC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1FC);
    // 0x80209438: lw          $s1, 0x214($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X214);
    // 0x8020943C: lw          $t0, 0x218($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X218);
    // 0x80209440: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x80209444: sll         $t9, $s1, 16
    ctx->r25 = S32(ctx->r17 << 16);
    // 0x80209448: slt         $at, $t2, $t0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8020944C: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x80209450: bne         $at, $zero, L_80209474
    if (ctx->r1 != 0) {
        // 0x80209454: addu        $s0, $t6, $t7
        ctx->r16 = ADD32(ctx->r14, ctx->r15);
            goto L_80209474;
    }
    // 0x80209454: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x80209458: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8020945C: jal         0x80231A24
    // 0x80209460: addiu       $a0, $a0, 0x2C40
    ctx->r4 = ADD32(ctx->r4, 0X2C40);
    func_80231A24(rdram, ctx);
        goto after_6;
    // 0x80209460: addiu       $a0, $a0, 0x2C40
    ctx->r4 = ADD32(ctx->r4, 0X2C40);
    after_6:
    // 0x80209464: lw          $t8, 0x1FC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1FC);
    // 0x80209468: addiu       $s0, $s0, -0x4
    ctx->r16 = ADD32(ctx->r16, -0X4);
    // 0x8020946C: addiu       $t1, $t8, -0x1
    ctx->r9 = ADD32(ctx->r24, -0X1);
    // 0x80209470: sw          $t1, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->r9;
L_80209474:
    // 0x80209474: lw          $t3, 0x210($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X210);
    // 0x80209478: or          $t4, $s1, $t3
    ctx->r12 = ctx->r17 | ctx->r11;
    // 0x8020947C: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x80209480: lw          $t5, 0x1FC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1FC);
    // 0x80209484: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80209488: sw          $t6, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->r14;
L_8020948C:
    // 0x8020948C: lw          $t7, 0x210($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X210);
    // 0x80209490: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80209494: sw          $t9, 0x210($sp)
    MEM_W(0X210, ctx->r29) = ctx->r25;
    // 0x80209498: lhu         $t2, 0x4($s7)
    ctx->r10 = MEM_HU(ctx->r23, 0X4);
    // 0x8020949C: slt         $at, $t9, $t2
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x802094A0: bnel        $at, $zero, L_802093AC
    if (ctx->r1 != 0) {
        // 0x802094A4: lw          $t8, 0x210($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X210);
            goto L_802093AC;
    }
    goto skip_5;
    // 0x802094A4: lw          $t8, 0x210($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X210);
    skip_5:
    // 0x802094A8: lw          $t0, 0x214($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X214);
L_802094AC:
    // 0x802094AC: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x802094B0: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x802094B4: addiu       $t8, $t0, 0x1
    ctx->r24 = ADD32(ctx->r8, 0X1);
    // 0x802094B8: addiu       $t3, $t1, 0x4
    ctx->r11 = ADD32(ctx->r9, 0X4);
    // 0x802094BC: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x802094C0: bne         $t4, $t8, L_80209378
    if (ctx->r12 != ctx->r24) {
        // 0x802094C4: sw          $t8, 0x214($sp)
        MEM_W(0X214, ctx->r29) = ctx->r24;
            goto L_80209378;
    }
    // 0x802094C4: sw          $t8, 0x214($sp)
    MEM_W(0X214, ctx->r29) = ctx->r24;
L_802094C8:
    // 0x802094C8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802094CC: lw          $v0, 0x1FC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1FC);
    // 0x802094D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802094D4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802094D8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802094DC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802094E0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x802094E4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x802094E8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x802094EC: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x802094F0: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x802094F4: jr          $ra
    // 0x802094F8: addiu       $sp, $sp, 0x218
    ctx->r29 = ADD32(ctx->r29, 0X218);
    return;
    // 0x802094F8: addiu       $sp, $sp, 0x218
    ctx->r29 = ADD32(ctx->r29, 0X218);
;}
RECOMP_FUNC void func_802424A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802424A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802424A8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802424AC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802424B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802424B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802424B8: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x802424BC: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802424C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802424C4: addiu       $a1, $a1, 0x336C
    ctx->r5 = ADD32(ctx->r5, 0X336C);
    // 0x802424C8: addiu       $a2, $a2, 0x2CC0
    ctx->r6 = ADD32(ctx->r6, 0X2CC0);
    // 0x802424CC: jal         0x80249920
    // 0x802424D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80249920(rdram, ctx);
        goto after_0;
    // 0x802424D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x802424D4: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x802424D8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802424DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802424E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802424E4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x802424E8: jal         0x80236CD0
    // 0x802424EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80236CD0(rdram, ctx);
        goto after_1;
    // 0x802424EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x802424F0: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x802424F4: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x802424F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802424FC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80242500: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80242504: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80242508: jal         0x80236CD0
    // 0x8024250C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80236CD0(rdram, ctx);
        goto after_2;
    // 0x8024250C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80242510: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80242514: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80242518: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8024251C: jalr        $t9
    // 0x80242520: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80242520: nop

    after_3:
    // 0x80242524: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80242528: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x8024252C: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x80242530: sw          $t8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r24;
    // 0x80242534: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80242538: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8024253C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80242540: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80242544: jr          $ra
    // 0x80242548: nop

    return;
    // 0x80242548: nop

;}
RECOMP_FUNC void func_8022A918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A918: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022A91C: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8022A920: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x8022A924: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x8022A928: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x8022A92C: mul.s       $f4, $f20, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8022A930: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022A934: sdc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X18, ctx->r29);
    // 0x8022A938: mul.s       $f6, $f22, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x8022A93C: mtc1        $a1, $f24
    ctx->f24.u32l = ctx->r5;
    // 0x8022A940: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x8022A944: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8022A948: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8022A94C: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x8022A950: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8022A954: mul.s       $f2, $f24, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f24.fl, ctx->f20.fl);
    // 0x8022A958: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8022A95C: add.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x8022A960: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8022A964: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x8022A968: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8022A96C: mul.s       $f12, $f22, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f22.fl, ctx->f10.fl);
    // 0x8022A970: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8022A974: mul.s       $f6, $f22, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f24.fl);
    // 0x8022A978: add.s       $f18, $f2, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x8022A97C: add.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f14.fl;
    // 0x8022A980: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
    // 0x8022A984: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8022A988: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x8022A98C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8022A990: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x8022A994: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x8022A998: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8022A99C: add.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f18.fl;
    // 0x8022A9A0: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022A9A4: mul.s       $f4, $f24, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x8022A9A8: swc1        $f10, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f10.u32l;
    // 0x8022A9AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8022A9B0: mul.s       $f2, $f20, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8022A9B4: add.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f16.fl;
    // 0x8022A9B8: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x8022A9BC: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8022A9C0: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8022A9C4: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8022A9C8: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8022A9CC: add.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x8022A9D0: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8022A9D4: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
    // 0x8022A9D8: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8022A9DC: mul.s       $f12, $f24, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f24.fl, ctx->f8.fl);
    // 0x8022A9E0: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8022A9E4: add.s       $f18, $f2, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x8022A9E8: add.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f14.fl;
    // 0x8022A9EC: swc1        $f10, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f10.u32l;
    // 0x8022A9F0: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8022A9F4: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8022A9F8: add.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f18.fl;
    // 0x8022A9FC: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8022AA00: swc1        $f10, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f10.u32l;
    // 0x8022AA04: add.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f16.fl;
    // 0x8022AA08: swc1        $f8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f8.u32l;
    // 0x8022AA0C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8022AA10: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8022AA14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8022AA18: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022AA1C: add.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x8022AA20: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8022AA24: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x8022AA28: ldc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X18);
    // 0x8022AA2C: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x8022AA30: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8022AA34: jr          $ra
    // 0x8022AA38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8022AA38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8024AA84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024AA84: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8024AA88: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8024AA8C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8024AA90: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8024AA94: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8024AA98: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8024AA9C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8024AAA0: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x8024AAA4: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x8024AAA8: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
    // 0x8024AAAC: sw          $a2, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r6;
    // 0x8024AAB0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x8024AAB4: sb          $a3, 0x65($a1)
    MEM_B(0X65, ctx->r5) = ctx->r7;
    // 0x8024AAB8: addiu       $v0, $sp, 0x40
    ctx->r2 = ADD32(ctx->r29, 0X40);
    // 0x8024AABC: addiu       $v1, $sp, 0x60
    ctx->r3 = ADD32(ctx->r29, 0X60);
L_8024AAC0:
    // 0x8024AAC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024AAC4: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8024AAC8: bne         $at, $zero, L_8024AAC0
    if (ctx->r1 != 0) {
        // 0x8024AACC: sb          $a3, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r7;
            goto L_8024AAC0;
    }
    // 0x8024AACC: sb          $a3, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r7;
    // 0x8024AAD0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8024AAD4: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8024AAD8: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x8024AADC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8024AAE0: jal         0x80246660
    // 0x8024AAE4: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    func_80246660(rdram, ctx);
        goto after_0;
    // 0x8024AAE4: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    after_0:
    // 0x8024AAE8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8024AAEC: bne         $v0, $at, L_8024AB10
    if (ctx->r2 != ctx->r1) {
        // 0x8024AAF0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8024AB10;
    }
    // 0x8024AAF0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8024AAF4: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8024AAF8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8024AAFC: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8024AB00: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x8024AB04: jal         0x80246660
    // 0x8024AB08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80246660(rdram, ctx);
        goto after_1;
    // 0x8024AB08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x8024AB0C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8024AB10:
    // 0x8024AB10: beq         $v0, $zero, L_8024AB20
    if (ctx->r2 == 0) {
        // 0x8024AB14: or          $a1, $s4, $zero
        ctx->r5 = ctx->r20 | 0;
            goto L_8024AB20;
    }
    // 0x8024AB14: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8024AB18: b           L_8024ABFC
    // 0x8024AB1C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8024ABFC;
    // 0x8024AB1C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8024AB20:
    // 0x8024AB20: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8024AB24: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8024AB28: jal         0x80245710
    // 0x8024AB2C: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    func_80245710(rdram, ctx);
        goto after_2;
    // 0x8024AB2C: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_2:
    // 0x8024AB30: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8024AB34: bne         $v0, $at, L_8024AB40
    if (ctx->r2 != ctx->r1) {
        // 0x8024AB38: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8024AB40;
    }
    // 0x8024AB38: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8024AB3C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_8024AB40:
    // 0x8024AB40: beq         $v1, $zero, L_8024AB54
    if (ctx->r3 == 0) {
        // 0x8024AB44: lbu         $t6, 0x5F($sp)
        ctx->r14 = MEM_BU(ctx->r29, 0X5F);
            goto L_8024AB54;
    }
    // 0x8024AB44: lbu         $t6, 0x5F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X5F);
    // 0x8024AB48: b           L_8024ABFC
    // 0x8024AB4C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8024ABFC;
    // 0x8024AB4C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8024AB50: lbu         $t6, 0x5F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X5F);
L_8024AB54:
    // 0x8024AB54: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x8024AB58: beq         $t6, $at, L_8024AB68
    if (ctx->r14 == ctx->r1) {
        // 0x8024AB5C: lui         $a0, 0x8028
        ctx->r4 = S32(0X8028 << 16);
            goto L_8024AB68;
    }
    // 0x8024AB5C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8024AB60: b           L_8024ABFC
    // 0x8024AB64: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_8024ABFC;
    // 0x8024AB64: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_8024AB68:
    // 0x8024AB68: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8024AB6C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8024AB70: addiu       $a1, $a1, 0x7410
    ctx->r5 = ADD32(ctx->r5, 0X7410);
    // 0x8024AB74: addiu       $v1, $v1, 0x73F0
    ctx->r3 = ADD32(ctx->r3, 0X73F0);
    // 0x8024AB78: addiu       $a0, $a0, 0x7410
    ctx->r4 = ADD32(ctx->r4, 0X7410);
    // 0x8024AB7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8024AB80:
    // 0x8024AB80: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8024AB84: sb          $v0, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r2;
    // 0x8024AB88: sb          $zero, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = 0;
    // 0x8024AB8C: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8024AB90: sb          $zero, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = 0;
    // 0x8024AB94: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x8024AB98: sb          $zero, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = 0;
    // 0x8024AB9C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8024ABA0: sb          $v0, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r2;
    // 0x8024ABA4: bne         $v1, $a1, L_8024AB80
    if (ctx->r3 != ctx->r5) {
        // 0x8024ABA8: sb          $zero, -0x4($v1)
        MEM_B(-0X4, ctx->r3) = 0;
            goto L_8024AB80;
    }
    // 0x8024ABA8: sb          $zero, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = 0;
    // 0x8024ABAC: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8024ABB0: addiu       $t7, $t7, 0x72F0
    ctx->r15 = ADD32(ctx->r15, 0X72F0);
    // 0x8024ABB4: lui         $s1, 0x8028
    ctx->r17 = S32(0X8028 << 16);
    // 0x8024ABB8: sll         $v0, $s4, 6
    ctx->r2 = S32(ctx->r20 << 6);
    // 0x8024ABBC: addu        $a1, $v0, $t7
    ctx->r5 = ADD32(ctx->r2, ctx->r15);
    // 0x8024ABC0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8024ABC4: addiu       $s1, $s1, 0x7410
    ctx->r17 = ADD32(ctx->r17, 0X7410);
    // 0x8024ABC8: or          $s2, $s4, $zero
    ctx->r18 = ctx->r20 | 0;
    // 0x8024ABCC: jal         0x8024A940
    // 0x8024ABD0: addiu       $s3, $zero, 0x600
    ctx->r19 = ADD32(0, 0X600);
    func_8024A940(rdram, ctx);
        goto after_3;
    // 0x8024ABD0: addiu       $s3, $zero, 0x600
    ctx->r19 = ADD32(0, 0X600);
    after_3:
    // 0x8024ABD4: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x8024ABD8: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8024ABDC: addiu       $t8, $t8, 0x71F0
    ctx->r24 = ADD32(ctx->r24, 0X71F0);
    // 0x8024ABE0: lui         $s1, 0x8028
    ctx->r17 = S32(0X8028 << 16);
    // 0x8024ABE4: addiu       $s1, $s1, 0x73F0
    ctx->r17 = ADD32(ctx->r17, 0X73F0);
    // 0x8024ABE8: or          $s2, $s4, $zero
    ctx->r18 = ctx->r20 | 0;
    // 0x8024ABEC: addiu       $s3, $zero, 0x600
    ctx->r19 = ADD32(0, 0X600);
    // 0x8024ABF0: jal         0x8024A940
    // 0x8024ABF4: addu        $a1, $v0, $t8
    ctx->r5 = ADD32(ctx->r2, ctx->r24);
    func_8024A940(rdram, ctx);
        goto after_4;
    // 0x8024ABF4: addu        $a1, $v0, $t8
    ctx->r5 = ADD32(ctx->r2, ctx->r24);
    after_4:
    // 0x8024ABF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024ABFC:
    // 0x8024ABFC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8024AC00: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8024AC04: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8024AC08: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8024AC0C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8024AC10: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8024AC14: jr          $ra
    // 0x8024AC18: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8024AC18: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80243D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80243D04: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x80243D08: bne         $a0, $zero, L_80243D38
    if (ctx->r4 != 0) {
        // 0x80243D0C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80243D38;
    }
    // 0x80243D0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80243D10: c.le.d      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.d <= ctx->f14.d;
    // 0x80243D14: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x80243D18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80243D1C: bc1f        L_80243D30
    if (!c1cs) {
        // 0x80243D20: nop
    
            goto L_80243D30;
    }
    // 0x80243D20: nop

    // 0x80243D24: sh          $t6, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r14;
    // 0x80243D28: b           L_80243EC4
    // 0x80243D2C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_80243EC4;
    // 0x80243D2C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_80243D30:
    // 0x80243D30: b           L_80243EC4
    // 0x80243D34: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
        goto L_80243EC4;
    // 0x80243D34: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_80243D38:
    // 0x80243D38: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80243D3C: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x80243D40: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80243D44: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x80243D48: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80243D4C: c.lt.d      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.d < ctx->f22.d;
    // 0x80243D50: addiu       $s2, $sp, 0x68
    ctx->r18 = ADD32(ctx->r29, 0X68);
    // 0x80243D54: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80243D58: addiu       $t7, $t7, 0x1A10
    ctx->r15 = ADD32(ctx->r15, 0X1A10);
    // 0x80243D5C: bc1f        L_80243D68
    if (!c1cs) {
        // 0x80243D60: or          $t6, $s2, $zero
        ctx->r14 = ctx->r18 | 0;
            goto L_80243D68;
    }
    // 0x80243D60: or          $t6, $s2, $zero
    ctx->r14 = ctx->r18 | 0;
    // 0x80243D64: mov.d       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.d = ctx->f22.d;
L_80243D68:
    // 0x80243D68: c.le.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d <= ctx->f4.d;
    // 0x80243D6C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80243D70: addiu       $t9, $t7, 0x3C
    ctx->r25 = ADD32(ctx->r15, 0X3C);
    // 0x80243D74: bc1f        L_80243D88
    if (!c1cs) {
        // 0x80243D78: nop
    
            goto L_80243D88;
    }
    // 0x80243D78: nop

    // 0x80243D7C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80243D80: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80243D84: nop

L_80243D88:
    // 0x80243D88: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80243D8C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80243D90: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80243D94: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x80243D98: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x80243D9C: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x80243DA0: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80243DA4: bne         $t7, $t9, L_80243D88
    if (ctx->r15 != ctx->r25) {
        // 0x80243DA8: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_80243D88;
    }
    // 0x80243DA8: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80243DAC: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x80243DB0: lui         $t8, 0x4000
    ctx->r24 = S32(0X4000 << 16);
    // 0x80243DB4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80243DB8: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80243DBC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80243DC0: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x80243DC4: cvt.d.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.d = CVT_D_W(ctx->f6.u32l);
    // 0x80243DC8: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80243DCC: div.d       $f4, $f22, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = DIV_D(ctx->f22.d, ctx->f10.d);
    // 0x80243DD0: div.d       $f12, $f14, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f16.d); 
    ctx->f12.d = DIV_D(ctx->f14.d, ctx->f16.d);
    // 0x80243DD4: mul.d       $f2, $f4, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = MUL_D(ctx->f4.d, ctx->f20.d);
    // 0x80243DD8: trunc.w.d   $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x80243DDC: mfc1        $s0, $f6
    ctx->r16 = (int32_t)ctx->f6.u32l;
    // 0x80243DE0: jal         0x80243B38
    // 0x80243DE4: nop

    func_80243B38(rdram, ctx);
        goto after_0;
    // 0x80243DE4: nop

    after_0:
    // 0x80243DE8: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80243DEC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80243DF0: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x80243DF4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80243DF8: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80243DFC: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80243E00: mul.d       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f2.d = MUL_D(ctx->f0.d, ctx->f10.d);
    // 0x80243E04: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80243E08: ldc1        $f8, 0x59F0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X59F0);
    // 0x80243E0C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80243E10: trunc.w.d   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x80243E14: mov.d       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.d = ctx->f22.d;
    // 0x80243E18: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x80243E1C: nop

    // 0x80243E20: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80243E24: addu        $t7, $s2, $t9
    ctx->r15 = ADD32(ctx->r18, ctx->r25);
    // 0x80243E28: ldc1        $f6, -0x40($t7)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r15, -0X40);
    // 0x80243E2C: add.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f6.d + ctx->f10.d;
    // 0x80243E30: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80243E34: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80243E38: mul.d       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f12.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x80243E3C: nop

    // 0x80243E40: mul.d       $f14, $f6, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f14.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x80243E44: div.d       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f14.d); 
    ctx->f12.d = DIV_D(ctx->f12.d, ctx->f14.d);
    // 0x80243E48: beq         $s0, $zero, L_80243E70
    if (ctx->r16 == 0) {
        // 0x80243E4C: add.d       $f0, $f22, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = ctx->f22.d + ctx->f12.d;
            goto L_80243E70;
    }
    // 0x80243E4C: add.d       $f0, $f22, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = ctx->f22.d + ctx->f12.d;
L_80243E50:
    // 0x80243E50: andi        $t8, $s0, 0x1
    ctx->r24 = ctx->r16 & 0X1;
    // 0x80243E54: beq         $t8, $zero, L_80243E64
    if (ctx->r24 == 0) {
        // 0x80243E58: sra         $t9, $s0, 1
        ctx->r25 = S32(SIGNED(ctx->r16) >> 1);
            goto L_80243E64;
    }
    // 0x80243E58: sra         $t9, $s0, 1
    ctx->r25 = S32(SIGNED(ctx->r16) >> 1);
    // 0x80243E5C: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x80243E60: nop

L_80243E64:
    // 0x80243E64: mul.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f0.d);
    // 0x80243E68: bne         $t9, $zero, L_80243E50
    if (ctx->r25 != 0) {
        // 0x80243E6C: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_80243E50;
    }
    // 0x80243E6C: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
L_80243E70:
    // 0x80243E70: mul.d       $f0, $f2, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x80243E74: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80243E78: mul.d       $f12, $f0, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = MUL_D(ctx->f0.d, ctx->f0.d);
    // 0x80243E7C: nop

    // 0x80243E80: mul.d       $f2, $f12, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = MUL_D(ctx->f12.d, ctx->f12.d);
    // 0x80243E84: trunc.w.d   $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x80243E88: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x80243E8C: nop

    // 0x80243E90: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x80243E94: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80243E98: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80243E9C: nop

    // 0x80243EA0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80243EA4: ldc1        $f4, 0x59F8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X59F8);
    // 0x80243EA8: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x80243EAC: sub.d       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f2.d - ctx->f6.d;
    // 0x80243EB0: mul.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x80243EB4: trunc.w.d   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x80243EB8: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80243EBC: nop

    // 0x80243EC0: sh          $t7, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r15;
L_80243EC4:
    // 0x80243EC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80243EC8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    // 0x80243ECC: jr          $ra
    // 0x80243ED0: nop

    return;
    // 0x80243ED0: nop

;}
RECOMP_FUNC void func_80235140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80235140: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80235144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235148: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8023514C: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80235150: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80235154: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x80235158: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x8023515C: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80235160: sb          $t0, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r8;
    // 0x80235164: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80235168: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8023516C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80235170: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80235174: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80235178: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023517C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80235180: jal         0x8023F37C
    // 0x80235184: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80235184: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80235188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023518C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80235190: jr          $ra
    // 0x80235194: nop

    return;
    // 0x80235194: nop

;}
RECOMP_FUNC void func_80236D40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80236D40: lbu         $t6, 0x3($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3);
    // 0x80236D44: bne         $t6, $zero, L_80236E24
    if (ctx->r14 != 0) {
        // 0x80236D48: nop
    
            goto L_80236E24;
    }
    // 0x80236D48: nop

    // 0x80236D4C: lh          $t7, 0xE($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XE);
    // 0x80236D50: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80236D54: sb          $t1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r9;
    // 0x80236D58: blez        $t7, L_80236E24
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80236D5C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80236E24;
    }
    // 0x80236D5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80236D60: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80236D64: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80236D68: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
L_80236D6C:
    // 0x80236D6C: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x80236D70: sw          $t9, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r25;
    // 0x80236D74: lbu         $t6, 0xE($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0XE);
    // 0x80236D78: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80236D7C: bnel        $t6, $zero, L_80236E10
    if (ctx->r14 != 0) {
        // 0x80236D80: lh          $t8, 0xE($a0)
        ctx->r24 = MEM_H(ctx->r4, 0XE);
            goto L_80236E10;
    }
    goto skip_0;
    // 0x80236D80: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
    skip_0:
    // 0x80236D84: lw          $t7, 0x0($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X0);
    // 0x80236D88: sb          $t1, 0xE($t9)
    MEM_B(0XE, ctx->r25) = ctx->r9;
    // 0x80236D8C: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x80236D90: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80236D94: lw          $t9, 0x4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4);
    // 0x80236D98: lw          $t7, 0x8($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X8);
    // 0x80236D9C: addu        $t6, $t9, $a1
    ctx->r14 = ADD32(ctx->r25, ctx->r5);
    // 0x80236DA0: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x80236DA4: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x80236DA8: sw          $t8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r24;
    // 0x80236DAC: lbu         $t9, 0x9($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X9);
    // 0x80236DB0: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
    // 0x80236DB4: bnel        $t9, $zero, L_80236E10
    if (ctx->r25 != 0) {
        // 0x80236DB8: lh          $t8, 0xE($a0)
        ctx->r24 = MEM_H(ctx->r4, 0XE);
            goto L_80236E10;
    }
    goto skip_1;
    // 0x80236DB8: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
    skip_1:
    // 0x80236DBC: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x80236DC0: lbu         $a2, 0x8($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X8);
    // 0x80236DC4: sb          $t1, 0x9($t8)
    MEM_B(0X9, ctx->r24) = ctx->r9;
    // 0x80236DC8: addu        $t7, $t6, $a3
    ctx->r15 = ADD32(ctx->r14, ctx->r7);
    // 0x80236DCC: bne         $a2, $zero, L_80236DF4
    if (ctx->r6 != 0) {
        // 0x80236DD0: sw          $t7, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->r15;
            goto L_80236DF4;
    }
    // 0x80236DD0: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x80236DD4: lw          $t8, 0x10($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X10);
    // 0x80236DD8: lw          $a2, 0xC($t0)
    ctx->r6 = MEM_W(ctx->r8, 0XC);
    // 0x80236DDC: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x80236DE0: beq         $a2, $zero, L_80236E0C
    if (ctx->r6 == 0) {
        // 0x80236DE4: sw          $t9, 0x10($t0)
        MEM_W(0X10, ctx->r8) = ctx->r25;
            goto L_80236E0C;
    }
    // 0x80236DE4: sw          $t9, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r25;
    // 0x80236DE8: addu        $t6, $a2, $a1
    ctx->r14 = ADD32(ctx->r6, ctx->r5);
    // 0x80236DEC: b           L_80236E0C
    // 0x80236DF0: sw          $t6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r14;
        goto L_80236E0C;
    // 0x80236DF0: sw          $t6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r14;
L_80236DF4:
    // 0x80236DF4: bnel        $t2, $a2, L_80236E10
    if (ctx->r10 != ctx->r6) {
        // 0x80236DF8: lh          $t8, 0xE($a0)
        ctx->r24 = MEM_H(ctx->r4, 0XE);
            goto L_80236E10;
    }
    goto skip_2;
    // 0x80236DF8: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
    skip_2:
    // 0x80236DFC: lw          $a2, 0xC($t0)
    ctx->r6 = MEM_W(ctx->r8, 0XC);
    // 0x80236E00: beq         $a2, $zero, L_80236E0C
    if (ctx->r6 == 0) {
        // 0x80236E04: addu        $t7, $a2, $a1
        ctx->r15 = ADD32(ctx->r6, ctx->r5);
            goto L_80236E0C;
    }
    // 0x80236E04: addu        $t7, $a2, $a1
    ctx->r15 = ADD32(ctx->r6, ctx->r5);
    // 0x80236E08: sw          $t7, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r15;
L_80236E0C:
    // 0x80236E0C: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
L_80236E10:
    // 0x80236E10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236E14: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80236E18: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80236E1C: bnel        $at, $zero, L_80236D6C
    if (ctx->r1 != 0) {
        // 0x80236E20: lw          $t8, 0x10($v1)
        ctx->r24 = MEM_W(ctx->r3, 0X10);
            goto L_80236D6C;
    }
    goto skip_3;
    // 0x80236E20: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    skip_3:
L_80236E24:
    // 0x80236E24: jr          $ra
    // 0x80236E28: nop

    return;
    // 0x80236E28: nop

    // 0x80236E2C: jr          $ra
    // 0x80236E30: nop

    return;
    // 0x80236E30: nop

;}
RECOMP_FUNC void func_80241F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80241F44: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80241F48: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80241F4C: jr          $ra
    // 0x80241F50: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    return;
    // 0x80241F50: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_8021F4E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021F4E4: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8021F4E8: lh          $t6, 0x1B5E($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X1B5E);
    // 0x8021F4EC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8021F4F0: jr          $ra
    // 0x8021F4F4: sh          $t6, 0x1B62($at)
    MEM_H(0X1B62, ctx->r1) = ctx->r14;
    return;
    // 0x8021F4F4: sh          $t6, 0x1B62($at)
    MEM_H(0X1B62, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80237720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237720: lui         $t6, 0xA450
    ctx->r14 = S32(0XA450 << 16);
    // 0x80237724: jr          $ra
    // 0x80237728: lw          $v0, 0x4($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X4);
    return;
    // 0x80237728: lw          $v0, 0x4($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X4);
;}
RECOMP_FUNC void func_80203AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80203AA8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80203AAC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80203AB0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80203AB4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80203AB8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80203ABC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80203AC0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80203AC4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80203AC8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80203ACC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80203AD0: lui         $s4, 0x8025
    ctx->r20 = S32(0X8025 << 16);
    // 0x80203AD4: lui         $s6, 0x8025
    ctx->r22 = S32(0X8025 << 16);
    // 0x80203AD8: lui         $s7, 0x8025
    ctx->r23 = S32(0X8025 << 16);
    // 0x80203ADC: lui         $fp, 0x8025
    ctx->r30 = S32(0X8025 << 16);
    // 0x80203AE0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80203AE4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80203AE8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80203AEC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80203AF0: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80203AF4: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x80203AF8: addiu       $fp, $fp, 0x26F0
    ctx->r30 = ADD32(ctx->r30, 0X26F0);
    // 0x80203AFC: addiu       $s7, $s7, 0x6EA0
    ctx->r23 = ADD32(ctx->r23, 0X6EA0);
    // 0x80203B00: addiu       $s6, $s6, 0x26C0
    ctx->r22 = ADD32(ctx->r22, 0X26C0);
    // 0x80203B04: addiu       $s4, $s4, 0x7390
    ctx->r20 = ADD32(ctx->r20, 0X7390);
    // 0x80203B08: addiu       $s1, $zero, 0x24
    ctx->r17 = ADD32(0, 0X24);
    // 0x80203B0C: addiu       $s2, $sp, 0x48
    ctx->r18 = ADD32(ctx->r29, 0X48);
    // 0x80203B10: addiu       $s3, $zero, -0x4
    ctx->r19 = ADD32(0, -0X4);
    // 0x80203B14: addiu       $s5, $zero, 0x54
    ctx->r21 = ADD32(0, 0X54);
L_80203B18:
    // 0x80203B18: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
L_80203B1C:
    // 0x80203B1C: and         $s0, $t6, $s3
    ctx->r16 = ctx->r14 & ctx->r19;
    // 0x80203B20: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80203B24: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80203B28: beq         $a1, $s1, L_80203BE8
    if (ctx->r5 == ctx->r17) {
        // 0x80203B2C: slti        $at, $a1, 0x24
        ctx->r1 = SIGNED(ctx->r5) < 0X24 ? 1 : 0;
            goto L_80203BE8;
    }
    // 0x80203B2C: slti        $at, $a1, 0x24
    ctx->r1 = SIGNED(ctx->r5) < 0X24 ? 1 : 0;
    // 0x80203B30: beq         $at, $zero, L_80203BE8
    if (ctx->r1 == 0) {
        // 0x80203B34: slti        $at, $a1, 0x5
        ctx->r1 = SIGNED(ctx->r5) < 0X5 ? 1 : 0;
            goto L_80203BE8;
    }
    // 0x80203B34: slti        $at, $a1, 0x5
    ctx->r1 = SIGNED(ctx->r5) < 0X5 ? 1 : 0;
    // 0x80203B38: beq         $at, $zero, L_80203B94
    if (ctx->r1 == 0) {
        // 0x80203B3C: nop
    
            goto L_80203B94;
    }
    // 0x80203B3C: nop

    // 0x80203B40: multu       $a1, $s5
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80203B44: mflo        $t7
    ctx->r15 = lo;
    // 0x80203B48: addu        $v0, $s4, $t7
    ctx->r2 = ADD32(ctx->r20, ctx->r15);
    // 0x80203B4C: lw          $v1, 0x50($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X50);
    // 0x80203B50: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x80203B54: beq         $at, $zero, L_80203B84
    if (ctx->r1 == 0) {
        // 0x80203B58: nop
    
            goto L_80203B84;
    }
    // 0x80203B58: nop

    // 0x80203B5C: lw          $at, 0x0($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X0);
    // 0x80203B60: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x80203B64: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80203B68: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x80203B6C: lw          $t1, 0x4($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X4);
    // 0x80203B70: sw          $t1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r9;
    // 0x80203B74: lw          $t2, 0x50($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X50);
    // 0x80203B78: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80203B7C: b           L_80203B18
    // 0x80203B80: sw          $t3, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r11;
        goto L_80203B18;
    // 0x80203B80: sw          $t3, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r11;
L_80203B84:
    // 0x80203B84: jal         0x80231A24
    // 0x80203B88: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80203B88: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_0:
    // 0x80203B8C: b           L_80203B1C
    // 0x80203B90: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
        goto L_80203B1C;
    // 0x80203B90: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
L_80203B94:
    // 0x80203B94: multu       $a1, $s1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80203B98: mflo        $t4
    ctx->r12 = lo;
    // 0x80203B9C: addu        $v0, $s7, $t4
    ctx->r2 = ADD32(ctx->r23, ctx->r12);
    // 0x80203BA0: lw          $v1, 0x20($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X20);
    // 0x80203BA4: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80203BA8: beq         $at, $zero, L_80203BD8
    if (ctx->r1 == 0) {
        // 0x80203BAC: nop
    
            goto L_80203BD8;
    }
    // 0x80203BAC: nop

    // 0x80203BB0: lw          $at, 0x0($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X0);
    // 0x80203BB4: sll         $t5, $v1, 3
    ctx->r13 = S32(ctx->r3 << 3);
    // 0x80203BB8: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x80203BBC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80203BC0: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    // 0x80203BC4: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x80203BC8: lw          $t0, 0x20($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X20);
    // 0x80203BCC: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x80203BD0: b           L_80203B18
    // 0x80203BD4: sw          $t9, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r25;
        goto L_80203B18;
    // 0x80203BD4: sw          $t9, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r25;
L_80203BD8:
    // 0x80203BD8: jal         0x80231A24
    // 0x80203BDC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x80203BDC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_1:
    // 0x80203BE0: b           L_80203B1C
    // 0x80203BE4: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
        goto L_80203B1C;
    // 0x80203BE4: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
L_80203BE8:
    // 0x80203BE8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80203BEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80203BF0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80203BF4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80203BF8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80203BFC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80203C00: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80203C04: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80203C08: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80203C0C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80203C10: jr          $ra
    // 0x80203C14: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80203C14: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_802129F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802129F4: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x802129F8: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x802129FC: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80212A00: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80212A04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80212A08: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80212A0C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80212A10: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80212A14: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80212A18: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x80212A1C: bne         $a1, $at, L_80212A38
    if (ctx->r5 != ctx->r1) {
        // 0x80212A20: sw          $a3, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r7;
            goto L_80212A38;
    }
    // 0x80212A20: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x80212A24: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80212A28: jal         0x80231A24
    // 0x80212A2C: addiu       $a0, $a0, 0x2E10
    ctx->r4 = ADD32(ctx->r4, 0X2E10);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80212A2C: addiu       $a0, $a0, 0x2E10
    ctx->r4 = ADD32(ctx->r4, 0X2E10);
    after_0:
    // 0x80212A30: b           L_80212C6C
    // 0x80212A34: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80212C6C;
    // 0x80212A34: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80212A38:
    // 0x80212A38: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80212A3C: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x80212A40: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x80212A44: srl         $t2, $s2, 22
    ctx->r10 = S32(U32(ctx->r18) >> 22);
    // 0x80212A48: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80212A4C: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x80212A50: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80212A54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80212A58: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80212A5C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80212A60: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80212A64: bne         $a0, $zero, L_80212A84
    if (ctx->r4 != 0) {
        // 0x80212A68: subu        $t4, $t4, $t3
        ctx->r12 = SUB32(ctx->r12, ctx->r11);
            goto L_80212A84;
    }
    // 0x80212A68: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80212A6C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80212A70: addiu       $a0, $a0, 0x2E34
    ctx->r4 = ADD32(ctx->r4, 0X2E34);
    // 0x80212A74: jal         0x80231A24
    // 0x80212A78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x80212A78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80212A7C: b           L_80212C6C
    // 0x80212A80: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80212C6C;
    // 0x80212A80: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80212A84:
    // 0x80212A84: lw          $t1, 0x28($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X28);
    // 0x80212A88: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80212A8C: srl         $t6, $s2, 12
    ctx->r14 = S32(U32(ctx->r18) >> 12);
    // 0x80212A90: addu        $t0, $t1, $t4
    ctx->r8 = ADD32(ctx->r9, ctx->r12);
    // 0x80212A94: lw          $s1, 0x40($t0)
    ctx->r17 = MEM_W(ctx->r8, 0X40);
    // 0x80212A98: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x80212A9C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80212AA0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80212AA4: lw          $t5, 0x8($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X8);
    // 0x80212AA8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80212AAC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80212AB0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80212AB4: addu        $v1, $t5, $t8
    ctx->r3 = ADD32(ctx->r13, ctx->r24);
    // 0x80212AB8: lw          $t9, 0x10($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X10);
    // 0x80212ABC: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x80212AC0: andi        $t2, $s2, 0xFFF
    ctx->r10 = ctx->r18 & 0XFFF;
    // 0x80212AC4: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x80212AC8: addiu       $t8, $sp, 0x58
    ctx->r24 = ADD32(ctx->r29, 0X58);
    // 0x80212ACC: addiu       $t5, $sp, 0x5A
    ctx->r13 = ADD32(ctx->r29, 0X5A);
    // 0x80212AD0: addiu       $t7, $sp, 0x5C
    ctx->r15 = ADD32(ctx->r29, 0X5C);
    // 0x80212AD4: addiu       $t6, $sp, 0x60
    ctx->r14 = ADD32(ctx->r29, 0X60);
    // 0x80212AD8: addiu       $t4, $sp, 0x64
    ctx->r12 = ADD32(ctx->r29, 0X64);
    // 0x80212ADC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80212AE0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80212AE4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80212AE8: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80212AEC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80212AF0: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x80212AF4: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x80212AF8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80212AFC: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    // 0x80212B00: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    // 0x80212B04: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80212B08: addu        $s3, $t9, $t3
    ctx->r19 = ADD32(ctx->r25, ctx->r11);
    // 0x80212B0C: jal         0x802160EC
    // 0x80212B10: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    func_802160EC(rdram, ctx);
        goto after_2;
    // 0x80212B10: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    after_2:
    // 0x80212B14: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80212B18: lwc1        $f6, 0x2C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x80212B1C: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80212B20: lw          $s0, 0x94($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X94);
    // 0x80212B24: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80212B28: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80212B2C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x80212B30: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x80212B34: lwc1        $f18, 0x2C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x80212B38: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80212B3C: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x80212B40: lwc1        $f8, 0x2C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x80212B44: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80212B48: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x80212B4C: lhu         $a3, 0x4($s3)
    ctx->r7 = MEM_HU(ctx->r19, 0X4);
    // 0x80212B50: lhu         $a2, 0x2($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X2);
    // 0x80212B54: lhu         $a1, 0x0($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X0);
    // 0x80212B58: jal         0x80212C84
    // 0x80212B5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80212C84(rdram, ctx);
        goto after_3;
    // 0x80212B5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
    // 0x80212B60: bne         $v0, $zero, L_80212BA8
    if (ctx->r2 != 0) {
        // 0x80212B64: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80212BA8;
    }
    // 0x80212B64: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80212B68: lwc1        $f18, 0x88($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80212B6C: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80212B70: addiu       $a0, $a0, 0x2E64
    ctx->r4 = ADD32(ctx->r4, 0X2E64);
    // 0x80212B74: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80212B78: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80212B7C: sdc1        $f4, 0x10($sp)
    CHECK_FR(ctx, 4);
    SD(ctx->f4.u64, 0X10, ctx->r29);
    // 0x80212B80: sdc1        $f8, 0x18($sp)
    CHECK_FR(ctx, 8);
    SD(ctx->f8.u64, 0X18, ctx->r29);
    // 0x80212B84: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x80212B88: jal         0x80231A24
    // 0x80212B8C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_80231A24(rdram, ctx);
        goto after_4;
    // 0x80212B8C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_4:
    // 0x80212B90: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80212B94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80212B98: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80212B9C: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
    // 0x80212BA0: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    // 0x80212BA4: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
L_80212BA8:
    // 0x80212BA8: lhu         $t9, 0x0($s3)
    ctx->r25 = MEM_HU(ctx->r19, 0X0);
    // 0x80212BAC: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x80212BB0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80212BB4: sll         $t3, $t9, 4
    ctx->r11 = S32(ctx->r25 << 4);
    // 0x80212BB8: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x80212BBC: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80212BC0: lh          $t1, 0x0($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X0);
    // 0x80212BC4: lh          $t4, 0x2($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X2);
    // 0x80212BC8: lh          $t6, 0x4($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X4);
    // 0x80212BCC: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x80212BD0: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80212BD4: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80212BD8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80212BDC: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80212BE0: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80212BE4: bc1t        L_80212C44
    if (c1cs) {
        // 0x80212BE8: cvt.s.w     $f14, $f6
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80212C44;
    }
    // 0x80212BE8: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80212BEC: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80212BF0: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80212BF4: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80212BF8: sub.s       $f18, $f2, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x80212BFC: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80212C00: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x80212C04: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80212C08: sub.s       $f8, $f12, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x80212C0C: mul.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80212C10: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x80212C14: div.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80212C18: add.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x80212C1C: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x80212C20: lwc1        $f18, 0x2C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x80212C24: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80212C28: div.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80212C2C: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x80212C30: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x80212C34: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80212C38: lwc1        $f8, 0x38($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X38);
    // 0x80212C3C: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80212C40: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
L_80212C44:
    // 0x80212C44: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    // 0x80212C48: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80212C4C: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x80212C50: lbu         $v0, 0x48($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X48);
    // 0x80212C54: beq         $v0, $zero, L_80212C68
    if (ctx->r2 == 0) {
        // 0x80212C58: negu        $a0, $v0
        ctx->r4 = SUB32(0, ctx->r2);
            goto L_80212C68;
    }
    // 0x80212C58: negu        $a0, $v0
    ctx->r4 = SUB32(0, ctx->r2);
    // 0x80212C5C: sll         $t8, $a0, 16
    ctx->r24 = S32(ctx->r4 << 16);
    // 0x80212C60: jal         0x80218C74
    // 0x80212C64: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
    func_80218C74(rdram, ctx);
        goto after_5;
    // 0x80212C64: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
    after_5:
L_80212C68:
    // 0x80212C68: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80212C6C:
    // 0x80212C6C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80212C70: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80212C74: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80212C78: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80212C7C: jr          $ra
    // 0x80212C80: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80212C80: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80213BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80213BA8: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x80213BAC: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80213BB0: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x80213BB4: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x80213BB8: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x80213BBC: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x80213BC0: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x80213BC4: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x80213BC8: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x80213BCC: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x80213BD0: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x80213BD4: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x80213BD8: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x80213BDC: sdc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X50, ctx->r29);
    // 0x80213BE0: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x80213BE4: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x80213BE8: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x80213BEC: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x80213BF0: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x80213BF4: sw          $a0, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r4;
    // 0x80213BF8: sw          $a3, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r7;
    // 0x80213BFC: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80213C00: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80213C04: mtc1        $a1, $f26
    ctx->f26.u32l = ctx->r5;
    // 0x80213C08: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80213C0C: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80213C10: mtc1        $a2, $f28
    ctx->f28.u32l = ctx->r6;
    // 0x80213C14: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80213C18: bne         $t0, $zero, L_80213C34
    if (ctx->r8 != 0) {
        // 0x80213C1C: sw          $t0, 0xB4($sp)
        MEM_W(0XB4, ctx->r29) = ctx->r8;
            goto L_80213C34;
    }
    // 0x80213C1C: sw          $t0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r8;
    // 0x80213C20: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80213C24: jal         0x80231A24
    // 0x80213C28: addiu       $a0, $a0, 0x2F8C
    ctx->r4 = ADD32(ctx->r4, 0X2F8C);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80213C28: addiu       $a0, $a0, 0x2F8C
    ctx->r4 = ADD32(ctx->r4, 0X2F8C);
    after_0:
    // 0x80213C2C: b           L_80214180
    // 0x80213C30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80214180;
    // 0x80213C30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80213C34:
    // 0x80213C34: lwc1        $f22, 0x110($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80213C38: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x80213C3C: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x80213C40: add.s       $f16, $f26, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = ctx->f26.fl + ctx->f22.fl;
    // 0x80213C44: lwc1        $f12, 0x0($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80213C48: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x80213C4C: nop

    // 0x80213C50: bc1fl       L_80213C64
    if (!c1cs) {
        // 0x80213C54: sub.s       $f18, $f26, $f22
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f26.fl - ctx->f22.fl;
            goto L_80213C64;
    }
    goto skip_0;
    // 0x80213C54: sub.s       $f18, $f26, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f26.fl - ctx->f22.fl;
    skip_0:
    // 0x80213C58: b           L_80214180
    // 0x80213C5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80214180;
    // 0x80213C5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213C60: sub.s       $f18, $f26, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f26.fl - ctx->f22.fl;
L_80213C64:
    // 0x80213C64: lwc1        $f4, 0xC($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0XC);
    // 0x80213C68: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
    // 0x80213C6C: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x80213C70: nop

    // 0x80213C74: bc1fl       L_80213C88
    if (!c1cs) {
        // 0x80213C78: add.s       $f20, $f28, $f22
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f28.fl + ctx->f22.fl;
            goto L_80213C88;
    }
    goto skip_1;
    // 0x80213C78: add.s       $f20, $f28, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f28.fl + ctx->f22.fl;
    skip_1:
    // 0x80213C7C: b           L_80214180
    // 0x80213C80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80214180;
    // 0x80213C80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213C84: add.s       $f20, $f28, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f28.fl + ctx->f22.fl;
L_80213C88:
    // 0x80213C88: lwc1        $f14, 0x4($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80213C8C: lw          $t5, 0xB4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB4);
    // 0x80213C90: c.lt.s      $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f20.fl < ctx->f14.fl;
    // 0x80213C94: nop

    // 0x80213C98: bc1fl       L_80213CAC
    if (!c1cs) {
        // 0x80213C9C: sub.s       $f24, $f28, $f22
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = ctx->f28.fl - ctx->f22.fl;
            goto L_80213CAC;
    }
    goto skip_2;
    // 0x80213C9C: sub.s       $f24, $f28, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = ctx->f28.fl - ctx->f22.fl;
    skip_2:
    // 0x80213CA0: b           L_80214180
    // 0x80213CA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80214180;
    // 0x80213CA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213CA8: sub.s       $f24, $f28, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = ctx->f28.fl - ctx->f22.fl;
L_80213CAC:
    // 0x80213CAC: lwc1        $f6, 0x10($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X10);
    // 0x80213CB0: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x80213CB4: lui         $s3, 0x8026
    ctx->r19 = S32(0X8026 << 16);
    // 0x80213CB8: c.lt.s      $f6, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f6.fl < ctx->f24.fl;
    // 0x80213CBC: nop

    // 0x80213CC0: bc1fl       L_80213CD4
    if (!c1cs) {
        // 0x80213CC4: sub.s       $f8, $f18, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f12.fl;
            goto L_80213CD4;
    }
    goto skip_3;
    // 0x80213CC4: sub.s       $f8, $f18, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f12.fl;
    skip_3:
    // 0x80213CC8: b           L_80214180
    // 0x80213CCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80214180;
    // 0x80213CCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213CD0: sub.s       $f8, $f18, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f12.fl;
L_80213CD4:
    // 0x80213CD4: lwc1        $f0, 0x1C($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80213CD8: lwc1        $f2, 0x20($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, 0X20);
    // 0x80213CDC: sub.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x80213CE0: lui         $s6, 0x8026
    ctx->r22 = S32(0X8026 << 16);
    // 0x80213CE4: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x80213CE8: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80213CEC: addiu       $s6, $s6, -0x3C5C
    ctx->r22 = ADD32(ctx->r22, -0X3C5C);
    // 0x80213CF0: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80213CF4: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80213CF8: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x80213CFC: sub.s       $f4, $f24, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f24.fl - ctx->f14.fl;
    // 0x80213D00: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80213D04: div.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80213D08: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80213D0C: sub.s       $f10, $f20, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f14.fl;
    // 0x80213D10: div.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80213D14: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80213D18: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x80213D1C: nop

    // 0x80213D20: sw          $t0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r8;
    // 0x80213D24: lw          $t4, 0xE8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE8);
    // 0x80213D28: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80213D2C: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x80213D30: bgez        $v0, L_80213D3C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80213D34: sw          $t2, 0xE4($sp)
        MEM_W(0XE4, ctx->r29) = ctx->r10;
            goto L_80213D3C;
    }
    // 0x80213D34: sw          $t2, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r10;
    // 0x80213D38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80213D3C:
    // 0x80213D3C: lbu         $v1, 0x18($t3)
    ctx->r3 = MEM_BU(ctx->r11, 0X18);
    // 0x80213D40: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80213D44: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80213D48: beq         $at, $zero, L_80213D54
    if (ctx->r1 == 0) {
        // 0x80213D4C: nop
    
            goto L_80213D54;
    }
    // 0x80213D4C: nop

    // 0x80213D50: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_80213D54:
    // 0x80213D54: bgez        $t4, L_80213D60
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80213D58: addiu       $t6, $a0, 0x1
        ctx->r14 = ADD32(ctx->r4, 0X1);
            goto L_80213D60;
    }
    // 0x80213D58: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x80213D5C: sw          $zero, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = 0;
L_80213D60:
    // 0x80213D60: lw          $t5, 0xB4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB4);
    // 0x80213D64: lw          $t7, 0xE4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE4);
    // 0x80213D68: lbu         $v1, 0x19($t5)
    ctx->r3 = MEM_BU(ctx->r13, 0X19);
    // 0x80213D6C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80213D70: slt         $at, $v1, $t7
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80213D74: beql        $at, $zero, L_80213D84
    if (ctx->r1 == 0) {
        // 0x80213D78: lw          $t8, 0xB4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XB4);
            goto L_80213D84;
    }
    goto skip_4;
    // 0x80213D78: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    skip_4:
    // 0x80213D7C: sw          $v1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r3;
    // 0x80213D80: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
L_80213D84:
    // 0x80213D84: addiu       $s3, $s3, -0x3C68
    ctx->r19 = ADD32(ctx->r19, -0X3C68);
    // 0x80213D88: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    // 0x80213D8C: lwc1        $f30, 0x0($t8)
    ctx->f30.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80213D90: lwc1        $f8, 0x1C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80213D94: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80213D98: sw          $v0, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r2;
    // 0x80213D9C: add.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f30.fl;
    // 0x80213DA0: bne         $at, $zero, L_80214148
    if (ctx->r1 != 0) {
        // 0x80213DA4: swc1        $f10, 0xC8($sp)
        MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
            goto L_80214148;
    }
    // 0x80213DA4: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
    // 0x80213DA8: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x80213DAC: sw          $t6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r14;
    // 0x80213DB0: swc1        $f26, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f26.u32l;
    // 0x80213DB4: swc1        $f28, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f28.u32l;
L_80213DB8:
    // 0x80213DB8: lw          $t9, 0xB4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB4);
    // 0x80213DBC: lw          $t0, 0xE8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XE8);
    // 0x80213DC0: lw          $t1, 0xE4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE4);
    // 0x80213DC4: lwc1        $f26, 0x4($t9)
    ctx->f26.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80213DC8: lwc1        $f4, 0x20($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X20);
    // 0x80213DCC: slt         $at, $t1, $t0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80213DD0: sw          $t0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r8;
    // 0x80213DD4: bne         $at, $zero, L_80214134
    if (ctx->r1 != 0) {
        // 0x80213DD8: add.s       $f28, $f4, $f26
        CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f28.fl = ctx->f4.fl + ctx->f26.fl;
            goto L_80214134;
    }
    // 0x80213DD8: add.s       $f28, $f4, $f26
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f28.fl = ctx->f4.fl + ctx->f26.fl;
    // 0x80213DDC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80213DE0: sw          $t2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r10;
L_80213DE4:
    // 0x80213DE4: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x80213DE8: lw          $t5, 0xF8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XF8);
    // 0x80213DEC: lw          $t8, 0xFC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XFC);
    // 0x80213DF0: lbu         $t4, 0x18($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X18);
    // 0x80213DF4: lw          $t6, 0x28($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X28);
    // 0x80213DF8: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80213DFC: mflo        $t7
    ctx->r15 = lo;
    // 0x80213E00: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80213E04: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80213E08: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x80213E0C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80213E10: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x80213E14: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80213E18: addu        $s4, $t6, $t9
    ctx->r20 = ADD32(ctx->r14, ctx->r25);
    // 0x80213E1C: beql        $s4, $zero, L_80214124
    if (ctx->r20 == 0) {
        // 0x80213E20: lw          $t2, 0xF8($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XF8);
            goto L_80214124;
    }
    goto skip_5;
    // 0x80213E20: lw          $t2, 0xF8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF8);
    skip_5:
    // 0x80213E24: lw          $fp, 0x40($s4)
    ctx->r30 = MEM_W(ctx->r20, 0X40);
    // 0x80213E28: lwc1        $f6, 0x104($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X104);
    // 0x80213E2C: beql        $fp, $zero, L_80214124
    if (ctx->r30 == 0) {
        // 0x80213E30: lw          $t2, 0xF8($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XF8);
            goto L_80214124;
    }
    goto skip_6;
    // 0x80213E30: lw          $t2, 0xF8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF8);
    skip_6:
    // 0x80213E34: lwc1        $f8, 0x30($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X30);
    // 0x80213E38: lwc1        $f4, 0x108($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80213E3C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80213E40: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80213E44: addiu       $a1, $sp, 0xD8
    ctx->r5 = ADD32(ctx->r29, 0XD8);
    // 0x80213E48: addiu       $a2, $sp, 0xD4
    ctx->r6 = ADD32(ctx->r29, 0XD4);
    // 0x80213E4C: swc1        $f10, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f10.u32l;
    // 0x80213E50: lwc1        $f6, 0x34($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X34);
    // 0x80213E54: lwc1        $f10, 0x10C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x80213E58: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80213E5C: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
    // 0x80213E60: lbu         $v0, 0x48($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X48);
    // 0x80213E64: lwc1        $f4, 0x38($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X38);
    // 0x80213E68: beq         $v0, $zero, L_80213E80
    if (ctx->r2 == 0) {
        // 0x80213E6C: sub.s       $f20, $f10, $f4
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f4.fl;
            goto L_80213E80;
    }
    // 0x80213E6C: sub.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80213E70: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80213E74: sra         $t0, $a0, 16
    ctx->r8 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80213E78: jal         0x80218C74
    // 0x80213E7C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_80218C74(rdram, ctx);
        goto after_1;
    // 0x80213E7C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
L_80213E80:
    // 0x80213E80: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80213E84: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80213E88: mfc1        $a3, $f30
    ctx->r7 = (int32_t)ctx->f30.u32l;
    // 0x80213E8C: lwc1        $f12, 0xD8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x80213E90: lwc1        $f14, 0xD4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80213E94: swc1        $f26, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f26.u32l;
    // 0x80213E98: swc1        $f28, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f28.u32l;
    // 0x80213E9C: jal         0x80218D34
    // 0x80213EA0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80218D34(rdram, ctx);
        goto after_2;
    // 0x80213EA0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80213EA4: lhu         $v1, 0x14($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X14);
    // 0x80213EA8: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x80213EAC: blezl       $v1, L_80214124
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80213EB0: lw          $t2, 0xF8($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XF8);
            goto L_80214124;
    }
    goto skip_7;
    // 0x80213EB0: lw          $t2, 0xF8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF8);
    skip_7:
    // 0x80213EB4: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x80213EB8: lw          $t1, 0x10($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X10);
L_80213EBC:
    // 0x80213EBC: sll         $t2, $s7, 5
    ctx->r10 = S32(ctx->r23 << 5);
    // 0x80213EC0: lw          $t5, 0x98($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X98);
    // 0x80213EC4: addu        $s2, $t1, $t2
    ctx->r18 = ADD32(ctx->r9, ctx->r10);
    // 0x80213EC8: lhu         $t4, 0x18($s2)
    ctx->r12 = MEM_HU(ctx->r18, 0X18);
    // 0x80213ECC: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x80213ED0: and         $t7, $t4, $t5
    ctx->r15 = ctx->r12 & ctx->r13;
    // 0x80213ED4: beql        $t7, $zero, L_80214114
    if (ctx->r15 == 0) {
        // 0x80213ED8: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_80214114;
    }
    goto skip_8;
    // 0x80213ED8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    skip_8:
    // 0x80213EDC: lw          $t8, -0x18F0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X18F0);
    // 0x80213EE0: lhu         $t6, 0x0($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X0);
    // 0x80213EE4: lwc1        $f8, 0xC($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0XC);
    // 0x80213EE8: lw          $t3, 0x1C($t8)
    ctx->r11 = MEM_W(ctx->r24, 0X1C);
    // 0x80213EEC: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80213EF0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80213EF4: addu        $t0, $t3, $t9
    ctx->r8 = ADD32(ctx->r11, ctx->r25);
    // 0x80213EF8: lw          $s5, 0x0($t0)
    ctx->r21 = MEM_W(ctx->r8, 0X0);
    // 0x80213EFC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80213F00: lwc1        $f10, 0x10($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X10);
    // 0x80213F04: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x80213F08: lwc1        $f12, 0xD8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x80213F0C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80213F10: lwc1        $f4, 0x14($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X14);
    // 0x80213F14: lwc1        $f14, 0xD4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80213F18: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80213F1C: lwc1        $f6, 0x1C($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X1C);
    // 0x80213F20: jal         0x802164C8
    // 0x80213F24: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_802164C8(rdram, ctx);
        goto after_3;
    // 0x80213F24: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80213F28: bnel        $v0, $zero, L_80213F3C
    if (ctx->r2 != 0) {
        // 0x80213F2C: lhu         $t1, 0x4A($s4)
        ctx->r9 = MEM_HU(ctx->r20, 0X4A);
            goto L_80213F3C;
    }
    goto skip_9;
    // 0x80213F2C: lhu         $t1, 0x4A($s4)
    ctx->r9 = MEM_HU(ctx->r20, 0X4A);
    skip_9:
    // 0x80213F30: b           L_80214110
    // 0x80213F34: lhu         $v1, 0x14($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X14);
        goto L_80214110;
    // 0x80213F34: lhu         $v1, 0x14($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X14);
    // 0x80213F38: lhu         $t1, 0x4A($s4)
    ctx->r9 = MEM_HU(ctx->r20, 0X4A);
L_80213F3C:
    // 0x80213F3C: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80213F40: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x80213F44: sll         $t2, $t1, 12
    ctx->r10 = S32(ctx->r9 << 12);
    // 0x80213F48: or          $t4, $t2, $s7
    ctx->r12 = ctx->r10 | ctx->r23;
    // 0x80213F4C: sw          $t4, -0x3C6C($at)
    MEM_W(-0X3C6C, ctx->r1) = ctx->r12;
    // 0x80213F50: lbu         $t5, 0x11($s5)
    ctx->r13 = MEM_BU(ctx->r21, 0X11);
    // 0x80213F54: lw          $a3, 0x0($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X0);
    // 0x80213F58: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x80213F5C: andi        $t7, $t5, 0x6
    ctx->r15 = ctx->r13 & 0X6;
    // 0x80213F60: beq         $t7, $zero, L_80213F90
    if (ctx->r15 == 0) {
        // 0x80213F64: or          $s1, $a3, $zero
        ctx->r17 = ctx->r7 | 0;
            goto L_80213F90;
    }
    // 0x80213F64: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x80213F68: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x80213F6C: lwc1        $f8, 0x2C($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0X2C);
    // 0x80213F70: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80213F74: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x80213F78: lwc1        $f12, 0xD8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x80213F7C: lwc1        $f14, 0xD4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80213F80: jal         0x802168C4
    // 0x80213F84: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_802168C4(rdram, ctx);
        goto after_4;
    // 0x80213F84: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x80213F88: b           L_802140B4
    // 0x80213F8C: lbu         $t6, 0x48($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X48);
        goto L_802140B4;
    // 0x80213F8C: lbu         $t6, 0x48($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X48);
L_80213F90:
    // 0x80213F90: lw          $t6, -0x3C64($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3C64);
    // 0x80213F94: lw          $t8, -0x3C6C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C6C);
    // 0x80213F98: sll         $t3, $a3, 2
    ctx->r11 = S32(ctx->r7 << 2);
    // 0x80213F9C: addu        $t9, $t6, $t3
    ctx->r25 = ADD32(ctx->r14, ctx->r11);
    // 0x80213FA0: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80213FA4: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x80213FA8: lwc1        $f4, 0xC($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XC);
    // 0x80213FAC: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x80213FB0: lw          $t2, 0x0($s6)
    ctx->r10 = MEM_W(ctx->r22, 0X0);
    // 0x80213FB4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80213FB8: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80213FBC: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80213FC0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80213FC4: addu        $s0, $t1, $t2
    ctx->r16 = ADD32(ctx->r9, ctx->r10);
    // 0x80213FC8: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x80213FCC: lwc1        $f10, 0x10($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X10);
    // 0x80213FD0: lwc1        $f8, 0xD4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80213FD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213FD8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80213FDC: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80213FE0: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x80213FE4: lwc1        $f6, 0x14($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X14);
    // 0x80213FE8: sub.s       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f20.fl - ctx->f6.fl;
    // 0x80213FEC: jal         0x80234D30
    // 0x80213FF0: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    func_80234D30(rdram, ctx);
        goto after_5;
    // 0x80213FF0: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    after_5:
    // 0x80213FF4: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80213FF8: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80213FFC: lwc1        $f14, 0x8($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80214000: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80214004: nop

    // 0x80214008: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021400C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80214010: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80214014: jal         0x8022AA40
    // 0x80214018: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_8022AA40(rdram, ctx);
        goto after_6;
    // 0x80214018: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_6:
    // 0x8021401C: lwc1        $f10, 0x1C($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X1C);
    // 0x80214020: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80214024: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80214028: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8021402C: lui         $t3, 0x8026
    ctx->r11 = S32(0X8026 << 16);
    // 0x80214030: lui         $t4, 0x8026
    ctx->r12 = S32(0X8026 << 16);
    // 0x80214034: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    // 0x80214038: div.s       $f2, $f4, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f22.fl);
    // 0x8021403C: addiu       $a1, $a1, 0x2FBC
    ctx->r5 = ADD32(ctx->r5, 0X2FBC);
    // 0x80214040: c.lt.s      $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f2.fl < ctx->f24.fl;
    // 0x80214044: nop

    // 0x80214048: bc1fl       L_8021406C
    if (!c1cs) {
        // 0x8021404C: lw          $t8, 0x0($s3)
        ctx->r24 = MEM_W(ctx->r19, 0X0);
            goto L_8021406C;
    }
    goto skip_10;
    // 0x8021404C: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    skip_10:
    // 0x80214050: lw          $t5, 0x0($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X0);
    // 0x80214054: lw          $t4, -0x3C60($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3C60);
    // 0x80214058: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8021405C: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x80214060: b           L_8021407C
    // 0x80214064: swc1        $f2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f2.u32l;
        goto L_8021407C;
    // 0x80214064: swc1        $f2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f2.u32l;
    // 0x80214068: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
L_8021406C:
    // 0x8021406C: lw          $t3, -0x3C60($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3C60);
    // 0x80214070: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80214074: addu        $t0, $t3, $t9
    ctx->r8 = ADD32(ctx->r11, ctx->r25);
    // 0x80214078: swc1        $f24, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f24.u32l;
L_8021407C:
    // 0x8021407C: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x80214080: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x80214084: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80214088: sw          $t2, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r10;
    // 0x8021408C: lhu         $t5, 0xBD8($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0XBD8);
    // 0x80214090: slt         $at, $t2, $t5
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80214094: bnel        $at, $zero, L_802140B4
    if (ctx->r1 != 0) {
        // 0x80214098: lbu         $t6, 0x48($s4)
        ctx->r14 = MEM_BU(ctx->r20, 0X48);
            goto L_802140B4;
    }
    goto skip_11;
    // 0x80214098: lbu         $t6, 0x48($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X48);
    skip_11:
    // 0x8021409C: jal         0x80231C58
    // 0x802140A0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_80231C58(rdram, ctx);
        goto after_7;
    // 0x802140A0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_7:
    // 0x802140A4: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x802140A8: addiu       $t7, $t4, -0x1
    ctx->r15 = ADD32(ctx->r12, -0X1);
    // 0x802140AC: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
    // 0x802140B0: lbu         $t6, 0x48($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X48);
L_802140B4:
    // 0x802140B4: beql        $t6, $zero, L_80214110
    if (ctx->r14 == 0) {
        // 0x802140B8: lhu         $v1, 0x14($fp)
        ctx->r3 = MEM_HU(ctx->r30, 0X14);
            goto L_80214110;
    }
    goto skip_12;
    // 0x802140B8: lhu         $v1, 0x14($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X14);
    skip_12:
    // 0x802140BC: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x802140C0: sll         $s0, $s1, 2
    ctx->r16 = S32(ctx->r17 << 2);
    // 0x802140C4: subu        $s0, $s0, $s1
    ctx->r16 = SUB32(ctx->r16, ctx->r17);
    // 0x802140C8: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802140CC: beq         $at, $zero, L_8021410C
    if (ctx->r1 == 0) {
        // 0x802140D0: sll         $s0, $s0, 2
        ctx->r16 = S32(ctx->r16 << 2);
            goto L_8021410C;
    }
    // 0x802140D0: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x802140D4: lbu         $a0, 0x48($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X48);
L_802140D8:
    // 0x802140D8: lw          $t0, 0x0($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X0);
    // 0x802140DC: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x802140E0: sll         $t3, $a0, 16
    ctx->r11 = S32(ctx->r4 << 16);
    // 0x802140E4: addu        $a1, $s0, $t0
    ctx->r5 = ADD32(ctx->r16, ctx->r8);
    // 0x802140E8: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    // 0x802140EC: jal         0x80218C74
    // 0x802140F0: sra         $a0, $t3, 16
    ctx->r4 = S32(SIGNED(ctx->r11) >> 16);
    func_80218C74(rdram, ctx);
        goto after_8;
    // 0x802140F0: sra         $a0, $t3, 16
    ctx->r4 = S32(SIGNED(ctx->r11) >> 16);
    after_8:
    // 0x802140F4: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x802140F8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802140FC: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80214100: slt         $at, $s1, $t1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80214104: bnel        $at, $zero, L_802140D8
    if (ctx->r1 != 0) {
        // 0x80214108: lbu         $a0, 0x48($s4)
        ctx->r4 = MEM_BU(ctx->r20, 0X48);
            goto L_802140D8;
    }
    goto skip_13;
    // 0x80214108: lbu         $a0, 0x48($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X48);
    skip_13:
L_8021410C:
    // 0x8021410C: lhu         $v1, 0x14($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X14);
L_80214110:
    // 0x80214110: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
L_80214114:
    // 0x80214114: slt         $at, $s7, $v1
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80214118: bnel        $at, $zero, L_80213EBC
    if (ctx->r1 != 0) {
        // 0x8021411C: lw          $t1, 0x10($fp)
        ctx->r9 = MEM_W(ctx->r30, 0X10);
            goto L_80213EBC;
    }
    goto skip_14;
    // 0x8021411C: lw          $t1, 0x10($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X10);
    skip_14:
    // 0x80214120: lw          $t2, 0xF8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF8);
L_80214124:
    // 0x80214124: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x80214128: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x8021412C: bne         $t4, $t5, L_80213DE4
    if (ctx->r12 != ctx->r13) {
        // 0x80214130: sw          $t5, 0xF8($sp)
        MEM_W(0XF8, ctx->r29) = ctx->r13;
            goto L_80213DE4;
    }
    // 0x80214130: sw          $t5, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r13;
L_80214134:
    // 0x80214134: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x80214138: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x8021413C: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x80214140: bne         $t8, $t6, L_80213DB8
    if (ctx->r24 != ctx->r14) {
        // 0x80214144: sw          $t6, 0xFC($sp)
        MEM_W(0XFC, ctx->r29) = ctx->r14;
            goto L_80213DB8;
    }
    // 0x80214144: sw          $t6, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r14;
L_80214148:
    // 0x80214148: lui         $t3, 0x8026
    ctx->r11 = S32(0X8026 << 16);
    // 0x8021414C: lw          $t3, -0x3C64($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3C64);
    // 0x80214150: lw          $t9, 0x114($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X114);
    // 0x80214154: lui         $t0, 0x8026
    ctx->r8 = S32(0X8026 << 16);
    // 0x80214158: lui         $s6, 0x8026
    ctx->r22 = S32(0X8026 << 16);
    // 0x8021415C: sw          $t3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r11;
    // 0x80214160: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x80214164: lw          $t0, -0x3C60($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3C60);
    // 0x80214168: addiu       $s6, $s6, -0x3C5C
    ctx->r22 = ADD32(ctx->r22, -0X3C5C);
    // 0x8021416C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80214170: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x80214174: lw          $t2, 0x0($s6)
    ctx->r10 = MEM_W(ctx->r22, 0X0);
    // 0x80214178: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x8021417C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
L_80214180:
    // 0x80214180: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x80214184: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x80214188: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x8021418C: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x80214190: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x80214194: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x80214198: ldc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X50);
    // 0x8021419C: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x802141A0: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x802141A4: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x802141A8: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x802141AC: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x802141B0: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x802141B4: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x802141B8: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x802141BC: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x802141C0: jr          $ra
    // 0x802141C4: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    return;
    // 0x802141C4: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void func_80223E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223E1C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80223E20: lw          $t6, 0x3524($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3524);
    // 0x80223E24: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80223E28: sllv        $t8, $t7, $a0
    ctx->r24 = S32(ctx->r15 << (ctx->r4 & 31));
    // 0x80223E2C: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x80223E30: beq         $t9, $zero, L_80223E40
    if (ctx->r25 == 0) {
        // 0x80223E34: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80223E40;
    }
    // 0x80223E34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80223E38: jr          $ra
    // 0x80223E3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80223E3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80223E40:
    // 0x80223E40: jr          $ra
    // 0x80223E44: nop

    return;
    // 0x80223E44: nop

;}
RECOMP_FUNC void func_80205AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205AA0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80205AA4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80205AA8: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80205AAC: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80205AB0: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x80205AB4: lw          $t7, -0x4160($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4160);
    // 0x80205AB8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80205ABC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80205AC0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80205AC4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80205AC8: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80205ACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80205AD0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80205AD4: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80205AD8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80205ADC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80205AE0: addiu       $a2, $a2, 0xBEE
    ctx->r6 = ADD32(ctx->r6, 0XBEE);
    // 0x80205AE4: jal         0x80231C58
    // 0x80205AE8: addiu       $a1, $a1, 0x2990
    ctx->r5 = ADD32(ctx->r5, 0X2990);
    func_80231C58(rdram, ctx);
        goto after_0;
    // 0x80205AE8: addiu       $a1, $a1, 0x2990
    ctx->r5 = ADD32(ctx->r5, 0X2990);
    after_0:
    // 0x80205AEC: bne         $v0, $zero, L_80205AFC
    if (ctx->r2 != 0) {
        // 0x80205AF0: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_80205AFC;
    }
    // 0x80205AF0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80205AF4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80205AF8: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
L_80205AFC:
    // 0x80205AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80205B00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80205B04: jr          $ra
    // 0x80205B08: nop

    return;
    // 0x80205B08: nop

;}
RECOMP_FUNC void func_80223F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223F08: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80223F0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80223F10: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80223F14: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x80223F18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80223F1C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80223F20: addiu       $t7, $t7, 0x5130
    ctx->r15 = ADD32(ctx->r15, 0X5130);
    // 0x80223F24: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80223F28: jal         0x80231848
    // 0x80223F2C: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    func_80231848(rdram, ctx);
        goto after_0;
    // 0x80223F2C: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x80223F30: bgez        $v0, L_80223F40
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80223F34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80223F40;
    }
    // 0x80223F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80223F38: b           L_80223F44
    // 0x80223F3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80223F44;
    // 0x80223F3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80223F40:
    // 0x80223F40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80223F44:
    // 0x80223F44: jr          $ra
    // 0x80223F48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80223F48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80205528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205528: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8020552C: lhu         $a2, 0xBC8($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0XBC8);
    // 0x80205530: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80205534: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80205538: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8020553C: beq         $at, $zero, L_80205560
    if (ctx->r1 == 0) {
        // 0x80205540: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_80205560;
    }
    // 0x80205540: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80205544: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80205548: lw          $t6, 0x5240($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5240);
    // 0x8020554C: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80205550: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80205554: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80205558: bne         $a0, $zero, L_80205574
    if (ctx->r4 != 0) {
        // 0x8020555C: nop
    
            goto L_80205574;
    }
    // 0x8020555C: nop

L_80205560:
    // 0x80205560: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80205564: jal         0x80231A24
    // 0x80205568: addiu       $a0, $a0, 0x2934
    ctx->r4 = ADD32(ctx->r4, 0X2934);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80205568: addiu       $a0, $a0, 0x2934
    ctx->r4 = ADD32(ctx->r4, 0X2934);
    after_0:
    // 0x8020556C: b           L_80205634
    // 0x80205570: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80205634;
    // 0x80205570: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80205574:
    // 0x80205574: jal         0x80223840
    // 0x80205578: nop

    func_80223840(rdram, ctx);
        goto after_1;
    // 0x80205578: nop

    after_1:
    // 0x8020557C: lui         $a3, 0x2E43
    ctx->r7 = S32(0X2E43 << 16);
    // 0x80205580: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80205584: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80205588: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8020558C: ori         $a3, $a3, 0x544C
    ctx->r7 = ctx->r7 | 0X544C;
    // 0x80205590: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80205594: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80205598: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x8020559C: jal         0x80223B30
    // 0x802055A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80223B30(rdram, ctx);
        goto after_2;
    // 0x802055A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x802055A4: lui         $a3, 0x2E54
    ctx->r7 = S32(0X2E54 << 16);
    // 0x802055A8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x802055AC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802055B0: ori         $a3, $a3, 0x424C
    ctx->r7 = ctx->r7 | 0X424C;
    // 0x802055B4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802055B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802055BC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x802055C0: jal         0x80223B30
    // 0x802055C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80223B30(rdram, ctx);
        goto after_3;
    // 0x802055C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x802055C8: jal         0x802238F0
    // 0x802055CC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_802238F0(rdram, ctx);
        goto after_4;
    // 0x802055CC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x802055D0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x802055D4: lui         $a2, 0x8026
    ctx->r6 = S32(0X8026 << 16);
    // 0x802055D8: addiu       $a2, $a2, -0x46E8
    ctx->r6 = ADD32(ctx->r6, -0X46E8);
    // 0x802055DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802055E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802055E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802055E8: jal         0x80236CD0
    // 0x802055EC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80236CD0(rdram, ctx);
        goto after_5;
    // 0x802055EC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_5:
    // 0x802055F0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x802055F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802055F8: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x802055FC: jal         0x8022B460
    // 0x80205600: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    func_8022B460(rdram, ctx);
        goto after_6;
    // 0x80205600: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x80205604: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80205608: jal         0x80236E34
    // 0x8020560C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_80236E34(rdram, ctx);
        goto after_7;
    // 0x8020560C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_7:
    // 0x80205610: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80205614: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80205618: addiu       $v0, $v0, -0x4680
    ctx->r2 = ADD32(ctx->r2, -0X4680);
    // 0x8020561C: lw          $a1, 0x4($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X4);
    // 0x80205620: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80205624: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x80205628: jal         0x80237F20
    // 0x8020562C: lw          $a0, -0x1A50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A50);
    func_80237F20(rdram, ctx);
        goto after_8;
    // 0x8020562C: lw          $a0, -0x1A50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A50);
    after_8:
    // 0x80205630: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80205634:
    // 0x80205634: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80205638: jr          $ra
    // 0x8020563C: nop

    return;
    // 0x8020563C: nop

;}
RECOMP_FUNC void func_80226C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80226C48: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80226C4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226C50: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x80226C54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226C58: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80226C5C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80226C60: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80226C64: jal         0x80225424
    // 0x80226C68: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_0;
    // 0x80226C68: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x80226C6C: lhu         $a1, 0x30($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X30);
    // 0x80226C70: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80226C74: slti        $at, $a1, 0x1001
    ctx->r1 = SIGNED(ctx->r5) < 0X1001 ? 1 : 0;
    // 0x80226C78: bnel        $at, $zero, L_80226C94
    if (ctx->r1 != 0) {
        // 0x80226C7C: addiu       $a0, $sp, 0x32
        ctx->r4 = ADD32(ctx->r29, 0X32);
            goto L_80226C94;
    }
    goto skip_0;
    // 0x80226C7C: addiu       $a0, $sp, 0x32
    ctx->r4 = ADD32(ctx->r29, 0X32);
    skip_0:
    // 0x80226C80: jal         0x80231A24
    // 0x80226C84: addiu       $a0, $a0, 0x3C5C
    ctx->r4 = ADD32(ctx->r4, 0X3C5C);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x80226C84: addiu       $a0, $a0, 0x3C5C
    ctx->r4 = ADD32(ctx->r4, 0X3C5C);
    after_1:
    // 0x80226C88: addiu       $t6, $zero, 0x1000
    ctx->r14 = ADD32(0, 0X1000);
    // 0x80226C8C: sh          $t6, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r14;
    // 0x80226C90: addiu       $a0, $sp, 0x32
    ctx->r4 = ADD32(ctx->r29, 0X32);
L_80226C94:
    // 0x80226C94: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80226C98: jal         0x80225424
    // 0x80226C9C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_2;
    // 0x80226C9C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x80226CA0: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80226CA4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80226CA8: jal         0x80225424
    // 0x80226CAC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_3;
    // 0x80226CAC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x80226CB0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80226CB4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80226CB8: jal         0x80225424
    // 0x80226CBC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_4;
    // 0x80226CBC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x80226CC0: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80226CC4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80226CC8: jal         0x80225424
    // 0x80226CCC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_5;
    // 0x80226CCC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_5:
    // 0x80226CD0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80226CD4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80226CD8: jal         0x80225424
    // 0x80226CDC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_6;
    // 0x80226CDC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_6:
    // 0x80226CE0: lhu         $a0, 0x30($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X30);
    // 0x80226CE4: jal         0x8022B948
    // 0x80226CE8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8022B948(rdram, ctx);
        goto after_7;
    // 0x80226CE8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_7:
    // 0x80226CEC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80226CF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80226CF4: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80226CF8: jal         0x8022B460
    // 0x80226CFC: lhu         $a2, 0x30($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X30);
    func_8022B460(rdram, ctx);
        goto after_8;
    // 0x80226CFC: lhu         $a2, 0x30($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X30);
    after_8:
    // 0x80226D00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226D04: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80226D08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226D0C: jr          $ra
    // 0x80226D10: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80226D10: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023F260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F260: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8023F264: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8023F268: sll         $s3, $a1, 16
    ctx->r19 = S32(ctx->r5 << 16);
    // 0x8023F26C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8023F270: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8023F274: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8023F278: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023F27C: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x8023F280: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8023F284: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8023F288: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8023F28C: jal         0x8023FC40
    // 0x8023F290: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8023FC40(rdram, ctx);
        goto after_0;
    // 0x8023F290: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8023F294: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8023F298: lw          $s0, 0x8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X8);
    // 0x8023F29C: beq         $s0, $zero, L_8023F2E8
    if (ctx->r16 == 0) {
        // 0x8023F2A0: nop
    
            goto L_8023F2E8;
    }
    // 0x8023F2A0: nop

L_8023F2A4:
    // 0x8023F2A4: lh          $t7, 0xC($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XC);
    // 0x8023F2A8: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8023F2AC: bne         $s3, $t7, L_8023F2E0
    if (ctx->r19 != ctx->r15) {
        // 0x8023F2B0: nop
    
            goto L_8023F2E0;
    }
    // 0x8023F2B0: nop

    // 0x8023F2B4: beq         $s1, $zero, L_8023F2CC
    if (ctx->r17 == 0) {
        // 0x8023F2B8: nop
    
            goto L_8023F2CC;
    }
    // 0x8023F2B8: nop

    // 0x8023F2BC: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
    // 0x8023F2C0: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x8023F2C4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8023F2C8: sw          $t0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r8;
L_8023F2CC:
    // 0x8023F2CC: jal         0x80237120
    // 0x8023F2D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80237120(rdram, ctx);
        goto after_1;
    // 0x8023F2D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8023F2D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023F2D8: jal         0x80237150
    // 0x8023F2DC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80237150(rdram, ctx);
        goto after_2;
    // 0x8023F2DC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
L_8023F2E0:
    // 0x8023F2E0: bne         $s1, $zero, L_8023F2A4
    if (ctx->r17 != 0) {
        // 0x8023F2E4: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8023F2A4;
    }
    // 0x8023F2E4: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_8023F2E8:
    // 0x8023F2E8: jal         0x8023FC40
    // 0x8023F2EC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8023FC40(rdram, ctx);
        goto after_3;
    // 0x8023F2EC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x8023F2F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023F2F4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8023F2F8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8023F2FC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F300: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8023F304: jr          $ra
    // 0x8023F308: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8023F308: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80239120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80239120: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80239124: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80239128: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8023912C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80239130: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80239134: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80239138: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8023913C: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    // 0x80239140: andi        $s7, $a1, 0xFFFF
    ctx->r23 = ctx->r5 & 0XFFFF;
    // 0x80239144: or          $fp, $a2, $zero
    ctx->r30 = ctx->r6 | 0;
    // 0x80239148: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8023914C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80239150: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80239154: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80239158: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023915C: jal         0x802452EC
    // 0x80239160: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    func_802452EC(rdram, ctx);
        goto after_0;
    // 0x80239160: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80239164: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80239168: bne         $v0, $at, L_80239178
    if (ctx->r2 != ctx->r1) {
        // 0x8023916C: nop
    
            goto L_80239178;
    }
    // 0x8023916C: nop

    // 0x80239170: b           L_80239284
    // 0x80239174: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80239284;
    // 0x80239174: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80239178:
    // 0x80239178: lw          $t6, 0x50($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X50);
    // 0x8023917C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80239180: blez        $t6, L_80239274
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80239184: addiu       $s6, $sp, 0x50
        ctx->r22 = ADD32(ctx->r29, 0X50);
            goto L_80239274;
    }
    // 0x80239184: addiu       $s6, $sp, 0x50
    ctx->r22 = ADD32(ctx->r29, 0X50);
    // 0x80239188: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x8023918C: addiu       $s1, $sp, 0x60
    ctx->r17 = ADD32(ctx->r29, 0X60);
    // 0x80239190: addiu       $s0, $sp, 0x54
    ctx->r16 = ADD32(ctx->r29, 0X54);
L_80239194:
    // 0x80239194: lw          $t7, 0x5C($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X5C);
    // 0x80239198: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x8023919C: addu        $a2, $t7, $s3
    ctx->r6 = ADD32(ctx->r15, ctx->r19);
    // 0x802391A0: andi        $t8, $a2, 0xFFFF
    ctx->r24 = ctx->r6 & 0XFFFF;
    // 0x802391A4: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x802391A8: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x802391AC: jal         0x80245710
    // 0x802391B0: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    func_80245710(rdram, ctx);
        goto after_1;
    // 0x802391B0: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    after_1:
    // 0x802391B4: beq         $v0, $zero, L_802391C4
    if (ctx->r2 == 0) {
        // 0x802391B8: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_802391C4;
    }
    // 0x802391B8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x802391BC: b           L_80239288
    // 0x802391C0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80239288;
    // 0x802391C0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_802391C4:
    // 0x802391C4: lhu         $t9, 0x54($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X54);
    // 0x802391C8: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x802391CC: bne         $s7, $t9, L_80239260
    if (ctx->r23 != ctx->r25) {
        // 0x802391D0: nop
    
            goto L_80239260;
    }
    // 0x802391D0: nop

    // 0x802391D4: bne         $t0, $fp, L_80239260
    if (ctx->r8 != ctx->r30) {
        // 0x802391D8: nop
    
            goto L_80239260;
    }
    // 0x802391D8: nop

    // 0x802391DC: beq         $s5, $zero, L_80239210
    if (ctx->r21 == 0) {
        // 0x802391E0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80239210;
    }
    // 0x802391E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802391E4: addiu       $v0, $sp, 0x50
    ctx->r2 = ADD32(ctx->r29, 0X50);
    // 0x802391E8: or          $v1, $s5, $zero
    ctx->r3 = ctx->r21 | 0;
L_802391EC:
    // 0x802391EC: lbu         $t1, 0x10($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X10);
    // 0x802391F0: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x802391F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802391F8: beq         $t1, $t2, L_80239208
    if (ctx->r9 == ctx->r10) {
        // 0x802391FC: nop
    
            goto L_80239208;
    }
    // 0x802391FC: nop

    // 0x80239200: b           L_80239210
    // 0x80239204: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_80239210;
    // 0x80239204: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80239208:
    // 0x80239208: bne         $v0, $s1, L_802391EC
    if (ctx->r2 != ctx->r17) {
        // 0x8023920C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_802391EC;
    }
    // 0x8023920C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80239210:
    // 0x80239210: beq         $s4, $zero, L_80239248
    if (ctx->r20 == 0) {
        // 0x80239214: nop
    
            goto L_80239248;
    }
    // 0x80239214: nop

    // 0x80239218: bne         $a0, $zero, L_80239248
    if (ctx->r4 != 0) {
        // 0x8023921C: addiu       $v0, $sp, 0x50
        ctx->r2 = ADD32(ctx->r29, 0X50);
            goto L_80239248;
    }
    // 0x8023921C: addiu       $v0, $sp, 0x50
    ctx->r2 = ADD32(ctx->r29, 0X50);
    // 0x80239220: or          $v1, $s4, $zero
    ctx->r3 = ctx->r20 | 0;
L_80239224:
    // 0x80239224: lbu         $t3, 0xC($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0XC);
    // 0x80239228: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x8023922C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239230: beq         $t3, $t4, L_80239240
    if (ctx->r11 == ctx->r12) {
        // 0x80239234: nop
    
            goto L_80239240;
    }
    // 0x80239234: nop

    // 0x80239238: b           L_80239248
    // 0x8023923C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_80239248;
    // 0x8023923C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80239240:
    // 0x80239240: bne         $v0, $s0, L_80239224
    if (ctx->r2 != ctx->r16) {
        // 0x80239244: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_80239224;
    }
    // 0x80239244: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80239248:
    // 0x80239248: bne         $a0, $zero, L_80239260
    if (ctx->r4 != 0) {
        // 0x8023924C: nop
    
            goto L_80239260;
    }
    // 0x8023924C: nop

    // 0x80239250: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x80239254: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x80239258: b           L_80239284
    // 0x8023925C: sw          $s3, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r19;
        goto L_80239284;
    // 0x8023925C: sw          $s3, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r19;
L_80239260:
    // 0x80239260: lw          $t6, 0x50($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X50);
    // 0x80239264: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80239268: slt         $at, $s3, $t6
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8023926C: bne         $at, $zero, L_80239194
    if (ctx->r1 != 0) {
        // 0x80239270: nop
    
            goto L_80239194;
    }
    // 0x80239270: nop

L_80239274:
    // 0x80239274: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x80239278: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8023927C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80239280: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
L_80239284:
    // 0x80239284: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80239288:
    // 0x80239288: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023928C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80239290: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80239294: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80239298: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8023929C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802392A0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802392A4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x802392A8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x802392AC: jr          $ra
    // 0x802392B0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x802392B0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_80230AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80230AF4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80230AF8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80230AFC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80230B00: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80230B04: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80230B08: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80230B0C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80230B10: jal         0x8022FF90
    // 0x80230B14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8022FF90(rdram, ctx);
        goto after_0;
    // 0x80230B14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80230B18: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80230B1C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80230B20: blez        $v0, L_80230B58
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80230B24: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80230B58;
    }
    // 0x80230B24: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80230B28: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    // 0x80230B2C: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
L_80230B30:
    // 0x80230B30: multu       $s2, $s4
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80230B34: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    // 0x80230B38: mflo        $s2
    ctx->r18 = lo;
    // 0x80230B3C: jal         0x802306FC
    // 0x80230B40: nop

    func_802306FC(rdram, ctx);
        goto after_1;
    // 0x80230B40: nop

    after_1:
    // 0x80230B44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80230B48: slt         $at, $s0, $s3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80230B4C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80230B50: bne         $at, $zero, L_80230B30
    if (ctx->r1 != 0) {
        // 0x80230B54: addu        $s2, $s2, $v0
        ctx->r18 = ADD32(ctx->r18, ctx->r2);
            goto L_80230B30;
    }
    // 0x80230B54: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
L_80230B58:
    // 0x80230B58: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80230B5C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x80230B60: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80230B64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80230B68: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80230B6C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80230B70: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80230B74: jr          $ra
    // 0x80230B78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80230B78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023874C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023874C: jr          $ra
    // 0x80238750: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    return;
    // 0x80238750: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
;}
RECOMP_FUNC void func_8022A0D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A0D0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8022A0D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A0D8: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x8022A0DC: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8022A0E0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8022A0E4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8022A0E8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8022A0EC: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8022A0F0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022A0F4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8022A0F8: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8022A0FC: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x8022A100: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8022A104: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x8022A108: lwc1        $f16, 0x10($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8022A10C: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x8022A110: lwc1        $f18, 0x14($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8022A114: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x8022A118: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8022A11C: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x8022A120: lwc1        $f6, 0x1C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8022A124: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x8022A128: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8022A12C: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x8022A130: lwc1        $f10, 0x24($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8022A134: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x8022A138: lwc1        $f16, 0x28($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8022A13C: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x8022A140: lwc1        $f18, 0x2C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x8022A144: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x8022A148: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8022A14C: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8022A150: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8022A154: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x8022A158: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8022A15C: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x8022A160: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8022A164: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8022A168: lwc1        $f10, 0x30($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X30);
    // 0x8022A16C: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x8022A170: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8022A174: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x8022A178: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8022A17C: lwc1        $f10, 0x14($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8022A180: mul.s       $f8, $f12, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x8022A184: lwc1        $f16, 0x24($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8022A188: mul.s       $f6, $f14, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x8022A18C: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8022A190: mul.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x8022A194: lwc1        $f6, 0x34($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X34);
    // 0x8022A198: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8022A19C: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8022A1A0: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x8022A1A4: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8022A1A8: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8022A1AC: mul.s       $f10, $f12, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x8022A1B0: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8022A1B4: mul.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x8022A1B8: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8022A1BC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8022A1C0: lwc1        $f8, 0x38($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X38);
    // 0x8022A1C4: add.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x8022A1C8: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8022A1CC: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x8022A1D0: lwc1        $f16, 0xC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8022A1D4: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8022A1D8: mul.s       $f6, $f12, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x8022A1DC: lwc1        $f16, 0x2C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x8022A1E0: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x8022A1E4: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8022A1E8: mul.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x8022A1EC: lwc1        $f10, 0x3C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x8022A1F0: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8022A1F4: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8022A1F8: jal         0x80228DE0
    // 0x8022A1FC: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x8022A1FC: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8022A200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A204: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8022A208: jr          $ra
    // 0x8022A20C: nop

    return;
    // 0x8022A20C: nop

;}
RECOMP_FUNC void func_80201388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80201388: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8020138C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201390: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201394: jal         0x802011D0
    // 0x80201398: addiu       $a0, $a0, 0x1C90
    ctx->r4 = ADD32(ctx->r4, 0X1C90);
    func_802011D0(rdram, ctx);
        goto after_0;
    // 0x80201398: addiu       $a0, $a0, 0x1C90
    ctx->r4 = ADD32(ctx->r4, 0X1C90);
    after_0:
    // 0x8020139C: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x802013A0: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x802013A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802013A8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802013AC: blez        $v0, L_8020141C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802013B0: addiu       $a1, $zero, 0xB4
        ctx->r5 = ADD32(0, 0XB4);
            goto L_8020141C;
    }
    // 0x802013B0: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x802013B4: lw          $a0, 0x6DE4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6DE4);
L_802013B8:
    // 0x802013B8: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802013BC: mflo        $a2
    ctx->r6 = lo;
    // 0x802013C0: addu        $t6, $a0, $a2
    ctx->r14 = ADD32(ctx->r4, ctx->r6);
    // 0x802013C4: lbu         $t7, 0xAC($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XAC);
    // 0x802013C8: bnel        $t7, $zero, L_8020140C
    if (ctx->r15 != 0) {
        // 0x802013CC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8020140C;
    }
    goto skip_0;
    // 0x802013CC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x802013D0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802013D4: addiu       $a0, $a0, 0x1CA8
    ctx->r4 = ADD32(ctx->r4, 0X1CA8);
    // 0x802013D8: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x802013DC: sb          $v1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r3;
    // 0x802013E0: jal         0x802011D0
    // 0x802013E4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_802011D0(rdram, ctx);
        goto after_1;
    // 0x802013E4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x802013E8: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x802013EC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802013F0: lw          $t9, 0x6DE4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6DE4);
    // 0x802013F4: lbu         $v0, 0x27($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X27);
    // 0x802013F8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802013FC: addu        $t0, $t9, $a2
    ctx->r8 = ADD32(ctx->r25, ctx->r6);
    // 0x80201400: b           L_80201438
    // 0x80201404: sb          $t8, 0xAC($t0)
    MEM_B(0XAC, ctx->r8) = ctx->r24;
        goto L_80201438;
    // 0x80201404: sb          $t8, 0xAC($t0)
    MEM_B(0XAC, ctx->r8) = ctx->r24;
    // 0x80201408: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8020140C:
    // 0x8020140C: andi        $t1, $v1, 0xFF
    ctx->r9 = ctx->r3 & 0XFF;
    // 0x80201410: slt         $at, $t1, $v0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201414: bne         $at, $zero, L_802013B8
    if (ctx->r1 != 0) {
        // 0x80201418: or          $v1, $t1, $zero
        ctx->r3 = ctx->r9 | 0;
            goto L_802013B8;
    }
    // 0x80201418: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
L_8020141C:
    // 0x8020141C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80201420: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80201424: addiu       $a2, $a2, 0xBFA
    ctx->r6 = ADD32(ctx->r6, 0XBFA);
    // 0x80201428: addiu       $a1, $a1, 0x1CC0
    ctx->r5 = ADD32(ctx->r5, 0X1CC0);
    // 0x8020142C: jal         0x80231C58
    // 0x80201430: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    func_80231C58(rdram, ctx);
        goto after_2;
    // 0x80201430: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    after_2:
    // 0x80201434: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80201438:
    // 0x80201438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020143C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80201440: jr          $ra
    // 0x80201444: nop

    return;
    // 0x80201444: nop

;}
RECOMP_FUNC void func_802076D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802076D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802076DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802076E0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x802076E4: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x802076E8: lwc1        $f0, 0x14($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14);
    // 0x802076EC: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
    // 0x802076F0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x802076F4: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802076F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802076FC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80207700: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x80207704: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80207708: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x8020770C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80207710: bc1f        L_80207720
    if (!c1cs) {
        // 0x80207714: lw          $t8, 0x34($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X34);
            goto L_80207720;
    }
    // 0x80207714: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80207718: b           L_80207734
    // 0x8020771C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80207734;
    // 0x8020771C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80207720:
    // 0x80207720: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x80207724: nop

    // 0x80207728: bc1fl       L_80207738
    if (!c1cs) {
        // 0x8020772C: lwc1        $f14, 0x8($a3)
        ctx->f14.u32l = MEM_W(ctx->r7, 0X8);
            goto L_80207738;
    }
    goto skip_0;
    // 0x8020772C: lwc1        $f14, 0x8($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X8);
    skip_0:
    // 0x80207730: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80207734:
    // 0x80207734: lwc1        $f14, 0x8($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X8);
L_80207738:
    // 0x80207738: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
    // 0x8020773C: nop

    // 0x80207740: bc1fl       L_80207754
    if (!c1cs) {
        // 0x80207744: c.le.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
            goto L_80207754;
    }
    goto skip_1;
    // 0x80207744: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    skip_1:
    // 0x80207748: b           L_80207764
    // 0x8020774C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
        goto L_80207764;
    // 0x8020774C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80207750: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
L_80207754:
    // 0x80207754: nop

    // 0x80207758: bc1fl       L_80207768
    if (!c1cs) {
        // 0x8020775C: lwc1        $f16, 0x8($t6)
        ctx->f16.u32l = MEM_W(ctx->r14, 0X8);
            goto L_80207768;
    }
    goto skip_2;
    // 0x8020775C: lwc1        $f16, 0x8($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X8);
    skip_2:
    // 0x80207760: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80207764:
    // 0x80207764: lwc1        $f16, 0x8($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X8);
L_80207768:
    // 0x80207768: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8020776C: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x80207770: nop

    // 0x80207774: bc1fl       L_80207788
    if (!c1cs) {
        // 0x80207778: c.le.s      $f16, $f2
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
            goto L_80207788;
    }
    goto skip_3;
    // 0x80207778: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    skip_3:
    // 0x8020777C: b           L_80207798
    // 0x80207780: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
        goto L_80207798;
    // 0x80207780: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80207784: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
L_80207788:
    // 0x80207788: nop

    // 0x8020778C: bc1fl       L_8020779C
    if (!c1cs) {
        // 0x80207790: lwc1        $f18, 0x8($t7)
        ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
            goto L_8020779C;
    }
    goto skip_4;
    // 0x80207790: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    skip_4:
    // 0x80207794: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80207798:
    // 0x80207798: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
L_8020779C:
    // 0x8020779C: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x802077A0: nop

    // 0x802077A4: bc1fl       L_802077B8
    if (!c1cs) {
        // 0x802077A8: c.le.s      $f18, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
            goto L_802077B8;
    }
    goto skip_5;
    // 0x802077A8: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    skip_5:
    // 0x802077AC: b           L_802077C8
    // 0x802077B0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
        goto L_802077C8;
    // 0x802077B0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802077B4: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
L_802077B8:
    // 0x802077B8: nop

    // 0x802077BC: bc1fl       L_802077CC
    if (!c1cs) {
        // 0x802077C0: lwc1        $f12, 0x8($t8)
        ctx->f12.u32l = MEM_W(ctx->r24, 0X8);
            goto L_802077CC;
    }
    goto skip_6;
    // 0x802077C0: lwc1        $f12, 0x8($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X8);
    skip_6:
    // 0x802077C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802077C8:
    // 0x802077C8: lwc1        $f12, 0x8($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X8);
L_802077CC:
    // 0x802077CC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x802077D0: nop

    // 0x802077D4: bc1fl       L_802078D8
    if (!c1cs) {
        // 0x802077D8: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_802078D8;
    }
    goto skip_7;
    // 0x802077D8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_7:
    // 0x802077DC: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x802077E0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x802077E4: bc1f        L_8020781C
    if (!c1cs) {
        // 0x802077E8: nop
    
            goto L_8020781C;
    }
    // 0x802077E8: nop

    // 0x802077EC: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
    // 0x802077F0: nop

    // 0x802077F4: bc1f        L_8020781C
    if (!c1cs) {
        // 0x802077F8: nop
    
            goto L_8020781C;
    }
    // 0x802077F8: nop

    // 0x802077FC: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x80207800: nop

    // 0x80207804: bc1f        L_8020781C
    if (!c1cs) {
        // 0x80207808: nop
    
            goto L_8020781C;
    }
    // 0x80207808: nop

    // 0x8020780C: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x80207810: nop

    // 0x80207814: bc1tl       L_80207B58
    if (c1cs) {
        // 0x80207818: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80207B58;
    }
    goto skip_8;
    // 0x80207818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_8:
L_8020781C:
    // 0x8020781C: bne         $v0, $a0, L_80207B54
    if (ctx->r2 != ctx->r4) {
        // 0x80207820: lwc1        $f4, 0x1C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_80207B54;
    }
    // 0x80207820: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80207824: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x80207828: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8020782C: bc1fl       L_80207854
    if (!c1cs) {
        // 0x80207830: c.le.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
            goto L_80207854;
    }
    goto skip_9;
    // 0x80207830: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    skip_9:
    // 0x80207834: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80207838: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8020783C: jal         0x80207B64
    // 0x80207840: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    func_80207B64(rdram, ctx);
        goto after_0;
    // 0x80207840: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x80207844: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x80207848: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8020784C: lwc1        $f14, 0x8($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80207850: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
L_80207854:
    // 0x80207854: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207858: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8020785C: bc1fl       L_80207878
    if (!c1cs) {
        // 0x80207860: lw          $t9, 0x40($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X40);
            goto L_80207878;
    }
    goto skip_10;
    // 0x80207860: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    skip_10:
    // 0x80207864: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80207868: jal         0x80207B64
    // 0x8020786C: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    func_80207B64(rdram, ctx);
        goto after_1;
    // 0x8020786C: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x80207870: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80207874: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
L_80207878:
    // 0x80207878: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8020787C: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80207880: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80207884: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    // 0x80207888: nop

    // 0x8020788C: bc1fl       L_802078A8
    if (!c1cs) {
        // 0x80207890: lw          $t0, 0x44($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X44);
            goto L_802078A8;
    }
    goto skip_11;
    // 0x80207890: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    skip_11:
    // 0x80207894: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80207898: jal         0x80207B64
    // 0x8020789C: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    func_80207B64(rdram, ctx);
        goto after_2;
    // 0x8020789C: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x802078A0: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802078A4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
L_802078A8:
    // 0x802078A8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802078AC: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x802078B0: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x802078B4: nop

    // 0x802078B8: bc1fl       L_80207B58
    if (!c1cs) {
        // 0x802078BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80207B58;
    }
    goto skip_12;
    // 0x802078BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_12:
    // 0x802078C0: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x802078C4: jal         0x80207B64
    // 0x802078C8: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    func_80207B64(rdram, ctx);
        goto after_3;
    // 0x802078C8: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    after_3:
    // 0x802078CC: b           L_80207B58
    // 0x802078D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80207B58;
    // 0x802078D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802078D4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_802078D8:
    // 0x802078D8: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802078DC: bc1f        L_802079DC
    if (!c1cs) {
        // 0x802078E0: nop
    
            goto L_802079DC;
    }
    // 0x802078E0: nop

    // 0x802078E4: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x802078E8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x802078EC: bc1f        L_80207924
    if (!c1cs) {
        // 0x802078F0: nop
    
            goto L_80207924;
    }
    // 0x802078F0: nop

    // 0x802078F4: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x802078F8: nop

    // 0x802078FC: bc1f        L_80207924
    if (!c1cs) {
        // 0x80207900: nop
    
            goto L_80207924;
    }
    // 0x80207900: nop

    // 0x80207904: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x80207908: nop

    // 0x8020790C: bc1f        L_80207924
    if (!c1cs) {
        // 0x80207910: nop
    
            goto L_80207924;
    }
    // 0x80207910: nop

    // 0x80207914: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x80207918: nop

    // 0x8020791C: bc1tl       L_80207B58
    if (c1cs) {
        // 0x80207920: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80207B58;
    }
    goto skip_13;
    // 0x80207920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_13:
L_80207924:
    // 0x80207924: bne         $v1, $a0, L_80207B54
    if (ctx->r3 != ctx->r4) {
        // 0x80207928: lwc1        $f4, 0x1C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_80207B54;
    }
    // 0x80207928: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8020792C: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x80207930: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207934: bc1fl       L_8020795C
    if (!c1cs) {
        // 0x80207938: c.le.s      $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
            goto L_8020795C;
    }
    goto skip_14;
    // 0x80207938: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
    skip_14:
    // 0x8020793C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80207940: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80207944: jal         0x80207B64
    // 0x80207948: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_80207B64(rdram, ctx);
        goto after_4;
    // 0x80207948: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x8020794C: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x80207950: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80207954: lwc1        $f14, 0x8($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80207958: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
L_8020795C:
    // 0x8020795C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207960: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x80207964: bc1fl       L_80207980
    if (!c1cs) {
        // 0x80207968: lw          $t1, 0x40($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X40);
            goto L_80207980;
    }
    goto skip_15;
    // 0x80207968: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    skip_15:
    // 0x8020796C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80207970: jal         0x80207B64
    // 0x80207974: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_80207B64(rdram, ctx);
        goto after_5;
    // 0x80207974: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x80207978: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8020797C: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
L_80207980:
    // 0x80207980: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207984: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80207988: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8020798C: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x80207990: nop

    // 0x80207994: bc1fl       L_802079B0
    if (!c1cs) {
        // 0x80207998: lw          $t2, 0x44($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X44);
            goto L_802079B0;
    }
    goto skip_16;
    // 0x80207998: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    skip_16:
    // 0x8020799C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802079A0: jal         0x80207B64
    // 0x802079A4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_80207B64(rdram, ctx);
        goto after_6;
    // 0x802079A4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x802079A8: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802079AC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
L_802079B0:
    // 0x802079B0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802079B4: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x802079B8: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x802079BC: nop

    // 0x802079C0: bc1fl       L_80207B58
    if (!c1cs) {
        // 0x802079C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80207B58;
    }
    goto skip_17;
    // 0x802079C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_17:
    // 0x802079C8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802079CC: jal         0x80207B64
    // 0x802079D0: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    func_80207B64(rdram, ctx);
        goto after_7;
    // 0x802079D0: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_7:
    // 0x802079D4: b           L_80207B58
    // 0x802079D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80207B58;
    // 0x802079D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802079DC:
    // 0x802079DC: beq         $v1, $zero, L_802079EC
    if (ctx->r3 == 0) {
        // 0x802079E0: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_802079EC;
    }
    // 0x802079E0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x802079E4: bnel        $v0, $zero, L_80207B58
    if (ctx->r2 != 0) {
        // 0x802079E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80207B58;
    }
    goto skip_18;
    // 0x802079E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_18:
L_802079EC:
    // 0x802079EC: bne         $v1, $a0, L_80207AA4
    if (ctx->r3 != ctx->r4) {
        // 0x802079F0: lwc1        $f10, 0x1C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_80207AA4;
    }
    // 0x802079F0: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802079F4: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x802079F8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802079FC: bc1fl       L_80207A24
    if (!c1cs) {
        // 0x80207A00: c.le.s      $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
            goto L_80207A24;
    }
    goto skip_19;
    // 0x80207A00: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
    skip_19:
    // 0x80207A04: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80207A08: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80207A0C: jal         0x80207B64
    // 0x80207A10: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_80207B64(rdram, ctx);
        goto after_8;
    // 0x80207A10: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x80207A14: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x80207A18: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80207A1C: lwc1        $f14, 0x8($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80207A20: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
L_80207A24:
    // 0x80207A24: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207A28: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x80207A2C: bc1fl       L_80207A48
    if (!c1cs) {
        // 0x80207A30: lw          $t3, 0x40($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X40);
            goto L_80207A48;
    }
    goto skip_20;
    // 0x80207A30: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    skip_20:
    // 0x80207A34: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80207A38: jal         0x80207B64
    // 0x80207A3C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_80207B64(rdram, ctx);
        goto after_9;
    // 0x80207A3C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_9:
    // 0x80207A40: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80207A44: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
L_80207A48:
    // 0x80207A48: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207A4C: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80207A50: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x80207A54: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x80207A58: nop

    // 0x80207A5C: bc1fl       L_80207A78
    if (!c1cs) {
        // 0x80207A60: lw          $t4, 0x44($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X44);
            goto L_80207A78;
    }
    goto skip_21;
    // 0x80207A60: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    skip_21:
    // 0x80207A64: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80207A68: jal         0x80207B64
    // 0x80207A6C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_80207B64(rdram, ctx);
        goto after_10;
    // 0x80207A6C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_10:
    // 0x80207A70: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80207A74: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
L_80207A78:
    // 0x80207A78: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207A7C: lwc1        $f6, 0x8($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80207A80: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x80207A84: nop

    // 0x80207A88: bc1fl       L_80207B58
    if (!c1cs) {
        // 0x80207A8C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80207B58;
    }
    goto skip_22;
    // 0x80207A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_22:
    // 0x80207A90: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80207A94: jal         0x80207B64
    // 0x80207A98: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    func_80207B64(rdram, ctx);
        goto after_11;
    // 0x80207A98: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_11:
    // 0x80207A9C: b           L_80207B58
    // 0x80207AA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80207B58;
    // 0x80207AA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80207AA4:
    // 0x80207AA4: bne         $v0, $a0, L_80207B54
    if (ctx->r2 != ctx->r4) {
        // 0x80207AA8: lwc1        $f8, 0x1C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_80207B54;
    }
    // 0x80207AA8: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80207AAC: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x80207AB0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207AB4: bc1fl       L_80207ADC
    if (!c1cs) {
        // 0x80207AB8: c.le.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
            goto L_80207ADC;
    }
    goto skip_23;
    // 0x80207AB8: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    skip_23:
    // 0x80207ABC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80207AC0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80207AC4: jal         0x80207B64
    // 0x80207AC8: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    func_80207B64(rdram, ctx);
        goto after_12;
    // 0x80207AC8: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    after_12:
    // 0x80207ACC: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x80207AD0: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80207AD4: lwc1        $f14, 0x8($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80207AD8: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
L_80207ADC:
    // 0x80207ADC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207AE0: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x80207AE4: bc1fl       L_80207B00
    if (!c1cs) {
        // 0x80207AE8: lw          $t5, 0x40($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X40);
            goto L_80207B00;
    }
    goto skip_24;
    // 0x80207AE8: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    skip_24:
    // 0x80207AEC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80207AF0: jal         0x80207B64
    // 0x80207AF4: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    func_80207B64(rdram, ctx);
        goto after_13;
    // 0x80207AF4: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    after_13:
    // 0x80207AF8: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80207AFC: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
L_80207B00:
    // 0x80207B00: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207B04: lwc1        $f10, 0x8($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80207B08: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x80207B0C: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x80207B10: nop

    // 0x80207B14: bc1fl       L_80207B30
    if (!c1cs) {
        // 0x80207B18: lw          $t6, 0x44($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X44);
            goto L_80207B30;
    }
    goto skip_25;
    // 0x80207B18: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    skip_25:
    // 0x80207B1C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80207B20: jal         0x80207B64
    // 0x80207B24: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    func_80207B64(rdram, ctx);
        goto after_14;
    // 0x80207B24: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    after_14:
    // 0x80207B28: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80207B2C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
L_80207B30:
    // 0x80207B30: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207B34: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80207B38: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x80207B3C: nop

    // 0x80207B40: bc1fl       L_80207B58
    if (!c1cs) {
        // 0x80207B44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80207B58;
    }
    goto skip_26;
    // 0x80207B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_26:
    // 0x80207B48: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80207B4C: jal         0x80207B64
    // 0x80207B50: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_80207B64(rdram, ctx);
        goto after_15;
    // 0x80207B50: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_15:
L_80207B54:
    // 0x80207B54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80207B58:
    // 0x80207B58: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80207B5C: jr          $ra
    // 0x80207B60: nop

    return;
    // 0x80207B60: nop

;}
RECOMP_FUNC void func_80246F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246F90: lui         $t6, 0xA404
    ctx->r14 = S32(0XA404 << 16);
    // 0x80246F94: lw          $a1, 0x10($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X10);
    // 0x80246F98: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80246F9C: andi        $t7, $a1, 0x1
    ctx->r15 = ctx->r5 & 0X1;
    // 0x80246FA0: bne         $t7, $zero, L_80246FB0
    if (ctx->r15 != 0) {
        // 0x80246FA4: nop
    
            goto L_80246FB0;
    }
    // 0x80246FA4: nop

    // 0x80246FA8: b           L_80246FBC
    // 0x80246FAC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80246FBC;
    // 0x80246FAC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80246FB0:
    // 0x80246FB0: lui         $t8, 0xA408
    ctx->r24 = S32(0XA408 << 16);
    // 0x80246FB4: sw          $a0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r4;
    // 0x80246FB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80246FBC:
    // 0x80246FBC: jr          $ra
    // 0x80246FC0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80246FC0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80206D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80206D04: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80206D08: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80206D0C: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x80206D10: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80206D14: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x80206D18: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x80206D1C: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80206D20: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x80206D24: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80206D28: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80206D2C: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80206D30: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80206D34: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80206D38: beq         $a1, $zero, L_80206D50
    if (ctx->r5 == 0) {
        // 0x80206D3C: sw          $a3, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r7;
            goto L_80206D50;
    }
    // 0x80206D3C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80206D40: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x80206D44: lw          $t7, -0x415C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X415C);
    // 0x80206D48: b           L_80206D5C
    // 0x80206D4C: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
        goto L_80206D5C;
    // 0x80206D4C: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
L_80206D50:
    // 0x80206D50: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x80206D54: lw          $t8, -0x4158($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4158);
    // 0x80206D58: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
L_80206D5C:
    // 0x80206D5C: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80206D60: lui         $s5, 0x8026
    ctx->r21 = S32(0X8026 << 16);
    // 0x80206D64: addiu       $s5, $s5, -0x4148
    ctx->r21 = ADD32(ctx->r21, -0X4148);
    // 0x80206D68: blez        $t9, L_80207014
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80206D6C: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_80207014;
    }
    // 0x80206D6C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80206D70: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x80206D74: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80206D78: addiu       $s3, $s3, -0x18F0
    ctx->r19 = ADD32(ctx->r19, -0X18F0);
    // 0x80206D7C: lui         $s4, 0x9914
    ctx->r20 = S32(0X9914 << 16);
    // 0x80206D80: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
L_80206D84:
    // 0x80206D84: lui         $t1, 0x8026
    ctx->r9 = S32(0X8026 << 16);
    // 0x80206D88: sll         $t6, $s2, 3
    ctx->r14 = S32(ctx->r18 << 3);
    // 0x80206D8C: beq         $t0, $zero, L_80206DBC
    if (ctx->r8 == 0) {
        // 0x80206D90: lui         $t7, 0x8026
        ctx->r15 = S32(0X8026 << 16);
            goto L_80206DBC;
    }
    // 0x80206D90: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x80206D94: lw          $t1, -0x4154($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4154);
    // 0x80206D98: lui         $t5, 0x8026
    ctx->r13 = S32(0X8026 << 16);
    // 0x80206D9C: lw          $t5, -0x4150($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X4150);
    // 0x80206DA0: addu        $t2, $t1, $s2
    ctx->r10 = ADD32(ctx->r9, ctx->r18);
    // 0x80206DA4: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x80206DA8: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x80206DAC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80206DB0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80206DB4: b           L_80206DCC
    // 0x80206DB8: addu        $s1, $t4, $t5
    ctx->r17 = ADD32(ctx->r12, ctx->r13);
        goto L_80206DCC;
    // 0x80206DB8: addu        $s1, $t4, $t5
    ctx->r17 = ADD32(ctx->r12, ctx->r13);
L_80206DBC:
    // 0x80206DBC: lw          $t7, -0x414C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X414C);
    // 0x80206DC0: addu        $t6, $t6, $s2
    ctx->r14 = ADD32(ctx->r14, ctx->r18);
    // 0x80206DC4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80206DC8: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
L_80206DCC:
    // 0x80206DCC: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80206DD0: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80206DD4: bnel        $v0, $at, L_80206E10
    if (ctx->r2 != ctx->r1) {
        // 0x80206DD8: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_80206E10;
    }
    goto skip_0;
    // 0x80206DD8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_0:
    // 0x80206DDC: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80206DE0: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80206DE4: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80206DE8: nop

    // 0x80206DEC: bc1tl       L_80207008
    if (c1cs) {
        // 0x80206DF0: lw          $t7, 0x48($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X48);
            goto L_80207008;
    }
    goto skip_1;
    // 0x80206DF0: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    skip_1:
    // 0x80206DF4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x80206DF8: nop

    // 0x80206DFC: bc1fl       L_80206E68
    if (!c1cs) {
        // 0x80206E00: lbu         $t2, 0x0($s1)
        ctx->r10 = MEM_BU(ctx->r17, 0X0);
            goto L_80206E68;
    }
    goto skip_2;
    // 0x80206E00: lbu         $t2, 0x0($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X0);
    skip_2:
    // 0x80206E04: b           L_80207008
    // 0x80206E08: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
        goto L_80207008;
    // 0x80206E08: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80206E0C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_80206E10:
    // 0x80206E10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80206E14: nop

    // 0x80206E18: c.eq.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl == ctx->f6.fl;
    // 0x80206E1C: nop

    // 0x80206E20: bc1tl       L_80206E68
    if (c1cs) {
        // 0x80206E24: lbu         $t2, 0x0($s1)
        ctx->r10 = MEM_BU(ctx->r17, 0X0);
            goto L_80206E68;
    }
    goto skip_3;
    // 0x80206E24: lbu         $t2, 0x0($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X0);
    skip_3:
    // 0x80206E28: c.eq.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl == ctx->f22.fl;
    // 0x80206E2C: addu        $t8, $s5, $v0
    ctx->r24 = ADD32(ctx->r21, ctx->r2);
    // 0x80206E30: bc1fl       L_80206E4C
    if (!c1cs) {
        // 0x80206E34: c.eq.s      $f20, $f22
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl == ctx->f22.fl;
            goto L_80206E4C;
    }
    goto skip_4;
    // 0x80206E34: c.eq.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl == ctx->f22.fl;
    skip_4:
    // 0x80206E38: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x80206E3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80206E40: beql        $t9, $at, L_80207008
    if (ctx->r25 == ctx->r1) {
        // 0x80206E44: lw          $t7, 0x48($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X48);
            goto L_80207008;
    }
    goto skip_5;
    // 0x80206E44: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    skip_5:
    // 0x80206E48: c.eq.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl == ctx->f22.fl;
L_80206E4C:
    // 0x80206E4C: addu        $t0, $s5, $v0
    ctx->r8 = ADD32(ctx->r21, ctx->r2);
    // 0x80206E50: bc1tl       L_80206E68
    if (c1cs) {
        // 0x80206E54: lbu         $t2, 0x0($s1)
        ctx->r10 = MEM_BU(ctx->r17, 0X0);
            goto L_80206E68;
    }
    goto skip_6;
    // 0x80206E54: lbu         $t2, 0x0($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X0);
    skip_6:
    // 0x80206E58: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x80206E5C: beql        $t1, $zero, L_80207008
    if (ctx->r9 == 0) {
        // 0x80206E60: lw          $t7, 0x48($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X48);
            goto L_80207008;
    }
    goto skip_7;
    // 0x80206E60: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    skip_7:
    // 0x80206E64: lbu         $t2, 0x0($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X0);
L_80206E68:
    // 0x80206E68: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80206E6C: sltiu       $at, $t3, 0x5
    ctx->r1 = ctx->r11 < 0X5 ? 1 : 0;
    // 0x80206E70: beq         $at, $zero, L_80207004
    if (ctx->r1 == 0) {
        // 0x80206E74: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_80207004;
    }
    // 0x80206E74: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80206E78: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80206E7C: addu        $at, $at, $t3
    gpr jr_addend_80206E84 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80206E80: lw          $t3, 0x2AB8($at)
    ctx->r11 = ADD32(ctx->r1, 0X2AB8);
    // 0x80206E84: jr          $t3
    // 0x80206E88: nop

    switch (jr_addend_80206E84 >> 2) {
        case 0: goto L_80206EF0; break;
        case 1: goto L_80206E8C; break;
        case 2: goto L_80206EB8; break;
        case 3: goto L_80206F84; break;
        case 4: goto L_80206F50; break;
        default: switch_error(__func__, 0x80206E84, 0x80252AB8);
    }
    // 0x80206E88: nop

L_80206E8C:
    // 0x80206E8C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x80206E90: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x80206E94: lbu         $a2, 0x1($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X1);
    // 0x80206E98: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x80206E9C: lw          $t5, 0x1C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X1C);
    // 0x80206EA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80206EA4: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80206EA8: jal         0x8021C5AC
    // 0x80206EAC: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    func_8021C5AC(rdram, ctx);
        goto after_0;
    // 0x80206EAC: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    after_0:
    // 0x80206EB0: b           L_80207008
    // 0x80206EB4: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
        goto L_80207008;
    // 0x80206EB4: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
L_80206EB8:
    // 0x80206EB8: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x80206EBC: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x80206EC0: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80206EC4: lhu         $t1, 0x0($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X0);
    // 0x80206EC8: lw          $t0, 0x1C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X1C);
    // 0x80206ECC: lbu         $a2, 0x1($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X1);
    // 0x80206ED0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80206ED4: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80206ED8: lw          $a1, 0x0($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X0);
    // 0x80206EDC: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x80206EE0: jal         0x8021C9C0
    // 0x80206EE4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8021C9C0(rdram, ctx);
        goto after_1;
    // 0x80206EE4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x80206EE8: b           L_80207008
    // 0x80206EEC: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
        goto L_80207008;
    // 0x80206EEC: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
L_80206EF0:
    // 0x80206EF0: jal         0x8022331C
    // 0x80206EF4: nop

    func_8022331C(rdram, ctx);
        goto after_2;
    // 0x80206EF4: nop

    after_2:
    // 0x80206EF8: lui         $a0, 0xE2
    ctx->r4 = S32(0XE2 << 16);
    // 0x80206EFC: jal         0x802233EC
    // 0x80206F00: ori         $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 | 0XFFF;
    func_802233EC(rdram, ctx);
        goto after_3;
    // 0x80206F00: ori         $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 | 0XFFF;
    after_3:
    // 0x80206F04: jal         0x8022342C
    // 0x80206F08: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8022342C(rdram, ctx);
        goto after_4;
    // 0x80206F08: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_4:
    // 0x80206F0C: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80206F10: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80206F14: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x80206F18: beq         $v0, $zero, L_80206F40
    if (ctx->r2 == 0) {
        // 0x80206F1C: nop
    
            goto L_80206F40;
    }
    // 0x80206F1C: nop

    // 0x80206F20: lw          $t6, -0x4160($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4160);
    // 0x80206F24: addiu       $at, $zero, 0x2D8
    ctx->r1 = ADD32(0, 0X2D8);
    // 0x80206F28: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x80206F2C: subu        $a1, $t4, $t6
    ctx->r5 = SUB32(ctx->r12, ctx->r14);
    // 0x80206F30: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x80206F34: mflo        $a1
    ctx->r5 = lo;
    // 0x80206F38: jalr        $v0
    // 0x80206F3C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80206F3C: nop

    after_5:
L_80206F40:
    // 0x80206F40: jal         0x8022337C
    // 0x80206F44: nop

    func_8022337C(rdram, ctx);
        goto after_6;
    // 0x80206F44: nop

    after_6:
    // 0x80206F48: b           L_80207008
    // 0x80206F4C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
        goto L_80207008;
    // 0x80206F4C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
L_80206F50:
    // 0x80206F50: jal         0x8022331C
    // 0x80206F54: nop

    func_8022331C(rdram, ctx);
        goto after_7;
    // 0x80206F54: nop

    after_7:
    // 0x80206F58: lui         $a0, 0x4E2
    ctx->r4 = S32(0X4E2 << 16);
    // 0x80206F5C: jal         0x802233EC
    // 0x80206F60: ori         $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 | 0XFFF;
    func_802233EC(rdram, ctx);
        goto after_8;
    // 0x80206F60: ori         $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 | 0XFFF;
    after_8:
    // 0x80206F64: jal         0x8022342C
    // 0x80206F68: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8022342C(rdram, ctx);
        goto after_9;
    // 0x80206F68: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_9:
    // 0x80206F6C: jal         0x8022D794
    // 0x80206F70: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    func_8022D794(rdram, ctx);
        goto after_10;
    // 0x80206F70: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    after_10:
    // 0x80206F74: jal         0x8022337C
    // 0x80206F78: nop

    func_8022337C(rdram, ctx);
        goto after_11;
    // 0x80206F78: nop

    after_11:
    // 0x80206F7C: b           L_80207008
    // 0x80206F80: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
        goto L_80207008;
    // 0x80206F80: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
L_80206F84:
    // 0x80206F84: lw          $t9, 0x14($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X14);
    // 0x80206F88: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x80206F8C: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80206F90: lhu         $t1, 0x0($t9)
    ctx->r9 = MEM_HU(ctx->r25, 0X0);
    // 0x80206F94: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x80206F98: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80206F9C: addu        $t2, $t8, $t0
    ctx->r10 = ADD32(ctx->r24, ctx->r8);
    // 0x80206FA0: jal         0x80223108
    // 0x80206FA4: lw          $s0, 0x0($t2)
    ctx->r16 = MEM_W(ctx->r10, 0X0);
    func_80223108(rdram, ctx);
        goto after_12;
    // 0x80206FA4: lw          $s0, 0x0($t2)
    ctx->r16 = MEM_W(ctx->r10, 0X0);
    after_12:
    // 0x80206FA8: lbu         $a2, 0x1($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X1);
    // 0x80206FAC: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x80206FB0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80206FB4: sll         $t4, $a2, 3
    ctx->r12 = S32(ctx->r6 << 3);
    // 0x80206FB8: addu        $t6, $t3, $t4
    ctx->r14 = ADD32(ctx->r11, ctx->r12);
    // 0x80206FBC: lbu         $t5, 0x5($t6)
    ctx->r13 = MEM_BU(ctx->r14, 0X5);
    // 0x80206FC0: beql        $t5, $zero, L_80206FF4
    if (ctx->r13 == 0) {
        // 0x80206FC4: lw          $a0, 0x14($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X14);
            goto L_80206FF4;
    }
    goto skip_8;
    // 0x80206FC4: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    skip_8:
    // 0x80206FC8: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80206FCC: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x80206FD0: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x80206FD4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80206FD8: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80206FDC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80206FE0: jal         0x8022F7F4
    // 0x80206FE4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_8022F7F4(rdram, ctx);
        goto after_13;
    // 0x80206FE4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_13:
    // 0x80206FE8: b           L_80206FFC
    // 0x80206FEC: nop

        goto L_80206FFC;
    // 0x80206FEC: nop

    // 0x80206FF0: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
L_80206FF4:
    // 0x80206FF4: jal         0x8022F490
    // 0x80206FF8: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    func_8022F490(rdram, ctx);
        goto after_14;
    // 0x80206FF8: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    after_14:
L_80206FFC:
    // 0x80206FFC: jal         0x802230E4
    // 0x80207000: nop

    func_802230E4(rdram, ctx);
        goto after_15;
    // 0x80207000: nop

    after_15:
L_80207004:
    // 0x80207004: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
L_80207008:
    // 0x80207008: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8020700C: bnel        $s2, $t7, L_80206D84
    if (ctx->r18 != ctx->r15) {
        // 0x80207010: lw          $t0, 0x54($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X54);
            goto L_80206D84;
    }
    goto skip_9;
    // 0x80207010: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    skip_9:
L_80207014:
    // 0x80207014: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80207018: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8020701C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80207020: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80207024: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80207028: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x8020702C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80207030: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80207034: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80207038: jr          $ra
    // 0x8020703C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8020703C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8023FCE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FCE0: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x8023FCE4: sll         $v0, $a2, 4
    ctx->r2 = S32(ctx->r6 << 4);
    // 0x8023FCE8: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8023FCEC: sw          $a1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r5;
    // 0x8023FCF0: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x8023FCF4: lbu         $t8, 0x1($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X1);
    // 0x8023FCF8: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x8023FCFC: sb          $t8, 0x7($t0)
    MEM_B(0X7, ctx->r8) = ctx->r24;
    // 0x8023FD00: lw          $t2, 0x60($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X60);
    // 0x8023FD04: lbu         $t1, 0x0($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X0);
    // 0x8023FD08: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x8023FD0C: sb          $t1, 0x9($t3)
    MEM_B(0X9, ctx->r11) = ctx->r9;
    // 0x8023FD10: lw          $t5, 0x60($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X60);
    // 0x8023FD14: lbu         $t4, 0x2($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X2);
    // 0x8023FD18: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x8023FD1C: sb          $t4, 0x8($t6)
    MEM_B(0X8, ctx->r14) = ctx->r12;
    // 0x8023FD20: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x8023FD24: lh          $t7, 0xC($a1)
    ctx->r15 = MEM_H(ctx->r5, 0XC);
    // 0x8023FD28: addu        $t8, $t9, $v0
    ctx->r24 = ADD32(ctx->r25, ctx->r2);
    // 0x8023FD2C: jr          $ra
    // 0x8023FD30: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
    return;
    // 0x8023FD30: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
;}
RECOMP_FUNC void func_8022C46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C46C: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x8022C470: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8022C474: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8022C478: jr          $ra
    // 0x8022C47C: lbu         $v0, 0x6131($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6131);
    return;
    // 0x8022C47C: lbu         $v0, 0x6131($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6131);
;}
RECOMP_FUNC void func_8022C354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C354: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022C358: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8022C35C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022C360: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022C364: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022C368: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8022C36C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022C370: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022C374: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022C378: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C37C: lui         $s1, 0x8027
    ctx->r17 = S32(0X8027 << 16);
    // 0x8022C380: lui         $s2, 0x8025
    ctx->r18 = S32(0X8025 << 16);
    // 0x8022C384: lui         $s6, 0x8025
    ctx->r22 = S32(0X8025 << 16);
    // 0x8022C388: lui         $fp, 0x8025
    ctx->r30 = S32(0X8025 << 16);
    // 0x8022C38C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022C390: addiu       $fp, $fp, 0x4334
    ctx->r30 = ADD32(ctx->r30, 0X4334);
    // 0x8022C394: addiu       $s6, $s6, 0x4344
    ctx->r22 = ADD32(ctx->r22, 0X4344);
    // 0x8022C398: addiu       $s2, $s2, 0x42FC
    ctx->r18 = ADD32(ctx->r18, 0X42FC);
    // 0x8022C39C: addiu       $s1, $s1, 0x6130
    ctx->r17 = ADD32(ctx->r17, 0X6130);
    // 0x8022C3A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022C3A4: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8022C3A8: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x8022C3AC: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x8022C3B0: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
L_8022C3B4:
    // 0x8022C3B4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8022C3B8: jal         0x80231A24
    // 0x8022C3BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022C3BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x8022C3C0: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8022C3C4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022C3C8: beq         $v0, $s3, L_8022C3E8
    if (ctx->r2 == ctx->r19) {
        // 0x8022C3CC: nop
    
            goto L_8022C3E8;
    }
    // 0x8022C3CC: nop

    // 0x8022C3D0: beq         $v0, $s4, L_8022C3F8
    if (ctx->r2 == ctx->r20) {
        // 0x8022C3D4: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_8022C3F8;
    }
    // 0x8022C3D4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022C3D8: beq         $v0, $s5, L_8022C408
    if (ctx->r2 == ctx->r21) {
        // 0x8022C3DC: nop
    
            goto L_8022C408;
    }
    // 0x8022C3DC: nop

    // 0x8022C3E0: b           L_8022C418
    // 0x8022C3E4: nop

        goto L_8022C418;
    // 0x8022C3E4: nop

L_8022C3E8:
    // 0x8022C3E8: jal         0x80231A24
    // 0x8022C3EC: addiu       $a0, $a0, 0x4314
    ctx->r4 = ADD32(ctx->r4, 0X4314);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022C3EC: addiu       $a0, $a0, 0x4314
    ctx->r4 = ADD32(ctx->r4, 0X4314);
    after_1:
    // 0x8022C3F0: b           L_8022C424
    // 0x8022C3F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8022C424;
    // 0x8022C3F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8022C3F8:
    // 0x8022C3F8: jal         0x80231A24
    // 0x8022C3FC: addiu       $a0, $a0, 0x4324
    ctx->r4 = ADD32(ctx->r4, 0X4324);
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x8022C3FC: addiu       $a0, $a0, 0x4324
    ctx->r4 = ADD32(ctx->r4, 0X4324);
    after_2:
    // 0x8022C400: b           L_8022C424
    // 0x8022C404: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8022C424;
    // 0x8022C404: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8022C408:
    // 0x8022C408: jal         0x80231A24
    // 0x8022C40C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x8022C40C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_3:
    // 0x8022C410: b           L_8022C424
    // 0x8022C414: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8022C424;
    // 0x8022C414: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8022C418:
    // 0x8022C418: jal         0x80231A24
    // 0x8022C41C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80231A24(rdram, ctx);
        goto after_4;
    // 0x8022C41C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_4:
    // 0x8022C420: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8022C424:
    // 0x8022C424: bne         $s0, $s7, L_8022C3B4
    if (ctx->r16 != ctx->r23) {
        // 0x8022C428: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_8022C3B4;
    }
    // 0x8022C428: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x8022C42C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022C430: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022C434: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C438: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022C43C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022C440: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022C444: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C448: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022C44C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8022C450: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8022C454: jr          $ra
    // 0x8022C458: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8022C458: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
