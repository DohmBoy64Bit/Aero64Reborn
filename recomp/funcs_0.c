#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8023CD4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023CD4C: jr          $ra
    // 0x8023CD50: sh          $a1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r5;
    return;
    // 0x8023CD50: sh          $a1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80231150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231150: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80231154: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80231158: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023115C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80231160: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80231164: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80231168: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x8023116C: ori         $v0, $v0, 0xA800
    ctx->r2 = ctx->r2 | 0XA800;
    // 0x80231170: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
L_80231174:
    // 0x80231174: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80231178: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8023117C: bne         $at, $zero, L_80231174
    if (ctx->r1 != 0) {
        // 0x80231180: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_80231174;
    }
    // 0x80231180: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x80231184: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80231188: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8023118C: ori         $v1, $v1, 0x5800
    ctx->r3 = ctx->r3 | 0X5800;
L_80231190:
    // 0x80231190: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80231194: sw          $zero, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = 0;
    // 0x80231198: sw          $zero, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = 0;
    // 0x8023119C: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x802311A0: bne         $v0, $v1, L_80231190
    if (ctx->r2 != ctx->r3) {
        // 0x802311A4: sw          $zero, -0x10($v0)
        MEM_W(-0X10, ctx->r2) = 0;
            goto L_80231190;
    }
    // 0x802311A4: sw          $zero, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = 0;
    // 0x802311A8: jal         0x8023E3A0
    // 0x802311AC: nop

    func_8023E3A0(rdram, ctx);
        goto after_0;
    // 0x802311AC: nop

    after_0:
    // 0x802311B0: lui         $s1, 0xFF
    ctx->r17 = S32(0XFF << 16);
    // 0x802311B4: ori         $s1, $s1, 0xB000
    ctx->r17 = ctx->r17 | 0XB000;
    // 0x802311B8: addiu       $s0, $sp, 0x3C
    ctx->r16 = ADD32(ctx->r29, 0X3C);
    // 0x802311BC: addiu       $s2, $sp, 0x7C
    ctx->r18 = ADD32(ctx->r29, 0X7C);
L_802311C0:
    // 0x802311C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802311C4: jal         0x8023E640
    // 0x802311C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8023E640(rdram, ctx);
        goto after_1;
    // 0x802311C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x802311CC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802311D0: bne         $s0, $s2, L_802311C0
    if (ctx->r16 != ctx->r18) {
        // 0x802311D4: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_802311C0;
    }
    // 0x802311D4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x802311D8: lbu         $t6, 0x3C($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3C);
    // 0x802311DC: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x802311E0: lbu         $v0, 0x3D($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X3D);
    // 0x802311E4: bne         $t6, $at, L_80231214
    if (ctx->r14 != ctx->r1) {
        // 0x802311E8: addiu       $at, $zero, 0x64
        ctx->r1 = ADD32(0, 0X64);
            goto L_80231214;
    }
    // 0x802311E8: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x802311EC: bne         $v0, $at, L_80231200
    if (ctx->r2 != ctx->r1) {
        // 0x802311F0: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_80231200;
    }
    // 0x802311F0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802311F4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802311F8: b           L_80231214
    // 0x802311FC: sw          $t7, 0xC0C($at)
    MEM_W(0XC0C, ctx->r1) = ctx->r15;
        goto L_80231214;
    // 0x802311FC: sw          $t7, 0xC0C($at)
    MEM_W(0XC0C, ctx->r1) = ctx->r15;
L_80231200:
    // 0x80231200: addiu       $at, $zero, 0x7A
    ctx->r1 = ADD32(0, 0X7A);
    // 0x80231204: bne         $v0, $at, L_80231214
    if (ctx->r2 != ctx->r1) {
        // 0x80231208: nop
    
            goto L_80231214;
    }
    // 0x80231208: nop

    // 0x8023120C: jal         0x8022B088
    // 0x80231210: nop

    func_8022B088(rdram, ctx);
        goto after_2;
    // 0x80231210: nop

    after_2:
L_80231214:
    // 0x80231214: lui         $s0, 0x8028
    ctx->r16 = S32(0X8028 << 16);
    // 0x80231218: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8023121C: addiu       $s0, $s0, 0x1068
    ctx->r16 = ADD32(ctx->r16, 0X1068);
    // 0x80231220: addiu       $t8, $t8, -0x34A0
    ctx->r24 = ADD32(ctx->r24, -0X34A0);
    // 0x80231224: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x80231228: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x8023122C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80231230: addiu       $a2, $a2, 0x169C
    ctx->r6 = ADD32(ctx->r6, 0X169C);
    // 0x80231234: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80231238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023123C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80231240: jal         0x80237210
    // 0x80231244: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    func_80237210(rdram, ctx);
        goto after_3;
    // 0x80231244: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    after_3:
    // 0x80231248: jal         0x80237360
    // 0x8023124C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80237360(rdram, ctx);
        goto after_4;
    // 0x8023124C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80231250: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80231254: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80231258: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023125C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80231260: jr          $ra
    // 0x80231264: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80231264: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80249230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249230: jr          $ra
    // 0x80249234: nop

    return;
    // 0x80249234: nop

;}
RECOMP_FUNC void func_8021D444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021D444: jr          $ra
    // 0x8021D448: nop

    return;
    // 0x8021D448: nop

;}
RECOMP_FUNC void func_802003C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802003C0: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x802003C4: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x802003C8: lw          $t6, 0x522C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X522C);
    // 0x802003CC: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x802003D0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802003D4: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x802003D8: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x802003DC: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x802003E0: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x802003E4: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x802003E8: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802003EC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802003F0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802003F4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802003F8: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802003FC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80200400: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80200404: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x80200408: jal         0x80223840
    // 0x8020040C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x8020040C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_0:
    // 0x80200410: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    // 0x80200414: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80200418: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x8020041C: addiu       $a2, $sp, 0x8C
    ctx->r6 = ADD32(ctx->r29, 0X8C);
    // 0x80200420: jal         0x8022393C
    // 0x80200424: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_1;
    // 0x80200424: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80200428: beq         $v0, $zero, L_80200964
    if (ctx->r2 == 0) {
        // 0x8020042C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80200964;
    }
    // 0x8020042C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80200430: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80200434: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80200438: addiu       $fp, $zero, 0xC
    ctx->r30 = ADD32(0, 0XC);
    // 0x8020043C: addiu       $s5, $sp, 0x78
    ctx->r21 = ADD32(ctx->r29, 0X78);
    // 0x80200440: lui         $at, 0x434F
    ctx->r1 = S32(0X434F << 16);
L_80200444:
    // 0x80200444: ori         $at, $at, 0x4D4D
    ctx->r1 = ctx->r1 | 0X4D4D;
    // 0x80200448: bne         $v0, $at, L_80200948
    if (ctx->r2 != ctx->r1) {
        // 0x8020044C: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_80200948;
    }
    // 0x8020044C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80200450: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x80200454: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x80200458: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8020045C: jal         0x8022B948
    // 0x80200460: sw          $t9, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r25;
    func_8022B948(rdram, ctx);
        goto after_2;
    // 0x80200460: sw          $t9, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r25;
    after_2:
    // 0x80200464: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    // 0x80200468: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020046C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200470: jal         0x80225424
    // 0x80200474: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_3;
    // 0x80200474: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x80200478: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x8020047C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200480: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80200484: jal         0x80225424
    // 0x80200488: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_80225424(rdram, ctx);
        goto after_4;
    // 0x80200488: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_4:
    // 0x8020048C: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x80200490: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200494: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80200498: jal         0x80225424
    // 0x8020049C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_80225424(rdram, ctx);
        goto after_5;
    // 0x8020049C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_5:
    // 0x802004A0: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x802004A4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802004A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802004AC: jal         0x80225424
    // 0x802004B0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_80225424(rdram, ctx);
        goto after_6;
    // 0x802004B0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_6:
    // 0x802004B4: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x802004B8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802004BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802004C0: jal         0x80225424
    // 0x802004C4: addiu       $a0, $a0, 0x9
    ctx->r4 = ADD32(ctx->r4, 0X9);
    func_80225424(rdram, ctx);
        goto after_7;
    // 0x802004C4: addiu       $a0, $a0, 0x9
    ctx->r4 = ADD32(ctx->r4, 0X9);
    after_7:
    // 0x802004C8: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x802004CC: lhu         $t0, 0x2($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X2);
    // 0x802004D0: lhu         $t1, 0x4($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X4);
    // 0x802004D4: lbu         $t3, 0x9($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X9);
    // 0x802004D8: div         $zero, $t0, $t1
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r9)));
    // 0x802004DC: mflo        $t2
    ctx->r10 = lo;
    // 0x802004E0: sh          $t2, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r10;
    // 0x802004E4: bne         $t1, $zero, L_802004F0
    if (ctx->r9 != 0) {
        // 0x802004E8: nop
    
            goto L_802004F0;
    }
    // 0x802004E8: nop

    // 0x802004EC: break       7
    do_break(2149582060);
L_802004F0:
    // 0x802004F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802004F4: bne         $t1, $at, L_80200508
    if (ctx->r9 != ctx->r1) {
        // 0x802004F8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80200508;
    }
    // 0x802004F8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802004FC: bne         $t0, $at, L_80200508
    if (ctx->r8 != ctx->r1) {
        // 0x80200500: nop
    
            goto L_80200508;
    }
    // 0x80200500: nop

    // 0x80200504: break       6
    do_break(2149582084);
L_80200508:
    // 0x80200508: blez        $t3, L_80200948
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8020050C: addiu       $a0, $zero, 0x20
        ctx->r4 = ADD32(0, 0X20);
            goto L_80200948;
    }
    // 0x8020050C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
L_80200510:
    // 0x80200510: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80200514: jal         0x8022B948
    // 0x80200518: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    func_8022B948(rdram, ctx);
        goto after_8;
    // 0x80200518: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_8:
    // 0x8020051C: beq         $s6, $zero, L_80200530
    if (ctx->r22 == 0) {
        // 0x80200520: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80200530;
    }
    // 0x80200520: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80200524: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    // 0x80200528: b           L_8020053C
    // 0x8020052C: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
        goto L_8020053C;
    // 0x8020052C: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
L_80200530:
    // 0x80200530: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x80200534: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x80200538: sw          $v0, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r2;
L_8020053C:
    // 0x8020053C: addiu       $a0, $s1, 0x6
    ctx->r4 = ADD32(ctx->r17, 0X6);
    // 0x80200540: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200544: jal         0x80225424
    // 0x80200548: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_9;
    // 0x80200548: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_9:
    // 0x8020054C: addiu       $a0, $s1, 0x4
    ctx->r4 = ADD32(ctx->r17, 0X4);
    // 0x80200550: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200554: jal         0x80225424
    // 0x80200558: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_10;
    // 0x80200558: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_10:
    // 0x8020055C: addiu       $a0, $sp, 0x73
    ctx->r4 = ADD32(ctx->r29, 0X73);
    // 0x80200560: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200564: jal         0x80225424
    // 0x80200568: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_11;
    // 0x80200568: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x8020056C: lhu         $a0, 0x6($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X6);
    // 0x80200570: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
    // 0x80200574: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80200578: sll         $t5, $a0, 1
    ctx->r13 = S32(ctx->r4 << 1);
    // 0x8020057C: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    // 0x80200580: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    // 0x80200584: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x80200588: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x8020058C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80200590: jal         0x8022B948
    // 0x80200594: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8022B948(rdram, ctx);
        goto after_12;
    // 0x80200594: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
    // 0x80200598: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x8020059C: lbu         $v1, 0x73($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X73);
    // 0x802005A0: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x802005A4: beql        $t6, $zero, L_802005DC
    if (ctx->r14 == 0) {
        // 0x802005A8: andi        $t8, $v1, 0x2
        ctx->r24 = ctx->r3 & 0X2;
            goto L_802005DC;
    }
    goto skip_0;
    // 0x802005A8: andi        $t8, $v1, 0x2
    ctx->r24 = ctx->r3 & 0X2;
    skip_0:
    // 0x802005AC: lhu         $a0, 0x6($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X6);
    // 0x802005B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802005B4: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x802005B8: jal         0x8022B948
    // 0x802005BC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8022B948(rdram, ctx);
        goto after_13;
    // 0x802005BC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_13:
    // 0x802005C0: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x802005C4: lhu         $a0, 0x6($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X6);
    // 0x802005C8: jal         0x8022B948
    // 0x802005CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022B948(rdram, ctx);
        goto after_14;
    // 0x802005CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x802005D0: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x802005D4: lbu         $v1, 0x73($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X73);
    // 0x802005D8: andi        $t8, $v1, 0x2
    ctx->r24 = ctx->r3 & 0X2;
L_802005DC:
    // 0x802005DC: beql        $t8, $zero, L_80200608
    if (ctx->r24 == 0) {
        // 0x802005E0: andi        $t0, $v1, 0x4
        ctx->r8 = ctx->r3 & 0X4;
            goto L_80200608;
    }
    goto skip_1;
    // 0x802005E0: andi        $t0, $v1, 0x4
    ctx->r8 = ctx->r3 & 0X4;
    skip_1:
    // 0x802005E4: lhu         $a0, 0x6($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X6);
    // 0x802005E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802005EC: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x802005F0: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x802005F4: jal         0x8022B948
    // 0x802005F8: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    func_8022B948(rdram, ctx);
        goto after_15;
    // 0x802005F8: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    after_15:
    // 0x802005FC: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x80200600: lbu         $v1, 0x73($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X73);
    // 0x80200604: andi        $t0, $v1, 0x4
    ctx->r8 = ctx->r3 & 0X4;
L_80200608:
    // 0x80200608: beql        $t0, $zero, L_80200630
    if (ctx->r8 == 0) {
        // 0x8020060C: lhu         $t2, 0x6($s1)
        ctx->r10 = MEM_HU(ctx->r17, 0X6);
            goto L_80200630;
    }
    goto skip_2;
    // 0x8020060C: lhu         $t2, 0x6($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X6);
    skip_2:
    // 0x80200610: lhu         $a0, 0x6($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X6);
    // 0x80200614: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80200618: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x8020061C: subu        $t1, $t1, $a0
    ctx->r9 = SUB32(ctx->r9, ctx->r4);
    // 0x80200620: jal         0x8022B948
    // 0x80200624: sll         $a0, $t1, 2
    ctx->r4 = S32(ctx->r9 << 2);
    func_8022B948(rdram, ctx);
        goto after_16;
    // 0x80200624: sll         $a0, $t1, 2
    ctx->r4 = S32(ctx->r9 << 2);
    after_16:
    // 0x80200628: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x8020062C: lhu         $t2, 0x6($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X6);
L_80200630:
    // 0x80200630: blezl       $t2, L_80200884
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80200634: lw          $t0, 0x8($s1)
        ctx->r8 = MEM_W(ctx->r17, 0X8);
            goto L_80200884;
    }
    goto skip_3;
    // 0x80200634: lw          $t0, 0x8($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X8);
    skip_3:
    // 0x80200638: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8020063C: addiu       $a0, $sp, 0x62
    ctx->r4 = ADD32(ctx->r29, 0X62);
L_80200640:
    // 0x80200640: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200644: jal         0x80225424
    // 0x80200648: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_17;
    // 0x80200648: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_17:
    // 0x8020064C: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80200650: lhu         $t3, 0x62($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X62);
    // 0x80200654: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200658: beq         $v0, $zero, L_8020066C
    if (ctx->r2 == 0) {
        // 0x8020065C: andi        $t4, $t3, 0x8000
        ctx->r12 = ctx->r11 & 0X8000;
            goto L_8020066C;
    }
    // 0x8020065C: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x80200660: sltu        $t5, $zero, $t4
    ctx->r13 = 0 < ctx->r12 ? 1 : 0;
    // 0x80200664: addu        $t6, $v0, $s3
    ctx->r14 = ADD32(ctx->r2, ctx->r19);
    // 0x80200668: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
L_8020066C:
    // 0x8020066C: lhu         $v0, 0x62($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X62);
    // 0x80200670: lw          $t1, 0xC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC);
    // 0x80200674: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80200678: andi        $v1, $v0, 0x4000
    ctx->r3 = ctx->r2 & 0X4000;
    // 0x8020067C: andi        $s4, $v0, 0x2000
    ctx->r20 = ctx->r2 & 0X2000;
    // 0x80200680: andi        $s7, $v0, 0x1000
    ctx->r23 = ctx->r2 & 0X1000;
    // 0x80200684: sltu        $t7, $zero, $v1
    ctx->r15 = 0 < ctx->r3 ? 1 : 0;
    // 0x80200688: sltu        $t8, $zero, $s4
    ctx->r24 = 0 < ctx->r20 ? 1 : 0;
    // 0x8020068C: sltu        $t9, $zero, $s7
    ctx->r25 = 0 < ctx->r23 ? 1 : 0;
    // 0x80200690: andi        $t0, $v0, 0xFFF
    ctx->r8 = ctx->r2 & 0XFFF;
    // 0x80200694: addu        $t2, $t1, $s2
    ctx->r10 = ADD32(ctx->r9, ctx->r18);
    // 0x80200698: or          $s4, $t8, $zero
    ctx->r20 = ctx->r24 | 0;
    // 0x8020069C: or          $s7, $t9, $zero
    ctx->r23 = ctx->r25 | 0;
    // 0x802006A0: beq         $t7, $zero, L_80200708
    if (ctx->r15 == 0) {
        // 0x802006A4: sh          $t0, 0x0($t2)
        MEM_H(0X0, ctx->r10) = ctx->r8;
            goto L_80200708;
    }
    // 0x802006A4: sh          $t0, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r8;
    // 0x802006A8: lw          $t3, 0x18($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X18);
    // 0x802006AC: sll         $s0, $s3, 4
    ctx->r16 = S32(ctx->r19 << 4);
    // 0x802006B0: jal         0x80225424
    // 0x802006B4: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    func_80225424(rdram, ctx);
        goto after_18;
    // 0x802006B4: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_18:
    // 0x802006B8: lw          $t4, 0x18($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X18);
    // 0x802006BC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802006C0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x802006C4: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x802006C8: jal         0x80225424
    // 0x802006CC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_80225424(rdram, ctx);
        goto after_19;
    // 0x802006CC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_19:
    // 0x802006D0: lw          $t5, 0x18($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X18);
    // 0x802006D4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802006D8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x802006DC: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    // 0x802006E0: jal         0x80225424
    // 0x802006E4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_80225424(rdram, ctx);
        goto after_20;
    // 0x802006E4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_20:
    // 0x802006E8: lw          $t6, 0x18($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X18);
    // 0x802006EC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802006F0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x802006F4: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    // 0x802006F8: jal         0x80225424
    // 0x802006FC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_80225424(rdram, ctx);
        goto after_21;
    // 0x802006FC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_21:
    // 0x80200700: b           L_80200740
    // 0x80200704: nop

        goto L_80200740;
    // 0x80200704: nop

L_80200708:
    // 0x80200708: lw          $v1, 0x18($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X18);
    // 0x8020070C: sll         $v0, $s3, 4
    ctx->r2 = S32(ctx->r19 << 4);
    // 0x80200710: beq         $v1, $zero, L_80200740
    if (ctx->r3 == 0) {
        // 0x80200714: addu        $t7, $v1, $v0
        ctx->r15 = ADD32(ctx->r3, ctx->r2);
            goto L_80200740;
    }
    // 0x80200714: addu        $t7, $v1, $v0
    ctx->r15 = ADD32(ctx->r3, ctx->r2);
    // 0x80200718: swc1        $f20, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f20.u32l;
    // 0x8020071C: lw          $t8, 0x18($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X18);
    // 0x80200720: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80200724: swc1        $f20, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f20.u32l;
    // 0x80200728: lw          $t1, 0x18($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X18);
    // 0x8020072C: addu        $t0, $t1, $v0
    ctx->r8 = ADD32(ctx->r9, ctx->r2);
    // 0x80200730: swc1        $f20, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f20.u32l;
    // 0x80200734: lw          $t2, 0x18($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X18);
    // 0x80200738: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x8020073C: swc1        $f22, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f22.u32l;
L_80200740:
    // 0x80200740: beql        $s4, $zero, L_802007A4
    if (ctx->r20 == 0) {
        // 0x80200744: lw          $v0, 0x10($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X10);
            goto L_802007A4;
    }
    goto skip_4;
    // 0x80200744: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    skip_4:
    // 0x80200748: multu       $s3, $fp
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8020074C: lw          $t4, 0x10($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X10);
    // 0x80200750: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200754: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80200758: mflo        $s0
    ctx->r16 = lo;
    // 0x8020075C: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x80200760: jal         0x80225424
    // 0x80200764: nop

    func_80225424(rdram, ctx);
        goto after_22;
    // 0x80200764: nop

    after_22:
    // 0x80200768: lw          $t5, 0x10($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X10);
    // 0x8020076C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200770: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80200774: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    // 0x80200778: jal         0x80225424
    // 0x8020077C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_80225424(rdram, ctx);
        goto after_23;
    // 0x8020077C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_23:
    // 0x80200780: lw          $t6, 0x10($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X10);
    // 0x80200784: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200788: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8020078C: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    // 0x80200790: jal         0x80225424
    // 0x80200794: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_80225424(rdram, ctx);
        goto after_24;
    // 0x80200794: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_24:
    // 0x80200798: b           L_802007D4
    // 0x8020079C: nop

        goto L_802007D4;
    // 0x8020079C: nop

    // 0x802007A0: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
L_802007A4:
    // 0x802007A4: beq         $v0, $zero, L_802007D4
    if (ctx->r2 == 0) {
        // 0x802007A8: nop
    
            goto L_802007D4;
    }
    // 0x802007A8: nop

    // 0x802007AC: multu       $s3, $fp
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802007B0: mflo        $s0
    ctx->r16 = lo;
    // 0x802007B4: addu        $t7, $v0, $s0
    ctx->r15 = ADD32(ctx->r2, ctx->r16);
    // 0x802007B8: swc1        $f20, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f20.u32l;
    // 0x802007BC: lw          $t8, 0x10($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X10);
    // 0x802007C0: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x802007C4: swc1        $f20, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f20.u32l;
    // 0x802007C8: lw          $t1, 0x10($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X10);
    // 0x802007CC: addu        $t0, $t1, $s0
    ctx->r8 = ADD32(ctx->r9, ctx->r16);
    // 0x802007D0: swc1        $f20, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f20.u32l;
L_802007D4:
    // 0x802007D4: beql        $s7, $zero, L_80200838
    if (ctx->r23 == 0) {
        // 0x802007D8: lw          $v0, 0x14($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X14);
            goto L_80200838;
    }
    goto skip_5;
    // 0x802007D8: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    skip_5:
    // 0x802007DC: multu       $s3, $fp
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802007E0: lw          $t2, 0x14($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X14);
    // 0x802007E4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802007E8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x802007EC: mflo        $s0
    ctx->r16 = lo;
    // 0x802007F0: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    // 0x802007F4: jal         0x80225424
    // 0x802007F8: nop

    func_80225424(rdram, ctx);
        goto after_25;
    // 0x802007F8: nop

    after_25:
    // 0x802007FC: lw          $t3, 0x14($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X14);
    // 0x80200800: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200804: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80200808: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    // 0x8020080C: jal         0x80225424
    // 0x80200810: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_80225424(rdram, ctx);
        goto after_26;
    // 0x80200810: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_26:
    // 0x80200814: lw          $t4, 0x14($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X14);
    // 0x80200818: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8020081C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80200820: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x80200824: jal         0x80225424
    // 0x80200828: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_80225424(rdram, ctx);
        goto after_27;
    // 0x80200828: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_27:
    // 0x8020082C: b           L_8020086C
    // 0x80200830: lhu         $t1, 0x6($s6)
    ctx->r9 = MEM_HU(ctx->r22, 0X6);
        goto L_8020086C;
    // 0x80200830: lhu         $t1, 0x6($s6)
    ctx->r9 = MEM_HU(ctx->r22, 0X6);
    // 0x80200834: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
L_80200838:
    // 0x80200838: beql        $v0, $zero, L_8020086C
    if (ctx->r2 == 0) {
        // 0x8020083C: lhu         $t1, 0x6($s6)
        ctx->r9 = MEM_HU(ctx->r22, 0X6);
            goto L_8020086C;
    }
    goto skip_6;
    // 0x8020083C: lhu         $t1, 0x6($s6)
    ctx->r9 = MEM_HU(ctx->r22, 0X6);
    skip_6:
    // 0x80200840: multu       $s3, $fp
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80200844: mflo        $s0
    ctx->r16 = lo;
    // 0x80200848: addu        $t5, $v0, $s0
    ctx->r13 = ADD32(ctx->r2, ctx->r16);
    // 0x8020084C: swc1        $f22, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f22.u32l;
    // 0x80200850: lw          $t6, 0x14($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X14);
    // 0x80200854: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x80200858: swc1        $f22, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f22.u32l;
    // 0x8020085C: lw          $t8, 0x14($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X14);
    // 0x80200860: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x80200864: swc1        $f22, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f22.u32l;
    // 0x80200868: lhu         $t1, 0x6($s6)
    ctx->r9 = MEM_HU(ctx->r22, 0X6);
L_8020086C:
    // 0x8020086C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80200870: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x80200874: slt         $at, $s3, $t1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80200878: bnel        $at, $zero, L_80200640
    if (ctx->r1 != 0) {
        // 0x8020087C: addiu       $a0, $sp, 0x62
        ctx->r4 = ADD32(ctx->r29, 0X62);
            goto L_80200640;
    }
    goto skip_7;
    // 0x8020087C: addiu       $a0, $sp, 0x62
    ctx->r4 = ADD32(ctx->r29, 0X62);
    skip_7:
    // 0x80200880: lw          $t0, 0x8($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X8);
L_80200884:
    // 0x80200884: lw          $a2, 0x9C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X9C);
    // 0x80200888: beql        $t0, $zero, L_80200924
    if (ctx->r8 == 0) {
        // 0x8020088C: lw          $v0, 0x84($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X84);
            goto L_80200924;
    }
    goto skip_8;
    // 0x8020088C: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
    skip_8:
    // 0x80200890: lhu         $t2, 0x2($a2)
    ctx->r10 = MEM_HU(ctx->r6, 0X2);
    // 0x80200894: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80200898: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8020089C: blezl       $t2, L_80200924
    if (SIGNED(ctx->r10) <= 0) {
        // 0x802008A0: lw          $v0, 0x84($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X84);
            goto L_80200924;
    }
    goto skip_9;
    // 0x802008A0: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
    skip_9:
    // 0x802008A4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802008A8: lw          $t3, 0xC($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC);
L_802008AC:
    // 0x802008AC: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x802008B0: addu        $v1, $t3, $s2
    ctx->r3 = ADD32(ctx->r11, ctx->r18);
    // 0x802008B4: lhu         $t4, 0x2($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X2);
    // 0x802008B8: addu        $t8, $a1, $a0
    ctx->r24 = ADD32(ctx->r5, ctx->r4);
    // 0x802008BC: slt         $at, $a0, $t4
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x802008C0: bnel        $at, $zero, L_8020090C
    if (ctx->r1 != 0) {
        // 0x802008C4: sb          $s3, 0x0($t8)
        MEM_B(0X0, ctx->r24) = ctx->r19;
            goto L_8020090C;
    }
    goto skip_10;
    // 0x802008C4: sb          $s3, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r19;
    skip_10:
    // 0x802008C8: lhu         $t5, 0x6($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X6);
    // 0x802008CC: addiu       $v0, $s3, 0x1
    ctx->r2 = ADD32(ctx->r19, 0X1);
    // 0x802008D0: slt         $at, $v0, $t5
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x802008D4: beql        $at, $zero, L_8020090C
    if (ctx->r1 == 0) {
        // 0x802008D8: sb          $s3, 0x0($t8)
        MEM_B(0X0, ctx->r24) = ctx->r19;
            goto L_8020090C;
    }
    goto skip_11;
    // 0x802008D8: sb          $s3, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r19;
    skip_11:
    // 0x802008DC: lhu         $t6, 0x4($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X4);
L_802008E0:
    // 0x802008E0: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x802008E4: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x802008E8: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x802008EC: bne         $at, $zero, L_80200908
    if (ctx->r1 != 0) {
        // 0x802008F0: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_80200908;
    }
    // 0x802008F0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x802008F4: lhu         $t7, 0x6($s6)
    ctx->r15 = MEM_HU(ctx->r22, 0X6);
    // 0x802008F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802008FC: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80200900: bnel        $at, $zero, L_802008E0
    if (ctx->r1 != 0) {
        // 0x80200904: lhu         $t6, 0x4($v1)
        ctx->r14 = MEM_HU(ctx->r3, 0X4);
            goto L_802008E0;
    }
    goto skip_12;
    // 0x80200904: lhu         $t6, 0x4($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X4);
    skip_12:
L_80200908:
    // 0x80200908: sb          $s3, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r19;
L_8020090C:
    // 0x8020090C: lhu         $t9, 0x2($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X2);
    // 0x80200910: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80200914: slt         $at, $a0, $t9
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80200918: bnel        $at, $zero, L_802008AC
    if (ctx->r1 != 0) {
        // 0x8020091C: lw          $t3, 0xC($s1)
        ctx->r11 = MEM_W(ctx->r17, 0XC);
            goto L_802008AC;
    }
    goto skip_13;
    // 0x8020091C: lw          $t3, 0xC($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC);
    skip_13:
    // 0x80200920: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
L_80200924:
    // 0x80200924: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x80200928: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020092C: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    // 0x80200930: lbu         $t0, 0x9($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X9);
    // 0x80200934: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80200938: bnel        $at, $zero, L_80200510
    if (ctx->r1 != 0) {
        // 0x8020093C: addiu       $a0, $zero, 0x20
        ctx->r4 = ADD32(0, 0X20);
            goto L_80200510;
    }
    goto skip_14;
    // 0x8020093C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    skip_14:
    // 0x80200940: b           L_8020094C
    // 0x80200944: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
        goto L_8020094C;
    // 0x80200944: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
L_80200948:
    // 0x80200948: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
L_8020094C:
    // 0x8020094C: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x80200950: addiu       $a2, $sp, 0x8C
    ctx->r6 = ADD32(ctx->r29, 0X8C);
    // 0x80200954: jal         0x8022393C
    // 0x80200958: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_28;
    // 0x80200958: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_28:
    // 0x8020095C: bnel        $v0, $zero, L_80200444
    if (ctx->r2 != 0) {
        // 0x80200960: lui         $at, 0x434F
        ctx->r1 = S32(0X434F << 16);
            goto L_80200444;
    }
    goto skip_15;
    // 0x80200960: lui         $at, 0x434F
    ctx->r1 = S32(0X434F << 16);
    skip_15:
L_80200964:
    // 0x80200964: jal         0x802238F0
    // 0x80200968: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    func_802238F0(rdram, ctx);
        goto after_29;
    // 0x80200968: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    after_29:
    // 0x8020096C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80200970: lw          $v0, 0x9C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X9C);
    // 0x80200974: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80200978: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x8020097C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80200980: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80200984: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80200988: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8020098C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80200990: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80200994: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80200998: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8020099C: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x802009A0: jr          $ra
    // 0x802009A4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x802009A4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_8022975C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022975C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x80229760: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80229764: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80229768: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8022976C: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x80229770: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80229774: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x80229778: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x8022977C: sw          $v1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r3;
    // 0x80229780: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x80229784: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x80229788: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x8022978C: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x80229790: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x80229794: sw          $zero, 0x30($a0)
    MEM_W(0X30, ctx->r4) = 0;
    // 0x80229798: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x8022979C: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x802297A0: jr          $ra
    // 0x802297A4: sw          $zero, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = 0;
    return;
    // 0x802297A4: sw          $zero, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8021E83C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E83C: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8021E840: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x8021E844: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021E848: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x8021E84C: lw          $t8, -0x187C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X187C);
    // 0x8021E850: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021E854: lw          $t7, 0x44($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X44);
    // 0x8021E858: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8021E85C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8021E860: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8021E864: jal         0x8021E73C
    // 0x8021E868: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_8021E73C(rdram, ctx);
        goto after_0;
    // 0x8021E868: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_0:
    // 0x8021E86C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021E870: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021E874: jr          $ra
    // 0x8021E878: nop

    return;
    // 0x8021E878: nop

;}
RECOMP_FUNC void func_8023D380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D380: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023D384: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023D388: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8023D38C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8023D390: jal         0x80246C00
    // 0x8023D394: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80246C00(rdram, ctx);
        goto after_0;
    // 0x8023D394: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023D398: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8023D39C: jal         0x8023E640
    // 0x8023D3A0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8023E640(rdram, ctx);
        goto after_1;
    // 0x8023D3A0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x8023D3A4: jal         0x80246C44
    // 0x8023D3A8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_80246C44(rdram, ctx);
        goto after_2;
    // 0x8023D3A8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_2:
    // 0x8023D3AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023D3B0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8023D3B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023D3B8: jr          $ra
    // 0x8023D3BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8023D3BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8024A840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A840: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024A844: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024A848: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8024A84C: jal         0x80241760
    // 0x8024A850: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x8024A850: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8024A854: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8024A858: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8024A85C: lw          $t6, 0x168C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X168C);
    // 0x8024A860: addiu       $at, $zero, -0x402
    ctx->r1 = ADD32(0, -0X402);
    // 0x8024A864: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x8024A868: nor         $t9, $t8, $zero
    ctx->r25 = ~(ctx->r24 | 0);
    // 0x8024A86C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8024A870: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A874: and         $t0, $t6, $t9
    ctx->r8 = ctx->r14 & ctx->r25;
    // 0x8024A878: sw          $t0, 0x168C($at)
    MEM_W(0X168C, ctx->r1) = ctx->r8;
    // 0x8024A87C: jal         0x80241780
    // 0x8024A880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80241780(rdram, ctx);
        goto after_1;
    // 0x8024A880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8024A884: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024A888: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024A88C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8024A890: jr          $ra
    // 0x8024A894: nop

    return;
    // 0x8024A894: nop

;}
RECOMP_FUNC void func_80245B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80245B14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80245B18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80245B1C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80245B20: addiu       $a0, $a0, 0x5F08
    ctx->r4 = ADD32(ctx->r4, 0X5F08);
    // 0x80245B24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80245B28: jal         0x80236B80
    // 0x80245B2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80236B80(rdram, ctx);
        goto after_0;
    // 0x80245B2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80245B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80245B34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80245B38: jr          $ra
    // 0x80245B3C: nop

    return;
    // 0x80245B3C: nop

;}
RECOMP_FUNC void func_8021D9E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021D9E0: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x8021D9E4: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8021D9E8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8021D9EC: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8021D9F0: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8021D9F4: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8021D9F8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8021D9FC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8021DA00: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8021DA04: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8021DA08: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8021DA0C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8021DA10: bne         $a1, $at, L_8021DA20
    if (ctx->r5 != ctx->r1) {
        // 0x8021DA14: sdc1        $f20, 0x18($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
            goto L_8021DA20;
    }
    // 0x8021DA14: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8021DA18: b           L_8021DCDC
    // 0x8021DA1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021DCDC;
    // 0x8021DA1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021DA20:
    // 0x8021DA20: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8021DA24: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x8021DA28: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x8021DA2C: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x8021DA30: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x8021DA34: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x8021DA38: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8021DA3C: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x8021DA40: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8021DA44: lw          $s7, 0x0($t9)
    ctx->r23 = MEM_W(ctx->r25, 0X0);
    // 0x8021DA48: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8021DA4C: lui         $t1, 0x8026
    ctx->r9 = S32(0X8026 << 16);
    // 0x8021DA50: lw          $t1, -0x4160($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4160);
    // 0x8021DA54: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x8021DA58: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8021DA5C: bne         $s7, $zero, L_8021DA7C
    if (ctx->r23 != 0) {
        // 0x8021DA60: addu        $fp, $t0, $t1
        ctx->r30 = ADD32(ctx->r8, ctx->r9);
            goto L_8021DA7C;
    }
    // 0x8021DA60: addu        $fp, $t0, $t1
    ctx->r30 = ADD32(ctx->r8, ctx->r9);
    // 0x8021DA64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8021DA68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021DA6C: jal         0x80222228
    // 0x8021DA70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80222228(rdram, ctx);
        goto after_0;
    // 0x8021DA70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021DA74: b           L_8021DCDC
    // 0x8021DA78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021DCDC;
    // 0x8021DA78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021DA7C:
    // 0x8021DA7C: lbu         $t2, 0x1C($s7)
    ctx->r10 = MEM_BU(ctx->r23, 0X1C);
    // 0x8021DA80: beql        $t2, $zero, L_8021DA9C
    if (ctx->r10 == 0) {
        // 0x8021DA84: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_8021DA9C;
    }
    goto skip_0;
    // 0x8021DA84: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_0:
    // 0x8021DA88: lwc1        $f4, 0x14($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0X14);
    // 0x8021DA8C: lwc1        $f6, 0x18($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X18);
    // 0x8021DA90: b           L_8021DAA0
    // 0x8021DA94: div.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
        goto L_8021DAA0;
    // 0x8021DA94: div.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021DA98: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_8021DA9C:
    // 0x8021DA9C: nop

L_8021DAA0:
    // 0x8021DAA0: jal         0x80220534
    // 0x8021DAA4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80220534(rdram, ctx);
        goto after_1;
    // 0x8021DAA4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x8021DAA8: lbu         $t3, 0x2E($s7)
    ctx->r11 = MEM_BU(ctx->r23, 0X2E);
    // 0x8021DAAC: beql        $t3, $zero, L_8021DAC8
    if (ctx->r11 == 0) {
        // 0x8021DAB0: sw          $zero, 0xBC($sp)
        MEM_W(0XBC, ctx->r29) = 0;
            goto L_8021DAC8;
    }
    goto skip_1;
    // 0x8021DAB0: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
    skip_1:
    // 0x8021DAB4: lbu         $a0, 0x0($s7)
    ctx->r4 = MEM_BU(ctx->r23, 0X0);
    // 0x8021DAB8: lbu         $a1, 0x1($s7)
    ctx->r5 = MEM_BU(ctx->r23, 0X1);
    // 0x8021DABC: jal         0x80222228
    // 0x8021DAC0: lbu         $a2, 0x2($s7)
    ctx->r6 = MEM_BU(ctx->r23, 0X2);
    func_80222228(rdram, ctx);
        goto after_2;
    // 0x8021DAC0: lbu         $a2, 0x2($s7)
    ctx->r6 = MEM_BU(ctx->r23, 0X2);
    after_2:
    // 0x8021DAC4: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
L_8021DAC8:
    // 0x8021DAC8: lbu         $t4, 0x34($s7)
    ctx->r12 = MEM_BU(ctx->r23, 0X34);
    // 0x8021DACC: lui         $s5, 0xFFDF
    ctx->r21 = S32(0XFFDF << 16);
    // 0x8021DAD0: ori         $s5, $s5, 0xFFFF
    ctx->r21 = ctx->r21 | 0XFFFF;
    // 0x8021DAD4: beq         $t4, $zero, L_8021DC98
    if (ctx->r12 == 0) {
        // 0x8021DAD8: nop
    
            goto L_8021DC98;
    }
    // 0x8021DAD8: nop

    // 0x8021DADC: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x8021DAE0: lw          $t5, 0x30($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X30);
L_8021DAE4:
    // 0x8021DAE4: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8021DAE8: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8021DAEC: lw          $t7, -0x18F0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X18F0);
    // 0x8021DAF0: addu        $a2, $t5, $t6
    ctx->r6 = ADD32(ctx->r13, ctx->r14);
    // 0x8021DAF4: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x8021DAF8: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8021DAFC: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x8021DB00: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x8021DB04: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8021DB08: lw          $s0, 0x0($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X0);
    // 0x8021DB0C: addiu       $a3, $a3, 0x3B90
    ctx->r7 = ADD32(ctx->r7, 0X3B90);
    // 0x8021DB10: lui         $t2, 0xF800
    ctx->r10 = S32(0XF800 << 16);
    // 0x8021DB14: bne         $s0, $zero, L_8021DB34
    if (ctx->r16 != 0) {
        // 0x8021DB18: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8021DB34;
    }
    // 0x8021DB18: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8021DB1C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021DB20: addiu       $a0, $a0, 0x3570
    ctx->r4 = ADD32(ctx->r4, 0X3570);
    // 0x8021DB24: jal         0x80231A24
    // 0x8021DB28: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x8021DB28: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_3:
    // 0x8021DB2C: b           L_8021DCDC
    // 0x8021DB30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021DCDC;
    // 0x8021DB30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021DB34:
    // 0x8021DB34: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x8021DB38: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8021DB3C: lbu         $s1, 0x2($a2)
    ctx->r17 = MEM_BU(ctx->r6, 0X2);
    // 0x8021DB40: lw          $s2, 0x0($a1)
    ctx->r18 = MEM_W(ctx->r5, 0X0);
    // 0x8021DB44: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x8021DB48: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x8021DB4C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x8021DB50: lbu         $t7, 0x5($s7)
    ctx->r15 = MEM_BU(ctx->r23, 0X5);
    // 0x8021DB54: lbu         $t4, 0x4($s7)
    ctx->r12 = MEM_BU(ctx->r23, 0X4);
    // 0x8021DB58: lbu         $t1, 0x6($s7)
    ctx->r9 = MEM_BU(ctx->r23, 0X6);
    // 0x8021DB5C: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8021DB60: sll         $t5, $t4, 24
    ctx->r13 = S32(ctx->r12 << 24);
    // 0x8021DB64: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x8021DB68: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x8021DB6C: or          $t3, $t9, $t2
    ctx->r11 = ctx->r25 | ctx->r10;
    // 0x8021DB70: ori         $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 | 0XFF;
    // 0x8021DB74: andi        $t6, $s1, 0x4
    ctx->r14 = ctx->r17 & 0X4;
    // 0x8021DB78: beq         $t6, $zero, L_8021DB90
    if (ctx->r14 == 0) {
        // 0x8021DB7C: sw          $t4, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r12;
            goto L_8021DB90;
    }
    // 0x8021DB7C: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x8021DB80: jal         0x80220534
    // 0x8021DB84: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80220534(rdram, ctx);
        goto after_4;
    // 0x8021DB84: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_4:
    // 0x8021DB88: b           L_8021DBA0
    // 0x8021DB8C: andi        $s6, $s1, 0x2
    ctx->r22 = ctx->r17 & 0X2;
        goto L_8021DBA0;
    // 0x8021DB8C: andi        $s6, $s1, 0x2
    ctx->r22 = ctx->r17 & 0X2;
L_8021DB90:
    // 0x8021DB90: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8021DB94: jal         0x80220534
    // 0x8021DB98: nop

    func_80220534(rdram, ctx);
        goto after_5;
    // 0x8021DB98: nop

    after_5:
    // 0x8021DB9C: andi        $s6, $s1, 0x2
    ctx->r22 = ctx->r17 & 0X2;
L_8021DBA0:
    // 0x8021DBA0: beq         $s6, $zero, L_8021DBB0
    if (ctx->r22 == 0) {
        // 0x8021DBA4: nop
    
            goto L_8021DBB0;
    }
    // 0x8021DBA4: nop

    // 0x8021DBA8: jal         0x80221B2C
    // 0x8021DBAC: addiu       $a0, $fp, 0x48
    ctx->r4 = ADD32(ctx->r30, 0X48);
    func_80221B2C(rdram, ctx);
        goto after_6;
    // 0x8021DBAC: addiu       $a0, $fp, 0x48
    ctx->r4 = ADD32(ctx->r30, 0X48);
    after_6:
L_8021DBB0:
    // 0x8021DBB0: jal         0x8022970C
    // 0x8021DBB4: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    func_8022970C(rdram, ctx);
        goto after_7;
    // 0x8021DBB4: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_7:
    // 0x8021DBB8: andi        $t7, $s1, 0x8
    ctx->r15 = ctx->r17 & 0X8;
    // 0x8021DBBC: beq         $t7, $zero, L_8021DBD4
    if (ctx->r15 == 0) {
        // 0x8021DBC0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8021DBD4;
    }
    // 0x8021DBC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021DBC4: lwc1        $f8, 0xB8($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0XB8);
    // 0x8021DBC8: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    // 0x8021DBCC: lwc1        $f10, 0xBC($fp)
    ctx->f10.u32l = MEM_W(ctx->r30, 0XBC);
    // 0x8021DBD0: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
L_8021DBD4:
    // 0x8021DBD4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021DBD8: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8021DBDC: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x8021DBE0: div.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8021DBE4: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x8021DBE8: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x8021DBEC: jal         0x80223108
    // 0x8021DBF0: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    func_80223108(rdram, ctx);
        goto after_8;
    // 0x8021DBF0: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x8021DBF4: lbu         $t5, 0x4($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X4);
    // 0x8021DBF8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021DBFC: andi        $s4, $s1, 0x1
    ctx->r20 = ctx->r17 & 0X1;
    // 0x8021DC00: beq         $t5, $zero, L_8021DC58
    if (ctx->r13 == 0) {
        // 0x8021DC04: nop
    
            goto L_8021DC58;
    }
    // 0x8021DC04: nop

    // 0x8021DC08: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_8021DC0C:
    // 0x8021DC0C: sll         $t0, $s3, 4
    ctx->r8 = S32(ctx->r19 << 4);
    // 0x8021DC10: addu        $v1, $v0, $s0
    ctx->r3 = ADD32(ctx->r2, ctx->r16);
    // 0x8021DC14: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8021DC18: bne         $s4, $zero, L_8021DC2C
    if (ctx->r20 != 0) {
        // 0x8021DC1C: or          $s1, $a0, $zero
        ctx->r17 = ctx->r4 | 0;
            goto L_8021DC2C;
    }
    // 0x8021DC1C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8021DC20: and         $t8, $a0, $s5
    ctx->r24 = ctx->r4 & ctx->r21;
    // 0x8021DC24: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021DC28: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_8021DC2C:
    // 0x8021DC2C: jal         0x80220C44
    // 0x8021DC30: addu        $a0, $v0, $t0
    ctx->r4 = ADD32(ctx->r2, ctx->r8);
    func_80220C44(rdram, ctx);
        goto after_9;
    // 0x8021DC30: addu        $a0, $v0, $t0
    ctx->r4 = ADD32(ctx->r2, ctx->r8);
    after_9:
    // 0x8021DC34: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x8021DC38: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8021DC3C: addu        $t9, $t1, $s0
    ctx->r25 = ADD32(ctx->r9, ctx->r16);
    // 0x8021DC40: sw          $s1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r17;
    // 0x8021DC44: lbu         $t2, 0x4($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X4);
    // 0x8021DC48: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x8021DC4C: sltu        $at, $s3, $t2
    ctx->r1 = ctx->r19 < ctx->r10 ? 1 : 0;
    // 0x8021DC50: bnel        $at, $zero, L_8021DC0C
    if (ctx->r1 != 0) {
        // 0x8021DC54: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_8021DC0C;
    }
    goto skip_2;
    // 0x8021DC54: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_2:
L_8021DC58:
    // 0x8021DC58: beq         $s6, $zero, L_8021DC68
    if (ctx->r22 == 0) {
        // 0x8021DC5C: nop
    
            goto L_8021DC68;
    }
    // 0x8021DC5C: nop

    // 0x8021DC60: jal         0x80221B2C
    // 0x8021DC64: addiu       $a0, $fp, 0x8
    ctx->r4 = ADD32(ctx->r30, 0X8);
    func_80221B2C(rdram, ctx);
        goto after_10;
    // 0x8021DC64: addiu       $a0, $fp, 0x8
    ctx->r4 = ADD32(ctx->r30, 0X8);
    after_10:
L_8021DC68:
    // 0x8021DC68: jal         0x802230E4
    // 0x8021DC6C: nop

    func_802230E4(rdram, ctx);
        goto after_11;
    // 0x8021DC6C: nop

    after_11:
    // 0x8021DC70: lw          $t3, 0xBC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XBC);
    // 0x8021DC74: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8021DC78: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8021DC7C: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x8021DC80: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x8021DC84: sw          $t4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r12;
    // 0x8021DC88: lbu         $t5, 0x34($s7)
    ctx->r13 = MEM_BU(ctx->r23, 0X34);
    // 0x8021DC8C: sltu        $at, $t4, $t5
    ctx->r1 = ctx->r12 < ctx->r13 ? 1 : 0;
    // 0x8021DC90: bnel        $at, $zero, L_8021DAE4
    if (ctx->r1 != 0) {
        // 0x8021DC94: lw          $t5, 0x30($s7)
        ctx->r13 = MEM_W(ctx->r23, 0X30);
            goto L_8021DAE4;
    }
    goto skip_3;
    // 0x8021DC94: lw          $t5, 0x30($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X30);
    skip_3:
L_8021DC98:
    // 0x8021DC98: jal         0x80220534
    // 0x8021DC9C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80220534(rdram, ctx);
        goto after_12;
    // 0x8021DC9C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_12:
    // 0x8021DCA0: lw          $v0, 0x38($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X38);
    // 0x8021DCA4: beql        $v0, $zero, L_8021DCB8
    if (ctx->r2 == 0) {
        // 0x8021DCA8: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8021DCB8;
    }
    goto skip_4;
    // 0x8021DCA8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_4:
    // 0x8021DCAC: jalr        $v0
    // 0x8021DCB0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x8021DCB0: nop

    after_13:
    // 0x8021DCB4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8021DCB8:
    // 0x8021DCB8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021DCBC: lwc1        $f6, 0x3C($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X3C);
    // 0x8021DCC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021DCC4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8021DCC8: nop

    // 0x8021DCCC: bc1t        L_8021DCDC
    if (c1cs) {
        // 0x8021DCD0: nop
    
            goto L_8021DCDC;
    }
    // 0x8021DCD0: nop

    // 0x8021DCD4: b           L_8021DCDC
    // 0x8021DCD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8021DCDC;
    // 0x8021DCD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021DCDC:
    // 0x8021DCDC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8021DCE0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8021DCE4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8021DCE8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8021DCEC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8021DCF0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8021DCF4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8021DCF8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8021DCFC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8021DD00: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8021DD04: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8021DD08: jr          $ra
    // 0x8021DD0C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x8021DD0C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_8024A750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A750: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8024A754: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024A758: sb          $t6, 0x7174($at)
    MEM_B(0X7174, ctx->r1) = ctx->r14;
    // 0x8024A75C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024A760: lui         $t7, 0xA500
    ctx->r15 = S32(0XA500 << 16);
    // 0x8024A764: sw          $t7, 0x717C($at)
    MEM_W(0X717C, ctx->r1) = ctx->r15;
    // 0x8024A768: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024A76C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8024A770: sb          $t8, 0x7175($at)
    MEM_B(0X7175, ctx->r1) = ctx->r24;
    // 0x8024A774: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024A778: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x8024A77C: sb          $t9, 0x7178($at)
    MEM_B(0X7178, ctx->r1) = ctx->r25;
    // 0x8024A780: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024A784: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024A788: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x8024A78C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8024A790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024A794: sb          $t0, 0x7176($at)
    MEM_B(0X7176, ctx->r1) = ctx->r8;
    // 0x8024A798: sb          $t1, 0x7177($at)
    MEM_B(0X7177, ctx->r1) = ctx->r9;
    // 0x8024A79C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8024A7A0: lui         $t3, 0xA460
    ctx->r11 = S32(0XA460 << 16);
    // 0x8024A7A4: sw          $t2, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->r10;
    // 0x8024A7A8: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x8024A7AC: lbu         $t4, 0x7178($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X7178);
    // 0x8024A7B0: lui         $t5, 0xA460
    ctx->r13 = S32(0XA460 << 16);
    // 0x8024A7B4: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8024A7B8: sw          $t4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->r12;
    // 0x8024A7BC: lbu         $t6, 0x7176($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7176);
    // 0x8024A7C0: lui         $t7, 0xA460
    ctx->r15 = S32(0XA460 << 16);
    // 0x8024A7C4: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8024A7C8: sw          $t6, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->r14;
    // 0x8024A7CC: lbu         $t8, 0x7177($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X7177);
    // 0x8024A7D0: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8024A7D4: lui         $t9, 0xA460
    ctx->r25 = S32(0XA460 << 16);
    // 0x8024A7D8: addiu       $a0, $a0, 0x7170
    ctx->r4 = ADD32(ctx->r4, 0X7170);
    // 0x8024A7DC: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8024A7E0: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x8024A7E4: jal         0x802481C0
    // 0x8024A7E8: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
    func_802481C0(rdram, ctx);
        goto after_0;
    // 0x8024A7E8: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
    after_0:
    // 0x8024A7EC: jal         0x80241760
    // 0x8024A7F0: nop

    func_80241760(rdram, ctx);
        goto after_1;
    // 0x8024A7F0: nop

    after_1:
    // 0x8024A7F4: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x8024A7F8: lw          $t0, 0x16BC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X16BC);
    // 0x8024A7FC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024A800: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x8024A804: sw          $t0, 0x7170($at)
    MEM_W(0X7170, ctx->r1) = ctx->r8;
    // 0x8024A808: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A80C: addiu       $t1, $t1, 0x7170
    ctx->r9 = ADD32(ctx->r9, 0X7170);
    // 0x8024A810: sw          $t1, 0x16BC($at)
    MEM_W(0X16BC, ctx->r1) = ctx->r9;
    // 0x8024A814: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8024A818: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8024A81C: sw          $t1, 0x71E4($at)
    MEM_W(0X71E4, ctx->r1) = ctx->r9;
    // 0x8024A820: jal         0x80241780
    // 0x8024A824: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_80241780(rdram, ctx);
        goto after_2;
    // 0x8024A824: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x8024A828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024A82C: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8024A830: addiu       $v0, $v0, 0x7170
    ctx->r2 = ADD32(ctx->r2, 0X7170);
    // 0x8024A834: jr          $ra
    // 0x8024A838: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8024A838: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80249DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249DB4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80249DB8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80249DBC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80249DC0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80249DC4: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80249DC8: lw          $t6, 0x24($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X24);
    // 0x80249DCC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80249DD0: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x80249DD4: beq         $t6, $zero, L_80249F90
    if (ctx->r14 == 0) {
        // 0x80249DD8: or          $t2, $a0, $zero
        ctx->r10 = ctx->r4 | 0;
            goto L_80249F90;
    }
    // 0x80249DD8: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x80249DDC: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x80249DE0: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x80249DE4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80249DE8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80249DEC: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x80249DF0: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x80249DF4: jal         0x80249940
    // 0x80249DF8: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    func_80249940(rdram, ctx);
        goto after_0;
    // 0x80249DF8: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    after_0:
    // 0x80249DFC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80249E00: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x80249E04: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80249E08: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80249E0C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80249E10: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80249E14: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80249E18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80249E1C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80249E20: addiu       $a2, $zero, 0x280
    ctx->r6 = ADD32(0, 0X280);
    // 0x80249E24: div.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80249E28: mul.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x80249E2C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80249E30: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x80249E34: nop

    // 0x80249E38: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80249E3C: nop

    // 0x80249E40: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80249E44: div.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80249E48: mtc1        $s1, $f8
    ctx->f8.u32l = ctx->r17;
    // 0x80249E4C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80249E50: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80249E54: sub.d       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f4.d - ctx->f16.d;
    // 0x80249E58: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
    // 0x80249E5C: mul.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x80249E60: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x80249E64: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80249E68: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80249E6C: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80249E70: trunc.w.s   $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x80249E74: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x80249E78: nop

    // 0x80249E7C: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80249E80: nop

    // 0x80249E84: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80249E88: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x80249E8C: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x80249E90: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x80249E94: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x80249E98: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x80249E9C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80249EA0: subu        $t4, $t8, $t9
    ctx->r12 = SUB32(ctx->r24, ctx->r25);
    // 0x80249EA4: negu        $t5, $t4
    ctx->r13 = SUB32(0, ctx->r12);
    // 0x80249EA8: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80249EAC: addu        $t0, $t7, $t6
    ctx->r8 = ADD32(ctx->r15, ctx->r14);
    // 0x80249EB0: andi        $v1, $t0, 0x7
    ctx->r3 = ctx->r8 & 0X7;
    // 0x80249EB4: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x80249EB8: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80249EBC: sll         $t3, $t8, 1
    ctx->r11 = S32(ctx->r24 << 1);
    // 0x80249EC0: subu        $a1, $t0, $t3
    ctx->r5 = SUB32(ctx->r8, ctx->r11);
    // 0x80249EC4: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80249EC8: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x80249ECC: addu        $a3, $t1, $t8
    ctx->r7 = ADD32(ctx->r9, ctx->r24);
    // 0x80249ED0: jal         0x80249C28
    // 0x80249ED4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80249C28(rdram, ctx);
        goto after_1;
    // 0x80249ED4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x80249ED8: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80249EDC: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80249EE0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80249EE4: addiu       $t4, $t3, 0x280
    ctx->r12 = ADD32(ctx->r11, 0X280);
    // 0x80249EE8: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x80249EEC: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x80249EF0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80249EF4: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x80249EF8: sll         $t4, $s1, 1
    ctx->r12 = S32(ctx->r17 << 1);
    // 0x80249EFC: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x80249F00: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80249F04: or          $t7, $t9, $t5
    ctx->r15 = ctx->r25 | ctx->r13;
    // 0x80249F08: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80249F0C: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x80249F10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80249F14: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80249F18: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80249F1C: lw          $t5, 0x24($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X24);
    // 0x80249F20: mul.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80249F24: lui         $at, 0x500
    ctx->r1 = S32(0X500 << 16);
    // 0x80249F28: lw          $t7, 0x24($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X24);
    // 0x80249F2C: addiu       $v1, $v0, 0x10
    ctx->r3 = ADD32(ctx->r2, 0X10);
    // 0x80249F30: andi        $t6, $t7, 0xFF
    ctx->r14 = ctx->r15 & 0XFF;
    // 0x80249F34: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x80249F38: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80249F3C: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x80249F40: nop

    // 0x80249F44: andi        $t9, $t4, 0xFFFF
    ctx->r25 = ctx->r12 & 0XFFFF;
    // 0x80249F48: or          $t4, $t8, $at
    ctx->r12 = ctx->r24 | ctx->r1;
    // 0x80249F4C: or          $t5, $t4, $t9
    ctx->r13 = ctx->r12 | ctx->r25;
    // 0x80249F50: sw          $t5, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r13;
    // 0x80249F54: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x80249F58: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    // 0x80249F5C: jal         0x802375F0
    // 0x80249F60: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    func_802375F0(rdram, ctx);
        goto after_2;
    // 0x80249F60: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    after_2:
    // 0x80249F64: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80249F68: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80249F6C: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x80249F70: sw          $v0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r2;
    // 0x80249F74: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x80249F78: sw          $zero, 0x24($t8)
    MEM_W(0X24, ctx->r24) = 0;
    // 0x80249F7C: lw          $t4, 0x18($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X18);
    // 0x80249F80: addu        $t9, $t4, $t1
    ctx->r25 = ADD32(ctx->r12, ctx->r9);
    // 0x80249F84: subu        $t5, $t9, $s1
    ctx->r13 = SUB32(ctx->r25, ctx->r17);
    // 0x80249F88: b           L_80249FC0
    // 0x80249F8C: sw          $t5, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r13;
        goto L_80249FC0;
    // 0x80249F8C: sw          $t5, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r13;
L_80249F90:
    // 0x80249F90: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x80249F94: lw          $t7, 0x18($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X18);
    // 0x80249F98: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x80249F9C: negu        $t8, $t6
    ctx->r24 = SUB32(0, ctx->r14);
    // 0x80249FA0: sll         $t4, $t8, 1
    ctx->r12 = S32(ctx->r24 << 1);
    // 0x80249FA4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80249FA8: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x80249FAC: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x80249FB0: addu        $a1, $t7, $t4
    ctx->r5 = ADD32(ctx->r15, ctx->r12);
    // 0x80249FB4: jal         0x80249C28
    // 0x80249FB8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80249C28(rdram, ctx);
        goto after_3;
    // 0x80249FB8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_3:
    // 0x80249FBC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80249FC0:
    // 0x80249FC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80249FC4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80249FC8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80249FCC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80249FD0: jr          $ra
    // 0x80249FD4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80249FD4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_802037B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802037B4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x802037B8: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x802037BC: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x802037C0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802037C4: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x802037C8: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x802037CC: lw          $t7, 0x6DE4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6DE4);
    // 0x802037D0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802037D4: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x802037D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802037DC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802037E0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x802037E4: jr          $ra
    // 0x802037E8: lbu         $v0, 0x8C($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X8C);
    return;
    // 0x802037E8: lbu         $v0, 0x8C($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X8C);
;}
RECOMP_FUNC void func_8024A710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A710: lui         $t6, 0xA480
    ctx->r14 = S32(0XA480 << 16);
    // 0x8024A714: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    // 0x8024A718: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8024A71C: andi        $t7, $a0, 0x3
    ctx->r15 = ctx->r4 & 0X3;
    // 0x8024A720: beq         $t7, $zero, L_8024A730
    if (ctx->r15 == 0) {
        // 0x8024A724: nop
    
            goto L_8024A730;
    }
    // 0x8024A724: nop

    // 0x8024A728: b           L_8024A734
    // 0x8024A72C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8024A734;
    // 0x8024A72C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8024A730:
    // 0x8024A730: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024A734:
    // 0x8024A734: jr          $ra
    // 0x8024A738: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8024A738: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_802271C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802271C4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802271C8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802271CC: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
    // 0x802271D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802271D4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802271D8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802271DC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802271E0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802271E4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x802271E8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802271EC: jal         0x80225424
    // 0x802271F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_0;
    // 0x802271F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x802271F4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x802271F8: jal         0x8022B948
    // 0x802271FC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_1;
    // 0x802271FC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x80227200: lhu         $a0, 0x30($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X30);
    // 0x80227204: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80227208: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022720C: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x80227210: jal         0x8022B948
    // 0x80227214: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022B948(rdram, ctx);
        goto after_2;
    // 0x80227214: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_2:
    // 0x80227218: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x8022721C: lhu         $a0, 0x30($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X30);
    // 0x80227220: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80227224: sll         $t7, $a0, 1
    ctx->r15 = S32(ctx->r4 << 1);
    // 0x80227228: jal         0x8022B948
    // 0x8022722C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8022B948(rdram, ctx);
        goto after_3;
    // 0x8022722C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_3:
    // 0x80227230: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    // 0x80227234: lhu         $t8, 0x30($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X30);
    // 0x80227238: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022723C: blezl       $t8, L_8022728C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80227240: lhu         $t3, 0x30($sp)
        ctx->r11 = MEM_HU(ctx->r29, 0X30);
            goto L_8022728C;
    }
    goto skip_0;
    // 0x80227240: lhu         $t3, 0x30($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X30);
    skip_0:
L_80227244:
    // 0x80227244: lw          $t9, 0x4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X4);
    // 0x80227248: sll         $s1, $s0, 1
    ctx->r17 = S32(ctx->r16 << 1);
    // 0x8022724C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80227250: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80227254: jal         0x80225424
    // 0x80227258: addu        $a0, $t9, $s1
    ctx->r4 = ADD32(ctx->r25, ctx->r17);
    func_80225424(rdram, ctx);
        goto after_4;
    // 0x80227258: addu        $a0, $t9, $s1
    ctx->r4 = ADD32(ctx->r25, ctx->r17);
    after_4:
    // 0x8022725C: lw          $t0, 0x8($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X8);
    // 0x80227260: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80227264: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80227268: jal         0x80225424
    // 0x8022726C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_80225424(rdram, ctx);
        goto after_5;
    // 0x8022726C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_5:
    // 0x80227270: lhu         $t2, 0x30($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X30);
    // 0x80227274: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80227278: andi        $t1, $s0, 0xFFFF
    ctx->r9 = ctx->r16 & 0XFFFF;
    // 0x8022727C: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80227280: bne         $at, $zero, L_80227244
    if (ctx->r1 != 0) {
        // 0x80227284: or          $s0, $t1, $zero
        ctx->r16 = ctx->r9 | 0;
            goto L_80227244;
    }
    // 0x80227284: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x80227288: lhu         $t3, 0x30($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X30);
L_8022728C:
    // 0x8022728C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x80227290: sh          $t3, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r11;
    // 0x80227294: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80227298: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8022729C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802272A0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802272A4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802272A8: jr          $ra
    // 0x802272AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802272AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80223FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223FA8: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80223FAC: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80223FB0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80223FB4: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x80223FB8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80223FBC: jr          $ra
    // 0x80223FC0: lw          $v0, 0x5140($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5140);
    return;
    // 0x80223FC0: lw          $v0, 0x5140($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5140);
;}
RECOMP_FUNC void func_8022BD80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022BD80: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8022BD84: lw          $t6, -0x1794($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1794);
    // 0x8022BD88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BD8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BD90: beq         $t6, $zero, L_8022BDA0
    if (ctx->r14 == 0) {
        // 0x8022BD94: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_8022BDA0;
    }
    // 0x8022BD94: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022BD98: jal         0x80231A24
    // 0x8022BD9C: addiu       $a0, $a0, 0x41AC
    ctx->r4 = ADD32(ctx->r4, 0X41AC);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022BD9C: addiu       $a0, $a0, 0x41AC
    ctx->r4 = ADD32(ctx->r4, 0X41AC);
    after_0:
L_8022BDA0:
    // 0x8022BDA0: jal         0x802235C8
    // 0x8022BDA4: nop

    func_802235C8(rdram, ctx);
        goto after_1;
    // 0x8022BDA4: nop

    after_1:
    // 0x8022BDA8: jal         0x80233D90
    // 0x8022BDAC: nop

    func_80233D90(rdram, ctx);
        goto after_2;
    // 0x8022BDAC: nop

    after_2:
    // 0x8022BDB0: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x8022BDB4: lw          $t7, 0x5F84($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5F84);
    // 0x8022BDB8: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x8022BDBC: lw          $t8, 0x318($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X318);
    // 0x8022BDC0: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022BDC4: sw          $t7, 0x5F7C($at)
    MEM_W(0X5F7C, ctx->r1) = ctx->r15;
    // 0x8022BDC8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022BDCC: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x8022BDD0: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022BDD4: sw          $t9, 0x5F80($at)
    MEM_W(0X5F80, ctx->r1) = ctx->r25;
    // 0x8022BDD8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022BDDC: sw          $zero, 0x5E74($at)
    MEM_W(0X5E74, ctx->r1) = 0;
    // 0x8022BDE0: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022BDE4: sw          $zero, 0x5E78($at)
    MEM_W(0X5E78, ctx->r1) = 0;
    // 0x8022BDE8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022BDEC: sw          $zero, 0x51E0($at)
    MEM_W(0X51E0, ctx->r1) = 0;
    // 0x8022BDF0: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022BDF4: sw          $zero, 0x5F88($at)
    MEM_W(0X5F88, ctx->r1) = 0;
    // 0x8022BDF8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022BDFC: sw          $zero, 0x5A2C($at)
    MEM_W(0X5A2C, ctx->r1) = 0;
    // 0x8022BE00: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022BE04: jal         0x8022B088
    // 0x8022BE08: sw          $zero, 0x44B4($at)
    MEM_W(0X44B4, ctx->r1) = 0;
    func_8022B088(rdram, ctx);
        goto after_3;
    // 0x8022BE08: sw          $zero, 0x44B4($at)
    MEM_W(0X44B4, ctx->r1) = 0;
    after_3:
    // 0x8022BE0C: jal         0x8022BC40
    // 0x8022BE10: nop

    func_8022BC40(rdram, ctx);
        goto after_4;
    // 0x8022BE10: nop

    after_4:
    // 0x8022BE14: jal         0x80234870
    // 0x8022BE18: nop

    func_80234870(rdram, ctx);
        goto after_5;
    // 0x8022BE18: nop

    after_5:
    // 0x8022BE1C: jal         0x802245B8
    // 0x8022BE20: nop

    func_802245B8(rdram, ctx);
        goto after_6;
    // 0x8022BE20: nop

    after_6:
    // 0x8022BE24: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8022BE28: lhu         $a1, 0x51E8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X51E8);
    // 0x8022BE2C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x8022BE30: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022BE34: beq         $a1, $at, L_8022BE44
    if (ctx->r5 == ctx->r1) {
        // 0x8022BE38: addiu       $a0, $a0, 0x41E8
        ctx->r4 = ADD32(ctx->r4, 0X41E8);
            goto L_8022BE44;
    }
    // 0x8022BE38: addiu       $a0, $a0, 0x41E8
    ctx->r4 = ADD32(ctx->r4, 0X41E8);
    // 0x8022BE3C: jal         0x80231A24
    // 0x8022BE40: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_80231A24(rdram, ctx);
        goto after_7;
    // 0x8022BE40: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_7:
L_8022BE44:
    // 0x8022BE44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BE48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022BE4C: jr          $ra
    // 0x8022BE50: nop

    return;
    // 0x8022BE50: nop

;}
RECOMP_FUNC void func_80230C78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80230C78: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80230C7C: lw          $t6, 0x3520($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3520);
    // 0x80230C80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230C84: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80230C88: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80230C8C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80230C90: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80230C94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80230C98: bne         $t6, $zero, L_80230CB4
    if (ctx->r14 != 0) {
        // 0x80230C9C: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_80230CB4;
    }
    // 0x80230C9C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80230CA0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230CA4: jal         0x80231A24
    // 0x80230CA8: addiu       $a0, $a0, 0x4C88
    ctx->r4 = ADD32(ctx->r4, 0X4C88);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80230CA8: addiu       $a0, $a0, 0x4C88
    ctx->r4 = ADD32(ctx->r4, 0X4C88);
    after_0:
    // 0x80230CAC: b           L_80230D5C
    // 0x80230CB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230D5C;
    // 0x80230CB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230CB4:
    // 0x80230CB4: andi        $t7, $s0, 0x7
    ctx->r15 = ctx->r16 & 0X7;
    // 0x80230CB8: beq         $t7, $zero, L_80230CD4
    if (ctx->r15 == 0) {
        // 0x80230CBC: andi        $t8, $s1, 0x7
        ctx->r24 = ctx->r17 & 0X7;
            goto L_80230CD4;
    }
    // 0x80230CBC: andi        $t8, $s1, 0x7
    ctx->r24 = ctx->r17 & 0X7;
    // 0x80230CC0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230CC4: jal         0x80231A24
    // 0x80230CC8: addiu       $a0, $a0, 0x4CA8
    ctx->r4 = ADD32(ctx->r4, 0X4CA8);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x80230CC8: addiu       $a0, $a0, 0x4CA8
    ctx->r4 = ADD32(ctx->r4, 0X4CA8);
    after_1:
    // 0x80230CCC: b           L_80230D5C
    // 0x80230CD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230D5C;
    // 0x80230CD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230CD4:
    // 0x80230CD4: beq         $t8, $zero, L_80230CF0
    if (ctx->r24 == 0) {
        // 0x80230CD8: addu        $t9, $s0, $s1
        ctx->r25 = ADD32(ctx->r16, ctx->r17);
            goto L_80230CF0;
    }
    // 0x80230CD8: addu        $t9, $s0, $s1
    ctx->r25 = ADD32(ctx->r16, ctx->r17);
    // 0x80230CDC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230CE0: jal         0x80231A24
    // 0x80230CE4: addiu       $a0, $a0, 0x4CD8
    ctx->r4 = ADD32(ctx->r4, 0X4CD8);
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x80230CE4: addiu       $a0, $a0, 0x4CD8
    ctx->r4 = ADD32(ctx->r4, 0X4CD8);
    after_2:
    // 0x80230CE8: b           L_80230D5C
    // 0x80230CEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230D5C;
    // 0x80230CEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230CF0:
    // 0x80230CF0: slti        $at, $t9, 0x209
    ctx->r1 = SIGNED(ctx->r25) < 0X209 ? 1 : 0;
    // 0x80230CF4: bne         $at, $zero, L_80230D1C
    if (ctx->r1 != 0) {
        // 0x80230CF8: lui         $a0, 0x8028
        ctx->r4 = S32(0X8028 << 16);
            goto L_80230D1C;
    }
    // 0x80230CF8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80230CFC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230D00: addiu       $a0, $a0, 0x4D08
    ctx->r4 = ADD32(ctx->r4, 0X4D08);
    // 0x80230D04: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80230D08: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80230D0C: jal         0x80231A24
    // 0x80230D10: addiu       $a3, $zero, 0x208
    ctx->r7 = ADD32(0, 0X208);
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x80230D10: addiu       $a3, $zero, 0x208
    ctx->r7 = ADD32(0, 0X208);
    after_3:
    // 0x80230D14: b           L_80230D5C
    // 0x80230D18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230D5C;
    // 0x80230D18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230D1C:
    // 0x80230D1C: bgez        $s0, L_80230D2C
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80230D20: sra         $t0, $s0, 3
        ctx->r8 = S32(SIGNED(ctx->r16) >> 3);
            goto L_80230D2C;
    }
    // 0x80230D20: sra         $t0, $s0, 3
    ctx->r8 = S32(SIGNED(ctx->r16) >> 3);
    // 0x80230D24: addiu       $at, $s0, 0x7
    ctx->r1 = ADD32(ctx->r16, 0X7);
    // 0x80230D28: sra         $t0, $at, 3
    ctx->r8 = S32(SIGNED(ctx->r1) >> 3);
L_80230D2C:
    // 0x80230D2C: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    // 0x80230D30: addiu       $a0, $a0, 0xC58
    ctx->r4 = ADD32(ctx->r4, 0XC58);
    // 0x80230D34: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80230D38: jal         0x8023E1F0
    // 0x80230D3C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_8023E1F0(rdram, ctx);
        goto after_4;
    // 0x80230D3C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_4:
    // 0x80230D40: beq         $v0, $zero, L_80230D58
    if (ctx->r2 == 0) {
        // 0x80230D44: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80230D58;
    }
    // 0x80230D44: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80230D48: jal         0x80231A24
    // 0x80230D4C: addiu       $a0, $a0, 0x4D3C
    ctx->r4 = ADD32(ctx->r4, 0X4D3C);
    func_80231A24(rdram, ctx);
        goto after_5;
    // 0x80230D4C: addiu       $a0, $a0, 0x4D3C
    ctx->r4 = ADD32(ctx->r4, 0X4D3C);
    after_5:
    // 0x80230D50: b           L_80230D5C
    // 0x80230D54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230D5C;
    // 0x80230D54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230D58:
    // 0x80230D58: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_80230D5C:
    // 0x80230D5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80230D60: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80230D64: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80230D68: jr          $ra
    // 0x80230D6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80230D6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231C9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231CA0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80231CA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231CA8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80231CAC: jal         0x80231A24
    // 0x80231CB0: addiu       $a0, $a0, 0x50A4
    ctx->r4 = ADD32(ctx->r4, 0X50A4);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80231CB0: addiu       $a0, $a0, 0x50A4
    ctx->r4 = ADD32(ctx->r4, 0X50A4);
    after_0:
    // 0x80231CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231CB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80231CBC: jr          $ra
    // 0x80231CC0: nop

    return;
    // 0x80231CC0: nop

;}
RECOMP_FUNC void func_80245710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80245710: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80245714: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80245718: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8024571C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80245720: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80245724: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80245728: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024572C: andi        $s0, $a2, 0xFFFF
    ctx->r16 = ctx->r6 & 0XFFFF;
    // 0x80245730: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x80245734: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80245738: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x8024573C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80245740: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80245744: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80245748: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8024574C: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x80245750: jal         0x80245AD0
    // 0x80245754: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    func_80245AD0(rdram, ctx);
        goto after_0;
    // 0x80245754: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    after_0:
    // 0x80245758: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8024575C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80245760: sb          $t6, 0x5EB0($at)
    MEM_B(0X5EB0, ctx->r1) = ctx->r14;
    // 0x80245764: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80245768: jal         0x80245924
    // 0x8024576C: andi        $a1, $s0, 0xFFFF
    ctx->r5 = ctx->r16 & 0XFFFF;
    func_80245924(rdram, ctx);
        goto after_1;
    // 0x8024576C: andi        $a1, $s0, 0xFFFF
    ctx->r5 = ctx->r16 & 0XFFFF;
    after_1:
    // 0x80245770: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80245774: addiu       $a1, $a1, 0x3970
    ctx->r5 = ADD32(ctx->r5, 0X3970);
    // 0x80245778: jal         0x802465B0
    // 0x8024577C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802465B0(rdram, ctx);
        goto after_2;
    // 0x8024577C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80245780: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80245784: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80245788: jal         0x802374B0
    // 0x8024578C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_3;
    // 0x8024578C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80245790: addiu       $fp, $zero, 0x4
    ctx->r30 = ADD32(0, 0X4);
    // 0x80245794: addiu       $s7, $sp, 0x54
    ctx->r23 = ADD32(ctx->r29, 0X54);
    // 0x80245798: addiu       $s3, $sp, 0x74
    ctx->r19 = ADD32(ctx->r29, 0X74);
L_8024579C:
    // 0x8024579C: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x802457A0: addiu       $s0, $t7, 0x3970
    ctx->r16 = ADD32(ctx->r15, 0X3970);
    // 0x802457A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802457A8: jal         0x802465B0
    // 0x802457AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802465B0(rdram, ctx);
        goto after_4;
    // 0x802457AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x802457B0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x802457B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802457B8: jal         0x802374B0
    // 0x802457BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_5;
    // 0x802457BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x802457C0: beq         $s2, $zero, L_802457F8
    if (ctx->r18 == 0) {
        // 0x802457C4: or          $t1, $s7, $zero
        ctx->r9 = ctx->r23 | 0;
            goto L_802457F8;
    }
    // 0x802457C4: or          $t1, $s7, $zero
    ctx->r9 = ctx->r23 | 0;
    // 0x802457C8: blez        $s2, L_802457F8
    if (SIGNED(ctx->r18) <= 0) {
        // 0x802457CC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_802457F8;
    }
    // 0x802457CC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802457D0: andi        $a0, $s2, 0x3
    ctx->r4 = ctx->r18 & 0X3;
    // 0x802457D4: beq         $a0, $zero, L_802457EC
    if (ctx->r4 == 0) {
        // 0x802457D8: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_802457EC;
    }
    // 0x802457D8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_802457DC:
    // 0x802457DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802457E0: bne         $v0, $v1, L_802457DC
    if (ctx->r2 != ctx->r3) {
        // 0x802457E4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_802457DC;
    }
    // 0x802457E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802457E8: beq         $v1, $s2, L_802457F8
    if (ctx->r3 == ctx->r18) {
        // 0x802457EC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_802457F8;
    }
L_802457EC:
    // 0x802457EC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802457F0: bne         $v1, $s2, L_802457EC
    if (ctx->r3 != ctx->r18) {
        // 0x802457F4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802457EC;
    }
    // 0x802457F4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_802457F8:
    // 0x802457F8: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x802457FC: addiu       $t9, $s0, 0x24
    ctx->r25 = ADD32(ctx->r16, 0X24);
L_80245800:
    // 0x80245800: lwl         $at, 0x0($t0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r8, 0X0);
    // 0x80245804: lwr         $at, 0x3($t0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r8, 0X3);
    // 0x80245808: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8024580C: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x80245810: lwl         $at, -0x8($t0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r8, -0X8);
    // 0x80245814: lwr         $at, -0x5($t0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r8, -0X5);
    // 0x80245818: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x8024581C: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x80245820: lwl         $at, -0x4($t0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r8, -0X4);
    // 0x80245824: lwr         $at, -0x1($t0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r8, -0X1);
    // 0x80245828: bne         $t0, $t9, L_80245800
    if (ctx->r8 != ctx->r25) {
        // 0x8024582C: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_80245800;
    }
    // 0x8024582C: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x80245830: lwl         $at, 0x0($t0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r8, 0X0);
    // 0x80245834: lwr         $at, 0x3($t0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r8, 0X3);
    // 0x80245838: nop

    // 0x8024583C: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x80245840: lbu         $v0, 0x56($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X56);
    // 0x80245844: nop

    // 0x80245848: andi        $t2, $v0, 0xC0
    ctx->r10 = ctx->r2 & 0XC0;
    // 0x8024584C: sra         $s4, $t2, 4
    ctx->r20 = S32(SIGNED(ctx->r10) >> 4);
    // 0x80245850: bne         $s4, $zero, L_802458D4
    if (ctx->r20 != 0) {
        // 0x80245854: nop
    
            goto L_802458D4;
    }
    // 0x80245854: nop

    // 0x80245858: jal         0x8024A640
    // 0x8024585C: addiu       $a0, $sp, 0x5A
    ctx->r4 = ADD32(ctx->r29, 0X5A);
    func_8024A640(rdram, ctx);
        goto after_6;
    // 0x8024585C: addiu       $a0, $sp, 0x5A
    ctx->r4 = ADD32(ctx->r29, 0X5A);
    after_6:
    // 0x80245860: lbu         $t4, 0x7A($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X7A);
    // 0x80245864: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80245868: beq         $t4, $v0, L_8024589C
    if (ctx->r12 == ctx->r2) {
        // 0x8024586C: addiu       $v0, $sp, 0x54
        ctx->r2 = ADD32(ctx->r29, 0X54);
            goto L_8024589C;
    }
    // 0x8024586C: addiu       $v0, $sp, 0x54
    ctx->r2 = ADD32(ctx->r29, 0X54);
    // 0x80245870: jal         0x80238E34
    // 0x80245874: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80238E34(rdram, ctx);
        goto after_7;
    // 0x80245874: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_7:
    // 0x80245878: beq         $v0, $zero, L_80245890
    if (ctx->r2 == 0) {
        // 0x8024587C: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_80245890;
    }
    // 0x8024587C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80245880: jal         0x80245B14
    // 0x80245884: nop

    func_80245B14(rdram, ctx);
        goto after_8;
    // 0x80245884: nop

    after_8:
    // 0x80245888: b           L_802458F4
    // 0x8024588C: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
        goto L_802458F4;
    // 0x8024588C: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
L_80245890:
    // 0x80245890: b           L_802458D8
    // 0x80245894: or          $s4, $fp, $zero
    ctx->r20 = ctx->r30 | 0;
        goto L_802458D8;
    // 0x80245894: or          $s4, $fp, $zero
    ctx->r20 = ctx->r30 | 0;
    // 0x80245898: addiu       $v0, $sp, 0x54
    ctx->r2 = ADD32(ctx->r29, 0X54);
L_8024589C:
    // 0x8024589C: lbu         $t5, 0x6($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X6);
    // 0x802458A0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802458A4: sb          $t5, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r13;
    // 0x802458A8: lbu         $t6, 0x3($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X3);
    // 0x802458AC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x802458B0: sb          $t6, -0x3($s1)
    MEM_B(-0X3, ctx->r17) = ctx->r14;
    // 0x802458B4: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x802458B8: nop

    // 0x802458BC: sb          $t7, -0x2($s1)
    MEM_B(-0X2, ctx->r17) = ctx->r15;
    // 0x802458C0: lbu         $t8, 0x5($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5);
    // 0x802458C4: bne         $v0, $s3, L_8024589C
    if (ctx->r2 != ctx->r19) {
        // 0x802458C8: sb          $t8, -0x1($s1)
        MEM_B(-0X1, ctx->r17) = ctx->r24;
            goto L_8024589C;
    }
    // 0x802458C8: sb          $t8, -0x1($s1)
    MEM_B(-0X1, ctx->r17) = ctx->r24;
    // 0x802458CC: b           L_802458D8
    // 0x802458D0: nop

        goto L_802458D8;
    // 0x802458D0: nop

L_802458D4:
    // 0x802458D4: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_802458D8:
    // 0x802458D8: bne         $s4, $fp, L_802458E8
    if (ctx->r20 != ctx->r30) {
        // 0x802458DC: slti        $v0, $s5, 0x0
        ctx->r2 = SIGNED(ctx->r21) < 0X0 ? 1 : 0;
            goto L_802458E8;
    }
    // 0x802458DC: slti        $v0, $s5, 0x0
    ctx->r2 = SIGNED(ctx->r21) < 0X0 ? 1 : 0;
    // 0x802458E0: beq         $v0, $zero, L_8024579C
    if (ctx->r2 == 0) {
        // 0x802458E4: addiu       $s5, $s5, -0x1
        ctx->r21 = ADD32(ctx->r21, -0X1);
            goto L_8024579C;
    }
    // 0x802458E4: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
L_802458E8:
    // 0x802458E8: jal         0x80245B14
    // 0x802458EC: nop

    func_80245B14(rdram, ctx);
        goto after_9;
    // 0x802458EC: nop

    after_9:
    // 0x802458F0: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
L_802458F4:
    // 0x802458F4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802458F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802458FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80245900: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80245904: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80245908: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8024590C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80245910: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80245914: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80245918: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8024591C: jr          $ra
    // 0x80245920: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80245920: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80249920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249920: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80249924: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x80249928: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x8024992C: sh          $zero, 0xC($a0)
    MEM_H(0XC, ctx->r4) = 0;
    // 0x80249930: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
    // 0x80249934: jr          $ra
    // 0x80249938: sw          $a3, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r7;
    return;
    // 0x80249938: sw          $a3, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r7;
;}
RECOMP_FUNC void func_80213490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80213490: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x80213494: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80213498: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x8021349C: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x802134A0: sw          $fp, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r30;
    // 0x802134A4: sw          $s7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r23;
    // 0x802134A8: sw          $s6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r22;
    // 0x802134AC: sw          $s5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r21;
    // 0x802134B0: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x802134B4: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x802134B8: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x802134BC: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x802134C0: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x802134C4: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x802134C8: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x802134CC: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x802134D0: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x802134D4: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x802134D8: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x802134DC: sw          $a0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r4;
    // 0x802134E0: sw          $a1, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r5;
    // 0x802134E4: sw          $a2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r6;
    // 0x802134E8: sw          $a3, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r7;
    // 0x802134EC: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x802134F0: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x802134F4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802134F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x802134FC: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x80213500: lwc1        $f30, 0x140($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X140);
    // 0x80213504: lwc1        $f4, 0x134($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X134);
    // 0x80213508: bne         $t1, $zero, L_80213524
    if (ctx->r9 != 0) {
        // 0x8021350C: sw          $t1, 0xE8($sp)
        MEM_W(0XE8, ctx->r29) = ctx->r9;
            goto L_80213524;
    }
    // 0x8021350C: sw          $t1, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r9;
    // 0x80213510: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80213514: jal         0x80231A24
    // 0x80213518: addiu       $a0, $a0, 0x2F50
    ctx->r4 = ADD32(ctx->r4, 0X2F50);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80213518: addiu       $a0, $a0, 0x2F50
    ctx->r4 = ADD32(ctx->r4, 0X2F50);
    after_0:
    // 0x8021351C: b           L_80213B60
    // 0x80213520: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213B60;
    // 0x80213520: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80213524:
    // 0x80213524: lw          $t3, 0xE8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE8);
    // 0x80213528: add.s       $f20, $f4, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f30.fl;
    // 0x8021352C: lwc1        $f6, 0x134($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X134);
    // 0x80213530: lwc1        $f18, 0x0($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80213534: lw          $t4, 0xE8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE8);
    // 0x80213538: c.lt.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl < ctx->f18.fl;
    // 0x8021353C: nop

    // 0x80213540: bc1fl       L_80213554
    if (!c1cs) {
        // 0x80213544: sub.s       $f22, $f6, $f30
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = ctx->f6.fl - ctx->f30.fl;
            goto L_80213554;
    }
    goto skip_0;
    // 0x80213544: sub.s       $f22, $f6, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = ctx->f6.fl - ctx->f30.fl;
    skip_0:
    // 0x80213548: b           L_80213B60
    // 0x8021354C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213B60;
    // 0x8021354C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213550: sub.s       $f22, $f6, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = ctx->f6.fl - ctx->f30.fl;
L_80213554:
    // 0x80213554: lwc1        $f8, 0xC($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0XC);
    // 0x80213558: lwc1        $f10, 0x138($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X138);
    // 0x8021355C: lw          $t5, 0xE8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE8);
    // 0x80213560: c.lt.s      $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f8.fl < ctx->f22.fl;
    // 0x80213564: nop

    // 0x80213568: bc1fl       L_8021357C
    if (!c1cs) {
        // 0x8021356C: add.s       $f14, $f10, $f30
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f30.fl;
            goto L_8021357C;
    }
    goto skip_1;
    // 0x8021356C: add.s       $f14, $f10, $f30
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f30.fl;
    skip_1:
    // 0x80213570: b           L_80213B60
    // 0x80213574: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213B60;
    // 0x80213574: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213578: add.s       $f14, $f10, $f30
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f30.fl;
L_8021357C:
    // 0x8021357C: lwc1        $f12, 0x4($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80213580: lwc1        $f4, 0x138($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X138);
    // 0x80213584: lw          $t6, 0xE8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE8);
    // 0x80213588: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x8021358C: nop

    // 0x80213590: bc1fl       L_802135A4
    if (!c1cs) {
        // 0x80213594: sub.s       $f16, $f4, $f30
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f30.fl;
            goto L_802135A4;
    }
    goto skip_2;
    // 0x80213594: sub.s       $f16, $f4, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f30.fl;
    skip_2:
    // 0x80213598: b           L_80213B60
    // 0x8021359C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213B60;
    // 0x8021359C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802135A0: sub.s       $f16, $f4, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f30.fl;
L_802135A4:
    // 0x802135A4: lwc1        $f6, 0x10($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X10);
    // 0x802135A8: lwc1        $f8, 0x13C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x802135AC: lw          $t7, 0xE8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE8);
    // 0x802135B0: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x802135B4: nop

    // 0x802135B8: bc1fl       L_802135CC
    if (!c1cs) {
        // 0x802135BC: add.s       $f10, $f8, $f30
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f30.fl;
            goto L_802135CC;
    }
    goto skip_3;
    // 0x802135BC: add.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f30.fl;
    skip_3:
    // 0x802135C0: b           L_80213B60
    // 0x802135C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213B60;
    // 0x802135C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802135C8: add.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f30.fl;
L_802135CC:
    // 0x802135CC: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x802135D0: lwc1        $f8, 0x13C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x802135D4: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x802135D8: nop

    // 0x802135DC: bc1fl       L_802135F0
    if (!c1cs) {
        // 0x802135E0: lw          $t8, 0xE8($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XE8);
            goto L_802135F0;
    }
    goto skip_4;
    // 0x802135E0: lw          $t8, 0xE8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE8);
    skip_4:
    // 0x802135E4: b           L_80213B60
    // 0x802135E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213B60;
    // 0x802135E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802135EC: lw          $t8, 0xE8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE8);
L_802135F0:
    // 0x802135F0: sub.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f30.fl;
    // 0x802135F4: lw          $t9, 0xE8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE8);
    // 0x802135F8: lwc1        $f6, 0x14($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X14);
    // 0x802135FC: lui         $s3, 0x8026
    ctx->r19 = S32(0X8026 << 16);
    // 0x80213600: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x80213604: nop

    // 0x80213608: bc1fl       L_8021361C
    if (!c1cs) {
        // 0x8021360C: sub.s       $f4, $f22, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f22.fl - ctx->f18.fl;
            goto L_8021361C;
    }
    goto skip_5;
    // 0x8021360C: sub.s       $f4, $f22, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f22.fl - ctx->f18.fl;
    skip_5:
    // 0x80213610: b           L_80213B60
    // 0x80213614: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213B60;
    // 0x80213614: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213618: sub.s       $f4, $f22, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f22.fl - ctx->f18.fl;
L_8021361C:
    // 0x8021361C: lwc1        $f0, 0x1C($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80213620: lwc1        $f2, 0x20($t9)
    ctx->f2.u32l = MEM_W(ctx->r25, 0X20);
    // 0x80213624: sub.s       $f10, $f20, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f18.fl;
    // 0x80213628: lui         $fp, 0x8026
    ctx->r30 = S32(0X8026 << 16);
    // 0x8021362C: lui         $s7, 0x8026
    ctx->r23 = S32(0X8026 << 16);
    // 0x80213630: div.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80213634: lw          $t7, 0xE8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE8);
    // 0x80213638: addiu       $s7, $s7, -0x3C60
    ctx->r23 = ADD32(ctx->r23, -0X3C60);
    // 0x8021363C: addiu       $fp, $fp, -0x3C5C
    ctx->r30 = ADD32(ctx->r30, -0X3C5C);
    // 0x80213640: addiu       $s6, $zero, 0xC
    ctx->r22 = ADD32(0, 0XC);
    // 0x80213644: div.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80213648: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021364C: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x80213650: sub.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x80213654: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80213658: div.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8021365C: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x80213660: sub.s       $f8, $f14, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x80213664: div.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80213668: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8021366C: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x80213670: nop

    // 0x80213674: sw          $t4, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r12;
    // 0x80213678: lw          $t8, 0x114($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X114);
    // 0x8021367C: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80213680: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x80213684: bgez        $v0, L_80213690
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80213688: sw          $t6, 0x110($sp)
        MEM_W(0X110, ctx->r29) = ctx->r14;
            goto L_80213690;
    }
    // 0x80213688: sw          $t6, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r14;
    // 0x8021368C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80213690:
    // 0x80213690: lbu         $v1, 0x18($t7)
    ctx->r3 = MEM_BU(ctx->r15, 0X18);
    // 0x80213694: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80213698: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021369C: beq         $at, $zero, L_802136A8
    if (ctx->r1 == 0) {
        // 0x802136A0: nop
    
            goto L_802136A8;
    }
    // 0x802136A0: nop

    // 0x802136A4: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_802136A8:
    // 0x802136A8: bgez        $t8, L_802136B4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x802136AC: addiu       $t3, $a0, 0x1
        ctx->r11 = ADD32(ctx->r4, 0X1);
            goto L_802136B4;
    }
    // 0x802136AC: addiu       $t3, $a0, 0x1
    ctx->r11 = ADD32(ctx->r4, 0X1);
    // 0x802136B0: sw          $zero, 0x114($sp)
    MEM_W(0X114, ctx->r29) = 0;
L_802136B4:
    // 0x802136B4: lw          $t1, 0xE8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE8);
    // 0x802136B8: lw          $t2, 0x110($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X110);
    // 0x802136BC: lbu         $v1, 0x19($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X19);
    // 0x802136C0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802136C4: slt         $at, $v1, $t2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x802136C8: beql        $at, $zero, L_802136D8
    if (ctx->r1 == 0) {
        // 0x802136CC: lw          $t9, 0xE8($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XE8);
            goto L_802136D8;
    }
    goto skip_6;
    // 0x802136CC: lw          $t9, 0xE8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE8);
    skip_6:
    // 0x802136D0: sw          $v1, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r3;
    // 0x802136D4: lw          $t9, 0xE8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE8);
L_802136D8:
    // 0x802136D8: addiu       $s3, $s3, -0x3C68
    ctx->r19 = ADD32(ctx->r19, -0X3C68);
    // 0x802136DC: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    // 0x802136E0: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x802136E4: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802136E8: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    // 0x802136EC: lwc1        $f8, 0x1C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x802136F0: sw          $v0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r2;
    // 0x802136F4: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x802136F8: bne         $at, $zero, L_80213B24
    if (ctx->r1 != 0) {
        // 0x802136FC: swc1        $f6, 0xC4($sp)
        MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
            goto L_80213B24;
    }
    // 0x802136FC: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x80213700: sw          $t3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r11;
L_80213704:
    // 0x80213704: lw          $t4, 0xE8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE8);
    // 0x80213708: lw          $t5, 0x114($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X114);
    // 0x8021370C: lw          $t6, 0x110($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X110);
    // 0x80213710: lwc1        $f10, 0x4($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80213714: slt         $at, $t6, $t5
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80213718: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    // 0x8021371C: lwc1        $f8, 0x20($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X20);
    // 0x80213720: sw          $t5, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r13;
    // 0x80213724: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80213728: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8021372C: bne         $at, $zero, L_80213B10
    if (ctx->r1 != 0) {
        // 0x80213730: swc1        $f4, 0xC0($sp)
        MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
            goto L_80213B10;
    }
    // 0x80213730: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
    // 0x80213734: sw          $t7, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r15;
L_80213738:
    // 0x80213738: lw          $t8, 0xE8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE8);
    // 0x8021373C: lw          $t2, 0x128($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X128);
    // 0x80213740: lw          $t3, 0x12C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X12C);
    // 0x80213744: lbu         $t1, 0x18($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0X18);
    // 0x80213748: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021374C: mflo        $t9
    ctx->r25 = lo;
    // 0x80213750: addu        $t4, $t9, $t3
    ctx->r12 = ADD32(ctx->r25, ctx->r11);
    // 0x80213754: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80213758: sw          $t4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r12;
    // 0x8021375C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80213760: lw          $t6, 0x28($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X28);
    // 0x80213764: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80213768: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8021376C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80213770: addu        $v1, $t6, $t5
    ctx->r3 = ADD32(ctx->r14, ctx->r13);
    // 0x80213774: beql        $v1, $zero, L_80213B00
    if (ctx->r3 == 0) {
        // 0x80213778: lw          $t2, 0x128($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X128);
            goto L_80213B00;
    }
    goto skip_7;
    // 0x80213778: lw          $t2, 0x128($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X128);
    skip_7:
    // 0x8021377C: lw          $s5, 0x40($v1)
    ctx->r21 = MEM_W(ctx->r3, 0X40);
    // 0x80213780: lwc1        $f6, 0x134($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X134);
    // 0x80213784: beql        $s5, $zero, L_80213B00
    if (ctx->r21 == 0) {
        // 0x80213788: lw          $t2, 0x128($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X128);
            goto L_80213B00;
    }
    goto skip_8;
    // 0x80213788: lw          $t2, 0x128($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X128);
    skip_8:
    // 0x8021378C: lwc1        $f8, 0x30($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X30);
    // 0x80213790: lwc1        $f4, 0x138($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X138);
    // 0x80213794: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    // 0x80213798: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021379C: addiu       $a2, $sp, 0x100
    ctx->r6 = ADD32(ctx->r29, 0X100);
    // 0x802137A0: swc1        $f10, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f10.u32l;
    // 0x802137A4: lwc1        $f6, 0x34($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X34);
    // 0x802137A8: lwc1        $f10, 0x13C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x802137AC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802137B0: swc1        $f8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f8.u32l;
    // 0x802137B4: lwc1        $f4, 0x38($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X38);
    // 0x802137B8: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x802137BC: swc1        $f6, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f6.u32l;
    // 0x802137C0: lwc1        $f8, 0x2C($s5)
    ctx->f8.u32l = MEM_W(ctx->r21, 0X2C);
    // 0x802137C4: lbu         $v0, 0x48($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X48);
    // 0x802137C8: sw          $v1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r3;
    // 0x802137CC: mul.s       $f28, $f8, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f28.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x802137D0: beq         $v0, $zero, L_802137EC
    if (ctx->r2 == 0) {
        // 0x802137D4: sw          $zero, 0x124($sp)
        MEM_W(0X124, ctx->r29) = 0;
            goto L_802137EC;
    }
    // 0x802137D4: sw          $zero, 0x124($sp)
    MEM_W(0X124, ctx->r29) = 0;
    // 0x802137D8: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x802137DC: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x802137E0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x802137E4: jal         0x80218C74
    // 0x802137E8: sw          $v1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r3;
    func_80218C74(rdram, ctx);
        goto after_1;
    // 0x802137E8: sw          $v1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r3;
    after_1:
L_802137EC:
    // 0x802137EC: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x802137F0: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x802137F4: lwc1        $f6, 0xC0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x802137F8: mfc1        $a2, $f30
    ctx->r6 = (int32_t)ctx->f30.u32l;
    // 0x802137FC: lwc1        $f12, 0x104($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X104);
    // 0x80213800: lwc1        $f14, 0x100($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X100);
    // 0x80213804: lw          $a3, 0xC8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC8);
    // 0x80213808: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8021380C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80213810: jal         0x80218D34
    // 0x80213814: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_80218D34(rdram, ctx);
        goto after_2;
    // 0x80213814: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80213818: lwc1        $f0, 0x2C($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X2C);
    // 0x8021381C: lwc1        $f8, 0x104($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X104);
    // 0x80213820: lwc1        $f10, 0x100($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X100);
    // 0x80213824: lwc1        $f4, 0xFC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x80213828: mul.s       $f22, $f0, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8021382C: lhu         $v1, 0xC($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0XC);
    // 0x80213830: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x80213834: mul.s       $f24, $f0, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80213838: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021383C: mul.s       $f26, $f0, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80213840: blezl       $v1, L_80213B00
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80213844: lw          $t2, 0x128($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X128);
            goto L_80213B00;
    }
    goto skip_9;
    // 0x80213844: lw          $t2, 0x128($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X128);
    skip_9:
    // 0x80213848: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
L_8021384C:
    // 0x8021384C: lw          $t1, 0x8($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X8);
    // 0x80213850: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
    // 0x80213854: addu        $s4, $t1, $v0
    ctx->r20 = ADD32(ctx->r9, ctx->r2);
    // 0x80213858: lhu         $t2, 0x16($s4)
    ctx->r10 = MEM_HU(ctx->r20, 0X16);
    // 0x8021385C: and         $t3, $t2, $t9
    ctx->r11 = ctx->r10 & ctx->r25;
    // 0x80213860: beql        $t3, $zero, L_80213AE8
    if (ctx->r11 == 0) {
        // 0x80213864: lw          $t9, 0x124($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X124);
            goto L_80213AE8;
    }
    goto skip_10;
    // 0x80213864: lw          $t9, 0x124($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X124);
    skip_10:
    // 0x80213868: lwc1        $f6, 0x1C($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X1C);
    // 0x8021386C: mfc1        $a3, $f30
    ctx->r7 = (int32_t)ctx->f30.u32l;
    // 0x80213870: lwc1        $f12, 0x104($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X104);
    // 0x80213874: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80213878: lwc1        $f8, 0x20($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X20);
    // 0x8021387C: lwc1        $f14, 0x100($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X100);
    // 0x80213880: lw          $a2, 0xFC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XFC);
    // 0x80213884: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80213888: lwc1        $f10, 0x24($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X24);
    // 0x8021388C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80213890: lwc1        $f4, 0x28($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X28);
    // 0x80213894: sw          $v0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r2;
    // 0x80213898: jal         0x802164C8
    // 0x8021389C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_802164C8(rdram, ctx);
        goto after_3;
    // 0x8021389C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x802138A0: bnel        $v0, $zero, L_802138B8
    if (ctx->r2 != 0) {
        // 0x802138A4: lhu         $v0, 0x14($s4)
        ctx->r2 = MEM_HU(ctx->r20, 0X14);
            goto L_802138B8;
    }
    goto skip_11;
    // 0x802138A4: lhu         $v0, 0x14($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X14);
    skip_11:
    // 0x802138A8: lhu         $v1, 0xC($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0XC);
    // 0x802138AC: b           L_80213AE4
    // 0x802138B0: lw          $v0, 0xB4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB4);
        goto L_80213AE4;
    // 0x802138B0: lw          $v0, 0xB4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB4);
    // 0x802138B4: lhu         $v0, 0x14($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X14);
L_802138B8:
    // 0x802138B8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802138BC: blezl       $v0, L_80213AE0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802138C0: lhu         $v1, 0xC($s5)
        ctx->r3 = MEM_HU(ctx->r21, 0XC);
            goto L_80213AE0;
    }
    goto skip_12;
    // 0x802138C0: lhu         $v1, 0xC($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0XC);
    skip_12:
    // 0x802138C4: lw          $t4, 0x10($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X10);
L_802138C8:
    // 0x802138C8: sll         $t8, $s1, 3
    ctx->r24 = S32(ctx->r17 << 3);
    // 0x802138CC: lw          $t5, 0xB0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB0);
    // 0x802138D0: addu        $t0, $t4, $t8
    ctx->r8 = ADD32(ctx->r12, ctx->r24);
    // 0x802138D4: lhu         $t6, 0x6($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X6);
    // 0x802138D8: and         $t7, $t6, $t5
    ctx->r15 = ctx->r14 & ctx->r13;
    // 0x802138DC: beql        $t7, $zero, L_80213AD0
    if (ctx->r15 == 0) {
        // 0x802138E0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80213AD0;
    }
    goto skip_13;
    // 0x802138E0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_13:
    // 0x802138E4: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x802138E8: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
    // 0x802138EC: lhu         $t9, 0x2($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X2);
    // 0x802138F0: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x802138F4: addu        $v0, $v1, $t2
    ctx->r2 = ADD32(ctx->r3, ctx->r10);
    // 0x802138F8: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x802138FC: lhu         $t4, 0x4($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0X4);
    // 0x80213900: sll         $t3, $t9, 4
    ctx->r11 = S32(ctx->r25 << 4);
    // 0x80213904: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80213908: addu        $a0, $v1, $t3
    ctx->r4 = ADD32(ctx->r3, ctx->r11);
    // 0x8021390C: sll         $t8, $t4, 4
    ctx->r24 = S32(ctx->r12 << 4);
    // 0x80213910: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80213914: addu        $a1, $v1, $t8
    ctx->r5 = ADD32(ctx->r3, ctx->r24);
    // 0x80213918: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x8021391C: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x80213920: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x80213924: multu       $s0, $s6
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80213928: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8021392C: lh          $t5, 0x2($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X2);
    // 0x80213930: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x80213934: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    // 0x80213938: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8021393C: lw          $t5, 0x0($fp)
    ctx->r13 = MEM_W(ctx->r30, 0X0);
    // 0x80213940: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80213944: mflo        $t6
    ctx->r14 = lo;
    // 0x80213948: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8021394C: lh          $t7, 0x4($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X4);
    // 0x80213950: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80213954: addu        $t7, $t6, $t5
    ctx->r15 = ADD32(ctx->r14, ctx->r13);
    // 0x80213958: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021395C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80213960: lh          $t1, 0x0($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X0);
    // 0x80213964: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x80213968: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x8021396C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80213970: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x80213974: lh          $t2, 0x2($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X2);
    // 0x80213978: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8021397C: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x80213980: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80213984: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80213988: lh          $t9, 0x4($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X4);
    // 0x8021398C: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80213990: addu        $t9, $t1, $t2
    ctx->r25 = ADD32(ctx->r9, ctx->r10);
    // 0x80213994: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80213998: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8021399C: lh          $t3, 0x0($a1)
    ctx->r11 = MEM_H(ctx->r5, 0X0);
    // 0x802139A0: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x802139A4: nop

    // 0x802139A8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802139AC: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x802139B0: lh          $t4, 0x2($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X2);
    // 0x802139B4: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x802139B8: nop

    // 0x802139BC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802139C0: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x802139C4: lh          $t8, 0x4($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X4);
    // 0x802139C8: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x802139CC: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x802139D0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x802139D4: nop

    // 0x802139D8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802139DC: jal         0x80213020
    // 0x802139E0: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    func_80213020(rdram, ctx);
        goto after_4;
    // 0x802139E0: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x802139E4: bne         $v0, $zero, L_802139F4
    if (ctx->r2 != 0) {
        // 0x802139E8: lw          $t3, 0xE4($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XE4);
            goto L_802139F4;
    }
    // 0x802139E8: lw          $t3, 0xE4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE4);
    // 0x802139EC: b           L_80213ACC
    // 0x802139F0: lhu         $v0, 0x14($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X14);
        goto L_80213ACC;
    // 0x802139F0: lhu         $v0, 0x14($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X14);
L_802139F4:
    // 0x802139F4: lw          $t5, 0x124($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X124);
    // 0x802139F8: lw          $t8, 0x10C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10C);
    // 0x802139FC: lbu         $v0, 0x48($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X48);
    // 0x80213A00: andi        $t7, $t5, 0x3FF
    ctx->r15 = ctx->r13 & 0X3FF;
    // 0x80213A04: sll         $t1, $t7, 12
    ctx->r9 = S32(ctx->r15 << 12);
    // 0x80213A08: sll         $t6, $t8, 22
    ctx->r14 = S32(ctx->r24 << 22);
    // 0x80213A0C: addu        $s2, $t6, $t1
    ctx->r18 = ADD32(ctx->r14, ctx->r9);
    // 0x80213A10: beq         $v0, $zero, L_80213A40
    if (ctx->r2 == 0) {
        // 0x80213A14: neg.s       $f20, $f30
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); 
    ctx->f20.fl = -ctx->f30.fl;
            goto L_80213A40;
    }
    // 0x80213A14: neg.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); 
    ctx->f20.fl = -ctx->f30.fl;
    // 0x80213A18: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x80213A1C: lw          $t8, 0x0($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X0);
    // 0x80213A20: negu        $a0, $v0
    ctx->r4 = SUB32(0, ctx->r2);
    // 0x80213A24: multu       $t3, $s6
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80213A28: sll         $t2, $a0, 16
    ctx->r10 = S32(ctx->r4 << 16);
    // 0x80213A2C: sra         $a0, $t2, 16
    ctx->r4 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80213A30: mflo        $t4
    ctx->r12 = lo;
    // 0x80213A34: addu        $a1, $t4, $t8
    ctx->r5 = ADD32(ctx->r12, ctx->r24);
    // 0x80213A38: jal         0x80218C74
    // 0x80213A3C: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    func_80218C74(rdram, ctx);
        goto after_5;
    // 0x80213A3C: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    after_5:
L_80213A40:
    // 0x80213A40: lwc1        $f4, 0x2C($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X2C);
    // 0x80213A44: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x80213A48: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    // 0x80213A4C: mul.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x80213A50: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80213A54: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x80213A58: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80213A5C: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x80213A60: andi        $t1, $s1, 0xFFF
    ctx->r9 = ctx->r17 & 0XFFF;
    // 0x80213A64: addu        $t2, $s2, $t1
    ctx->r10 = ADD32(ctx->r18, ctx->r9);
    // 0x80213A68: div.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80213A6C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80213A70: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80213A74: addiu       $a1, $a1, 0x2F80
    ctx->r5 = ADD32(ctx->r5, 0X2F80);
    // 0x80213A78: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80213A7C: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x80213A80: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x80213A84: lw          $t9, -0x3C64($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C64);
    // 0x80213A88: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80213A8C: addu        $t8, $t9, $t4
    ctx->r24 = ADD32(ctx->r25, ctx->r12);
    // 0x80213A90: sw          $t2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r10;
    // 0x80213A94: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x80213A98: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x80213A9C: sw          $t5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r13;
    // 0x80213AA0: lhu         $t6, 0xBD8($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XBD8);
    // 0x80213AA4: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80213AA8: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80213AAC: bnel        $at, $zero, L_80213ACC
    if (ctx->r1 != 0) {
        // 0x80213AB0: lhu         $v0, 0x14($s4)
        ctx->r2 = MEM_HU(ctx->r20, 0X14);
            goto L_80213ACC;
    }
    goto skip_14;
    // 0x80213AB0: lhu         $v0, 0x14($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X14);
    skip_14:
    // 0x80213AB4: jal         0x80231C58
    // 0x80213AB8: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    func_80231C58(rdram, ctx);
        goto after_6;
    // 0x80213AB8: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    after_6:
    // 0x80213ABC: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x80213AC0: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x80213AC4: sw          $t3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r11;
    // 0x80213AC8: lhu         $v0, 0x14($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X14);
L_80213ACC:
    // 0x80213ACC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80213AD0:
    // 0x80213AD0: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80213AD4: bnel        $at, $zero, L_802138C8
    if (ctx->r1 != 0) {
        // 0x80213AD8: lw          $t4, 0x10($s4)
        ctx->r12 = MEM_W(ctx->r20, 0X10);
            goto L_802138C8;
    }
    goto skip_15;
    // 0x80213AD8: lw          $t4, 0x10($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X10);
    skip_15:
    // 0x80213ADC: lhu         $v1, 0xC($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0XC);
L_80213AE0:
    // 0x80213AE0: lw          $v0, 0xB4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB4);
L_80213AE4:
    // 0x80213AE4: lw          $t9, 0x124($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X124);
L_80213AE8:
    // 0x80213AE8: addiu       $v0, $v0, 0x2C
    ctx->r2 = ADD32(ctx->r2, 0X2C);
    // 0x80213AEC: addiu       $t4, $t9, 0x1
    ctx->r12 = ADD32(ctx->r25, 0X1);
    // 0x80213AF0: slt         $at, $t4, $v1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80213AF4: bne         $at, $zero, L_8021384C
    if (ctx->r1 != 0) {
        // 0x80213AF8: sw          $t4, 0x124($sp)
        MEM_W(0X124, ctx->r29) = ctx->r12;
            goto L_8021384C;
    }
    // 0x80213AF8: sw          $t4, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r12;
    // 0x80213AFC: lw          $t2, 0x128($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X128);
L_80213B00:
    // 0x80213B00: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x80213B04: addiu       $t8, $t2, 0x1
    ctx->r24 = ADD32(ctx->r10, 0X1);
    // 0x80213B08: bne         $t7, $t8, L_80213738
    if (ctx->r15 != ctx->r24) {
        // 0x80213B0C: sw          $t8, 0x128($sp)
        MEM_W(0X128, ctx->r29) = ctx->r24;
            goto L_80213738;
    }
    // 0x80213B0C: sw          $t8, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r24;
L_80213B10:
    // 0x80213B10: lw          $t5, 0x12C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X12C);
    // 0x80213B14: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x80213B18: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80213B1C: bne         $t1, $t6, L_80213704
    if (ctx->r9 != ctx->r14) {
        // 0x80213B20: sw          $t6, 0x12C($sp)
        MEM_W(0X12C, ctx->r29) = ctx->r14;
            goto L_80213704;
    }
    // 0x80213B20: sw          $t6, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r14;
L_80213B24:
    // 0x80213B24: lui         $t3, 0x8026
    ctx->r11 = S32(0X8026 << 16);
    // 0x80213B28: lw          $t3, -0x3C64($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3C64);
    // 0x80213B2C: lw          $t9, 0x144($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X144);
    // 0x80213B30: lui         $s7, 0x8026
    ctx->r23 = S32(0X8026 << 16);
    // 0x80213B34: addiu       $s7, $s7, -0x3C60
    ctx->r23 = ADD32(ctx->r23, -0X3C60);
    // 0x80213B38: sw          $t3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r11;
    // 0x80213B3C: lw          $t2, 0x148($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X148);
    // 0x80213B40: lw          $t4, 0x0($s7)
    ctx->r12 = MEM_W(ctx->r23, 0X0);
    // 0x80213B44: lui         $fp, 0x8026
    ctx->r30 = S32(0X8026 << 16);
    // 0x80213B48: addiu       $fp, $fp, -0x3C5C
    ctx->r30 = ADD32(ctx->r30, -0X3C5C);
    // 0x80213B4C: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
    // 0x80213B50: lw          $t8, 0x14C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14C);
    // 0x80213B54: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
    // 0x80213B58: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x80213B5C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
L_80213B60:
    // 0x80213B60: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x80213B64: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x80213B68: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x80213B6C: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x80213B70: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x80213B74: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x80213B78: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x80213B7C: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x80213B80: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x80213B84: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x80213B88: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x80213B8C: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x80213B90: lw          $s5, 0x8C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8C);
    // 0x80213B94: lw          $s6, 0x90($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X90);
    // 0x80213B98: lw          $s7, 0x94($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X94);
    // 0x80213B9C: lw          $fp, 0x98($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X98);
    // 0x80213BA0: jr          $ra
    // 0x80213BA4: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x80213BA4: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void func_802235C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802235C8: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802235CC: lw          $t6, -0x1798($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1798);
    // 0x802235D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802235D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802235D8: beql        $t6, $zero, L_802235F4
    if (ctx->r14 == 0) {
        // 0x802235DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802235F4;
    }
    goto skip_0;
    // 0x802235DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802235E0: jal         0x80230F68
    // 0x802235E4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80230F68(rdram, ctx);
        goto after_0;
    // 0x802235E4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x802235E8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802235EC: sw          $zero, -0x1798($at)
    MEM_W(-0X1798, ctx->r1) = 0;
    // 0x802235F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802235F4:
    // 0x802235F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802235F8: jr          $ra
    // 0x802235FC: nop

    return;
    // 0x802235FC: nop

;}
RECOMP_FUNC void func_80240048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80240048: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024004C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80240050: lw          $a3, 0x50($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X50);
    // 0x80240054: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x80240058: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8024005C: beq         $a3, $zero, L_802400DC
    if (ctx->r7 == 0) {
        // 0x80240060: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_802400DC;
    }
    // 0x80240060: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80240064: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_80240068:
    // 0x80240068: lh          $t6, 0xC($a3)
    ctx->r14 = MEM_H(ctx->r7, 0XC);
    // 0x8024006C: lw          $v1, 0x8($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X8);
    // 0x80240070: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80240074: bne         $a0, $t6, L_802400D4
    if (ctx->r4 != ctx->r14) {
        // 0x80240078: addu        $t0, $t0, $v1
        ctx->r8 = ADD32(ctx->r8, ctx->r3);
            goto L_802400D4;
    }
    // 0x80240078: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x8024007C: lw          $t7, 0x10($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X10);
    // 0x80240080: bne         $a1, $t7, L_802400D4
    if (ctx->r5 != ctx->r15) {
        // 0x80240084: slt         $at, $a2, $t0
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_802400D4;
    }
    // 0x80240084: slt         $at, $a2, $t0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80240088: beq         $at, $zero, L_802400CC
    if (ctx->r1 == 0) {
        // 0x8024008C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_802400CC;
    }
    // 0x8024008C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80240090: beql        $v0, $zero, L_802400A8
    if (ctx->r2 == 0) {
        // 0x80240094: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_802400A8;
    }
    goto skip_0;
    // 0x80240094: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    skip_0:
    // 0x80240098: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x8024009C: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x802400A0: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    // 0x802400A4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
L_802400A8:
    // 0x802400A8: sb          $t1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r9;
    // 0x802400AC: jal         0x80237120
    // 0x802400B0: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    func_80237120(rdram, ctx);
        goto after_0;
    // 0x802400B0: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    after_0:
    // 0x802400B4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x802400B8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802400BC: jal         0x80237150
    // 0x802400C0: addiu       $a1, $t2, 0x48
    ctx->r5 = ADD32(ctx->r10, 0X48);
    func_80237150(rdram, ctx);
        goto after_1;
    // 0x802400C0: addiu       $a1, $t2, 0x48
    ctx->r5 = ADD32(ctx->r10, 0X48);
    after_1:
    // 0x802400C4: b           L_802400DC
    // 0x802400C8: lbu         $t1, 0x1F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1F);
        goto L_802400DC;
    // 0x802400C8: lbu         $t1, 0x1F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1F);
L_802400CC:
    // 0x802400CC: b           L_802400DC
    // 0x802400D0: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
        goto L_802400DC;
    // 0x802400D0: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_802400D4:
    // 0x802400D4: bne         $v0, $zero, L_80240068
    if (ctx->r2 != 0) {
        // 0x802400D8: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_80240068;
    }
    // 0x802400D8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_802400DC:
    // 0x802400DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802400E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802400E4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x802400E8: jr          $ra
    // 0x802400EC: nop

    return;
    // 0x802400EC: nop

;}
RECOMP_FUNC void func_80244880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80244880: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80244884: beq         $a1, $at, L_802448A0
    if (ctx->r5 == ctx->r1) {
        // 0x80244888: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802448A0;
    }
    // 0x80244888: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8024488C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80244890: beql        $a1, $at, L_802448AC
    if (ctx->r5 == ctx->r1) {
        // 0x80244894: sw          $a2, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->r6;
            goto L_802448AC;
    }
    goto skip_0;
    // 0x80244894: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
    skip_0:
    // 0x80244898: jr          $ra
    // 0x8024489C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8024489C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802448A0:
    // 0x802448A0: jr          $ra
    // 0x802448A4: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    return;
    // 0x802448A4: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x802448A8: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
L_802448AC:
    // 0x802448AC: jr          $ra
    // 0x802448B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802448B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8022F490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022F490: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x8022F494: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x8022F498: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x8022F49C: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x8022F4A0: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x8022F4A4: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x8022F4A8: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x8022F4AC: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x8022F4B0: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x8022F4B4: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8022F4B8: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8022F4BC: sw          $a2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r6;
    // 0x8022F4C0: sw          $a3, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r7;
    // 0x8022F4C4: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x8022F4C8: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x8022F4CC: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x8022F4D0: addu        $s7, $t7, $t8
    ctx->r23 = ADD32(ctx->r15, ctx->r24);
    // 0x8022F4D4: lbu         $v1, 0x4($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X4);
    // 0x8022F4D8: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x8022F4DC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8022F4E0: blez        $v1, L_8022F7A8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8022F4E4: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_8022F7A8;
    }
    // 0x8022F4E4: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8022F4E8: lui         $fp, 0x8027
    ctx->r30 = S32(0X8027 << 16);
    // 0x8022F4EC: addiu       $fp, $fp, 0x44B4
    ctx->r30 = ADD32(ctx->r30, 0X44B4);
    // 0x8022F4F0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
L_8022F4F4:
    // 0x8022F4F4: lw          $t9, 0x1C($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X1C);
    // 0x8022F4F8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8022F4FC: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    // 0x8022F500: sllv        $t1, $t0, $s4
    ctx->r9 = S32(ctx->r8 << (ctx->r20 & 31));
    // 0x8022F504: and         $t2, $t9, $t1
    ctx->r10 = ctx->r25 & ctx->r9;
    // 0x8022F508: bne         $t2, $zero, L_8022F524
    if (ctx->r10 != 0) {
        // 0x8022F50C: addu        $s1, $a0, $s6
        ctx->r17 = ADD32(ctx->r4, ctx->r22);
            goto L_8022F524;
    }
    // 0x8022F50C: addu        $s1, $a0, $s6
    ctx->r17 = ADD32(ctx->r4, ctx->r22);
    // 0x8022F510: lbu         $t3, 0x7($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X7);
    // 0x8022F514: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8022F518: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x8022F51C: beq         $t4, $zero, L_8022F52C
    if (ctx->r12 == 0) {
        // 0x8022F520: nop
    
            goto L_8022F52C;
    }
    // 0x8022F520: nop

L_8022F524:
    // 0x8022F524: b           L_8022F52C
    // 0x8022F528: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_8022F52C;
    // 0x8022F528: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8022F52C:
    // 0x8022F52C: bnel        $s2, $zero, L_8022F58C
    if (ctx->r18 != 0) {
        // 0x8022F530: lw          $v0, 0x8($s5)
        ctx->r2 = MEM_W(ctx->r21, 0X8);
            goto L_8022F58C;
    }
    goto skip_0;
    // 0x8022F530: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    skip_0:
    // 0x8022F534: lbu         $t5, 0x7($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X7);
    // 0x8022F538: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x8022F53C: slt         $at, $s4, $t7
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8022F540: andi        $t6, $t5, 0x2
    ctx->r14 = ctx->r13 & 0X2;
    // 0x8022F544: beql        $t6, $zero, L_8022F58C
    if (ctx->r14 == 0) {
        // 0x8022F548: lw          $v0, 0x8($s5)
        ctx->r2 = MEM_W(ctx->r21, 0X8);
            goto L_8022F58C;
    }
    goto skip_1;
    // 0x8022F548: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    skip_1:
    // 0x8022F54C: beq         $at, $zero, L_8022F794
    if (ctx->r1 == 0) {
        // 0x8022F550: addu        $v0, $a0, $s6
        ctx->r2 = ADD32(ctx->r4, ctx->r22);
            goto L_8022F794;
    }
    // 0x8022F550: addu        $v0, $a0, $s6
    ctx->r2 = ADD32(ctx->r4, ctx->r22);
    // 0x8022F554: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
    // 0x8022F558: lbu         $t0, 0x2A($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X2A);
    // 0x8022F55C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022F560: subu        $s2, $t8, $t0
    ctx->r18 = SUB32(ctx->r24, ctx->r8);
    // 0x8022F564: blezl       $s2, L_8022F798
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8022F568: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8022F798;
    }
    goto skip_2;
    // 0x8022F568: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
L_8022F56C:
    // 0x8022F56C: jal         0x802230E4
    // 0x8022F570: nop

    func_802230E4(rdram, ctx);
        goto after_0;
    // 0x8022F570: nop

    after_0:
    // 0x8022F574: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022F578: bne         $s0, $s2, L_8022F56C
    if (ctx->r16 != ctx->r18) {
        // 0x8022F57C: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_8022F56C;
    }
    // 0x8022F57C: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8022F580: b           L_8022F794
    // 0x8022F584: lbu         $v1, 0x4($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X4);
        goto L_8022F794;
    // 0x8022F584: lbu         $v1, 0x4($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X4);
    // 0x8022F588: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
L_8022F58C:
    // 0x8022F58C: sll         $s0, $s4, 2
    ctx->r16 = S32(ctx->r20 << 2);
    // 0x8022F590: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8022F594: addu        $t9, $v0, $s0
    ctx->r25 = ADD32(ctx->r2, ctx->r16);
    // 0x8022F598: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x8022F59C: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x8022F5A0: sll         $t7, $s4, 2
    ctx->r15 = S32(ctx->r20 << 2);
    // 0x8022F5A4: beq         $t1, $zero, L_8022F5DC
    if (ctx->r9 == 0) {
        // 0x8022F5A8: lui         $t0, 0x8027
        ctx->r8 = S32(0X8027 << 16);
            goto L_8022F5DC;
    }
    // 0x8022F5A8: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x8022F5AC: lw          $v1, 0x3B90($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B90);
    // 0x8022F5B0: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022F5B4: lui         $t3, 0x104
    ctx->r11 = S32(0X104 << 16);
    // 0x8022F5B8: addiu       $t2, $v1, 0x8
    ctx->r10 = ADD32(ctx->r3, 0X8);
    // 0x8022F5BC: sw          $t2, 0x3B90($at)
    MEM_W(0X3B90, ctx->r1) = ctx->r10;
    // 0x8022F5C0: ori         $t3, $t3, 0x40
    ctx->r11 = ctx->r11 | 0X40;
    // 0x8022F5C4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8022F5C8: lw          $t4, 0x8($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X8);
    // 0x8022F5CC: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x8022F5D0: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8022F5D4: b           L_8022F668
    // 0x8022F5D8: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
        goto L_8022F668;
    // 0x8022F5D8: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
L_8022F5DC:
    // 0x8022F5DC: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x8022F5E0: lw          $t0, 0x44B8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X44B8);
    // 0x8022F5E4: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x8022F5E8: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8022F5EC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8022F5F0: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x8022F5F4: lw          $t3, 0x0($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X0);
    // 0x8022F5F8: sll         $t6, $s4, 6
    ctx->r14 = S32(ctx->r20 << 6);
    // 0x8022F5FC: or          $t1, $sp, $zero
    ctx->r9 = ctx->r29 | 0;
    // 0x8022F600: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8022F604: sw          $t4, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r12;
    // 0x8022F608: lw          $t5, 0x4($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X4);
    // 0x8022F60C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8022F610: addiu       $t0, $t7, 0x3C
    ctx->r8 = ADD32(ctx->r15, 0X3C);
L_8022F614:
    // 0x8022F614: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8022F618: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8022F61C: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x8022F620: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x8022F624: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8022F628: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x8022F62C: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8022F630: bne         $t7, $t0, L_8022F614
    if (ctx->r15 != ctx->r8) {
        // 0x8022F634: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_8022F614;
    }
    // 0x8022F634: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x8022F638: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8022F63C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8022F640: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x8022F644: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x8022F648: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x8022F64C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8022F650: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x8022F654: jal         0x80222FE0
    // 0x8022F658: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    func_80222FE0(rdram, ctx);
        goto after_1;
    // 0x8022F658: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    after_1:
    // 0x8022F65C: lw          $t2, 0x8($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X8);
    // 0x8022F660: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x8022F664: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
L_8022F668:
    // 0x8022F668: beql        $s2, $zero, L_8022F740
    if (ctx->r18 == 0) {
        // 0x8022F66C: lbu         $v1, 0x4($s7)
        ctx->r3 = MEM_BU(ctx->r23, 0X4);
            goto L_8022F740;
    }
    goto skip_3;
    // 0x8022F66C: lbu         $v1, 0x4($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X4);
    skip_3:
    // 0x8022F670: lbu         $t4, 0x20($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X20);
    // 0x8022F674: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022F678: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x8022F67C: beql        $t4, $zero, L_8022F710
    if (ctx->r12 == 0) {
        // 0x8022F680: lbu         $t8, 0x4($s1)
        ctx->r24 = MEM_BU(ctx->r17, 0X4);
            goto L_8022F710;
    }
    goto skip_4;
    // 0x8022F680: lbu         $t8, 0x4($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X4);
    skip_4:
    // 0x8022F684: lw          $t5, 0x4($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X4);
    // 0x8022F688: sll         $t6, $s4, 6
    ctx->r14 = S32(ctx->r20 << 6);
    // 0x8022F68C: or          $t1, $sp, $zero
    ctx->r9 = ctx->r29 | 0;
    // 0x8022F690: addu        $t9, $t5, $t6
    ctx->r25 = ADD32(ctx->r13, ctx->r14);
    // 0x8022F694: addiu       $t7, $t9, 0x3C
    ctx->r15 = ADD32(ctx->r25, 0X3C);
L_8022F698:
    // 0x8022F698: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8022F69C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8022F6A0: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x8022F6A4: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x8022F6A8: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x8022F6AC: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x8022F6B0: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x8022F6B4: bne         $t9, $t7, L_8022F698
    if (ctx->r25 != ctx->r15) {
        // 0x8022F6B8: sw          $at, 0x4($t1)
        MEM_W(0X4, ctx->r9) = ctx->r1;
            goto L_8022F698;
    }
    // 0x8022F6B8: sw          $at, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r1;
    // 0x8022F6BC: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8022F6C0: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x8022F6C4: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x8022F6C8: jal         0x80228F38
    // 0x8022F6CC: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    func_80228F38(rdram, ctx);
        goto after_2;
    // 0x8022F6CC: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    after_2:
    // 0x8022F6D0: lw          $v0, 0xF4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XF4);
    // 0x8022F6D4: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x8022F6D8: lwc1        $f10, 0xC0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x8022F6DC: lwc1        $f6, 0x30($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8022F6E0: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x8022F6E4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022F6E8: lwc1        $f4, 0xC4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x8022F6EC: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    // 0x8022F6F0: lwc1        $f16, 0x34($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8022F6F4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8022F6F8: swc1        $f18, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f18.u32l;
    // 0x8022F6FC: lwc1        $f6, 0x38($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8022F700: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022F704: jal         0x802219B8
    // 0x8022F708: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    func_802219B8(rdram, ctx);
        goto after_3;
    // 0x8022F708: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8022F70C: lbu         $t8, 0x4($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X4);
L_8022F710:
    // 0x8022F710: blezl       $t8, L_8022F740
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8022F714: lbu         $v1, 0x4($s7)
        ctx->r3 = MEM_BU(ctx->r23, 0X4);
            goto L_8022F740;
    }
    goto skip_5;
    // 0x8022F714: lbu         $v1, 0x4($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X4);
    skip_5:
    // 0x8022F718: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
L_8022F71C:
    // 0x8022F71C: sll         $t3, $s0, 4
    ctx->r11 = S32(ctx->r16 << 4);
    // 0x8022F720: jal         0x80220C44
    // 0x8022F724: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    func_80220C44(rdram, ctx);
        goto after_4;
    // 0x8022F724: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    after_4:
    // 0x8022F728: lbu         $t4, 0x4($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X4);
    // 0x8022F72C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022F730: slt         $at, $s0, $t4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8022F734: bnel        $at, $zero, L_8022F71C
    if (ctx->r1 != 0) {
        // 0x8022F738: lw          $t2, 0x0($s1)
        ctx->r10 = MEM_W(ctx->r17, 0X0);
            goto L_8022F71C;
    }
    goto skip_6;
    // 0x8022F738: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    skip_6:
    // 0x8022F73C: lbu         $v1, 0x4($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X4);
L_8022F740:
    // 0x8022F740: addiu       $t5, $s4, 0x1
    ctx->r13 = ADD32(ctx->r20, 0X1);
    // 0x8022F744: bnel        $t5, $v1, L_8022F758
    if (ctx->r13 != ctx->r3) {
        // 0x8022F748: lw          $t6, 0x0($s7)
        ctx->r14 = MEM_W(ctx->r23, 0X0);
            goto L_8022F758;
    }
    goto skip_7;
    // 0x8022F748: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    skip_7:
    // 0x8022F74C: b           L_8022F7A8
    // 0x8022F750: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
        goto L_8022F7A8;
    // 0x8022F750: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8022F754: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
L_8022F758:
    // 0x8022F758: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022F75C: addu        $v0, $t6, $s6
    ctx->r2 = ADD32(ctx->r14, ctx->r22);
    // 0x8022F760: lbu         $t0, 0x6($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X6);
    // 0x8022F764: lbu         $t7, 0x2A($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2A);
    // 0x8022F768: subu        $s2, $t0, $t7
    ctx->r18 = SUB32(ctx->r8, ctx->r15);
    // 0x8022F76C: subu        $s3, $s3, $s2
    ctx->r19 = SUB32(ctx->r19, ctx->r18);
    // 0x8022F770: bltz        $s2, L_8022F794
    if (SIGNED(ctx->r18) < 0) {
        // 0x8022F774: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_8022F794;
    }
    // 0x8022F774: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8022F778: addiu       $s1, $s2, 0x1
    ctx->r17 = ADD32(ctx->r18, 0X1);
L_8022F77C:
    // 0x8022F77C: jal         0x802230E4
    // 0x8022F780: nop

    func_802230E4(rdram, ctx);
        goto after_5;
    // 0x8022F780: nop

    after_5:
    // 0x8022F784: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022F788: bne         $s1, $s0, L_8022F77C
    if (ctx->r17 != ctx->r16) {
        // 0x8022F78C: nop
    
            goto L_8022F77C;
    }
    // 0x8022F78C: nop

    // 0x8022F790: lbu         $v1, 0x4($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X4);
L_8022F794:
    // 0x8022F794: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8022F798:
    // 0x8022F798: slt         $at, $s4, $v1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022F79C: bne         $at, $zero, L_8022F4F4
    if (ctx->r1 != 0) {
        // 0x8022F7A0: addiu       $s6, $s6, 0x24
        ctx->r22 = ADD32(ctx->r22, 0X24);
            goto L_8022F4F4;
    }
    // 0x8022F7A0: addiu       $s6, $s6, 0x24
    ctx->r22 = ADD32(ctx->r22, 0X24);
    // 0x8022F7A4: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_8022F7A8:
    // 0x8022F7A8: blezl       $s3, L_8022F7C8
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8022F7AC: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_8022F7C8;
    }
    goto skip_8;
    // 0x8022F7AC: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_8:
L_8022F7B0:
    // 0x8022F7B0: jal         0x802230E4
    // 0x8022F7B4: nop

    func_802230E4(rdram, ctx);
        goto after_6;
    // 0x8022F7B4: nop

    after_6:
    // 0x8022F7B8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8022F7BC: bne         $s4, $s3, L_8022F7B0
    if (ctx->r20 != ctx->r19) {
        // 0x8022F7C0: nop
    
            goto L_8022F7B0;
    }
    // 0x8022F7C0: nop

    // 0x8022F7C4: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_8022F7C8:
    // 0x8022F7C8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8022F7CC: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8022F7D0: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x8022F7D4: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x8022F7D8: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x8022F7DC: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x8022F7E0: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x8022F7E4: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x8022F7E8: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x8022F7EC: jr          $ra
    // 0x8022F7F0: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x8022F7F0: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_80223C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223C60: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80223C64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80223C68: addiu       $a1, $t6, 0x5130
    ctx->r5 = ADD32(ctx->r14, 0X5130);
    // 0x80223C6C: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x80223C70: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80223C74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80223C78: addiu       $a3, $a3, 0x51D8
    ctx->r7 = ADD32(ctx->r7, 0X51D8);
    // 0x80223C7C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80223C80: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_80223C84:
    // 0x80223C84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80223C88: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
L_80223C8C:
    // 0x80223C8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80223C90: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x80223C94: bne         $v0, $a0, L_80223C8C
    if (ctx->r2 != ctx->r4) {
        // 0x80223C98: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80223C8C;
    }
    // 0x80223C98: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80223C9C: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    // 0x80223CA0: sltu        $at, $a1, $a3
    ctx->r1 = ctx->r5 < ctx->r7 ? 1 : 0;
    // 0x80223CA4: addiu       $a2, $a2, 0x1C
    ctx->r6 = ADD32(ctx->r6, 0X1C);
    // 0x80223CA8: sw          $zero, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = 0;
    // 0x80223CAC: bne         $at, $zero, L_80223C84
    if (ctx->r1 != 0) {
        // 0x80223CB0: sw          $zero, -0x8($a1)
        MEM_W(-0X8, ctx->r5) = 0;
            goto L_80223C84;
    }
    // 0x80223CB0: sw          $zero, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = 0;
    // 0x80223CB4: jal         0x80231790
    // 0x80223CB8: nop

    func_80231790(rdram, ctx);
        goto after_0;
    // 0x80223CB8: nop

    after_0:
    // 0x80223CBC: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x80223CC0: beq         $t7, $zero, L_80223CEC
    if (ctx->r15 == 0) {
        // 0x80223CC4: andi        $t0, $v0, 0x2
        ctx->r8 = ctx->r2 & 0X2;
            goto L_80223CEC;
    }
    // 0x80223CC4: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
    // 0x80223CC8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80223CCC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80223CD0: sb          $t8, 0x5148($at)
    MEM_B(0X5148, ctx->r1) = ctx->r24;
    // 0x80223CD4: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80223CD8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80223CDC: sb          $t9, 0x5130($at)
    MEM_B(0X5130, ctx->r1) = ctx->r25;
    // 0x80223CE0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80223CE4: b           L_80223CF4
    // 0x80223CE8: sw          $v0, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r2;
        goto L_80223CF4;
    // 0x80223CE8: sw          $v0, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r2;
L_80223CEC:
    // 0x80223CEC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80223CF0: sb          $zero, 0x5148($at)
    MEM_B(0X5148, ctx->r1) = 0;
L_80223CF4:
    // 0x80223CF4: beq         $t0, $zero, L_80223D20
    if (ctx->r8 == 0) {
        // 0x80223CF8: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_80223D20;
    }
    // 0x80223CF8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80223CFC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80223D00: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80223D04: sb          $t1, 0x5164($at)
    MEM_B(0X5164, ctx->r1) = ctx->r9;
    // 0x80223D08: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80223D0C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80223D10: sb          $t2, 0x514C($at)
    MEM_B(0X514C, ctx->r1) = ctx->r10;
    // 0x80223D14: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80223D18: b           L_80223D28
    // 0x80223D1C: sw          $v0, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r2;
        goto L_80223D28;
    // 0x80223D1C: sw          $v0, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r2;
L_80223D20:
    // 0x80223D20: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80223D24: sb          $zero, 0x5164($at)
    MEM_B(0X5164, ctx->r1) = 0;
L_80223D28:
    // 0x80223D28: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80223D2C: sllv        $t4, $t3, $a0
    ctx->r12 = S32(ctx->r11 << (ctx->r4 & 31));
    // 0x80223D30: and         $t5, $t4, $v0
    ctx->r13 = ctx->r12 & ctx->r2;
    // 0x80223D34: beq         $t5, $zero, L_80223D6C
    if (ctx->r13 == 0) {
        // 0x80223D38: addiu       $t0, $a0, 0x1
        ctx->r8 = ADD32(ctx->r4, 0X1);
            goto L_80223D6C;
    }
    // 0x80223D38: addiu       $t0, $a0, 0x1
    ctx->r8 = ADD32(ctx->r4, 0X1);
    // 0x80223D3C: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80223D40: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80223D44: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x80223D48: addiu       $t7, $t7, 0x5130
    ctx->r15 = ADD32(ctx->r15, 0X5130);
    // 0x80223D4C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80223D50: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80223D54: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x80223D58: sb          $v1, 0x18($a1)
    MEM_B(0X18, ctx->r5) = ctx->r3;
    // 0x80223D5C: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x80223D60: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80223D64: b           L_80223D8C
    // 0x80223D68: sw          $v0, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r2;
        goto L_80223D8C;
    // 0x80223D68: sw          $v0, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r2;
L_80223D6C:
    // 0x80223D6C: sll         $t8, $a0, 3
    ctx->r24 = S32(ctx->r4 << 3);
    // 0x80223D70: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x80223D74: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x80223D78: addiu       $t9, $t9, 0x5130
    ctx->r25 = ADD32(ctx->r25, 0X5130);
    // 0x80223D7C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80223D80: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x80223D84: sb          $zero, 0x18($a1)
    MEM_B(0X18, ctx->r5) = 0;
    // 0x80223D88: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80223D8C:
    // 0x80223D8C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80223D90: sllv        $t2, $t1, $t0
    ctx->r10 = S32(ctx->r9 << (ctx->r8 & 31));
    // 0x80223D94: and         $t3, $t2, $v0
    ctx->r11 = ctx->r10 & ctx->r2;
    // 0x80223D98: beq         $t3, $zero, L_80223DB4
    if (ctx->r11 == 0) {
        // 0x80223D9C: addiu       $t4, $a0, 0x2
        ctx->r12 = ADD32(ctx->r4, 0X2);
            goto L_80223DB4;
    }
    // 0x80223D9C: addiu       $t4, $a0, 0x2
    ctx->r12 = ADD32(ctx->r4, 0X2);
    // 0x80223DA0: sb          $v1, 0x34($a1)
    MEM_B(0X34, ctx->r5) = ctx->r3;
    // 0x80223DA4: sb          $v1, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = ctx->r3;
    // 0x80223DA8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80223DAC: b           L_80223DB8
    // 0x80223DB0: sw          $v0, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r2;
        goto L_80223DB8;
    // 0x80223DB0: sw          $v0, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r2;
L_80223DB4:
    // 0x80223DB4: sb          $zero, 0x34($a1)
    MEM_B(0X34, ctx->r5) = 0;
L_80223DB8:
    // 0x80223DB8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80223DBC: sllv        $t6, $t5, $t4
    ctx->r14 = S32(ctx->r13 << (ctx->r12 & 31));
    // 0x80223DC0: and         $t7, $t6, $v0
    ctx->r15 = ctx->r14 & ctx->r2;
    // 0x80223DC4: beq         $t7, $zero, L_80223DE0
    if (ctx->r15 == 0) {
        // 0x80223DC8: addiu       $t8, $a0, 0x3
        ctx->r24 = ADD32(ctx->r4, 0X3);
            goto L_80223DE0;
    }
    // 0x80223DC8: addiu       $t8, $a0, 0x3
    ctx->r24 = ADD32(ctx->r4, 0X3);
    // 0x80223DCC: sb          $v1, 0x50($a1)
    MEM_B(0X50, ctx->r5) = ctx->r3;
    // 0x80223DD0: sb          $v1, 0x38($a1)
    MEM_B(0X38, ctx->r5) = ctx->r3;
    // 0x80223DD4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80223DD8: b           L_80223DE4
    // 0x80223DDC: sw          $v0, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r2;
        goto L_80223DE4;
    // 0x80223DDC: sw          $v0, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r2;
L_80223DE0:
    // 0x80223DE0: sb          $zero, 0x50($a1)
    MEM_B(0X50, ctx->r5) = 0;
L_80223DE4:
    // 0x80223DE4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80223DE8: sllv        $t1, $t9, $t8
    ctx->r9 = S32(ctx->r25 << (ctx->r24 & 31));
    // 0x80223DEC: and         $t0, $t1, $v0
    ctx->r8 = ctx->r9 & ctx->r2;
    // 0x80223DF0: beq         $t0, $zero, L_80223E08
    if (ctx->r8 == 0) {
        // 0x80223DF4: lui         $at, 0x8028
        ctx->r1 = S32(0X8028 << 16);
            goto L_80223E08;
    }
    // 0x80223DF4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80223DF8: sb          $v1, 0x6C($a1)
    MEM_B(0X6C, ctx->r5) = ctx->r3;
    // 0x80223DFC: sb          $v1, 0x54($a1)
    MEM_B(0X54, ctx->r5) = ctx->r3;
    // 0x80223E00: b           L_80223E0C
    // 0x80223E04: sw          $v0, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r2;
        goto L_80223E0C;
    // 0x80223E04: sw          $v0, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r2;
L_80223E08:
    // 0x80223E08: sb          $zero, 0x6C($a1)
    MEM_B(0X6C, ctx->r5) = 0;
L_80223E0C:
    // 0x80223E0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80223E10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80223E14: jr          $ra
    // 0x80223E18: nop

    return;
    // 0x80223E18: nop

;}
RECOMP_FUNC void func_8022FBDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022FBDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FBE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FBE4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8022FBE8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8022FBEC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8022FBF0: jal         0x8022FB4C
    // 0x8022FBF4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_8022FB4C(rdram, ctx);
        goto after_0;
    // 0x8022FBF4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8022FBF8: bne         $v0, $zero, L_8022FC18
    if (ctx->r2 != 0) {
        // 0x8022FBFC: addiu       $v1, $sp, 0x24
        ctx->r3 = ADD32(ctx->r29, 0X24);
            goto L_8022FC18;
    }
    // 0x8022FBFC: addiu       $v1, $sp, 0x24
    ctx->r3 = ADD32(ctx->r29, 0X24);
    // 0x8022FC00: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022FC04: addiu       $a0, $a0, 0x4AFC
    ctx->r4 = ADD32(ctx->r4, 0X4AFC);
    // 0x8022FC08: jal         0x80231A24
    // 0x8022FC0C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022FC0C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x8022FC10: b           L_8022FCD0
    // 0x8022FC14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022FCD0;
    // 0x8022FC14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022FC18:
    // 0x8022FC18: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8022FC1C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x8022FC20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022FC24: addiu       $a0, $zero, -0x4
    ctx->r4 = ADD32(0, -0X4);
L_8022FC28:
    // 0x8022FC28: addiu       $t6, $v1, 0x3
    ctx->r14 = ADD32(ctx->r3, 0X3);
    // 0x8022FC2C: and         $v1, $t6, $a0
    ctx->r3 = ctx->r14 & ctx->r4;
    // 0x8022FC30: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x8022FC34: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8022FC38: addiu       $t7, $v1, 0x3
    ctx->r15 = ADD32(ctx->r3, 0X3);
    // 0x8022FC3C: beql        $a1, $zero, L_8022FCD0
    if (ctx->r5 == 0) {
        // 0x8022FC40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022FCD0;
    }
    goto skip_0;
    // 0x8022FC40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8022FC44: beql        $a1, $a2, L_8022FC68
    if (ctx->r5 == ctx->r6) {
        // 0x8022FC48: and         $v1, $t7, $a0
        ctx->r3 = ctx->r15 & ctx->r4;
            goto L_8022FC68;
    }
    goto skip_1;
    // 0x8022FC48: and         $v1, $t7, $a0
    ctx->r3 = ctx->r15 & ctx->r4;
    skip_1:
    // 0x8022FC4C: beq         $a1, $a3, L_8022FC78
    if (ctx->r5 == ctx->r7) {
        // 0x8022FC50: addiu       $t9, $v1, 0x3
        ctx->r25 = ADD32(ctx->r3, 0X3);
            goto L_8022FC78;
    }
    // 0x8022FC50: addiu       $t9, $v1, 0x3
    ctx->r25 = ADD32(ctx->r3, 0X3);
    // 0x8022FC54: beq         $a1, $t0, L_8022FCA0
    if (ctx->r5 == ctx->r8) {
        // 0x8022FC58: addiu       $t7, $v1, 0x3
        ctx->r15 = ADD32(ctx->r3, 0X3);
            goto L_8022FCA0;
    }
    // 0x8022FC58: addiu       $t7, $v1, 0x3
    ctx->r15 = ADD32(ctx->r3, 0X3);
    // 0x8022FC5C: b           L_8022FCC4
    // 0x8022FC60: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
        goto L_8022FCC4;
    // 0x8022FC60: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022FC64: and         $v1, $t7, $a0
    ctx->r3 = ctx->r15 & ctx->r4;
L_8022FC68:
    // 0x8022FC68: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8022FC6C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8022FC70: b           L_8022FC28
    // 0x8022FC74: sw          $t8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r24;
        goto L_8022FC28;
    // 0x8022FC74: sw          $t8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r24;
L_8022FC78:
    // 0x8022FC78: and         $v1, $t9, $a0
    ctx->r3 = ctx->r25 & ctx->r4;
    // 0x8022FC7C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8022FC80: lw          $t1, 0x1C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X1C);
    // 0x8022FC84: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8022FC88: sllv        $t4, $t3, $t2
    ctx->r12 = S32(ctx->r11 << (ctx->r10 & 31));
    // 0x8022FC8C: nor         $t5, $t4, $zero
    ctx->r13 = ~(ctx->r12 | 0);
    // 0x8022FC90: and         $t6, $t1, $t5
    ctx->r14 = ctx->r9 & ctx->r13;
    // 0x8022FC94: sw          $t6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r14;
    // 0x8022FC98: b           L_8022FC28
    // 0x8022FC9C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
        goto L_8022FC28;
    // 0x8022FC9C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_8022FCA0:
    // 0x8022FCA0: and         $v1, $t7, $a0
    ctx->r3 = ctx->r15 & ctx->r4;
    // 0x8022FCA4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8022FCA8: lw          $t8, 0x1C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X1C);
    // 0x8022FCAC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8022FCB0: sllv        $t2, $t3, $t9
    ctx->r10 = S32(ctx->r11 << (ctx->r25 & 31));
    // 0x8022FCB4: or          $t4, $t8, $t2
    ctx->r12 = ctx->r24 | ctx->r10;
    // 0x8022FCB8: sw          $t4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r12;
    // 0x8022FCBC: b           L_8022FC28
    // 0x8022FCC0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
        goto L_8022FC28;
    // 0x8022FCC0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_8022FCC4:
    // 0x8022FCC4: jal         0x80231A24
    // 0x8022FCC8: addiu       $a0, $a0, 0x4B28
    ctx->r4 = ADD32(ctx->r4, 0X4B28);
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x8022FCC8: addiu       $a0, $a0, 0x4B28
    ctx->r4 = ADD32(ctx->r4, 0X4B28);
    after_2:
    // 0x8022FCCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022FCD0:
    // 0x8022FCD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022FCD4: jr          $ra
    // 0x8022FCD8: nop

    return;
    // 0x8022FCD8: nop

;}
RECOMP_FUNC void func_8021B240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021B240: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8021B244: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8021B248: lhu         $t7, 0xBE6($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XBE6);
    // 0x8021B24C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8021B250: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8021B254: slt         $at, $a0, $t7
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8021B258: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8021B25C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8021B260: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8021B264: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021B268: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021B26C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021B270: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8021B274: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8021B278: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8021B27C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8021B280: bne         $at, $zero, L_8021B2A0
    if (ctx->r1 != 0) {
        // 0x8021B284: or          $t6, $a0, $zero
        ctx->r14 = ctx->r4 | 0;
            goto L_8021B2A0;
    }
    // 0x8021B284: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8021B288: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021B28C: addiu       $a0, $a0, 0x31A8
    ctx->r4 = ADD32(ctx->r4, 0X31A8);
    // 0x8021B290: jal         0x80231A24
    // 0x8021B294: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021B294: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x8021B298: b           L_8021B48C
    // 0x8021B29C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8021B48C;
    // 0x8021B29C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8021B2A0:
    // 0x8021B2A0: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8021B2A4: lui         $t0, 0x8026
    ctx->r8 = S32(0X8026 << 16);
    // 0x8021B2A8: lw          $t0, -0x3C20($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3C20);
    // 0x8021B2AC: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8021B2B0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8021B2B4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8021B2B8: addu        $s1, $t9, $t0
    ctx->r17 = ADD32(ctx->r25, ctx->r8);
    // 0x8021B2BC: lhu         $t1, 0x0($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X0);
    // 0x8021B2C0: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8021B2C4: addiu       $s0, $sp, 0x44
    ctx->r16 = ADD32(ctx->r29, 0X44);
    // 0x8021B2C8: bne         $t1, $at, L_8021B2E4
    if (ctx->r9 != ctx->r1) {
        // 0x8021B2CC: addiu       $s6, $zero, -0x8
        ctx->r22 = ADD32(0, -0X8);
            goto L_8021B2E4;
    }
    // 0x8021B2CC: addiu       $s6, $zero, -0x8
    ctx->r22 = ADD32(0, -0X8);
    // 0x8021B2D0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021B2D4: jal         0x80231A24
    // 0x8021B2D8: addiu       $a0, $a0, 0x31D8
    ctx->r4 = ADD32(ctx->r4, 0X31D8);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8021B2D8: addiu       $a0, $a0, 0x31D8
    ctx->r4 = ADD32(ctx->r4, 0X31D8);
    after_1:
    // 0x8021B2DC: b           L_8021B48C
    // 0x8021B2E0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8021B48C;
    // 0x8021B2E0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8021B2E4:
    // 0x8021B2E4: lui         $s5, 0x8025
    ctx->r21 = S32(0X8025 << 16);
    // 0x8021B2E8: lui         $s4, 0x8025
    ctx->r20 = S32(0X8025 << 16);
    // 0x8021B2EC: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x8021B2F0: addiu       $s3, $s3, 0x3238
    ctx->r19 = ADD32(ctx->r19, 0X3238);
    // 0x8021B2F4: addiu       $s4, $s4, 0x3204
    ctx->r20 = ADD32(ctx->r20, 0X3204);
    // 0x8021B2F8: addiu       $s5, $s5, -0x18F0
    ctx->r21 = ADD32(ctx->r21, -0X18F0);
    // 0x8021B2FC: addiu       $s2, $zero, -0x4
    ctx->r18 = ADD32(0, -0X4);
L_8021B300:
    // 0x8021B300: addiu       $t2, $s0, 0x3
    ctx->r10 = ADD32(ctx->r16, 0X3);
L_8021B304:
    // 0x8021B304: and         $s0, $t2, $s2
    ctx->r16 = ctx->r10 & ctx->r18;
    // 0x8021B308: lh          $a1, 0x2($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2);
    // 0x8021B30C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021B310: sltiu       $at, $a1, 0x6
    ctx->r1 = ctx->r5 < 0X6 ? 1 : 0;
    // 0x8021B314: beq         $at, $zero, L_8021B47C
    if (ctx->r1 == 0) {
        // 0x8021B318: sll         $t3, $a1, 2
        ctx->r11 = S32(ctx->r5 << 2);
            goto L_8021B47C;
    }
    // 0x8021B318: sll         $t3, $a1, 2
    ctx->r11 = S32(ctx->r5 << 2);
    // 0x8021B31C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021B320: addu        $at, $at, $t3
    gpr jr_addend_8021B328 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8021B324: lw          $t3, 0x3460($at)
    ctx->r11 = ADD32(ctx->r1, 0X3460);
    // 0x8021B328: jr          $t3
    // 0x8021B32C: nop

    switch (jr_addend_8021B328 >> 2) {
        case 0: goto L_8021B488; break;
        case 1: goto L_8021B330; break;
        case 2: goto L_8021B3A0; break;
        case 3: goto L_8021B3E8; break;
        case 4: goto L_8021B42C; break;
        case 5: goto L_8021B454; break;
        default: switch_error(__func__, 0x8021B328, 0x80253460);
    }
    // 0x8021B32C: nop

L_8021B330:
    // 0x8021B330: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x8021B334: andi        $t5, $s0, 0x1
    ctx->r13 = ctx->r16 & 0X1;
    // 0x8021B338: andi        $t7, $s0, 0x2
    ctx->r15 = ctx->r16 & 0X2;
    // 0x8021B33C: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x8021B340: beq         $t5, $zero, L_8021B354
    if (ctx->r13 == 0) {
        // 0x8021B344: or          $a0, $t4, $zero
        ctx->r4 = ctx->r12 | 0;
            goto L_8021B354;
    }
    // 0x8021B344: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x8021B348: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8021B34C: b           L_8021B378
    // 0x8021B350: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8021B378;
    // 0x8021B350: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8021B354:
    // 0x8021B354: beq         $t7, $zero, L_8021B368
    if (ctx->r15 == 0) {
        // 0x8021B358: addiu       $t6, $s0, 0x7
        ctx->r14 = ADD32(ctx->r16, 0X7);
            goto L_8021B368;
    }
    // 0x8021B358: addiu       $t6, $s0, 0x7
    ctx->r14 = ADD32(ctx->r16, 0X7);
    // 0x8021B35C: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8021B360: b           L_8021B374
    // 0x8021B364: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8021B374;
    // 0x8021B364: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8021B368:
    // 0x8021B368: and         $s0, $t6, $s6
    ctx->r16 = ctx->r14 & ctx->r22;
    // 0x8021B36C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8021B370: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8021B374:
    // 0x8021B374: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8021B378:
    // 0x8021B378: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x8021B37C: ldc1        $f4, -0x8($v0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r2, -0X8);
    // 0x8021B380: lw          $t9, 0x1C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X1C);
    // 0x8021B384: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x8021B388: addu        $t0, $t9, $a0
    ctx->r8 = ADD32(ctx->r25, ctx->r4);
    // 0x8021B38C: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x8021B390: lwc1        $f6, 0x1C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x8021B394: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8021B398: b           L_8021B300
    // 0x8021B39C: swc1        $f8, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f8.u32l;
        goto L_8021B300;
    // 0x8021B39C: swc1        $f8, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f8.u32l;
L_8021B3A0:
    // 0x8021B3A0: addiu       $t2, $s0, 0x3
    ctx->r10 = ADD32(ctx->r16, 0X3);
    // 0x8021B3A4: and         $s0, $t2, $s2
    ctx->r16 = ctx->r10 & ctx->r18;
    // 0x8021B3A8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8021B3AC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021B3B0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8021B3B4: slti        $at, $v0, 0x20
    ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x8021B3B8: bnel        $at, $zero, L_8021B3D4
    if (ctx->r1 != 0) {
        // 0x8021B3BC: lw          $t3, 0x10($s1)
        ctx->r11 = MEM_W(ctx->r17, 0X10);
            goto L_8021B3D4;
    }
    goto skip_0;
    // 0x8021B3BC: lw          $t3, 0x10($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X10);
    skip_0:
    // 0x8021B3C0: jal         0x80231A24
    // 0x8021B3C4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x8021B3C4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_2:
    // 0x8021B3C8: b           L_8021B304
    // 0x8021B3CC: addiu       $t2, $s0, 0x3
    ctx->r10 = ADD32(ctx->r16, 0X3);
        goto L_8021B304;
    // 0x8021B3CC: addiu       $t2, $s0, 0x3
    ctx->r10 = ADD32(ctx->r16, 0X3);
    // 0x8021B3D0: lw          $t3, 0x10($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X10);
L_8021B3D4:
    // 0x8021B3D4: sllv        $t5, $t4, $v0
    ctx->r13 = S32(ctx->r12 << (ctx->r2 & 31));
    // 0x8021B3D8: nor         $t7, $t5, $zero
    ctx->r15 = ~(ctx->r13 | 0);
    // 0x8021B3DC: and         $t6, $t3, $t7
    ctx->r14 = ctx->r11 & ctx->r15;
    // 0x8021B3E0: b           L_8021B300
    // 0x8021B3E4: sw          $t6, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r14;
        goto L_8021B300;
    // 0x8021B3E4: sw          $t6, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r14;
L_8021B3E8:
    // 0x8021B3E8: addiu       $t8, $s0, 0x3
    ctx->r24 = ADD32(ctx->r16, 0X3);
    // 0x8021B3EC: and         $s0, $t8, $s2
    ctx->r16 = ctx->r24 & ctx->r18;
    // 0x8021B3F0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8021B3F4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021B3F8: slti        $at, $v0, 0x20
    ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x8021B3FC: bnel        $at, $zero, L_8021B418
    if (ctx->r1 != 0) {
        // 0x8021B400: lw          $t9, 0x10($s1)
        ctx->r25 = MEM_W(ctx->r17, 0X10);
            goto L_8021B418;
    }
    goto skip_1;
    // 0x8021B400: lw          $t9, 0x10($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X10);
    skip_1:
    // 0x8021B404: jal         0x80231A24
    // 0x8021B408: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x8021B408: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x8021B40C: b           L_8021B304
    // 0x8021B410: addiu       $t2, $s0, 0x3
    ctx->r10 = ADD32(ctx->r16, 0X3);
        goto L_8021B304;
    // 0x8021B410: addiu       $t2, $s0, 0x3
    ctx->r10 = ADD32(ctx->r16, 0X3);
    // 0x8021B414: lw          $t9, 0x10($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X10);
L_8021B418:
    // 0x8021B418: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8021B41C: sllv        $t1, $t0, $v0
    ctx->r9 = S32(ctx->r8 << (ctx->r2 & 31));
    // 0x8021B420: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x8021B424: b           L_8021B300
    // 0x8021B428: sw          $t2, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r10;
        goto L_8021B300;
    // 0x8021B428: sw          $t2, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r10;
L_8021B42C:
    // 0x8021B42C: addiu       $t4, $s0, 0x3
    ctx->r12 = ADD32(ctx->r16, 0X3);
    // 0x8021B430: and         $s0, $t4, $s2
    ctx->r16 = ctx->r12 & ctx->r18;
    // 0x8021B434: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x8021B438: addiu       $t3, $s0, 0x7
    ctx->r11 = ADD32(ctx->r16, 0X7);
    // 0x8021B43C: and         $s0, $t3, $s2
    ctx->r16 = ctx->r11 & ctx->r18;
    // 0x8021B440: sw          $t5, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r13;
    // 0x8021B444: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8021B448: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021B44C: b           L_8021B300
    // 0x8021B450: sw          $t7, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r15;
        goto L_8021B300;
    // 0x8021B450: sw          $t7, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r15;
L_8021B454:
    // 0x8021B454: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
    // 0x8021B458: and         $s0, $t6, $s2
    ctx->r16 = ctx->r14 & ctx->r18;
    // 0x8021B45C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8021B460: addiu       $t0, $s0, 0x7
    ctx->r8 = ADD32(ctx->r16, 0X7);
    // 0x8021B464: and         $s0, $t0, $s2
    ctx->r16 = ctx->r8 & ctx->r18;
    // 0x8021B468: sw          $t8, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r24;
    // 0x8021B46C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8021B470: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021B474: b           L_8021B300
    // 0x8021B478: sw          $t9, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r25;
        goto L_8021B300;
    // 0x8021B478: sw          $t9, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r25;
L_8021B47C:
    // 0x8021B47C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021B480: jal         0x80231A24
    // 0x8021B484: addiu       $a0, $a0, 0x326C
    ctx->r4 = ADD32(ctx->r4, 0X326C);
    func_80231A24(rdram, ctx);
        goto after_4;
    // 0x8021B484: addiu       $a0, $a0, 0x326C
    ctx->r4 = ADD32(ctx->r4, 0X326C);
    after_4:
L_8021B488:
    // 0x8021B488: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8021B48C:
    // 0x8021B48C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021B490: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021B494: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021B498: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8021B49C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8021B4A0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8021B4A4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8021B4A8: jr          $ra
    // 0x8021B4AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8021B4AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802207E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802207E8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802207EC: addiu       $t6, $sp, 0x50
    ctx->r14 = ADD32(ctx->r29, 0X50);
    // 0x802207F0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802207F4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x802207F8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x802207FC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80220800: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80220804: addiu       $t8, $t6, 0x3C
    ctx->r24 = ADD32(ctx->r14, 0X3C);
    // 0x80220808: or          $t9, $sp, $zero
    ctx->r25 = ctx->r29 | 0;
L_8022080C:
    // 0x8022080C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80220810: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80220814: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80220818: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x8022081C: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x80220820: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x80220824: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x80220828: bne         $t6, $t8, L_8022080C
    if (ctx->r14 != ctx->r24) {
        // 0x8022082C: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_8022080C;
    }
    // 0x8022082C: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x80220830: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80220834: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x80220838: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x8022083C: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80220840: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80220844: jal         0x80222D4C
    // 0x80220848: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    func_80222D4C(rdram, ctx);
        goto after_0;
    // 0x80220848: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    after_0:
    // 0x8022084C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80220850: addiu       $a0, $a0, 0x3B90
    ctx->r4 = ADD32(ctx->r4, 0X3B90);
    // 0x80220854: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80220858: lui         $t1, 0x102
    ctx->r9 = S32(0X102 << 16);
    // 0x8022085C: ori         $t1, $t1, 0x40
    ctx->r9 = ctx->r9 | 0X40;
    // 0x80220860: addiu       $t0, $v0, 0x8
    ctx->r8 = ADD32(ctx->r2, 0X8);
    // 0x80220864: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x80220868: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x8022086C: jal         0x80222E24
    // 0x80220870: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_80222E24(rdram, ctx);
        goto after_1;
    // 0x80220870: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80220874: jal         0x802375F0
    // 0x80220878: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_802375F0(rdram, ctx);
        goto after_2;
    // 0x80220878: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x8022087C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80220880: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x80220884: lui         $t5, 0x8027
    ctx->r13 = S32(0X8027 << 16);
    // 0x80220888: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x8022088C: lhu         $t3, -0x178C($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X178C);
    // 0x80220890: addiu       $t5, $t5, 0x3BB0
    ctx->r13 = ADD32(ctx->r13, 0X3BB0);
    // 0x80220894: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80220898: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8022089C: addu        $v1, $t4, $t5
    ctx->r3 = ADD32(ctx->r12, ctx->r13);
    // 0x802208A0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x802208A4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x802208A8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x802208AC: jr          $ra
    // 0x802208B0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    return;
    // 0x802208B0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
;}
RECOMP_FUNC void func_80249238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249238: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x8024923C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80249240: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x80249244: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x80249248: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x8024924C: beq         $t7, $zero, L_8024927C
    if (ctx->r15 == 0) {
        // 0x80249250: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8024927C;
    }
    // 0x80249250: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80249254: andi        $a1, $v0, 0x7F
    ctx->r5 = ctx->r2 & 0X7F;
L_80249258:
    // 0x80249258: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x8024925C: sll         $t9, $a1, 7
    ctx->r25 = S32(ctx->r5 << 7);
    // 0x80249260: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80249264: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80249268: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
    // 0x8024926C: andi        $t6, $v0, 0x7F
    ctx->r14 = ctx->r2 & 0X7F;
    // 0x80249270: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x80249274: bne         $t7, $zero, L_80249258
    if (ctx->r15 != 0) {
        // 0x80249278: addu        $a1, $t9, $t6
        ctx->r5 = ADD32(ctx->r25, ctx->r14);
            goto L_80249258;
    }
    // 0x80249278: addu        $a1, $t9, $t6
    ctx->r5 = ADD32(ctx->r25, ctx->r14);
L_8024927C:
    // 0x8024927C: jr          $ra
    // 0x80249280: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x80249280: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void func_8021FCD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021FCD0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021FCD4: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8021FCD8: lh          $v0, 0x1B66($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X1B66);
    // 0x8021FCDC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8021FCE0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8021FCE4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8021FCE8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8021FCEC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8021FCF0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8021FCF4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021FCF8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021FCFC: bne         $v0, $at, L_8021FD30
    if (ctx->r2 != ctx->r1) {
        // 0x8021FD00: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8021FD30;
    }
    // 0x8021FD00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021FD04: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8021FD08: lh          $v0, 0x1B62($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X1B62);
    // 0x8021FD0C: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8021FD10: lh          $t6, 0x1B5E($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X1B5E);
    // 0x8021FD14: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x8021FD18: sra         $t9, $t5, 16
    ctx->r25 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8021FD1C: subu        $t4, $t6, $v0
    ctx->r12 = SUB32(ctx->r14, ctx->r2);
    // 0x8021FD20: sll         $t7, $t4, 16
    ctx->r15 = S32(ctx->r12 << 16);
    // 0x8021FD24: sra         $t4, $t7, 16
    ctx->r12 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8021FD28: b           L_8021FD50
    // 0x8021FD2C: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
        goto L_8021FD50;
    // 0x8021FD2C: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
L_8021FD30:
    // 0x8021FD30: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8021FD34: lh          $t6, 0x1B68($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X1B68);
    // 0x8021FD38: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x8021FD3C: sra         $t9, $t5, 16
    ctx->r25 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8021FD40: subu        $t4, $t6, $v0
    ctx->r12 = SUB32(ctx->r14, ctx->r2);
    // 0x8021FD44: sll         $t7, $t4, 16
    ctx->r15 = S32(ctx->r12 << 16);
    // 0x8021FD48: sra         $t4, $t7, 16
    ctx->r12 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8021FD4C: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
L_8021FD50:
    // 0x8021FD50: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x8021FD54: beq         $at, $zero, L_8021FD70
    if (ctx->r1 == 0) {
        // 0x8021FD58: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_8021FD70;
    }
    // 0x8021FD58: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8021FD5C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021FD60: jal         0x80231A24
    // 0x8021FD64: addiu       $a0, $a0, 0x3794
    ctx->r4 = ADD32(ctx->r4, 0X3794);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021FD64: addiu       $a0, $a0, 0x3794
    ctx->r4 = ADD32(ctx->r4, 0X3794);
    after_0:
    // 0x8021FD68: b           L_8021FF78
    // 0x8021FD6C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8021FF78;
    // 0x8021FD6C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8021FD70:
    // 0x8021FD70: blez        $t4, L_8021FF74
    if (SIGNED(ctx->r12) <= 0) {
        // 0x8021FD74: lui         $s6, 0x8000
        ctx->r22 = S32(0X8000 << 16);
            goto L_8021FF74;
    }
    // 0x8021FD74: lui         $s6, 0x8000
    ctx->r22 = S32(0X8000 << 16);
    // 0x8021FD78: lui         $s5, 0x40F
    ctx->r21 = S32(0X40F << 16);
    // 0x8021FD7C: lui         $s4, 0x4D1
    ctx->r20 = S32(0X4D1 << 16);
    // 0x8021FD80: lui         $ra, 0x8027
    ctx->r31 = S32(0X8027 << 16);
    // 0x8021FD84: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x8021FD88: addiu       $a3, $a3, 0x3B90
    ctx->r7 = ADD32(ctx->r7, 0X3B90);
    // 0x8021FD8C: addiu       $ra, $ra, 0x1B58
    ctx->r31 = ADD32(ctx->r31, 0X1B58);
    // 0x8021FD90: ori         $s4, $s4, 0xE0
    ctx->r20 = ctx->r20 | 0XE0;
    // 0x8021FD94: ori         $s5, $s5, 0x10
    ctx->r21 = ctx->r21 | 0X10;
    // 0x8021FD98: ori         $s6, $s6, 0xE0
    ctx->r22 = ctx->r22 | 0XE0;
    // 0x8021FD9C: ori         $s3, $zero, 0x960A
    ctx->r19 = 0 | 0X960A;
    // 0x8021FDA0: lui         $s2, 0x400
    ctx->r18 = S32(0X400 << 16);
    // 0x8021FDA4: lui         $s0, 0x8000
    ctx->r16 = S32(0X8000 << 16);
    // 0x8021FDA8: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x8021FDAC: lui         $t2, 0xBF00
    ctx->r10 = S32(0XBF00 << 16);
L_8021FDB0:
    // 0x8021FDB0: beq         $s1, $zero, L_8021FE2C
    if (ctx->r17 == 0) {
        // 0x8021FDB4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_8021FE2C;
    }
    // 0x8021FDB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021FDB8: slti        $at, $t4, 0x10
    ctx->r1 = SIGNED(ctx->r12) < 0X10 ? 1 : 0;
    // 0x8021FDBC: beq         $at, $zero, L_8021FDD4
    if (ctx->r1 == 0) {
        // 0x8021FDC0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8021FDD4;
    }
    // 0x8021FDC0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8021FDC4: sll         $v0, $t4, 16
    ctx->r2 = S32(ctx->r12 << 16);
    // 0x8021FDC8: sra         $t6, $v0, 16
    ctx->r14 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8021FDCC: b           L_8021FDD8
    // 0x8021FDD0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
        goto L_8021FDD8;
    // 0x8021FDD0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_8021FDD4:
    // 0x8021FDD4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8021FDD8:
    // 0x8021FDD8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8021FDDC: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x8021FDE0: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8021FDE4: addiu       $t7, $a0, 0x8
    ctx->r15 = ADD32(ctx->r4, 0X8);
    // 0x8021FDE8: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x8021FDEC: andi        $t6, $t9, 0xFF
    ctx->r14 = ctx->r25 & 0XFF;
    // 0x8021FDF0: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x8021FDF4: sll         $t9, $v0, 4
    ctx->r25 = S32(ctx->r2 << 4);
    // 0x8021FDF8: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x8021FDFC: or          $t8, $t7, $s2
    ctx->r24 = ctx->r15 | ctx->r18;
    // 0x8021FE00: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8021FE04: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8021FE08: lw          $t8, 0x0($ra)
    ctx->r24 = MEM_W(ctx->r31, 0X0);
    // 0x8021FE0C: sll         $t9, $t5, 4
    ctx->r25 = S32(ctx->r13 << 4);
    // 0x8021FE10: addiu       $a2, $v0, -0x2
    ctx->r6 = ADD32(ctx->r2, -0X2);
    // 0x8021FE14: addu        $t6, $t9, $t8
    ctx->r14 = ADD32(ctx->r25, ctx->r24);
    // 0x8021FE18: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8021FE1C: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x8021FE20: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8021FE24: b           L_8021FF08
    // 0x8021FE28: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
        goto L_8021FF08;
    // 0x8021FE28: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
L_8021FE2C:
    // 0x8021FE2C: slti        $at, $t4, 0xF
    ctx->r1 = SIGNED(ctx->r12) < 0XF ? 1 : 0;
    // 0x8021FE30: bne         $at, $zero, L_8021FE98
    if (ctx->r1 != 0) {
        // 0x8021FE34: sll         $v0, $t4, 16
        ctx->r2 = S32(ctx->r12 << 16);
            goto L_8021FE98;
    }
    // 0x8021FE34: sll         $v0, $t4, 16
    ctx->r2 = S32(ctx->r12 << 16);
    // 0x8021FE38: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8021FE3C: sll         $v1, $t5, 4
    ctx->r3 = S32(ctx->r13 << 4);
    // 0x8021FE40: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8021FE44: addiu       $t6, $a0, 0x8
    ctx->r14 = ADD32(ctx->r4, 0X8);
    // 0x8021FE48: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8021FE4C: sw          $s4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r20;
    // 0x8021FE50: lw          $t7, 0x0($ra)
    ctx->r15 = MEM_W(ctx->r31, 0X0);
    // 0x8021FE54: addu        $t9, $v1, $t7
    ctx->r25 = ADD32(ctx->r3, ctx->r15);
    // 0x8021FE58: addu        $t8, $t9, $s0
    ctx->r24 = ADD32(ctx->r25, ctx->r16);
    // 0x8021FE5C: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x8021FE60: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8021FE64: addiu       $t6, $a0, 0x8
    ctx->r14 = ADD32(ctx->r4, 0X8);
    // 0x8021FE68: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8021FE6C: sw          $s3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r19;
    // 0x8021FE70: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8021FE74: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8021FE78: addiu       $t7, $a0, 0x8
    ctx->r15 = ADD32(ctx->r4, 0X8);
    // 0x8021FE7C: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x8021FE80: sw          $s5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r21;
    // 0x8021FE84: lw          $t9, 0x0($ra)
    ctx->r25 = MEM_W(ctx->r31, 0X0);
    // 0x8021FE88: addu        $t8, $v1, $t9
    ctx->r24 = ADD32(ctx->r3, ctx->r25);
    // 0x8021FE8C: addu        $t6, $t8, $s6
    ctx->r14 = ADD32(ctx->r24, ctx->r22);
    // 0x8021FE90: b           L_8021FEFC
    // 0x8021FE94: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
        goto L_8021FEFC;
    // 0x8021FE94: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
L_8021FE98:
    // 0x8021FE98: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8021FE9C: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8021FEA0: addiu       $t8, $t4, -0x1
    ctx->r24 = ADD32(ctx->r12, -0X1);
    // 0x8021FEA4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8021FEA8: sll         $t6, $t8, 4
    ctx->r14 = S32(ctx->r24 << 4);
    // 0x8021FEAC: addiu       $t9, $a0, 0x8
    ctx->r25 = ADD32(ctx->r4, 0X8);
    // 0x8021FEB0: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x8021FEB4: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x8021FEB8: andi        $t9, $t7, 0xFF
    ctx->r25 = ctx->r15 & 0XFF;
    // 0x8021FEBC: sll         $t8, $t9, 16
    ctx->r24 = S32(ctx->r25 << 16);
    // 0x8021FEC0: sll         $t7, $t4, 4
    ctx->r15 = S32(ctx->r12 << 4);
    // 0x8021FEC4: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x8021FEC8: or          $t6, $t8, $s2
    ctx->r14 = ctx->r24 | ctx->r18;
    // 0x8021FECC: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8021FED0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8021FED4: lw          $t6, 0x0($ra)
    ctx->r14 = MEM_W(ctx->r31, 0X0);
    // 0x8021FED8: sll         $t7, $t5, 4
    ctx->r15 = S32(ctx->r13 << 4);
    // 0x8021FEDC: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x8021FEE0: addu        $t8, $t9, $s0
    ctx->r24 = ADD32(ctx->r25, ctx->r16);
    // 0x8021FEE4: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x8021FEE8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8021FEEC: addiu       $t7, $a0, 0x8
    ctx->r15 = ADD32(ctx->r4, 0X8);
    // 0x8021FEF0: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x8021FEF4: sw          $s3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r19;
    // 0x8021FEF8: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
L_8021FEFC:
    // 0x8021FEFC: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    // 0x8021FF00: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x8021FF04: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
L_8021FF08:
    // 0x8021FF08: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x8021FF0C: subu        $t4, $t4, $v0
    ctx->r12 = SUB32(ctx->r12, ctx->r2);
    // 0x8021FF10: sll         $t8, $t5, 16
    ctx->r24 = S32(ctx->r13 << 16);
    // 0x8021FF14: sll         $t6, $t4, 16
    ctx->r14 = S32(ctx->r12 << 16);
    // 0x8021FF18: sra         $t5, $t8, 16
    ctx->r13 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8021FF1C: blez        $a2, L_8021FF6C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8021FF20: sra         $t4, $t6, 16
        ctx->r12 = S32(SIGNED(ctx->r14) >> 16);
            goto L_8021FF6C;
    }
    // 0x8021FF20: sra         $t4, $t6, 16
    ctx->r12 = S32(SIGNED(ctx->r14) >> 16);
L_8021FF24:
    // 0x8021FF24: multu       $a1, $t3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021FF28: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8021FF2C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8021FF30: addiu       $t8, $a0, 0x8
    ctx->r24 = ADD32(ctx->r4, 0X8);
    // 0x8021FF34: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x8021FF38: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8021FF3C: mflo        $v1
    ctx->r3 = lo;
    // 0x8021FF40: addiu       $t7, $v1, 0xA
    ctx->r15 = ADD32(ctx->r3, 0XA);
    // 0x8021FF44: andi        $t6, $t7, 0xFF
    ctx->r14 = ctx->r15 & 0XFF;
    // 0x8021FF48: addiu       $t8, $v1, 0x14
    ctx->r24 = ADD32(ctx->r3, 0X14);
    // 0x8021FF4C: andi        $t7, $t8, 0xFF
    ctx->r15 = ctx->r24 & 0XFF;
    // 0x8021FF50: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8021FF54: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8021FF58: sll         $t9, $t6, 8
    ctx->r25 = S32(ctx->r14 << 8);
    // 0x8021FF5C: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8021FF60: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x8021FF64: bne         $at, $zero, L_8021FF24
    if (ctx->r1 != 0) {
        // 0x8021FF68: sw          $t6, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->r14;
            goto L_8021FF24;
    }
    // 0x8021FF68: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
L_8021FF6C:
    // 0x8021FF6C: bgtz        $t4, L_8021FDB0
    if (SIGNED(ctx->r12) > 0) {
        // 0x8021FF70: nop
    
            goto L_8021FDB0;
    }
    // 0x8021FF70: nop

L_8021FF74:
    // 0x8021FF74: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8021FF78:
    // 0x8021FF78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021FF7C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021FF80: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021FF84: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8021FF88: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8021FF8C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8021FF90: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8021FF94: jr          $ra
    // 0x8021FF98: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8021FF98: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8021BB84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021BB84: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021BB88: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8021BB8C: lui         $s2, 0x8028
    ctx->r18 = S32(0X8028 << 16);
    // 0x8021BB90: addiu       $s2, $s2, 0xBC0
    ctx->r18 = ADD32(ctx->r18, 0XBC0);
    // 0x8021BB94: lhu         $t6, 0x26($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X26);
    // 0x8021BB98: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8021BB9C: addiu       $s0, $zero, 0x24
    ctx->r16 = ADD32(0, 0X24);
    // 0x8021BBA0: multu       $t6, $s0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021BBA4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8021BBA8: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8021BBAC: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8021BBB0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8021BBB4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8021BBB8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8021BBBC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8021BBC0: mflo        $a0
    ctx->r4 = lo;
    // 0x8021BBC4: jal         0x8022BA58
    // 0x8021BBC8: nop

    func_8022BA58(rdram, ctx);
        goto after_0;
    // 0x8021BBC8: nop

    after_0:
    // 0x8021BBCC: lhu         $a0, 0x2A($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X2A);
    // 0x8021BBD0: lui         $s4, 0x8026
    ctx->r20 = S32(0X8026 << 16);
    // 0x8021BBD4: addiu       $s4, $s4, -0x3C20
    ctx->r20 = ADD32(ctx->r20, -0X3C20);
    // 0x8021BBD8: sll         $t7, $a0, 6
    ctx->r15 = S32(ctx->r4 << 6);
    // 0x8021BBDC: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x8021BBE0: jal         0x8022BA58
    // 0x8021BBE4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8022BA58(rdram, ctx);
        goto after_1;
    // 0x8021BBE4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x8021BBE8: lui         $s7, 0x8026
    ctx->r23 = S32(0X8026 << 16);
    // 0x8021BBEC: addiu       $s7, $s7, -0x3C1C
    ctx->r23 = ADD32(ctx->r23, -0X3C1C);
    // 0x8021BBF0: sw          $v0, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r2;
    // 0x8021BBF4: jal         0x8022BA58
    // 0x8021BBF8: lhu         $a0, 0x2A($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X2A);
    func_8022BA58(rdram, ctx);
        goto after_2;
    // 0x8021BBF8: lhu         $a0, 0x2A($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X2A);
    after_2:
    // 0x8021BBFC: lhu         $a0, 0x26($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X26);
    // 0x8021BC00: lui         $s6, 0x8026
    ctx->r22 = S32(0X8026 << 16);
    // 0x8021BC04: addiu       $s6, $s6, -0x3C14
    ctx->r22 = ADD32(ctx->r22, -0X3C14);
    // 0x8021BC08: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8021BC0C: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    // 0x8021BC10: jal         0x8022BA58
    // 0x8021BC14: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8022BA58(rdram, ctx);
        goto after_3;
    // 0x8021BC14: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_3:
    // 0x8021BC18: lhu         $a0, 0x26($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X26);
    // 0x8021BC1C: lui         $s1, 0x8026
    ctx->r17 = S32(0X8026 << 16);
    // 0x8021BC20: addiu       $s1, $s1, -0x3C0C
    ctx->r17 = ADD32(ctx->r17, -0X3C0C);
    // 0x8021BC24: sll         $t9, $a0, 1
    ctx->r25 = S32(ctx->r4 << 1);
    // 0x8021BC28: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8021BC2C: jal         0x8022BA58
    // 0x8021BC30: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_8022BA58(rdram, ctx);
        goto after_4;
    // 0x8021BC30: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_4:
    // 0x8021BC34: lhu         $a0, 0x2A($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X2A);
    // 0x8021BC38: lui         $s5, 0x8026
    ctx->r21 = S32(0X8026 << 16);
    // 0x8021BC3C: addiu       $s5, $s5, -0x3C10
    ctx->r21 = ADD32(ctx->r21, -0X3C10);
    // 0x8021BC40: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x8021BC44: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x8021BC48: jal         0x8022BA58
    // 0x8021BC4C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8022BA58(rdram, ctx);
        goto after_5;
    // 0x8021BC4C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_5:
    // 0x8021BC50: lhu         $t1, 0x26($s2)
    ctx->r9 = MEM_HU(ctx->r18, 0X26);
    // 0x8021BC54: lui         $s3, 0x8026
    ctx->r19 = S32(0X8026 << 16);
    // 0x8021BC58: addiu       $s3, $s3, -0x3C18
    ctx->r19 = ADD32(ctx->r19, -0X3C18);
    // 0x8021BC5C: multu       $t1, $s0
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021BC60: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x8021BC64: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x8021BC68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021BC6C: mflo        $a2
    ctx->r6 = lo;
    // 0x8021BC70: jal         0x8022B780
    // 0x8021BC74: nop

    func_8022B780(rdram, ctx);
        goto after_6;
    // 0x8021BC74: nop

    after_6:
    // 0x8021BC78: lhu         $a2, 0x2A($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X2A);
    // 0x8021BC7C: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    // 0x8021BC80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021BC84: sll         $t2, $a2, 6
    ctx->r10 = S32(ctx->r6 << 6);
    // 0x8021BC88: jal         0x8022B780
    // 0x8021BC8C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    func_8022B780(rdram, ctx);
        goto after_7;
    // 0x8021BC8C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_7:
    // 0x8021BC90: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x8021BC94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021BC98: jal         0x8022B780
    // 0x8021BC9C: lhu         $a2, 0x2A($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X2A);
    func_8022B780(rdram, ctx);
        goto after_8;
    // 0x8021BC9C: lhu         $a2, 0x2A($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X2A);
    after_8:
    // 0x8021BCA0: lhu         $a2, 0x26($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X26);
    // 0x8021BCA4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8021BCA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021BCAC: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x8021BCB0: jal         0x8022B780
    // 0x8021BCB4: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    func_8022B780(rdram, ctx);
        goto after_9;
    // 0x8021BCB4: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_9:
    // 0x8021BCB8: lhu         $a2, 0x26($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X26);
    // 0x8021BCBC: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x8021BCC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021BCC4: sll         $t4, $a2, 1
    ctx->r12 = S32(ctx->r6 << 1);
    // 0x8021BCC8: jal         0x8022B780
    // 0x8021BCCC: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    func_8022B780(rdram, ctx);
        goto after_10;
    // 0x8021BCCC: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_10:
    // 0x8021BCD0: lhu         $a2, 0x2A($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X2A);
    // 0x8021BCD4: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8021BCD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021BCDC: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x8021BCE0: jal         0x8022B780
    // 0x8021BCE4: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    func_8022B780(rdram, ctx);
        goto after_11;
    // 0x8021BCE4: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    after_11:
    // 0x8021BCE8: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x8021BCEC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8021BCF0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021BCF4: blez        $v0, L_8021BD60
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8021BCF8: ori         $s3, $zero, 0xFFFF
        ctx->r19 = 0 | 0XFFFF;
            goto L_8021BD60;
    }
    // 0x8021BCF8: ori         $s3, $zero, 0xFFFF
    ctx->r19 = 0 | 0XFFFF;
    // 0x8021BCFC: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
L_8021BD00:
    // 0x8021BD00: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8021BD04: sh          $s3, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r19;
    // 0x8021BD08: lhu         $a0, 0x28($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X28);
    // 0x8021BD0C: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x8021BD10: jal         0x8022BA58
    // 0x8021BD14: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8022BA58(rdram, ctx);
        goto after_12;
    // 0x8021BD14: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_12:
    // 0x8021BD18: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x8021BD1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021BD20: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x8021BD24: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x8021BD28: lhu         $a2, 0x28($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X28);
    // 0x8021BD2C: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x8021BD30: sll         $t3, $a2, 1
    ctx->r11 = S32(ctx->r6 << 1);
    // 0x8021BD34: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x8021BD38: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    // 0x8021BD3C: jal         0x8022B780
    // 0x8021BD40: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    func_8022B780(rdram, ctx);
        goto after_13;
    // 0x8021BD40: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_13:
    // 0x8021BD44: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x8021BD48: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8021BD4C: addiu       $s0, $s0, 0x24
    ctx->r16 = ADD32(ctx->r16, 0X24);
    // 0x8021BD50: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021BD54: bnel        $at, $zero, L_8021BD00
    if (ctx->r1 != 0) {
        // 0x8021BD58: lw          $t6, 0x0($s4)
        ctx->r14 = MEM_W(ctx->r20, 0X0);
            goto L_8021BD00;
    }
    goto skip_0;
    // 0x8021BD58: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    skip_0:
    // 0x8021BD5C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8021BD60:
    // 0x8021BD60: blez        $v0, L_8021BD94
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8021BD64: ori         $s3, $zero, 0xFFFF
        ctx->r19 = 0 | 0XFFFF;
            goto L_8021BD94;
    }
    // 0x8021BD64: ori         $s3, $zero, 0xFFFF
    ctx->r19 = 0 | 0XFFFF;
    // 0x8021BD68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021BD6C: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
L_8021BD70:
    // 0x8021BD70: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8021BD74: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x8021BD78: sh          $s3, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r19;
    // 0x8021BD7C: lhu         $t6, 0x26($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X26);
    // 0x8021BD80: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8021BD84: slt         $at, $s1, $t6
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8021BD88: bnel        $at, $zero, L_8021BD70
    if (ctx->r1 != 0) {
        // 0x8021BD8C: lw          $t4, 0x0($s5)
        ctx->r12 = MEM_W(ctx->r21, 0X0);
            goto L_8021BD70;
    }
    goto skip_1;
    // 0x8021BD8C: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    skip_1:
    // 0x8021BD90: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8021BD94:
    // 0x8021BD94: lhu         $v0, 0x2A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2A);
    // 0x8021BD98: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021BD9C: blez        $v0, L_8021BDC8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8021BDA0: nop
    
            goto L_8021BDC8;
    }
    // 0x8021BDA0: nop

    // 0x8021BDA4: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
L_8021BDA8:
    // 0x8021BDA8: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x8021BDAC: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x8021BDB0: lhu         $v0, 0x2A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2A);
    // 0x8021BDB4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8021BDB8: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021BDBC: bnel        $at, $zero, L_8021BDA8
    if (ctx->r1 != 0) {
        // 0x8021BDC0: lw          $t7, 0x0($s6)
        ctx->r15 = MEM_W(ctx->r22, 0X0);
            goto L_8021BDA8;
    }
    goto skip_2;
    // 0x8021BDC0: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    skip_2:
    // 0x8021BDC4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8021BDC8:
    // 0x8021BDC8: blezl       $v0, L_8021BDF8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8021BDCC: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8021BDF8;
    }
    goto skip_3;
    // 0x8021BDCC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_3:
    // 0x8021BDD0: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
L_8021BDD4:
    // 0x8021BDD4: jal         0x8022970C
    // 0x8021BDD8: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    func_8022970C(rdram, ctx);
        goto after_14;
    // 0x8021BDD8: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    after_14:
    // 0x8021BDDC: lhu         $t0, 0x2A($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X2A);
    // 0x8021BDE0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8021BDE4: addiu       $s0, $s0, 0x40
    ctx->r16 = ADD32(ctx->r16, 0X40);
    // 0x8021BDE8: slt         $at, $s1, $t0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8021BDEC: bnel        $at, $zero, L_8021BDD4
    if (ctx->r1 != 0) {
        // 0x8021BDF0: lw          $t9, 0x0($s7)
        ctx->r25 = MEM_W(ctx->r23, 0X0);
            goto L_8021BDD4;
    }
    goto skip_4;
    // 0x8021BDF0: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    skip_4:
    // 0x8021BDF4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8021BDF8:
    // 0x8021BDF8: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x8021BDFC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8021BE00: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8021BE04: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8021BE08: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8021BE0C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8021BE10: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8021BE14: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8021BE18: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8021BE1C: sh          $zero, -0x3C06($at)
    MEM_H(-0X3C06, ctx->r1) = 0;
    // 0x8021BE20: jr          $ra
    // 0x8021BE24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8021BE24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80215880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80215880: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80215884: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x80215888: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8021588C: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80215890: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80215894: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80215898: sub.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8021589C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x802158A0: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x802158A4: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x802158A8: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802158AC: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x802158B0: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x802158B4: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x802158B8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x802158BC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802158C0: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802158C4: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802158C8: swc1        $f10, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f10.u32l;
    // 0x802158CC: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802158D0: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802158D4: sub.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802158D8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802158DC: mul.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x802158E0: swc1        $f6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f6.u32l;
    // 0x802158E4: mul.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x802158E8: sub.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x802158EC: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802158F0: mul.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802158F4: nop

    // 0x802158F8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802158FC: nop

    // 0x80215900: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80215904: sub.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80215908: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8021590C: mul.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80215910: sub.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80215914: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80215918: nop

    // 0x8021591C: mul.s       $f6, $f2, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x80215920: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80215924: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80215928: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8021592C: lwc1        $f8, 0x0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80215930: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80215934: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80215938: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8021593C: nop

    // 0x80215940: bc1f        L_80215950
    if (!c1cs) {
        // 0x80215944: nop
    
            goto L_80215950;
    }
    // 0x80215944: nop

    // 0x80215948: b           L_80215AA0
    // 0x8021594C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80215AA0;
    // 0x8021594C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80215950:
    // 0x80215950: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80215954: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80215958: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8021595C: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80215960: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80215964: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80215968: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8021596C: sub.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80215970: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80215974: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80215978: sub.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8021597C: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80215980: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80215984: sub.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80215988: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8021598C: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80215990: mul.s       $f8, $f12, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x80215994: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80215998: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021599C: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802159A0: nop

    // 0x802159A4: mul.s       $f10, $f0, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x802159A8: nop

    // 0x802159AC: mul.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x802159B0: sub.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x802159B4: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802159B8: mul.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802159BC: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802159C0: mul.s       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802159C4: nop

    // 0x802159C8: mul.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x802159CC: sub.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802159D0: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802159D4: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802159D8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802159DC: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802159E0: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x802159E4: nop

    // 0x802159E8: bc1f        L_802159F8
    if (!c1cs) {
        // 0x802159EC: nop
    
            goto L_802159F8;
    }
    // 0x802159EC: nop

    // 0x802159F0: b           L_80215AA0
    // 0x802159F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80215AA0;
    // 0x802159F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802159F8:
    // 0x802159F8: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802159FC: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80215A00: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80215A04: sub.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80215A08: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80215A0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80215A10: sub.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80215A14: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80215A18: sub.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80215A1C: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80215A20: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80215A24: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80215A28: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80215A2C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80215A30: sub.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80215A34: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x80215A38: sub.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80215A3C: mul.s       $f6, $f12, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x80215A40: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80215A44: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80215A48: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80215A4C: nop

    // 0x80215A50: mul.s       $f10, $f0, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80215A54: nop

    // 0x80215A58: mul.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x80215A5C: sub.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80215A60: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80215A64: mul.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80215A68: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80215A6C: mul.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80215A70: nop

    // 0x80215A74: mul.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80215A78: sub.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80215A7C: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80215A80: mul.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80215A84: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80215A88: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80215A8C: nop

    // 0x80215A90: bc1f        L_80215AA0
    if (!c1cs) {
        // 0x80215A94: nop
    
            goto L_80215AA0;
    }
    // 0x80215A94: nop

    // 0x80215A98: b           L_80215AA0
    // 0x80215A9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80215AA0;
    // 0x80215A9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80215AA0:
    // 0x80215AA0: jr          $ra
    // 0x80215AA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80215AA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80238B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238B10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80238B14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238B18: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80238B1C: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x80238B20: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x80238B24: sh          $t7, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r15;
    // 0x80238B28: sh          $t6, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r14;
    // 0x80238B2C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80238B30: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x80238B34: jal         0x8023F37C
    // 0x80238B38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80238B38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80238B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238B40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80238B44: jr          $ra
    // 0x80238B48: nop

    return;
    // 0x80238B48: nop

;}
RECOMP_FUNC void func_802151B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802151B8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x802151BC: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x802151C0: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x802151C4: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x802151C8: lui         $s2, 0x8026
    ctx->r18 = S32(0X8026 << 16);
    // 0x802151CC: c.eq.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl == ctx->f20.fl;
    // 0x802151D0: sdc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X60, ctx->r29);
    // 0x802151D4: mtc1        $a2, $f30
    ctx->f30.u32l = ctx->r6;
    // 0x802151D8: addiu       $s2, $s2, -0x3C68
    ctx->r18 = ADD32(ctx->r18, -0X3C68);
    // 0x802151DC: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x802151E0: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x802151E4: mov.s       $f26, $f12
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    ctx->f26.fl = ctx->f12.fl;
    // 0x802151E8: mov.s       $f28, $f14
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 14);
    ctx->f28.fl = ctx->f14.fl;
    // 0x802151EC: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x802151F0: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x802151F4: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x802151F8: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x802151FC: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x80215200: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x80215204: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x80215208: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x8021520C: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x80215210: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x80215214: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x80215218: bc1f        L_802152FC
    if (!c1cs) {
        // 0x8021521C: sw          $zero, 0x0($s2)
        MEM_W(0X0, ctx->r18) = 0;
            goto L_802152FC;
    }
    // 0x8021521C: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x80215220: lwc1        $f22, 0xC0($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80215224: lwc1        $f24, 0xC4($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80215228: c.eq.s      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.fl == ctx->f22.fl;
    // 0x8021522C: nop

    // 0x80215230: bc1f        L_802152FC
    if (!c1cs) {
        // 0x80215234: nop
    
            goto L_802152FC;
    }
    // 0x80215234: nop

    // 0x80215238: c.eq.s      $f30, $f24
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f30.fl == ctx->f24.fl;
    // 0x8021523C: nop

    // 0x80215240: bc1f        L_802152FC
    if (!c1cs) {
        // 0x80215244: nop
    
            goto L_802152FC;
    }
    // 0x80215244: nop

    // 0x80215248: mfc1        $a2, $f30
    ctx->r6 = (int32_t)ctx->f30.u32l;
    // 0x8021524C: jal         0x80214CE0
    // 0x80215250: nop

    func_80214CE0(rdram, ctx);
        goto after_0;
    // 0x80215250: nop

    after_0:
    // 0x80215254: ori         $s6, $zero, 0xFFFF
    ctx->r22 = 0 | 0XFFFF;
    // 0x80215258: andi        $t6, $v0, 0xFFFF
    ctx->r14 = ctx->r2 & 0XFFFF;
    // 0x8021525C: bne         $s6, $t6, L_80215284
    if (ctx->r22 != ctx->r14) {
        // 0x80215260: andi        $v1, $v0, 0xFFFF
        ctx->r3 = ctx->r2 & 0XFFFF;
            goto L_80215284;
    }
    // 0x80215260: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80215264: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x80215268: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021526C: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x80215270: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x80215274: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x80215278: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    // 0x8021527C: b           L_80215530
    // 0x80215280: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
        goto L_80215530;
    // 0x80215280: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
L_80215284:
    // 0x80215284: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80215288: addiu       $a0, $a0, -0x3C64
    ctx->r4 = ADD32(ctx->r4, -0X3C64);
    // 0x8021528C: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x80215290: lui         $a1, 0x8026
    ctx->r5 = S32(0X8026 << 16);
    // 0x80215294: addiu       $a1, $a1, -0x3C60
    ctx->r5 = ADD32(ctx->r5, -0X3C60);
    // 0x80215298: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x8021529C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802152A0: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x802152A4: lui         $s5, 0x8026
    ctx->r21 = S32(0X8026 << 16);
    // 0x802152A8: addiu       $s5, $s5, -0x3C5C
    ctx->r21 = ADD32(ctx->r21, -0X3C5C);
    // 0x802152AC: swc1        $f0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
    // 0x802152B0: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    // 0x802152B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802152B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802152BC: swc1        $f0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f0.u32l;
    // 0x802152C0: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x802152C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802152C8: swc1        $f0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f0.u32l;
    // 0x802152CC: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x802152D0: swc1        $f4, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f4.u32l;
    // 0x802152D4: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x802152D8: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x802152DC: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x802152E0: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x802152E4: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x802152E8: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x802152EC: lw          $t0, 0xD0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD0);
    // 0x802152F0: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x802152F4: b           L_80215530
    // 0x802152F8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
        goto L_80215530;
    // 0x802152F8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
L_802152FC:
    // 0x802152FC: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80215300: lhu         $v1, 0xBE6($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XBE6);
    // 0x80215304: lwc1        $f22, 0xC0($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80215308: lwc1        $f24, 0xC4($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x8021530C: blez        $v1, L_802154F4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80215310: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_802154F4;
    }
    // 0x80215310: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80215314: lui         $fp, 0x8026
    ctx->r30 = S32(0X8026 << 16);
    // 0x80215318: lui         $s5, 0x8026
    ctx->r21 = S32(0X8026 << 16);
    // 0x8021531C: addiu       $s5, $s5, -0x3C5C
    ctx->r21 = ADD32(ctx->r21, -0X3C5C);
    // 0x80215320: addiu       $fp, $fp, -0x3C20
    ctx->r30 = ADD32(ctx->r30, -0X3C20);
    // 0x80215324: addiu       $s7, $zero, 0x24
    ctx->r23 = ADD32(0, 0X24);
    // 0x80215328: ori         $s6, $zero, 0xFFFF
    ctx->r22 = 0 | 0XFFFF;
L_8021532C:
    // 0x8021532C: multu       $s3, $s7
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80215330: lw          $t2, 0x0($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X0);
    // 0x80215334: mflo        $t1
    ctx->r9 = lo;
    // 0x80215338: addu        $s1, $t1, $t2
    ctx->r17 = ADD32(ctx->r9, ctx->r10);
    // 0x8021533C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80215340: beql        $s6, $v0, L_802154E4
    if (ctx->r22 == ctx->r2) {
        // 0x80215344: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_802154E4;
    }
    goto skip_0;
    // 0x80215344: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x80215348: lbu         $t3, 0x8($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X8);
    // 0x8021534C: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x80215350: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x80215354: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x80215358: beql        $t4, $zero, L_802154E4
    if (ctx->r12 == 0) {
        // 0x8021535C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_802154E4;
    }
    goto skip_1;
    // 0x8021535C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_1:
    // 0x80215360: lw          $t9, -0x18F0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X18F0);
    // 0x80215364: lw          $t5, 0x4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X4);
    // 0x80215368: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x8021536C: lw          $t0, 0x1C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X1C);
    // 0x80215370: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x80215374: lw          $t8, -0x3C1C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C1C);
    // 0x80215378: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8021537C: lw          $s4, 0x0($t2)
    ctx->r20 = MEM_W(ctx->r10, 0X0);
    // 0x80215380: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x80215384: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x80215388: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x8021538C: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x80215390: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x80215394: mfc1        $a2, $f30
    ctx->r6 = (int32_t)ctx->f30.u32l;
    // 0x80215398: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8021539C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x802153A0: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x802153A4: addiu       $t3, $sp, 0x98
    ctx->r11 = ADD32(ctx->r29, 0X98);
    // 0x802153A8: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    // 0x802153AC: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x802153B0: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802153B4: mov.s       $f14, $f28
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    ctx->f14.fl = ctx->f28.fl;
    // 0x802153B8: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x802153BC: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x802153C0: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x802153C4: jal         0x80219210
    // 0x802153C8: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    func_80219210(rdram, ctx);
        goto after_1;
    // 0x802153C8: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x802153CC: beq         $v0, $zero, L_802154D8
    if (ctx->r2 == 0) {
        // 0x802153D0: nop
    
            goto L_802154D8;
    }
    // 0x802153D0: nop

    // 0x802153D4: lbu         $t4, 0x11($s4)
    ctx->r12 = MEM_BU(ctx->r20, 0X11);
    // 0x802153D8: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x802153DC: lui         $t0, 0x8026
    ctx->r8 = S32(0X8026 << 16);
    // 0x802153E0: andi        $t5, $t4, 0x6
    ctx->r13 = ctx->r12 & 0X6;
    // 0x802153E4: bne         $t5, $zero, L_802154B4
    if (ctx->r13 != 0) {
        // 0x802153E8: lui         $at, 0x8026
        ctx->r1 = S32(0X8026 << 16);
            goto L_802154B4;
    }
    // 0x802153E8: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802153EC: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x802153F0: lw          $t6, -0x3C64($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3C64);
    // 0x802153F4: mfc1        $a2, $f30
    ctx->r6 = (int32_t)ctx->f30.u32l;
    // 0x802153F8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802153FC: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80215400: sw          $s3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r19;
    // 0x80215404: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x80215408: lw          $t0, -0x3C60($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3C60);
    // 0x8021540C: lwc1        $f18, 0x98($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80215410: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80215414: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80215418: swc1        $f18, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f18.u32l;
    // 0x8021541C: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80215420: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x80215424: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x80215428: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8021542C: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x80215430: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x80215434: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80215438: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8021543C: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x80215440: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80215444: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80215448: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x8021544C: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x80215450: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80215454: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80215458: addu        $t6, $t5, $t7
    ctx->r14 = ADD32(ctx->r13, ctx->r15);
    // 0x8021545C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80215460: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    // 0x80215464: mov.s       $f14, $f28
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    ctx->f14.fl = ctx->f28.fl;
    // 0x80215468: jal         0x8021A370
    // 0x8021546C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    func_8021A370(rdram, ctx);
        goto after_2;
    // 0x8021546C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x80215470: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x80215474: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x80215478: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8021547C: addiu       $a0, $t8, 0x1
    ctx->r4 = ADD32(ctx->r24, 0X1);
    // 0x80215480: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    // 0x80215484: lhu         $t1, 0xBD8($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XBD8);
    // 0x80215488: addiu       $a1, $a1, 0x3010
    ctx->r5 = ADD32(ctx->r5, 0X3010);
    // 0x8021548C: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80215490: slt         $at, $a0, $t1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80215494: bne         $at, $zero, L_802154D8
    if (ctx->r1 != 0) {
        // 0x80215498: nop
    
            goto L_802154D8;
    }
    // 0x80215498: nop

    // 0x8021549C: jal         0x80231C58
    // 0x802154A0: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    func_80231C58(rdram, ctx);
        goto after_3;
    // 0x802154A0: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    after_3:
    // 0x802154A4: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x802154A8: addiu       $t2, $t0, -0x1
    ctx->r10 = ADD32(ctx->r8, -0X1);
    // 0x802154AC: b           L_802154D8
    // 0x802154B0: sw          $t2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r10;
        goto L_802154D8;
    // 0x802154B0: sw          $t2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r10;
L_802154B4:
    // 0x802154B4: mfc1        $a2, $f30
    ctx->r6 = (int32_t)ctx->f30.u32l;
    // 0x802154B8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802154BC: sw          $s3, -0x3C6C($at)
    MEM_W(-0X3C6C, ctx->r1) = ctx->r19;
    // 0x802154C0: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    // 0x802154C4: mov.s       $f14, $f28
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    ctx->f14.fl = ctx->f28.fl;
    // 0x802154C8: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x802154CC: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802154D0: jal         0x802171F0
    // 0x802154D4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    func_802171F0(rdram, ctx);
        goto after_4;
    // 0x802154D4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    after_4:
L_802154D8:
    // 0x802154D8: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x802154DC: lhu         $v1, 0xBE6($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XBE6);
    // 0x802154E0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_802154E4:
    // 0x802154E4: andi        $t3, $s3, 0xFFFF
    ctx->r11 = ctx->r19 & 0XFFFF;
    // 0x802154E8: slt         $at, $t3, $v1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802154EC: bne         $at, $zero, L_8021532C
    if (ctx->r1 != 0) {
        // 0x802154F0: or          $s3, $t3, $zero
        ctx->r19 = ctx->r11 | 0;
            goto L_8021532C;
    }
    // 0x802154F0: or          $s3, $t3, $zero
    ctx->r19 = ctx->r11 | 0;
L_802154F4:
    // 0x802154F4: lui         $t4, 0x8026
    ctx->r12 = S32(0X8026 << 16);
    // 0x802154F8: lw          $t4, -0x3C64($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3C64);
    // 0x802154FC: lw          $t5, 0xC8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC8);
    // 0x80215500: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x80215504: lui         $s5, 0x8026
    ctx->r21 = S32(0X8026 << 16);
    // 0x80215508: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8021550C: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x80215510: lw          $t7, -0x3C60($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3C60);
    // 0x80215514: addiu       $s5, $s5, -0x3C5C
    ctx->r21 = ADD32(ctx->r21, -0X3C5C);
    // 0x80215518: sw          $t7, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r15;
    // 0x8021551C: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    // 0x80215520: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x80215524: jal         0x80209508
    // 0x80215528: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    func_80209508(rdram, ctx);
        goto after_5;
    // 0x80215528: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    after_5:
    // 0x8021552C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_80215530:
    // 0x80215530: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x80215534: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x80215538: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x8021553C: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x80215540: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x80215544: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x80215548: ldc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X60);
    // 0x8021554C: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x80215550: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x80215554: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x80215558: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x8021555C: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x80215560: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x80215564: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x80215568: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x8021556C: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x80215570: jr          $ra
    // 0x80215574: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x80215574: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_80236E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80236E34: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80236E38: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80236E3C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80236E40: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80236E44: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80236E48: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80236E4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80236E50: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x80236E54: addiu       $at, $zero, 0x4231
    ctx->r1 = ADD32(0, 0X4231);
    // 0x80236E58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80236E5C: bne         $t6, $at, L_80236F18
    if (ctx->r14 != ctx->r1) {
        // 0x80236E60: or          $s1, $a1, $zero
        ctx->r17 = ctx->r5 | 0;
            goto L_80236F18;
    }
    // 0x80236E60: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80236E64: lh          $t7, 0x2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2);
    // 0x80236E68: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80236E6C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80236E70: blez        $t7, L_80236F18
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80236E74: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_80236F18;
    }
    // 0x80236E74: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80236E78: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
L_80236E7C:
    // 0x80236E7C: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x80236E80: beq         $t9, $zero, L_80236F00
    if (ctx->r25 == 0) {
        // 0x80236E84: sw          $t9, 0x4($s2)
        MEM_W(0X4, ctx->r18) = ctx->r25;
            goto L_80236F00;
    }
    // 0x80236E84: sw          $t9, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r25;
    // 0x80236E88: lbu         $t6, 0x2($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X2);
    // 0x80236E8C: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
    // 0x80236E90: bnel        $t6, $zero, L_80236F04
    if (ctx->r14 != 0) {
        // 0x80236E94: lh          $t8, 0x2($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X2);
            goto L_80236F04;
    }
    goto skip_0;
    // 0x80236E94: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    skip_0:
    // 0x80236E98: lw          $v0, 0x8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X8);
    // 0x80236E9C: sb          $s4, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r20;
    // 0x80236EA0: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x80236EA4: beq         $v0, $zero, L_80236EBC
    if (ctx->r2 == 0) {
        // 0x80236EA8: addu        $a0, $v0, $s0
        ctx->r4 = ADD32(ctx->r2, ctx->r16);
            goto L_80236EBC;
    }
    // 0x80236EA8: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x80236EAC: sw          $a0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r4;
    // 0x80236EB0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80236EB4: jal         0x80236D40
    // 0x80236EB8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_80236D40(rdram, ctx);
        goto after_0;
    // 0x80236EB8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_0:
L_80236EBC:
    // 0x80236EBC: lh          $t8, 0x0($t5)
    ctx->r24 = MEM_H(ctx->r13, 0X0);
    // 0x80236EC0: or          $t3, $t5, $zero
    ctx->r11 = ctx->r13 | 0;
    // 0x80236EC4: blezl       $t8, L_80236F04
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80236EC8: lh          $t8, 0x2($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X2);
            goto L_80236F04;
    }
    goto skip_1;
    // 0x80236EC8: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    skip_1:
    // 0x80236ECC: lw          $t9, 0xC($t3)
    ctx->r25 = MEM_W(ctx->r11, 0XC);
L_80236ED0:
    // 0x80236ED0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80236ED4: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    // 0x80236ED8: beq         $a0, $zero, L_80236EE8
    if (ctx->r4 == 0) {
        // 0x80236EDC: sw          $a0, 0xC($t3)
        MEM_W(0XC, ctx->r11) = ctx->r4;
            goto L_80236EE8;
    }
    // 0x80236EDC: sw          $a0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r4;
    // 0x80236EE0: jal         0x80236D40
    // 0x80236EE4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_80236D40(rdram, ctx);
        goto after_1;
    // 0x80236EE4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_1:
L_80236EE8:
    // 0x80236EE8: lh          $t7, 0x0($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X0);
    // 0x80236EEC: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x80236EF0: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x80236EF4: slt         $at, $t4, $t7
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80236EF8: bnel        $at, $zero, L_80236ED0
    if (ctx->r1 != 0) {
        // 0x80236EFC: lw          $t9, 0xC($t3)
        ctx->r25 = MEM_W(ctx->r11, 0XC);
            goto L_80236ED0;
    }
    goto skip_2;
    // 0x80236EFC: lw          $t9, 0xC($t3)
    ctx->r25 = MEM_W(ctx->r11, 0XC);
    skip_2:
L_80236F00:
    // 0x80236F00: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
L_80236F04:
    // 0x80236F04: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80236F08: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80236F0C: slt         $at, $s3, $t8
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80236F10: bnel        $at, $zero, L_80236E7C
    if (ctx->r1 != 0) {
        // 0x80236F14: lw          $t8, 0x4($s2)
        ctx->r24 = MEM_W(ctx->r18, 0X4);
            goto L_80236E7C;
    }
    goto skip_3;
    // 0x80236F14: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    skip_3:
L_80236F18:
    // 0x80236F18: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80236F1C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80236F20: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80236F24: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80236F28: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80236F2C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80236F30: jr          $ra
    // 0x80236F34: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80236F34: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802392C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802392C0: addiu       $sp, $sp, -0x170
    ctx->r29 = ADD32(ctx->r29, -0X170);
    // 0x802392C4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802392C8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802392CC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802392D0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802392D4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802392D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802392DC: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x802392E0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x802392E4: slt         $at, $a1, $t6
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x802392E8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x802392EC: beq         $at, $zero, L_802392FC
    if (ctx->r1 == 0) {
        // 0x802392F0: or          $s4, $a2, $zero
        ctx->r20 = ctx->r6 | 0;
            goto L_802392FC;
    }
    // 0x802392F0: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x802392F4: bgez        $a1, L_80239304
    if (SIGNED(ctx->r5) >= 0) {
        // 0x802392F8: nop
    
            goto L_80239304;
    }
    // 0x802392F8: nop

L_802392FC:
    // 0x802392FC: b           L_80239544
    // 0x80239300: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80239544;
    // 0x80239300: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80239304:
    // 0x80239304: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80239308: nop

    // 0x8023930C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80239310: bne         $t8, $zero, L_80239320
    if (ctx->r24 != 0) {
        // 0x80239314: nop
    
            goto L_80239320;
    }
    // 0x80239314: nop

    // 0x80239318: b           L_80239544
    // 0x8023931C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80239544;
    // 0x8023931C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80239320:
    // 0x80239320: jal         0x802452EC
    // 0x80239324: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_802452EC(rdram, ctx);
        goto after_0;
    // 0x80239324: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x80239328: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8023932C: bne         $v0, $at, L_8023933C
    if (ctx->r2 != ctx->r1) {
        // 0x80239330: nop
    
            goto L_8023933C;
    }
    // 0x80239330: nop

    // 0x80239334: b           L_80239544
    // 0x80239338: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80239544;
    // 0x80239338: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8023933C:
    // 0x8023933C: lbu         $t9, 0x65($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X65);
    // 0x80239340: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80239344: beq         $t9, $zero, L_80239364
    if (ctx->r25 == 0) {
        // 0x80239348: nop
    
            goto L_80239364;
    }
    // 0x80239348: nop

    // 0x8023934C: jal         0x802456A0
    // 0x80239350: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    func_802456A0(rdram, ctx);
        goto after_1;
    // 0x80239350: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_1:
    // 0x80239354: beq         $v0, $zero, L_80239364
    if (ctx->r2 == 0) {
        // 0x80239358: nop
    
            goto L_80239364;
    }
    // 0x80239358: nop

    // 0x8023935C: b           L_80239548
    // 0x80239360: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80239548;
    // 0x80239360: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80239364:
    // 0x80239364: lw          $t2, 0x5C($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X5C);
    // 0x80239368: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x8023936C: addu        $a2, $t2, $s0
    ctx->r6 = ADD32(ctx->r10, ctx->r16);
    // 0x80239370: andi        $t3, $a2, 0xFFFF
    ctx->r11 = ctx->r6 & 0XFFFF;
    // 0x80239374: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80239378: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x8023937C: jal         0x80245710
    // 0x80239380: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    func_80245710(rdram, ctx);
        goto after_2;
    // 0x80239380: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    after_2:
    // 0x80239384: beq         $v0, $zero, L_80239398
    if (ctx->r2 == 0) {
        // 0x80239388: lhu         $t4, 0x4C($sp)
        ctx->r12 = MEM_HU(ctx->r29, 0X4C);
            goto L_80239398;
    }
    // 0x80239388: lhu         $t4, 0x4C($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X4C);
    // 0x8023938C: b           L_80239548
    // 0x80239390: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80239548;
    // 0x80239390: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80239394: lhu         $t4, 0x4C($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X4C);
L_80239398:
    // 0x80239398: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x8023939C: beq         $t4, $zero, L_802393AC
    if (ctx->r12 == 0) {
        // 0x802393A0: nop
    
            goto L_802393AC;
    }
    // 0x802393A0: nop

    // 0x802393A4: bne         $t5, $zero, L_802393B8
    if (ctx->r13 != 0) {
        // 0x802393A8: lhu         $t6, 0x4E($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0X4E);
            goto L_802393B8;
    }
    // 0x802393A8: lhu         $t6, 0x4E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X4E);
L_802393AC:
    // 0x802393AC: b           L_80239544
    // 0x802393B0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80239544;
    // 0x802393B0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802393B4: lhu         $t6, 0x4E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X4E);
L_802393B8:
    // 0x802393B8: lw          $t7, 0x60($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X60);
    // 0x802393BC: lbu         $s3, 0x4E($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X4E);
    // 0x802393C0: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x802393C4: beq         $at, $zero, L_802393D4
    if (ctx->r1 == 0) {
        // 0x802393C8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_802393D4;
    }
    // 0x802393C8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802393CC: b           L_80239544
    // 0x802393D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80239544;
    // 0x802393D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802393D4:
    // 0x802393D4: lbu         $t8, 0x64($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X64);
    // 0x802393D8: lbu         $t1, 0x4F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4F);
    // 0x802393DC: slt         $at, $s3, $t8
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802393E0: beq         $at, $zero, L_802394C4
    if (ctx->r1 == 0) {
        // 0x802393E4: or          $t0, $s3, $zero
        ctx->r8 = ctx->r19 | 0;
            goto L_802394C4;
    }
    // 0x802393E4: or          $t0, $s3, $zero
    ctx->r8 = ctx->r19 | 0;
    // 0x802393E8: addiu       $s1, $sp, 0x44
    ctx->r17 = ADD32(ctx->r29, 0X44);
    // 0x802393EC: addiu       $s0, $sp, 0x68
    ctx->r16 = ADD32(ctx->r29, 0X68);
    // 0x802393F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_802393F4:
    // 0x802393F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802393F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802393FC: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    // 0x80239400: sw          $v1, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r3;
    // 0x80239404: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x80239408: jal         0x80245404
    // 0x8023940C: sb          $t1, 0x3E($sp)
    MEM_B(0X3E, ctx->r29) = ctx->r9;
    func_80245404(rdram, ctx);
        goto after_3;
    // 0x8023940C: sb          $t1, 0x3E($sp)
    MEM_B(0X3E, ctx->r29) = ctx->r9;
    after_3:
    // 0x80239410: lbu         $t1, 0x3E($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3E);
    // 0x80239414: lw          $v1, 0x168($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X168);
    // 0x80239418: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8023941C: beq         $v0, $zero, L_8023942C
    if (ctx->r2 == 0) {
        // 0x80239420: sll         $t9, $t1, 1
        ctx->r25 = S32(ctx->r9 << 1);
            goto L_8023942C;
    }
    // 0x80239420: sll         $t9, $t1, 1
    ctx->r25 = S32(ctx->r9 << 1);
    // 0x80239424: b           L_80239548
    // 0x80239428: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80239548;
    // 0x80239428: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8023942C:
    // 0x8023942C: addu        $t2, $s0, $t9
    ctx->r10 = ADD32(ctx->r16, ctx->r25);
    // 0x80239430: lhu         $at, 0x0($t2)
    ctx->r1 = MEM_HU(ctx->r10, 0X0);
    // 0x80239434: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80239438: sh          $at, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r1;
    // 0x8023943C: lw          $t6, 0x60($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X60);
    // 0x80239440: lhu         $t5, 0x44($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X44);
    // 0x80239444: nop

    // 0x80239448: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8023944C: bne         $at, $zero, L_802394A4
    if (ctx->r1 != 0) {
        // 0x80239450: lhu         $t7, 0x44($sp)
        ctx->r15 = MEM_HU(ctx->r29, 0X44);
            goto L_802394A4;
    }
    // 0x80239450: lhu         $t7, 0x44($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X44);
    // 0x80239454: lbu         $t7, 0x45($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X45);
L_80239458:
    // 0x80239458: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023945C: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80239460: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x80239464: lhu         $at, 0x0($t9)
    ctx->r1 = MEM_HU(ctx->r25, 0X0);
    // 0x80239468: nop

    // 0x8023946C: sh          $at, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r1;
    // 0x80239470: lbu         $t4, 0x44($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X44);
    // 0x80239474: lhu         $t5, 0x44($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X44);
    // 0x80239478: beq         $t0, $t4, L_8023948C
    if (ctx->r8 == ctx->r12) {
        // 0x8023947C: nop
    
            goto L_8023948C;
    }
    // 0x8023947C: nop

    // 0x80239480: lbu         $t1, 0x45($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X45);
    // 0x80239484: b           L_802394A0
    // 0x80239488: or          $s3, $t4, $zero
    ctx->r19 = ctx->r12 | 0;
        goto L_802394A0;
    // 0x80239488: or          $s3, $t4, $zero
    ctx->r19 = ctx->r12 | 0;
L_8023948C:
    // 0x8023948C: lw          $t6, 0x60($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X60);
    // 0x80239490: nop

    // 0x80239494: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80239498: beq         $at, $zero, L_80239458
    if (ctx->r1 == 0) {
        // 0x8023949C: lbu         $t7, 0x45($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X45);
            goto L_80239458;
    }
    // 0x8023949C: lbu         $t7, 0x45($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X45);
L_802394A0:
    // 0x802394A0: lhu         $t7, 0x44($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X44);
L_802394A4:
    // 0x802394A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802394A8: beq         $t7, $at, L_802394C8
    if (ctx->r15 == ctx->r1) {
        // 0x802394AC: lhu         $t3, 0x44($sp)
        ctx->r11 = MEM_HU(ctx->r29, 0X44);
            goto L_802394C8;
    }
    // 0x802394AC: lhu         $t3, 0x44($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X44);
    // 0x802394B0: lbu         $t8, 0x64($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X64);
    // 0x802394B4: or          $t0, $s3, $zero
    ctx->r8 = ctx->r19 | 0;
    // 0x802394B8: slt         $at, $s3, $t8
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802394BC: bne         $at, $zero, L_802393F4
    if (ctx->r1 != 0) {
        // 0x802394C0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_802393F4;
    }
    // 0x802394C0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_802394C4:
    // 0x802394C4: lhu         $t3, 0x44($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X44);
L_802394C8:
    // 0x802394C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802394CC: beq         $t3, $at, L_802394DC
    if (ctx->r11 == ctx->r1) {
        // 0x802394D0: sll         $t9, $v1, 8
        ctx->r25 = S32(ctx->r3 << 8);
            goto L_802394DC;
    }
    // 0x802394D0: sll         $t9, $v1, 8
    ctx->r25 = S32(ctx->r3 << 8);
    // 0x802394D4: b           L_80239544
    // 0x802394D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80239544;
    // 0x802394D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802394DC:
    // 0x802394DC: sw          $t9, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r25;
    // 0x802394E0: lhu         $t2, 0x4C($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X4C);
    // 0x802394E4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802394E8: sh          $t2, 0x8($s4)
    MEM_H(0X8, ctx->r20) = ctx->r10;
    // 0x802394EC: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x802394F0: addiu       $v0, $sp, 0x48
    ctx->r2 = ADD32(ctx->r29, 0X48);
    // 0x802394F4: addiu       $v1, $sp, 0x58
    ctx->r3 = ADD32(ctx->r29, 0X58);
    // 0x802394F8: sw          $t4, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r12;
L_802394FC:
    // 0x802394FC: lbu         $t5, 0x10($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X10);
    // 0x80239500: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239504: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80239508: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8023950C: bne         $at, $zero, L_802394FC
    if (ctx->r1 != 0) {
        // 0x80239510: sb          $t5, 0xD($a0)
        MEM_B(0XD, ctx->r4) = ctx->r13;
            goto L_802394FC;
    }
    // 0x80239510: sb          $t5, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r13;
    // 0x80239514: lbu         $t6, 0x54($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X54);
    // 0x80239518: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8023951C: sb          $t6, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r14;
    // 0x80239520: lbu         $t7, 0x55($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X55);
    // 0x80239524: nop

    // 0x80239528: sb          $t7, 0xB($s4)
    MEM_B(0XB, ctx->r20) = ctx->r15;
    // 0x8023952C: lbu         $t8, 0x56($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X56);
    // 0x80239530: nop

    // 0x80239534: sb          $t8, 0xC($s4)
    MEM_B(0XC, ctx->r20) = ctx->r24;
    // 0x80239538: lbu         $t3, 0x57($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X57);
    // 0x8023953C: nop

    // 0x80239540: sb          $t3, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r11;
L_80239544:
    // 0x80239544: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80239548:
    // 0x80239548: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023954C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80239550: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80239554: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80239558: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8023955C: jr          $ra
    // 0x80239560: addiu       $sp, $sp, 0x170
    ctx->r29 = ADD32(ctx->r29, 0X170);
    return;
    // 0x80239560: addiu       $sp, $sp, 0x170
    ctx->r29 = ADD32(ctx->r29, 0X170);
;}
RECOMP_FUNC void func_802190E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802190E8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802190EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802190F0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802190F4: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x802190F8: mul.s       $f2, $f4, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x802190FC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80219100: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x80219104: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x80219108: sh          $t6, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r14;
    // 0x8021910C: lwc1        $f0, 0x30($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X30);
    // 0x80219110: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80219114: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80219118: sub.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8021911C: mul.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x80219120: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80219124: add.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x80219128: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x8021912C: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x80219130: addiu       $a1, $sp, 0x4E
    ctx->r5 = ADD32(ctx->r29, 0X4E);
    // 0x80219134: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x80219138: lwc1        $f16, 0x34($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X34);
    // 0x8021913C: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80219140: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x80219144: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80219148: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8021914C: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80219150: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80219154: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x80219158: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021915C: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80219160: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x80219164: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80219168: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8021916C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80219170: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80219174: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80219178: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021917C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80219180: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80219184: div.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80219188: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021918C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80219190: addiu       $a2, $sp, 0x52
    ctx->r6 = ADD32(ctx->r29, 0X52);
    // 0x80219194: div.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80219198: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x8021919C: div.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f14.fl);
    // 0x802191A0: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x802191A4: jal         0x8023288C
    // 0x802191A8: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    func_8023288C(rdram, ctx);
        goto after_0;
    // 0x802191A8: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x802191AC: lh          $t8, 0x50($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X50);
    // 0x802191B0: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x802191B4: lh          $a2, 0x4E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X4E);
    // 0x802191B8: bltz        $t8, L_802191FC
    if (SIGNED(ctx->r24) < 0) {
        // 0x802191BC: or          $a1, $t8, $zero
        ctx->r5 = ctx->r24 | 0;
            goto L_802191FC;
    }
    // 0x802191BC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x802191C0: lbu         $a0, 0x48($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X48);
    // 0x802191C4: jal         0x802326D0
    // 0x802191C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_802326D0(rdram, ctx);
        goto after_1;
    // 0x802191C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x802191CC: lhu         $t0, 0x52($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X52);
    // 0x802191D0: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x802191D4: lh          $a1, 0x50($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X50);
    // 0x802191D8: and         $t1, $t0, $v0
    ctx->r9 = ctx->r8 & ctx->r2;
    // 0x802191DC: sh          $t1, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r9;
    // 0x802191E0: lh          $a2, 0x4E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X4E);
    // 0x802191E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802191E8: jal         0x802326D0
    // 0x802191EC: lbu         $a0, 0x48($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X48);
    func_802326D0(rdram, ctx);
        goto after_2;
    // 0x802191EC: lbu         $a0, 0x48($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X48);
    after_2:
    // 0x802191F0: lhu         $t3, 0x52($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X52);
    // 0x802191F4: and         $t4, $t3, $v0
    ctx->r12 = ctx->r11 & ctx->r2;
    // 0x802191F8: sh          $t4, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r12;
L_802191FC:
    // 0x802191FC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80219200: lhu         $v0, 0x52($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X52);
    // 0x80219204: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80219208: jr          $ra
    // 0x8021920C: nop

    return;
    // 0x8021920C: nop

;}
RECOMP_FUNC void func_80237840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237840: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80237844: lw          $v0, 0x910($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X910);
    // 0x80237848: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8023784C: lw          $a0, 0x2C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2C);
    // 0x80237850: beq         $a0, $zero, L_80237868
    if (ctx->r4 == 0) {
        // 0x80237854: nop
    
            goto L_80237868;
    }
    // 0x80237854: nop

    // 0x80237858: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8023785C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80237860: sw          $t6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r14;
    // 0x80237864: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
L_80237868:
    // 0x80237868: jr          $ra
    // 0x8023786C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8023786C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8021D44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021D44C: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x8021D450: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8021D454: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x8021D458: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8021D45C: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x8021D460: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x8021D464: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x8021D468: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x8021D46C: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x8021D470: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x8021D474: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x8021D478: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x8021D47C: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x8021D480: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x8021D484: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x8021D488: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x8021D48C: addiu       $v1, $v1, 0x3B90
    ctx->r3 = ADD32(ctx->r3, 0X3B90);
    // 0x8021D490: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D494: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x8021D498: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8021D49C: lw          $s0, 0x0($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X0);
    // 0x8021D4A0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D4A4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D4A8: lui         $s1, 0xE700
    ctx->r17 = S32(0XE700 << 16);
    // 0x8021D4AC: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x8021D4B0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D4B4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D4B8: lui         $t8, 0xBB00
    ctx->r24 = S32(0XBB00 << 16);
    // 0x8021D4BC: ori         $t8, $t8, 0x101
    ctx->r24 = ctx->r24 | 0X101;
    // 0x8021D4C0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D4C4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D4C8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8021D4CC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8021D4D0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021D4D4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D4D8: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8021D4DC: ori         $t7, $t7, 0x1001
    ctx->r15 = ctx->r15 | 0X1001;
    // 0x8021D4E0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D4E4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D4E8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D4EC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D4F0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D4F4: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8021D4F8: ori         $t9, $t9, 0xC02
    ctx->r25 = ctx->r25 | 0XC02;
    // 0x8021D4FC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D500: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D504: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D508: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021D50C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D510: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8021D514: ori         $t7, $t7, 0x1102
    ctx->r15 = ctx->r15 | 0X1102;
    // 0x8021D518: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D51C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D520: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D524: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D528: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D52C: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8021D530: ori         $t9, $t9, 0x1301
    ctx->r25 = ctx->r25 | 0X1301;
    // 0x8021D534: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D538: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D53C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D540: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021D544: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D548: lui         $t8, 0x14F
    ctx->r24 = S32(0X14F << 16);
    // 0x8021D54C: ori         $t8, $t8, 0xC008
    ctx->r24 = ctx->r24 | 0XC008;
    // 0x8021D550: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D554: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D558: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x8021D55C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D560: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021D564: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D568: lui         $t7, 0x108
    ctx->r15 = S32(0X108 << 16);
    // 0x8021D56C: lui         $t6, 0xF570
    ctx->r14 = S32(0XF570 << 16);
    // 0x8021D570: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D574: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D578: ori         $t6, $t6, 0xA000
    ctx->r14 = ctx->r14 | 0XA000;
    // 0x8021D57C: ori         $t7, $t7, 0x8290
    ctx->r15 = ctx->r15 | 0X8290;
    // 0x8021D580: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8021D584: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021D588: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D58C: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8021D590: ori         $t9, $t9, 0x1402
    ctx->r25 = ctx->r25 | 0X1402;
    // 0x8021D594: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D598: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D59C: lui         $t6, 0x10
    ctx->r14 = S32(0X10 << 16);
    // 0x8021D5A0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8021D5A4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021D5A8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D5AC: lui         $t8, 0xFD10
    ctx->r24 = S32(0XFD10 << 16);
    // 0x8021D5B0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021D5B4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D5B8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D5BC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021D5C0: lw          $t9, 0x40($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X40);
    // 0x8021D5C4: lui         $t8, 0xE800
    ctx->r24 = S32(0XE800 << 16);
    // 0x8021D5C8: lui         $s3, 0x400
    ctx->r19 = S32(0X400 << 16);
    // 0x8021D5CC: addu        $t6, $t9, $at
    ctx->r14 = ADD32(ctx->r25, ctx->r1);
    // 0x8021D5D0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8021D5D4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D5D8: lui         $t6, 0xF500
    ctx->r14 = S32(0XF500 << 16);
    // 0x8021D5DC: ori         $t6, $t6, 0x100
    ctx->r14 = ctx->r14 | 0X100;
    // 0x8021D5E0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D5E4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D5E8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D5EC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021D5F0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D5F4: lui         $t7, 0x700
    ctx->r15 = S32(0X700 << 16);
    // 0x8021D5F8: lui         $ra, 0x3F
    ctx->r31 = S32(0X3F << 16);
    // 0x8021D5FC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D600: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D604: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8021D608: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021D60C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D610: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x8021D614: lui         $t7, 0xF000
    ctx->r15 = S32(0XF000 << 16);
    // 0x8021D618: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D61C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D620: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D624: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021D628: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D62C: lui         $t8, 0x73F
    ctx->r24 = S32(0X73F << 16);
    // 0x8021D630: ori         $t8, $t8, 0xC000
    ctx->r24 = ctx->r24 | 0XC000;
    // 0x8021D634: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D638: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D63C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021D640: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D644: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D648: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8021D64C: ori         $t7, $t7, 0xE02
    ctx->r15 = ctx->r15 | 0XE02;
    // 0x8021D650: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D654: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D658: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D65C: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x8021D660: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D664: ori         $t8, $zero, 0xC000
    ctx->r24 = 0 | 0XC000;
    // 0x8021D668: lui         $t5, 0xE44F
    ctx->r13 = S32(0XE44F << 16);
    // 0x8021D66C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D670: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D674: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021D678: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D67C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D680: lui         $t6, 0xF800
    ctx->r14 = S32(0XF800 << 16);
    // 0x8021D684: lui         $t4, 0x73B
    ctx->r12 = S32(0X73B << 16);
    // 0x8021D688: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D68C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D690: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021D694: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x8021D698: lbu         $t7, 0x1($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1);
    // 0x8021D69C: ori         $t4, $t4, 0xF01A
    ctx->r12 = ctx->r12 | 0XF01A;
    // 0x8021D6A0: sll         $t9, $t8, 24
    ctx->r25 = S32(ctx->r24 << 24);
    // 0x8021D6A4: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8021D6A8: or          $t6, $t9, $t8
    ctx->r14 = ctx->r25 | ctx->r24;
    // 0x8021D6AC: lbu         $t9, 0x2($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2);
    // 0x8021D6B0: lui         $s0, 0x100
    ctx->r16 = S32(0X100 << 16);
    // 0x8021D6B4: ori         $t5, $t5, 0xC000
    ctx->r13 = ctx->r13 | 0XC000;
    // 0x8021D6B8: sll         $t8, $t9, 8
    ctx->r24 = S32(ctx->r25 << 8);
    // 0x8021D6BC: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8021D6C0: ori         $t9, $t7, 0xFF
    ctx->r25 = ctx->r15 | 0XFF;
    // 0x8021D6C4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8021D6C8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D6CC: lui         $t7, 0x3C18
    ctx->r15 = S32(0X3C18 << 16);
    // 0x8021D6D0: lui         $t8, 0xB900
    ctx->r24 = S32(0XB900 << 16);
    // 0x8021D6D4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D6D8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D6DC: ori         $t8, $t8, 0x31D
    ctx->r24 = ctx->r24 | 0X31D;
    // 0x8021D6E0: ori         $t7, $t7, 0x41C8
    ctx->r15 = ctx->r15 | 0X41C8;
    // 0x8021D6E4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8021D6E8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021D6EC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D6F0: lui         $t6, 0xFCFF
    ctx->r14 = S32(0XFCFF << 16);
    // 0x8021D6F4: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x8021D6F8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D6FC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D700: addiu       $t8, $zero, -0xDC8
    ctx->r24 = ADD32(0, -0XDC8);
    // 0x8021D704: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021D708: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021D70C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D710: lui         $t6, 0x708
    ctx->r14 = S32(0X708 << 16);
    // 0x8021D714: lui         $t9, 0xF550
    ctx->r25 = S32(0XF550 << 16);
    // 0x8021D718: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D71C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D720: ori         $t6, $t6, 0x8290
    ctx->r14 = ctx->r14 | 0X8290;
    // 0x8021D724: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021D728: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8021D72C: lui         $t9, 0x3F
    ctx->r25 = S32(0X3F << 16);
    // 0x8021D730: lui         $t7, 0x3F
    ctx->r15 = S32(0X3F << 16);
    // 0x8021D734: lui         $t8, 0x3F
    ctx->r24 = S32(0X3F << 16);
    // 0x8021D738: ori         $t8, $t8, 0xF100
    ctx->r24 = ctx->r24 | 0XF100;
    // 0x8021D73C: ori         $t7, $t7, 0xE980
    ctx->r15 = ctx->r15 | 0XE980;
    // 0x8021D740: ori         $t9, $t9, 0xE200
    ctx->r25 = ctx->r25 | 0XE200;
    // 0x8021D744: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8021D748: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x8021D74C: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x8021D750: lui         $s1, 0xB400
    ctx->r17 = S32(0XB400 << 16);
    // 0x8021D754: ori         $ra, $ra, 0xF880
    ctx->r31 = ctx->r31 | 0XF880;
    // 0x8021D758: ori         $s3, $s3, 0x400
    ctx->r19 = ctx->r19 | 0X400;
    // 0x8021D75C: lui         $s2, 0xB300
    ctx->r18 = S32(0XB300 << 16);
    // 0x8021D760: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x8021D764: addiu       $fp, $zero, 0xF0
    ctx->r30 = ADD32(0, 0XF0);
    // 0x8021D768: lui         $t3, 0xF300
    ctx->r11 = S32(0XF300 << 16);
    // 0x8021D76C: lui         $t2, 0xFD50
    ctx->r10 = S32(0XFD50 << 16);
L_8021D770:
    // 0x8021D770: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D774: subu        $t1, $fp, $s7
    ctx->r9 = SUB32(ctx->r30, ctx->r23);
    // 0x8021D778: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x8021D77C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D780: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D784: sw          $ra, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r31;
    // 0x8021D788: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x8021D78C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D790: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8021D794: addiu       $s4, $t1, -0x3
    ctx->r20 = ADD32(ctx->r9, -0X3);
    // 0x8021D798: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D79C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D7A0: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8021D7A4: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8021D7A8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D7AC: or          $t8, $t6, $t5
    ctx->r24 = ctx->r14 | ctx->r13;
    // 0x8021D7B0: addiu       $s5, $t1, -0x6
    ctx->r21 = ADD32(ctx->r9, -0X6);
    // 0x8021D7B4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D7B8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D7BC: sll         $t7, $s4, 2
    ctx->r15 = S32(ctx->r20 << 2);
    // 0x8021D7C0: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8021D7C4: or          $t6, $t9, $s0
    ctx->r14 = ctx->r25 | ctx->r16;
    // 0x8021D7C8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8021D7CC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021D7D0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D7D4: or          $s4, $t7, $zero
    ctx->r20 = ctx->r15 | 0;
    // 0x8021D7D8: addiu       $s6, $t1, -0x9
    ctx->r22 = ADD32(ctx->r9, -0X9);
    // 0x8021D7DC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D7E0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D7E4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D7E8: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x8021D7EC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D7F0: addiu       $s7, $s7, 0xC
    ctx->r23 = ADD32(ctx->r23, 0XC);
    // 0x8021D7F4: addiu       $ra, $ra, -0x1E00
    ctx->r31 = ADD32(ctx->r31, -0X1E00);
    // 0x8021D7F8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D7FC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D800: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    // 0x8021D804: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x8021D808: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D80C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D810: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D814: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x8021D818: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8021D81C: andi        $t9, $s4, 0xFFF
    ctx->r25 = ctx->r20 & 0XFFF;
    // 0x8021D820: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8021D824: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D828: or          $t6, $t9, $t5
    ctx->r14 = ctx->r25 | ctx->r13;
    // 0x8021D82C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D830: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D834: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8021D838: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8021D83C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D840: sll         $t8, $s5, 2
    ctx->r24 = S32(ctx->r21 << 2);
    // 0x8021D844: or          $s5, $t8, $zero
    ctx->r21 = ctx->r24 | 0;
    // 0x8021D848: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D84C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D850: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8021D854: or          $t9, $t7, $s0
    ctx->r25 = ctx->r15 | ctx->r16;
    // 0x8021D858: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8021D85C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021D860: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D864: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D868: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D86C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D870: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x8021D874: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D878: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D87C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D880: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    // 0x8021D884: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x8021D888: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D88C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D890: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D894: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x8021D898: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8021D89C: andi        $t7, $s5, 0xFFF
    ctx->r15 = ctx->r21 & 0XFFF;
    // 0x8021D8A0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8021D8A4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D8A8: or          $t9, $t7, $t5
    ctx->r25 = ctx->r15 | ctx->r13;
    // 0x8021D8AC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D8B0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D8B4: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8021D8B8: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8021D8BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D8C0: sll         $t6, $s6, 2
    ctx->r14 = S32(ctx->r22 << 2);
    // 0x8021D8C4: or          $s6, $t6, $zero
    ctx->r22 = ctx->r14 | 0;
    // 0x8021D8C8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D8CC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D8D0: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8021D8D4: or          $t7, $t8, $s0
    ctx->r15 = ctx->r24 | ctx->r16;
    // 0x8021D8D8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8021D8DC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021D8E0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D8E4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D8E8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D8EC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D8F0: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x8021D8F4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D8F8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D8FC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D900: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    // 0x8021D904: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x8021D908: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D90C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D910: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D914: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x8021D918: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8021D91C: andi        $t8, $s6, 0xFFF
    ctx->r24 = ctx->r22 & 0XFFF;
    // 0x8021D920: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8021D924: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D928: or          $t7, $t8, $t5
    ctx->r15 = ctx->r24 | ctx->r13;
    // 0x8021D92C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D930: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D934: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8021D938: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8021D93C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D940: addiu       $t9, $t1, -0xC
    ctx->r25 = ADD32(ctx->r9, -0XC);
    // 0x8021D944: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D948: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D94C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8021D950: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8021D954: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D958: or          $t7, $t8, $s0
    ctx->r15 = ctx->r24 | ctx->r16;
    // 0x8021D95C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8021D960: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D964: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D968: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D96C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D970: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x8021D974: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D978: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D97C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D980: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    // 0x8021D984: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x8021D988: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8021D98C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8021D990: addiu       $t7, $t8, -0x1E00
    ctx->r15 = ADD32(ctx->r24, -0X1E00);
    // 0x8021D994: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8021D998: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x8021D99C: addiu       $t6, $t9, -0x1E00
    ctx->r14 = ADD32(ctx->r25, -0X1E00);
    // 0x8021D9A0: addiu       $t7, $t8, -0x1E00
    ctx->r15 = ADD32(ctx->r24, -0X1E00);
    // 0x8021D9A4: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x8021D9A8: bne         $s7, $fp, L_8021D770
    if (ctx->r23 != ctx->r30) {
        // 0x8021D9AC: sw          $t6, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r14;
            goto L_8021D770;
    }
    // 0x8021D9AC: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x8021D9B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8021D9B4: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x8021D9B8: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x8021D9BC: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x8021D9C0: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x8021D9C4: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x8021D9C8: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x8021D9CC: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x8021D9D0: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x8021D9D4: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x8021D9D8: jr          $ra
    // 0x8021D9DC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x8021D9DC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_80223840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223840: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80223844: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80223848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022384C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80223850: addiu       $a2, $a2, 0x5110
    ctx->r6 = ADD32(ctx->r6, 0X5110);
    // 0x80223854: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80223858: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022385C:
    // 0x8022385C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80223860: beq         $t6, $zero, L_80223874
    if (ctx->r14 == 0) {
        // 0x80223864: nop
    
            goto L_80223874;
    }
    // 0x80223864: nop

    // 0x80223868: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8022386C: bne         $a3, $v0, L_8022385C
    if (ctx->r7 != ctx->r2) {
        // 0x80223870: addiu       $a2, $a2, 0x10
        ctx->r6 = ADD32(ctx->r6, 0X10);
            goto L_8022385C;
    }
    // 0x80223870: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
L_80223874:
    // 0x80223874: bne         $a3, $v0, L_80223894
    if (ctx->r7 != ctx->r2) {
        // 0x80223878: lw          $t7, 0x20($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X20);
            goto L_80223894;
    }
    // 0x80223878: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8022387C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80223880: addiu       $a0, $a0, 0x3970
    ctx->r4 = ADD32(ctx->r4, 0X3970);
    // 0x80223884: jal         0x80231A24
    // 0x80223888: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80223888: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8022388C: b           L_802238E0
    // 0x80223890: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_802238E0;
    // 0x80223890: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80223894:
    // 0x80223894: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80223898: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8022389C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x802238A0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x802238A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802238A8: jal         0x8022B5E0
    // 0x802238AC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_8022B5E0(rdram, ctx);
        goto after_1;
    // 0x802238AC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x802238B0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x802238B4: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x802238B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802238BC: sw          $t9, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r25;
    // 0x802238C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802238C4: jal         0x8022B5E0
    // 0x802238C8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_8022B5E0(rdram, ctx);
        goto after_2;
    // 0x802238C8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_2:
    // 0x802238CC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x802238D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802238D4: jal         0x80223C3C
    // 0x802238D8: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    func_80223C3C(rdram, ctx);
        goto after_3;
    // 0x802238D8: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    after_3:
    // 0x802238DC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
L_802238E0:
    // 0x802238E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802238E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802238E8: jr          $ra
    // 0x802238EC: nop

    return;
    // 0x802238EC: nop

;}
RECOMP_FUNC void func_80247830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247830: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80247834: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80247838: lbu         $t7, 0x3F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3F);
    // 0x8024783C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80247840: addiu       $t6, $t6, 0x5F80
    ctx->r14 = ADD32(ctx->r14, 0X5F80);
    // 0x80247844: slti        $at, $t7, 0x41
    ctx->r1 = SIGNED(ctx->r15) < 0X41 ? 1 : 0;
    // 0x80247848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024784C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80247850: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80247854: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80247858: bne         $at, $zero, L_80247868
    if (ctx->r1 != 0) {
        // 0x8024785C: sw          $t6, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r14;
            goto L_80247868;
    }
    // 0x8024785C: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80247860: b           L_802479D0
    // 0x80247864: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_802479D0;
    // 0x80247864: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80247868:
    // 0x80247868: jal         0x80245AD0
    // 0x8024786C: nop

    func_80245AD0(rdram, ctx);
        goto after_0;
    // 0x8024786C: nop

    after_0:
    // 0x80247870: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80247874: jal         0x80247AEC
    // 0x80247878: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_80247AEC(rdram, ctx);
        goto after_1;
    // 0x80247878: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x8024787C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80247880: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80247884: bne         $t8, $zero, L_8024789C
    if (ctx->r24 != 0) {
        // 0x80247888: nop
    
            goto L_8024789C;
    }
    // 0x80247888: nop

    // 0x8024788C: lhu         $t9, 0x1C($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X1C);
    // 0x80247890: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80247894: beq         $t9, $at, L_802478A4
    if (ctx->r25 == ctx->r1) {
        // 0x80247898: nop
    
            goto L_802478A4;
    }
    // 0x80247898: nop

L_8024789C:
    // 0x8024789C: b           L_802479D0
    // 0x802478A0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_802479D0;
    // 0x802478A0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802478A4:
    // 0x802478A4: lbu         $t0, 0x1E($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1E);
    // 0x802478A8: andi        $t1, $t0, 0x80
    ctx->r9 = ctx->r8 & 0X80;
    // 0x802478AC: beq         $t1, $zero, L_802478D0
    if (ctx->r9 == 0) {
        // 0x802478B0: nop
    
            goto L_802478D0;
    }
    // 0x802478B0: nop

L_802478B4:
    // 0x802478B4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802478B8: jal         0x80247AEC
    // 0x802478BC: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_80247AEC(rdram, ctx);
        goto after_2;
    // 0x802478BC: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x802478C0: lbu         $t2, 0x1E($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X1E);
    // 0x802478C4: andi        $t3, $t2, 0x80
    ctx->r11 = ctx->r10 & 0X80;
    // 0x802478C8: bne         $t3, $zero, L_802478B4
    if (ctx->r11 != 0) {
        // 0x802478CC: nop
    
            goto L_802478B4;
    }
    // 0x802478CC: nop

L_802478D0:
    // 0x802478D0: lbu         $a0, 0x3F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3F);
    // 0x802478D4: jal         0x802479E0
    // 0x802478D8: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    func_802479E0(rdram, ctx);
        goto after_3;
    // 0x802478D8: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    after_3:
    // 0x802478DC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802478E0: addiu       $a1, $a1, 0x5F80
    ctx->r5 = ADD32(ctx->r5, 0X5F80);
    // 0x802478E4: jal         0x802465B0
    // 0x802478E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802465B0(rdram, ctx);
        goto after_4;
    // 0x802478E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x802478EC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x802478F0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802478F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802478F8: jal         0x802374B0
    // 0x802478FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_5;
    // 0x802478FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80247900: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_80247904:
    // 0x80247904: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80247908: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8024790C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80247910: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80247914: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80247918: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8024791C: sw          $t4, 0x5F80($at)
    MEM_W(0X5F80, ctx->r1) = ctx->r12;
    // 0x80247920: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80247924: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x80247928: bne         $at, $zero, L_80247904
    if (ctx->r1 != 0) {
        // 0x8024792C: sw          $t8, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r24;
            goto L_80247904;
    }
    // 0x8024792C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80247930: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80247934: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80247938: sw          $zero, 0x5FBC($at)
    MEM_W(0X5FBC, ctx->r1) = 0;
    // 0x8024793C: addiu       $a1, $a1, 0x5F80
    ctx->r5 = ADD32(ctx->r5, 0X5F80);
    // 0x80247940: jal         0x802465B0
    // 0x80247944: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802465B0(rdram, ctx);
        goto after_6;
    // 0x80247944: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x80247948: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8024794C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80247950: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80247954: sb          $t9, 0x5EB0($at)
    MEM_B(0X5EB0, ctx->r1) = ctx->r25;
    // 0x80247958: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8024795C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80247960: jal         0x802374B0
    // 0x80247964: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_7;
    // 0x80247964: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80247968: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_8024796C:
    // 0x8024796C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80247970: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80247974: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80247978: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x8024797C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80247980: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x80247984: bne         $at, $zero, L_8024796C
    if (ctx->r1 != 0) {
        // 0x80247988: sw          $t1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r9;
            goto L_8024796C;
    }
    // 0x80247988: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x8024798C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80247990: addiu       $t5, $sp, 0x20
    ctx->r13 = ADD32(ctx->r29, 0X20);
    // 0x80247994: lwl         $at, 0x0($t4)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r12, 0X0);
    // 0x80247998: lwr         $at, 0x3($t4)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r12, 0X3);
    // 0x8024799C: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x802479A0: lwl         $t7, 0x4($t4)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r12, 0X4);
    // 0x802479A4: lwr         $t7, 0x7($t4)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r12, 0X7);
    // 0x802479A8: sw          $t7, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r15;
    // 0x802479AC: lwl         $at, 0x8($t4)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r12, 0X8);
    // 0x802479B0: lwr         $at, 0xB($t4)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r12, 0XB);
    // 0x802479B4: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x802479B8: lbu         $t8, 0x21($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X21);
    // 0x802479BC: andi        $t9, $t8, 0xC0
    ctx->r25 = ctx->r24 & 0XC0;
    // 0x802479C0: sra         $t0, $t9, 4
    ctx->r8 = S32(SIGNED(ctx->r25) >> 4);
    // 0x802479C4: jal         0x80245B14
    // 0x802479C8: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    func_80245B14(rdram, ctx);
        goto after_8;
    // 0x802479C8: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    after_8:
    // 0x802479CC: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
L_802479D0:
    // 0x802479D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802479D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802479D8: jr          $ra
    // 0x802479DC: nop

    return;
    // 0x802479DC: nop

;}
RECOMP_FUNC void func_8021E87C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E87C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021E880: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8021E884: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x8021E888: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x8021E88C: lw          $t8, -0x187C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X187C);
    // 0x8021E890: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8021E894: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8021E898: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8021E89C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8021E8A0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8021E8A4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8021E8A8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8021E8AC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8021E8B0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8021E8B4: lw          $t7, 0x44($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X44);
    // 0x8021E8B8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8021E8BC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021E8C0: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8021E8C4: lw          $s3, 0x0($t0)
    ctx->r19 = MEM_W(ctx->r8, 0X0);
    // 0x8021E8C8: lwc1        $f0, -0x1880($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1880);
    // 0x8021E8CC: lui         $s4, 0x8025
    ctx->r20 = S32(0X8025 << 16);
    // 0x8021E8D0: lw          $t1, 0xC($s3)
    ctx->r9 = MEM_W(ctx->r19, 0XC);
    // 0x8021E8D4: addiu       $s4, $s4, -0x1874
    ctx->r20 = ADD32(ctx->r20, -0X1874);
    // 0x8021E8D8: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x8021E8DC: lh          $t2, 0x1C($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X1C);
    // 0x8021E8E0: lui         $s5, 0x8027
    ctx->r21 = S32(0X8027 << 16);
    // 0x8021E8E4: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8021E8E8: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8021E8EC: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8021E8F0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8021E8F4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021E8F8: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x8021E8FC: addiu       $s5, $s5, 0x10E0
    ctx->r21 = ADD32(ctx->r21, 0X10E0);
    // 0x8021E900: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8021E904: addiu       $t5, $zero, 0xF0
    ctx->r13 = ADD32(0, 0XF0);
    // 0x8021E908: addu        $v0, $s5, $t8
    ctx->r2 = ADD32(ctx->r21, ctx->r24);
    // 0x8021E90C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8021E910: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x8021E914: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8021E918: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x8021E91C: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x8021E920: lui         $t1, 0x8025
    ctx->r9 = S32(0X8025 << 16);
    // 0x8021E924: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021E928: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021E92C: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x8021E930: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8021E934: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x8021E938: nop

    // 0x8021E93C: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x8021E940: subu        $a1, $t5, $a1
    ctx->r5 = SUB32(ctx->r13, ctx->r5);
    // 0x8021E944: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x8021E948: lbu         $t7, -0x189C($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X189C);
    // 0x8021E94C: sb          $t7, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r15;
    // 0x8021E950: lbu         $t9, -0x1898($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1898);
    // 0x8021E954: sb          $t9, 0x11($v0)
    MEM_B(0X11, ctx->r2) = ctx->r25;
    // 0x8021E958: lbu         $t0, -0x1894($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1894);
    // 0x8021E95C: sb          $t0, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r8;
    // 0x8021E960: lbu         $t1, -0x1890($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X1890);
    // 0x8021E964: sb          $t1, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r9;
    // 0x8021E968: lwc1        $f16, -0x1884($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1884);
    // 0x8021E96C: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x8021E970: jal         0x8022FF90
    // 0x8021E974: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    func_8022FF90(rdram, ctx);
        goto after_0;
    // 0x8021E974: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    after_0:
    // 0x8021E978: slti        $at, $v0, 0x1A
    ctx->r1 = SIGNED(ctx->r2) < 0X1A ? 1 : 0;
    // 0x8021E97C: bne         $at, $zero, L_8021E98C
    if (ctx->r1 != 0) {
        // 0x8021E980: or          $s7, $v0, $zero
        ctx->r23 = ctx->r2 | 0;
            goto L_8021E98C;
    }
    // 0x8021E980: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x8021E984: sb          $zero, 0x18($s6)
    MEM_B(0X18, ctx->r22) = 0;
    // 0x8021E988: addiu       $s7, $zero, 0x19
    ctx->r23 = ADD32(0, 0X19);
L_8021E98C:
    // 0x8021E98C: blez        $s7, L_8021EA14
    if (SIGNED(ctx->r23) <= 0) {
        // 0x8021E990: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8021EA14;
    }
    // 0x8021E990: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8021E994: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
    // 0x8021E998: addiu       $s6, $zero, -0x2
    ctx->r22 = ADD32(0, -0X2);
    // 0x8021E99C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8021E9A0:
    // 0x8021E9A0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8021E9A4: jal         0x8022FF40
    // 0x8021E9A8: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    func_8022FF40(rdram, ctx);
        goto after_1;
    // 0x8021E9A8: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    after_1:
    // 0x8021E9AC: beq         $v0, $zero, L_8021E9E4
    if (ctx->r2 == 0) {
        // 0x8021E9B0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8021E9E4;
    }
    // 0x8021E9B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8021E9B4: lw          $t4, 0x0($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X0);
    // 0x8021E9B8: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x8021E9BC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8021E9C0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8021E9C4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8021E9C8: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8021E9CC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8021E9D0: addu        $t6, $s5, $t5
    ctx->r14 = ADD32(ctx->r21, ctx->r13);
    // 0x8021E9D4: addu        $t8, $t6, $s0
    ctx->r24 = ADD32(ctx->r14, ctx->r16);
    // 0x8021E9D8: subu        $t3, $v0, $t2
    ctx->r11 = SUB32(ctx->r2, ctx->r10);
    // 0x8021E9DC: b           L_8021EA08
    // 0x8021E9E0: sh          $t3, 0x14($t8)
    MEM_H(0X14, ctx->r24) = ctx->r11;
        goto L_8021EA08;
    // 0x8021E9E0: sh          $t3, 0x14($t8)
    MEM_H(0X14, ctx->r24) = ctx->r11;
L_8021E9E4:
    // 0x8021E9E4: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x8021E9E8: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8021E9EC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8021E9F0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8021E9F4: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x8021E9F8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8021E9FC: addu        $t0, $s5, $t9
    ctx->r8 = ADD32(ctx->r21, ctx->r25);
    // 0x8021EA00: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x8021EA04: sh          $s6, 0x14($t1)
    MEM_H(0X14, ctx->r9) = ctx->r22;
L_8021EA08:
    // 0x8021EA08: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8021EA0C: bne         $s1, $s7, L_8021E9A0
    if (ctx->r17 != ctx->r23) {
        // 0x8021EA10: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_8021E9A0;
    }
    // 0x8021EA10: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8021EA14:
    // 0x8021EA14: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x8021EA18: sll         $t5, $s7, 1
    ctx->r13 = S32(ctx->r23 << 1);
    // 0x8021EA1C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8021EA20: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x8021EA24: addu        $t2, $t2, $v1
    ctx->r10 = ADD32(ctx->r10, ctx->r3);
    // 0x8021EA28: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8021EA2C: subu        $t2, $t2, $v1
    ctx->r10 = SUB32(ctx->r10, ctx->r3);
    // 0x8021EA30: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8021EA34: addu        $v0, $s5, $t2
    ctx->r2 = ADD32(ctx->r21, ctx->r10);
    // 0x8021EA38: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x8021EA3C: sh          $t4, 0x14($t6)
    MEM_H(0X14, ctx->r14) = ctx->r12;
    // 0x8021EA40: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x8021EA44: lw          $t3, -0x18F0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X18F0);
    // 0x8021EA48: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8021EA4C: lw          $t7, -0x187C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X187C);
    // 0x8021EA50: lw          $t8, 0x44($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X44);
    // 0x8021EA54: slti        $at, $v1, 0x22
    ctx->r1 = SIGNED(ctx->r3) < 0X22 ? 1 : 0;
    // 0x8021EA58: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8021EA5C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8021EA60: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x8021EA64: addiu       $t2, $v1, 0x1
    ctx->r10 = ADD32(ctx->r3, 0X1);
    // 0x8021EA68: bne         $at, $zero, L_8021EA84
    if (ctx->r1 != 0) {
        // 0x8021EA6C: sw          $t1, 0x48($v0)
        MEM_W(0X48, ctx->r2) = ctx->r9;
            goto L_8021EA84;
    }
    // 0x8021EA6C: sw          $t1, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r9;
    // 0x8021EA70: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021EA74: jal         0x80231A24
    // 0x8021EA78: addiu       $a0, $a0, 0x36D4
    ctx->r4 = ADD32(ctx->r4, 0X36D4);
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x8021EA78: addiu       $a0, $a0, 0x36D4
    ctx->r4 = ADD32(ctx->r4, 0X36D4);
    after_2:
    // 0x8021EA7C: b           L_8021EA8C
    // 0x8021EA80: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8021EA8C;
    // 0x8021EA80: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8021EA84:
    // 0x8021EA84: sw          $t2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r10;
    // 0x8021EA88: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8021EA8C:
    // 0x8021EA8C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8021EA90: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8021EA94: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8021EA98: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8021EA9C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8021EAA0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8021EAA4: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8021EAA8: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8021EAAC: jr          $ra
    // 0x8021EAB0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8021EAB0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8020153C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020153C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201540: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80201544: lbu         $a3, 0x23($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X23);
    // 0x80201548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020154C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80201550: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201554: addiu       $a0, $a0, 0x1CF0
    ctx->r4 = ADD32(ctx->r4, 0X1CF0);
    // 0x80201558: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    // 0x8020155C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x80201560: jal         0x802011D0
    // 0x80201564: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_802011D0(rdram, ctx);
        goto after_0;
    // 0x80201564: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80201568: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8020156C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80201570: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x80201574: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201578: addiu       $a0, $a0, 0x1D14
    ctx->r4 = ADD32(ctx->r4, 0X1D14);
    // 0x8020157C: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201580: bne         $at, $zero, L_802015A4
    if (ctx->r1 != 0) {
        // 0x80201584: lui         $a1, 0x8025
        ctx->r5 = S32(0X8025 << 16);
            goto L_802015A4;
    }
    // 0x80201584: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80201588: addiu       $a1, $a1, 0x1D2C
    ctx->r5 = ADD32(ctx->r5, 0X1D2C);
    // 0x8020158C: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    // 0x80201590: jal         0x80231C9C
    // 0x80201594: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80231C9C(rdram, ctx);
        goto after_1;
    // 0x80201594: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_1:
    // 0x80201598: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8020159C: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x802015A0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
L_802015A4:
    // 0x802015A4: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802015A8: beq         $at, $zero, L_8020163C
    if (ctx->r1 == 0) {
        // 0x802015AC: lui         $a1, 0x8025
        ctx->r5 = S32(0X8025 << 16);
            goto L_8020163C;
    }
    // 0x802015AC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802015B0: lbu         $v0, 0x23($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X23);
    // 0x802015B4: addiu       $a1, $a1, 0x6DE4
    ctx->r5 = ADD32(ctx->r5, 0X6DE4);
    // 0x802015B8: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x802015BC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x802015C0: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x802015C4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802015C8: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x802015CC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802015D0: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x802015D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802015D8: addu        $v1, $t7, $t6
    ctx->r3 = ADD32(ctx->r15, ctx->r14);
    // 0x802015DC: lw          $t8, 0xA0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XA0);
    // 0x802015E0: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x802015E4: beql        $t8, $at, L_80201638
    if (ctx->r24 == ctx->r1) {
        // 0x802015E8: lbu         $t7, 0x27($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X27);
            goto L_80201638;
    }
    goto skip_0;
    // 0x802015E8: lbu         $t7, 0x27($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X27);
    skip_0:
    // 0x802015EC: lbu         $a0, 0xAD($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0XAD);
    // 0x802015F0: jal         0x80203654
    // 0x802015F4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_80203654(rdram, ctx);
        goto after_2;
    // 0x802015F4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_2:
    // 0x802015F8: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802015FC: addiu       $a1, $a1, 0x6DE4
    ctx->r5 = ADD32(ctx->r5, 0X6DE4);
    // 0x80201600: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80201604: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x80201608: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x8020160C: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x80201610: sw          $zero, 0xA0($t0)
    MEM_W(0XA0, ctx->r8) = 0;
    // 0x80201614: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x80201618: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x8020161C: sb          $t1, 0xAD($t3)
    MEM_B(0XAD, ctx->r11) = ctx->r9;
    // 0x80201620: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x80201624: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x80201628: sb          $zero, 0xB0($t5)
    MEM_B(0XB0, ctx->r13) = 0;
    // 0x8020162C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80201630: addu        $v1, $t6, $v0
    ctx->r3 = ADD32(ctx->r14, ctx->r2);
    // 0x80201634: lbu         $t7, 0x27($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X27);
L_80201638:
    // 0x80201638: sb          $t7, 0x8C($v1)
    MEM_B(0X8C, ctx->r3) = ctx->r15;
L_8020163C:
    // 0x8020163C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201640: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80201644: jr          $ra
    // 0x80201648: nop

    return;
    // 0x80201648: nop

;}
RECOMP_FUNC void func_80224ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80224ABC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80224AC0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80224AC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80224AC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80224ACC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80224AD0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80224AD4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80224AD8: addiu       $a0, $a0, 0x5F7C
    ctx->r4 = ADD32(ctx->r4, 0X5F7C);
    // 0x80224ADC: jal         0x8022B374
    // 0x80224AE0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8022B374(rdram, ctx);
        goto after_0;
    // 0x80224AE0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80224AE4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_80224AE8:
    // 0x80224AE8: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224AEC: ori         $at, $at, 0x4C57
    ctx->r1 = ctx->r1 | 0X4C57;
    // 0x80224AF0: sltu        $at, $s0, $at
    ctx->r1 = ctx->r16 < ctx->r1 ? 1 : 0;
    // 0x80224AF4: bne         $at, $zero, L_80224B4C
    if (ctx->r1 != 0) {
        // 0x80224AF8: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224B4C;
    }
    // 0x80224AF8: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224AFC: ori         $at, $at, 0x4D44
    ctx->r1 = ctx->r1 | 0X4D44;
    // 0x80224B00: beq         $s0, $at, L_80224BFC
    if (ctx->r16 == ctx->r1) {
        // 0x80224B04: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224BFC;
    }
    // 0x80224B04: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224B08: ori         $at, $at, 0x5351
    ctx->r1 = ctx->r1 | 0X5351;
    // 0x80224B0C: beq         $s0, $at, L_80224BAC
    if (ctx->r16 == ctx->r1) {
        // 0x80224B10: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224BAC;
    }
    // 0x80224B10: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224B14: ori         $at, $at, 0x5449
    ctx->r1 = ctx->r1 | 0X5449;
    // 0x80224B18: beq         $s0, $at, L_80224C1C
    if (ctx->r16 == ctx->r1) {
        // 0x80224B1C: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224C1C;
    }
    // 0x80224B1C: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224B20: ori         $at, $at, 0x5450
    ctx->r1 = ctx->r1 | 0X5450;
    // 0x80224B24: beq         $s0, $at, L_80224C6C
    if (ctx->r16 == ctx->r1) {
        // 0x80224B28: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224C6C;
    }
    // 0x80224B28: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224B2C: ori         $at, $at, 0x5452
    ctx->r1 = ctx->r1 | 0X5452;
    // 0x80224B30: beq         $s0, $at, L_80224BCC
    if (ctx->r16 == ctx->r1) {
        // 0x80224B34: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224BCC;
    }
    // 0x80224B34: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224B38: ori         $at, $at, 0x5458
    ctx->r1 = ctx->r1 | 0X5458;
    // 0x80224B3C: beq         $s0, $at, L_80224C0C
    if (ctx->r16 == ctx->r1) {
        // 0x80224B40: nop
    
            goto L_80224C0C;
    }
    // 0x80224B40: nop

    // 0x80224B44: b           L_80224C78
    // 0x80224B48: nop

        goto L_80224C78;
    // 0x80224B48: nop

L_80224B4C:
    // 0x80224B4C: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224B50: ori         $at, $at, 0x414E
    ctx->r1 = ctx->r1 | 0X414E;
    // 0x80224B54: beq         $s0, $at, L_80224C3C
    if (ctx->r16 == ctx->r1) {
        // 0x80224B58: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224C3C;
    }
    // 0x80224B58: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224B5C: ori         $at, $at, 0x4254
    ctx->r1 = ctx->r1 | 0X4254;
    // 0x80224B60: beq         $s0, $at, L_80224C5C
    if (ctx->r16 == ctx->r1) {
        // 0x80224B64: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224C5C;
    }
    // 0x80224B64: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224B68: ori         $at, $at, 0x4354
    ctx->r1 = ctx->r1 | 0X4354;
    // 0x80224B6C: beq         $s0, $at, L_80224BDC
    if (ctx->r16 == ctx->r1) {
        // 0x80224B70: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224BDC;
    }
    // 0x80224B70: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224B74: ori         $at, $at, 0x454E
    ctx->r1 = ctx->r1 | 0X454E;
    // 0x80224B78: beq         $s0, $at, L_80224BBC
    if (ctx->r16 == ctx->r1) {
        // 0x80224B7C: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224BBC;
    }
    // 0x80224B7C: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224B80: ori         $at, $at, 0x4654
    ctx->r1 = ctx->r1 | 0X4654;
    // 0x80224B84: beq         $s0, $at, L_80224C4C
    if (ctx->r16 == ctx->r1) {
        // 0x80224B88: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224C4C;
    }
    // 0x80224B88: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224B8C: ori         $at, $at, 0x4C54
    ctx->r1 = ctx->r1 | 0X4C54;
    // 0x80224B90: beq         $s0, $at, L_80224C2C
    if (ctx->r16 == ctx->r1) {
        // 0x80224B94: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224C2C;
    }
    // 0x80224B94: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224B98: ori         $at, $at, 0x4C56
    ctx->r1 = ctx->r1 | 0X4C56;
    // 0x80224B9C: beq         $s0, $at, L_80224BEC
    if (ctx->r16 == ctx->r1) {
        // 0x80224BA0: nop
    
            goto L_80224BEC;
    }
    // 0x80224BA0: nop

    // 0x80224BA4: b           L_80224C78
    // 0x80224BA8: nop

        goto L_80224C78;
    // 0x80224BA8: nop

L_80224BAC:
    // 0x80224BAC: jal         0x80228004
    // 0x80224BB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80228004(rdram, ctx);
        goto after_1;
    // 0x80224BB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80224BB4: b           L_80224C78
    // 0x80224BB8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C78;
    // 0x80224BB8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224BBC:
    // 0x80224BBC: jal         0x80227ABC
    // 0x80224BC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80227ABC(rdram, ctx);
        goto after_2;
    // 0x80224BC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80224BC4: b           L_80224C78
    // 0x80224BC8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C78;
    // 0x80224BC8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224BCC:
    // 0x80224BCC: jal         0x80227D6C
    // 0x80224BD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80227D6C(rdram, ctx);
        goto after_3;
    // 0x80224BD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x80224BD4: b           L_80224C78
    // 0x80224BD8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C78;
    // 0x80224BD8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224BDC:
    // 0x80224BDC: jal         0x802279FC
    // 0x80224BE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_802279FC(rdram, ctx);
        goto after_4;
    // 0x80224BE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80224BE4: b           L_80224C78
    // 0x80224BE8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C78;
    // 0x80224BE8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224BEC:
    // 0x80224BEC: jal         0x80227B38
    // 0x80224BF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80227B38(rdram, ctx);
        goto after_5;
    // 0x80224BF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x80224BF4: b           L_80224C78
    // 0x80224BF8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C78;
    // 0x80224BF8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224BFC:
    // 0x80224BFC: jal         0x80227CAC
    // 0x80224C00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80227CAC(rdram, ctx);
        goto after_6;
    // 0x80224C00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x80224C04: b           L_80224C78
    // 0x80224C08: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C78;
    // 0x80224C08: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224C0C:
    // 0x80224C0C: jal         0x80227DE8
    // 0x80224C10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80227DE8(rdram, ctx);
        goto after_7;
    // 0x80224C10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x80224C14: b           L_80224C78
    // 0x80224C18: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C78;
    // 0x80224C18: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224C1C:
    // 0x80224C1C: jal         0x80227E9C
    // 0x80224C20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80227E9C(rdram, ctx);
        goto after_8;
    // 0x80224C20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x80224C24: b           L_80224C78
    // 0x80224C28: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C78;
    // 0x80224C28: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224C2C:
    // 0x80224C2C: jal         0x80227C30
    // 0x80224C30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80227C30(rdram, ctx);
        goto after_9;
    // 0x80224C30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x80224C34: b           L_80224C78
    // 0x80224C38: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C78;
    // 0x80224C38: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224C3C:
    // 0x80224C3C: jal         0x802003C0
    // 0x80224C40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_802003C0(rdram, ctx);
        goto after_10;
    // 0x80224C40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x80224C44: b           L_80224C78
    // 0x80224C48: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C78;
    // 0x80224C48: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224C4C:
    // 0x80224C4C: jal         0x8021E400
    // 0x80224C50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8021E400(rdram, ctx);
        goto after_11;
    // 0x80224C50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x80224C54: b           L_80224C78
    // 0x80224C58: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C78;
    // 0x80224C58: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224C5C:
    // 0x80224C5C: jal         0x80227F50
    // 0x80224C60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80227F50(rdram, ctx);
        goto after_12;
    // 0x80224C60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x80224C64: b           L_80224C78
    // 0x80224C68: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C78;
    // 0x80224C68: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224C6C:
    // 0x80224C6C: jal         0x80227BB4
    // 0x80224C70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80227BB4(rdram, ctx);
        goto after_13;
    // 0x80224C70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x80224C74: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224C78:
    // 0x80224C78: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80224C7C: addiu       $a0, $a0, 0x5F7C
    ctx->r4 = ADD32(ctx->r4, 0X5F7C);
    // 0x80224C80: jal         0x8022B374
    // 0x80224C84: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8022B374(rdram, ctx);
        goto after_14;
    // 0x80224C84: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_14:
    // 0x80224C88: beq         $v0, $zero, L_80224AE8
    if (ctx->r2 == 0) {
        // 0x80224C8C: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_80224AE8;
    }
    // 0x80224C8C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80224C90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80224C94: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80224C98: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80224C9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80224CA0: jr          $ra
    // 0x80224CA4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80224CA4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80205D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205D70: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80205D74: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80205D78: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80205D7C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80205D80: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80205D84: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x80205D88: lw          $t7, -0x4160($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4160);
    // 0x80205D8C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80205D90: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80205D94: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80205D98: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80205D9C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80205DA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80205DA4: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80205DA8: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80205DAC: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80205DB0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80205DB4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80205DB8: addiu       $a1, $a1, 0x29C0
    ctx->r5 = ADD32(ctx->r5, 0X29C0);
    // 0x80205DBC: addiu       $a2, $a2, 0xBEE
    ctx->r6 = ADD32(ctx->r6, 0XBEE);
    // 0x80205DC0: jal         0x80231C58
    // 0x80205DC4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_80231C58(rdram, ctx);
        goto after_0;
    // 0x80205DC4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x80205DC8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80205DCC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80205DD0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80205DD4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80205DD8: bne         $v0, $zero, L_80205DFC
    if (ctx->r2 != 0) {
        // 0x80205DDC: lw          $a3, 0x34($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X34);
            goto L_80205DFC;
    }
    // 0x80205DDC: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80205DE0: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x80205DE4: sh          $a2, 0x2C6($v1)
    MEM_H(0X2C6, ctx->r3) = ctx->r6;
    // 0x80205DE8: sh          $a1, 0x2C4($v1)
    MEM_H(0X2C4, ctx->r3) = ctx->r5;
    // 0x80205DEC: sh          $a3, 0x2C8($v1)
    MEM_H(0X2C8, ctx->r3) = ctx->r7;
    // 0x80205DF0: sh          $v0, 0x2CA($v1)
    MEM_H(0X2CA, ctx->r3) = ctx->r2;
    // 0x80205DF4: jal         0x80222AA8
    // 0x80205DF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80222AA8(rdram, ctx);
        goto after_1;
    // 0x80205DF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
L_80205DFC:
    // 0x80205DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80205E00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80205E04: jr          $ra
    // 0x80205E08: nop

    return;
    // 0x80205E08: nop

;}
RECOMP_FUNC void func_80243B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80243B10: beq         $a2, $zero, L_80243B30
    if (ctx->r6 == 0) {
        // 0x80243B14: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80243B30;
    }
    // 0x80243B14: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80243B18: sllv        $t7, $t6, $a2
    ctx->r15 = S32(ctx->r14 << (ctx->r6 & 31));
    // 0x80243B1C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80243B20: nop

    // 0x80243B24: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80243B28: mul.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = MUL_D(ctx->f12.d, ctx->f6.d);
    // 0x80243B2C: nop

L_80243B30:
    // 0x80243B30: jr          $ra
    // 0x80243B34: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    return;
    // 0x80243B34: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
;}
RECOMP_FUNC void func_80209AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80209AA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80209AA4: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x80209AA8: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x80209AAC: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80209AB0: lwc1        $f22, 0x30($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80209AB4: sdc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X18, ctx->r29);
    // 0x80209AB8: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80209ABC: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x80209AC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80209AC4: bc1fl       L_80209B10
    if (!c1cs) {
        // 0x80209AC8: c.lt.s      $f18, $f20
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f18.fl < ctx->f20.fl;
            goto L_80209B10;
    }
    goto skip_0;
    // 0x80209AC8: c.lt.s      $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f18.fl < ctx->f20.fl;
    skip_0:
    // 0x80209ACC: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80209AD0: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80209AD4: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80209AD8: c.lt.s      $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f18.fl < ctx->f22.fl;
    // 0x80209ADC: nop

    // 0x80209AE0: bc1fl       L_80209B00
    if (!c1cs) {
        // 0x80209AE4: mov.s       $f0, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
            goto L_80209B00;
    }
    goto skip_1;
    // 0x80209AE4: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    skip_1:
    // 0x80209AE8: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80209AEC: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    // 0x80209AF0: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80209AF4: b           L_80209B04
    // 0x80209AF8: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
        goto L_80209B04;
    // 0x80209AF8: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x80209AFC: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
L_80209B00:
    // 0x80209B00: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
L_80209B04:
    // 0x80209B04: b           L_80209B44
    // 0x80209B08: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
        goto L_80209B44;
    // 0x80209B08: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80209B0C: c.lt.s      $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f18.fl < ctx->f20.fl;
L_80209B10:
    // 0x80209B10: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80209B14: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80209B18: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80209B1C: bc1fl       L_80209B40
    if (!c1cs) {
        // 0x80209B20: mov.s       $f0, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
            goto L_80209B40;
    }
    goto skip_2;
    // 0x80209B20: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    skip_2:
    // 0x80209B24: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80209B28: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x80209B2C: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80209B30: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80209B34: b           L_80209B44
    // 0x80209B38: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_80209B44;
    // 0x80209B38: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x80209B3C: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
L_80209B40:
    // 0x80209B40: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
L_80209B44:
    // 0x80209B44: beq         $a0, $at, L_8020A888
    if (ctx->r4 == ctx->r1) {
        // 0x80209B48: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8020A888;
    }
    // 0x80209B48: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80209B4C: beq         $a0, $at, L_80209E90
    if (ctx->r4 == ctx->r1) {
        // 0x80209B50: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80209E90;
    }
    // 0x80209B50: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80209B54: bne         $a0, $at, L_8020B4EC
    if (ctx->r4 != ctx->r1) {
        // 0x80209B58: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020B4EC;
    }
    // 0x80209B58: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80209B5C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80209B60: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
    // 0x80209B64: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80209B68: sub.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80209B6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80209B70: sub.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x80209B74: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80209B78: sub.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x80209B7C: mul.s       $f22, $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f6.fl);
    // 0x80209B80: nop

    // 0x80209B84: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80209B88: nop

    // 0x80209B8C: mul.s       $f20, $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x80209B90: nop

    // 0x80209B94: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80209B98: nop

    // 0x80209B9C: mul.s       $f18, $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x80209BA0: bgez        $a2, L_80209BB0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80209BA4: sra         $v1, $a2, 1
        ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
            goto L_80209BB0;
    }
    // 0x80209BA4: sra         $v1, $a2, 1
    ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
    // 0x80209BA8: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x80209BAC: sra         $v1, $at, 1
    ctx->r3 = S32(SIGNED(ctx->r1) >> 1);
L_80209BB0:
    // 0x80209BB0: blez        $v1, L_8020B4EC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80209BB4: andi        $a0, $v1, 0x1
        ctx->r4 = ctx->r3 & 0X1;
            goto L_8020B4EC;
    }
    // 0x80209BB4: andi        $a0, $v1, 0x1
    ctx->r4 = ctx->r3 & 0X1;
    // 0x80209BB8: beql        $a0, $zero, L_80209C54
    if (ctx->r4 == 0) {
        // 0x80209BBC: sll         $t2, $v1, 1
        ctx->r10 = S32(ctx->r3 << 1);
            goto L_80209C54;
    }
    goto skip_3;
    // 0x80209BBC: sll         $t2, $v1, 1
    ctx->r10 = S32(ctx->r3 << 1);
    skip_3:
    // 0x80209BC0: lhu         $a1, 0x0($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X0);
    // 0x80209BC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80209BC8: andi        $t6, $a1, 0xF800
    ctx->r14 = ctx->r5 & 0XF800;
    // 0x80209BCC: sra         $t7, $t6, 11
    ctx->r15 = S32(SIGNED(ctx->r14) >> 11);
    // 0x80209BD0: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80209BD4: andi        $t8, $a1, 0x7C0
    ctx->r24 = ctx->r5 & 0X7C0;
    // 0x80209BD8: sra         $t9, $t8, 6
    ctx->r25 = S32(SIGNED(ctx->r24) >> 6);
    // 0x80209BDC: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80209BE0: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80209BE4: andi        $t2, $a1, 0x3E
    ctx->r10 = ctx->r5 & 0X3E;
    // 0x80209BE8: sra         $t3, $t2, 1
    ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
    // 0x80209BEC: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80209BF0: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80209BF4: mul.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80209BF8: andi        $t4, $a1, 0x1
    ctx->r12 = ctx->r5 & 0X1;
    // 0x80209BFC: cvt.s.w     $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    ctx->f24.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80209C00: mul.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x80209C04: add.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x80209C08: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x80209C0C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80209C10: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80209C14: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x80209C18: mul.s       $f10, $f16, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x80209C1C: sll         $t7, $t6, 11
    ctx->r15 = S32(ctx->r14 << 11);
    // 0x80209C20: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x80209C24: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x80209C28: sll         $t3, $t2, 6
    ctx->r11 = S32(ctx->r10 << 6);
    // 0x80209C2C: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80209C30: or          $t5, $t8, $t3
    ctx->r13 = ctx->r24 | ctx->r11;
    // 0x80209C34: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80209C38: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x80209C3C: nop

    // 0x80209C40: sll         $t7, $t4, 1
    ctx->r15 = S32(ctx->r12 << 1);
    // 0x80209C44: or          $t9, $t5, $t7
    ctx->r25 = ctx->r13 | ctx->r15;
    // 0x80209C48: beq         $v0, $v1, L_8020B4EC
    if (ctx->r2 == ctx->r3) {
        // 0x80209C4C: sh          $t9, 0x0($a3)
        MEM_H(0X0, ctx->r7) = ctx->r25;
            goto L_8020B4EC;
    }
    // 0x80209C4C: sh          $t9, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r25;
    // 0x80209C50: sll         $t2, $v1, 1
    ctx->r10 = S32(ctx->r3 << 1);
L_80209C54:
    // 0x80209C54: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x80209C58: addu        $a1, $a3, $t8
    ctx->r5 = ADD32(ctx->r7, ctx->r24);
    // 0x80209C5C: addu        $a0, $t2, $a3
    ctx->r4 = ADD32(ctx->r10, ctx->r7);
    // 0x80209C60: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x80209C64: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80209C68: andi        $t3, $a2, 0xF800
    ctx->r11 = ctx->r6 & 0XF800;
    // 0x80209C6C: beq         $a1, $a0, L_80209D88
    if (ctx->r5 == ctx->r4) {
        // 0x80209C70: sra         $t6, $t3, 11
        ctx->r14 = S32(SIGNED(ctx->r11) >> 11);
            goto L_80209D88;
    }
    // 0x80209C70: sra         $t6, $t3, 11
    ctx->r14 = S32(SIGNED(ctx->r11) >> 11);
L_80209C74:
    // 0x80209C74: mtc1        $t6, $f24
    ctx->f24.u32l = ctx->r14;
    // 0x80209C78: lhu         $v0, -0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, -0X2);
    // 0x80209C7C: andi        $t4, $a2, 0x7C0
    ctx->r12 = ctx->r6 & 0X7C0;
    // 0x80209C80: cvt.s.w     $f24, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    ctx->f24.fl = CVT_S_W(ctx->f24.u32l);
    // 0x80209C84: sra         $t5, $t4, 6
    ctx->r13 = S32(SIGNED(ctx->r12) >> 6);
    // 0x80209C88: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80209C8C: andi        $t7, $a2, 0x3E
    ctx->r15 = ctx->r6 & 0X3E;
    // 0x80209C90: sra         $t9, $t7, 1
    ctx->r25 = S32(SIGNED(ctx->r15) >> 1);
    // 0x80209C94: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80209C98: mul.s       $f24, $f14, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f24.fl = MUL_S(ctx->f14.fl, ctx->f24.fl);
    // 0x80209C9C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80209CA0: andi        $t2, $a2, 0x1
    ctx->r10 = ctx->r6 & 0X1;
    // 0x80209CA4: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x80209CA8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80209CAC: mul.s       $f10, $f12, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80209CB0: add.s       $f24, $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f22.fl;
    // 0x80209CB4: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80209CB8: trunc.w.s   $f24, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    ctx->f24.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x80209CBC: mul.s       $f8, $f16, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x80209CC0: add.s       $f10, $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x80209CC4: mfc1        $t3, $f24
    ctx->r11 = (int32_t)ctx->f24.u32l;
    // 0x80209CC8: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80209CCC: sll         $t6, $t3, 11
    ctx->r14 = S32(ctx->r11 << 11);
    // 0x80209CD0: or          $t4, $t2, $t6
    ctx->r12 = ctx->r10 | ctx->r14;
    // 0x80209CD4: add.s       $f8, $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80209CD8: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80209CDC: trunc.w.s   $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80209CE0: sll         $t9, $t7, 6
    ctx->r25 = S32(ctx->r15 << 6);
    // 0x80209CE4: or          $t8, $t4, $t9
    ctx->r24 = ctx->r12 | ctx->r25;
    // 0x80209CE8: andi        $t7, $v0, 0xF800
    ctx->r15 = ctx->r2 & 0XF800;
    // 0x80209CEC: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x80209CF0: sra         $t4, $t7, 11
    ctx->r12 = S32(SIGNED(ctx->r15) >> 11);
    // 0x80209CF4: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80209CF8: sll         $t6, $t2, 1
    ctx->r14 = S32(ctx->r10 << 1);
    // 0x80209CFC: or          $t5, $t8, $t6
    ctx->r13 = ctx->r24 | ctx->r14;
    // 0x80209D00: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80209D04: andi        $t9, $v0, 0x7C0
    ctx->r25 = ctx->r2 & 0X7C0;
    // 0x80209D08: sra         $t3, $t9, 6
    ctx->r11 = S32(SIGNED(ctx->r25) >> 6);
    // 0x80209D0C: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80209D10: andi        $t2, $v0, 0x3E
    ctx->r10 = ctx->r2 & 0X3E;
    // 0x80209D14: sra         $t8, $t2, 1
    ctx->r24 = S32(SIGNED(ctx->r10) >> 1);
    // 0x80209D18: mul.s       $f8, $f14, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x80209D1C: mtc1        $t8, $f24
    ctx->f24.u32l = ctx->r24;
    // 0x80209D20: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80209D24: sh          $t5, -0x8($a1)
    MEM_H(-0X8, ctx->r5) = ctx->r13;
    // 0x80209D28: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80209D2C: cvt.s.w     $f24, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    ctx->f24.fl = CVT_S_W(ctx->f24.u32l);
    // 0x80209D30: mul.s       $f10, $f12, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80209D34: add.s       $f8, $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x80209D38: add.s       $f10, $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x80209D3C: trunc.w.s   $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80209D40: mul.s       $f24, $f16, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f24.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x80209D44: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80209D48: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80209D4C: sll         $t4, $t7, 11
    ctx->r12 = S32(ctx->r15 << 11);
    // 0x80209D50: or          $t9, $t6, $t4
    ctx->r25 = ctx->r14 | ctx->r12;
    // 0x80209D54: add.s       $f24, $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f18.fl;
    // 0x80209D58: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x80209D5C: trunc.w.s   $f24, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    ctx->f24.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x80209D60: sll         $t8, $t2, 6
    ctx->r24 = S32(ctx->r10 << 6);
    // 0x80209D64: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x80209D68: mfc1        $t6, $f24
    ctx->r14 = (int32_t)ctx->f24.u32l;
    // 0x80209D6C: nop

    // 0x80209D70: sll         $t4, $t6, 1
    ctx->r12 = S32(ctx->r14 << 1);
    // 0x80209D74: or          $t3, $t5, $t4
    ctx->r11 = ctx->r13 | ctx->r12;
    // 0x80209D78: sh          $t3, -0x6($a1)
    MEM_H(-0X6, ctx->r5) = ctx->r11;
    // 0x80209D7C: andi        $t3, $a2, 0xF800
    ctx->r11 = ctx->r6 & 0XF800;
    // 0x80209D80: bne         $a1, $a0, L_80209C74
    if (ctx->r5 != ctx->r4) {
        // 0x80209D84: sra         $t6, $t3, 11
        ctx->r14 = S32(SIGNED(ctx->r11) >> 11);
            goto L_80209C74;
    }
    // 0x80209D84: sra         $t6, $t3, 11
    ctx->r14 = S32(SIGNED(ctx->r11) >> 11);
L_80209D88:
    // 0x80209D88: mtc1        $t6, $f24
    ctx->f24.u32l = ctx->r14;
    // 0x80209D8C: andi        $t4, $a2, 0x7C0
    ctx->r12 = ctx->r6 & 0X7C0;
    // 0x80209D90: sra         $t5, $t4, 6
    ctx->r13 = S32(SIGNED(ctx->r12) >> 6);
    // 0x80209D94: cvt.s.w     $f24, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    ctx->f24.fl = CVT_S_W(ctx->f24.u32l);
    // 0x80209D98: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80209D9C: andi        $t7, $a2, 0x3E
    ctx->r15 = ctx->r6 & 0X3E;
    // 0x80209DA0: sra         $t9, $t7, 1
    ctx->r25 = S32(SIGNED(ctx->r15) >> 1);
    // 0x80209DA4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80209DA8: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80209DAC: mul.s       $f24, $f14, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f24.fl = MUL_S(ctx->f14.fl, ctx->f24.fl);
    // 0x80209DB0: lhu         $v0, -0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, -0X2);
    // 0x80209DB4: andi        $t2, $a2, 0x1
    ctx->r10 = ctx->r6 & 0X1;
    // 0x80209DB8: mul.s       $f10, $f12, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80209DBC: add.s       $f24, $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f22.fl;
    // 0x80209DC0: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80209DC4: add.s       $f10, $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x80209DC8: mul.s       $f8, $f16, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x80209DCC: trunc.w.s   $f24, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    ctx->f24.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x80209DD0: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80209DD4: mfc1        $t3, $f24
    ctx->r11 = (int32_t)ctx->f24.u32l;
    // 0x80209DD8: add.s       $f8, $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80209DDC: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80209DE0: sll         $t6, $t3, 11
    ctx->r14 = S32(ctx->r11 << 11);
    // 0x80209DE4: or          $t4, $t2, $t6
    ctx->r12 = ctx->r10 | ctx->r14;
    // 0x80209DE8: trunc.w.s   $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80209DEC: sll         $t9, $t7, 6
    ctx->r25 = S32(ctx->r15 << 6);
    // 0x80209DF0: or          $t8, $t4, $t9
    ctx->r24 = ctx->r12 | ctx->r25;
    // 0x80209DF4: andi        $t7, $v0, 0xF800
    ctx->r15 = ctx->r2 & 0XF800;
    // 0x80209DF8: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x80209DFC: sra         $t4, $t7, 11
    ctx->r12 = S32(SIGNED(ctx->r15) >> 11);
    // 0x80209E00: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80209E04: andi        $t9, $v0, 0x7C0
    ctx->r25 = ctx->r2 & 0X7C0;
    // 0x80209E08: sra         $t3, $t9, 6
    ctx->r11 = S32(SIGNED(ctx->r25) >> 6);
    // 0x80209E0C: sll         $t6, $t2, 1
    ctx->r14 = S32(ctx->r10 << 1);
    // 0x80209E10: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80209E14: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80209E18: or          $t5, $t8, $t6
    ctx->r13 = ctx->r24 | ctx->r14;
    // 0x80209E1C: andi        $t2, $v0, 0x3E
    ctx->r10 = ctx->r2 & 0X3E;
    // 0x80209E20: sra         $t8, $t2, 1
    ctx->r24 = S32(SIGNED(ctx->r10) >> 1);
    // 0x80209E24: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80209E28: mtc1        $t8, $f24
    ctx->f24.u32l = ctx->r24;
    // 0x80209E2C: mul.s       $f8, $f14, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x80209E30: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80209E34: sh          $t5, -0x4($a1)
    MEM_H(-0X4, ctx->r5) = ctx->r13;
    // 0x80209E38: mul.s       $f10, $f12, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80209E3C: add.s       $f8, $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x80209E40: cvt.s.w     $f24, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    ctx->f24.fl = CVT_S_W(ctx->f24.u32l);
    // 0x80209E44: trunc.w.s   $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80209E48: mul.s       $f24, $f16, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f24.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x80209E4C: add.s       $f10, $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x80209E50: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80209E54: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80209E58: sll         $t4, $t7, 11
    ctx->r12 = S32(ctx->r15 << 11);
    // 0x80209E5C: or          $t9, $t6, $t4
    ctx->r25 = ctx->r14 | ctx->r12;
    // 0x80209E60: add.s       $f24, $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f18.fl;
    // 0x80209E64: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x80209E68: trunc.w.s   $f24, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    ctx->f24.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x80209E6C: sll         $t8, $t2, 6
    ctx->r24 = S32(ctx->r10 << 6);
    // 0x80209E70: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x80209E74: mfc1        $t6, $f24
    ctx->r14 = (int32_t)ctx->f24.u32l;
    // 0x80209E78: nop

    // 0x80209E7C: sll         $t4, $t6, 1
    ctx->r12 = S32(ctx->r14 << 1);
    // 0x80209E80: or          $t3, $t5, $t4
    ctx->r11 = ctx->r13 | ctx->r12;
    // 0x80209E84: sh          $t3, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r11;
    // 0x80209E88: b           L_8020B4F0
    // 0x80209E8C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
        goto L_8020B4F0;
    // 0x80209E8C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_80209E90:
    // 0x80209E90: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80209E94: beq         $a1, $at, L_80209EB4
    if (ctx->r5 == ctx->r1) {
        // 0x80209E98: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_80209EB4;
    }
    // 0x80209E98: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80209E9C: beq         $a1, $at, L_8020A348
    if (ctx->r5 == ctx->r1) {
        // 0x80209EA0: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8020A348;
    }
    // 0x80209EA0: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80209EA4: beql        $a1, $at, L_8020A5E0
    if (ctx->r5 == ctx->r1) {
        // 0x80209EA8: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020A5E0;
    }
    goto skip_4;
    // 0x80209EA8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_4:
    // 0x80209EAC: b           L_8020B4F0
    // 0x80209EB0: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
        goto L_8020B4F0;
    // 0x80209EB0: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_80209EB4:
    // 0x80209EB4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80209EB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80209EBC: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x80209EC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80209EC4: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x80209EC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80209ECC: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x80209ED0: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80209ED4: nop

    // 0x80209ED8: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80209EDC: blez        $a2, L_8020B4EC
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80209EE0: nop
    
            goto L_8020B4EC;
    }
    // 0x80209EE0: nop

    // 0x80209EE4: beq         $a1, $zero, L_80209FF0
    if (ctx->r5 == 0) {
        // 0x80209EE8: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_80209FF0;
    }
    // 0x80209EE8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80209EEC: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x80209EF0: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x80209EF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80209EF8: andi        $t2, $a1, 0xE
    ctx->r10 = ctx->r5 & 0XE;
    // 0x80209EFC: sra         $t9, $t2, 1
    ctx->r25 = S32(SIGNED(ctx->r10) >> 1);
    // 0x80209F00: mtc1        $t9, $f22
    ctx->f22.u32l = ctx->r25;
    // 0x80209F04: nop

    // 0x80209F08: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x80209F0C: mul.s       $f24, $f2, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x80209F10: beql        $v1, $v0, L_80209F98
    if (ctx->r3 == ctx->r2) {
        // 0x80209F14: add.s       $f22, $f24, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
            goto L_80209F98;
    }
    goto skip_5;
    // 0x80209F14: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
    skip_5:
    // 0x80209F18: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
L_80209F1C:
    // 0x80209F1C: andi        $t8, $a1, 0xF1
    ctx->r24 = ctx->r5 & 0XF1;
    // 0x80209F20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80209F24: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80209F28: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x80209F2C: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x80209F30: nop

    // 0x80209F34: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x80209F38: or          $a1, $t8, $t5
    ctx->r5 = ctx->r24 | ctx->r13;
    // 0x80209F3C: andi        $t3, $a1, 0xE0
    ctx->r11 = ctx->r5 & 0XE0;
    // 0x80209F40: sra         $t2, $t3, 5
    ctx->r10 = S32(SIGNED(ctx->r11) >> 5);
    // 0x80209F44: mtc1        $t2, $f22
    ctx->f22.u32l = ctx->r10;
    // 0x80209F48: sb          $a1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r5;
    // 0x80209F4C: andi        $t9, $a1, 0x1F
    ctx->r25 = ctx->r5 & 0X1F;
    // 0x80209F50: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x80209F54: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x80209F58: andi        $t2, $a1, 0xE
    ctx->r10 = ctx->r5 & 0XE;
    // 0x80209F5C: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x80209F60: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x80209F64: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x80209F68: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x80209F6C: nop

    // 0x80209F70: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x80209F74: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x80209F78: sra         $t9, $t2, 1
    ctx->r25 = S32(SIGNED(ctx->r10) >> 1);
    // 0x80209F7C: mtc1        $t9, $f22
    ctx->f22.u32l = ctx->r25;
    // 0x80209F80: sb          $t5, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r13;
    // 0x80209F84: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x80209F88: mul.s       $f24, $f2, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x80209F8C: bnel        $v1, $v0, L_80209F1C
    if (ctx->r3 != ctx->r2) {
        // 0x80209F90: add.s       $f22, $f24, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
            goto L_80209F1C;
    }
    goto skip_6;
    // 0x80209F90: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
    skip_6:
    // 0x80209F94: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
L_80209F98:
    // 0x80209F98: andi        $t8, $a1, 0xF1
    ctx->r24 = ctx->r5 & 0XF1;
    // 0x80209F9C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80209FA0: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x80209FA4: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x80209FA8: nop

    // 0x80209FAC: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x80209FB0: or          $a1, $t8, $t5
    ctx->r5 = ctx->r24 | ctx->r13;
    // 0x80209FB4: andi        $t3, $a1, 0xE0
    ctx->r11 = ctx->r5 & 0XE0;
    // 0x80209FB8: sra         $t2, $t3, 5
    ctx->r10 = S32(SIGNED(ctx->r11) >> 5);
    // 0x80209FBC: mtc1        $t2, $f22
    ctx->f22.u32l = ctx->r10;
    // 0x80209FC0: andi        $t9, $a1, 0x1F
    ctx->r25 = ctx->r5 & 0X1F;
    // 0x80209FC4: sb          $a1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r5;
    // 0x80209FC8: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x80209FCC: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x80209FD0: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x80209FD4: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x80209FD8: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x80209FDC: nop

    // 0x80209FE0: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x80209FE4: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x80209FE8: sb          $t5, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r13;
    // 0x80209FEC: beq         $v0, $a2, L_8020B4EC
    if (ctx->r2 == ctx->r6) {
        // 0x80209FF0: addu        $a0, $a3, $v0
        ctx->r4 = ADD32(ctx->r7, ctx->r2);
            goto L_8020B4EC;
    }
L_80209FF0:
    // 0x80209FF0: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
    // 0x80209FF4: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x80209FF8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80209FFC: andi        $t4, $a1, 0xE
    ctx->r12 = ctx->r5 & 0XE;
    // 0x8020A000: sra         $t3, $t4, 1
    ctx->r11 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020A004: mtc1        $t3, $f20
    ctx->f20.u32l = ctx->r11;
    // 0x8020A008: nop

    // 0x8020A00C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A010: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A014: beq         $v0, $a2, L_8020A1C0
    if (ctx->r2 == ctx->r6) {
        // 0x8020A018: add.s       $f24, $f20, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f20.fl + ctx->f0.fl;
            goto L_8020A1C0;
    }
    // 0x8020A018: add.s       $f24, $f20, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f20.fl + ctx->f0.fl;
L_8020A01C:
    // 0x8020A01C: trunc.w.s   $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x8020A020: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8020A024: andi        $t2, $a1, 0xF1
    ctx->r10 = ctx->r5 & 0XF1;
    // 0x8020A028: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020A02C: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A030: andi        $t8, $v1, 0xE
    ctx->r24 = ctx->r3 & 0XE;
    // 0x8020A034: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020A038: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x8020A03C: or          $a1, $t2, $t9
    ctx->r5 = ctx->r10 | ctx->r25;
    // 0x8020A040: andi        $t5, $a1, 0xE0
    ctx->r13 = ctx->r5 & 0XE0;
    // 0x8020A044: sra         $t4, $t5, 5
    ctx->r12 = S32(SIGNED(ctx->r13) >> 5);
    // 0x8020A048: mtc1        $t4, $f22
    ctx->f22.u32l = ctx->r12;
    // 0x8020A04C: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8020A050: andi        $t3, $a1, 0x1F
    ctx->r11 = ctx->r5 & 0X1F;
    // 0x8020A054: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A058: sra         $t5, $t8, 1
    ctx->r13 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8020A05C: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020A060: andi        $t4, $v1, 0xF1
    ctx->r12 = ctx->r3 & 0XF1;
    // 0x8020A064: lbu         $a1, 0x4($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X4);
    // 0x8020A068: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A06C: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A070: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020A074: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020A078: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A07C: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020A080: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A084: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A088: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A08C: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A090: sll         $t2, $t6, 5
    ctx->r10 = S32(ctx->r14 << 5);
    // 0x8020A094: or          $t9, $t3, $t2
    ctx->r25 = ctx->r11 | ctx->r10;
    // 0x8020A098: sb          $t9, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r25;
    // 0x8020A09C: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020A0A0: andi        $t2, $t0, 0xE
    ctx->r10 = ctx->r8 & 0XE;
    // 0x8020A0A4: sll         $t3, $t6, 1
    ctx->r11 = S32(ctx->r14 << 1);
    // 0x8020A0A8: or          $v1, $t4, $t3
    ctx->r3 = ctx->r12 | ctx->r11;
    // 0x8020A0AC: andi        $t9, $v1, 0xE0
    ctx->r25 = ctx->r3 & 0XE0;
    // 0x8020A0B0: sra         $t8, $t9, 5
    ctx->r24 = S32(SIGNED(ctx->r25) >> 5);
    // 0x8020A0B4: mtc1        $t8, $f20
    ctx->f20.u32l = ctx->r24;
    // 0x8020A0B8: sb          $v1, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r3;
    // 0x8020A0BC: andi        $t5, $v1, 0x1F
    ctx->r13 = ctx->r3 & 0X1F;
    // 0x8020A0C0: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A0C4: sra         $t9, $t2, 1
    ctx->r25 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8020A0C8: mtc1        $t9, $f22
    ctx->f22.u32l = ctx->r25;
    // 0x8020A0CC: andi        $t8, $t0, 0xF1
    ctx->r24 = ctx->r8 & 0XF1;
    // 0x8020A0D0: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A0D4: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A0D8: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A0DC: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A0E0: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A0E4: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020A0E8: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020A0EC: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A0F0: sll         $t4, $t6, 5
    ctx->r12 = S32(ctx->r14 << 5);
    // 0x8020A0F4: or          $t3, $t5, $t4
    ctx->r11 = ctx->r13 | ctx->r12;
    // 0x8020A0F8: sb          $t3, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r11;
    // 0x8020A0FC: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A100: andi        $t4, $t1, 0xE
    ctx->r12 = ctx->r9 & 0XE;
    // 0x8020A104: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x8020A108: or          $t0, $t8, $t5
    ctx->r8 = ctx->r24 | ctx->r13;
    // 0x8020A10C: andi        $t3, $t0, 0xE0
    ctx->r11 = ctx->r8 & 0XE0;
    // 0x8020A110: sra         $t2, $t3, 5
    ctx->r10 = S32(SIGNED(ctx->r11) >> 5);
    // 0x8020A114: mtc1        $t2, $f22
    ctx->f22.u32l = ctx->r10;
    // 0x8020A118: sb          $t0, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r8;
    // 0x8020A11C: sra         $t3, $t4, 1
    ctx->r11 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020A120: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A124: mtc1        $t3, $f20
    ctx->f20.u32l = ctx->r11;
    // 0x8020A128: andi        $t9, $t0, 0x1F
    ctx->r25 = ctx->r8 & 0X1F;
    // 0x8020A12C: andi        $t2, $t1, 0xF1
    ctx->r10 = ctx->r9 & 0XF1;
    // 0x8020A130: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A134: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A138: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020A13C: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A140: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A144: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A148: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A14C: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A150: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x8020A154: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x8020A158: sb          $t5, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r13;
    // 0x8020A15C: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020A160: nop

    // 0x8020A164: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x8020A168: or          $t1, $t2, $t9
    ctx->r9 = ctx->r10 | ctx->r25;
    // 0x8020A16C: andi        $t5, $t1, 0xE0
    ctx->r13 = ctx->r9 & 0XE0;
    // 0x8020A170: sra         $t4, $t5, 5
    ctx->r12 = S32(SIGNED(ctx->r13) >> 5);
    // 0x8020A174: mtc1        $t4, $f20
    ctx->f20.u32l = ctx->r12;
    // 0x8020A178: andi        $t3, $t1, 0x1F
    ctx->r11 = ctx->r9 & 0X1F;
    // 0x8020A17C: andi        $t4, $a1, 0xE
    ctx->r12 = ctx->r5 & 0XE;
    // 0x8020A180: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A184: sb          $t1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r9;
    // 0x8020A188: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A18C: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A190: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A194: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020A198: nop

    // 0x8020A19C: sll         $t2, $t6, 5
    ctx->r10 = S32(ctx->r14 << 5);
    // 0x8020A1A0: or          $t9, $t3, $t2
    ctx->r25 = ctx->r11 | ctx->r10;
    // 0x8020A1A4: sra         $t3, $t4, 1
    ctx->r11 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020A1A8: mtc1        $t3, $f20
    ctx->f20.u32l = ctx->r11;
    // 0x8020A1AC: sb          $t9, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r25;
    // 0x8020A1B0: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A1B4: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A1B8: bne         $v0, $a2, L_8020A01C
    if (ctx->r2 != ctx->r6) {
        // 0x8020A1BC: add.s       $f24, $f20, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f20.fl + ctx->f0.fl;
            goto L_8020A01C;
    }
    // 0x8020A1BC: add.s       $f24, $f20, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f20.fl + ctx->f0.fl;
L_8020A1C0:
    // 0x8020A1C0: trunc.w.s   $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x8020A1C4: andi        $t2, $a1, 0xF1
    ctx->r10 = ctx->r5 & 0XF1;
    // 0x8020A1C8: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8020A1CC: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020A1D0: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A1D4: andi        $t8, $v1, 0xE
    ctx->r24 = ctx->r3 & 0XE;
    // 0x8020A1D8: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020A1DC: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x8020A1E0: or          $a1, $t2, $t9
    ctx->r5 = ctx->r10 | ctx->r25;
    // 0x8020A1E4: andi        $t5, $a1, 0xE0
    ctx->r13 = ctx->r5 & 0XE0;
    // 0x8020A1E8: sra         $t4, $t5, 5
    ctx->r12 = S32(SIGNED(ctx->r13) >> 5);
    // 0x8020A1EC: mtc1        $t4, $f22
    ctx->f22.u32l = ctx->r12;
    // 0x8020A1F0: sra         $t5, $t8, 1
    ctx->r13 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8020A1F4: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020A1F8: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A1FC: andi        $t3, $a1, 0x1F
    ctx->r11 = ctx->r5 & 0X1F;
    // 0x8020A200: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8020A204: andi        $t4, $v1, 0xF1
    ctx->r12 = ctx->r3 & 0XF1;
    // 0x8020A208: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020A20C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A210: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A214: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020A218: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A21C: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A220: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A224: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A228: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A22C: sll         $t2, $t6, 5
    ctx->r10 = S32(ctx->r14 << 5);
    // 0x8020A230: or          $t9, $t3, $t2
    ctx->r25 = ctx->r11 | ctx->r10;
    // 0x8020A234: sb          $t9, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r25;
    // 0x8020A238: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020A23C: andi        $t2, $t0, 0xE
    ctx->r10 = ctx->r8 & 0XE;
    // 0x8020A240: sll         $t3, $t6, 1
    ctx->r11 = S32(ctx->r14 << 1);
    // 0x8020A244: or          $v1, $t4, $t3
    ctx->r3 = ctx->r12 | ctx->r11;
    // 0x8020A248: andi        $t9, $v1, 0xE0
    ctx->r25 = ctx->r3 & 0XE0;
    // 0x8020A24C: sra         $t8, $t9, 5
    ctx->r24 = S32(SIGNED(ctx->r25) >> 5);
    // 0x8020A250: mtc1        $t8, $f20
    ctx->f20.u32l = ctx->r24;
    // 0x8020A254: sra         $t9, $t2, 1
    ctx->r25 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8020A258: mtc1        $t9, $f22
    ctx->f22.u32l = ctx->r25;
    // 0x8020A25C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A260: andi        $t5, $v1, 0x1F
    ctx->r13 = ctx->r3 & 0X1F;
    // 0x8020A264: sb          $v1, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r3;
    // 0x8020A268: andi        $t8, $t0, 0xF1
    ctx->r24 = ctx->r8 & 0XF1;
    // 0x8020A26C: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A270: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A274: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A278: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A27C: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A280: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020A284: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020A288: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A28C: sll         $t4, $t6, 5
    ctx->r12 = S32(ctx->r14 << 5);
    // 0x8020A290: or          $t3, $t5, $t4
    ctx->r11 = ctx->r13 | ctx->r12;
    // 0x8020A294: sb          $t3, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r11;
    // 0x8020A298: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A29C: andi        $t4, $t1, 0xE
    ctx->r12 = ctx->r9 & 0XE;
    // 0x8020A2A0: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x8020A2A4: or          $t0, $t8, $t5
    ctx->r8 = ctx->r24 | ctx->r13;
    // 0x8020A2A8: andi        $t3, $t0, 0xE0
    ctx->r11 = ctx->r8 & 0XE0;
    // 0x8020A2AC: sra         $t2, $t3, 5
    ctx->r10 = S32(SIGNED(ctx->r11) >> 5);
    // 0x8020A2B0: mtc1        $t2, $f22
    ctx->f22.u32l = ctx->r10;
    // 0x8020A2B4: sra         $t3, $t4, 1
    ctx->r11 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020A2B8: mtc1        $t3, $f20
    ctx->f20.u32l = ctx->r11;
    // 0x8020A2BC: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A2C0: andi        $t9, $t0, 0x1F
    ctx->r25 = ctx->r8 & 0X1F;
    // 0x8020A2C4: sb          $t0, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r8;
    // 0x8020A2C8: andi        $t2, $t1, 0xF1
    ctx->r10 = ctx->r9 & 0XF1;
    // 0x8020A2CC: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A2D0: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A2D4: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020A2D8: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A2DC: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A2E0: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A2E4: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A2E8: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A2EC: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x8020A2F0: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x8020A2F4: sb          $t5, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r13;
    // 0x8020A2F8: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020A2FC: nop

    // 0x8020A300: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x8020A304: or          $t1, $t2, $t9
    ctx->r9 = ctx->r10 | ctx->r25;
    // 0x8020A308: andi        $t5, $t1, 0xE0
    ctx->r13 = ctx->r9 & 0XE0;
    // 0x8020A30C: sra         $t4, $t5, 5
    ctx->r12 = S32(SIGNED(ctx->r13) >> 5);
    // 0x8020A310: mtc1        $t4, $f20
    ctx->f20.u32l = ctx->r12;
    // 0x8020A314: andi        $t3, $t1, 0x1F
    ctx->r11 = ctx->r9 & 0X1F;
    // 0x8020A318: sb          $t1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r9;
    // 0x8020A31C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A320: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A324: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A328: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A32C: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020A330: nop

    // 0x8020A334: sll         $t2, $t6, 5
    ctx->r10 = S32(ctx->r14 << 5);
    // 0x8020A338: or          $t9, $t3, $t2
    ctx->r25 = ctx->r11 | ctx->r10;
    // 0x8020A33C: sb          $t9, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r25;
    // 0x8020A340: b           L_8020B4F0
    // 0x8020A344: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
        goto L_8020B4F0;
    // 0x8020A344: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_8020A348:
    // 0x8020A348: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020A34C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020A350: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8020A354: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020A358: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x8020A35C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020A360: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x8020A364: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8020A368: nop

    // 0x8020A36C: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8020A370: blez        $a2, L_8020B4EC
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8020A374: nop
    
            goto L_8020B4EC;
    }
    // 0x8020A374: nop

    // 0x8020A378: beq         $a1, $zero, L_8020A418
    if (ctx->r5 == 0) {
        // 0x8020A37C: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8020A418;
    }
    // 0x8020A37C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020A380: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8020A384: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020A388: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020A38C: andi        $t8, $a1, 0xF0
    ctx->r24 = ctx->r5 & 0XF0;
    // 0x8020A390: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A394: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020A398: nop

    // 0x8020A39C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A3A0: mul.s       $f24, $f2, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A3A4: beql        $v1, $v0, L_8020A3F4
    if (ctx->r3 == ctx->r2) {
        // 0x8020A3A8: add.s       $f22, $f24, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
            goto L_8020A3F4;
    }
    goto skip_7;
    // 0x8020A3A8: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
    skip_7:
    // 0x8020A3AC: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
L_8020A3B0:
    // 0x8020A3B0: andi        $t4, $a1, 0xF
    ctx->r12 = ctx->r5 & 0XF;
    // 0x8020A3B4: lbu         $a1, 0x1($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X1);
    // 0x8020A3B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020A3BC: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A3C0: andi        $t8, $a1, 0xF0
    ctx->r24 = ctx->r5 & 0XF0;
    // 0x8020A3C4: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A3C8: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020A3CC: mfc1        $t3, $f22
    ctx->r11 = (int32_t)ctx->f22.u32l;
    // 0x8020A3D0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020A3D4: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A3D8: sll         $t2, $t3, 4
    ctx->r10 = S32(ctx->r11 << 4);
    // 0x8020A3DC: or          $t9, $t4, $t2
    ctx->r25 = ctx->r12 | ctx->r10;
    // 0x8020A3E0: sb          $t9, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r25;
    // 0x8020A3E4: mul.s       $f24, $f2, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A3E8: bnel        $v1, $v0, L_8020A3B0
    if (ctx->r3 != ctx->r2) {
        // 0x8020A3EC: add.s       $f22, $f24, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
            goto L_8020A3B0;
    }
    goto skip_8;
    // 0x8020A3EC: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
    skip_8:
    // 0x8020A3F0: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
L_8020A3F4:
    // 0x8020A3F4: andi        $t4, $a1, 0xF
    ctx->r12 = ctx->r5 & 0XF;
    // 0x8020A3F8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020A3FC: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A400: mfc1        $t3, $f22
    ctx->r11 = (int32_t)ctx->f22.u32l;
    // 0x8020A404: nop

    // 0x8020A408: sll         $t2, $t3, 4
    ctx->r10 = S32(ctx->r11 << 4);
    // 0x8020A40C: or          $t9, $t4, $t2
    ctx->r25 = ctx->r12 | ctx->r10;
    // 0x8020A410: sb          $t9, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r25;
    // 0x8020A414: beq         $v0, $a2, L_8020B4EC
    if (ctx->r2 == ctx->r6) {
        // 0x8020A418: addu        $a0, $a3, $v0
        ctx->r4 = ADD32(ctx->r7, ctx->r2);
            goto L_8020B4EC;
    }
L_8020A418:
    // 0x8020A418: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
    // 0x8020A41C: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020A420: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8020A424: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020A428: andi        $t8, $a1, 0xF0
    ctx->r24 = ctx->r5 & 0XF0;
    // 0x8020A42C: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A430: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020A434: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020A438: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A43C: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A440: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020A444: andi        $t8, $t0, 0xF0
    ctx->r24 = ctx->r8 & 0XF0;
    // 0x8020A448: mul.s       $f24, $f2, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A44C: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020A450: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A454: beq         $v0, $a2, L_8020A538
    if (ctx->r2 == ctx->r6) {
        // 0x8020A458: cvt.s.w     $f22, $f20
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = CVT_S_W(ctx->f20.u32l);
            goto L_8020A538;
    }
    // 0x8020A458: cvt.s.w     $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = CVT_S_W(ctx->f20.u32l);
L_8020A45C:
    // 0x8020A45C: mul.s       $f20, $f2, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A460: add.s       $f18, $f24, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f24.fl + ctx->f0.fl;
    // 0x8020A464: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8020A468: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020A46C: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x8020A470: lbu         $a1, 0x4($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X4);
    // 0x8020A474: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020A478: andi        $t8, $t1, 0xF0
    ctx->r24 = ctx->r9 & 0XF0;
    // 0x8020A47C: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A480: mtc1        $t5, $f14
    ctx->f14.u32l = ctx->r13;
    // 0x8020A484: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020A488: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020A48C: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020A490: lbu         $v1, 0x5($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X5);
    // 0x8020A494: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A498: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x8020A49C: andi        $t3, $t0, 0xF
    ctx->r11 = ctx->r8 & 0XF;
    // 0x8020A4A0: lbu         $t0, 0x6($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X6);
    // 0x8020A4A4: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020A4A8: sll         $t2, $t4, 4
    ctx->r10 = S32(ctx->r12 << 4);
    // 0x8020A4AC: or          $t9, $t7, $t2
    ctx->r25 = ctx->r15 | ctx->r10;
    // 0x8020A4B0: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
    // 0x8020A4B4: andi        $t8, $a1, 0xF0
    ctx->r24 = ctx->r5 & 0XF0;
    // 0x8020A4B8: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A4BC: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020A4C0: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A4C4: add.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x8020A4C8: mfc1        $t7, $f20
    ctx->r15 = (int32_t)ctx->f20.u32l;
    // 0x8020A4CC: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020A4D0: andi        $t4, $t1, 0xF
    ctx->r12 = ctx->r9 & 0XF;
    // 0x8020A4D4: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020A4D8: sll         $t2, $t7, 4
    ctx->r10 = S32(ctx->r15 << 4);
    // 0x8020A4DC: or          $t9, $t6, $t2
    ctx->r25 = ctx->r14 | ctx->r10;
    // 0x8020A4E0: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A4E4: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x8020A4E8: sb          $t9, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r25;
    // 0x8020A4EC: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020A4F0: sll         $t2, $t6, 4
    ctx->r10 = S32(ctx->r14 << 4);
    // 0x8020A4F4: add.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f0.fl;
    // 0x8020A4F8: mul.s       $f24, $f2, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A4FC: or          $t9, $t3, $t2
    ctx->r25 = ctx->r11 | ctx->r10;
    // 0x8020A500: sb          $t9, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r25;
    // 0x8020A504: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A508: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020A50C: andi        $t8, $t0, 0xF0
    ctx->r24 = ctx->r8 & 0XF0;
    // 0x8020A510: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020A514: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020A518: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020A51C: cvt.s.w     $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A520: mfc1        $t3, $f14
    ctx->r11 = (int32_t)ctx->f14.u32l;
    // 0x8020A524: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A528: sll         $t2, $t3, 4
    ctx->r10 = S32(ctx->r11 << 4);
    // 0x8020A52C: or          $t9, $t4, $t2
    ctx->r25 = ctx->r12 | ctx->r10;
    // 0x8020A530: bne         $v0, $a2, L_8020A45C
    if (ctx->r2 != ctx->r6) {
        // 0x8020A534: sb          $t9, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r25;
            goto L_8020A45C;
    }
    // 0x8020A534: sb          $t9, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r25;
L_8020A538:
    // 0x8020A538: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8020A53C: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020A540: mul.s       $f20, $f2, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A544: add.s       $f18, $f24, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f24.fl + ctx->f0.fl;
    // 0x8020A548: andi        $t8, $t1, 0xF0
    ctx->r24 = ctx->r9 & 0XF0;
    // 0x8020A54C: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020A550: mtc1        $t5, $f14
    ctx->f14.u32l = ctx->r13;
    // 0x8020A554: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x8020A558: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020A55C: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020A560: andi        $t3, $t0, 0xF
    ctx->r11 = ctx->r8 & 0XF;
    // 0x8020A564: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020A568: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020A56C: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020A570: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A574: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020A578: add.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x8020A57C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020A580: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A584: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x8020A588: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020A58C: sll         $t2, $t4, 4
    ctx->r10 = S32(ctx->r12 << 4);
    // 0x8020A590: or          $t9, $t7, $t2
    ctx->r25 = ctx->r15 | ctx->r10;
    // 0x8020A594: mfc1        $t7, $f20
    ctx->r15 = (int32_t)ctx->f20.u32l;
    // 0x8020A598: add.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f0.fl;
    // 0x8020A59C: sb          $t9, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r25;
    // 0x8020A5A0: sll         $t2, $t7, 4
    ctx->r10 = S32(ctx->r15 << 4);
    // 0x8020A5A4: or          $t9, $t6, $t2
    ctx->r25 = ctx->r14 | ctx->r10;
    // 0x8020A5A8: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x8020A5AC: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020A5B0: sb          $t9, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r25;
    // 0x8020A5B4: sll         $t2, $t6, 4
    ctx->r10 = S32(ctx->r14 << 4);
    // 0x8020A5B8: or          $t9, $t3, $t2
    ctx->r25 = ctx->r11 | ctx->r10;
    // 0x8020A5BC: mfc1        $t3, $f14
    ctx->r11 = (int32_t)ctx->f14.u32l;
    // 0x8020A5C0: sb          $t9, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r25;
    // 0x8020A5C4: andi        $t4, $t1, 0xF
    ctx->r12 = ctx->r9 & 0XF;
    // 0x8020A5C8: sll         $t2, $t3, 4
    ctx->r10 = S32(ctx->r11 << 4);
    // 0x8020A5CC: or          $t9, $t4, $t2
    ctx->r25 = ctx->r12 | ctx->r10;
    // 0x8020A5D0: sb          $t9, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r25;
    // 0x8020A5D4: b           L_8020B4F0
    // 0x8020A5D8: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
        goto L_8020B4F0;
    // 0x8020A5D8: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8020A5DC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8020A5E0:
    // 0x8020A5E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020A5E4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8020A5E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020A5EC: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x8020A5F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020A5F4: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8020A5F8: nop

    // 0x8020A5FC: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8020A600: bgez        $a2, L_8020A610
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8020A604: sra         $v1, $a2, 1
        ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
            goto L_8020A610;
    }
    // 0x8020A604: sra         $v1, $a2, 1
    ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8020A608: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x8020A60C: sra         $v1, $at, 1
    ctx->r3 = S32(SIGNED(ctx->r1) >> 1);
L_8020A610:
    // 0x8020A610: blez        $v1, L_8020B4EC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8020A614: andi        $a2, $v1, 0x3
        ctx->r6 = ctx->r3 & 0X3;
            goto L_8020B4EC;
    }
    // 0x8020A614: andi        $a2, $v1, 0x3
    ctx->r6 = ctx->r3 & 0X3;
    // 0x8020A618: beq         $a2, $zero, L_8020A6BC
    if (ctx->r6 == 0) {
        // 0x8020A61C: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8020A6BC;
    }
    // 0x8020A61C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8020A620: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x8020A624: addu        $a1, $a3, $t8
    ctx->r5 = ADD32(ctx->r7, ctx->r24);
    // 0x8020A628: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x8020A62C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020A630: andi        $t5, $a2, 0xFF00
    ctx->r13 = ctx->r6 & 0XFF00;
    // 0x8020A634: sra         $t7, $t5, 8
    ctx->r15 = S32(SIGNED(ctx->r13) >> 8);
    // 0x8020A638: mtc1        $t7, $f20
    ctx->f20.u32l = ctx->r15;
    // 0x8020A63C: nop

    // 0x8020A640: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A644: mul.s       $f24, $f2, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A648: beql        $a0, $v0, L_8020A698
    if (ctx->r4 == ctx->r2) {
        // 0x8020A64C: add.s       $f22, $f24, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
            goto L_8020A698;
    }
    goto skip_9;
    // 0x8020A64C: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
    skip_9:
    // 0x8020A650: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
L_8020A654:
    // 0x8020A654: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x8020A658: lhu         $a2, 0x2($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X2);
    // 0x8020A65C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020A660: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A664: andi        $t5, $a2, 0xFF00
    ctx->r13 = ctx->r6 & 0XFF00;
    // 0x8020A668: sra         $t7, $t5, 8
    ctx->r15 = S32(SIGNED(ctx->r13) >> 8);
    // 0x8020A66C: mtc1        $t7, $f20
    ctx->f20.u32l = ctx->r15;
    // 0x8020A670: mfc1        $t2, $f22
    ctx->r10 = (int32_t)ctx->f22.u32l;
    // 0x8020A674: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8020A678: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A67C: sll         $t9, $t2, 8
    ctx->r25 = S32(ctx->r10 << 8);
    // 0x8020A680: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8020A684: sh          $t8, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r24;
    // 0x8020A688: mul.s       $f24, $f2, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A68C: bnel        $a0, $v0, L_8020A654
    if (ctx->r4 != ctx->r2) {
        // 0x8020A690: add.s       $f22, $f24, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
            goto L_8020A654;
    }
    goto skip_10;
    // 0x8020A690: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
    skip_10:
    // 0x8020A694: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
L_8020A698:
    // 0x8020A698: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x8020A69C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8020A6A0: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A6A4: mfc1        $t2, $f22
    ctx->r10 = (int32_t)ctx->f22.u32l;
    // 0x8020A6A8: nop

    // 0x8020A6AC: sll         $t9, $t2, 8
    ctx->r25 = S32(ctx->r10 << 8);
    // 0x8020A6B0: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8020A6B4: sh          $t8, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r24;
    // 0x8020A6B8: beq         $v0, $v1, L_8020B4EC
    if (ctx->r2 == ctx->r3) {
        // 0x8020A6BC: sll         $t5, $v1, 1
        ctx->r13 = S32(ctx->r3 << 1);
            goto L_8020B4EC;
    }
L_8020A6BC:
    // 0x8020A6BC: sll         $t5, $v1, 1
    ctx->r13 = S32(ctx->r3 << 1);
    // 0x8020A6C0: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x8020A6C4: addu        $a1, $a3, $t7
    ctx->r5 = ADD32(ctx->r7, ctx->r15);
    // 0x8020A6C8: addu        $a0, $t5, $a3
    ctx->r4 = ADD32(ctx->r13, ctx->r7);
    // 0x8020A6CC: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x8020A6D0: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8020A6D4: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
    // 0x8020A6D8: andi        $t3, $a2, 0xFF00
    ctx->r11 = ctx->r6 & 0XFF00;
    // 0x8020A6DC: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020A6E0: mtc1        $t4, $f20
    ctx->f20.u32l = ctx->r12;
    // 0x8020A6E4: andi        $t3, $v0, 0xFF00
    ctx->r11 = ctx->r2 & 0XFF00;
    // 0x8020A6E8: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020A6EC: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A6F0: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8020A6F4: andi        $t3, $v1, 0xFF00
    ctx->r11 = ctx->r3 & 0XFF00;
    // 0x8020A6F8: mul.s       $f24, $f2, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A6FC: mtc1        $t4, $f20
    ctx->f20.u32l = ctx->r12;
    // 0x8020A700: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020A704: beq         $a1, $a0, L_8020A7E8
    if (ctx->r5 == ctx->r4) {
        // 0x8020A708: cvt.s.w     $f22, $f20
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = CVT_S_W(ctx->f20.u32l);
            goto L_8020A7E8;
    }
    // 0x8020A708: cvt.s.w     $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = CVT_S_W(ctx->f20.u32l);
L_8020A70C:
    // 0x8020A70C: mul.s       $f20, $f2, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A710: add.s       $f18, $f24, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f24.fl + ctx->f0.fl;
    // 0x8020A714: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020A718: lhu         $t0, -0x2($a1)
    ctx->r8 = MEM_HU(ctx->r5, -0X2);
    // 0x8020A71C: andi        $t2, $a2, 0xFF
    ctx->r10 = ctx->r6 & 0XFF;
    // 0x8020A720: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x8020A724: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020A728: andi        $t3, $t0, 0xFF00
    ctx->r11 = ctx->r8 & 0XFF00;
    // 0x8020A72C: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020A730: mtc1        $t4, $f14
    ctx->f14.u32l = ctx->r12;
    // 0x8020A734: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x8020A738: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020A73C: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020A740: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8020A744: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A748: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x8020A74C: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x8020A750: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
    // 0x8020A754: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020A758: sll         $t5, $t8, 8
    ctx->r13 = S32(ctx->r24 << 8);
    // 0x8020A75C: or          $t7, $t2, $t5
    ctx->r15 = ctx->r10 | ctx->r13;
    // 0x8020A760: sh          $t7, -0x8($a1)
    MEM_H(-0X8, ctx->r5) = ctx->r15;
    // 0x8020A764: andi        $t3, $a2, 0xFF00
    ctx->r11 = ctx->r6 & 0XFF00;
    // 0x8020A768: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A76C: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020A770: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020A774: add.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x8020A778: mfc1        $t2, $f20
    ctx->r10 = (int32_t)ctx->f20.u32l;
    // 0x8020A77C: mtc1        $t4, $f20
    ctx->f20.u32l = ctx->r12;
    // 0x8020A780: andi        $t8, $t0, 0xFF
    ctx->r24 = ctx->r8 & 0XFF;
    // 0x8020A784: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020A788: sll         $t5, $t2, 8
    ctx->r13 = S32(ctx->r10 << 8);
    // 0x8020A78C: or          $t7, $t6, $t5
    ctx->r15 = ctx->r14 | ctx->r13;
    // 0x8020A790: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A794: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x8020A798: sh          $t7, -0x6($a1)
    MEM_H(-0X6, ctx->r5) = ctx->r15;
    // 0x8020A79C: andi        $t3, $v0, 0xFF00
    ctx->r11 = ctx->r2 & 0XFF00;
    // 0x8020A7A0: sll         $t5, $t6, 8
    ctx->r13 = S32(ctx->r14 << 8);
    // 0x8020A7A4: add.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f0.fl;
    // 0x8020A7A8: mul.s       $f24, $f2, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020A7AC: or          $t7, $t9, $t5
    ctx->r15 = ctx->r25 | ctx->r13;
    // 0x8020A7B0: sh          $t7, -0x4($a1)
    MEM_H(-0X4, ctx->r5) = ctx->r15;
    // 0x8020A7B4: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020A7B8: mtc1        $t4, $f20
    ctx->f20.u32l = ctx->r12;
    // 0x8020A7BC: andi        $t3, $v1, 0xFF00
    ctx->r11 = ctx->r3 & 0XFF00;
    // 0x8020A7C0: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020A7C4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8020A7C8: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020A7CC: cvt.s.w     $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A7D0: mfc1        $t9, $f14
    ctx->r25 = (int32_t)ctx->f14.u32l;
    // 0x8020A7D4: nop

    // 0x8020A7D8: sll         $t5, $t9, 8
    ctx->r13 = S32(ctx->r25 << 8);
    // 0x8020A7DC: or          $t7, $t8, $t5
    ctx->r15 = ctx->r24 | ctx->r13;
    // 0x8020A7E0: bne         $a1, $a0, L_8020A70C
    if (ctx->r5 != ctx->r4) {
        // 0x8020A7E4: sh          $t7, -0xA($a1)
        MEM_H(-0XA, ctx->r5) = ctx->r15;
            goto L_8020A70C;
    }
    // 0x8020A7E4: sh          $t7, -0xA($a1)
    MEM_H(-0XA, ctx->r5) = ctx->r15;
L_8020A7E8:
    // 0x8020A7E8: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020A7EC: lhu         $t0, -0x2($a1)
    ctx->r8 = MEM_HU(ctx->r5, -0X2);
    // 0x8020A7F0: mul.s       $f20, $f2, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A7F4: add.s       $f18, $f24, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f24.fl + ctx->f0.fl;
    // 0x8020A7F8: andi        $t3, $t0, 0xFF00
    ctx->r11 = ctx->r8 & 0XFF00;
    // 0x8020A7FC: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020A800: mtc1        $t4, $f14
    ctx->f14.u32l = ctx->r12;
    // 0x8020A804: andi        $t2, $a2, 0xFF
    ctx->r10 = ctx->r6 & 0XFF;
    // 0x8020A808: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020A80C: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x8020A810: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x8020A814: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020A818: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020A81C: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020A820: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020A824: add.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x8020A828: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020A82C: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020A830: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x8020A834: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020A838: sll         $t5, $t8, 8
    ctx->r13 = S32(ctx->r24 << 8);
    // 0x8020A83C: or          $t7, $t2, $t5
    ctx->r15 = ctx->r10 | ctx->r13;
    // 0x8020A840: mfc1        $t2, $f20
    ctx->r10 = (int32_t)ctx->f20.u32l;
    // 0x8020A844: add.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f0.fl;
    // 0x8020A848: sh          $t7, -0x8($a1)
    MEM_H(-0X8, ctx->r5) = ctx->r15;
    // 0x8020A84C: sll         $t5, $t2, 8
    ctx->r13 = S32(ctx->r10 << 8);
    // 0x8020A850: or          $t7, $t6, $t5
    ctx->r15 = ctx->r14 | ctx->r13;
    // 0x8020A854: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x8020A858: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020A85C: sh          $t7, -0x6($a1)
    MEM_H(-0X6, ctx->r5) = ctx->r15;
    // 0x8020A860: sll         $t5, $t6, 8
    ctx->r13 = S32(ctx->r14 << 8);
    // 0x8020A864: or          $t7, $t9, $t5
    ctx->r15 = ctx->r25 | ctx->r13;
    // 0x8020A868: mfc1        $t9, $f14
    ctx->r25 = (int32_t)ctx->f14.u32l;
    // 0x8020A86C: sh          $t7, -0x4($a1)
    MEM_H(-0X4, ctx->r5) = ctx->r15;
    // 0x8020A870: andi        $t8, $t0, 0xFF
    ctx->r24 = ctx->r8 & 0XFF;
    // 0x8020A874: sll         $t5, $t9, 8
    ctx->r13 = S32(ctx->r25 << 8);
    // 0x8020A878: or          $t7, $t8, $t5
    ctx->r15 = ctx->r24 | ctx->r13;
    // 0x8020A87C: sh          $t7, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r15;
    // 0x8020A880: b           L_8020B4F0
    // 0x8020A884: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
        goto L_8020B4F0;
    // 0x8020A884: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_8020A888:
    // 0x8020A888: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020A88C: beq         $a1, $at, L_8020A8AC
    if (ctx->r5 == ctx->r1) {
        // 0x8020A890: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8020A8AC;
    }
    // 0x8020A890: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8020A894: beq         $a1, $at, L_8020AD34
    if (ctx->r5 == ctx->r1) {
        // 0x8020A898: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8020AD34;
    }
    // 0x8020A898: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8020A89C: beql        $a1, $at, L_8020B10C
    if (ctx->r5 == ctx->r1) {
        // 0x8020A8A0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020B10C;
    }
    goto skip_11;
    // 0x8020A8A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_11:
    // 0x8020A8A4: b           L_8020B4F0
    // 0x8020A8A8: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
        goto L_8020B4F0;
    // 0x8020A8A8: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_8020A8AC:
    // 0x8020A8AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020A8B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020A8B4: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8020A8B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020A8BC: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x8020A8C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020A8C4: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x8020A8C8: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8020A8CC: nop

    // 0x8020A8D0: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8020A8D4: blez        $a2, L_8020B4EC
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8020A8D8: nop
    
            goto L_8020B4EC;
    }
    // 0x8020A8D8: nop

    // 0x8020A8DC: beq         $a1, $zero, L_8020A9E0
    if (ctx->r5 == 0) {
        // 0x8020A8E0: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8020A9E0;
    }
    // 0x8020A8E0: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020A8E4: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8020A8E8: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020A8EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020A8F0: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020A8F4: mtc1        $t3, $f22
    ctx->f22.u32l = ctx->r11;
    // 0x8020A8F8: nop

    // 0x8020A8FC: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A900: mul.s       $f24, $f2, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A904: beql        $v1, $v0, L_8020A988
    if (ctx->r3 == ctx->r2) {
        // 0x8020A908: add.s       $f22, $f24, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
            goto L_8020A988;
    }
    goto skip_12;
    // 0x8020A908: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
    skip_12:
    // 0x8020A90C: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
L_8020A910:
    // 0x8020A910: andi        $t4, $a1, 0xF0
    ctx->r12 = ctx->r5 & 0XF0;
    // 0x8020A914: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020A918: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020A91C: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A920: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A924: nop

    // 0x8020A928: andi        $t9, $t6, 0xF
    ctx->r25 = ctx->r14 & 0XF;
    // 0x8020A92C: or          $a1, $t4, $t9
    ctx->r5 = ctx->r12 | ctx->r25;
    // 0x8020A930: andi        $t5, $a1, 0xF0
    ctx->r13 = ctx->r5 & 0XF0;
    // 0x8020A934: sra         $t7, $t5, 4
    ctx->r15 = S32(SIGNED(ctx->r13) >> 4);
    // 0x8020A938: mtc1        $t7, $f22
    ctx->f22.u32l = ctx->r15;
    // 0x8020A93C: sb          $a1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r5;
    // 0x8020A940: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020A944: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A948: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020A94C: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A950: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020A954: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A958: mfc1        $t4, $f22
    ctx->r12 = (int32_t)ctx->f22.u32l;
    // 0x8020A95C: nop

    // 0x8020A960: sll         $t9, $t4, 4
    ctx->r25 = S32(ctx->r12 << 4);
    // 0x8020A964: or          $t8, $t3, $t9
    ctx->r24 = ctx->r11 | ctx->r25;
    // 0x8020A968: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020A96C: mtc1        $t3, $f22
    ctx->f22.u32l = ctx->r11;
    // 0x8020A970: sb          $t8, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r24;
    // 0x8020A974: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A978: mul.s       $f24, $f2, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A97C: bnel        $v1, $v0, L_8020A910
    if (ctx->r3 != ctx->r2) {
        // 0x8020A980: add.s       $f22, $f24, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
            goto L_8020A910;
    }
    goto skip_13;
    // 0x8020A980: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
    skip_13:
    // 0x8020A984: add.s       $f22, $f24, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f0.fl;
L_8020A988:
    // 0x8020A988: andi        $t4, $a1, 0xF0
    ctx->r12 = ctx->r5 & 0XF0;
    // 0x8020A98C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020A990: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A994: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020A998: nop

    // 0x8020A99C: andi        $t9, $t6, 0xF
    ctx->r25 = ctx->r14 & 0XF;
    // 0x8020A9A0: or          $a1, $t4, $t9
    ctx->r5 = ctx->r12 | ctx->r25;
    // 0x8020A9A4: andi        $t5, $a1, 0xF0
    ctx->r13 = ctx->r5 & 0XF0;
    // 0x8020A9A8: sra         $t7, $t5, 4
    ctx->r15 = S32(SIGNED(ctx->r13) >> 4);
    // 0x8020A9AC: mtc1        $t7, $f22
    ctx->f22.u32l = ctx->r15;
    // 0x8020A9B0: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020A9B4: sb          $a1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r5;
    // 0x8020A9B8: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020A9BC: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020A9C0: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020A9C4: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020A9C8: mfc1        $t4, $f22
    ctx->r12 = (int32_t)ctx->f22.u32l;
    // 0x8020A9CC: nop

    // 0x8020A9D0: sll         $t9, $t4, 4
    ctx->r25 = S32(ctx->r12 << 4);
    // 0x8020A9D4: or          $t8, $t3, $t9
    ctx->r24 = ctx->r11 | ctx->r25;
    // 0x8020A9D8: sb          $t8, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r24;
    // 0x8020A9DC: beq         $v0, $a2, L_8020B4EC
    if (ctx->r2 == ctx->r6) {
        // 0x8020A9E0: addu        $a0, $a3, $v0
        ctx->r4 = ADD32(ctx->r7, ctx->r2);
            goto L_8020B4EC;
    }
L_8020A9E0:
    // 0x8020A9E0: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
    // 0x8020A9E4: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020A9E8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020A9EC: andi        $t5, $a1, 0xF
    ctx->r13 = ctx->r5 & 0XF;
    // 0x8020A9F0: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020A9F4: nop

    // 0x8020A9F8: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020A9FC: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020AA00: beq         $v0, $a2, L_8020ABA4
    if (ctx->r2 == ctx->r6) {
        // 0x8020AA04: add.s       $f24, $f20, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f20.fl + ctx->f0.fl;
            goto L_8020ABA4;
    }
    // 0x8020AA04: add.s       $f24, $f20, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f20.fl + ctx->f0.fl;
L_8020AA08:
    // 0x8020AA08: trunc.w.s   $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x8020AA0C: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8020AA10: andi        $t7, $a1, 0xF0
    ctx->r15 = ctx->r5 & 0XF0;
    // 0x8020AA14: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020AA18: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020AA1C: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020AA20: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020AA24: andi        $t4, $t6, 0xF
    ctx->r12 = ctx->r14 & 0XF;
    // 0x8020AA28: or          $a1, $t7, $t4
    ctx->r5 = ctx->r15 | ctx->r12;
    // 0x8020AA2C: andi        $t9, $a1, 0xF0
    ctx->r25 = ctx->r5 & 0XF0;
    // 0x8020AA30: sra         $t8, $t9, 4
    ctx->r24 = S32(SIGNED(ctx->r25) >> 4);
    // 0x8020AA34: mtc1        $t8, $f22
    ctx->f22.u32l = ctx->r24;
    // 0x8020AA38: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8020AA3C: andi        $t5, $a1, 0xF
    ctx->r13 = ctx->r5 & 0XF;
    // 0x8020AA40: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020AA44: andi        $t9, $v1, 0xF
    ctx->r25 = ctx->r3 & 0XF;
    // 0x8020AA48: mtc1        $t9, $f20
    ctx->f20.u32l = ctx->r25;
    // 0x8020AA4C: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020AA50: lbu         $a1, 0x4($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X4);
    // 0x8020AA54: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020AA58: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020AA5C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020AA60: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020AA64: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020AA68: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020AA6C: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020AA70: mfc1        $t7, $f22
    ctx->r15 = (int32_t)ctx->f22.u32l;
    // 0x8020AA74: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020AA78: sll         $t4, $t7, 4
    ctx->r12 = S32(ctx->r15 << 4);
    // 0x8020AA7C: or          $t3, $t5, $t4
    ctx->r11 = ctx->r13 | ctx->r12;
    // 0x8020AA80: sb          $t3, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r11;
    // 0x8020AA84: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020AA88: nop

    // 0x8020AA8C: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x8020AA90: or          $v1, $t8, $t7
    ctx->r3 = ctx->r24 | ctx->r15;
    // 0x8020AA94: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020AA98: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020AA9C: mtc1        $t3, $f20
    ctx->f20.u32l = ctx->r11;
    // 0x8020AAA0: sb          $v1, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r3;
    // 0x8020AAA4: andi        $t4, $t0, 0xF
    ctx->r12 = ctx->r8 & 0XF;
    // 0x8020AAA8: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020AAAC: mtc1        $t4, $f22
    ctx->f22.u32l = ctx->r12;
    // 0x8020AAB0: andi        $t9, $v1, 0xF
    ctx->r25 = ctx->r3 & 0XF;
    // 0x8020AAB4: andi        $t3, $t0, 0xF0
    ctx->r11 = ctx->r8 & 0XF0;
    // 0x8020AAB8: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020AABC: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020AAC0: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020AAC4: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020AAC8: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020AACC: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020AAD0: mfc1        $t8, $f20
    ctx->r24 = (int32_t)ctx->f20.u32l;
    // 0x8020AAD4: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020AAD8: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x8020AADC: or          $t5, $t9, $t7
    ctx->r13 = ctx->r25 | ctx->r15;
    // 0x8020AAE0: sb          $t5, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r13;
    // 0x8020AAE4: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020AAE8: nop

    // 0x8020AAEC: andi        $t8, $t6, 0xF
    ctx->r24 = ctx->r14 & 0XF;
    // 0x8020AAF0: or          $t0, $t3, $t8
    ctx->r8 = ctx->r11 | ctx->r24;
    // 0x8020AAF4: andi        $t7, $t0, 0xF0
    ctx->r15 = ctx->r8 & 0XF0;
    // 0x8020AAF8: sra         $t5, $t7, 4
    ctx->r13 = S32(SIGNED(ctx->r15) >> 4);
    // 0x8020AAFC: mtc1        $t5, $f22
    ctx->f22.u32l = ctx->r13;
    // 0x8020AB00: andi        $t7, $t1, 0xF
    ctx->r15 = ctx->r9 & 0XF;
    // 0x8020AB04: mtc1        $t7, $f20
    ctx->f20.u32l = ctx->r15;
    // 0x8020AB08: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020AB0C: sb          $t0, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r8;
    // 0x8020AB10: andi        $t4, $t0, 0xF
    ctx->r12 = ctx->r8 & 0XF;
    // 0x8020AB14: andi        $t5, $t1, 0xF0
    ctx->r13 = ctx->r9 & 0XF0;
    // 0x8020AB18: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020AB1C: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020AB20: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020AB24: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020AB28: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020AB2C: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020AB30: mfc1        $t3, $f22
    ctx->r11 = (int32_t)ctx->f22.u32l;
    // 0x8020AB34: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020AB38: sll         $t8, $t3, 4
    ctx->r24 = S32(ctx->r11 << 4);
    // 0x8020AB3C: or          $t9, $t4, $t8
    ctx->r25 = ctx->r12 | ctx->r24;
    // 0x8020AB40: sb          $t9, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r25;
    // 0x8020AB44: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020AB48: nop

    // 0x8020AB4C: andi        $t3, $t6, 0xF
    ctx->r11 = ctx->r14 & 0XF;
    // 0x8020AB50: or          $t1, $t5, $t3
    ctx->r9 = ctx->r13 | ctx->r11;
    // 0x8020AB54: andi        $t8, $t1, 0xF0
    ctx->r24 = ctx->r9 & 0XF0;
    // 0x8020AB58: sra         $t9, $t8, 4
    ctx->r25 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020AB5C: mtc1        $t9, $f20
    ctx->f20.u32l = ctx->r25;
    // 0x8020AB60: andi        $t7, $t1, 0xF
    ctx->r15 = ctx->r9 & 0XF;
    // 0x8020AB64: sb          $t1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r9;
    // 0x8020AB68: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020AB6C: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020AB70: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020AB74: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020AB78: mfc1        $t5, $f20
    ctx->r13 = (int32_t)ctx->f20.u32l;
    // 0x8020AB7C: nop

    // 0x8020AB80: sll         $t3, $t5, 4
    ctx->r11 = S32(ctx->r13 << 4);
    // 0x8020AB84: andi        $t5, $a1, 0xF
    ctx->r13 = ctx->r5 & 0XF;
    // 0x8020AB88: mtc1        $t5, $f20
    ctx->f20.u32l = ctx->r13;
    // 0x8020AB8C: or          $t4, $t7, $t3
    ctx->r12 = ctx->r15 | ctx->r11;
    // 0x8020AB90: sb          $t4, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r12;
    // 0x8020AB94: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020AB98: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020AB9C: bne         $v0, $a2, L_8020AA08
    if (ctx->r2 != ctx->r6) {
        // 0x8020ABA0: add.s       $f24, $f20, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f20.fl + ctx->f0.fl;
            goto L_8020AA08;
    }
    // 0x8020ABA0: add.s       $f24, $f20, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f20.fl + ctx->f0.fl;
L_8020ABA4:
    // 0x8020ABA4: trunc.w.s   $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x8020ABA8: andi        $t7, $a1, 0xF0
    ctx->r15 = ctx->r5 & 0XF0;
    // 0x8020ABAC: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8020ABB0: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020ABB4: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020ABB8: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020ABBC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020ABC0: andi        $t4, $t6, 0xF
    ctx->r12 = ctx->r14 & 0XF;
    // 0x8020ABC4: or          $a1, $t7, $t4
    ctx->r5 = ctx->r15 | ctx->r12;
    // 0x8020ABC8: andi        $t9, $a1, 0xF0
    ctx->r25 = ctx->r5 & 0XF0;
    // 0x8020ABCC: sra         $t8, $t9, 4
    ctx->r24 = S32(SIGNED(ctx->r25) >> 4);
    // 0x8020ABD0: mtc1        $t8, $f22
    ctx->f22.u32l = ctx->r24;
    // 0x8020ABD4: andi        $t9, $v1, 0xF
    ctx->r25 = ctx->r3 & 0XF;
    // 0x8020ABD8: mtc1        $t9, $f20
    ctx->f20.u32l = ctx->r25;
    // 0x8020ABDC: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020ABE0: andi        $t5, $a1, 0xF
    ctx->r13 = ctx->r5 & 0XF;
    // 0x8020ABE4: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020ABE8: sb          $a1, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r5;
    // 0x8020ABEC: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020ABF0: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020ABF4: nop

    // 0x8020ABF8: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020ABFC: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020AC00: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020AC04: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020AC08: mfc1        $t7, $f22
    ctx->r15 = (int32_t)ctx->f22.u32l;
    // 0x8020AC0C: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020AC10: sll         $t4, $t7, 4
    ctx->r12 = S32(ctx->r15 << 4);
    // 0x8020AC14: or          $t3, $t5, $t4
    ctx->r11 = ctx->r13 | ctx->r12;
    // 0x8020AC18: sb          $t3, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r11;
    // 0x8020AC1C: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020AC20: nop

    // 0x8020AC24: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x8020AC28: or          $v1, $t8, $t7
    ctx->r3 = ctx->r24 | ctx->r15;
    // 0x8020AC2C: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020AC30: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020AC34: mtc1        $t3, $f20
    ctx->f20.u32l = ctx->r11;
    // 0x8020AC38: andi        $t4, $t0, 0xF
    ctx->r12 = ctx->r8 & 0XF;
    // 0x8020AC3C: mtc1        $t4, $f22
    ctx->f22.u32l = ctx->r12;
    // 0x8020AC40: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020AC44: andi        $t9, $v1, 0xF
    ctx->r25 = ctx->r3 & 0XF;
    // 0x8020AC48: andi        $t3, $t0, 0xF0
    ctx->r11 = ctx->r8 & 0XF0;
    // 0x8020AC4C: sb          $v1, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r3;
    // 0x8020AC50: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020AC54: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020AC58: nop

    // 0x8020AC5C: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020AC60: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020AC64: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020AC68: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020AC6C: mfc1        $t8, $f20
    ctx->r24 = (int32_t)ctx->f20.u32l;
    // 0x8020AC70: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020AC74: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x8020AC78: or          $t5, $t9, $t7
    ctx->r13 = ctx->r25 | ctx->r15;
    // 0x8020AC7C: sb          $t5, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r13;
    // 0x8020AC80: mfc1        $t6, $f22
    ctx->r14 = (int32_t)ctx->f22.u32l;
    // 0x8020AC84: nop

    // 0x8020AC88: andi        $t8, $t6, 0xF
    ctx->r24 = ctx->r14 & 0XF;
    // 0x8020AC8C: or          $t0, $t3, $t8
    ctx->r8 = ctx->r11 | ctx->r24;
    // 0x8020AC90: andi        $t7, $t0, 0xF0
    ctx->r15 = ctx->r8 & 0XF0;
    // 0x8020AC94: sra         $t5, $t7, 4
    ctx->r13 = S32(SIGNED(ctx->r15) >> 4);
    // 0x8020AC98: mtc1        $t5, $f22
    ctx->f22.u32l = ctx->r13;
    // 0x8020AC9C: andi        $t7, $t1, 0xF
    ctx->r15 = ctx->r9 & 0XF;
    // 0x8020ACA0: mtc1        $t7, $f20
    ctx->f20.u32l = ctx->r15;
    // 0x8020ACA4: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020ACA8: andi        $t4, $t0, 0xF
    ctx->r12 = ctx->r8 & 0XF;
    // 0x8020ACAC: andi        $t5, $t1, 0xF0
    ctx->r13 = ctx->r9 & 0XF0;
    // 0x8020ACB0: sb          $t0, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r8;
    // 0x8020ACB4: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020ACB8: mul.s       $f22, $f2, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8020ACBC: nop

    // 0x8020ACC0: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020ACC4: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x8020ACC8: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020ACCC: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020ACD0: mfc1        $t3, $f22
    ctx->r11 = (int32_t)ctx->f22.u32l;
    // 0x8020ACD4: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020ACD8: sll         $t8, $t3, 4
    ctx->r24 = S32(ctx->r11 << 4);
    // 0x8020ACDC: or          $t9, $t4, $t8
    ctx->r25 = ctx->r12 | ctx->r24;
    // 0x8020ACE0: sb          $t9, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r25;
    // 0x8020ACE4: mfc1        $t6, $f20
    ctx->r14 = (int32_t)ctx->f20.u32l;
    // 0x8020ACE8: nop

    // 0x8020ACEC: andi        $t3, $t6, 0xF
    ctx->r11 = ctx->r14 & 0XF;
    // 0x8020ACF0: or          $t1, $t5, $t3
    ctx->r9 = ctx->r13 | ctx->r11;
    // 0x8020ACF4: andi        $t8, $t1, 0xF0
    ctx->r24 = ctx->r9 & 0XF0;
    // 0x8020ACF8: sra         $t9, $t8, 4
    ctx->r25 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020ACFC: mtc1        $t9, $f20
    ctx->f20.u32l = ctx->r25;
    // 0x8020AD00: andi        $t7, $t1, 0xF
    ctx->r15 = ctx->r9 & 0XF;
    // 0x8020AD04: sb          $t1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r9;
    // 0x8020AD08: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x8020AD0C: mul.s       $f20, $f2, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8020AD10: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
    // 0x8020AD14: trunc.w.s   $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x8020AD18: mfc1        $t5, $f20
    ctx->r13 = (int32_t)ctx->f20.u32l;
    // 0x8020AD1C: nop

    // 0x8020AD20: sll         $t3, $t5, 4
    ctx->r11 = S32(ctx->r13 << 4);
    // 0x8020AD24: or          $t4, $t7, $t3
    ctx->r12 = ctx->r15 | ctx->r11;
    // 0x8020AD28: sb          $t4, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r12;
    // 0x8020AD2C: b           L_8020B4F0
    // 0x8020AD30: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
        goto L_8020B4F0;
    // 0x8020AD30: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_8020AD34:
    // 0x8020AD34: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020AD38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020AD3C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8020AD40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020AD44: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x8020AD48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020AD4C: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x8020AD50: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8020AD54: nop

    // 0x8020AD58: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8020AD5C: blez        $a2, L_8020B4EC
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8020AD60: nop
    
            goto L_8020B4EC;
    }
    // 0x8020AD60: nop

    // 0x8020AD64: beq         $a1, $zero, L_8020AE30
    if (ctx->r5 == 0) {
        // 0x8020AD68: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8020AE30;
    }
    // 0x8020AD68: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020AD6C: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
L_8020AD70:
    // 0x8020AD70: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x8020AD74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020AD78: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020AD7C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8020AD80: bgez        $t8, L_8020AD94
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8020AD84: cvt.s.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020AD94;
    }
    // 0x8020AD84: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020AD88: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020AD8C: nop

    // 0x8020AD90: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
L_8020AD94:
    // 0x8020AD94: mul.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020AD98: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020AD9C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020ADA0: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8020ADA4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020ADA8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020ADAC: nop

    // 0x8020ADB0: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020ADB4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020ADB8: nop

    // 0x8020ADBC: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8020ADC0: beql        $t2, $zero, L_8020AE10
    if (ctx->r10 == 0) {
        // 0x8020ADC4: mfc1        $t2, $f8
        ctx->r10 = (int32_t)ctx->f8.u32l;
            goto L_8020AE10;
    }
    goto skip_14;
    // 0x8020ADC4: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    skip_14:
    // 0x8020ADC8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020ADCC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020ADD0: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020ADD4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020ADD8: nop

    // 0x8020ADDC: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020ADE0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020ADE4: nop

    // 0x8020ADE8: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8020ADEC: bne         $t2, $zero, L_8020AE04
    if (ctx->r10 != 0) {
        // 0x8020ADF0: nop
    
            goto L_8020AE04;
    }
    // 0x8020ADF0: nop

    // 0x8020ADF4: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x8020ADF8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020ADFC: b           L_8020AE1C
    // 0x8020AE00: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_8020AE1C;
    // 0x8020AE00: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_8020AE04:
    // 0x8020AE04: b           L_8020AE1C
    // 0x8020AE08: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_8020AE1C;
    // 0x8020AE08: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8020AE0C: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
L_8020AE10:
    // 0x8020AE10: nop

    // 0x8020AE14: bltz        $t2, L_8020AE04
    if (SIGNED(ctx->r10) < 0) {
        // 0x8020AE18: nop
    
            goto L_8020AE04;
    }
    // 0x8020AE18: nop

L_8020AE1C:
    // 0x8020AE1C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020AE20: sb          $t2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r10;
    // 0x8020AE24: bne         $v1, $v0, L_8020AD70
    if (ctx->r3 != ctx->r2) {
        // 0x8020AE28: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8020AD70;
    }
    // 0x8020AE28: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020AE2C: beq         $v0, $a2, L_8020B4EC
    if (ctx->r2 == ctx->r6) {
        // 0x8020AE30: addu        $a0, $a3, $v0
        ctx->r4 = ADD32(ctx->r7, ctx->r2);
            goto L_8020B4EC;
    }
L_8020AE30:
    // 0x8020AE30: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
L_8020AE34:
    // 0x8020AE34: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x8020AE38: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020AE3C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020AE40: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8020AE44: bgez        $t6, L_8020AE58
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8020AE48: cvt.s.w     $f12, $f10
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020AE58;
    }
    // 0x8020AE48: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020AE4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020AE50: nop

    // 0x8020AE54: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
L_8020AE58:
    // 0x8020AE58: mul.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020AE5C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020AE60: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020AE64: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8020AE68: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020AE6C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020AE70: nop

    // 0x8020AE74: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020AE78: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020AE7C: nop

    // 0x8020AE80: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020AE84: beql        $t7, $zero, L_8020AED4
    if (ctx->r15 == 0) {
        // 0x8020AE88: mfc1        $t7, $f10
        ctx->r15 = (int32_t)ctx->f10.u32l;
            goto L_8020AED4;
    }
    goto skip_15;
    // 0x8020AE88: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    skip_15:
    // 0x8020AE8C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020AE90: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020AE94: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8020AE98: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020AE9C: nop

    // 0x8020AEA0: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020AEA4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020AEA8: nop

    // 0x8020AEAC: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020AEB0: bne         $t7, $zero, L_8020AEC8
    if (ctx->r15 != 0) {
        // 0x8020AEB4: nop
    
            goto L_8020AEC8;
    }
    // 0x8020AEB4: nop

    // 0x8020AEB8: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8020AEBC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020AEC0: b           L_8020AEE0
    // 0x8020AEC4: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8020AEE0;
    // 0x8020AEC4: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8020AEC8:
    // 0x8020AEC8: b           L_8020AEE0
    // 0x8020AECC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8020AEE0;
    // 0x8020AECC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8020AED0: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
L_8020AED4:
    // 0x8020AED4: nop

    // 0x8020AED8: bltz        $t7, L_8020AEC8
    if (SIGNED(ctx->r15) < 0) {
        // 0x8020AEDC: nop
    
            goto L_8020AEC8;
    }
    // 0x8020AEDC: nop

L_8020AEE0:
    // 0x8020AEE0: lbu         $t3, 0x1($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X1);
    // 0x8020AEE4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020AEE8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020AEEC: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8020AEF0: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    // 0x8020AEF4: bgez        $t3, L_8020AF08
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8020AEF8: cvt.s.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020AF08;
    }
    // 0x8020AEF8: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020AEFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020AF00: nop

    // 0x8020AF04: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
L_8020AF08:
    // 0x8020AF08: mul.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020AF0C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020AF10: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020AF14: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x8020AF18: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020AF1C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020AF20: nop

    // 0x8020AF24: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020AF28: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020AF2C: nop

    // 0x8020AF30: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020AF34: beql        $t8, $zero, L_8020AF84
    if (ctx->r24 == 0) {
        // 0x8020AF38: mfc1        $t8, $f4
        ctx->r24 = (int32_t)ctx->f4.u32l;
            goto L_8020AF84;
    }
    goto skip_16;
    // 0x8020AF38: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    skip_16:
    // 0x8020AF3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020AF40: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020AF44: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8020AF48: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020AF4C: nop

    // 0x8020AF50: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8020AF54: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020AF58: nop

    // 0x8020AF5C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020AF60: bne         $t8, $zero, L_8020AF78
    if (ctx->r24 != 0) {
        // 0x8020AF64: nop
    
            goto L_8020AF78;
    }
    // 0x8020AF64: nop

    // 0x8020AF68: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8020AF6C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020AF70: b           L_8020AF90
    // 0x8020AF74: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8020AF90;
    // 0x8020AF74: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8020AF78:
    // 0x8020AF78: b           L_8020AF90
    // 0x8020AF7C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8020AF90;
    // 0x8020AF7C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8020AF80: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
L_8020AF84:
    // 0x8020AF84: nop

    // 0x8020AF88: bltz        $t8, L_8020AF78
    if (SIGNED(ctx->r24) < 0) {
        // 0x8020AF8C: nop
    
            goto L_8020AF78;
    }
    // 0x8020AF8C: nop

L_8020AF90:
    // 0x8020AF90: lbu         $t9, 0x2($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X2);
    // 0x8020AF94: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020AF98: sb          $t8, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r24;
    // 0x8020AF9C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8020AFA0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020AFA4: bgez        $t9, L_8020AFB8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8020AFA8: cvt.s.w     $f12, $f6
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8020AFB8;
    }
    // 0x8020AFA8: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020AFAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020AFB0: nop

    // 0x8020AFB4: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
L_8020AFB8:
    // 0x8020AFB8: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020AFBC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8020AFC0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020AFC4: add.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x8020AFC8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020AFCC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020AFD0: nop

    // 0x8020AFD4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8020AFD8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020AFDC: nop

    // 0x8020AFE0: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8020AFE4: beql        $t6, $zero, L_8020B034
    if (ctx->r14 == 0) {
        // 0x8020AFE8: mfc1        $t6, $f6
        ctx->r14 = (int32_t)ctx->f6.u32l;
            goto L_8020B034;
    }
    goto skip_17;
    // 0x8020AFE8: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    skip_17:
    // 0x8020AFEC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020AFF0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8020AFF4: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8020AFF8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020AFFC: nop

    // 0x8020B000: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020B004: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020B008: nop

    // 0x8020B00C: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8020B010: bne         $t6, $zero, L_8020B028
    if (ctx->r14 != 0) {
        // 0x8020B014: nop
    
            goto L_8020B028;
    }
    // 0x8020B014: nop

    // 0x8020B018: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8020B01C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020B020: b           L_8020B040
    // 0x8020B024: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8020B040;
    // 0x8020B024: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8020B028:
    // 0x8020B028: b           L_8020B040
    // 0x8020B02C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8020B040;
    // 0x8020B02C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8020B030: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
L_8020B034:
    // 0x8020B034: nop

    // 0x8020B038: bltz        $t6, L_8020B028
    if (SIGNED(ctx->r14) < 0) {
        // 0x8020B03C: nop
    
            goto L_8020B028;
    }
    // 0x8020B03C: nop

L_8020B040:
    // 0x8020B040: lbu         $t5, 0x3($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X3);
    // 0x8020B044: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020B048: sb          $t6, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r14;
    // 0x8020B04C: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8020B050: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020B054: bgez        $t5, L_8020B068
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8020B058: cvt.s.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020B068;
    }
    // 0x8020B058: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020B05C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020B060: nop

    // 0x8020B064: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
L_8020B068:
    // 0x8020B068: mul.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020B06C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020B070: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020B074: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8020B078: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020B07C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020B080: nop

    // 0x8020B084: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020B088: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020B08C: nop

    // 0x8020B090: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8020B094: beql        $t3, $zero, L_8020B0E4
    if (ctx->r11 == 0) {
        // 0x8020B098: mfc1        $t3, $f8
        ctx->r11 = (int32_t)ctx->f8.u32l;
            goto L_8020B0E4;
    }
    goto skip_18;
    // 0x8020B098: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    skip_18:
    // 0x8020B09C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020B0A0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020B0A4: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020B0A8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020B0AC: nop

    // 0x8020B0B0: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020B0B4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020B0B8: nop

    // 0x8020B0BC: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8020B0C0: bne         $t3, $zero, L_8020B0D8
    if (ctx->r11 != 0) {
        // 0x8020B0C4: nop
    
            goto L_8020B0D8;
    }
    // 0x8020B0C4: nop

    // 0x8020B0C8: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x8020B0CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020B0D0: b           L_8020B0F0
    // 0x8020B0D4: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_8020B0F0;
    // 0x8020B0D4: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_8020B0D8:
    // 0x8020B0D8: b           L_8020B0F0
    // 0x8020B0DC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_8020B0F0;
    // 0x8020B0DC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8020B0E0: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
L_8020B0E4:
    // 0x8020B0E4: nop

    // 0x8020B0E8: bltz        $t3, L_8020B0D8
    if (SIGNED(ctx->r11) < 0) {
        // 0x8020B0EC: nop
    
            goto L_8020B0D8;
    }
    // 0x8020B0EC: nop

L_8020B0F0:
    // 0x8020B0F0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020B0F4: sb          $t3, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r11;
    // 0x8020B0F8: bne         $v0, $a2, L_8020AE34
    if (ctx->r2 != ctx->r6) {
        // 0x8020B0FC: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_8020AE34;
    }
    // 0x8020B0FC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020B100: b           L_8020B4F0
    // 0x8020B104: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
        goto L_8020B4F0;
    // 0x8020B104: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8020B108: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8020B10C:
    // 0x8020B10C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020B110: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8020B114: lwc1        $f6, 0x30BC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X30BC);
    // 0x8020B118: sub.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x8020B11C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020B120: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8020B124: nop

    // 0x8020B128: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8020B12C: bgez        $a2, L_8020B13C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8020B130: sra         $v1, $a2, 1
        ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
            goto L_8020B13C;
    }
    // 0x8020B130: sra         $v1, $a2, 1
    ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8020B134: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x8020B138: sra         $v1, $at, 1
    ctx->r3 = S32(SIGNED(ctx->r1) >> 1);
L_8020B13C:
    // 0x8020B13C: blez        $v1, L_8020B4EC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8020B140: andi        $a2, $v1, 0x3
        ctx->r6 = ctx->r3 & 0X3;
            goto L_8020B4EC;
    }
    // 0x8020B140: andi        $a2, $v1, 0x3
    ctx->r6 = ctx->r3 & 0X3;
    // 0x8020B144: beq         $a2, $zero, L_8020B214
    if (ctx->r6 == 0) {
        // 0x8020B148: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8020B214;
    }
    // 0x8020B148: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8020B14C: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x8020B150: addu        $a1, $a3, $t4
    ctx->r5 = ADD32(ctx->r7, ctx->r12);
L_8020B154:
    // 0x8020B154: lhu         $t8, 0x0($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X0);
    // 0x8020B158: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020B15C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020B160: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8020B164: bgez        $t8, L_8020B178
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8020B168: cvt.s.w     $f12, $f10
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020B178;
    }
    // 0x8020B168: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020B16C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020B170: nop

    // 0x8020B174: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
L_8020B178:
    // 0x8020B178: mul.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020B17C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020B180: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020B184: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8020B188: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020B18C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020B190: nop

    // 0x8020B194: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020B198: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020B19C: nop

    // 0x8020B1A0: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8020B1A4: beql        $t2, $zero, L_8020B1F4
    if (ctx->r10 == 0) {
        // 0x8020B1A8: mfc1        $t2, $f10
        ctx->r10 = (int32_t)ctx->f10.u32l;
            goto L_8020B1F4;
    }
    goto skip_19;
    // 0x8020B1A8: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    skip_19:
    // 0x8020B1AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020B1B0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020B1B4: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8020B1B8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020B1BC: nop

    // 0x8020B1C0: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020B1C4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020B1C8: nop

    // 0x8020B1CC: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8020B1D0: bne         $t2, $zero, L_8020B1E8
    if (ctx->r10 != 0) {
        // 0x8020B1D4: nop
    
            goto L_8020B1E8;
    }
    // 0x8020B1D4: nop

    // 0x8020B1D8: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x8020B1DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020B1E0: b           L_8020B200
    // 0x8020B1E4: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_8020B200;
    // 0x8020B1E4: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_8020B1E8:
    // 0x8020B1E8: b           L_8020B200
    // 0x8020B1EC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_8020B200;
    // 0x8020B1EC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8020B1F0: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
L_8020B1F4:
    // 0x8020B1F4: nop

    // 0x8020B1F8: bltz        $t2, L_8020B1E8
    if (SIGNED(ctx->r10) < 0) {
        // 0x8020B1FC: nop
    
            goto L_8020B1E8;
    }
    // 0x8020B1FC: nop

L_8020B200:
    // 0x8020B200: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020B204: sh          $t2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r10;
    // 0x8020B208: bne         $a0, $v0, L_8020B154
    if (ctx->r4 != ctx->r2) {
        // 0x8020B20C: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_8020B154;
    }
    // 0x8020B20C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8020B210: beq         $v0, $v1, L_8020B4EC
    if (ctx->r2 == ctx->r3) {
        // 0x8020B214: sll         $t6, $v1, 1
        ctx->r14 = S32(ctx->r3 << 1);
            goto L_8020B4EC;
    }
L_8020B214:
    // 0x8020B214: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x8020B218: sll         $t5, $v0, 1
    ctx->r13 = S32(ctx->r2 << 1);
    // 0x8020B21C: addu        $a1, $a3, $t5
    ctx->r5 = ADD32(ctx->r7, ctx->r13);
    // 0x8020B220: addu        $a0, $t6, $a3
    ctx->r4 = ADD32(ctx->r14, ctx->r7);
L_8020B224:
    // 0x8020B224: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x8020B228: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020B22C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8020B230: bgez        $t7, L_8020B244
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8020B234: cvt.s.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020B244;
    }
    // 0x8020B234: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020B238: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020B23C: nop

    // 0x8020B240: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
L_8020B244:
    // 0x8020B244: mul.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020B248: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020B24C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020B250: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x8020B254: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020B258: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020B25C: nop

    // 0x8020B260: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020B264: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020B268: nop

    // 0x8020B26C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020B270: beql        $t4, $zero, L_8020B2C0
    if (ctx->r12 == 0) {
        // 0x8020B274: mfc1        $t4, $f4
        ctx->r12 = (int32_t)ctx->f4.u32l;
            goto L_8020B2C0;
    }
    goto skip_20;
    // 0x8020B274: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    skip_20:
    // 0x8020B278: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020B27C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020B280: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8020B284: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020B288: nop

    // 0x8020B28C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8020B290: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020B294: nop

    // 0x8020B298: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020B29C: bne         $t4, $zero, L_8020B2B4
    if (ctx->r12 != 0) {
        // 0x8020B2A0: nop
    
            goto L_8020B2B4;
    }
    // 0x8020B2A0: nop

    // 0x8020B2A4: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x8020B2A8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020B2AC: b           L_8020B2CC
    // 0x8020B2B0: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_8020B2CC;
    // 0x8020B2B0: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_8020B2B4:
    // 0x8020B2B4: b           L_8020B2CC
    // 0x8020B2B8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_8020B2CC;
    // 0x8020B2B8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8020B2BC: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
L_8020B2C0:
    // 0x8020B2C0: nop

    // 0x8020B2C4: bltz        $t4, L_8020B2B4
    if (SIGNED(ctx->r12) < 0) {
        // 0x8020B2C8: nop
    
            goto L_8020B2B4;
    }
    // 0x8020B2C8: nop

L_8020B2CC:
    // 0x8020B2CC: lhu         $t8, 0x2($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X2);
    // 0x8020B2D0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020B2D4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020B2D8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8020B2DC: sh          $t4, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r12;
    // 0x8020B2E0: bgez        $t8, L_8020B2F4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8020B2E4: cvt.s.w     $f12, $f6
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8020B2F4;
    }
    // 0x8020B2E4: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020B2E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020B2EC: nop

    // 0x8020B2F0: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
L_8020B2F4:
    // 0x8020B2F4: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020B2F8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020B2FC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020B300: add.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x8020B304: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020B308: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020B30C: nop

    // 0x8020B310: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8020B314: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020B318: nop

    // 0x8020B31C: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8020B320: beql        $t2, $zero, L_8020B370
    if (ctx->r10 == 0) {
        // 0x8020B324: mfc1        $t2, $f6
        ctx->r10 = (int32_t)ctx->f6.u32l;
            goto L_8020B370;
    }
    goto skip_21;
    // 0x8020B324: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    skip_21:
    // 0x8020B328: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020B32C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020B330: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8020B334: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020B338: nop

    // 0x8020B33C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020B340: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020B344: nop

    // 0x8020B348: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8020B34C: bne         $t2, $zero, L_8020B364
    if (ctx->r10 != 0) {
        // 0x8020B350: nop
    
            goto L_8020B364;
    }
    // 0x8020B350: nop

    // 0x8020B354: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x8020B358: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020B35C: b           L_8020B37C
    // 0x8020B360: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_8020B37C;
    // 0x8020B360: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_8020B364:
    // 0x8020B364: b           L_8020B37C
    // 0x8020B368: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_8020B37C;
    // 0x8020B368: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8020B36C: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
L_8020B370:
    // 0x8020B370: nop

    // 0x8020B374: bltz        $t2, L_8020B364
    if (SIGNED(ctx->r10) < 0) {
        // 0x8020B378: nop
    
            goto L_8020B364;
    }
    // 0x8020B378: nop

L_8020B37C:
    // 0x8020B37C: lhu         $t6, 0x4($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X4);
    // 0x8020B380: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020B384: sh          $t2, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r10;
    // 0x8020B388: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8020B38C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020B390: bgez        $t6, L_8020B3A4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8020B394: cvt.s.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020B3A4;
    }
    // 0x8020B394: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020B398: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020B39C: nop

    // 0x8020B3A0: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
L_8020B3A4:
    // 0x8020B3A4: mul.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020B3A8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020B3AC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020B3B0: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8020B3B4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020B3B8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020B3BC: nop

    // 0x8020B3C0: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020B3C4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020B3C8: nop

    // 0x8020B3CC: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020B3D0: beql        $t7, $zero, L_8020B420
    if (ctx->r15 == 0) {
        // 0x8020B3D4: mfc1        $t7, $f8
        ctx->r15 = (int32_t)ctx->f8.u32l;
            goto L_8020B420;
    }
    goto skip_22;
    // 0x8020B3D4: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    skip_22:
    // 0x8020B3D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020B3DC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020B3E0: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020B3E4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020B3E8: nop

    // 0x8020B3EC: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020B3F0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020B3F4: nop

    // 0x8020B3F8: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020B3FC: bne         $t7, $zero, L_8020B414
    if (ctx->r15 != 0) {
        // 0x8020B400: nop
    
            goto L_8020B414;
    }
    // 0x8020B400: nop

    // 0x8020B404: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8020B408: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020B40C: b           L_8020B42C
    // 0x8020B410: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8020B42C;
    // 0x8020B410: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8020B414:
    // 0x8020B414: b           L_8020B42C
    // 0x8020B418: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8020B42C;
    // 0x8020B418: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8020B41C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
L_8020B420:
    // 0x8020B420: nop

    // 0x8020B424: bltz        $t7, L_8020B414
    if (SIGNED(ctx->r15) < 0) {
        // 0x8020B428: nop
    
            goto L_8020B414;
    }
    // 0x8020B428: nop

L_8020B42C:
    // 0x8020B42C: lhu         $t3, 0x6($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X6);
    // 0x8020B430: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020B434: sh          $t7, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r15;
    // 0x8020B438: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x8020B43C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020B440: bgez        $t3, L_8020B454
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8020B444: cvt.s.w     $f12, $f10
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020B454;
    }
    // 0x8020B444: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020B448: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020B44C: nop

    // 0x8020B450: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
L_8020B454:
    // 0x8020B454: mul.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020B458: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020B45C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020B460: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8020B464: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020B468: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020B46C: nop

    // 0x8020B470: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020B474: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020B478: nop

    // 0x8020B47C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020B480: beql        $t8, $zero, L_8020B4D0
    if (ctx->r24 == 0) {
        // 0x8020B484: mfc1        $t8, $f10
        ctx->r24 = (int32_t)ctx->f10.u32l;
            goto L_8020B4D0;
    }
    goto skip_23;
    // 0x8020B484: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    skip_23:
    // 0x8020B488: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020B48C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020B490: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8020B494: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020B498: nop

    // 0x8020B49C: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020B4A0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020B4A4: nop

    // 0x8020B4A8: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020B4AC: bne         $t8, $zero, L_8020B4C4
    if (ctx->r24 != 0) {
        // 0x8020B4B0: nop
    
            goto L_8020B4C4;
    }
    // 0x8020B4B0: nop

    // 0x8020B4B4: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8020B4B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020B4BC: b           L_8020B4DC
    // 0x8020B4C0: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8020B4DC;
    // 0x8020B4C0: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8020B4C4:
    // 0x8020B4C4: b           L_8020B4DC
    // 0x8020B4C8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8020B4DC;
    // 0x8020B4C8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8020B4CC: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
L_8020B4D0:
    // 0x8020B4D0: nop

    // 0x8020B4D4: bltz        $t8, L_8020B4C4
    if (SIGNED(ctx->r24) < 0) {
        // 0x8020B4D8: nop
    
            goto L_8020B4C4;
    }
    // 0x8020B4D8: nop

L_8020B4DC:
    // 0x8020B4DC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020B4E0: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8020B4E4: bne         $a1, $a0, L_8020B224
    if (ctx->r5 != ctx->r4) {
        // 0x8020B4E8: sh          $t8, -0x2($a1)
        MEM_H(-0X2, ctx->r5) = ctx->r24;
            goto L_8020B224;
    }
    // 0x8020B4E8: sh          $t8, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r24;
L_8020B4EC:
    // 0x8020B4EC: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_8020B4F0:
    // 0x8020B4F0: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x8020B4F4: ldc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X18);
    // 0x8020B4F8: jr          $ra
    // 0x8020B4FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8020B4FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
