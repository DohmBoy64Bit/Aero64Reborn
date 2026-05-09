#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80243810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80243810: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x80243814: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80243818: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x8024381C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80243820: beq         $at, $zero, L_802438D0
    if (ctx->r1 == 0) {
        // 0x80243824: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_802438D0;
    }
    // 0x80243824: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80243828: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8024382C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80243830: addu        $at, $at, $t6
    gpr jr_addend_80243838 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80243834: lw          $t6, 0x59B0($at)
    ctx->r14 = ADD32(ctx->r1, 0X59B0);
    // 0x80243838: jr          $t6
    // 0x8024383C: nop

    switch (jr_addend_80243838 >> 2) {
        case 0: goto L_80243840; break;
        case 1: goto L_802438D0; break;
        case 2: goto L_802438D0; break;
        case 3: goto L_80243848; break;
        case 4: goto L_802438D0; break;
        case 5: goto L_802438D0; break;
        case 6: goto L_802438B4; break;
        case 7: goto L_802438C4; break;
        case 8: goto L_80243884; break;
        default: switch_error(__func__, 0x80243838, 0x802559B0);
    }
    // 0x8024383C: nop

L_80243840:
    // 0x80243840: b           L_802438E8
    // 0x80243844: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
        goto L_802438E8;
    // 0x80243844: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
L_80243848:
    // 0x80243848: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8024384C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80243850: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80243854: sw          $t7, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r15;
    // 0x80243858: sw          $zero, 0x30($a3)
    MEM_W(0X30, ctx->r7) = 0;
    // 0x8024385C: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
    // 0x80243860: beq         $a0, $zero, L_802438E8
    if (ctx->r4 == 0) {
        // 0x80243864: swc1        $f4, 0x20($a3)
        MEM_W(0X20, ctx->r7) = ctx->f4.u32l;
            goto L_802438E8;
    }
    // 0x80243864: swc1        $f4, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f4.u32l;
    // 0x80243868: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8024386C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80243870: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80243874: jalr        $t9
    // 0x80243878: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80243878: nop

    after_0:
    // 0x8024387C: b           L_802438EC
    // 0x80243880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802438EC;
    // 0x80243880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80243884:
    // 0x80243884: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x80243888: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8024388C: sw          $t8, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r24;
    // 0x80243890: beql        $a0, $zero, L_802438EC
    if (ctx->r4 == 0) {
        // 0x80243894: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802438EC;
    }
    goto skip_0;
    // 0x80243894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80243898: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8024389C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802438A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802438A4: jalr        $t9
    // 0x802438A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802438A8: nop

    after_1:
    // 0x802438AC: b           L_802438EC
    // 0x802438B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802438EC;
    // 0x802438B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802438B4:
    // 0x802438B4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x802438B8: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802438BC: b           L_802438E8
    // 0x802438C0: swc1        $f6, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f6.u32l;
        goto L_802438E8;
    // 0x802438C0: swc1        $f6, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f6.u32l;
L_802438C4:
    // 0x802438C4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802438C8: b           L_802438E8
    // 0x802438CC: sw          $t0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r8;
        goto L_802438E8;
    // 0x802438CC: sw          $t0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r8;
L_802438D0:
    // 0x802438D0: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x802438D4: beql        $a0, $zero, L_802438EC
    if (ctx->r4 == 0) {
        // 0x802438D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802438EC;
    }
    goto skip_1;
    // 0x802438D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x802438DC: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x802438E0: jalr        $t9
    // 0x802438E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802438E4: nop

    after_2:
L_802438E8:
    // 0x802438E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802438EC:
    // 0x802438EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802438F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802438F4: jr          $ra
    // 0x802438F8: nop

    return;
    // 0x802438F8: nop

;}
RECOMP_FUNC void func_8023CD90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023CD90: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8023CD94: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8023CD98: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8023CD9C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8023CDA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023CDA4: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x8023CDA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023CDAC: swc1        $f12, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f12.u32l;
    // 0x8023CDB0: swc1        $f14, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f14.u32l;
    // 0x8023CDB4: bc1f        L_8023CDDC
    if (!c1cs) {
        // 0x8023CDB8: nop
    
            goto L_8023CDDC;
    }
    // 0x8023CDB8: nop

    // 0x8023CDBC: c.eq.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl == ctx->f0.fl;
    // 0x8023CDC0: nop

    // 0x8023CDC4: bc1f        L_8023CDDC
    if (!c1cs) {
        // 0x8023CDC8: nop
    
            goto L_8023CDDC;
    }
    // 0x8023CDC8: nop

    // 0x8023CDCC: jal         0x80246B80
    // 0x8023CDD0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80246B80(rdram, ctx);
        goto after_0;
    // 0x8023CDD0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x8023CDD4: b           L_8023CDE8
    // 0x8023CDD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8023CDE8;
    // 0x8023CDD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023CDDC:
    // 0x8023CDDC: jal         0x80246BA0
    // 0x8023CDE0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80246BA0(rdram, ctx);
        goto after_1;
    // 0x8023CDE0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x8023CDE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023CDE8:
    // 0x8023CDE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023CDEC: jr          $ra
    // 0x8023CDF0: nop

    return;
    // 0x8023CDF0: nop

;}
RECOMP_FUNC void func_802168C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802168C4: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x802168C8: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
    // 0x802168CC: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802168D0: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x802168D4: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x802168D8: sw          $fp, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r30;
    // 0x802168DC: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x802168E0: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x802168E4: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x802168E8: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x802168EC: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x802168F0: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x802168F4: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x802168F8: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x802168FC: sdc1        $f26, 0x68($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X68, ctx->r29);
    // 0x80216900: sdc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X60, ctx->r29);
    // 0x80216904: sdc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X58, ctx->r29);
    // 0x80216908: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x8021690C: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x80216910: swc1        $f14, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f14.u32l;
    // 0x80216914: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80216918: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x8021691C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80216920: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80216924: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x80216928: lw          $s7, 0x0($t1)
    ctx->r23 = MEM_W(ctx->r9, 0X0);
    // 0x8021692C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80216930: mtc1        $a2, $f24
    ctx->f24.u32l = ctx->r6;
    // 0x80216934: lw          $fp, 0x8($s7)
    ctx->r30 = MEM_W(ctx->r23, 0X8);
    // 0x80216938: mtc1        $a3, $f26
    ctx->f26.u32l = ctx->r7;
    // 0x8021693C: lbu         $t2, 0x4($fp)
    ctx->r10 = MEM_BU(ctx->r30, 0X4);
    // 0x80216940: sh          $t2, 0x106($sp)
    MEM_H(0X106, ctx->r29) = ctx->r10;
    // 0x80216944: lwc1        $f6, 0x20($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X20);
    // 0x80216948: jal         0x80228CE0
    // 0x8021694C: div.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    func_80228CE0(rdram, ctx);
        goto after_0;
    // 0x8021694C: div.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    after_0:
    // 0x80216950: lh          $v0, 0x106($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X106);
    // 0x80216954: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80216958: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8021695C: blez        $v0, L_80216B70
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80216960: lwc1        $f20, 0x11C($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0X11C);
            goto L_80216B70;
    }
    // 0x80216960: lwc1        $f20, 0x11C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x80216964: addiu       $s6, $sp, 0xA8
    ctx->r22 = ADD32(ctx->r29, 0XA8);
    // 0x80216968: lw          $v1, 0x118($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X118);
    // 0x8021696C: lw          $t4, 0x1C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X1C);
L_80216970:
    // 0x80216970: sll         $s4, $s3, 3
    ctx->r20 = S32(ctx->r19 << 3);
    // 0x80216974: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80216978: lw          $t3, 0x0($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X0);
    // 0x8021697C: addu        $s4, $s4, $s3
    ctx->r20 = ADD32(ctx->r20, ctx->r19);
    // 0x80216980: sllv        $t6, $t5, $s3
    ctx->r14 = S32(ctx->r13 << (ctx->r19 & 31));
    // 0x80216984: sll         $s4, $s4, 2
    ctx->r20 = S32(ctx->r20 << 2);
    // 0x80216988: and         $t8, $t4, $t6
    ctx->r24 = ctx->r12 & ctx->r14;
    // 0x8021698C: bne         $t8, $zero, L_802169A8
    if (ctx->r24 != 0) {
        // 0x80216990: addu        $s1, $t3, $s4
        ctx->r17 = ADD32(ctx->r11, ctx->r20);
            goto L_802169A8;
    }
    // 0x80216990: addu        $s1, $t3, $s4
    ctx->r17 = ADD32(ctx->r11, ctx->r20);
    // 0x80216994: lbu         $t9, 0x7($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X7);
    // 0x80216998: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8021699C: andi        $t7, $t9, 0x1
    ctx->r15 = ctx->r25 & 0X1;
    // 0x802169A0: beq         $t7, $zero, L_802169B0
    if (ctx->r15 == 0) {
        // 0x802169A4: nop
    
            goto L_802169B0;
    }
    // 0x802169A4: nop

L_802169A8:
    // 0x802169A8: b           L_802169B0
    // 0x802169AC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_802169B0;
    // 0x802169AC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_802169B0:
    // 0x802169B0: bne         $s0, $zero, L_802169C8
    if (ctx->r16 != 0) {
        // 0x802169B4: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_802169C8;
    }
    // 0x802169B4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x802169B8: lbu         $t0, 0x7($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X7);
    // 0x802169BC: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x802169C0: bnel        $t1, $zero, L_80216B58
    if (ctx->r9 != 0) {
        // 0x802169C4: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80216B58;
    }
    goto skip_0;
    // 0x802169C4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
L_802169C8:
    // 0x802169C8: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x802169CC: sll         $t3, $s3, 6
    ctx->r11 = S32(ctx->r19 << 6);
    // 0x802169D0: or          $t8, $sp, $zero
    ctx->r24 = ctx->r29 | 0;
    // 0x802169D4: addu        $t5, $t2, $t3
    ctx->r13 = ADD32(ctx->r10, ctx->r11);
    // 0x802169D8: addiu       $t6, $t5, 0x3C
    ctx->r14 = ADD32(ctx->r13, 0X3C);
L_802169DC:
    // 0x802169DC: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x802169E0: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x802169E4: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x802169E8: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x802169EC: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x802169F0: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x802169F4: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x802169F8: bne         $t5, $t6, L_802169DC
    if (ctx->r13 != ctx->r14) {
        // 0x802169FC: sw          $at, 0x4($t8)
        MEM_W(0X4, ctx->r24) = ctx->r1;
            goto L_802169DC;
    }
    // 0x802169FC: sw          $at, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r1;
    // 0x80216A00: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80216A04: addiu       $s5, $v0, -0x1
    ctx->r21 = ADD32(ctx->r2, -0X1);
    // 0x80216A08: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x80216A0C: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80216A10: jal         0x80228F38
    // 0x80216A14: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    func_80228F38(rdram, ctx);
        goto after_1;
    // 0x80216A14: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    after_1:
    // 0x80216A18: bne         $s3, $zero, L_80216A68
    if (ctx->r19 != 0) {
        // 0x80216A1C: lwc1        $f10, 0xD8($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
            goto L_80216A68;
    }
    // 0x80216A1C: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x80216A20: lwc1        $f8, 0x20($s7)
    ctx->f8.u32l = MEM_W(ctx->r23, 0X20);
    // 0x80216A24: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80216A28: div.s       $f0, $f8, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80216A2C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80216A30: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80216A34: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80216A38: jal         0x8022A210
    // 0x80216A3C: nop

    func_8022A210(rdram, ctx);
        goto after_2;
    // 0x80216A3C: nop

    after_2:
    // 0x80216A40: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x80216A44: lwc1        $f18, 0xDC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80216A48: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80216A4C: div.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80216A50: div.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f20.fl);
    // 0x80216A54: swc1        $f16, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f16.u32l;
    // 0x80216A58: div.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80216A5C: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    // 0x80216A60: b           L_80216A8C
    // 0x80216A64: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
        goto L_80216A8C;
    // 0x80216A64: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
L_80216A68:
    // 0x80216A68: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80216A6C: lwc1        $f18, 0xDC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80216A70: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80216A74: mul.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x80216A78: nop

    // 0x80216A7C: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x80216A80: swc1        $f16, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f16.u32l;
    // 0x80216A84: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    // 0x80216A88: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
L_80216A8C:
    // 0x80216A8C: jal         0x80228D0C
    // 0x80216A90: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80228D0C(rdram, ctx);
        goto after_3;
    // 0x80216A90: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_3:
    // 0x80216A94: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80216A98: sll         $t9, $s2, 16
    ctx->r25 = S32(ctx->r18 << 16);
    // 0x80216A9C: beq         $s0, $zero, L_80216AEC
    if (ctx->r16 == 0) {
        // 0x80216AA0: sra         $s2, $t9, 16
        ctx->r18 = S32(SIGNED(ctx->r25) >> 16);
            goto L_80216AEC;
    }
    // 0x80216AA0: sra         $s2, $t9, 16
    ctx->r18 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80216AA4: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80216AA8: addiu       $v0, $v0, -0x3C6C
    ctx->r2 = ADD32(ctx->r2, -0X3C6C);
    // 0x80216AAC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80216AB0: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80216AB4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80216AB8: sll         $t2, $s3, 24
    ctx->r10 = S32(ctx->r19 << 24);
    // 0x80216ABC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80216AC0: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x80216AC4: jal         0x80228CF0
    // 0x80216AC8: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    func_80228CF0(rdram, ctx);
        goto after_4;
    // 0x80216AC8: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    after_4:
    // 0x80216ACC: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80216AD0: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x80216AD4: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80216AD8: lwc1        $f14, 0x10C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x80216ADC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80216AE0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80216AE4: jal         0x80217940
    // 0x80216AE8: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    func_80217940(rdram, ctx);
        goto after_5;
    // 0x80216AE8: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    after_5:
L_80216AEC:
    // 0x80216AEC: bnel        $s3, $s5, L_80216B00
    if (ctx->r19 != ctx->r21) {
        // 0x80216AF0: lw          $t4, 0x0($fp)
        ctx->r12 = MEM_W(ctx->r30, 0X0);
            goto L_80216B00;
    }
    goto skip_1;
    // 0x80216AF0: lw          $t4, 0x0($fp)
    ctx->r12 = MEM_W(ctx->r30, 0X0);
    skip_1:
    // 0x80216AF4: b           L_80216B70
    // 0x80216AF8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_80216B70;
    // 0x80216AF8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80216AFC: lw          $t4, 0x0($fp)
    ctx->r12 = MEM_W(ctx->r30, 0X0);
L_80216B00:
    // 0x80216B00: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80216B04: addu        $v0, $t4, $s4
    ctx->r2 = ADD32(ctx->r12, ctx->r20);
    // 0x80216B08: lbu         $t6, 0x6($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6);
    // 0x80216B0C: lbu         $t5, 0x2A($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2A);
    // 0x80216B10: subu        $s1, $t6, $t5
    ctx->r17 = SUB32(ctx->r14, ctx->r13);
    // 0x80216B14: sll         $t8, $s1, 16
    ctx->r24 = S32(ctx->r17 << 16);
    // 0x80216B18: sra         $s1, $t8, 16
    ctx->r17 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80216B1C: bltzl       $s1, L_80216B50
    if (SIGNED(ctx->r17) < 0) {
        // 0x80216B20: lw          $v1, 0x118($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X118);
            goto L_80216B50;
    }
    goto skip_2;
    // 0x80216B20: lw          $v1, 0x118($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X118);
    skip_2:
L_80216B24:
    // 0x80216B24: jal         0x80228D9C
    // 0x80216B28: nop

    func_80228D9C(rdram, ctx);
        goto after_6;
    // 0x80216B28: nop

    after_6:
    // 0x80216B2C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80216B30: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x80216B34: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80216B38: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80216B3C: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x80216B40: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80216B44: beq         $at, $zero, L_80216B24
    if (ctx->r1 == 0) {
        // 0x80216B48: sra         $s2, $t7, 16
        ctx->r18 = S32(SIGNED(ctx->r15) >> 16);
            goto L_80216B24;
    }
    // 0x80216B48: sra         $s2, $t7, 16
    ctx->r18 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80216B4C: lw          $v1, 0x118($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X118);
L_80216B50:
    // 0x80216B50: lh          $v0, 0x106($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X106);
    // 0x80216B54: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_80216B58:
    // 0x80216B58: sll         $t3, $s3, 16
    ctx->r11 = S32(ctx->r19 << 16);
    // 0x80216B5C: sra         $s3, $t3, 16
    ctx->r19 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80216B60: slt         $at, $s3, $v0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80216B64: bnel        $at, $zero, L_80216970
    if (ctx->r1 != 0) {
        // 0x80216B68: lw          $t4, 0x1C($v1)
        ctx->r12 = MEM_W(ctx->r3, 0X1C);
            goto L_80216970;
    }
    goto skip_3;
    // 0x80216B68: lw          $t4, 0x1C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X1C);
    skip_3:
    // 0x80216B6C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80216B70:
    // 0x80216B70: blezl       $s2, L_80216B9C
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80216B74: lw          $ra, 0x94($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X94);
            goto L_80216B9C;
    }
    goto skip_4;
    // 0x80216B74: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    skip_4:
L_80216B78:
    // 0x80216B78: jal         0x80228D9C
    // 0x80216B7C: nop

    func_80228D9C(rdram, ctx);
        goto after_7;
    // 0x80216B7C: nop

    after_7:
    // 0x80216B80: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80216B84: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x80216B88: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80216B8C: slt         $at, $s3, $s2
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80216B90: bne         $at, $zero, L_80216B78
    if (ctx->r1 != 0) {
        // 0x80216B94: nop
    
            goto L_80216B78;
    }
    // 0x80216B94: nop

    // 0x80216B98: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
L_80216B9C:
    // 0x80216B9C: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x80216BA0: ldc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X58);
    // 0x80216BA4: ldc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X60);
    // 0x80216BA8: ldc1        $f26, 0x68($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X68);
    // 0x80216BAC: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x80216BB0: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x80216BB4: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x80216BB8: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x80216BBC: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x80216BC0: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x80216BC4: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x80216BC8: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x80216BCC: lw          $fp, 0x90($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X90);
    // 0x80216BD0: jr          $ra
    // 0x80216BD4: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x80216BD4: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_802404DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802404DC: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x802404E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802404E4: lbu         $s6, 0x8($a0)
    ctx->r22 = MEM_BU(ctx->r4, 0X8);
    // 0x802404E8: lbu         $s3, 0x9($a0)
    ctx->r19 = MEM_BU(ctx->r4, 0X9);
    // 0x802404EC: lbu         $s4, 0xA($a0)
    ctx->r20 = MEM_BU(ctx->r4, 0XA);
    // 0x802404F0: andi        $v1, $s6, 0xF0
    ctx->r3 = ctx->r22 & 0XF0;
    // 0x802404F4: addiu       $t7, $v1, -0x80
    ctx->r15 = ADD32(ctx->r3, -0X80);
    // 0x802404F8: sltiu       $at, $t7, 0x61
    ctx->r1 = ctx->r15 < 0X61 ? 1 : 0;
    // 0x802404FC: andi        $t6, $s6, 0xF
    ctx->r14 = ctx->r22 & 0XF;
    // 0x80240500: beq         $at, $zero, L_80240CE4
    if (ctx->r1 == 0) {
        // 0x80240504: or          $s6, $t6, $zero
        ctx->r22 = ctx->r14 | 0;
            goto L_80240CE4;
    }
    // 0x80240504: or          $s6, $t6, $zero
    ctx->r22 = ctx->r14 | 0;
    // 0x80240508: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8024050C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80240510: addu        $at, $at, $t7
    gpr jr_addend_80240518 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80240514: lw          $t7, 0x56F0($at)
    ctx->r15 = ADD32(ctx->r1, 0X56F0);
    // 0x80240518: jr          $t7
    // 0x8024051C: nop

    switch (jr_addend_80240518 >> 2) {
        case 0: goto L_80240874; break;
        case 1: goto L_80240CE4; break;
        case 2: goto L_80240CE4; break;
        case 3: goto L_80240CE4; break;
        case 4: goto L_80240CE4; break;
        case 5: goto L_80240CE4; break;
        case 6: goto L_80240CE4; break;
        case 7: goto L_80240CE4; break;
        case 8: goto L_80240CE4; break;
        case 9: goto L_80240CE4; break;
        case 10: goto L_80240CE4; break;
        case 11: goto L_80240CE4; break;
        case 12: goto L_80240CE4; break;
        case 13: goto L_80240CE4; break;
        case 14: goto L_80240CE4; break;
        case 15: goto L_80240CE4; break;
        case 16: goto L_80240520; break;
        case 17: goto L_80240CE4; break;
        case 18: goto L_80240CE4; break;
        case 19: goto L_80240CE4; break;
        case 20: goto L_80240CE4; break;
        case 21: goto L_80240CE4; break;
        case 22: goto L_80240CE4; break;
        case 23: goto L_80240CE4; break;
        case 24: goto L_80240CE4; break;
        case 25: goto L_80240CE4; break;
        case 26: goto L_80240CE4; break;
        case 27: goto L_80240CE4; break;
        case 28: goto L_80240CE4; break;
        case 29: goto L_80240CE4; break;
        case 30: goto L_80240CE4; break;
        case 31: goto L_80240CE4; break;
        case 32: goto L_802408CC; break;
        case 33: goto L_80240CE4; break;
        case 34: goto L_80240CE4; break;
        case 35: goto L_80240CE4; break;
        case 36: goto L_80240CE4; break;
        case 37: goto L_80240CE4; break;
        case 38: goto L_80240CE4; break;
        case 39: goto L_80240CE4; break;
        case 40: goto L_80240CE4; break;
        case 41: goto L_80240CE4; break;
        case 42: goto L_80240CE4; break;
        case 43: goto L_80240CE4; break;
        case 44: goto L_80240CE4; break;
        case 45: goto L_80240CE4; break;
        case 46: goto L_80240CE4; break;
        case 47: goto L_80240CE4; break;
        case 48: goto L_802409AC; break;
        case 49: goto L_80240CE4; break;
        case 50: goto L_80240CE4; break;
        case 51: goto L_80240CE4; break;
        case 52: goto L_80240CE4; break;
        case 53: goto L_80240CE4; break;
        case 54: goto L_80240CE4; break;
        case 55: goto L_80240CE4; break;
        case 56: goto L_80240CE4; break;
        case 57: goto L_80240CE4; break;
        case 58: goto L_80240CE4; break;
        case 59: goto L_80240CE4; break;
        case 60: goto L_80240CE4; break;
        case 61: goto L_80240CE4; break;
        case 62: goto L_80240CE4; break;
        case 63: goto L_80240CE4; break;
        case 64: goto L_80240C18; break;
        case 65: goto L_80240CE4; break;
        case 66: goto L_80240CE4; break;
        case 67: goto L_80240CE4; break;
        case 68: goto L_80240CE4; break;
        case 69: goto L_80240CE4; break;
        case 70: goto L_80240CE4; break;
        case 71: goto L_80240CE4; break;
        case 72: goto L_80240CE4; break;
        case 73: goto L_80240CE4; break;
        case 74: goto L_80240CE4; break;
        case 75: goto L_80240CE4; break;
        case 76: goto L_80240CE4; break;
        case 77: goto L_80240CE4; break;
        case 78: goto L_80240CE4; break;
        case 79: goto L_80240CE4; break;
        case 80: goto L_80240934; break;
        case 81: goto L_80240CE4; break;
        case 82: goto L_80240CE4; break;
        case 83: goto L_80240CE4; break;
        case 84: goto L_80240CE4; break;
        case 85: goto L_80240CE4; break;
        case 86: goto L_80240CE4; break;
        case 87: goto L_80240CE4; break;
        case 88: goto L_80240CE4; break;
        case 89: goto L_80240CE4; break;
        case 90: goto L_80240CE4; break;
        case 91: goto L_80240CE4; break;
        case 92: goto L_80240CE4; break;
        case 93: goto L_80240CE4; break;
        case 94: goto L_80240CE4; break;
        case 95: goto L_80240CE4; break;
        case 96: goto L_80240C4C; break;
        default: switch_error(__func__, 0x80240518, 0x802556F0);
    }
    // 0x8024051C: nop

L_80240520:
    // 0x80240520: beql        $s4, $zero, L_80240878
    if (ctx->r20 == 0) {
        // 0x80240524: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80240878;
    }
    goto skip_0;
    // 0x80240524: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x80240528: lw          $t8, 0x2C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X2C);
    // 0x8024052C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80240530: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80240534: bne         $t8, $at, L_80240CE4
    if (ctx->r24 != ctx->r1) {
        // 0x80240538: andi        $a1, $s3, 0xFF
        ctx->r5 = ctx->r19 & 0XFF;
            goto L_80240CE4;
    }
    // 0x80240538: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    // 0x8024053C: andi        $a2, $s4, 0xFF
    ctx->r6 = ctx->r20 & 0XFF;
    // 0x80240540: jal         0x802403E0
    // 0x80240544: andi        $a3, $s6, 0xFF
    ctx->r7 = ctx->r22 & 0XFF;
    func_802403E0(rdram, ctx);
        goto after_0;
    // 0x80240544: andi        $a3, $s6, 0xFF
    ctx->r7 = ctx->r22 & 0XFF;
    after_0:
    // 0x80240548: beq         $v0, $zero, L_80240CE4
    if (ctx->r2 == 0) {
        // 0x8024054C: or          $s7, $v0, $zero
        ctx->r23 = ctx->r2 | 0;
            goto L_80240CE4;
    }
    // 0x8024054C: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x80240550: lw          $t9, 0x60($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X60);
    // 0x80240554: sll         $fp, $s6, 4
    ctx->r30 = S32(ctx->r22 << 4);
    // 0x80240558: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8024055C: addu        $t6, $t9, $fp
    ctx->r14 = ADD32(ctx->r25, ctx->r30);
    // 0x80240560: lbu         $t7, 0x8($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X8);
    // 0x80240564: sh          $zero, 0x9E($sp)
    MEM_H(0X9E, ctx->r29) = 0;
    // 0x80240568: sb          $zero, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = 0;
    // 0x8024056C: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    // 0x80240570: andi        $a2, $s4, 0xFF
    ctx->r6 = ctx->r20 & 0XFF;
    // 0x80240574: andi        $a3, $s6, 0xFF
    ctx->r7 = ctx->r22 & 0XFF;
    // 0x80240578: jal         0x80240370
    // 0x8024057C: sh          $t7, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r15;
    func_80240370(rdram, ctx);
        goto after_1;
    // 0x8024057C: sh          $t7, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r15;
    after_1:
    // 0x80240580: beq         $v0, $zero, L_80240CE4
    if (ctx->r2 == 0) {
        // 0x80240584: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80240CE4;
    }
    // 0x80240584: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80240588: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x8024058C: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    // 0x80240590: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80240594: jal         0x8023F6D8
    // 0x80240598: addiu       $a2, $sp, 0x9C
    ctx->r6 = ADD32(ctx->r29, 0X9C);
    func_8023F6D8(rdram, ctx);
        goto after_2;
    // 0x80240598: addiu       $a2, $sp, 0x9C
    ctx->r6 = ADD32(ctx->r29, 0X9C);
    after_2:
    // 0x8024059C: sw          $s7, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r23;
    // 0x802405A0: sb          $zero, 0x34($s0)
    MEM_B(0X34, ctx->r16) = 0;
    // 0x802405A4: lw          $t8, 0x60($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X60);
    // 0x802405A8: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x802405AC: addu        $t9, $t8, $fp
    ctx->r25 = ADD32(ctx->r24, ctx->r30);
    // 0x802405B0: lbu         $t6, 0xB($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0XB);
    // 0x802405B4: slti        $at, $t6, 0x40
    ctx->r1 = SIGNED(ctx->r14) < 0X40 ? 1 : 0;
    // 0x802405B8: bnel        $at, $zero, L_802405CC
    if (ctx->r1 != 0) {
        // 0x802405BC: sb          $zero, 0x35($s0)
        MEM_B(0X35, ctx->r16) = 0;
            goto L_802405CC;
    }
    goto skip_1;
    // 0x802405BC: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
    skip_1:
    // 0x802405C0: b           L_802405CC
    // 0x802405C4: sb          $s5, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r21;
        goto L_802405CC;
    // 0x802405C4: sb          $s5, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r21;
    // 0x802405C8: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
L_802405CC:
    // 0x802405CC: lw          $v0, 0x4($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X4);
    // 0x802405D0: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x802405D4: lb          $t6, 0x5($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X5);
    // 0x802405D8: subu        $t8, $s3, $t7
    ctx->r24 = SUB32(ctx->r19, ctx->r15);
    // 0x802405DC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x802405E0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x802405E4: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x802405E8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x802405EC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x802405F0: addu        $a0, $t9, $t6
    ctx->r4 = ADD32(ctx->r25, ctx->r14);
    // 0x802405F4: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x802405F8: jal         0x80241620
    // 0x802405FC: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    func_80241620(rdram, ctx);
        goto after_3;
    // 0x802405FC: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    after_3:
    // 0x80240600: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x80240604: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x80240608: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x8024060C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80240610: lbu         $t6, 0xC($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0XC);
    // 0x80240614: sb          $t6, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r14;
    // 0x80240618: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x8024061C: lw          $t7, 0x1C($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X1C);
    // 0x80240620: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80240624: sb          $zero, 0x37($s0)
    MEM_B(0X37, ctx->r16) = 0;
    // 0x80240628: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x8024062C: sw          $t6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r14;
    // 0x80240630: lw          $t8, 0x60($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X60);
    // 0x80240634: addu        $t7, $t8, $fp
    ctx->r15 = ADD32(ctx->r24, ctx->r30);
    // 0x80240638: lw          $s2, 0x0($t7)
    ctx->r18 = MEM_W(ctx->r15, 0X0);
    // 0x8024063C: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x80240640: lbu         $a2, 0x4($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X4);
    // 0x80240644: beql        $a2, $zero, L_802406B0
    if (ctx->r6 == 0) {
        // 0x80240648: cfc1        $t8, $FpcCsr
        ctx->r24 = get_cop1_cs();
            goto L_802406B0;
    }
    goto skip_2;
    // 0x80240648: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    skip_2:
    // 0x8024064C: lw          $v0, 0x70($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X70);
    // 0x80240650: beql        $v0, $zero, L_802406B0
    if (ctx->r2 == 0) {
        // 0x80240654: cfc1        $t8, $FpcCsr
        ctx->r24 = get_cop1_cs();
            goto L_802406B0;
    }
    goto skip_3;
    // 0x80240654: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    skip_3:
    // 0x80240658: lbu         $t9, 0x6($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X6);
    // 0x8024065C: lbu         $a3, 0x5($s2)
    ctx->r7 = MEM_BU(ctx->r18, 0X5);
    // 0x80240660: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    // 0x80240664: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80240668: lbu         $t6, 0x7($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X7);
    // 0x8024066C: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80240670: jalr        $v0
    // 0x80240674: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80240674: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_4:
    // 0x80240678: beq         $v0, $zero, L_802406AC
    if (ctx->r2 == 0) {
        // 0x8024067C: addiu       $t8, $zero, 0x16
        ctx->r24 = ADD32(0, 0X16);
            goto L_802406AC;
    }
    // 0x8024067C: addiu       $t8, $zero, 0x16
    ctx->r24 = ADD32(0, 0X16);
    // 0x80240680: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80240684: sh          $t8, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r24;
    // 0x80240688: sw          $s0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r16;
    // 0x8024068C: addiu       $a0, $s1, 0x48
    ctx->r4 = ADD32(ctx->r17, 0X48);
    // 0x80240690: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    // 0x80240694: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80240698: jal         0x8023F37C
    // 0x8024069C: sw          $t7, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r15;
    func_8023F37C(rdram, ctx);
        goto after_5;
    // 0x8024069C: sw          $t7, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r15;
    after_5:
    // 0x802406A0: lbu         $t9, 0x37($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X37);
    // 0x802406A4: ori         $t6, $t9, 0x1
    ctx->r14 = ctx->r25 | 0X1;
    // 0x802406A8: sb          $t6, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r14;
L_802406AC:
    // 0x802406AC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
L_802406B0:
    // 0x802406B0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802406B4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802406B8: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802406BC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802406C0: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802406C4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802406C8: nop

    // 0x802406CC: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x802406D0: beql        $t7, $zero, L_80240720
    if (ctx->r15 == 0) {
        // 0x802406D4: mfc1        $t7, $f8
        ctx->r15 = (int32_t)ctx->f8.u32l;
            goto L_80240720;
    }
    goto skip_4;
    // 0x802406D4: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    skip_4:
    // 0x802406D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802406DC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802406E0: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802406E4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802406E8: nop

    // 0x802406EC: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802406F0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802406F4: nop

    // 0x802406F8: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x802406FC: bne         $t7, $zero, L_80240714
    if (ctx->r15 != 0) {
        // 0x80240700: nop
    
            goto L_80240714;
    }
    // 0x80240700: nop

    // 0x80240704: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80240708: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8024070C: b           L_8024072C
    // 0x80240710: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8024072C;
    // 0x80240710: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_80240714:
    // 0x80240714: b           L_8024072C
    // 0x80240718: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8024072C;
    // 0x80240718: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8024071C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
L_80240720:
    // 0x80240720: nop

    // 0x80240724: bltz        $t7, L_80240714
    if (SIGNED(ctx->r15) < 0) {
        // 0x80240728: nop
    
            goto L_80240714;
    }
    // 0x80240728: nop

L_8024072C:
    // 0x8024072C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80240730: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80240734: sb          $t7, 0x36($s0)
    MEM_B(0X36, ctx->r16) = ctx->r15;
    // 0x80240738: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8024073C: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x80240740: lbu         $a2, 0x8($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X8);
    // 0x80240744: addiu       $s5, $s1, 0x48
    ctx->r21 = ADD32(ctx->r17, 0X48);
    // 0x80240748: beql        $a2, $zero, L_802407B8
    if (ctx->r6 == 0) {
        // 0x8024074C: lwc1        $f4, 0x8C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
            goto L_802407B8;
    }
    goto skip_5;
    // 0x8024074C: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    skip_5:
    // 0x80240750: lw          $v0, 0x70($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X70);
    // 0x80240754: beql        $v0, $zero, L_802407B8
    if (ctx->r2 == 0) {
        // 0x80240758: lwc1        $f4, 0x8C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
            goto L_802407B8;
    }
    goto skip_6;
    // 0x80240758: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    skip_6:
    // 0x8024075C: lbu         $t9, 0xA($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0XA);
    // 0x80240760: lbu         $a3, 0x9($s2)
    ctx->r7 = MEM_BU(ctx->r18, 0X9);
    // 0x80240764: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    // 0x80240768: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8024076C: lbu         $t6, 0xB($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0XB);
    // 0x80240770: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80240774: jalr        $v0
    // 0x80240778: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x80240778: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_6:
    // 0x8024077C: beq         $v0, $zero, L_802407B4
    if (ctx->r2 == 0) {
        // 0x80240780: addiu       $t8, $zero, 0x17
        ctx->r24 = ADD32(0, 0X17);
            goto L_802407B4;
    }
    // 0x80240780: addiu       $t8, $zero, 0x17
    ctx->r24 = ADD32(0, 0X17);
    // 0x80240784: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80240788: sh          $t8, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r24;
    // 0x8024078C: sw          $s0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r16;
    // 0x80240790: sb          $s6, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r22;
    // 0x80240794: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80240798: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    // 0x8024079C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x802407A0: jal         0x8023F37C
    // 0x802407A4: sw          $t7, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r15;
    func_8023F37C(rdram, ctx);
        goto after_7;
    // 0x802407A4: sw          $t7, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r15;
    after_7:
    // 0x802407A8: lbu         $t9, 0x37($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X37);
    // 0x802407AC: ori         $t6, $t9, 0x2
    ctx->r14 = ctx->r25 | 0X2;
    // 0x802407B0: sb          $t6, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r14;
L_802407B4:
    // 0x802407B4: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
L_802407B8:
    // 0x802407B8: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x802407BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802407C0: swc1        $f4, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f4.u32l;
    // 0x802407C4: lw          $t8, 0x60($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X60);
    // 0x802407C8: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x802407CC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802407D0: addu        $v0, $t8, $fp
    ctx->r2 = ADD32(ctx->r24, ctx->r30);
    // 0x802407D4: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802407D8: lbu         $s2, 0xA($v0)
    ctx->r18 = MEM_BU(ctx->r2, 0XA);
    // 0x802407DC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802407E0: nop

    // 0x802407E4: mul.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802407E8: jal         0x802402B4
    // 0x802407EC: nop

    func_802402B4(rdram, ctx);
        goto after_8;
    // 0x802407EC: nop

    after_8:
    // 0x802407F0: andi        $s4, $v0, 0xFF
    ctx->r20 = ctx->r2 & 0XFF;
    // 0x802407F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802407F8: jal         0x8023FE94
    // 0x802407FC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8023FE94(rdram, ctx);
        goto after_9;
    // 0x802407FC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_9:
    // 0x80240800: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x80240804: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x80240808: lw          $a2, 0x8($s7)
    ctx->r6 = MEM_W(ctx->r23, 0X8);
    // 0x8024080C: lw          $s3, 0x0($t7)
    ctx->r19 = MEM_W(ctx->r15, 0X0);
    // 0x80240810: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80240814: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80240818: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x8024081C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80240820: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80240824: jal         0x80241670
    // 0x80240828: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    func_80241670(rdram, ctx);
        goto after_10;
    // 0x80240828: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    after_10:
    // 0x8024082C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80240830: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80240834: sh          $t9, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r25;
    // 0x80240838: sw          $t6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r14;
    // 0x8024083C: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x80240840: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80240844: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    // 0x80240848: lbu         $t7, 0xD($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0XD);
    // 0x8024084C: sb          $t7, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r15;
    // 0x80240850: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x80240854: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x80240858: sw          $t6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r14;
    // 0x8024085C: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x80240860: lw          $s3, 0x0($t8)
    ctx->r19 = MEM_W(ctx->r24, 0X0);
    // 0x80240864: jal         0x8023F37C
    // 0x80240868: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_8023F37C(rdram, ctx);
        goto after_11;
    // 0x80240868: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_11:
    // 0x8024086C: b           L_80240CE8
    // 0x80240870: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80240CE8;
    // 0x80240870: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80240874:
    // 0x80240874: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80240878:
    // 0x80240878: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    // 0x8024087C: jal         0x802402FC
    // 0x80240880: andi        $a2, $s6, 0xFF
    ctx->r6 = ctx->r22 & 0XFF;
    func_802402FC(rdram, ctx);
        goto after_12;
    // 0x80240880: andi        $a2, $s6, 0xFF
    ctx->r6 = ctx->r22 & 0XFF;
    after_12:
    // 0x80240884: beq         $v0, $zero, L_80240CE4
    if (ctx->r2 == 0) {
        // 0x80240888: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80240CE4;
    }
    // 0x80240888: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8024088C: lbu         $t7, 0x35($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X35);
    // 0x80240890: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x80240894: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80240898: bne         $s6, $t7, L_802408A8
    if (ctx->r22 != ctx->r15) {
        // 0x8024089C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_802408A8;
    }
    // 0x8024089C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802408A0: b           L_80240CE4
    // 0x802408A4: sb          $t9, 0x35($v0)
    MEM_B(0X35, ctx->r2) = ctx->r25;
        goto L_80240CE4;
    // 0x802408A4: sb          $t9, 0x35($v0)
    MEM_B(0X35, ctx->r2) = ctx->r25;
L_802408A8:
    // 0x802408A8: lw          $t6, 0x20($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X20);
    // 0x802408AC: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x802408B0: sb          $fp, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r30;
    // 0x802408B4: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x802408B8: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x802408BC: jal         0x8023FF1C
    // 0x802408C0: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    func_8023FF1C(rdram, ctx);
        goto after_13;
    // 0x802408C0: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    after_13:
    // 0x802408C4: b           L_80240CE8
    // 0x802408C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80240CE8;
    // 0x802408C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802408CC:
    // 0x802408CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802408D0: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    // 0x802408D4: jal         0x802402FC
    // 0x802408D8: andi        $a2, $s6, 0xFF
    ctx->r6 = ctx->r22 & 0XFF;
    func_802402FC(rdram, ctx);
        goto after_14;
    // 0x802408D8: andi        $a2, $s6, 0xFF
    ctx->r6 = ctx->r22 & 0XFF;
    after_14:
    // 0x802408DC: beq         $v0, $zero, L_80240CE4
    if (ctx->r2 == 0) {
        // 0x802408E0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80240CE4;
    }
    // 0x802408E0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802408E4: sb          $s4, 0x33($v0)
    MEM_B(0X33, ctx->r2) = ctx->r20;
    // 0x802408E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802408EC: jal         0x8023FE94
    // 0x802408F0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8023FE94(rdram, ctx);
        goto after_15;
    // 0x802408F0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_15:
    // 0x802408F4: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x802408F8: lw          $t9, 0x24($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X24);
    // 0x802408FC: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x80240900: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80240904: subu        $a0, $t9, $v1
    ctx->r4 = SUB32(ctx->r25, ctx->r3);
    // 0x80240908: bltz        $a0, L_80240918
    if (SIGNED(ctx->r4) < 0) {
        // 0x8024090C: or          $a2, $t7, $zero
        ctx->r6 = ctx->r15 | 0;
            goto L_80240918;
    }
    // 0x8024090C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80240910: b           L_8024091C
    // 0x80240914: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_8024091C;
    // 0x80240914: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80240918:
    // 0x80240918: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
L_8024091C:
    // 0x8024091C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x80240920: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80240924: jal         0x8023F940
    // 0x80240928: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_8023F940(rdram, ctx);
        goto after_16;
    // 0x80240928: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_16:
    // 0x8024092C: b           L_80240CE8
    // 0x80240930: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80240CE8;
    // 0x80240930: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80240934:
    // 0x80240934: lw          $s0, 0x64($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X64);
    // 0x80240938: beql        $s0, $zero, L_80240CE8
    if (ctx->r16 == 0) {
        // 0x8024093C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80240CE8;
    }
    goto skip_7;
    // 0x8024093C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_7:
    // 0x80240940: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
    // 0x80240944: lbu         $t6, 0x31($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X31);
L_80240948:
    // 0x80240948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024094C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80240950: bnel        $s2, $t6, L_8024099C
    if (ctx->r18 != ctx->r14) {
        // 0x80240954: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_8024099C;
    }
    goto skip_8;
    // 0x80240954: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_8:
    // 0x80240958: jal         0x8023FE94
    // 0x8024095C: sb          $s3, 0x33($s0)
    MEM_B(0X33, ctx->r16) = ctx->r19;
    func_8023FE94(rdram, ctx);
        goto after_17;
    // 0x8024095C: sb          $s3, 0x33($s0)
    MEM_B(0X33, ctx->r16) = ctx->r19;
    after_17:
    // 0x80240960: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x80240964: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x80240968: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x8024096C: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80240970: subu        $a0, $t7, $v1
    ctx->r4 = SUB32(ctx->r15, ctx->r3);
    // 0x80240974: bltz        $a0, L_80240984
    if (SIGNED(ctx->r4) < 0) {
        // 0x80240978: or          $a2, $t8, $zero
        ctx->r6 = ctx->r24 | 0;
            goto L_80240984;
    }
    // 0x80240978: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8024097C: b           L_80240988
    // 0x80240980: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_80240988;
    // 0x80240980: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80240984:
    // 0x80240984: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
L_80240988:
    // 0x80240988: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x8024098C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80240990: jal         0x8023F940
    // 0x80240994: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_8023F940(rdram, ctx);
        goto after_18;
    // 0x80240994: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_18:
    // 0x80240998: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_8024099C:
    // 0x8024099C: bnel        $s0, $zero, L_80240948
    if (ctx->r16 != 0) {
        // 0x802409A0: lbu         $t6, 0x31($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X31);
            goto L_80240948;
    }
    goto skip_9;
    // 0x802409A0: lbu         $t6, 0x31($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X31);
    skip_9:
    // 0x802409A4: b           L_80240CE8
    // 0x802409A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80240CE8;
    // 0x802409A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802409AC:
    // 0x802409AC: slti        $at, $s3, 0x41
    ctx->r1 = SIGNED(ctx->r19) < 0X41 ? 1 : 0;
    // 0x802409B0: bne         $at, $zero, L_802409D4
    if (ctx->r1 != 0) {
        // 0x802409B4: or          $v0, $s3, $zero
        ctx->r2 = ctx->r19 | 0;
            goto L_802409D4;
    }
    // 0x802409B4: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x802409B8: addiu       $at, $zero, 0x5B
    ctx->r1 = ADD32(0, 0X5B);
    // 0x802409BC: beq         $v0, $at, L_80240BC8
    if (ctx->r2 == ctx->r1) {
        // 0x802409C0: addiu       $at, $zero, 0x5D
        ctx->r1 = ADD32(0, 0X5D);
            goto L_80240BC8;
    }
    // 0x802409C0: addiu       $at, $zero, 0x5D
    ctx->r1 = ADD32(0, 0X5D);
    // 0x802409C4: beql        $v0, $at, L_80240CE8
    if (ctx->r2 == ctx->r1) {
        // 0x802409C8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80240CE8;
    }
    goto skip_10;
    // 0x802409C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_10:
    // 0x802409CC: b           L_80240CE8
    // 0x802409D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80240CE8;
    // 0x802409D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802409D4:
    // 0x802409D4: slti        $at, $v0, 0x1C
    ctx->r1 = SIGNED(ctx->r2) < 0X1C ? 1 : 0;
    // 0x802409D8: bne         $at, $zero, L_802409F4
    if (ctx->r1 != 0) {
        // 0x802409DC: addiu       $t9, $v0, -0x7
        ctx->r25 = ADD32(ctx->r2, -0X7);
            goto L_802409F4;
    }
    // 0x802409DC: addiu       $t9, $v0, -0x7
    ctx->r25 = ADD32(ctx->r2, -0X7);
    // 0x802409E0: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x802409E4: beql        $v0, $at, L_80240B1C
    if (ctx->r2 == ctx->r1) {
        // 0x802409E8: lw          $t7, 0x60($s1)
        ctx->r15 = MEM_W(ctx->r17, 0X60);
            goto L_80240B1C;
    }
    goto skip_11;
    // 0x802409E8: lw          $t7, 0x60($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X60);
    skip_11:
    // 0x802409EC: b           L_80240CE8
    // 0x802409F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80240CE8;
    // 0x802409F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802409F4:
    // 0x802409F4: sltiu       $at, $t9, 0x15
    ctx->r1 = ctx->r25 < 0X15 ? 1 : 0;
    // 0x802409F8: beq         $at, $zero, L_80240CE4
    if (ctx->r1 == 0) {
        // 0x802409FC: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_80240CE4;
    }
    // 0x802409FC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80240A00: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80240A04: addu        $at, $at, $t9
    gpr jr_addend_80240A0C = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80240A08: lw          $t9, 0x5874($at)
    ctx->r25 = ADD32(ctx->r1, 0X5874);
    // 0x80240A0C: jr          $t9
    // 0x80240A10: nop

    switch (jr_addend_80240A0C >> 2) {
        case 0: goto L_80240A70; break;
        case 1: goto L_80240CE4; break;
        case 2: goto L_80240CE4; break;
        case 3: goto L_80240A14; break;
        case 4: goto L_80240CE4; break;
        case 5: goto L_80240CE4; break;
        case 6: goto L_80240CE4; break;
        case 7: goto L_80240CE4; break;
        case 8: goto L_80240CE4; break;
        case 9: goto L_80240B04; break;
        case 10: goto L_80240CE4; break;
        case 11: goto L_80240CE4; break;
        case 12: goto L_80240CE4; break;
        case 13: goto L_80240CE4; break;
        case 14: goto L_80240CE4; break;
        case 15: goto L_80240CE4; break;
        case 16: goto L_80240CE4; break;
        case 17: goto L_80240CE4; break;
        case 18: goto L_80240CE4; break;
        case 19: goto L_80240CE4; break;
        case 20: goto L_80240CE4; break;
        default: switch_error(__func__, 0x80240A0C, 0x80255874);
    }
    // 0x80240A10: nop

L_80240A14:
    // 0x80240A14: lw          $t6, 0x60($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X60);
    // 0x80240A18: sll         $t8, $s6, 4
    ctx->r24 = S32(ctx->r22 << 4);
    // 0x80240A1C: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x80240A20: sb          $s4, 0x7($t7)
    MEM_B(0X7, ctx->r15) = ctx->r20;
    // 0x80240A24: lw          $s0, 0x64($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X64);
    // 0x80240A28: beql        $s0, $zero, L_80240CE8
    if (ctx->r16 == 0) {
        // 0x80240A2C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80240CE8;
    }
    goto skip_12;
    // 0x80240A2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_12:
    // 0x80240A30: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
    // 0x80240A34: lbu         $t9, 0x31($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X31);
L_80240A38:
    // 0x80240A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80240A3C: bnel        $s2, $t9, L_80240A60
    if (ctx->r18 != ctx->r25) {
        // 0x80240A40: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80240A60;
    }
    goto skip_13;
    // 0x80240A40: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_13:
    // 0x80240A44: jal         0x802402B4
    // 0x80240A48: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_802402B4(rdram, ctx);
        goto after_19;
    // 0x80240A48: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_19:
    // 0x80240A4C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x80240A50: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80240A54: jal         0x8023F8B0
    // 0x80240A58: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    func_8023F8B0(rdram, ctx);
        goto after_20;
    // 0x80240A58: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    after_20:
    // 0x80240A5C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80240A60:
    // 0x80240A60: bnel        $s0, $zero, L_80240A38
    if (ctx->r16 != 0) {
        // 0x80240A64: lbu         $t9, 0x31($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X31);
            goto L_80240A38;
    }
    goto skip_14;
    // 0x80240A64: lbu         $t9, 0x31($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X31);
    skip_14:
    // 0x80240A68: b           L_80240CE8
    // 0x80240A6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80240CE8;
    // 0x80240A6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80240A70:
    // 0x80240A70: lw          $t6, 0x60($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X60);
    // 0x80240A74: sll         $t8, $s6, 4
    ctx->r24 = S32(ctx->r22 << 4);
    // 0x80240A78: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x80240A7C: sb          $s4, 0x9($t7)
    MEM_B(0X9, ctx->r15) = ctx->r20;
    // 0x80240A80: lw          $s0, 0x64($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X64);
    // 0x80240A84: beql        $s0, $zero, L_80240CE8
    if (ctx->r16 == 0) {
        // 0x80240A88: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80240CE8;
    }
    goto skip_15;
    // 0x80240A88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_15:
    // 0x80240A8C: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
    // 0x80240A90: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
    // 0x80240A94: lbu         $t9, 0x31($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X31);
L_80240A98:
    // 0x80240A98: bnel        $s2, $t9, L_80240AF4
    if (ctx->r18 != ctx->r25) {
        // 0x80240A9C: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80240AF4;
    }
    goto skip_16;
    // 0x80240A9C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_16:
    // 0x80240AA0: lbu         $t6, 0x34($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X34);
    // 0x80240AA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80240AA8: beql        $s3, $t6, L_80240AF4
    if (ctx->r19 == ctx->r14) {
        // 0x80240AAC: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80240AF4;
    }
    goto skip_17;
    // 0x80240AAC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_17:
    // 0x80240AB0: jal         0x8023FE94
    // 0x80240AB4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8023FE94(rdram, ctx);
        goto after_21;
    // 0x80240AB4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_21:
    // 0x80240AB8: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x80240ABC: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x80240AC0: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x80240AC4: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80240AC8: subu        $a0, $t7, $v1
    ctx->r4 = SUB32(ctx->r15, ctx->r3);
    // 0x80240ACC: bltz        $a0, L_80240ADC
    if (SIGNED(ctx->r4) < 0) {
        // 0x80240AD0: or          $a2, $t8, $zero
        ctx->r6 = ctx->r24 | 0;
            goto L_80240ADC;
    }
    // 0x80240AD0: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80240AD4: b           L_80240AE0
    // 0x80240AD8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_80240AE0;
    // 0x80240AD8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80240ADC:
    // 0x80240ADC: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
L_80240AE0:
    // 0x80240AE0: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x80240AE4: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80240AE8: jal         0x8023F940
    // 0x80240AEC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_8023F940(rdram, ctx);
        goto after_22;
    // 0x80240AEC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_22:
    // 0x80240AF0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80240AF4:
    // 0x80240AF4: bnel        $s0, $zero, L_80240A98
    if (ctx->r16 != 0) {
        // 0x80240AF8: lbu         $t9, 0x31($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X31);
            goto L_80240A98;
    }
    goto skip_18;
    // 0x80240AF8: lbu         $t9, 0x31($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X31);
    skip_18:
    // 0x80240AFC: b           L_80240CE8
    // 0x80240B00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80240CE8;
    // 0x80240B00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80240B04:
    // 0x80240B04: lw          $t9, 0x60($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X60);
    // 0x80240B08: sll         $t6, $s6, 4
    ctx->r14 = S32(ctx->r22 << 4);
    // 0x80240B0C: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x80240B10: b           L_80240CE4
    // 0x80240B14: sb          $s4, 0x8($t8)
    MEM_B(0X8, ctx->r24) = ctx->r20;
        goto L_80240CE4;
    // 0x80240B14: sb          $s4, 0x8($t8)
    MEM_B(0X8, ctx->r24) = ctx->r20;
    // 0x80240B18: lw          $t7, 0x60($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X60);
L_80240B1C:
    // 0x80240B1C: sll         $t9, $s6, 4
    ctx->r25 = S32(ctx->r22 << 4);
    // 0x80240B20: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80240B24: sb          $s4, 0xB($t6)
    MEM_B(0XB, ctx->r14) = ctx->r20;
    // 0x80240B28: lw          $s0, 0x64($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X64);
    // 0x80240B2C: beql        $s0, $zero, L_80240CE8
    if (ctx->r16 == 0) {
        // 0x80240B30: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80240CE8;
    }
    goto skip_19;
    // 0x80240B30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_19:
    // 0x80240B34: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
    // 0x80240B38: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x80240B3C: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x80240B40: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
    // 0x80240B44: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x80240B48: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
    // 0x80240B4C: lbu         $t8, 0x31($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X31);
L_80240B50:
    // 0x80240B50: bnel        $s2, $t8, L_80240BB8
    if (ctx->r18 != ctx->r24) {
        // 0x80240B54: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80240BB8;
    }
    goto skip_20;
    // 0x80240B54: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_20:
    // 0x80240B58: lbu         $v0, 0x35($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X35);
    // 0x80240B5C: slti        $at, $s4, 0x40
    ctx->r1 = SIGNED(ctx->r20) < 0X40 ? 1 : 0;
    // 0x80240B60: beql        $s3, $v0, L_80240BB8
    if (ctx->r19 == ctx->r2) {
        // 0x80240B64: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80240BB8;
    }
    goto skip_21;
    // 0x80240B64: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_21:
    // 0x80240B68: bne         $at, $zero, L_80240B80
    if (ctx->r1 != 0) {
        // 0x80240B6C: nop
    
            goto L_80240B80;
    }
    // 0x80240B6C: nop

    // 0x80240B70: bnel        $v0, $zero, L_80240BB8
    if (ctx->r2 != 0) {
        // 0x80240B74: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80240BB8;
    }
    goto skip_22;
    // 0x80240B74: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_22:
    // 0x80240B78: b           L_80240BB4
    // 0x80240B7C: sb          $s5, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r21;
        goto L_80240BB4;
    // 0x80240B7C: sb          $s5, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r21;
L_80240B80:
    // 0x80240B80: bne         $s6, $v0, L_80240B90
    if (ctx->r22 != ctx->r2) {
        // 0x80240B84: nop
    
            goto L_80240B90;
    }
    // 0x80240B84: nop

    // 0x80240B88: b           L_80240BB4
    // 0x80240B8C: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
        goto L_80240BB4;
    // 0x80240B8C: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
L_80240B90:
    // 0x80240B90: bnel        $s7, $v0, L_80240BB8
    if (ctx->r23 != ctx->r2) {
        // 0x80240B94: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80240BB8;
    }
    goto skip_23;
    // 0x80240B94: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_23:
    // 0x80240B98: lw          $t7, 0x20($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X20);
    // 0x80240B9C: sb          $fp, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r30;
    // 0x80240BA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80240BA4: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x80240BA8: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80240BAC: jal         0x8023FF1C
    // 0x80240BB0: lw          $a2, 0x8($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X8);
    func_8023FF1C(rdram, ctx);
        goto after_23;
    // 0x80240BB0: lw          $a2, 0x8($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X8);
    after_23:
L_80240BB4:
    // 0x80240BB4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80240BB8:
    // 0x80240BB8: bnel        $s0, $zero, L_80240B50
    if (ctx->r16 != 0) {
        // 0x80240BBC: lbu         $t8, 0x31($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X31);
            goto L_80240B50;
    }
    goto skip_24;
    // 0x80240BBC: lbu         $t8, 0x31($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X31);
    skip_24:
    // 0x80240BC0: b           L_80240CE8
    // 0x80240BC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80240CE8;
    // 0x80240BC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80240BC8:
    // 0x80240BC8: lw          $t6, 0x60($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X60);
    // 0x80240BCC: sll         $t8, $s6, 4
    ctx->r24 = S32(ctx->r22 << 4);
    // 0x80240BD0: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x80240BD4: sb          $s4, 0xA($t7)
    MEM_B(0XA, ctx->r15) = ctx->r20;
    // 0x80240BD8: lw          $s0, 0x64($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X64);
    // 0x80240BDC: beql        $s0, $zero, L_80240CE8
    if (ctx->r16 == 0) {
        // 0x80240BE0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80240CE8;
    }
    goto skip_25;
    // 0x80240BE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_25:
    // 0x80240BE4: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
    // 0x80240BE8: lbu         $t9, 0x31($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X31);
L_80240BEC:
    // 0x80240BEC: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80240BF0: andi        $a2, $s4, 0xFF
    ctx->r6 = ctx->r20 & 0XFF;
    // 0x80240BF4: bnel        $s2, $t9, L_80240C08
    if (ctx->r18 != ctx->r25) {
        // 0x80240BF8: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80240C08;
    }
    goto skip_26;
    // 0x80240BF8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_26:
    // 0x80240BFC: jal         0x8023FA70
    // 0x80240C00: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    func_8023FA70(rdram, ctx);
        goto after_24;
    // 0x80240C00: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    after_24:
    // 0x80240C04: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80240C08:
    // 0x80240C08: bnel        $s0, $zero, L_80240BEC
    if (ctx->r16 != 0) {
        // 0x80240C0C: lbu         $t9, 0x31($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X31);
            goto L_80240BEC;
    }
    goto skip_27;
    // 0x80240C0C: lbu         $t9, 0x31($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X31);
    skip_27:
    // 0x80240C10: b           L_80240CE8
    // 0x80240C14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80240CE8;
    // 0x80240C14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80240C18:
    // 0x80240C18: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x80240C1C: sll         $t8, $s3, 2
    ctx->r24 = S32(ctx->r19 << 2);
    // 0x80240C20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80240C24: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x80240C28: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80240C2C: addu        $t7, $v0, $t8
    ctx->r15 = ADD32(ctx->r2, ctx->r24);
    // 0x80240C30: slt         $at, $s3, $t6
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80240C34: beql        $at, $zero, L_80240CE8
    if (ctx->r1 == 0) {
        // 0x80240C38: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80240CE8;
    }
    goto skip_28;
    // 0x80240C38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_28:
    // 0x80240C3C: jal         0x8023FCE0
    // 0x80240C40: lw          $a1, 0xC($t7)
    ctx->r5 = MEM_W(ctx->r15, 0XC);
    func_8023FCE0(rdram, ctx);
        goto after_25;
    // 0x80240C40: lw          $a1, 0xC($t7)
    ctx->r5 = MEM_W(ctx->r15, 0XC);
    after_25:
    // 0x80240C44: b           L_80240CE8
    // 0x80240C48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80240CE8;
    // 0x80240C48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80240C4C:
    // 0x80240C4C: lw          $t9, 0x60($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X60);
    // 0x80240C50: sll         $fp, $s6, 4
    ctx->r30 = S32(ctx->r22 << 4);
    // 0x80240C54: sll         $t7, $s4, 7
    ctx->r15 = S32(ctx->r20 << 7);
    // 0x80240C58: addu        $t6, $t9, $fp
    ctx->r14 = ADD32(ctx->r25, ctx->r30);
    // 0x80240C5C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80240C60: addu        $t9, $t7, $s3
    ctx->r25 = ADD32(ctx->r15, ctx->r19);
    // 0x80240C64: addiu       $t6, $t9, -0x2000
    ctx->r14 = ADD32(ctx->r25, -0X2000);
    // 0x80240C68: multu       $t8, $t6
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80240C6C: mflo        $a0
    ctx->r4 = lo;
    // 0x80240C70: bgez        $a0, L_80240C80
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80240C74: sra         $t7, $a0, 13
        ctx->r15 = S32(SIGNED(ctx->r4) >> 13);
            goto L_80240C80;
    }
    // 0x80240C74: sra         $t7, $a0, 13
    ctx->r15 = S32(SIGNED(ctx->r4) >> 13);
    // 0x80240C78: addiu       $at, $a0, 0x1FFF
    ctx->r1 = ADD32(ctx->r4, 0X1FFF);
    // 0x80240C7C: sra         $t7, $at, 13
    ctx->r15 = S32(SIGNED(ctx->r1) >> 13);
L_80240C80:
    // 0x80240C80: jal         0x80241620
    // 0x80240C84: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80241620(rdram, ctx);
        goto after_26;
    // 0x80240C84: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_26:
    // 0x80240C88: lw          $t9, 0x60($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X60);
    // 0x80240C8C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80240C90: addu        $t8, $t9, $fp
    ctx->r24 = ADD32(ctx->r25, ctx->r30);
    // 0x80240C94: swc1        $f0, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f0.u32l;
    // 0x80240C98: lw          $s0, 0x64($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X64);
    // 0x80240C9C: beql        $s0, $zero, L_80240CE8
    if (ctx->r16 == 0) {
        // 0x80240CA0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80240CE8;
    }
    goto skip_29;
    // 0x80240CA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_29:
    // 0x80240CA4: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
    // 0x80240CA8: lbu         $t6, 0x31($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X31);
L_80240CAC:
    // 0x80240CAC: bnel        $s2, $t6, L_80240CDC
    if (ctx->r18 != ctx->r14) {
        // 0x80240CB0: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80240CDC;
    }
    goto skip_30;
    // 0x80240CB0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_30:
    // 0x80240CB4: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80240CB8: lwc1        $f10, 0x2C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x80240CBC: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x80240CC0: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80240CC4: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80240CC8: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80240CCC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80240CD0: jal         0x8023F9E0
    // 0x80240CD4: nop

    func_8023F9E0(rdram, ctx);
        goto after_27;
    // 0x80240CD4: nop

    after_27:
    // 0x80240CD8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80240CDC:
    // 0x80240CDC: bnel        $s0, $zero, L_80240CAC
    if (ctx->r16 != 0) {
        // 0x80240CE0: lbu         $t6, 0x31($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X31);
            goto L_80240CAC;
    }
    goto skip_31;
    // 0x80240CE0: lbu         $t6, 0x31($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X31);
    skip_31:
L_80240CE4:
    // 0x80240CE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80240CE8:
    // 0x80240CE8: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    // 0x80240CEC: jr          $ra
    // 0x80240CF0: nop

    return;
    // 0x80240CF0: nop

    // 0x80240CF4: jr          $ra
    // 0x80240CF8: nop

    return;
    // 0x80240CF8: nop

;}
RECOMP_FUNC void func_80224010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80224010: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80224014: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80224018: lui         $a0, 0x12
    ctx->r4 = S32(0X12 << 16);
    // 0x8022401C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80224020: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80224024: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80224028: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022402C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80224030: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80224034: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80224038: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022403C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80224040: addiu       $a0, $a0, -0x7970
    ctx->r4 = ADD32(ctx->r4, -0X7970);
    // 0x80224044: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x80224048: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x8022404C: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x80224050: jal         0x80223840
    // 0x80224054: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80224054: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    after_0:
    // 0x80224058: lui         $s1, 0x12
    ctx->r17 = S32(0X12 << 16);
    // 0x8022405C: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x80224060: addiu       $s1, $s1, -0x6AD0
    ctx->r17 = ADD32(ctx->r17, -0X6AD0);
    // 0x80224064: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80224068: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8022406C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x80224070: jal         0x8022393C
    // 0x80224074: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_1;
    // 0x80224074: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80224078: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x8022407C: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80224080: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80224084: beq         $v0, $zero, L_80224550
    if (ctx->r2 == 0) {
        // 0x80224088: lw          $t3, 0x50($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X50);
            goto L_80224550;
    }
    // 0x80224088: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8022408C: lui         $fp, 0x5556
    ctx->r30 = S32(0X5556 << 16);
    // 0x80224090: lui         $s7, 0x5556
    ctx->r23 = S32(0X5556 << 16);
    // 0x80224094: lui         $s6, 0x5556
    ctx->r22 = S32(0X5556 << 16);
    // 0x80224098: lui         $s5, 0x5556
    ctx->r21 = S32(0X5556 << 16);
    // 0x8022409C: lui         $s4, 0x5556
    ctx->r20 = S32(0X5556 << 16);
    // 0x802240A0: lui         $s2, 0x8027
    ctx->r18 = S32(0X8027 << 16);
    // 0x802240A4: lui         $s0, 0x8027
    ctx->r16 = S32(0X8027 << 16);
    // 0x802240A8: addiu       $s0, $s0, 0x51E8
    ctx->r16 = ADD32(ctx->r16, 0X51E8);
    // 0x802240AC: addiu       $s2, $s2, 0x5208
    ctx->r18 = ADD32(ctx->r18, 0X5208);
    // 0x802240B0: ori         $s4, $s4, 0x5359
    ctx->r20 = ctx->r20 | 0X5359;
    // 0x802240B4: ori         $s5, $s5, 0x4254
    ctx->r21 = ctx->r21 | 0X4254;
    // 0x802240B8: ori         $s6, $s6, 0x5358
    ctx->r22 = ctx->r22 | 0X5358;
    // 0x802240BC: ori         $s7, $s7, 0x4C54
    ctx->r23 = ctx->r23 | 0X4C54;
    // 0x802240C0: ori         $fp, $fp, 0x4D42
    ctx->r30 = ctx->r30 | 0X4D42;
L_802240C4:
    // 0x802240C4: lui         $at, 0x5441
    ctx->r1 = S32(0X5441 << 16);
    // 0x802240C8: ori         $at, $at, 0x424C
    ctx->r1 = ctx->r1 | 0X424C;
    // 0x802240CC: bne         $v0, $at, L_80224518
    if (ctx->r2 != ctx->r1) {
        // 0x802240D0: lw          $t6, 0x6C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X6C);
            goto L_80224518;
    }
    // 0x802240D0: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x802240D4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802240D8: beq         $t6, $zero, L_80224148
    if (ctx->r14 == 0) {
        // 0x802240DC: lw          $v1, 0x68($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X68);
            goto L_80224148;
    }
    // 0x802240DC: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
L_802240E0:
    // 0x802240E0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802240E4: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x802240E8: bne         $s4, $v0, L_802240F8
    if (ctx->r20 != ctx->r2) {
        // 0x802240EC: nop
    
            goto L_802240F8;
    }
    // 0x802240EC: nop

    // 0x802240F0: sw          $s1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r17;
    // 0x802240F4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_802240F8:
    // 0x802240F8: bne         $s5, $v0, L_80224108
    if (ctx->r21 != ctx->r2) {
        // 0x802240FC: lw          $t8, 0x6C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X6C);
            goto L_80224108;
    }
    // 0x802240FC: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x80224100: b           L_80224134
    // 0x80224104: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
        goto L_80224134;
    // 0x80224104: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_80224108:
    // 0x80224108: bne         $s6, $v0, L_80224118
    if (ctx->r22 != ctx->r2) {
        // 0x8022410C: nop
    
            goto L_80224118;
    }
    // 0x8022410C: nop

    // 0x80224110: b           L_80224134
    // 0x80224114: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
        goto L_80224134;
    // 0x80224114: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
L_80224118:
    // 0x80224118: bne         $fp, $v0, L_80224128
    if (ctx->r30 != ctx->r2) {
        // 0x8022411C: nop
    
            goto L_80224128;
    }
    // 0x8022411C: nop

    // 0x80224120: b           L_80224134
    // 0x80224124: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
        goto L_80224134;
    // 0x80224124: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_80224128:
    // 0x80224128: bnel        $s7, $v0, L_80224138
    if (ctx->r23 != ctx->r2) {
        // 0x8022412C: lw          $t7, 0x4($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X4);
            goto L_80224138;
    }
    goto skip_0;
    // 0x8022412C: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    skip_0:
    // 0x80224130: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
L_80224134:
    // 0x80224134: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
L_80224138:
    // 0x80224138: sltu        $at, $s3, $t8
    ctx->r1 = ctx->r19 < ctx->r24 ? 1 : 0;
    // 0x8022413C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80224140: bne         $at, $zero, L_802240E0
    if (ctx->r1 != 0) {
        // 0x80224144: addu        $s1, $s1, $t7
        ctx->r17 = ADD32(ctx->r17, ctx->r15);
            goto L_802240E0;
    }
    // 0x80224144: addu        $s1, $s1, $t7
    ctx->r17 = ADD32(ctx->r17, ctx->r15);
L_80224148:
    // 0x80224148: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x8022414C: lui         $s1, 0x12
    ctx->r17 = S32(0X12 << 16);
    // 0x80224150: addiu       $s1, $s1, -0x6AD0
    ctx->r17 = ADD32(ctx->r17, -0X6AD0);
    // 0x80224154: bne         $t9, $zero, L_80224170
    if (ctx->r25 != 0) {
        // 0x80224158: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80224170;
    }
    // 0x80224158: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8022415C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80224160: jal         0x80231A24
    // 0x80224164: addiu       $a0, $a0, 0x39F0
    ctx->r4 = ADD32(ctx->r4, 0X39F0);
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x80224164: addiu       $a0, $a0, 0x39F0
    ctx->r4 = ADD32(ctx->r4, 0X39F0);
    after_2:
    // 0x80224168: b           L_8022458C
    // 0x8022416C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8022458C;
    // 0x8022416C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80224170:
    // 0x80224170: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x80224174: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x80224178: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x8022417C: jal         0x802245B8
    // 0x80224180: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    func_802245B8(rdram, ctx);
        goto after_3;
    // 0x80224180: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    after_3:
    // 0x80224184: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80224188: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x8022418C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80224190: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80224194: sh          $t0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r8;
    // 0x80224198: sh          $t1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r9;
    // 0x8022419C: sh          $t2, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r10;
    // 0x802241A0: jal         0x8022466C
    // 0x802241A4: sh          $t3, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r11;
    func_8022466C(rdram, ctx);
        goto after_4;
    // 0x802241A4: sh          $t3, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r11;
    after_4:
    // 0x802241A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802241AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802241B0: jal         0x8022B780
    // 0x802241B4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_8022B780(rdram, ctx);
        goto after_5;
    // 0x802241B4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_5:
    // 0x802241B8: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x802241BC: lui         $t4, 0x5556
    ctx->r12 = S32(0X5556 << 16);
    // 0x802241C0: lui         $t5, 0x5556
    ctx->r13 = S32(0X5556 << 16);
    // 0x802241C4: lui         $ra, 0x5556
    ctx->r31 = S32(0X5556 << 16);
    // 0x802241C8: ori         $ra, $ra, 0x4D53
    ctx->r31 = ctx->r31 | 0X4D53;
    // 0x802241CC: ori         $t5, $t5, 0x4D44
    ctx->r13 = ctx->r13 | 0X4D44;
    // 0x802241D0: ori         $t4, $t4, 0x4D43
    ctx->r12 = ctx->r12 | 0X4D43;
    // 0x802241D4: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x802241D8: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x802241DC: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x802241E0: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x802241E4: beq         $t6, $zero, L_80224518
    if (ctx->r14 == 0) {
        // 0x802241E8: lw          $v1, 0x68($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X68);
            goto L_80224518;
    }
    // 0x802241E8: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
L_802241EC:
    // 0x802241EC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802241F0: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x802241F4: slt         $at, $v0, $t4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x802241F8: bnel        $at, $zero, L_8022425C
    if (ctx->r1 != 0) {
        // 0x802241FC: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_8022425C;
    }
    goto skip_1;
    // 0x802241FC: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    skip_1:
    // 0x80224200: beql        $v0, $t5, L_80224350
    if (ctx->r2 == ctx->r13) {
        // 0x80224204: lhu         $t9, 0x2($s0)
        ctx->r25 = MEM_HU(ctx->r16, 0X2);
            goto L_80224350;
    }
    goto skip_2;
    // 0x80224204: lhu         $t9, 0x2($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X2);
    skip_2:
    // 0x80224208: beq         $v0, $ra, L_802244D8
    if (ctx->r2 == ctx->r31) {
        // 0x8022420C: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_802244D8;
    }
    // 0x8022420C: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224210: ori         $at, $at, 0x5351
    ctx->r1 = ctx->r1 | 0X5351;
    // 0x80224214: beql        $v0, $at, L_80224428
    if (ctx->r2 == ctx->r1) {
        // 0x80224218: lhu         $t6, 0xE($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0XE);
            goto L_80224428;
    }
    goto skip_3;
    // 0x80224218: lhu         $t6, 0xE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XE);
    skip_3:
    // 0x8022421C: beql        $v0, $s6, L_80224494
    if (ctx->r2 == ctx->r22) {
        // 0x80224220: lhu         $t8, 0x1A($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X1A);
            goto L_80224494;
    }
    goto skip_4;
    // 0x80224220: lhu         $t8, 0x1A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X1A);
    skip_4:
    // 0x80224224: beq         $v0, $s4, L_802242D8
    if (ctx->r2 == ctx->r20) {
        // 0x80224228: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_802242D8;
    }
    // 0x80224228: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x8022422C: ori         $at, $at, 0x5450
    ctx->r1 = ctx->r1 | 0X5450;
    // 0x80224230: beq         $v0, $at, L_8022446C
    if (ctx->r2 == ctx->r1) {
        // 0x80224234: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_8022446C;
    }
    // 0x80224234: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224238: ori         $at, $at, 0x5452
    ctx->r1 = ctx->r1 | 0X5452;
    // 0x8022423C: beq         $v0, $at, L_80224448
    if (ctx->r2 == ctx->r1) {
        // 0x80224240: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224448;
    }
    // 0x80224240: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224244: ori         $at, $at, 0x5458
    ctx->r1 = ctx->r1 | 0X5458;
    // 0x80224248: beql        $v0, $at, L_80224398
    if (ctx->r2 == ctx->r1) {
        // 0x8022424C: lhu         $t6, 0x6($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0X6);
            goto L_80224398;
    }
    goto skip_5;
    // 0x8022424C: lhu         $t6, 0x6($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X6);
    skip_5:
    // 0x80224250: b           L_802244E4
    // 0x80224254: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
        goto L_802244E4;
    // 0x80224254: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
    // 0x80224258: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
L_8022425C:
    // 0x8022425C: ori         $at, $at, 0x454F
    ctx->r1 = ctx->r1 | 0X454F;
    // 0x80224260: slt         $at, $v0, $at
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80224264: bne         $at, $zero, L_8022429C
    if (ctx->r1 != 0) {
        // 0x80224268: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_8022429C;
    }
    // 0x80224268: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x8022426C: ori         $at, $at, 0x4654
    ctx->r1 = ctx->r1 | 0X4654;
    // 0x80224270: beql        $v0, $at, L_80224308
    if (ctx->r2 == ctx->r1) {
        // 0x80224274: lhu         $t6, 0x14($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0X14);
            goto L_80224308;
    }
    goto skip_6;
    // 0x80224274: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    skip_6:
    // 0x80224278: beq         $v0, $s7, L_802243DC
    if (ctx->r2 == ctx->r23) {
        // 0x8022427C: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_802243DC;
    }
    // 0x8022427C: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224280: ori         $at, $at, 0x4C56
    ctx->r1 = ctx->r1 | 0X4C56;
    // 0x80224284: beql        $v0, $at, L_80224404
    if (ctx->r2 == ctx->r1) {
        // 0x80224288: lhu         $t8, 0x10($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X10);
            goto L_80224404;
    }
    goto skip_7;
    // 0x80224288: lhu         $t8, 0x10($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X10);
    skip_7:
    // 0x8022428C: beql        $v0, $fp, L_802244B8
    if (ctx->r2 == ctx->r30) {
        // 0x80224290: lhu         $t6, 0x1C($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0X1C);
            goto L_802244B8;
    }
    goto skip_8;
    // 0x80224290: lhu         $t6, 0x1C($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X1C);
    skip_8:
    // 0x80224294: b           L_802244E4
    // 0x80224298: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
        goto L_802244E4;
    // 0x80224298: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
L_8022429C:
    // 0x8022429C: beq         $v0, $zero, L_80224500
    if (ctx->r2 == 0) {
        // 0x802242A0: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224500;
    }
    // 0x802242A0: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x802242A4: ori         $at, $at, 0x414E
    ctx->r1 = ctx->r1 | 0X414E;
    // 0x802242A8: beql        $v0, $at, L_802242E4
    if (ctx->r2 == ctx->r1) {
        // 0x802242AC: lhu         $t8, 0x12($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X12);
            goto L_802242E4;
    }
    goto skip_9;
    // 0x802242AC: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    skip_9:
    // 0x802242B0: beq         $v0, $s5, L_80224328
    if (ctx->r2 == ctx->r21) {
        // 0x802242B4: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224328;
    }
    // 0x802242B4: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x802242B8: ori         $at, $at, 0x4354
    ctx->r1 = ctx->r1 | 0X4354;
    // 0x802242BC: beq         $v0, $at, L_80224370
    if (ctx->r2 == ctx->r1) {
        // 0x802242C0: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224370;
    }
    // 0x802242C0: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x802242C4: ori         $at, $at, 0x454E
    ctx->r1 = ctx->r1 | 0X454E;
    // 0x802242C8: beql        $v0, $at, L_802243BC
    if (ctx->r2 == ctx->r1) {
        // 0x802242CC: lhu         $t7, 0x8($s0)
        ctx->r15 = MEM_HU(ctx->r16, 0X8);
            goto L_802243BC;
    }
    goto skip_10;
    // 0x802242CC: lhu         $t7, 0x8($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X8);
    skip_10:
    // 0x802242D0: b           L_802244E4
    // 0x802242D4: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
        goto L_802244E4;
    // 0x802242D4: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
L_802242D8:
    // 0x802242D8: b           L_80224500
    // 0x802242DC: sw          $s1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r17;
        goto L_80224500;
    // 0x802242DC: sw          $s1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r17;
    // 0x802242E0: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
L_802242E4:
    // 0x802242E4: lw          $t7, 0x24($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X24);
    // 0x802242E8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x802242EC: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x802242F0: sw          $s1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r17;
    // 0x802242F4: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x802242F8: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x802242FC: b           L_80224500
    // 0x80224300: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
        goto L_80224500;
    // 0x80224300: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x80224304: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
L_80224308:
    // 0x80224308: lw          $t9, 0x28($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X28);
    // 0x8022430C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80224310: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x80224314: sw          $s1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r17;
    // 0x80224318: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x8022431C: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x80224320: b           L_80224500
    // 0x80224324: sh          $t9, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r25;
        goto L_80224500;
    // 0x80224324: sh          $t9, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r25;
L_80224328:
    // 0x80224328: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x8022432C: lw          $t8, 0x2C($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X2C);
    // 0x80224330: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80224334: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x80224338: sw          $s1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r17;
    // 0x8022433C: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x80224340: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80224344: b           L_80224500
    // 0x80224348: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
        goto L_80224500;
    // 0x80224348: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
    // 0x8022434C: lhu         $t9, 0x2($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X2);
L_80224350:
    // 0x80224350: lw          $t6, 0x4($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X4);
    // 0x80224354: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80224358: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8022435C: sw          $s1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r17;
    // 0x80224360: lhu         $t9, 0x2($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X2);
    // 0x80224364: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80224368: b           L_80224500
    // 0x8022436C: sh          $t6, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r14;
        goto L_80224500;
    // 0x8022436C: sh          $t6, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r14;
L_80224370:
    // 0x80224370: lhu         $t8, 0x4($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X4);
    // 0x80224374: lw          $t7, 0x8($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X8);
    // 0x80224378: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8022437C: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80224380: sw          $s1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r17;
    // 0x80224384: lhu         $t8, 0x4($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X4);
    // 0x80224388: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x8022438C: b           L_80224500
    // 0x80224390: sh          $t7, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r15;
        goto L_80224500;
    // 0x80224390: sh          $t7, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r15;
    // 0x80224394: lhu         $t6, 0x6($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X6);
L_80224398:
    // 0x80224398: lw          $t9, 0xC($s2)
    ctx->r25 = MEM_W(ctx->r18, 0XC);
    // 0x8022439C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x802243A0: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x802243A4: sw          $s1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r17;
    // 0x802243A8: lhu         $t6, 0x6($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X6);
    // 0x802243AC: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x802243B0: b           L_80224500
    // 0x802243B4: sh          $t9, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r25;
        goto L_80224500;
    // 0x802243B4: sh          $t9, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r25;
    // 0x802243B8: lhu         $t7, 0x8($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X8);
L_802243BC:
    // 0x802243BC: lw          $t8, 0x10($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X10);
    // 0x802243C0: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x802243C4: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x802243C8: sw          $s1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r17;
    // 0x802243CC: lhu         $t7, 0x8($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X8);
    // 0x802243D0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x802243D4: b           L_80224500
    // 0x802243D8: sh          $t8, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r24;
        goto L_80224500;
    // 0x802243D8: sh          $t8, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r24;
L_802243DC:
    // 0x802243DC: lhu         $t9, 0xA($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XA);
    // 0x802243E0: lw          $t6, 0x14($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X14);
    // 0x802243E4: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x802243E8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x802243EC: sw          $s1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r17;
    // 0x802243F0: lhu         $t9, 0xA($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XA);
    // 0x802243F4: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x802243F8: b           L_80224500
    // 0x802243FC: sh          $t6, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r14;
        goto L_80224500;
    // 0x802243FC: sh          $t6, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r14;
    // 0x80224400: lhu         $t8, 0x10($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X10);
L_80224404:
    // 0x80224404: lw          $t7, 0x20($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X20);
    // 0x80224408: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8022440C: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80224410: sw          $s1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r17;
    // 0x80224414: lhu         $t8, 0x10($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X10);
    // 0x80224418: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x8022441C: b           L_80224500
    // 0x80224420: sh          $t7, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r15;
        goto L_80224500;
    // 0x80224420: sh          $t7, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r15;
    // 0x80224424: lhu         $t6, 0xE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XE);
L_80224428:
    // 0x80224428: lw          $t9, 0x1C($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X1C);
    // 0x8022442C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80224430: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x80224434: sw          $s1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r17;
    // 0x80224438: lhu         $t6, 0xE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XE);
    // 0x8022443C: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x80224440: b           L_80224500
    // 0x80224444: sh          $t9, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r25;
        goto L_80224500;
    // 0x80224444: sh          $t9, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r25;
L_80224448:
    // 0x80224448: lhu         $t7, 0xC($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XC);
    // 0x8022444C: lw          $t8, 0x18($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X18);
    // 0x80224450: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80224454: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x80224458: sw          $s1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r17;
    // 0x8022445C: lhu         $t7, 0xC($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XC);
    // 0x80224460: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80224464: b           L_80224500
    // 0x80224468: sh          $t8, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r24;
        goto L_80224500;
    // 0x80224468: sh          $t8, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r24;
L_8022446C:
    // 0x8022446C: lhu         $t9, 0x1E($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X1E);
    // 0x80224470: lw          $t6, 0x40($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X40);
    // 0x80224474: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80224478: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8022447C: sw          $s1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r17;
    // 0x80224480: lhu         $t9, 0x1E($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X1E);
    // 0x80224484: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80224488: b           L_80224500
    // 0x8022448C: sh          $t6, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r14;
        goto L_80224500;
    // 0x8022448C: sh          $t6, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r14;
    // 0x80224490: lhu         $t8, 0x1A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X1A);
L_80224494:
    // 0x80224494: lw          $t7, 0x34($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X34);
    // 0x80224498: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8022449C: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x802244A0: sw          $s1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r17;
    // 0x802244A4: lhu         $t8, 0x1A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X1A);
    // 0x802244A8: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x802244AC: b           L_80224500
    // 0x802244B0: sh          $t7, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r15;
        goto L_80224500;
    // 0x802244B0: sh          $t7, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r15;
    // 0x802244B4: lhu         $t6, 0x1C($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X1C);
L_802244B8:
    // 0x802244B8: lw          $t9, 0x38($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X38);
    // 0x802244BC: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x802244C0: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x802244C4: sw          $s1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r17;
    // 0x802244C8: lhu         $t6, 0x1C($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X1C);
    // 0x802244CC: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x802244D0: b           L_80224500
    // 0x802244D4: sh          $t9, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r25;
        goto L_80224500;
    // 0x802244D4: sh          $t9, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r25;
L_802244D8:
    // 0x802244D8: b           L_80224500
    // 0x802244DC: sw          $s1, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->r17;
        goto L_80224500;
    // 0x802244DC: sw          $s1, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->r17;
    // 0x802244E0: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
L_802244E4:
    // 0x802244E4: lw          $t8, 0x30($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X30);
    // 0x802244E8: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x802244EC: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x802244F0: sw          $s1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r17;
    // 0x802244F4: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
    // 0x802244F8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x802244FC: sh          $t8, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r24;
L_80224500:
    // 0x80224500: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x80224504: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x80224508: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8022450C: sltu        $at, $s3, $t9
    ctx->r1 = ctx->r19 < ctx->r25 ? 1 : 0;
    // 0x80224510: bne         $at, $zero, L_802241EC
    if (ctx->r1 != 0) {
        // 0x80224514: addu        $s1, $s1, $t6
        ctx->r17 = ADD32(ctx->r17, ctx->r14);
            goto L_802241EC;
    }
    // 0x80224514: addu        $s1, $s1, $t6
    ctx->r17 = ADD32(ctx->r17, ctx->r14);
L_80224518:
    // 0x80224518: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x8022451C: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x80224520: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x80224524: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80224528: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x8022452C: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x80224530: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x80224534: jal         0x8022393C
    // 0x80224538: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    func_8022393C(rdram, ctx);
        goto after_6;
    // 0x80224538: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    after_6:
    // 0x8022453C: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80224540: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80224544: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80224548: bne         $v0, $zero, L_802240C4
    if (ctx->r2 != 0) {
        // 0x8022454C: lw          $t3, 0x50($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X50);
            goto L_802240C4;
    }
    // 0x8022454C: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
L_80224550:
    // 0x80224550: jal         0x802238F0
    // 0x80224554: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    func_802238F0(rdram, ctx);
        goto after_7;
    // 0x80224554: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    after_7:
    // 0x80224558: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8022455C: lhu         $a0, 0xC04($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XC04);
    // 0x80224560: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80224564: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80224568: jal         0x8022BA58
    // 0x8022456C: sll         $a0, $t7, 4
    ctx->r4 = S32(ctx->r15 << 4);
    func_8022BA58(rdram, ctx);
        goto after_8;
    // 0x8022456C: sll         $a0, $t7, 4
    ctx->r4 = S32(ctx->r15 << 4);
    after_8:
    // 0x80224570: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80224574: sw          $v0, 0x5A28($at)
    MEM_W(0X5A28, ctx->r1) = ctx->r2;
    // 0x80224578: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022457C: sw          $zero, 0x51E0($at)
    MEM_W(0X51E0, ctx->r1) = 0;
    // 0x80224580: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80224584: sw          $zero, 0x5A2C($at)
    MEM_W(0X5A2C, ctx->r1) = 0;
    // 0x80224588: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8022458C:
    // 0x8022458C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80224590: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80224594: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80224598: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022459C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802245A0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802245A4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802245A8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x802245AC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x802245B0: jr          $ra
    // 0x802245B4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x802245B4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_80238E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238E34: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80238E38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238E3C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80238E40: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80238E44: jal         0x8023D604
    // 0x80238E48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8023D604(rdram, ctx);
        goto after_0;
    // 0x80238E48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80238E4C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80238E50: addiu       $a1, $a1, 0x3970
    ctx->r5 = ADD32(ctx->r5, 0X3970);
    // 0x80238E54: jal         0x802465B0
    // 0x80238E58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802465B0(rdram, ctx);
        goto after_1;
    // 0x80238E58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80238E5C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80238E60: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80238E64: jal         0x802374B0
    // 0x80238E68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_2;
    // 0x80238E68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80238E6C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80238E70: addiu       $a1, $a1, 0x3970
    ctx->r5 = ADD32(ctx->r5, 0X3970);
    // 0x80238E74: jal         0x802465B0
    // 0x80238E78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802465B0(rdram, ctx);
        goto after_3;
    // 0x80238E78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80238E7C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80238E80: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80238E84: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80238E88: jal         0x802374B0
    // 0x80238E8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_4;
    // 0x80238E8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80238E90: addiu       $a0, $sp, 0x37
    ctx->r4 = ADD32(ctx->r29, 0X37);
    // 0x80238E94: jal         0x8023D6E4
    // 0x80238E98: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8023D6E4(rdram, ctx);
        goto after_5;
    // 0x80238E98: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_5:
    // 0x80238E9C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80238EA0: addiu       $t8, $sp, 0x24
    ctx->r24 = ADD32(ctx->r29, 0X24);
    // 0x80238EA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80238EA8: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80238EAC: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80238EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238EB4: andi        $a0, $v0, 0x1
    ctx->r4 = ctx->r2 & 0X1;
    // 0x80238EB8: beq         $a0, $zero, L_80238ED0
    if (ctx->r4 == 0) {
        // 0x80238EBC: andi        $t9, $v0, 0x2
        ctx->r25 = ctx->r2 & 0X2;
            goto L_80238ED0;
    }
    // 0x80238EBC: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x80238EC0: beq         $t9, $zero, L_80238ED0
    if (ctx->r25 == 0) {
        // 0x80238EC4: nop
    
            goto L_80238ED0;
    }
    // 0x80238EC4: nop

    // 0x80238EC8: b           L_80238F08
    // 0x80238ECC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80238F08;
    // 0x80238ECC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80238ED0:
    // 0x80238ED0: lbu         $t0, 0x3($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X3);
    // 0x80238ED4: nop

    // 0x80238ED8: bne         $t0, $zero, L_80238EE8
    if (ctx->r8 != 0) {
        // 0x80238EDC: nop
    
            goto L_80238EE8;
    }
    // 0x80238EDC: nop

    // 0x80238EE0: bne         $a0, $zero, L_80238EF0
    if (ctx->r4 != 0) {
        // 0x80238EE4: andi        $t1, $v0, 0x4
        ctx->r9 = ctx->r2 & 0X4;
            goto L_80238EF0;
    }
    // 0x80238EE4: andi        $t1, $v0, 0x4
    ctx->r9 = ctx->r2 & 0X4;
L_80238EE8:
    // 0x80238EE8: b           L_80238F08
    // 0x80238EEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80238F08;
    // 0x80238EEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80238EF0:
    // 0x80238EF0: beq         $t1, $zero, L_80238F04
    if (ctx->r9 == 0) {
        // 0x80238EF4: lw          $v0, 0x3C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X3C);
            goto L_80238F04;
    }
    // 0x80238EF4: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x80238EF8: b           L_80238F08
    // 0x80238EFC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80238F08;
    // 0x80238EFC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80238F00: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
L_80238F04:
    // 0x80238F04: nop

L_80238F08:
    // 0x80238F08: jr          $ra
    // 0x80238F0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80238F0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80208650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80208650: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80208654: lui         $t0, 0xFF00
    ctx->r8 = S32(0XFF00 << 16);
    // 0x80208658: addiu       $t1, $zero, 0xB8
    ctx->r9 = ADD32(0, 0XB8);
    // 0x8020865C: and         $v0, $v1, $t0
    ctx->r2 = ctx->r3 & ctx->r8;
    // 0x80208660: srl         $t6, $v0, 24
    ctx->r14 = S32(U32(ctx->r2) >> 24);
    // 0x80208664: beq         $t6, $t1, L_802086C0
    if (ctx->r14 == ctx->r9) {
        // 0x80208668: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_802086C0;
    }
    // 0x80208668: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8020866C: lui         $t3, 0x7FFF
    ctx->r11 = S32(0X7FFF << 16);
    // 0x80208670: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x80208674: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
L_80208678:
    // 0x80208678: lw          $a3, 0x4($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X4);
    // 0x8020867C: bne         $v0, $t2, L_802086AC
    if (ctx->r2 != ctx->r10) {
        // 0x80208680: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_802086AC;
    }
    // 0x80208680: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80208684: and         $v0, $a0, $t3
    ctx->r2 = ctx->r4 & ctx->r11;
    // 0x80208688: sltu        $at, $v0, $a3
    ctx->r1 = ctx->r2 < ctx->r7 ? 1 : 0;
    // 0x8020868C: bne         $at, $zero, L_802086AC
    if (ctx->r1 != 0) {
        // 0x80208690: andi        $t7, $v1, 0xFFFF
        ctx->r15 = ctx->r3 & 0XFFFF;
            goto L_802086AC;
    }
    // 0x80208690: andi        $t7, $v1, 0xFFFF
    ctx->r15 = ctx->r3 & 0XFFFF;
    // 0x80208694: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x80208698: sltu        $at, $v0, $t8
    ctx->r1 = ctx->r2 < ctx->r24 ? 1 : 0;
    // 0x8020869C: beql        $at, $zero, L_802086B0
    if (ctx->r1 == 0) {
        // 0x802086A0: lw          $v1, 0x0($a1)
        ctx->r3 = MEM_W(ctx->r5, 0X0);
            goto L_802086B0;
    }
    goto skip_0;
    // 0x802086A0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    skip_0:
    // 0x802086A4: jr          $ra
    // 0x802086A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802086A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802086AC:
    // 0x802086AC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
L_802086B0:
    // 0x802086B0: and         $v0, $v1, $t0
    ctx->r2 = ctx->r3 & ctx->r8;
    // 0x802086B4: srl         $t9, $v0, 24
    ctx->r25 = S32(U32(ctx->r2) >> 24);
    // 0x802086B8: bne         $t9, $t1, L_80208678
    if (ctx->r25 != ctx->r9) {
        // 0x802086BC: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_80208678;
    }
    // 0x802086BC: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_802086C0:
    // 0x802086C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802086C4: jr          $ra
    // 0x802086C8: nop

    return;
    // 0x802086C8: nop

;}
RECOMP_FUNC void func_8023CD1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023CD1C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023CD20: sw          $a0, 0x3968($at)
    MEM_W(0X3968, ctx->r1) = ctx->r4;
    // 0x8023CD24: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023CD28: sw          $a2, 0x396C($at)
    MEM_W(0X396C, ctx->r1) = ctx->r6;
    // 0x8023CD2C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023CD30: sw          $a1, 0x3960($at)
    MEM_W(0X3960, ctx->r1) = ctx->r5;
    // 0x8023CD34: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023CD38: jr          $ra
    // 0x8023CD3C: sw          $a3, 0x3964($at)
    MEM_W(0X3964, ctx->r1) = ctx->r7;
    return;
    // 0x8023CD3C: sw          $a3, 0x3964($at)
    MEM_W(0X3964, ctx->r1) = ctx->r7;
;}
RECOMP_FUNC void func_8022B1F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B1F4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022B1F8: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8022B1FC: lw          $v0, 0x5E70($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5E70);
    // 0x8022B200: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8022B204: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022B208: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8022B20C: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8022B210: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8022B214: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8022B218: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8022B21C: blez        $v0, L_8022B2D0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022B220: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8022B2D0;
    }
    // 0x8022B220: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8022B224: lui         $s5, 0x8025
    ctx->r21 = S32(0X8025 << 16);
    // 0x8022B228: lui         $s4, 0x8025
    ctx->r20 = S32(0X8025 << 16);
    // 0x8022B22C: lui         $s2, 0x8027
    ctx->r18 = S32(0X8027 << 16);
    // 0x8022B230: addiu       $s2, $s2, 0x5E80
    ctx->r18 = ADD32(ctx->r18, 0X5E80);
    // 0x8022B234: addiu       $s4, $s4, 0x3F70
    ctx->r20 = ADD32(ctx->r20, 0X3F70);
    // 0x8022B238: addiu       $s5, $s5, 0x3FA4
    ctx->r21 = ADD32(ctx->r21, 0X3FA4);
L_8022B23C:
    // 0x8022B23C: blez        $v0, L_8022B2C0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022B240: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8022B2C0;
    }
    // 0x8022B240: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8022B244:
    // 0x8022B244: beq         $s3, $a2, L_8022B2B0
    if (ctx->r19 == ctx->r6) {
        // 0x8022B248: sll         $t6, $a2, 3
        ctx->r14 = S32(ctx->r6 << 3);
            goto L_8022B2B0;
    }
    // 0x8022B248: sll         $t6, $a2, 3
    ctx->r14 = S32(ctx->r6 << 3);
    // 0x8022B24C: sll         $t7, $s3, 3
    ctx->r15 = S32(ctx->r19 << 3);
    // 0x8022B250: addu        $s1, $s2, $t7
    ctx->r17 = ADD32(ctx->r18, ctx->r15);
    // 0x8022B254: addu        $s0, $s2, $t6
    ctx->r16 = ADD32(ctx->r18, ctx->r14);
    // 0x8022B258: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8022B25C: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x8022B260: sltu        $at, $t8, $t9
    ctx->r1 = ctx->r24 < ctx->r25 ? 1 : 0;
    // 0x8022B264: beql        $at, $zero, L_8022B2B4
    if (ctx->r1 == 0) {
        // 0x8022B268: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8022B2B4;
    }
    goto skip_0;
    // 0x8022B268: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x8022B26C: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x8022B270: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x8022B274: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x8022B278: beq         $at, $zero, L_8022B2B0
    if (ctx->r1 == 0) {
        // 0x8022B27C: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_8022B2B0;
    }
    // 0x8022B27C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8022B280: jal         0x80231A24
    // 0x8022B284: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022B284: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_0:
    // 0x8022B288: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x8022B28C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8022B290: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8022B294: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x8022B298: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x8022B29C: jal         0x80231A24
    // 0x8022B2A0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022B2A0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_1:
    // 0x8022B2A4: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8022B2A8: b           L_8022B2C0
    // 0x8022B2AC: lw          $v0, 0x5E70($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5E70);
        goto L_8022B2C0;
    // 0x8022B2AC: lw          $v0, 0x5E70($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5E70);
L_8022B2B0:
    // 0x8022B2B0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_8022B2B4:
    // 0x8022B2B4: slt         $at, $a2, $v0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022B2B8: bne         $at, $zero, L_8022B244
    if (ctx->r1 != 0) {
        // 0x8022B2BC: nop
    
            goto L_8022B244;
    }
    // 0x8022B2BC: nop

L_8022B2C0:
    // 0x8022B2C0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8022B2C4: slt         $at, $s3, $v0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022B2C8: bne         $at, $zero, L_8022B23C
    if (ctx->r1 != 0) {
        // 0x8022B2CC: nop
    
            goto L_8022B23C;
    }
    // 0x8022B2CC: nop

L_8022B2D0:
    // 0x8022B2D0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022B2D4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B2D8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8022B2DC: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8022B2E0: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8022B2E4: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B2E8: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x8022B2EC: jr          $ra
    // 0x8022B2F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8022B2F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802363FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802363FC: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80236400: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80236404: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80236408: addiu       $t6, $a0, 0x38
    ctx->r14 = ADD32(ctx->r4, 0X38);
    // 0x8023640C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80236410: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80236414: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80236418: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8023641C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80236420: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80236424: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80236428: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023642C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80236430: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80236434: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
    // 0x80236438: addiu       $s5, $a0, 0x48
    ctx->r21 = ADD32(ctx->r4, 0X48);
L_8023643C:
    // 0x8023643C: lhu         $t7, 0x38($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X38);
    // 0x80236440: sltiu       $at, $t7, 0x18
    ctx->r1 = ctx->r15 < 0X18 ? 1 : 0;
    // 0x80236444: beq         $at, $zero, L_802369BC
    if (ctx->r1 == 0) {
        // 0x80236448: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_802369BC;
    }
    // 0x80236448: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8023644C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236450: addu        $at, $at, $t7
    gpr jr_addend_80236458 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80236454: lw          $t7, 0x5584($at)
    ctx->r15 = ADD32(ctx->r1, 0X5584);
    // 0x80236458: jr          $t7
    // 0x8023645C: nop

    switch (jr_addend_80236458 >> 2) {
        case 0: goto L_80236460; break;
        case 1: goto L_802369BC; break;
        case 2: goto L_80236790; break;
        case 3: goto L_802369BC; break;
        case 4: goto L_802369BC; break;
        case 5: goto L_8023654C; break;
        case 6: goto L_80236598; break;
        case 7: goto L_802367AC; break;
        case 8: goto L_802369BC; break;
        case 9: goto L_8023652C; break;
        case 10: goto L_802367CC; break;
        case 11: goto L_802369BC; break;
        case 12: goto L_8023695C; break;
        case 13: goto L_80236978; break;
        case 14: goto L_802369AC; break;
        case 15: goto L_80236830; break;
        case 16: goto L_80236854; break;
        case 17: goto L_802368C0; break;
        case 18: goto L_802369BC; break;
        case 19: goto L_802369BC; break;
        case 20: goto L_802369BC; break;
        case 21: goto L_80236790; break;
        case 22: goto L_802365FC; break;
        case 23: goto L_80236708; break;
        default: switch_error(__func__, 0x80236458, 0x80255584);
    }
    // 0x8023645C: nop

L_80236460:
    // 0x80236460: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x80236464: beql        $a0, $zero, L_802369C0
    if (ctx->r4 == 0) {
        // 0x80236468: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_802369C0;
    }
    goto skip_0;
    // 0x80236468: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_0:
    // 0x8023646C: jal         0x802381D4
    // 0x80236470: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_802381D4(rdram, ctx);
        goto after_0;
    // 0x80236470: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_0:
    // 0x80236474: lh          $t8, 0x58($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X58);
    // 0x80236478: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8023647C: sltiu       $at, $t9, 0x14
    ctx->r1 = ctx->r25 < 0X14 ? 1 : 0;
    // 0x80236480: beq         $at, $zero, L_802369BC
    if (ctx->r1 == 0) {
        // 0x80236484: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_802369BC;
    }
    // 0x80236484: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80236488: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023648C: addu        $at, $at, $t9
    gpr jr_addend_80236494 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80236490: lw          $t9, 0x55E4($at)
    ctx->r25 = ADD32(ctx->r1, 0X55E4);
    // 0x80236494: jr          $t9
    // 0x80236498: nop

    switch (jr_addend_80236494 >> 2) {
        case 0: goto L_8023649C; break;
        case 1: goto L_802369BC; break;
        case 2: goto L_802364C4; break;
        case 3: goto L_802364F0; break;
        case 4: goto L_802369BC; break;
        case 5: goto L_802369BC; break;
        case 6: goto L_802369BC; break;
        case 7: goto L_802369BC; break;
        case 8: goto L_802369BC; break;
        case 9: goto L_802369BC; break;
        case 10: goto L_802369BC; break;
        case 11: goto L_802369BC; break;
        case 12: goto L_802369BC; break;
        case 13: goto L_802369BC; break;
        case 14: goto L_802369BC; break;
        case 15: goto L_802369BC; break;
        case 16: goto L_802369BC; break;
        case 17: goto L_8023651C; break;
        case 18: goto L_8023651C; break;
        case 19: goto L_8023651C; break;
        default: switch_error(__func__, 0x80236494, 0x802555E4);
    }
    // 0x80236498: nop

L_8023649C:
    // 0x8023649C: addiu       $t0, $sp, 0x58
    ctx->r8 = ADD32(ctx->r29, 0X58);
    // 0x802364A0: sw          $s2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r18;
    // 0x802364A4: jal         0x80235BCC
    // 0x802364A8: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    func_80235BCC(rdram, ctx);
        goto after_1;
    // 0x802364A8: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    after_1:
    // 0x802364AC: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x802364B0: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x802364B4: jal         0x80235950
    // 0x802364B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80235950(rdram, ctx);
        goto after_2;
    // 0x802364B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x802364BC: b           L_802369C0
    // 0x802364C0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802369C0;
    // 0x802364C0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_802364C4:
    // 0x802364C4: or          $s7, $s2, $zero
    ctx->r23 = ctx->r18 | 0;
    // 0x802364C8: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x802364CC: sw          $s2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r18;
    // 0x802364D0: jal         0x802359FC
    // 0x802364D4: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    func_802359FC(rdram, ctx);
        goto after_3;
    // 0x802364D4: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    after_3:
    // 0x802364D8: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x802364DC: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x802364E0: jal         0x80235950
    // 0x802364E4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80235950(rdram, ctx);
        goto after_4;
    // 0x802364E4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x802364E8: b           L_802369C0
    // 0x802364EC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802369C0;
    // 0x802364EC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_802364F0:
    // 0x802364F0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802364F4: sw          $t6, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r14;
    // 0x802364F8: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x802364FC: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x80236500: sh          $t7, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r15;
    // 0x80236504: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x80236508: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8023650C: jal         0x8023F37C
    // 0x80236510: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_8023F37C(rdram, ctx);
        goto after_5;
    // 0x80236510: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_5:
    // 0x80236514: b           L_802369C0
    // 0x80236518: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802369C0;
    // 0x80236518: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8023651C:
    // 0x8023651C: jal         0x80235950
    // 0x80236520: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80235950(rdram, ctx);
        goto after_6;
    // 0x80236520: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
    // 0x80236524: b           L_802369C0
    // 0x80236528: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802369C0;
    // 0x80236528: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8023652C:
    // 0x8023652C: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x80236530: sh          $t8, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r24;
    // 0x80236534: lw          $a2, 0x5C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X5C);
    // 0x80236538: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8023653C: jal         0x8023F37C
    // 0x80236540: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    func_8023F37C(rdram, ctx);
        goto after_7;
    // 0x80236540: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    after_7:
    // 0x80236544: b           L_802369C0
    // 0x80236548: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802369C0;
    // 0x80236548: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8023654C:
    // 0x8023654C: lw          $s0, 0x3C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X3C);
    // 0x80236550: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80236554: jal         0x8023FB10
    // 0x80236558: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8023FB10(rdram, ctx);
        goto after_8;
    // 0x80236558: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x8023655C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80236560: jal         0x8023FB90
    // 0x80236564: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8023FB90(rdram, ctx);
        goto after_9;
    // 0x80236564: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x80236568: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x8023656C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80236570: lbu         $t9, 0x37($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X37);
    // 0x80236574: beql        $t9, $zero, L_80236588
    if (ctx->r25 == 0) {
        // 0x80236578: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80236588;
    }
    goto skip_1;
    // 0x80236578: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_1:
    // 0x8023657C: jal         0x80241320
    // 0x80236580: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80241320(rdram, ctx);
        goto after_10;
    // 0x80236580: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_10:
    // 0x80236584: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80236588:
    // 0x80236588: jal         0x802400F0
    // 0x8023658C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_802400F0(rdram, ctx);
        goto after_11;
    // 0x8023658C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x80236590: b           L_802369C0
    // 0x80236594: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802369C0;
    // 0x80236594: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80236598:
    // 0x80236598: lw          $s0, 0x3C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X3C);
    // 0x8023659C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802365A0: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x802365A4: lbu         $t6, 0x34($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X34);
    // 0x802365A8: bnel        $t6, $zero, L_802365B8
    if (ctx->r14 != 0) {
        // 0x802365AC: lw          $s3, 0x40($s2)
        ctx->r19 = MEM_W(ctx->r18, 0X40);
            goto L_802365B8;
    }
    goto skip_2;
    // 0x802365AC: lw          $s3, 0x40($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X40);
    skip_2:
    // 0x802365B0: sb          $t7, 0x34($s1)
    MEM_B(0X34, ctx->r17) = ctx->r15;
    // 0x802365B4: lw          $s3, 0x40($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X40);
L_802365B8:
    // 0x802365B8: lw          $t8, 0x1C($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X1C);
    // 0x802365BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802365C0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802365C4: addu        $t9, $t8, $s3
    ctx->r25 = ADD32(ctx->r24, ctx->r19);
    // 0x802365C8: sw          $t9, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r25;
    // 0x802365CC: lbu         $t6, 0x44($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X44);
    // 0x802365D0: jal         0x8023FE94
    // 0x802365D4: sb          $t6, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r14;
    func_8023FE94(rdram, ctx);
        goto after_12;
    // 0x802365D4: sb          $t6, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r14;
    after_12:
    // 0x802365D8: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x802365DC: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802365E0: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802365E4: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x802365E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802365EC: jal         0x8023F940
    // 0x802365F0: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    func_8023F940(rdram, ctx);
        goto after_13;
    // 0x802365F0: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_13:
    // 0x802365F4: b           L_802369C0
    // 0x802365F8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802369C0;
    // 0x802365F8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_802365FC:
    // 0x802365FC: lw          $t9, 0x74($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X74);
    // 0x80236600: lw          $s4, 0x40($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X40);
    // 0x80236604: lw          $s1, 0x3C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X3C);
    // 0x80236608: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x8023660C: jalr        $t9
    // 0x80236610: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x80236610: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_14:
    // 0x80236614: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80236618: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8023661C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80236620: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80236624: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80236628: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8023662C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80236630: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80236634: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80236638: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8023663C: nop

    // 0x80236640: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80236644: beql        $t6, $zero, L_80236694
    if (ctx->r14 == 0) {
        // 0x80236648: mfc1        $t6, $f6
        ctx->r14 = (int32_t)ctx->f6.u32l;
            goto L_80236694;
    }
    goto skip_3;
    // 0x80236648: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    skip_3:
    // 0x8023664C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80236650: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80236654: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80236658: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8023665C: nop

    // 0x80236660: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80236664: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80236668: nop

    // 0x8023666C: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80236670: bne         $t6, $zero, L_80236688
    if (ctx->r14 != 0) {
        // 0x80236674: nop
    
            goto L_80236688;
    }
    // 0x80236674: nop

    // 0x80236678: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8023667C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80236680: b           L_802366A0
    // 0x80236684: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_802366A0;
    // 0x80236684: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_80236688:
    // 0x80236688: b           L_802366A0
    // 0x8023668C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_802366A0;
    // 0x8023668C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80236690: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
L_80236694:
    // 0x80236694: nop

    // 0x80236698: bltz        $t6, L_80236688
    if (SIGNED(ctx->r14) < 0) {
        // 0x8023669C: nop
    
            goto L_80236688;
    }
    // 0x8023669C: nop

L_802366A0:
    // 0x802366A0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x802366A4: jal         0x8023FE94
    // 0x802366A8: sb          $t6, 0x36($s1)
    MEM_B(0X36, ctx->r17) = ctx->r14;
    func_8023FE94(rdram, ctx);
        goto after_15;
    // 0x802366A8: sb          $t6, 0x36($s1)
    MEM_B(0X36, ctx->r17) = ctx->r14;
    after_15:
    // 0x802366AC: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x802366B0: sra         $t7, $s0, 16
    ctx->r15 = S32(SIGNED(ctx->r16) >> 16);
    // 0x802366B4: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x802366B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802366BC: jal         0x8023FE70
    // 0x802366C0: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    func_8023FE70(rdram, ctx);
        goto after_16;
    // 0x802366C0: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    after_16:
    // 0x802366C4: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802366C8: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802366CC: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x802366D0: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x802366D4: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x802366D8: jal         0x8023F940
    // 0x802366DC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_8023F940(rdram, ctx);
        goto after_17;
    // 0x802366DC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_17:
    // 0x802366E0: addiu       $t8, $zero, 0x16
    ctx->r24 = ADD32(0, 0X16);
    // 0x802366E4: sh          $t8, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r24;
    // 0x802366E8: sw          $s1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r17;
    // 0x802366EC: sw          $s4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r20;
    // 0x802366F0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x802366F4: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x802366F8: jal         0x8023F37C
    // 0x802366FC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_8023F37C(rdram, ctx);
        goto after_18;
    // 0x802366FC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_18:
    // 0x80236700: b           L_802369C0
    // 0x80236704: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802369C0;
    // 0x80236704: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80236708:
    // 0x80236708: lw          $t9, 0x74($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X74);
    // 0x8023670C: lw          $s4, 0x40($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X40);
    // 0x80236710: lw          $s1, 0x3C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X3C);
    // 0x80236714: lbu         $s0, 0x44($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X44);
    // 0x80236718: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x8023671C: jalr        $t9
    // 0x80236720: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x80236720: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_19:
    // 0x80236724: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80236728: lwc1        $f4, 0x28($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X28);
    // 0x8023672C: sll         $t7, $s0, 4
    ctx->r15 = S32(ctx->r16 << 4);
    // 0x80236730: swc1        $f8, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f8.u32l;
    // 0x80236734: lwc1        $f6, 0x2C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x80236738: lw          $t6, 0x60($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X60);
    // 0x8023673C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80236740: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80236744: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80236748: lwc1        $f10, 0xC($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0XC);
    // 0x8023674C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80236750: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x80236754: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80236758: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8023675C: jal         0x8023F9E0
    // 0x80236760: nop

    func_8023F9E0(rdram, ctx);
        goto after_20;
    // 0x80236760: nop

    after_20:
    // 0x80236764: addiu       $t9, $zero, 0x17
    ctx->r25 = ADD32(0, 0X17);
    // 0x80236768: sh          $t9, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r25;
    // 0x8023676C: sw          $s1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r17;
    // 0x80236770: sw          $s4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r20;
    // 0x80236774: sb          $s0, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r16;
    // 0x80236778: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8023677C: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80236780: jal         0x8023F37C
    // 0x80236784: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_8023F37C(rdram, ctx);
        goto after_21;
    // 0x80236784: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_21:
    // 0x80236788: b           L_802369C0
    // 0x8023678C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802369C0;
    // 0x8023678C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80236790:
    // 0x80236790: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80236794: sw          $s2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r18;
    // 0x80236798: jal         0x80235BCC
    // 0x8023679C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    func_80235BCC(rdram, ctx);
        goto after_22;
    // 0x8023679C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    after_22:
    // 0x802367A0: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x802367A4: b           L_802369BC
    // 0x802367A8: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
        goto L_802369BC;
    // 0x802367A8: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
L_802367AC:
    // 0x802367AC: or          $s7, $s2, $zero
    ctx->r23 = ctx->r18 | 0;
    // 0x802367B0: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x802367B4: sw          $s2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r18;
    // 0x802367B8: jal         0x802359FC
    // 0x802367BC: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    func_802359FC(rdram, ctx);
        goto after_23;
    // 0x802367BC: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    after_23:
    // 0x802367C0: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x802367C4: b           L_802369BC
    // 0x802367C8: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
        goto L_802369BC;
    // 0x802367C8: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
L_802367CC:
    // 0x802367CC: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x802367D0: lh          $t6, 0x3C($s2)
    ctx->r14 = MEM_H(ctx->r18, 0X3C);
    // 0x802367D4: beq         $s1, $zero, L_802369BC
    if (ctx->r17 == 0) {
        // 0x802367D8: sh          $t6, 0x32($s2)
        MEM_H(0X32, ctx->r18) = ctx->r14;
            goto L_802369BC;
    }
    // 0x802367D8: sh          $t6, 0x32($s2)
    MEM_H(0X32, ctx->r18) = ctx->r14;
    // 0x802367DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_802367E0:
    // 0x802367E0: jal         0x8023FE94
    // 0x802367E4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8023FE94(rdram, ctx);
        goto after_24;
    // 0x802367E4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_24:
    // 0x802367E8: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x802367EC: sra         $t7, $s0, 16
    ctx->r15 = S32(SIGNED(ctx->r16) >> 16);
    // 0x802367F0: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x802367F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802367F8: jal         0x8023FE70
    // 0x802367FC: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    func_8023FE70(rdram, ctx);
        goto after_25;
    // 0x802367FC: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    after_25:
    // 0x80236800: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x80236804: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80236808: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8023680C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80236810: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x80236814: jal         0x8023F940
    // 0x80236818: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_8023F940(rdram, ctx);
        goto after_26;
    // 0x80236818: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_26:
    // 0x8023681C: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80236820: bnel        $s1, $zero, L_802367E0
    if (ctx->r17 != 0) {
        // 0x80236824: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_802367E0;
    }
    goto skip_4;
    // 0x80236824: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_4:
    // 0x80236828: b           L_802369C0
    // 0x8023682C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802369C0;
    // 0x8023682C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80236830:
    // 0x80236830: lw          $t9, 0x2C($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X2C);
    // 0x80236834: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80236838: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8023683C: beq         $t9, $at, L_802369BC
    if (ctx->r25 == ctx->r1) {
        // 0x80236840: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_802369BC;
    }
    // 0x80236840: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80236844: jal         0x80235950
    // 0x80236848: sw          $t6, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r14;
    func_80235950(rdram, ctx);
        goto after_27;
    // 0x80236848: sw          $t6, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r14;
    after_27:
    // 0x8023684C: b           L_802369C0
    // 0x80236850: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802369C0;
    // 0x80236850: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80236854:
    // 0x80236854: lw          $t7, 0x2C($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X2C);
    // 0x80236858: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8023685C: bnel        $t7, $at, L_802369C0
    if (ctx->r15 != ctx->r1) {
        // 0x80236860: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_802369C0;
    }
    goto skip_5;
    // 0x80236860: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_5:
    // 0x80236864: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x80236868: beq         $s1, $zero, L_802368B8
    if (ctx->r17 == 0) {
        // 0x8023686C: addiu       $s0, $s1, 0x4
        ctx->r16 = ADD32(ctx->r17, 0X4);
            goto L_802368B8;
    }
    // 0x8023686C: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
L_80236870:
    // 0x80236870: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80236874: jal         0x8023FB10
    // 0x80236878: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    func_8023FB10(rdram, ctx);
        goto after_28;
    // 0x80236878: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    after_28:
    // 0x8023687C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80236880: jal         0x8023FB90
    // 0x80236884: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8023FB90(rdram, ctx);
        goto after_29;
    // 0x80236884: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_29:
    // 0x80236888: lbu         $t8, 0x37($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X37);
    // 0x8023688C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80236890: beql        $t8, $zero, L_802368A4
    if (ctx->r24 == 0) {
        // 0x80236894: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_802368A4;
    }
    goto skip_6;
    // 0x80236894: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_6:
    // 0x80236898: jal         0x80241320
    // 0x8023689C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80241320(rdram, ctx);
        goto after_30;
    // 0x8023689C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_30:
    // 0x802368A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_802368A4:
    // 0x802368A4: jal         0x802400F0
    // 0x802368A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_802400F0(rdram, ctx);
        goto after_31;
    // 0x802368A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_31:
    // 0x802368AC: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x802368B0: bnel        $s1, $zero, L_80236870
    if (ctx->r17 != 0) {
        // 0x802368B4: addiu       $s0, $s1, 0x4
        ctx->r16 = ADD32(ctx->r17, 0X4);
            goto L_80236870;
    }
    goto skip_7;
    // 0x802368B4: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    skip_7:
L_802368B8:
    // 0x802368B8: b           L_802369BC
    // 0x802368BC: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
        goto L_802369BC;
    // 0x802368BC: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
L_802368C0:
    // 0x802368C0: lw          $t9, 0x2C($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X2C);
    // 0x802368C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802368C8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x802368CC: bnel        $t9, $at, L_802369C0
    if (ctx->r25 != ctx->r1) {
        // 0x802368D0: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_802369C0;
    }
    goto skip_8;
    // 0x802368D0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_8:
    // 0x802368D4: jal         0x8023F260
    // 0x802368D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8023F260(rdram, ctx);
        goto after_32;
    // 0x802368D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_32:
    // 0x802368DC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x802368E0: jal         0x8023F260
    // 0x802368E4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_8023F260(rdram, ctx);
        goto after_33;
    // 0x802368E4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_33:
    // 0x802368E8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x802368EC: jal         0x8023F260
    // 0x802368F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8023F260(rdram, ctx);
        goto after_34;
    // 0x802368F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_34:
    // 0x802368F4: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x802368F8: beq         $s1, $zero, L_80236930
    if (ctx->r17 == 0) {
        // 0x802368FC: addiu       $s0, $s1, 0x4
        ctx->r16 = ADD32(ctx->r17, 0X4);
            goto L_80236930;
    }
    // 0x802368FC: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
L_80236900:
    // 0x80236900: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80236904: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80236908: jal         0x80240048
    // 0x8023690C: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    func_80240048(rdram, ctx);
        goto after_35;
    // 0x8023690C: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    after_35:
    // 0x80236910: beq         $v0, $zero, L_80236924
    if (ctx->r2 == 0) {
        // 0x80236914: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80236924;
    }
    // 0x80236914: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80236918: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8023691C: jal         0x8023FF1C
    // 0x80236920: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    func_8023FF1C(rdram, ctx);
        goto after_36;
    // 0x80236920: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    after_36:
L_80236924:
    // 0x80236924: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80236928: bnel        $s1, $zero, L_80236900
    if (ctx->r17 != 0) {
        // 0x8023692C: addiu       $s0, $s1, 0x4
        ctx->r16 = ADD32(ctx->r17, 0X4);
            goto L_80236900;
    }
    goto skip_9;
    // 0x8023692C: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    skip_9:
L_80236930:
    // 0x80236930: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80236934: sw          $t6, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r14;
    // 0x80236938: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x8023693C: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x80236940: sh          $t7, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r15;
    // 0x80236944: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x80236948: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8023694C: jal         0x8023F37C
    // 0x80236950: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    func_8023F37C(rdram, ctx);
        goto after_37;
    // 0x80236950: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    after_37:
    // 0x80236954: b           L_802369C0
    // 0x80236958: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802369C0;
    // 0x80236958: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8023695C:
    // 0x8023695C: lbu         $s0, 0x3C($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X3C);
    // 0x80236960: lw          $t9, 0x60($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X60);
    // 0x80236964: lbu         $t8, 0x3D($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X3D);
    // 0x80236968: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x8023696C: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x80236970: b           L_802369BC
    // 0x80236974: sb          $t8, 0x8($t7)
    MEM_B(0X8, ctx->r15) = ctx->r24;
        goto L_802369BC;
    // 0x80236974: sb          $t8, 0x8($t7)
    MEM_B(0X8, ctx->r15) = ctx->r24;
L_80236978:
    // 0x80236978: lw          $t9, 0x3C($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X3C);
    // 0x8023697C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236980: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80236984: sw          $t9, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r25;
    // 0x80236988: jal         0x802359C0
    // 0x8023698C: lwc1        $f12, 0x5634($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5634);
    func_802359C0(rdram, ctx);
        goto after_38;
    // 0x8023698C: lwc1        $f12, 0x5634($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5634);
    after_38:
    // 0x80236990: lw          $a1, 0x20($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X20);
    // 0x80236994: beql        $a1, $zero, L_802369C0
    if (ctx->r5 == 0) {
        // 0x80236998: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_802369C0;
    }
    goto skip_10;
    // 0x80236998: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_10:
    // 0x8023699C: jal         0x8023FDB4
    // 0x802369A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8023FDB4(rdram, ctx);
        goto after_39;
    // 0x802369A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_39:
    // 0x802369A4: b           L_802369C0
    // 0x802369A8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802369C0;
    // 0x802369A8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_802369AC:
    // 0x802369AC: lw          $a1, 0x3C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X3C);
    // 0x802369B0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802369B4: jal         0x8023FDB4
    // 0x802369B8: sw          $a1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r5;
    func_8023FDB4(rdram, ctx);
        goto after_40;
    // 0x802369B8: sw          $a1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r5;
    after_40:
L_802369BC:
    // 0x802369BC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_802369C0:
    // 0x802369C0: jal         0x8023F4A0
    // 0x802369C4: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    func_8023F4A0(rdram, ctx);
        goto after_41;
    // 0x802369C4: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    after_41:
    // 0x802369C8: beq         $v0, $zero, L_8023643C
    if (ctx->r2 == 0) {
        // 0x802369CC: sw          $v0, 0x28($s2)
        MEM_W(0X28, ctx->r18) = ctx->r2;
            goto L_8023643C;
    }
    // 0x802369CC: sw          $v0, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->r2;
    // 0x802369D0: lw          $t6, 0x1C($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X1C);
    // 0x802369D4: addu        $t8, $t6, $v0
    ctx->r24 = ADD32(ctx->r14, ctx->r2);
    // 0x802369D8: sw          $t8, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r24;
    // 0x802369DC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802369E0: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x802369E4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x802369E8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x802369EC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x802369F0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x802369F4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802369F8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802369FC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80236A00: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80236A04: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80236A08: jr          $ra
    // 0x80236A0C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x80236A0C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_8023D444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D444: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023D448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023D44C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8023D450: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8023D454: jal         0x8023EBF8
    // 0x8023D458: addiu       $a0, $sp, 0x1F
    ctx->r4 = ADD32(ctx->r29, 0X1F);
    func_8023EBF8(rdram, ctx);
        goto after_0;
    // 0x8023D458: addiu       $a0, $sp, 0x1F
    ctx->r4 = ADD32(ctx->r29, 0X1F);
    after_0:
    // 0x8023D45C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023D460: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023D464: jr          $ra
    // 0x8023D468: nop

    return;
    // 0x8023D468: nop

;}
RECOMP_FUNC void func_802116AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802116AC: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802116B0: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x802116B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802116B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802116BC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802116C0: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x802116C4: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x802116C8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802116CC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x802116D0: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x802116D4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802116D8: addiu       $a0, $a0, 0x2CAC
    ctx->r4 = ADD32(ctx->r4, 0X2CAC);
    // 0x802116DC: bnel        $v0, $zero, L_802116F8
    if (ctx->r2 != 0) {
        // 0x802116E0: lw          $t1, 0x8($v0)
        ctx->r9 = MEM_W(ctx->r2, 0X8);
            goto L_802116F8;
    }
    goto skip_0;
    // 0x802116E0: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x802116E4: jal         0x80231A24
    // 0x802116E8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x802116E8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_0:
    // 0x802116EC: b           L_80211780
    // 0x802116F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80211780;
    // 0x802116F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802116F4: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
L_802116F8:
    // 0x802116F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x802116FC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80211700: lbu         $t2, 0x4($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X4);
    // 0x80211704: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80211708: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8021170C: slt         $at, $t0, $t2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80211710: bne         $at, $zero, L_80211730
    if (ctx->r1 != 0) {
        // 0x80211714: sll         $t5, $t4, 6
        ctx->r13 = S32(ctx->r12 << 6);
            goto L_80211730;
    }
    // 0x80211714: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x80211718: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021171C: addiu       $a0, $a0, 0x2CDC
    ctx->r4 = ADD32(ctx->r4, 0X2CDC);
    // 0x80211720: jal         0x80231A24
    // 0x80211724: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x80211724: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_1:
    // 0x80211728: b           L_80211780
    // 0x8021172C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80211780;
    // 0x8021172C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80211730:
    // 0x80211730: lw          $t3, 0x14($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X14);
    // 0x80211734: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80211738: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8021173C: jal         0x80228DE0
    // 0x80211740: addu        $a1, $t3, $t5
    ctx->r5 = ADD32(ctx->r11, ctx->r13);
    func_80228DE0(rdram, ctx);
        goto after_2;
    // 0x80211740: addu        $a1, $t3, $t5
    ctx->r5 = ADD32(ctx->r11, ctx->r13);
    after_2:
    // 0x80211744: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80211748: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8021174C: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80211750: lwc1        $f4, 0x30($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X30);
    // 0x80211754: lwc1        $f10, 0x34($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X34);
    // 0x80211758: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021175C: lwc1        $f4, 0x38($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X38);
    // 0x80211760: swc1        $f8, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->f8.u32l;
    // 0x80211764: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80211768: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8021176C: swc1        $f18, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->f18.u32l;
    // 0x80211770: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80211774: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80211778: swc1        $f8, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->f8.u32l;
    // 0x8021177C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80211780:
    // 0x80211780: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80211784: jr          $ra
    // 0x80211788: nop

    return;
    // 0x80211788: nop

;}
RECOMP_FUNC void func_8023F30C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F30C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023F310: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023F314: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8023F318: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023F31C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023F320: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023F324: jal         0x8023FC40
    // 0x8023F328: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8023FC40(rdram, ctx);
        goto after_0;
    // 0x8023F328: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8023F32C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8023F330: lw          $s0, 0x8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X8);
    // 0x8023F334: beq         $s0, $zero, L_8023F35C
    if (ctx->r16 == 0) {
        // 0x8023F338: nop
    
            goto L_8023F35C;
    }
    // 0x8023F338: nop

L_8023F33C:
    // 0x8023F33C: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8023F340: jal         0x80237120
    // 0x8023F344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80237120(rdram, ctx);
        goto after_1;
    // 0x8023F344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8023F348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023F34C: jal         0x80237150
    // 0x8023F350: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80237150(rdram, ctx);
        goto after_2;
    // 0x8023F350: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x8023F354: bne         $s1, $zero, L_8023F33C
    if (ctx->r17 != 0) {
        // 0x8023F358: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8023F33C;
    }
    // 0x8023F358: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_8023F35C:
    // 0x8023F35C: jal         0x8023FC40
    // 0x8023F360: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8023FC40(rdram, ctx);
        goto after_3;
    // 0x8023F360: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x8023F364: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023F368: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023F36C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F370: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023F374: jr          $ra
    // 0x8023F378: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8023F378: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80241620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80241620: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80241624: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80241628: bltz        $a0, L_8024163C
    if (SIGNED(ctx->r4) < 0) {
        // 0x8024162C: lui         $at, 0x8025
        ctx->r1 = S32(0X8025 << 16);
            goto L_8024163C;
    }
    // 0x8024162C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80241630: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80241634: b           L_80241644
    // 0x80241638: lwc1        $f0, 0x5930($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5930);
        goto L_80241644;
    // 0x80241638: lwc1        $f0, 0x5930($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5930);
L_8024163C:
    // 0x8024163C: lwc1        $f0, 0x5934($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5934);
    // 0x80241640: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
L_80241644:
    // 0x80241644: beq         $a0, $zero, L_80241668
    if (ctx->r4 == 0) {
        // 0x80241648: andi        $t6, $a0, 0x1
        ctx->r14 = ctx->r4 & 0X1;
            goto L_80241668;
    }
L_80241648:
    // 0x80241648: andi        $t6, $a0, 0x1
    ctx->r14 = ctx->r4 & 0X1;
    // 0x8024164C: beq         $t6, $zero, L_8024165C
    if (ctx->r14 == 0) {
        // 0x80241650: sra         $t7, $a0, 1
        ctx->r15 = S32(SIGNED(ctx->r4) >> 1);
            goto L_8024165C;
    }
    // 0x80241650: sra         $t7, $a0, 1
    ctx->r15 = S32(SIGNED(ctx->r4) >> 1);
    // 0x80241654: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80241658: nop

L_8024165C:
    // 0x8024165C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80241660: bne         $t7, $zero, L_80241648
    if (ctx->r15 != 0) {
        // 0x80241664: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_80241648;
    }
    // 0x80241664: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_80241668:
    // 0x80241668: jr          $ra
    // 0x8024166C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8024166C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_802447A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802447A0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802447A4: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x802447A8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802447AC: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x802447B0: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x802447B4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x802447B8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802447BC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802447C0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802447C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802447C8: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x802447CC: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x802447D0: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x802447D4: lui         $t7, 0x200
    ctx->r15 = S32(0X200 << 16);
    // 0x802447D8: ori         $t6, $t6, 0x6C0
    ctx->r14 = ctx->r14 | 0X6C0;
    // 0x802447DC: ori         $t7, $t7, 0x800
    ctx->r15 = ctx->r15 | 0X800;
    // 0x802447E0: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x802447E4: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x802447E8: sw          $t7, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r15;
    // 0x802447EC: sw          $v0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r2;
    // 0x802447F0: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x802447F4: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x802447F8: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x802447FC: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x80244800: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80244804: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80244808: blez        $t8, L_8024484C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8024480C: addiu       $s2, $t0, 0x10
        ctx->r18 = ADD32(ctx->r8, 0X10);
            goto L_8024484C;
    }
    // 0x8024480C: addiu       $s2, $t0, 0x10
    ctx->r18 = ADD32(ctx->r8, 0X10);
    // 0x80244810: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
L_80244814:
    // 0x80244814: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80244818: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x8024481C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80244820: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x80244824: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80244828: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8024482C: jalr        $t9
    // 0x80244830: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80244830: nop

    after_0:
    // 0x80244834: lw          $t1, 0x14($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X14);
    // 0x80244838: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8024483C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80244840: slt         $at, $s0, $t1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80244844: bne         $at, $zero, L_80244814
    if (ctx->r1 != 0) {
        // 0x80244848: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_80244814;
    }
    // 0x80244848: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8024484C:
    // 0x8024484C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80244850: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x80244854: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80244858: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8024485C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80244860: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80244864: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80244868: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8024486C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80244870: jr          $ra
    // 0x80244874: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80244874: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80245B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80245B40: addiu       $sp, $sp, -0x4C8
    ctx->r29 = ADD32(ctx->r29, -0X4C8);
    // 0x80245B44: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80245B48: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80245B4C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80245B50: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80245B54: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80245B58: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80245B5C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80245B60: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80245B64: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80245B68: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80245B6C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80245B70: jal         0x802452EC
    // 0x80245B74: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    func_802452EC(rdram, ctx);
        goto after_0;
    // 0x80245B74: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    after_0:
    // 0x80245B78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80245B7C: bne         $v0, $at, L_80245B90
    if (ctx->r2 != ctx->r1) {
        // 0x80245B80: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80245B90;
    }
    // 0x80245B80: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80245B84: jal         0x802450E8
    // 0x80245B88: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_802450E8(rdram, ctx);
        goto after_1;
    // 0x80245B88: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x80245B8C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80245B90:
    // 0x80245B90: beq         $v0, $zero, L_80245BA0
    if (ctx->r2 == 0) {
        // 0x80245B94: addiu       $s6, $sp, 0x78
        ctx->r22 = ADD32(ctx->r29, 0X78);
            goto L_80245BA0;
    }
    // 0x80245B94: addiu       $s6, $sp, 0x78
    ctx->r22 = ADD32(ctx->r29, 0X78);
    // 0x80245B98: b           L_802460FC
    // 0x80245B9C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_802460FC;
    // 0x80245B9C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80245BA0:
    // 0x80245BA0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80245BA4: jal         0x8024612C
    // 0x80245BA8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_8024612C(rdram, ctx);
        goto after_2;
    // 0x80245BA8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_2:
    // 0x80245BAC: beq         $v0, $zero, L_80245BBC
    if (ctx->r2 == 0) {
        // 0x80245BB0: nop
    
            goto L_80245BBC;
    }
    // 0x80245BB0: nop

    // 0x80245BB4: b           L_80246100
    // 0x80245BB8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_80246100;
    // 0x80245BB8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80245BBC:
    // 0x80245BBC: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x80245BC0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80245BC4: blez        $v0, L_80245E6C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80245BC8: addiu       $fp, $zero, 0x3
        ctx->r30 = ADD32(0, 0X3);
            goto L_80245E6C;
    }
    // 0x80245BC8: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x80245BCC: addiu       $s7, $sp, 0x29C
    ctx->r23 = ADD32(ctx->r29, 0X29C);
    // 0x80245BD0: addiu       $s3, $sp, 0x2BC
    ctx->r19 = ADD32(ctx->r29, 0X2BC);
    // 0x80245BD4: addiu       $s1, $sp, 0x4BC
    ctx->r17 = ADD32(ctx->r29, 0X4BC);
L_80245BD8:
    // 0x80245BD8: lw          $t6, 0x5C($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X5C);
    // 0x80245BDC: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80245BE0: addu        $a2, $t6, $s4
    ctx->r6 = ADD32(ctx->r14, ctx->r20);
    // 0x80245BE4: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80245BE8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80245BEC: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80245BF0: jal         0x80245710
    // 0x80245BF4: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    func_80245710(rdram, ctx);
        goto after_3;
    // 0x80245BF4: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_3:
    // 0x80245BF8: beq         $v0, $zero, L_80245C08
    if (ctx->r2 == 0) {
        // 0x80245BFC: nop
    
            goto L_80245C08;
    }
    // 0x80245BFC: nop

    // 0x80245C00: b           L_80246100
    // 0x80245C04: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_80246100;
    // 0x80245C04: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80245C08:
    // 0x80245C08: lhu         $v0, 0x2A0($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A0);
    // 0x80245C0C: lw          $t8, 0x29C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X29C);
    // 0x80245C10: beq         $v0, $zero, L_80245DBC
    if (ctx->r2 == 0) {
        // 0x80245C14: nop
    
            goto L_80245DBC;
    }
    // 0x80245C14: nop

    // 0x80245C18: beq         $t8, $zero, L_80245DBC
    if (ctx->r24 == 0) {
        // 0x80245C1C: addiu       $t9, $sp, 0x2A2
        ctx->r25 = ADD32(ctx->r29, 0X2A2);
            goto L_80245DBC;
    }
    // 0x80245C1C: addiu       $t9, $sp, 0x2A2
    ctx->r25 = ADD32(ctx->r29, 0X2A2);
    // 0x80245C20: lhu         $at, 0x0($t9)
    ctx->r1 = MEM_HU(ctx->r25, 0X0);
    // 0x80245C24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80245C28: sh          $at, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r1;
    // 0x80245C2C: lw          $t4, 0x60($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X60);
    // 0x80245C30: lhu         $t3, 0x4BC($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X4BC);
    // 0x80245C34: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80245C38: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80245C3C: bne         $at, $zero, L_80245D20
    if (ctx->r1 != 0) {
        // 0x80245C40: addiu       $s5, $zero, 0xFF
        ctx->r21 = ADD32(0, 0XFF);
            goto L_80245D20;
    }
    // 0x80245C40: addiu       $s5, $zero, 0xFF
    ctx->r21 = ADD32(0, 0XFF);
    // 0x80245C44: lbu         $t5, 0x4BC($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X4BC);
    // 0x80245C48: lbu         $t6, 0x64($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X64);
    // 0x80245C4C: lbu         $t7, 0x4BD($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X4BD);
    // 0x80245C50: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80245C54: beq         $at, $zero, L_80245D20
    if (ctx->r1 == 0) {
        // 0x80245C58: nop
    
            goto L_80245D20;
    }
    // 0x80245C58: nop

    // 0x80245C5C: blez        $t7, L_80245D20
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80245C60: slti        $at, $t7, 0x80
        ctx->r1 = SIGNED(ctx->r15) < 0X80 ? 1 : 0;
            goto L_80245D20;
    }
    // 0x80245C60: slti        $at, $t7, 0x80
    ctx->r1 = SIGNED(ctx->r15) < 0X80 ? 1 : 0;
    // 0x80245C64: beq         $at, $zero, L_80245D20
    if (ctx->r1 == 0) {
        // 0x80245C68: nop
    
            goto L_80245D20;
    }
    // 0x80245C68: nop

    // 0x80245C6C: lbu         $t8, 0x4BC($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X4BC);
L_80245C70:
    // 0x80245C70: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80245C74: beq         $t8, $s5, L_80245CA4
    if (ctx->r24 == ctx->r21) {
        // 0x80245C78: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_80245CA4;
    }
    // 0x80245C78: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80245C7C: or          $s5, $t8, $zero
    ctx->r21 = ctx->r24 | 0;
    // 0x80245C80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80245C84: jal         0x80245404
    // 0x80245C88: andi        $a3, $t8, 0xFF
    ctx->r7 = ctx->r24 & 0XFF;
    func_80245404(rdram, ctx);
        goto after_4;
    // 0x80245C88: andi        $a3, $t8, 0xFF
    ctx->r7 = ctx->r24 & 0XFF;
    after_4:
    // 0x80245C8C: beq         $v0, $zero, L_80245CA4
    if (ctx->r2 == 0) {
        // 0x80245C90: nop
    
            goto L_80245CA4;
    }
    // 0x80245C90: nop

    // 0x80245C94: beq         $v0, $fp, L_80245CA4
    if (ctx->r2 == ctx->r30) {
        // 0x80245C98: nop
    
            goto L_80245CA4;
    }
    // 0x80245C98: nop

    // 0x80245C9C: b           L_80246100
    // 0x80245CA0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_80246100;
    // 0x80245CA0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80245CA4:
    // 0x80245CA4: lhu         $at, 0x0($s1)
    ctx->r1 = MEM_HU(ctx->r17, 0X0);
    // 0x80245CA8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80245CAC: sh          $at, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r1;
    // 0x80245CB0: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80245CB4: jal         0x80246410
    // 0x80245CB8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_80246410(rdram, ctx);
        goto after_5;
    // 0x80245CB8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_5:
    // 0x80245CBC: subu        $a0, $v0, $s0
    ctx->r4 = SUB32(ctx->r2, ctx->r16);
    // 0x80245CC0: bne         $a0, $zero, L_80245D20
    if (ctx->r4 != 0) {
        // 0x80245CC4: nop
    
            goto L_80245D20;
    }
    // 0x80245CC4: nop

    // 0x80245CC8: lbu         $t2, 0x4BD($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X4BD);
    // 0x80245CCC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80245CD0: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80245CD4: addu        $t4, $s3, $t3
    ctx->r12 = ADD32(ctx->r19, ctx->r11);
    // 0x80245CD8: lhu         $at, 0x0($t4)
    ctx->r1 = MEM_HU(ctx->r12, 0X0);
    // 0x80245CDC: nop

    // 0x80245CE0: sh          $at, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r1;
    // 0x80245CE4: lw          $t8, 0x60($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X60);
    // 0x80245CE8: lhu         $t7, 0x4BC($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X4BC);
    // 0x80245CEC: lbu         $t1, 0x4BC($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4BC);
    // 0x80245CF0: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80245CF4: bne         $at, $zero, L_80245D20
    if (ctx->r1 != 0) {
        // 0x80245CF8: nop
    
            goto L_80245D20;
    }
    // 0x80245CF8: nop

    // 0x80245CFC: lbu         $t9, 0x64($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X64);
    // 0x80245D00: lbu         $t2, 0x4BD($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X4BD);
    // 0x80245D04: slt         $at, $t1, $t9
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80245D08: beq         $at, $zero, L_80245D20
    if (ctx->r1 == 0) {
        // 0x80245D0C: nop
    
            goto L_80245D20;
    }
    // 0x80245D0C: nop

    // 0x80245D10: blez        $t2, L_80245D20
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80245D14: slti        $at, $t2, 0x80
        ctx->r1 = SIGNED(ctx->r10) < 0X80 ? 1 : 0;
            goto L_80245D20;
    }
    // 0x80245D14: slti        $at, $t2, 0x80
    ctx->r1 = SIGNED(ctx->r10) < 0X80 ? 1 : 0;
    // 0x80245D18: bne         $at, $zero, L_80245C70
    if (ctx->r1 != 0) {
        // 0x80245D1C: lbu         $t8, 0x4BC($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X4BC);
            goto L_80245C70;
    }
    // 0x80245D1C: lbu         $t8, 0x4BC($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X4BC);
L_80245D20:
    // 0x80245D20: bne         $a0, $zero, L_80245D38
    if (ctx->r4 != 0) {
        // 0x80245D24: nop
    
            goto L_80245D38;
    }
    // 0x80245D24: nop

    // 0x80245D28: lhu         $t3, 0x4BC($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X4BC);
    // 0x80245D2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80245D30: beq         $t3, $at, L_80245E54
    if (ctx->r11 == ctx->r1) {
        // 0x80245D34: nop
    
            goto L_80245E54;
    }
    // 0x80245D34: nop

L_80245D38:
    // 0x80245D38: sh          $zero, 0x2A0($sp)
    MEM_H(0X2A0, ctx->r29) = 0;
    // 0x80245D3C: sw          $zero, 0x29C($sp)
    MEM_W(0X29C, ctx->r29) = 0;
    // 0x80245D40: sh          $zero, 0x2A2($sp)
    MEM_H(0X2A2, ctx->r29) = 0;
    // 0x80245D44: sb          $zero, 0x2A4($sp)
    MEM_B(0X2A4, ctx->r29) = 0;
    // 0x80245D48: sh          $zero, 0x2A6($sp)
    MEM_H(0X2A6, ctx->r29) = 0;
    // 0x80245D4C: lbu         $t5, 0x65($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X65);
    // 0x80245D50: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80245D54: beq         $t5, $zero, L_80245D74
    if (ctx->r13 == 0) {
        // 0x80245D58: nop
    
            goto L_80245D74;
    }
    // 0x80245D58: nop

    // 0x80245D5C: jal         0x802456A0
    // 0x80245D60: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    func_802456A0(rdram, ctx);
        goto after_6;
    // 0x80245D60: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_6:
    // 0x80245D64: beq         $v0, $zero, L_80245D74
    if (ctx->r2 == 0) {
        // 0x80245D68: nop
    
            goto L_80245D74;
    }
    // 0x80245D68: nop

    // 0x80245D6C: b           L_80246100
    // 0x80245D70: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_80246100;
    // 0x80245D70: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80245D74:
    // 0x80245D74: lw          $t4, 0x5C($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X5C);
    // 0x80245D78: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80245D7C: addu        $a2, $t4, $s4
    ctx->r6 = ADD32(ctx->r12, ctx->r20);
    // 0x80245D80: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x80245D84: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80245D88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80245D8C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80245D90: jal         0x80246660
    // 0x80245D94: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    func_80246660(rdram, ctx);
        goto after_7;
    // 0x80245D94: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_7:
    // 0x80245D98: beq         $v0, $zero, L_80245DAC
    if (ctx->r2 == 0) {
        // 0x80245D9C: lw          $t7, 0x74($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X74);
            goto L_80245DAC;
    }
    // 0x80245D9C: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x80245DA0: b           L_80246100
    // 0x80245DA4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_80246100;
    // 0x80245DA4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80245DA8: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
L_80245DAC:
    // 0x80245DAC: nop

    // 0x80245DB0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80245DB4: b           L_80245E54
    // 0x80245DB8: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
        goto L_80245E54;
    // 0x80245DB8: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
L_80245DBC:
    // 0x80245DBC: bne         $v0, $zero, L_80245DD4
    if (ctx->r2 != 0) {
        // 0x80245DC0: nop
    
            goto L_80245DD4;
    }
    // 0x80245DC0: nop

    // 0x80245DC4: lw          $t1, 0x29C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X29C);
    // 0x80245DC8: nop

    // 0x80245DCC: beq         $t1, $zero, L_80245E54
    if (ctx->r9 == 0) {
        // 0x80245DD0: nop
    
            goto L_80245E54;
    }
    // 0x80245DD0: nop

L_80245DD4:
    // 0x80245DD4: sh          $zero, 0x2A0($sp)
    MEM_H(0X2A0, ctx->r29) = 0;
    // 0x80245DD8: sw          $zero, 0x29C($sp)
    MEM_W(0X29C, ctx->r29) = 0;
    // 0x80245DDC: sh          $zero, 0x2A2($sp)
    MEM_H(0X2A2, ctx->r29) = 0;
    // 0x80245DE0: sb          $zero, 0x2A4($sp)
    MEM_B(0X2A4, ctx->r29) = 0;
    // 0x80245DE4: sh          $zero, 0x2A6($sp)
    MEM_H(0X2A6, ctx->r29) = 0;
    // 0x80245DE8: lbu         $t9, 0x65($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X65);
    // 0x80245DEC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80245DF0: beq         $t9, $zero, L_80245E10
    if (ctx->r25 == 0) {
        // 0x80245DF4: nop
    
            goto L_80245E10;
    }
    // 0x80245DF4: nop

    // 0x80245DF8: jal         0x802456A0
    // 0x80245DFC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    func_802456A0(rdram, ctx);
        goto after_8;
    // 0x80245DFC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_8:
    // 0x80245E00: beq         $v0, $zero, L_80245E10
    if (ctx->r2 == 0) {
        // 0x80245E04: nop
    
            goto L_80245E10;
    }
    // 0x80245E04: nop

    // 0x80245E08: b           L_80246100
    // 0x80245E0C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_80246100;
    // 0x80245E0C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80245E10:
    // 0x80245E10: lw          $t2, 0x5C($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X5C);
    // 0x80245E14: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80245E18: addu        $a2, $t2, $s4
    ctx->r6 = ADD32(ctx->r10, ctx->r20);
    // 0x80245E1C: andi        $t3, $a2, 0xFFFF
    ctx->r11 = ctx->r6 & 0XFFFF;
    // 0x80245E20: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80245E24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80245E28: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x80245E2C: jal         0x80246660
    // 0x80245E30: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    func_80246660(rdram, ctx);
        goto after_9;
    // 0x80245E30: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_9:
    // 0x80245E34: beq         $v0, $zero, L_80245E48
    if (ctx->r2 == 0) {
        // 0x80245E38: lw          $t5, 0x74($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X74);
            goto L_80245E48;
    }
    // 0x80245E38: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x80245E3C: b           L_80246100
    // 0x80245E40: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_80246100;
    // 0x80245E40: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80245E44: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
L_80245E48:
    // 0x80245E48: nop

    // 0x80245E4C: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x80245E50: sw          $t4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r12;
L_80245E54:
    // 0x80245E54: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x80245E58: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80245E5C: slt         $at, $s4, $v0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80245E60: bne         $at, $zero, L_80245BD8
    if (ctx->r1 != 0) {
        // 0x80245E64: nop
    
            goto L_80245BD8;
    }
    // 0x80245E64: nop

    // 0x80245E68: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80245E6C:
    // 0x80245E6C: addiu       $s3, $sp, 0x2BC
    ctx->r19 = ADD32(ctx->r29, 0X2BC);
    // 0x80245E70: addiu       $s7, $sp, 0x29C
    ctx->r23 = ADD32(ctx->r29, 0X29C);
    // 0x80245E74: blez        $v0, L_80245F00
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80245E78: addiu       $fp, $zero, 0x3
        ctx->r30 = ADD32(0, 0X3);
            goto L_80245F00;
    }
    // 0x80245E78: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
L_80245E7C:
    // 0x80245E7C: lw          $t6, 0x5C($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X5C);
    // 0x80245E80: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80245E84: addu        $a2, $t6, $s4
    ctx->r6 = ADD32(ctx->r14, ctx->r20);
    // 0x80245E88: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80245E8C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80245E90: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80245E94: jal         0x80245710
    // 0x80245E98: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    func_80245710(rdram, ctx);
        goto after_10;
    // 0x80245E98: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_10:
    // 0x80245E9C: beq         $v0, $zero, L_80245EAC
    if (ctx->r2 == 0) {
        // 0x80245EA0: sll         $t8, $s4, 1
        ctx->r24 = S32(ctx->r20 << 1);
            goto L_80245EAC;
    }
    // 0x80245EA0: sll         $t8, $s4, 1
    ctx->r24 = S32(ctx->r20 << 1);
    // 0x80245EA4: b           L_80246100
    // 0x80245EA8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_80246100;
    // 0x80245EA8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80245EAC:
    // 0x80245EAC: lhu         $t9, 0x2A0($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X2A0);
    // 0x80245EB0: addiu       $t1, $sp, 0x27C
    ctx->r9 = ADD32(ctx->r29, 0X27C);
    // 0x80245EB4: beq         $t9, $zero, L_80245EE8
    if (ctx->r25 == 0) {
        // 0x80245EB8: addu        $a0, $t8, $t1
        ctx->r4 = ADD32(ctx->r24, ctx->r9);
            goto L_80245EE8;
    }
    // 0x80245EB8: addu        $a0, $t8, $t1
    ctx->r4 = ADD32(ctx->r24, ctx->r9);
    // 0x80245EBC: lw          $t2, 0x29C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X29C);
    // 0x80245EC0: lhu         $t3, 0x2A2($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X2A2);
    // 0x80245EC4: beq         $t2, $zero, L_80245EE8
    if (ctx->r10 == 0) {
        // 0x80245EC8: nop
    
            goto L_80245EE8;
    }
    // 0x80245EC8: nop

    // 0x80245ECC: lhu         $t5, 0x62($s2)
    ctx->r13 = MEM_HU(ctx->r18, 0X62);
    // 0x80245ED0: nop

    // 0x80245ED4: slt         $at, $t3, $t5
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80245ED8: bne         $at, $zero, L_80245EE8
    if (ctx->r1 != 0) {
        // 0x80245EDC: nop
    
            goto L_80245EE8;
    }
    // 0x80245EDC: nop

    // 0x80245EE0: b           L_80245EEC
    // 0x80245EE4: sh          $t3, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r11;
        goto L_80245EEC;
    // 0x80245EE4: sh          $t3, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r11;
L_80245EE8:
    // 0x80245EE8: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
L_80245EEC:
    // 0x80245EEC: lw          $t4, 0x50($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X50);
    // 0x80245EF0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80245EF4: slt         $at, $s4, $t4
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80245EF8: bne         $at, $zero, L_80245E7C
    if (ctx->r1 != 0) {
        // 0x80245EFC: nop
    
            goto L_80245E7C;
    }
    // 0x80245EFC: nop

L_80245F00:
    // 0x80245F00: lbu         $t6, 0x64($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X64);
    // 0x80245F04: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80245F08: blez        $t6, L_802460C8
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80245F0C: addiu       $s7, $sp, 0x4BC
        ctx->r23 = ADD32(ctx->r29, 0X4BC);
            goto L_802460C8;
    }
    // 0x80245F0C: addiu       $s7, $sp, 0x4BC
    ctx->r23 = ADD32(ctx->r29, 0X4BC);
    // 0x80245F10: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x80245F14: addiu       $s1, $sp, 0x3BC
    ctx->r17 = ADD32(ctx->r29, 0X3BC);
    // 0x80245F18: addiu       $s0, $sp, 0x60
    ctx->r16 = ADD32(ctx->r29, 0X60);
L_80245F1C:
    // 0x80245F1C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80245F20: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80245F24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80245F28: jal         0x80245404
    // 0x80245F2C: andi        $a3, $s5, 0xFF
    ctx->r7 = ctx->r21 & 0XFF;
    func_80245404(rdram, ctx);
        goto after_11;
    // 0x80245F2C: andi        $a3, $s5, 0xFF
    ctx->r7 = ctx->r21 & 0XFF;
    after_11:
    // 0x80245F30: beq         $v0, $zero, L_80245F48
    if (ctx->r2 == 0) {
        // 0x80245F34: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_80245F48;
    }
    // 0x80245F34: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80245F38: beq         $v0, $fp, L_80245F48
    if (ctx->r2 == ctx->r30) {
        // 0x80245F3C: nop
    
            goto L_80245F48;
    }
    // 0x80245F3C: nop

    // 0x80245F40: b           L_80246100
    // 0x80245F44: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_80246100;
    // 0x80245F44: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80245F48:
    // 0x80245F48: blez        $s5, L_80245F58
    if (SIGNED(ctx->r21) <= 0) {
        // 0x80245F4C: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_80245F58;
    }
    // 0x80245F4C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80245F50: b           L_80245F60
    // 0x80245F54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_80245F60;
    // 0x80245F54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80245F58:
    // 0x80245F58: lw          $a2, 0x60($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X60);
    // 0x80245F5C: nop

L_80245F60:
    // 0x80245F60: blez        $a2, L_80245FD4
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80245F64: andi        $t0, $a2, 0x3
        ctx->r8 = ctx->r6 & 0X3;
            goto L_80245FD4;
    }
    // 0x80245F64: andi        $t0, $a2, 0x3
    ctx->r8 = ctx->r6 & 0X3;
    // 0x80245F68: beq         $t0, $zero, L_80245F98
    if (ctx->r8 == 0) {
        // 0x80245F6C: or          $a0, $t0, $zero
        ctx->r4 = ctx->r8 | 0;
            goto L_80245F98;
    }
    // 0x80245F6C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80245F70: sll         $a3, $s4, 1
    ctx->r7 = S32(ctx->r20 << 1);
    // 0x80245F74: addu        $v1, $s1, $a3
    ctx->r3 = ADD32(ctx->r17, ctx->r7);
    // 0x80245F78: addu        $v0, $s3, $a3
    ctx->r2 = ADD32(ctx->r19, ctx->r7);
L_80245F7C:
    // 0x80245F7C: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x80245F80: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80245F84: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80245F88: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80245F8C: bne         $a0, $s4, L_80245F7C
    if (ctx->r4 != ctx->r20) {
        // 0x80245F90: sh          $t7, -0x2($v1)
        MEM_H(-0X2, ctx->r3) = ctx->r15;
            goto L_80245F7C;
    }
    // 0x80245F90: sh          $t7, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r15;
    // 0x80245F94: beq         $s4, $a2, L_80245FD4
    if (ctx->r20 == ctx->r6) {
        // 0x80245F98: sll         $a3, $s4, 1
        ctx->r7 = S32(ctx->r20 << 1);
            goto L_80245FD4;
    }
L_80245F98:
    // 0x80245F98: sll         $a3, $s4, 1
    ctx->r7 = S32(ctx->r20 << 1);
    // 0x80245F9C: addu        $v1, $s1, $a3
    ctx->r3 = ADD32(ctx->r17, ctx->r7);
    // 0x80245FA0: addu        $v0, $s3, $a3
    ctx->r2 = ADD32(ctx->r19, ctx->r7);
L_80245FA4:
    // 0x80245FA4: lhu         $t1, 0x2($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X2);
    // 0x80245FA8: lhu         $t9, 0x4($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X4);
    // 0x80245FAC: lhu         $t2, 0x6($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X6);
    // 0x80245FB0: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x80245FB4: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80245FB8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80245FBC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80245FC0: sh          $t1, -0x6($v1)
    MEM_H(-0X6, ctx->r3) = ctx->r9;
    // 0x80245FC4: sh          $t9, -0x4($v1)
    MEM_H(-0X4, ctx->r3) = ctx->r25;
    // 0x80245FC8: sh          $t2, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r10;
    // 0x80245FCC: bne         $s4, $a2, L_80245FA4
    if (ctx->r20 != ctx->r6) {
        // 0x80245FD0: sh          $t8, -0x8($v1)
        MEM_H(-0X8, ctx->r3) = ctx->r24;
            goto L_80245FA4;
    }
    // 0x80245FD0: sh          $t8, -0x8($v1)
    MEM_H(-0X8, ctx->r3) = ctx->r24;
L_80245FD4:
    // 0x80245FD4: slti        $at, $s4, 0x80
    ctx->r1 = SIGNED(ctx->r20) < 0X80 ? 1 : 0;
    // 0x80245FD8: beq         $at, $zero, L_80245FF8
    if (ctx->r1 == 0) {
        // 0x80245FDC: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_80245FF8;
    }
    // 0x80245FDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80245FE0: sll         $t5, $s4, 1
    ctx->r13 = S32(ctx->r20 << 1);
    // 0x80245FE4: addu        $v1, $s1, $t5
    ctx->r3 = ADD32(ctx->r17, ctx->r13);
L_80245FE8:
    // 0x80245FE8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80245FEC: sltu        $at, $v1, $s7
    ctx->r1 = ctx->r3 < ctx->r23 ? 1 : 0;
    // 0x80245FF0: bne         $at, $zero, L_80245FE8
    if (ctx->r1 != 0) {
        // 0x80245FF4: sh          $s6, -0x2($v1)
        MEM_H(-0X2, ctx->r3) = ctx->r22;
            goto L_80245FE8;
    }
    // 0x80245FF4: sh          $s6, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r22;
L_80245FF8:
    // 0x80245FF8: lw          $t3, 0x50($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X50);
    // 0x80245FFC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80246000: blez        $t3, L_80246098
    if (SIGNED(ctx->r11) <= 0) {
        // 0x80246004: andi        $a3, $s5, 0xFF
        ctx->r7 = ctx->r21 & 0XFF;
            goto L_80246098;
    }
    // 0x80246004: andi        $a3, $s5, 0xFF
    ctx->r7 = ctx->r21 & 0XFF;
    // 0x80246008: addiu       $a0, $sp, 0x27C
    ctx->r4 = ADD32(ctx->r29, 0X27C);
L_8024600C:
    // 0x8024600C: lbu         $t4, 0x0($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X0);
    // 0x80246010: nop

    // 0x80246014: bne         $a1, $t4, L_80246084
    if (ctx->r5 != ctx->r12) {
        // 0x80246018: nop
    
            goto L_80246084;
    }
    // 0x80246018: nop

    // 0x8024601C: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x80246020: lhu         $t7, 0x62($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X62);
    // 0x80246024: nop

    // 0x80246028: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8024602C: bne         $at, $zero, L_80246084
    if (ctx->r1 != 0) {
        // 0x80246030: nop
    
            goto L_80246084;
    }
    // 0x80246030: nop

L_80246034:
    // 0x80246034: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x80246038: nop

    // 0x8024603C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80246040: addu        $t8, $s3, $v0
    ctx->r24 = ADD32(ctx->r19, ctx->r2);
    // 0x80246044: lhu         $at, 0x0($t8)
    ctx->r1 = MEM_HU(ctx->r24, 0X0);
    // 0x80246048: addu        $t2, $s1, $v0
    ctx->r10 = ADD32(ctx->r17, ctx->r2);
    // 0x8024604C: sh          $at, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r1;
    // 0x80246050: sh          $at, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r1;
    // 0x80246054: lhu         $at, 0x0($s0)
    ctx->r1 = MEM_HU(ctx->r16, 0X0);
    // 0x80246058: nop

    // 0x8024605C: sh          $at, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r1;
    // 0x80246060: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x80246064: nop

    // 0x80246068: bne         $a1, $t7, L_80246084
    if (ctx->r5 != ctx->r15) {
        // 0x8024606C: nop
    
            goto L_80246084;
    }
    // 0x8024606C: nop

    // 0x80246070: lhu         $t8, 0x62($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X62);
    // 0x80246074: andi        $t1, $at, 0xFFFF
    ctx->r9 = ctx->r1 & 0XFFFF;
    // 0x80246078: slt         $at, $t1, $t8
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8024607C: beq         $at, $zero, L_80246034
    if (ctx->r1 == 0) {
        // 0x80246080: nop
    
            goto L_80246034;
    }
    // 0x80246080: nop

L_80246084:
    // 0x80246084: lw          $t9, 0x50($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X50);
    // 0x80246088: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8024608C: slt         $at, $s4, $t9
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80246090: bne         $at, $zero, L_8024600C
    if (ctx->r1 != 0) {
        // 0x80246094: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_8024600C;
    }
    // 0x80246094: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_80246098:
    // 0x80246098: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8024609C: jal         0x80245404
    // 0x802460A0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80245404(rdram, ctx);
        goto after_12;
    // 0x802460A0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_12:
    // 0x802460A4: beq         $v0, $zero, L_802460B4
    if (ctx->r2 == 0) {
        // 0x802460A8: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_802460B4;
    }
    // 0x802460A8: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x802460AC: b           L_80246100
    // 0x802460B0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_80246100;
    // 0x802460B0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_802460B4:
    // 0x802460B4: lbu         $t2, 0x64($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X64);
    // 0x802460B8: andi        $t5, $s5, 0xFF
    ctx->r13 = ctx->r21 & 0XFF;
    // 0x802460BC: slt         $at, $t5, $t2
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x802460C0: bne         $at, $zero, L_80245F1C
    if (ctx->r1 != 0) {
        // 0x802460C4: or          $s5, $t5, $zero
        ctx->r21 = ctx->r13 | 0;
            goto L_80245F1C;
    }
    // 0x802460C4: or          $s5, $t5, $zero
    ctx->r21 = ctx->r13 | 0;
L_802460C8:
    // 0x802460C8: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x802460CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802460D0: beq         $t3, $zero, L_802460EC
    if (ctx->r11 == 0) {
        // 0x802460D4: nop
    
            goto L_802460EC;
    }
    // 0x802460D4: nop

    // 0x802460D8: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x802460DC: nop

    // 0x802460E0: ori         $t6, $t4, 0x2
    ctx->r14 = ctx->r12 | 0X2;
    // 0x802460E4: b           L_802460FC
    // 0x802460E8: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
        goto L_802460FC;
    // 0x802460E8: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
L_802460EC:
    // 0x802460EC: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x802460F0: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x802460F4: and         $t1, $t7, $at
    ctx->r9 = ctx->r15 & ctx->r1;
    // 0x802460F8: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
L_802460FC:
    // 0x802460FC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80246100:
    // 0x80246100: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80246104: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80246108: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8024610C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80246110: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80246114: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80246118: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8024611C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80246120: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80246124: jr          $ra
    // 0x80246128: addiu       $sp, $sp, 0x4C8
    ctx->r29 = ADD32(ctx->r29, 0X4C8);
    return;
    // 0x80246128: addiu       $sp, $sp, 0x4C8
    ctx->r29 = ADD32(ctx->r29, 0X4C8);
;}
RECOMP_FUNC void func_802254F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802254F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802254F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802254FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80225500: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80225504: jal         0x8022B948
    // 0x80225508: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_0;
    // 0x80225508: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x8022550C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80225510: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80225514: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80225518: jal         0x80225424
    // 0x8022551C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_1;
    // 0x8022551C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x80225520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225524: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80225528: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022552C: jr          $ra
    // 0x80225530: nop

    return;
    // 0x80225530: nop

;}
RECOMP_FUNC void func_80245AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80245AD0: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80245AD4: lw          $t6, 0x1A50($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1A50);
    // 0x80245AD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80245ADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80245AE0: bne         $t6, $zero, L_80245AF0
    if (ctx->r14 != 0) {
        // 0x80245AE4: nop
    
            goto L_80245AF0;
    }
    // 0x80245AE4: nop

    // 0x80245AE8: jal         0x80245A80
    // 0x80245AEC: nop

    func_80245A80(rdram, ctx);
        goto after_0;
    // 0x80245AEC: nop

    after_0:
L_80245AF0:
    // 0x80245AF0: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80245AF4: addiu       $a0, $a0, 0x5F08
    ctx->r4 = ADD32(ctx->r4, 0X5F08);
    // 0x80245AF8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80245AFC: jal         0x802374B0
    // 0x80245B00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_1;
    // 0x80245B00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80245B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80245B08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80245B0C: jr          $ra
    // 0x80245B10: nop

    return;
    // 0x80245B10: nop

;}
RECOMP_FUNC void func_80236A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80236A10: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80236A14: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80236A18: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80236A1C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80236A20: lw          $a2, 0xC($a1)
    ctx->r6 = MEM_W(ctx->r5, 0XC);
    // 0x80236A24: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x80236A28: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x80236A2C: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80236A30: lw          $t6, 0x910($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X910);
    // 0x80236A34: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80236A38: addiu       $t8, $zero, 0x1E8
    ctx->r24 = ADD32(0, 0X1E8);
    // 0x80236A3C: addiu       $t9, $zero, 0x7FFF
    ctx->r25 = ADD32(0, 0X7FFF);
    // 0x80236A40: addiu       $t0, $zero, 0x3E80
    ctx->r8 = ADD32(0, 0X3E80);
    // 0x80236A44: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x80236A48: sw          $t8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r24;
    // 0x80236A4C: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x80236A50: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x80236A54: sh          $t9, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r25;
    // 0x80236A58: sw          $t0, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r8;
    // 0x80236A5C: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x80236A60: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x80236A64: lw          $t1, 0x10($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X10);
    // 0x80236A68: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x80236A6C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80236A70: sw          $t1, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r9;
    // 0x80236A74: lw          $t2, 0x14($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X14);
    // 0x80236A78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80236A7C: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80236A80: sw          $t2, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->r10;
    // 0x80236A84: lw          $t3, 0x18($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X18);
    // 0x80236A88: sh          $t4, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r12;
    // 0x80236A8C: sw          $t3, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r11;
    // 0x80236A90: lbu         $t5, 0x8($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X8);
    // 0x80236A94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80236A98: sb          $t5, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r13;
    // 0x80236A9C: lbu         $a3, 0x8($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X8);
    // 0x80236AA0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80236AA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80236AA8: jal         0x80236CD0
    // 0x80236AAC: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_80236CD0(rdram, ctx);
        goto after_0;
    // 0x80236AAC: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_0:
    // 0x80236AB0: sw          $v0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r2;
    // 0x80236AB4: jal         0x80241424
    // 0x80236AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80241424(rdram, ctx);
        goto after_1;
    // 0x80236AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80236ABC: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x80236AC0: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x80236AC4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80236AC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80236ACC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80236AD0: jal         0x80236CD0
    // 0x80236AD4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_80236CD0(rdram, ctx);
        goto after_2;
    // 0x80236AD4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x80236AD8: sw          $zero, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = 0;
    // 0x80236ADC: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x80236AE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80236AE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80236AE8: blez        $t8, L_80236B18
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80236AEC: addiu       $t1, $zero, 0x1C
        ctx->r9 = ADD32(0, 0X1C);
            goto L_80236B18;
    }
    // 0x80236AEC: addiu       $t1, $zero, 0x1C
    ctx->r9 = ADD32(0, 0X1C);
    // 0x80236AF0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80236AF4: lw          $t9, 0x6C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C);
L_80236AF8:
    // 0x80236AF8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80236AFC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80236B00: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
    // 0x80236B04: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x80236B08: addiu       $v1, $v1, 0x38
    ctx->r3 = ADD32(ctx->r3, 0X38);
    // 0x80236B0C: slt         $at, $a0, $t0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80236B10: bnel        $at, $zero, L_80236AF8
    if (ctx->r1 != 0) {
        // 0x80236B14: lw          $t9, 0x6C($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X6C);
            goto L_80236AF8;
    }
    goto skip_0;
    // 0x80236B14: lw          $t9, 0x6C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C);
    skip_0:
L_80236B18:
    // 0x80236B18: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80236B1C: sw          $zero, 0x68($s0)
    MEM_W(0X68, ctx->r16) = 0;
    // 0x80236B20: lw          $a3, 0x4($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X4);
    // 0x80236B24: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80236B28: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80236B2C: jal         0x80236CD0
    // 0x80236B30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80236CD0(rdram, ctx);
        goto after_3;
    // 0x80236B30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80236B34: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    // 0x80236B38: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80236B3C: jal         0x8023F52C
    // 0x80236B40: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    func_8023F52C(rdram, ctx);
        goto after_4;
    // 0x80236B40: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    after_4:
    // 0x80236B44: lui         $t2, 0x8023
    ctx->r10 = S32(0X8023 << 16);
    // 0x80236B48: addiu       $t2, $t2, 0x63FC
    ctx->r10 = ADD32(ctx->r10, 0X63FC);
    // 0x80236B4C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80236B50: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
    // 0x80236B54: sw          $s0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r16;
    // 0x80236B58: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80236B5C: lw          $a0, 0x910($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X910);
    // 0x80236B60: jal         0x8023F5A0
    // 0x80236B64: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8023F5A0(rdram, ctx);
        goto after_5;
    // 0x80236B64: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x80236B68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80236B6C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80236B70: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80236B74: jr          $ra
    // 0x80236B78: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80236B78: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80227C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227C30: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80227C34: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80227C38: lw          $t6, 0x521C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X521C);
    // 0x80227C3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227C40: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80227C44: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80227C48: jal         0x80223840
    // 0x80227C4C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227C4C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80227C50: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80227C54: lui         $a3, 0x434F
    ctx->r7 = S32(0X434F << 16);
    // 0x80227C58: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80227C5C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80227C60: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80227C64: ori         $a3, $a3, 0x4D4D
    ctx->r7 = ctx->r7 | 0X4D4D;
    // 0x80227C68: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227C6C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80227C70: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80227C74: jal         0x80223B30
    // 0x80227C78: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80223B30(rdram, ctx);
        goto after_1;
    // 0x80227C78: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x80227C7C: beq         $v0, $zero, L_80227C90
    if (ctx->r2 == 0) {
        // 0x80227C80: nop
    
            goto L_80227C90;
    }
    // 0x80227C80: nop

    // 0x80227C84: jal         0x802254F4
    // 0x80227C88: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_802254F4(rdram, ctx);
        goto after_2;
    // 0x80227C88: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80227C8C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_80227C90:
    // 0x80227C90: jal         0x802238F0
    // 0x80227C94: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_802238F0(rdram, ctx);
        goto after_3;
    // 0x80227C94: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x80227C98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227C9C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80227CA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80227CA4: jr          $ra
    // 0x80227CA8: nop

    return;
    // 0x80227CA8: nop

;}
RECOMP_FUNC void func_8020505C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020505C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80205060: lui         $t0, 0x8026
    ctx->r8 = S32(0X8026 << 16);
    // 0x80205064: addiu       $t0, $t0, -0x4750
    ctx->r8 = ADD32(ctx->r8, -0X4750);
    // 0x80205068: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8020506C: lw          $s0, 0x4($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X4);
    // 0x80205070: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80205074: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80205078: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8020507C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80205080: beq         $s0, $zero, L_802050D8
    if (ctx->r16 == 0) {
        // 0x80205084: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_802050D8;
    }
    // 0x80205084: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80205088: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
L_8020508C:
    // 0x8020508C: addu        $t6, $a3, $a1
    ctx->r14 = ADD32(ctx->r7, ctx->r5);
    // 0x80205090: sltu        $at, $a3, $v0
    ctx->r1 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x80205094: bne         $at, $zero, L_802050D8
    if (ctx->r1 != 0) {
        // 0x80205098: addiu       $v1, $v0, 0x800
        ctx->r3 = ADD32(ctx->r2, 0X800);
            goto L_802050D8;
    }
    // 0x80205098: addiu       $v1, $v0, 0x800
    ctx->r3 = ADD32(ctx->r2, 0X800);
    // 0x8020509C: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x802050A0: bne         $at, $zero, L_802050CC
    if (ctx->r1 != 0) {
        // 0x802050A4: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_802050CC;
    }
    // 0x802050A4: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x802050A8: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x802050AC: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x802050B0: lw          $t7, -0x4740($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4740);
    // 0x802050B4: addu        $t9, $t8, $a3
    ctx->r25 = ADD32(ctx->r24, ctx->r7);
    // 0x802050B8: subu        $a0, $t9, $v0
    ctx->r4 = SUB32(ctx->r25, ctx->r2);
    // 0x802050BC: jal         0x802375F0
    // 0x802050C0: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
    func_802375F0(rdram, ctx);
        goto after_0;
    // 0x802050C0: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
    after_0:
    // 0x802050C4: b           L_802051F4
    // 0x802050C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_802051F4;
    // 0x802050C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802050CC:
    // 0x802050CC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x802050D0: bnel        $s0, $zero, L_8020508C
    if (ctx->r16 != 0) {
        // 0x802050D4: lw          $v0, 0x8($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X8);
            goto L_8020508C;
    }
    goto skip_0;
    // 0x802050D4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    skip_0:
L_802050D8:
    // 0x802050D8: lw          $s0, 0x8($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X8);
    // 0x802050DC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802050E0: addiu       $a0, $a0, 0x28F4
    ctx->r4 = ADD32(ctx->r4, 0X28F4);
    // 0x802050E4: bne         $s0, $zero, L_80205108
    if (ctx->r16 != 0) {
        // 0x802050E8: lui         $a1, 0x8025
        ctx->r5 = S32(0X8025 << 16);
            goto L_80205108;
    }
    // 0x802050E8: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802050EC: addiu       $a1, $a1, 0x28FC
    ctx->r5 = ADD32(ctx->r5, 0X28FC);
    // 0x802050F0: addiu       $a2, $zero, 0x21A
    ctx->r6 = ADD32(0, 0X21A);
    // 0x802050F4: jal         0x80231C9C
    // 0x802050F8: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    func_80231C9C(rdram, ctx);
        goto after_1;
    // 0x802050F8: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_1:
    // 0x802050FC: lui         $t0, 0x8026
    ctx->r8 = S32(0X8026 << 16);
    // 0x80205100: addiu       $t0, $t0, -0x4750
    ctx->r8 = ADD32(ctx->r8, -0X4750);
    // 0x80205104: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
L_80205108:
    // 0x80205108: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x8020510C: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x80205110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80205114: jal         0x80237120
    // 0x80205118: sw          $t1, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r9;
    func_80237120(rdram, ctx);
        goto after_2;
    // 0x80205118: sw          $t1, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r9;
    after_2:
    // 0x8020511C: lui         $t0, 0x8026
    ctx->r8 = S32(0X8026 << 16);
    // 0x80205120: addiu       $t0, $t0, -0x4750
    ctx->r8 = ADD32(ctx->r8, -0X4750);
    // 0x80205124: beq         $s1, $zero, L_80205144
    if (ctx->r17 == 0) {
        // 0x80205128: lw          $a3, 0x40($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X40);
            goto L_80205144;
    }
    // 0x80205128: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x8020512C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80205130: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80205134: jal         0x80237150
    // 0x80205138: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    func_80237150(rdram, ctx);
        goto after_3;
    // 0x80205138: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_3:
    // 0x8020513C: b           L_80205170
    // 0x80205140: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
        goto L_80205170;
    // 0x80205140: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
L_80205144:
    // 0x80205144: lw          $v0, 0x4($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X4);
    // 0x80205148: beql        $v0, $zero, L_80205168
    if (ctx->r2 == 0) {
        // 0x8020514C: sw          $s0, 0x4($t0)
        MEM_W(0X4, ctx->r8) = ctx->r16;
            goto L_80205168;
    }
    goto skip_1;
    // 0x8020514C: sw          $s0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r16;
    skip_1:
    // 0x80205150: sw          $s0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r16;
    // 0x80205154: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80205158: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x8020515C: b           L_80205170
    // 0x80205160: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
        goto L_80205170;
    // 0x80205160: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x80205164: sw          $s0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r16;
L_80205168:
    // 0x80205168: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x8020516C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_80205170:
    // 0x80205170: andi        $v0, $a3, 0x1
    ctx->r2 = ctx->r7 & 0X1;
    // 0x80205174: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x80205178: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8020517C: subu        $a3, $a3, $v0
    ctx->r7 = SUB32(ctx->r7, ctx->r2);
    // 0x80205180: sw          $a3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r7;
    // 0x80205184: lui         $t2, 0x8026
    ctx->r10 = S32(0X8026 << 16);
    // 0x80205188: lw          $t2, -0x4740($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4740);
    // 0x8020518C: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x80205190: addiu       $t0, $t0, -0x1A60
    ctx->r8 = ADD32(ctx->r8, -0X1A60);
    // 0x80205194: sw          $t2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r10;
    // 0x80205198: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x8020519C: lui         $t4, 0x8026
    ctx->r12 = S32(0X8026 << 16);
    // 0x802051A0: lw          $t4, -0x4730($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4730);
    // 0x802051A4: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x802051A8: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x802051AC: subu        $t3, $t3, $v1
    ctx->r11 = SUB32(ctx->r11, ctx->r3);
    // 0x802051B0: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x802051B4: addiu       $t6, $t6, -0x4728
    ctx->r14 = ADD32(ctx->r14, -0X4728);
    // 0x802051B8: addiu       $t5, $zero, 0x800
    ctx->r13 = ADD32(0, 0X800);
    // 0x802051BC: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x802051C0: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x802051C4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x802051C8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802051CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802051D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802051D4: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x802051D8: jal         0x80237E10
    // 0x802051DC: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    func_80237E10(rdram, ctx);
        goto after_4;
    // 0x802051DC: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    after_4:
    // 0x802051E0: jal         0x802375F0
    // 0x802051E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_802375F0(rdram, ctx);
        goto after_5;
    // 0x802051E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x802051E8: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x802051EC: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x802051F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802051F4:
    // 0x802051F4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x802051F8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x802051FC: jr          $ra
    // 0x80205200: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80205200: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8023FB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FB10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023FB14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023FB18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8023FB1C: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8023FB20: beql        $t6, $zero, L_8023FB7C
    if (ctx->r14 == 0) {
        // 0x8023FB24: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8023FB7C;
    }
    goto skip_0;
    // 0x8023FB24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023FB28: jal         0x80237840
    // 0x8023FB2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80237840(rdram, ctx);
        goto after_0;
    // 0x8023FB2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8023FB30: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8023FB34: beq         $v0, $zero, L_8023FB78
    if (ctx->r2 == 0) {
        // 0x8023FB38: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8023FB78;
    }
    // 0x8023FB38: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023FB3C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8023FB40: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x8023FB44: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x8023FB48: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8023FB4C: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x8023FB50: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x8023FB54: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8023FB58: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8023FB5C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8023FB60: lw          $t3, 0x8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X8);
    // 0x8023FB64: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023FB68: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x8023FB6C: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8023FB70: jalr        $t9
    // 0x8023FB74: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8023FB74: nop

    after_1:
L_8023FB78:
    // 0x8023FB78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023FB7C:
    // 0x8023FB7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023FB80: jr          $ra
    // 0x8023FB84: nop

    return;
    // 0x8023FB84: nop

;}
RECOMP_FUNC void func_802070A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802070A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802070AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802070B0: jal         0x80238B80
    // 0x802070B4: nop

    func_80238B80(rdram, ctx);
        goto after_0;
    // 0x802070B4: nop

    after_0:
    // 0x802070B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802070BC: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802070C0: sw          $v0, -0x3D40($at)
    MEM_W(-0X3D40, ctx->r1) = ctx->r2;
    // 0x802070C4: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802070C8: sw          $zero, -0x3D3C($at)
    MEM_W(-0X3D3C, ctx->r1) = 0;
    // 0x802070CC: jr          $ra
    // 0x802070D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x802070D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237670: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237674: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80237678: lbu         $t7, 0x920($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X920);
    // 0x8023767C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80237680: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80237684: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237688: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8023768C: beq         $t7, $zero, L_8023769C
    if (ctx->r15 == 0) {
        // 0x80237690: sw          $t6, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r14;
            goto L_8023769C;
    }
    // 0x80237690: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80237694: addiu       $t8, $t6, -0x2000
    ctx->r24 = ADD32(ctx->r14, -0X2000);
    // 0x80237698: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_8023769C:
    // 0x8023769C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x802376A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x802376A4: addiu       $at, $zero, 0x2000
    ctx->r1 = ADD32(0, 0X2000);
    // 0x802376A8: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x802376AC: andi        $t2, $t1, 0x3FFF
    ctx->r10 = ctx->r9 & 0X3FFF;
    // 0x802376B0: bne         $t2, $at, L_802376C8
    if (ctx->r10 != ctx->r1) {
        // 0x802376B4: nop
    
            goto L_802376C8;
    }
    // 0x802376B4: nop

    // 0x802376B8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802376BC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802376C0: b           L_802376D0
    // 0x802376C4: sb          $t3, 0x920($at)
    MEM_B(0X920, ctx->r1) = ctx->r11;
        goto L_802376D0;
    // 0x802376C4: sb          $t3, 0x920($at)
    MEM_B(0X920, ctx->r1) = ctx->r11;
L_802376C8:
    // 0x802376C8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802376CC: sb          $zero, 0x920($at)
    MEM_B(0X920, ctx->r1) = 0;
L_802376D0:
    // 0x802376D0: jal         0x80242300
    // 0x802376D4: nop

    func_80242300(rdram, ctx);
        goto after_0;
    // 0x802376D4: nop

    after_0:
    // 0x802376D8: beq         $v0, $zero, L_802376E8
    if (ctx->r2 == 0) {
        // 0x802376DC: nop
    
            goto L_802376E8;
    }
    // 0x802376DC: nop

    // 0x802376E0: b           L_80237708
    // 0x802376E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80237708;
    // 0x802376E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_802376E8:
    // 0x802376E8: jal         0x802375F0
    // 0x802376EC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_802375F0(rdram, ctx);
        goto after_1;
    // 0x802376EC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x802376F0: lui         $t4, 0xA450
    ctx->r12 = S32(0XA450 << 16);
    // 0x802376F4: sw          $v0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r2;
    // 0x802376F8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x802376FC: lui         $t7, 0xA450
    ctx->r15 = S32(0XA450 << 16);
    // 0x80237700: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80237704: sw          $t5, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r13;
L_80237708:
    // 0x80237708: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023770C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80237710: jr          $ra
    // 0x80237714: nop

    return;
    // 0x80237714: nop

;}
RECOMP_FUNC void func_802333B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802333B0: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x802333B4: lbu         $t6, 0x3954($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3954);
    // 0x802333B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802333BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802333C0: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x802333C4: beq         $t6, $zero, L_80233734
    if (ctx->r14 == 0) {
        // 0x802333C8: sdc1        $f20, 0x10($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
            goto L_80233734;
    }
    // 0x802333C8: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x802333CC: jal         0x80222E50
    // 0x802333D0: nop

    func_80222E50(rdram, ctx);
        goto after_0;
    // 0x802333D0: nop

    after_0:
    // 0x802333D4: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x802333D8: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x802333DC: lw          $t7, 0x3948($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3948);
    // 0x802333E0: lhu         $v1, 0xBF4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XBF4);
    // 0x802333E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802333E8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802333EC: addu        $a0, $v1, $t7
    ctx->r4 = ADD32(ctx->r3, ctx->r15);
    // 0x802333F0: blez        $a0, L_80233734
    if (SIGNED(ctx->r4) <= 0) {
        // 0x802333F4: lui         $t3, 0x8028
        ctx->r11 = S32(0X8028 << 16);
            goto L_80233734;
    }
    // 0x802333F4: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x802333F8: lwc1        $f22, 0x5350($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X5350);
    // 0x802333FC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80233400: lwc1        $f20, 0x5354($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5354);
    // 0x80233404: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80233408: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x8023340C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80233410: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80233414: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80233418: addiu       $t2, $t2, 0x3940
    ctx->r10 = ADD32(ctx->r10, 0X3940);
    // 0x8023341C: addiu       $t3, $t3, 0x394C
    ctx->r11 = ADD32(ctx->r11, 0X394C);
    // 0x80233420: addiu       $t1, $zero, 0x1C
    ctx->r9 = ADD32(0, 0X1C);
    // 0x80233424: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80233428: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x8023342C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80233430: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
L_80233434:
    // 0x80233434: beq         $at, $zero, L_80233454
    if (ctx->r1 == 0) {
        // 0x80233438: sll         $t5, $a1, 2
        ctx->r13 = S32(ctx->r5 << 2);
            goto L_80233454;
    }
    // 0x80233438: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x8023343C: multu       $a1, $t1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233440: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x80233444: mflo        $t8
    ctx->r24 = lo;
    // 0x80233448: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8023344C: b           L_80233470
    // 0x80233450: lbu         $t4, 0x1A($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1A);
        goto L_80233470;
    // 0x80233450: lbu         $t4, 0x1A($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1A);
L_80233454:
    // 0x80233454: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80233458: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x8023345C: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x80233460: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80233464: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80233468: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x8023346C: lbu         $t4, 0x1A($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1A);
L_80233470:
    // 0x80233470: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80233474: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x80233478: beql        $t4, $zero, L_8023372C
    if (ctx->r12 == 0) {
        // 0x8023347C: slt         $at, $a1, $a0
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_8023372C;
    }
    goto skip_0;
    // 0x8023347C: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    skip_0:
    // 0x80233480: lbu         $v1, 0x18($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X18);
    // 0x80233484: beq         $a2, $v1, L_802334A4
    if (ctx->r6 == ctx->r3) {
        // 0x80233488: nop
    
            goto L_802334A4;
    }
    // 0x80233488: nop

    // 0x8023348C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80233490: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80233494: lbu         $v1, 0x18($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X18);
    // 0x80233498: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8023349C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802334A0: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
L_802334A4:
    // 0x802334A4: bne         $v1, $zero, L_80233510
    if (ctx->r3 != 0) {
        // 0x802334A8: nop
    
            goto L_80233510;
    }
    // 0x802334A8: nop

    // 0x802334AC: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802334B0: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x802334B4: nop

    // 0x802334B8: bc1fl       L_802334E4
    if (!c1cs) {
        // 0x802334BC: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_802334E4;
    }
    goto skip_1;
    // 0x802334BC: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_1:
    // 0x802334C0: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802334C4: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x802334C8: nop

    // 0x802334CC: bc1fl       L_802334E4
    if (!c1cs) {
        // 0x802334D0: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_802334E4;
    }
    goto skip_2;
    // 0x802334D0: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_2:
    // 0x802334D4: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x802334D8: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802334DC: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x802334E0: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
L_802334E4:
    // 0x802334E4: nop

    // 0x802334E8: bc1fl       L_802335D0
    if (!c1cs) {
        // 0x802334EC: lbu         $v1, 0x19($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X19);
            goto L_802335D0;
    }
    goto skip_3;
    // 0x802334EC: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
    skip_3:
    // 0x802334F0: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802334F4: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    // 0x802334F8: nop

    // 0x802334FC: bc1fl       L_802335D0
    if (!c1cs) {
        // 0x80233500: lbu         $v1, 0x19($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X19);
            goto L_802335D0;
    }
    goto skip_4;
    // 0x80233500: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
    skip_4:
    // 0x80233504: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x80233508: b           L_802335CC
    // 0x8023350C: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
        goto L_802335CC;
    // 0x8023350C: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
L_80233510:
    // 0x80233510: bne         $a3, $v1, L_80233564
    if (ctx->r7 != ctx->r3) {
        // 0x80233514: nop
    
            goto L_80233564;
    }
    // 0x80233514: nop

    // 0x80233518: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8023351C: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x80233520: nop

    // 0x80233524: bc1fl       L_80233544
    if (!c1cs) {
        // 0x80233528: c.le.s      $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
            goto L_80233544;
    }
    goto skip_5;
    // 0x80233528: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    skip_5:
    // 0x8023352C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80233530: swc1        $f20, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f20.u32l;
    // 0x80233534: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80233538: b           L_802335CC
    // 0x8023353C: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
        goto L_802335CC;
    // 0x8023353C: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x80233540: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
L_80233544:
    // 0x80233544: nop

    // 0x80233548: bc1fl       L_802335D0
    if (!c1cs) {
        // 0x8023354C: lbu         $v1, 0x19($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X19);
            goto L_802335D0;
    }
    goto skip_6;
    // 0x8023354C: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
    skip_6:
    // 0x80233550: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80233554: swc1        $f22, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f22.u32l;
    // 0x80233558: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x8023355C: b           L_802335CC
    // 0x80233560: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
        goto L_802335CC;
    // 0x80233560: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
L_80233564:
    // 0x80233564: bnel        $t0, $v1, L_802335D0
    if (ctx->r8 != ctx->r3) {
        // 0x80233568: lbu         $v1, 0x19($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X19);
            goto L_802335D0;
    }
    goto skip_7;
    // 0x80233568: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
    skip_7:
    // 0x8023356C: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80233570: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x80233574: nop

    // 0x80233578: bc1fl       L_802335A4
    if (!c1cs) {
        // 0x8023357C: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_802335A4;
    }
    goto skip_8;
    // 0x8023357C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_8:
    // 0x80233580: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80233584: c.le.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl <= ctx->f8.fl;
    // 0x80233588: nop

    // 0x8023358C: bc1fl       L_802335A4
    if (!c1cs) {
        // 0x80233590: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_802335A4;
    }
    goto skip_9;
    // 0x80233590: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_9:
    // 0x80233594: swc1        $f14, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f14.u32l;
    // 0x80233598: sb          $zero, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = 0;
    // 0x8023359C: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802335A0: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
L_802335A4:
    // 0x802335A4: nop

    // 0x802335A8: bc1fl       L_802335D0
    if (!c1cs) {
        // 0x802335AC: lbu         $v1, 0x19($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X19);
            goto L_802335D0;
    }
    goto skip_10;
    // 0x802335AC: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
    skip_10:
    // 0x802335B0: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802335B4: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x802335B8: nop

    // 0x802335BC: bc1fl       L_802335D0
    if (!c1cs) {
        // 0x802335C0: lbu         $v1, 0x19($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X19);
            goto L_802335D0;
    }
    goto skip_11;
    // 0x802335C0: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
    skip_11:
    // 0x802335C4: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x802335C8: sb          $zero, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = 0;
L_802335CC:
    // 0x802335CC: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
L_802335D0:
    // 0x802335D0: beq         $a2, $v1, L_802335F0
    if (ctx->r6 == ctx->r3) {
        // 0x802335D4: nop
    
            goto L_802335F0;
    }
    // 0x802335D4: nop

    // 0x802335D8: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802335DC: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x802335E0: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
    // 0x802335E4: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802335E8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802335EC: swc1        $f10, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f10.u32l;
L_802335F0:
    // 0x802335F0: bne         $v1, $zero, L_8023365C
    if (ctx->r3 != 0) {
        // 0x802335F4: nop
    
            goto L_8023365C;
    }
    // 0x802335F4: nop

    // 0x802335F8: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802335FC: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x80233600: nop

    // 0x80233604: bc1fl       L_80233630
    if (!c1cs) {
        // 0x80233608: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_80233630;
    }
    goto skip_12;
    // 0x80233608: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_12:
    // 0x8023360C: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80233610: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x80233614: nop

    // 0x80233618: bc1fl       L_80233630
    if (!c1cs) {
        // 0x8023361C: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_80233630;
    }
    goto skip_13;
    // 0x8023361C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_13:
    // 0x80233620: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80233624: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80233628: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    // 0x8023362C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
L_80233630:
    // 0x80233630: nop

    // 0x80233634: bc1f        L_80233718
    if (!c1cs) {
        // 0x80233638: nop
    
            goto L_80233718;
    }
    // 0x80233638: nop

    // 0x8023363C: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80233640: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    // 0x80233644: nop

    // 0x80233648: bc1f        L_80233718
    if (!c1cs) {
        // 0x8023364C: nop
    
            goto L_80233718;
    }
    // 0x8023364C: nop

    // 0x80233650: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x80233654: b           L_80233718
    // 0x80233658: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
        goto L_80233718;
    // 0x80233658: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
L_8023365C:
    // 0x8023365C: bne         $a3, $v1, L_802336B0
    if (ctx->r7 != ctx->r3) {
        // 0x80233660: nop
    
            goto L_802336B0;
    }
    // 0x80233660: nop

    // 0x80233664: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80233668: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x8023366C: nop

    // 0x80233670: bc1fl       L_80233690
    if (!c1cs) {
        // 0x80233674: c.le.s      $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
            goto L_80233690;
    }
    goto skip_14;
    // 0x80233674: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    skip_14:
    // 0x80233678: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8023367C: swc1        $f20, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f20.u32l;
    // 0x80233680: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80233684: b           L_80233718
    // 0x80233688: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
        goto L_80233718;
    // 0x80233688: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x8023368C: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
L_80233690:
    // 0x80233690: nop

    // 0x80233694: bc1f        L_80233718
    if (!c1cs) {
        // 0x80233698: nop
    
            goto L_80233718;
    }
    // 0x80233698: nop

    // 0x8023369C: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802336A0: swc1        $f22, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f22.u32l;
    // 0x802336A4: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x802336A8: b           L_80233718
    // 0x802336AC: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
        goto L_80233718;
    // 0x802336AC: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
L_802336B0:
    // 0x802336B0: bne         $t0, $v1, L_80233718
    if (ctx->r8 != ctx->r3) {
        // 0x802336B4: nop
    
            goto L_80233718;
    }
    // 0x802336B4: nop

    // 0x802336B8: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802336BC: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x802336C0: nop

    // 0x802336C4: bc1fl       L_802336F0
    if (!c1cs) {
        // 0x802336C8: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_802336F0;
    }
    goto skip_15;
    // 0x802336C8: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_15:
    // 0x802336CC: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x802336D0: c.le.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl <= ctx->f8.fl;
    // 0x802336D4: nop

    // 0x802336D8: bc1fl       L_802336F0
    if (!c1cs) {
        // 0x802336DC: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_802336F0;
    }
    goto skip_16;
    // 0x802336DC: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_16:
    // 0x802336E0: swc1        $f14, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f14.u32l;
    // 0x802336E4: sb          $zero, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = 0;
    // 0x802336E8: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802336EC: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
L_802336F0:
    // 0x802336F0: nop

    // 0x802336F4: bc1f        L_80233718
    if (!c1cs) {
        // 0x802336F8: nop
    
            goto L_80233718;
    }
    // 0x802336F8: nop

    // 0x802336FC: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80233700: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x80233704: nop

    // 0x80233708: bc1f        L_80233718
    if (!c1cs) {
        // 0x8023370C: nop
    
            goto L_80233718;
    }
    // 0x8023370C: nop

    // 0x80233710: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
    // 0x80233714: sb          $zero, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = 0;
L_80233718:
    // 0x80233718: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8023371C: lhu         $v1, 0xBF4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XBF4);
    // 0x80233720: lw          $t5, 0x3948($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3948);
    // 0x80233724: addu        $a0, $v1, $t5
    ctx->r4 = ADD32(ctx->r3, ctx->r13);
    // 0x80233728: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
L_8023372C:
    // 0x8023372C: bnel        $at, $zero, L_80233434
    if (ctx->r1 != 0) {
        // 0x80233730: slt         $at, $a1, $v1
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80233434;
    }
    goto skip_17;
    // 0x80233730: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    skip_17:
L_80233734:
    // 0x80233734: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80233738: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8023373C: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x80233740: jr          $ra
    // 0x80233744: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80233744: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802499E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802499E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802499EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802499F0: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x802499F4: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x802499F8: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x802499FC: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x80249A00: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80249A04: lui         $t2, 0xB00
    ctx->r10 = S32(0XB00 << 16);
    // 0x80249A08: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x80249A0C: or          $t1, $t7, $t9
    ctx->r9 = ctx->r15 | ctx->r25;
    // 0x80249A10: ori         $t2, $t2, 0x20
    ctx->r10 = ctx->r10 | 0X20;
    // 0x80249A14: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80249A18: sw          $t1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r9;
    // 0x80249A1C: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x80249A20: sw          $t2, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r10;
    // 0x80249A24: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80249A28: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80249A2C: jal         0x802375F0
    // 0x80249A30: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_802375F0(rdram, ctx);
        goto after_0;
    // 0x80249A30: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x80249A34: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80249A38: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80249A3C: lui         $at, 0xE00
    ctx->r1 = S32(0XE00 << 16);
    // 0x80249A40: addiu       $v1, $a3, 0x10
    ctx->r3 = ADD32(ctx->r7, 0X10);
    // 0x80249A44: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x80249A48: sw          $v0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r2;
    // 0x80249A4C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80249A50: lw          $t4, 0x2C($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X2C);
    // 0x80249A54: lh          $t7, 0x2($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X2);
    // 0x80249A58: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x80249A5C: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x80249A60: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x80249A64: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x80249A68: or          $t1, $t8, $t9
    ctx->r9 = ctx->r24 | ctx->r25;
    // 0x80249A6C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80249A70: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    // 0x80249A74: jal         0x802375F0
    // 0x80249A78: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_802375F0(rdram, ctx);
        goto after_1;
    // 0x80249A78: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80249A7C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80249A80: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80249A84: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80249A88: sw          $zero, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = 0;
    // 0x80249A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80249A90: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80249A94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80249A98: jr          $ra
    // 0x80249A9C: nop

    return;
    // 0x80249A9C: nop

;}
RECOMP_FUNC void func_80246C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246C00: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80246C04: lw          $t6, 0x1A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1A60);
    // 0x80246C08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80246C0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80246C10: bne         $t6, $zero, L_80246C20
    if (ctx->r14 != 0) {
        // 0x80246C14: nop
    
            goto L_80246C20;
    }
    // 0x80246C14: nop

    // 0x80246C18: jal         0x80246BB0
    // 0x80246C1C: nop

    func_80246BB0(rdram, ctx);
        goto after_0;
    // 0x80246C1C: nop

    after_0:
L_80246C20:
    // 0x80246C20: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80246C24: addiu       $a0, $a0, 0x5F28
    ctx->r4 = ADD32(ctx->r4, 0X5F28);
    // 0x80246C28: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80246C2C: jal         0x802374B0
    // 0x80246C30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_1;
    // 0x80246C30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80246C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80246C38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80246C3C: jr          $ra
    // 0x80246C40: nop

    return;
    // 0x80246C40: nop

;}
RECOMP_FUNC void func_80228F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228F38: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80228F3C: addiu       $v1, $sp, 0x68
    ctx->r3 = ADD32(ctx->r29, 0X68);
    // 0x80228F40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228F44: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80228F48: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x80228F4C: bne         $a0, $v1, L_80228F58
    if (ctx->r4 != ctx->r3) {
        // 0x80228F50: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80228F58;
    }
    // 0x80228F50: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80228F54: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
L_80228F58:
    // 0x80228F58: lh          $t6, 0x88($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X88);
    // 0x80228F5C: lh          $t8, 0x68($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X68);
    // 0x80228F60: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x80228F64: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80228F68: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80228F6C: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x80228F70: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80228F74: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80228F78: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80228F7C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80228F80: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x80228F84: lh          $t3, 0x6A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X6A);
    // 0x80228F88: lh          $t1, 0x8A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X8A);
    // 0x80228F8C: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x80228F90: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x80228F94: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x80228F98: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80228F9C: nop

    // 0x80228FA0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80228FA4: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80228FA8: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x80228FAC: lh          $t7, 0x6C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X6C);
    // 0x80228FB0: lh          $t6, 0x8C($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X8C);
    // 0x80228FB4: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x80228FB8: andi        $t8, $t6, 0xFFFF
    ctx->r24 = ctx->r14 & 0XFFFF;
    // 0x80228FBC: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x80228FC0: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80228FC4: nop

    // 0x80228FC8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80228FCC: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80228FD0: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x80228FD4: lh          $t2, 0x6E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X6E);
    // 0x80228FD8: lh          $t1, 0x8E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X8E);
    // 0x80228FDC: sll         $t4, $t2, 16
    ctx->r12 = S32(ctx->r10 << 16);
    // 0x80228FE0: andi        $t3, $t1, 0xFFFF
    ctx->r11 = ctx->r9 & 0XFFFF;
    // 0x80228FE4: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x80228FE8: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80228FEC: nop

    // 0x80228FF0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80228FF4: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80228FF8: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x80228FFC: lh          $t8, 0x70($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X70);
    // 0x80229000: lh          $t6, 0x90($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X90);
    // 0x80229004: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80229008: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x8022900C: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x80229010: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80229014: nop

    // 0x80229018: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8022901C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80229020: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x80229024: lh          $t3, 0x72($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X72);
    // 0x80229028: lh          $t1, 0x92($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X92);
    // 0x8022902C: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x80229030: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x80229034: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x80229038: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8022903C: nop

    // 0x80229040: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80229044: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80229048: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
    // 0x8022904C: lh          $t7, 0x74($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X74);
    // 0x80229050: lh          $t6, 0x94($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X94);
    // 0x80229054: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x80229058: andi        $t8, $t6, 0xFFFF
    ctx->r24 = ctx->r14 & 0XFFFF;
    // 0x8022905C: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x80229060: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80229064: nop

    // 0x80229068: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8022906C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80229070: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
    // 0x80229074: lh          $t2, 0x76($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X76);
    // 0x80229078: lh          $t1, 0x96($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X96);
    // 0x8022907C: sll         $t4, $t2, 16
    ctx->r12 = S32(ctx->r10 << 16);
    // 0x80229080: andi        $t3, $t1, 0xFFFF
    ctx->r11 = ctx->r9 & 0XFFFF;
    // 0x80229084: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x80229088: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8022908C: nop

    // 0x80229090: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80229094: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80229098: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x8022909C: lh          $t8, 0x78($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X78);
    // 0x802290A0: lh          $t6, 0x98($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X98);
    // 0x802290A4: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x802290A8: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x802290AC: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x802290B0: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x802290B4: nop

    // 0x802290B8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802290BC: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802290C0: swc1        $f8, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f8.u32l;
    // 0x802290C4: lh          $t3, 0x7A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X7A);
    // 0x802290C8: lh          $t1, 0x9A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X9A);
    // 0x802290CC: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x802290D0: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x802290D4: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x802290D8: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x802290DC: nop

    // 0x802290E0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802290E4: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802290E8: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    // 0x802290EC: lh          $t7, 0x7C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X7C);
    // 0x802290F0: lh          $t6, 0x9C($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X9C);
    // 0x802290F4: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x802290F8: andi        $t8, $t6, 0xFFFF
    ctx->r24 = ctx->r14 & 0XFFFF;
    // 0x802290FC: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x80229100: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80229104: nop

    // 0x80229108: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8022910C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80229110: swc1        $f8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
    // 0x80229114: lh          $t2, 0x7E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X7E);
    // 0x80229118: lh          $t1, 0x9E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X9E);
    // 0x8022911C: sll         $t4, $t2, 16
    ctx->r12 = S32(ctx->r10 << 16);
    // 0x80229120: andi        $t3, $t1, 0xFFFF
    ctx->r11 = ctx->r9 & 0XFFFF;
    // 0x80229124: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x80229128: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8022912C: nop

    // 0x80229130: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80229134: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80229138: swc1        $f18, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f18.u32l;
    // 0x8022913C: lh          $t8, 0x80($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X80);
    // 0x80229140: lh          $t6, 0xA0($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XA0);
    // 0x80229144: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80229148: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x8022914C: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x80229150: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80229154: nop

    // 0x80229158: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8022915C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80229160: swc1        $f8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f8.u32l;
    // 0x80229164: lh          $t3, 0x82($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X82);
    // 0x80229168: lh          $t1, 0xA2($sp)
    ctx->r9 = MEM_H(ctx->r29, 0XA2);
    // 0x8022916C: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x80229170: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x80229174: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x80229178: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8022917C: nop

    // 0x80229180: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80229184: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80229188: swc1        $f18, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f18.u32l;
    // 0x8022918C: lh          $t7, 0x84($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X84);
    // 0x80229190: lh          $t6, 0xA4($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XA4);
    // 0x80229194: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x80229198: andi        $t8, $t6, 0xFFFF
    ctx->r24 = ctx->r14 & 0XFFFF;
    // 0x8022919C: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x802291A0: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x802291A4: nop

    // 0x802291A8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802291AC: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802291B0: swc1        $f8, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f8.u32l;
    // 0x802291B4: lh          $t2, 0x86($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X86);
    // 0x802291B8: lh          $t1, 0xA6($sp)
    ctx->r9 = MEM_H(ctx->r29, 0XA6);
    // 0x802291BC: sll         $t4, $t2, 16
    ctx->r12 = S32(ctx->r10 << 16);
    // 0x802291C0: andi        $t3, $t1, 0xFFFF
    ctx->r11 = ctx->r9 & 0XFFFF;
    // 0x802291C4: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x802291C8: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x802291CC: nop

    // 0x802291D0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802291D4: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802291D8: bne         $v0, $v1, L_802291E8
    if (ctx->r2 != ctx->r3) {
        // 0x802291DC: swc1        $f18, 0x3C($v0)
        MEM_W(0X3C, ctx->r2) = ctx->f18.u32l;
            goto L_802291E8;
    }
    // 0x802291DC: swc1        $f18, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f18.u32l;
    // 0x802291E0: jal         0x80228DE0
    // 0x802291E4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802291E4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
L_802291E8:
    // 0x802291E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802291EC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x802291F0: jr          $ra
    // 0x802291F4: nop

    return;
    // 0x802291F4: nop

;}
RECOMP_FUNC void func_8022C2A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C2A8: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x8022C2AC: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x8022C2B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8022C2B4: lh          $t7, 0x6130($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X6130);
    // 0x8022C2B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C2BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8022C2C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C2C4: bne         $t7, $at, L_8022C304
    if (ctx->r15 != ctx->r1) {
        // 0x8022C2C8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8022C304;
    }
    // 0x8022C2C8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8022C2CC: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x8022C2D0: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x8022C2D4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8022C2D8: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x8022C2DC: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x8022C2E0: addiu       $t9, $t9, 0x5F90
    ctx->r25 = ADD32(ctx->r25, 0X5F90);
    // 0x8022C2E4: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8022C2E8: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x8022C2EC: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8022C2F0: addiu       $a0, $a0, 0xC58
    ctx->r4 = ADD32(ctx->r4, 0XC58);
    // 0x8022C2F4: jal         0x8024AA84
    // 0x8022C2F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8024AA84(rdram, ctx);
        goto after_0;
    // 0x8022C2F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8022C2FC: jal         0x8024AD44
    // 0x8022C300: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8024AD44(rdram, ctx);
        goto after_1;
    // 0x8022C300: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_8022C304:
    // 0x8022C304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C308: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022C30C: jr          $ra
    // 0x8022C310: nop

    return;
    // 0x8022C310: nop

;}
RECOMP_FUNC void func_8022EFE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022EFE0: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x8022EFE4: lw          $t6, -0x4160($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4160);
    // 0x8022EFE8: addiu       $at, $zero, 0x2D8
    ctx->r1 = ADD32(0, 0X2D8);
    // 0x8022EFEC: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x8022EFF0: subu        $t7, $a0, $t6
    ctx->r15 = SUB32(ctx->r4, ctx->r14);
    // 0x8022EFF4: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x8022EFF8: mflo        $t8
    ctx->r24 = lo;
    // 0x8022EFFC: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x8022F000: sw          $fp, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r30;
    // 0x8022F004: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x8022F008: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x8022F00C: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x8022F010: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x8022F014: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x8022F018: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x8022F01C: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x8022F020: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x8022F024: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x8022F028: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x8022F02C: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x8022F030: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x8022F034: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x8022F038: sw          $a2, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r6;
    // 0x8022F03C: sw          $a3, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r7;
    // 0x8022F040: sw          $t8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r24;
    // 0x8022F044: lw          $v0, 0x40($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X40);
    // 0x8022F048: lui         $s6, 0x8028
    ctx->r22 = S32(0X8028 << 16);
    // 0x8022F04C: addiu       $s6, $s6, -0x74B0
    ctx->r22 = ADD32(ctx->r22, -0X74B0);
    // 0x8022F050: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x8022F054: lhu         $s0, 0x14($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X14);
    // 0x8022F058: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x8022F05C: sw          $t9, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r25;
    // 0x8022F060: lbu         $v1, 0x48($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X48);
    // 0x8022F064: lhu         $s7, 0x4A($a1)
    ctx->r23 = MEM_HU(ctx->r5, 0X4A);
    // 0x8022F068: lwc1        $f26, 0x2C($v0)
    ctx->f26.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x8022F06C: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
    // 0x8022F070: lwc1        $f6, 0x30($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X30);
    // 0x8022F074: lwc1        $f4, 0x108($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X108);
    // 0x8022F078: sll         $fp, $v1, 16
    ctx->r30 = S32(ctx->r3 << 16);
    // 0x8022F07C: sra         $t0, $fp, 16
    ctx->r8 = S32(SIGNED(ctx->r30) >> 16);
    // 0x8022F080: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8022F084: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x8022F088: or          $fp, $t0, $zero
    ctx->r30 = ctx->r8 | 0;
    // 0x8022F08C: addiu       $a2, $sp, 0xD4
    ctx->r6 = ADD32(ctx->r29, 0XD4);
    // 0x8022F090: swc1        $f8, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f8.u32l;
    // 0x8022F094: lwc1        $f16, 0x34($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X34);
    // 0x8022F098: lwc1        $f10, 0x10C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X10C);
    // 0x8022F09C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8022F0A0: swc1        $f18, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f18.u32l;
    // 0x8022F0A4: lwc1        $f4, 0x110($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X110);
    // 0x8022F0A8: lwc1        $f6, 0x38($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X38);
    // 0x8022F0AC: sll         $a0, $t0, 16
    ctx->r4 = S32(ctx->r8 << 16);
    // 0x8022F0B0: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8022F0B4: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8022F0B8: addiu       $a1, $sp, 0xD8
    ctx->r5 = ADD32(ctx->r29, 0XD8);
    // 0x8022F0BC: jal         0x80218C74
    // 0x8022F0C0: sub.s       $f28, $f4, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f28.fl = ctx->f4.fl - ctx->f6.fl;
    func_80218C74(rdram, ctx);
        goto after_0;
    // 0x8022F0C0: sub.s       $f28, $f4, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f28.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x8022F0C4: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x8022F0C8: lw          $t2, -0x18F0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X18F0);
    // 0x8022F0CC: sll         $t4, $s7, 12
    ctx->r12 = S32(ctx->r23 << 12);
    // 0x8022F0D0: or          $s7, $t4, $zero
    ctx->r23 = ctx->r12 | 0;
    // 0x8022F0D4: lw          $t3, 0x1C($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X1C);
    // 0x8022F0D8: sw          $s0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r16;
    // 0x8022F0DC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8022F0E0: blez        $s0, L_8022F334
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8022F0E4: sw          $t3, 0xF8($sp)
        MEM_W(0XF8, ctx->r29) = ctx->r11;
            goto L_8022F334;
    }
    // 0x8022F0E4: sw          $t3, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r11;
    // 0x8022F0E8: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
L_8022F0EC:
    // 0x8022F0EC: sll         $t6, $s3, 5
    ctx->r14 = S32(ctx->r19 << 5);
    // 0x8022F0F0: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8022F0F4: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x8022F0F8: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022F0FC: lhu         $t8, 0x112($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X112);
    // 0x8022F100: beql        $v0, $at, L_8022F328
    if (ctx->r2 == ctx->r1) {
        // 0x8022F104: lw          $t8, 0xA4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA4);
            goto L_8022F328;
    }
    goto skip_0;
    // 0x8022F104: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    skip_0:
    // 0x8022F108: lhu         $v1, 0x18($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X18);
    // 0x8022F10C: lw          $t0, 0xF8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XF8);
    // 0x8022F110: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x8022F114: and         $t9, $v1, $t8
    ctx->r25 = ctx->r3 & ctx->r24;
    // 0x8022F118: beq         $t9, $zero, L_8022F324
    if (ctx->r25 == 0) {
        // 0x8022F11C: addu        $t2, $t0, $t1
        ctx->r10 = ADD32(ctx->r8, ctx->r9);
            goto L_8022F324;
    }
    // 0x8022F11C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8022F120: lw          $s1, 0x0($t2)
    ctx->r17 = MEM_W(ctx->r10, 0X0);
    // 0x8022F124: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8022F128: lwc1        $f18, 0xD4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8022F12C: bne         $s1, $zero, L_8022F148
    if (ctx->r17 != 0) {
        // 0x8022F130: lhu         $t3, 0x116($sp)
        ctx->r11 = MEM_HU(ctx->r29, 0X116);
            goto L_8022F148;
    }
    // 0x8022F130: lhu         $t3, 0x116($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X116);
    // 0x8022F134: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022F138: jal         0x80231A24
    // 0x8022F13C: addiu       $a0, $a0, 0x4A74
    ctx->r4 = ADD32(ctx->r4, 0X4A74);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022F13C: addiu       $a0, $a0, 0x4A74
    ctx->r4 = ADD32(ctx->r4, 0X4A74);
    after_1:
    // 0x8022F140: b           L_8022F328
    // 0x8022F144: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
        goto L_8022F328;
    // 0x8022F144: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
L_8022F148:
    // 0x8022F148: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8022F14C: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8022F150: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8022F154: and         $t4, $v1, $t3
    ctx->r12 = ctx->r3 & ctx->r11;
    // 0x8022F158: sub.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8022F15C: sub.s       $f24, $f16, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f24.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8022F160: bne         $t4, $zero, L_8022F1B0
    if (ctx->r12 != 0) {
        // 0x8022F164: sub.s       $f20, $f4, $f28
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f28.fl;
            goto L_8022F1B0;
    }
    // 0x8022F164: sub.s       $f20, $f4, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f28.fl;
    // 0x8022F168: negu        $a0, $fp
    ctx->r4 = SUB32(0, ctx->r30);
    // 0x8022F16C: sll         $t5, $a0, 16
    ctx->r13 = S32(ctx->r4 << 16);
    // 0x8022F170: swc1        $f22, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f22.u32l;
    // 0x8022F174: swc1        $f24, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f24.u32l;
    // 0x8022F178: sra         $a0, $t5, 16
    ctx->r4 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8022F17C: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    // 0x8022F180: addiu       $a2, $sp, 0xDC
    ctx->r6 = ADD32(ctx->r29, 0XDC);
    // 0x8022F184: jal         0x80218C74
    // 0x8022F188: addiu       $s2, $s5, 0x218
    ctx->r18 = ADD32(ctx->r21, 0X218);
    func_80218C74(rdram, ctx);
        goto after_2;
    // 0x8022F188: addiu       $s2, $s5, 0x218
    ctx->r18 = ADD32(ctx->r21, 0X218);
    after_2:
    // 0x8022F18C: lwc1        $f6, 0x1C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x8022F190: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8022F194: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8022F198: lw          $a1, 0xE0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE0);
    // 0x8022F19C: lw          $a2, 0xDC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XDC);
    // 0x8022F1A0: jal         0x8020802C
    // 0x8022F1A4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8020802C(rdram, ctx);
        goto after_3;
    // 0x8022F1A4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x8022F1A8: beql        $v0, $zero, L_8022F328
    if (ctx->r2 == 0) {
        // 0x8022F1AC: lw          $t8, 0xA4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA4);
            goto L_8022F328;
    }
    goto skip_1;
    // 0x8022F1AC: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    skip_1:
L_8022F1B0:
    // 0x8022F1B0: mul.s       $f8, $f22, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x8022F1B4: nop

    // 0x8022F1B8: mul.s       $f10, $f24, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x8022F1BC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8022F1C0: mul.s       $f18, $f20, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8022F1C4: jal         0x8022AA40
    // 0x8022F1C8: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    func_8022AA40(rdram, ctx);
        goto after_4;
    // 0x8022F1C8: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_4:
    // 0x8022F1CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022F1D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8022F1D4: lwc1        $f2, 0x138($s5)
    ctx->f2.u32l = MEM_W(ctx->r21, 0X138);
    // 0x8022F1D8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8022F1DC: c.eq.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl == ctx->f2.fl;
    // 0x8022F1E0: nop

    // 0x8022F1E4: bc1f        L_8022F200
    if (!c1cs) {
        // 0x8022F1E8: nop
    
            goto L_8022F200;
    }
    // 0x8022F1E8: nop

    // 0x8022F1EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8022F1F0: jal         0x8022F378
    // 0x8022F1F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8022F378(rdram, ctx);
        goto after_5;
    // 0x8022F1F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x8022F1F8: b           L_8022F218
    // 0x8022F1FC: andi        $s2, $v0, 0xFF
    ctx->r18 = ctx->r2 & 0XFF;
        goto L_8022F218;
    // 0x8022F1FC: andi        $s2, $v0, 0xFF
    ctx->r18 = ctx->r2 & 0XFF;
L_8022F200:
    // 0x8022F200: mul.s       $f6, $f2, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8022F204: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8022F208: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8022F20C: jal         0x8022F378
    // 0x8022F210: nop

    func_8022F378(rdram, ctx);
        goto after_6;
    // 0x8022F210: nop

    after_6:
    // 0x8022F214: andi        $s2, $v0, 0xFF
    ctx->r18 = ctx->r2 & 0XFF;
L_8022F218:
    // 0x8022F218: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8022F21C: beql        $v0, $at, L_8022F328
    if (ctx->r2 == ctx->r1) {
        // 0x8022F220: lw          $t8, 0xA4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA4);
            goto L_8022F328;
    }
    goto skip_2;
    // 0x8022F220: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    skip_2:
    // 0x8022F224: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x8022F228: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8022F22C: or          $t8, $s7, $s3
    ctx->r24 = ctx->r23 | ctx->r19;
    // 0x8022F230: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x8022F234: bne         $at, $zero, L_8022F260
    if (ctx->r1 != 0) {
        // 0x8022F238: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_8022F260;
    }
    // 0x8022F238: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x8022F23C: lw          $t7, 0x8E0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X8E0);
    // 0x8022F240: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022F244: beql        $t7, $zero, L_8022F278
    if (ctx->r15 == 0) {
        // 0x8022F248: lbu         $t1, 0x11($s1)
        ctx->r9 = MEM_BU(ctx->r17, 0X11);
            goto L_8022F278;
    }
    goto skip_3;
    // 0x8022F248: lbu         $t1, 0x11($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X11);
    skip_3:
    // 0x8022F24C: jal         0x80231A24
    // 0x8022F250: addiu       $a0, $a0, 0x4A9C
    ctx->r4 = ADD32(ctx->r4, 0X4A9C);
    func_80231A24(rdram, ctx);
        goto after_7;
    // 0x8022F250: addiu       $a0, $a0, 0x4A9C
    ctx->r4 = ADD32(ctx->r4, 0X4A9C);
    after_7:
    // 0x8022F254: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022F258: b           L_8022F274
    // 0x8022F25C: sw          $zero, 0x8E0($at)
    MEM_W(0X8E0, ctx->r1) = 0;
        goto L_8022F274;
    // 0x8022F25C: sw          $zero, 0x8E0($at)
    MEM_W(0X8E0, ctx->r1) = 0;
L_8022F260:
    // 0x8022F260: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022F264: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8022F268: sw          $t8, -0x76B0($at)
    MEM_W(-0X76B0, ctx->r1) = ctx->r24;
    // 0x8022F26C: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x8022F270: sw          $t0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r8;
L_8022F274:
    // 0x8022F274: lbu         $t1, 0x11($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X11);
L_8022F278:
    // 0x8022F278: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8022F27C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8022F280: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8022F284: beq         $t2, $zero, L_8022F2D4
    if (ctx->r10 == 0) {
        // 0x8022F288: lw          $a3, 0xC8($sp)
        ctx->r7 = MEM_W(ctx->r29, 0XC8);
            goto L_8022F2D4;
    }
    // 0x8022F288: lw          $a3, 0xC8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC8);
    // 0x8022F28C: lwc1        $f8, 0x30($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X30);
    // 0x8022F290: lw          $t3, 0x118($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X118);
    // 0x8022F294: cvt.d.s     $f16, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f16.d = CVT_D_S(ctx->f22.fl);
    // 0x8022F298: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8022F29C: lwc1        $f10, 0x34($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X34);
    // 0x8022F2A0: cvt.d.s     $f18, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f18.d = CVT_D_S(ctx->f24.fl);
    // 0x8022F2A4: cvt.d.s     $f4, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); 
    ctx->f4.d = CVT_D_S(ctx->f26.fl);
    // 0x8022F2A8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8022F2AC: sdc1        $f4, 0x38($sp)
    CHECK_FR(ctx, 4);
    SD(ctx->f4.u64, 0X38, ctx->r29);
    // 0x8022F2B0: sdc1        $f18, 0x20($sp)
    CHECK_FR(ctx, 18);
    SD(ctx->f18.u64, 0X20, ctx->r29);
    // 0x8022F2B4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022F2B8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022F2BC: sdc1        $f16, 0x18($sp)
    CHECK_FR(ctx, 16);
    SD(ctx->f16.u64, 0X18, ctx->r29);
    // 0x8022F2C0: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x8022F2C4: jal         0x8020672C
    // 0x8022F2C8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_8020672C(rdram, ctx);
        goto after_8;
    // 0x8022F2C8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_8:
    // 0x8022F2CC: b           L_8022F328
    // 0x8022F2D0: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
        goto L_8022F328;
    // 0x8022F2D0: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
L_8022F2D4:
    // 0x8022F2D4: lw          $t4, 0x8($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X8);
    // 0x8022F2D8: sll         $t5, $s2, 3
    ctx->r13 = S32(ctx->r18 << 3);
    // 0x8022F2DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8022F2E0: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8022F2E4: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x8022F2E8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022F2EC: andi        $a2, $s2, 0xFF
    ctx->r6 = ctx->r18 & 0XFF;
    // 0x8022F2F0: beq         $t7, $zero, L_8022F31C
    if (ctx->r15 == 0) {
        // 0x8022F2F4: nop
    
            goto L_8022F31C;
    }
    // 0x8022F2F4: nop

    // 0x8022F2F8: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x8022F2FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8022F300: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022F304: andi        $a2, $s2, 0xFF
    ctx->r6 = ctx->r18 & 0XFF;
    // 0x8022F308: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    // 0x8022F30C: jal         0x8022F7F4
    // 0x8022F310: swc1        $f26, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f26.u32l;
    func_8022F7F4(rdram, ctx);
        goto after_9;
    // 0x8022F310: swc1        $f26, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f26.u32l;
    after_9:
    // 0x8022F314: b           L_8022F328
    // 0x8022F318: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
        goto L_8022F328;
    // 0x8022F318: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
L_8022F31C:
    // 0x8022F31C: jal         0x8022F490
    // 0x8022F320: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_8022F490(rdram, ctx);
        goto after_10;
    // 0x8022F320: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_10:
L_8022F324:
    // 0x8022F324: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
L_8022F328:
    // 0x8022F328: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8022F32C: bnel        $s3, $t8, L_8022F0EC
    if (ctx->r19 != ctx->r24) {
        // 0x8022F330: lw          $t7, 0xBC($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XBC);
            goto L_8022F0EC;
    }
    goto skip_4;
    // 0x8022F330: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    skip_4:
L_8022F334:
    // 0x8022F334: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    // 0x8022F338: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x8022F33C: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x8022F340: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x8022F344: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x8022F348: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x8022F34C: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x8022F350: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x8022F354: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x8022F358: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x8022F35C: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x8022F360: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x8022F364: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x8022F368: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x8022F36C: lw          $fp, 0x90($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X90);
    // 0x8022F370: jr          $ra
    // 0x8022F374: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x8022F374: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_80235950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80235950: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80235954: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235958: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    // 0x8023595C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80235960: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80235964: bnel        $t6, $at, L_802359B4
    if (ctx->r14 != ctx->r1) {
        // 0x80235968: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802359B4;
    }
    goto skip_0;
    // 0x80235968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023596C: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x80235970: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80235974: beql        $a0, $zero, L_802359B4
    if (ctx->r4 == 0) {
        // 0x80235978: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802359B4;
    }
    goto skip_1;
    // 0x80235978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8023597C: jal         0x802388BC
    // 0x80235980: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    func_802388BC(rdram, ctx);
        goto after_0;
    // 0x80235980: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_0:
    // 0x80235984: beq         $v0, $zero, L_802359B0
    if (ctx->r2 == 0) {
        // 0x80235988: lw          $a3, 0x30($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X30);
            goto L_802359B0;
    }
    // 0x80235988: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8023598C: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x80235990: lw          $t7, 0x24($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X24);
    // 0x80235994: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80235998: addiu       $a0, $a3, 0x48
    ctx->r4 = ADD32(ctx->r7, 0X48);
    // 0x8023599C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802359A0: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802359A4: mflo        $a2
    ctx->r6 = lo;
    // 0x802359A8: jal         0x8023F37C
    // 0x802359AC: nop

    func_8023F37C(rdram, ctx);
        goto after_1;
    // 0x802359AC: nop

    after_1:
L_802359B0:
    // 0x802359B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802359B4:
    // 0x802359B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802359B8: jr          $ra
    // 0x802359BC: nop

    return;
    // 0x802359BC: nop

;}
RECOMP_FUNC void func_8020164C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020164C: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80201650: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x80201654: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201658: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x8020165C: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201660: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201664: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80201668: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8020166C: bne         $at, $zero, L_802016A4
    if (ctx->r1 != 0) {
        // 0x80201670: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_802016A4;
    }
    // 0x80201670: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x80201674: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201678: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8020167C: addiu       $a1, $a1, 0x1D4C
    ctx->r5 = ADD32(ctx->r5, 0X1D4C);
    // 0x80201680: addiu       $a0, $a0, 0x1D34
    ctx->r4 = ADD32(ctx->r4, 0X1D34);
    // 0x80201684: addiu       $a2, $zero, 0x13F
    ctx->r6 = ADD32(0, 0X13F);
    // 0x80201688: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8020168C: jal         0x80231C9C
    // 0x80201690: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    func_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80201690: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    after_0:
    // 0x80201694: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80201698: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x8020169C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802016A0: lbu         $a3, 0x23($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X23);
L_802016A4:
    // 0x802016A4: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802016A8: beq         $at, $zero, L_802016DC
    if (ctx->r1 == 0) {
        // 0x802016AC: lui         $t6, 0x8025
        ctx->r14 = S32(0X8025 << 16);
            goto L_802016DC;
    }
    // 0x802016AC: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802016B0: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x802016B4: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x802016B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802016BC: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x802016C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802016C4: lw          $t6, 0x6DE4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6DE4);
    // 0x802016C8: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x802016CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802016D0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x802016D4: jal         0x80228DE0
    // 0x802016D8: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x802016D8: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_1:
L_802016DC:
    // 0x802016DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802016E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802016E4: jr          $ra
    // 0x802016E8: nop

    return;
    // 0x802016E8: nop

;}
RECOMP_FUNC void func_80207C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80207C20: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x80207C24: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80207C28: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80207C2C: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80207C30: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80207C34: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80207C38: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80207C3C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80207C40: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80207C44: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80207C48: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80207C4C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80207C50: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80207C54: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80207C58: sw          $a0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r4;
    // 0x80207C5C: sw          $a1, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r5;
    // 0x80207C60: addiu       $t7, $t7, -0x1930
    ctx->r15 = ADD32(ctx->r15, -0X1930);
    // 0x80207C64: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80207C68: addiu       $t6, $sp, 0x104
    ctx->r14 = ADD32(ctx->r29, 0X104);
    // 0x80207C6C: lw          $t1, 0x4($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X4);
    // 0x80207C70: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80207C74: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80207C78: sw          $t1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r9;
    // 0x80207C7C: lw          $t1, 0xC($t7)
    ctx->r9 = MEM_W(ctx->r15, 0XC);
    // 0x80207C80: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80207C84: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x80207C88: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x80207C8C: addiu       $t3, $t3, -0x191C
    ctx->r11 = ADD32(ctx->r11, -0X191C);
    // 0x80207C90: sw          $t1, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r9;
    // 0x80207C94: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x80207C98: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x80207C9C: addiu       $t2, $sp, 0xA8
    ctx->r10 = ADD32(ctx->r29, 0XA8);
    // 0x80207CA0: lw          $t9, 0x4($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X4);
    // 0x80207CA4: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x80207CA8: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x80207CAC: sw          $t9, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r25;
    // 0x80207CB0: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x80207CB4: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x80207CB8: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x80207CBC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80207CC0: lwc1        $f20, 0x2B08($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X2B08);
    // 0x80207CC4: lbu         $v1, 0x0($t8)
    ctx->r3 = MEM_BU(ctx->r24, 0X0);
    // 0x80207CC8: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x80207CCC: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x80207CD0: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x80207CD4: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x80207CD8: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
    // 0x80207CDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80207CE0: blez        $v1, L_80207DCC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80207CE4: or          $a3, $v1, $zero
        ctx->r7 = ctx->r3 | 0;
            goto L_80207DCC;
    }
    // 0x80207CE4: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x80207CE8: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x80207CEC: beq         $v0, $zero, L_80207D34
    if (ctx->r2 == 0) {
        // 0x80207CF0: lw          $t6, 0x118($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X118);
            goto L_80207D34;
    }
    // 0x80207CF0: lw          $t6, 0x118($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X118);
    // 0x80207CF4: sll         $t7, $zero, 2
    ctx->r15 = S32(0 << 2);
    // 0x80207CF8: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80207CFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80207D00:
    // 0x80207D00: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80207D04: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80207D08: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x80207D0C: nop

    // 0x80207D10: bc1fl       L_80207D24
    if (!c1cs) {
        // 0x80207D14: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_80207D24;
    }
    goto skip_0;
    // 0x80207D14: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x80207D18: lwc1        $f20, 0x0($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80207D1C: or          $fp, $a2, $zero
    ctx->r30 = ctx->r6 | 0;
    // 0x80207D20: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_80207D24:
    // 0x80207D24: bne         $a0, $a2, L_80207D00
    if (ctx->r4 != ctx->r6) {
        // 0x80207D28: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80207D00;
    }
    // 0x80207D28: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80207D2C: beql        $a2, $a3, L_80207DD0
    if (ctx->r6 == ctx->r7) {
        // 0x80207D30: lw          $t4, 0x118($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X118);
            goto L_80207DD0;
    }
    goto skip_1;
    // 0x80207D30: lw          $t4, 0x118($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X118);
    skip_1:
L_80207D34:
    // 0x80207D34: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x80207D38: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x80207D3C: addu        $v1, $t1, $t5
    ctx->r3 = ADD32(ctx->r9, ctx->r13);
L_80207D40:
    // 0x80207D40: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80207D44: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80207D48: c.lt.s      $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f6.fl < ctx->f20.fl;
    // 0x80207D4C: nop

    // 0x80207D50: bc1fl       L_80207D64
    if (!c1cs) {
        // 0x80207D54: lw          $s4, 0x4($v1)
        ctx->r20 = MEM_W(ctx->r3, 0X4);
            goto L_80207D64;
    }
    goto skip_2;
    // 0x80207D54: lw          $s4, 0x4($v1)
    ctx->r20 = MEM_W(ctx->r3, 0X4);
    skip_2:
    // 0x80207D58: lwc1        $f20, 0x0($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80207D5C: or          $fp, $a2, $zero
    ctx->r30 = ctx->r6 | 0;
    // 0x80207D60: lw          $s4, 0x4($v1)
    ctx->r20 = MEM_W(ctx->r3, 0X4);
L_80207D64:
    // 0x80207D64: lwc1        $f0, 0x0($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X0);
    // 0x80207D68: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80207D6C: nop

    // 0x80207D70: bc1fl       L_80207D84
    if (!c1cs) {
        // 0x80207D74: lw          $s4, 0x8($v1)
        ctx->r20 = MEM_W(ctx->r3, 0X8);
            goto L_80207D84;
    }
    goto skip_3;
    // 0x80207D74: lw          $s4, 0x8($v1)
    ctx->r20 = MEM_W(ctx->r3, 0X8);
    skip_3:
    // 0x80207D78: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80207D7C: addiu       $fp, $a2, 0x1
    ctx->r30 = ADD32(ctx->r6, 0X1);
    // 0x80207D80: lw          $s4, 0x8($v1)
    ctx->r20 = MEM_W(ctx->r3, 0X8);
L_80207D84:
    // 0x80207D84: lwc1        $f0, 0x0($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X0);
    // 0x80207D88: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80207D8C: nop

    // 0x80207D90: bc1fl       L_80207DA4
    if (!c1cs) {
        // 0x80207D94: lw          $s4, 0xC($v1)
        ctx->r20 = MEM_W(ctx->r3, 0XC);
            goto L_80207DA4;
    }
    goto skip_4;
    // 0x80207D94: lw          $s4, 0xC($v1)
    ctx->r20 = MEM_W(ctx->r3, 0XC);
    skip_4:
    // 0x80207D98: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80207D9C: addiu       $fp, $a2, 0x2
    ctx->r30 = ADD32(ctx->r6, 0X2);
    // 0x80207DA0: lw          $s4, 0xC($v1)
    ctx->r20 = MEM_W(ctx->r3, 0XC);
L_80207DA4:
    // 0x80207DA4: lwc1        $f0, 0x0($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X0);
    // 0x80207DA8: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80207DAC: nop

    // 0x80207DB0: bc1fl       L_80207DC4
    if (!c1cs) {
        // 0x80207DB4: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_80207DC4;
    }
    goto skip_5;
    // 0x80207DB4: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    skip_5:
    // 0x80207DB8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80207DBC: addiu       $fp, $a2, 0x3
    ctx->r30 = ADD32(ctx->r6, 0X3);
    // 0x80207DC0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_80207DC4:
    // 0x80207DC4: bne         $a2, $a3, L_80207D40
    if (ctx->r6 != ctx->r7) {
        // 0x80207DC8: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_80207D40;
    }
    // 0x80207DC8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
L_80207DCC:
    // 0x80207DCC: lw          $t4, 0x118($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X118);
L_80207DD0:
    // 0x80207DD0: sll         $a0, $fp, 2
    ctx->r4 = S32(ctx->r30 << 2);
    // 0x80207DD4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80207DD8: addu        $a1, $t4, $a0
    ctx->r5 = ADD32(ctx->r12, ctx->r4);
    // 0x80207DDC: lw          $s4, 0x0($a1)
    ctx->r20 = MEM_W(ctx->r5, 0X0);
    // 0x80207DE0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80207DE4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80207DE8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80207DEC: slti        $at, $a3, 0x2
    ctx->r1 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
    // 0x80207DF0: sb          $t2, 0x9B($sp)
    MEM_B(0X9B, ctx->r29) = ctx->r10;
    // 0x80207DF4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80207DF8: sw          $s4, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r20;
    // 0x80207DFC: swc1        $f22, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f22.u32l;
    // 0x80207E00: swc1        $f22, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f22.u32l;
    // 0x80207E04: bne         $at, $zero, L_80207F4C
    if (ctx->r1 != 0) {
        // 0x80207E08: swc1        $f8, 0xB8($sp)
        MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
            goto L_80207F4C;
    }
    // 0x80207E08: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    // 0x80207E0C: sw          $a2, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r6;
    // 0x80207E10: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x80207E14: addiu       $s7, $sp, 0xB4
    ctx->r23 = ADD32(ctx->r29, 0XB4);
    // 0x80207E18: addiu       $s6, $zero, 0xC
    ctx->r22 = ADD32(0, 0XC);
    // 0x80207E1C: addiu       $s5, $sp, 0xC0
    ctx->r21 = ADD32(ctx->r29, 0XC0);
L_80207E20:
    // 0x80207E20: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x80207E24: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80207E28: lwc1        $f20, 0x2B0C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X2B0C);
    // 0x80207E2C: blez        $a3, L_80207ED4
    if (SIGNED(ctx->r7) <= 0) {
        // 0x80207E30: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80207ED4;
    }
    // 0x80207E30: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80207E34: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80207E38: addiu       $s3, $sp, 0x7C
    ctx->r19 = ADD32(ctx->r29, 0X7C);
L_80207E3C:
    // 0x80207E3C: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x80207E40: lw          $t9, 0x118($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X118);
    // 0x80207E44: bne         $t3, $zero, L_80207EB4
    if (ctx->r11 != 0) {
        // 0x80207E48: addu        $t8, $t9, $s2
        ctx->r24 = ADD32(ctx->r25, ctx->r18);
            goto L_80207EB4;
    }
    // 0x80207E48: addu        $t8, $t9, $s2
    ctx->r24 = ADD32(ctx->r25, ctx->r18);
    // 0x80207E4C: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x80207E50: lwc1        $f16, 0x0($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X0);
    // 0x80207E54: multu       $s1, $s6
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80207E58: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80207E5C: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x80207E60: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80207E64: swc1        $f18, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f18.u32l;
    // 0x80207E68: lwc1        $f6, 0x4($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X4);
    // 0x80207E6C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80207E70: mflo        $t6
    ctx->r14 = lo;
    // 0x80207E74: addu        $s0, $s5, $t6
    ctx->r16 = ADD32(ctx->r21, ctx->r14);
    // 0x80207E78: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80207E7C: swc1        $f22, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f22.u32l;
    // 0x80207E80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80207E84: jal         0x80234D30
    // 0x80207E88: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    func_80234D30(rdram, ctx);
        goto after_0;
    // 0x80207E88: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80207E8C: beq         $v0, $zero, L_80207EB4
    if (ctx->r2 == 0) {
        // 0x80207E90: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_80207EB4;
    }
    // 0x80207E90: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80207E94: jal         0x80234BC0
    // 0x80207E98: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80234BC0(rdram, ctx);
        goto after_1;
    // 0x80207E98: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80207E9C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80207EA0: nop

    // 0x80207EA4: bc1fl       L_80207EB8
    if (!c1cs) {
        // 0x80207EA8: lw          $t7, 0x64($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X64);
            goto L_80207EB8;
    }
    goto skip_6;
    // 0x80207EA8: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    skip_6:
    // 0x80207EAC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80207EB0: or          $fp, $s1, $zero
    ctx->r30 = ctx->r17 | 0;
L_80207EB4:
    // 0x80207EB4: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
L_80207EB8:
    // 0x80207EB8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80207EBC: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80207EC0: bne         $s1, $t7, L_80207E3C
    if (ctx->r17 != ctx->r15) {
        // 0x80207EC4: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_80207E3C;
    }
    // 0x80207EC4: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80207EC8: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x80207ECC: sll         $a0, $fp, 2
    ctx->r4 = S32(ctx->r30 << 2);
    // 0x80207ED0: addu        $a1, $t1, $a0
    ctx->r5 = ADD32(ctx->r9, ctx->r4);
L_80207ED4:
    // 0x80207ED4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80207ED8: lw          $t5, 0x104($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X104);
    // 0x80207EDC: lw          $a2, 0xA4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA4);
    // 0x80207EE0: beql        $v1, $t5, L_80207F50
    if (ctx->r3 == ctx->r13) {
        // 0x80207EE4: lbu         $a3, 0x9B($sp)
        ctx->r7 = MEM_BU(ctx->r29, 0X9B);
            goto L_80207F50;
    }
    goto skip_7;
    // 0x80207EE4: lbu         $a3, 0x9B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X9B);
    skip_7:
    // 0x80207EE8: multu       $fp, $s6
    result = U64(U32(ctx->r30)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80207EEC: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x80207EF0: addu        $t3, $sp, $t2
    ctx->r11 = ADD32(ctx->r29, ctx->r10);
    // 0x80207EF4: sw          $v1, 0x104($t3)
    MEM_W(0X104, ctx->r11) = ctx->r3;
    // 0x80207EF8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80207EFC: addu        $t8, $sp, $a0
    ctx->r24 = ADD32(ctx->r29, ctx->r4);
    // 0x80207F00: sw          $t9, 0x7C($t8)
    MEM_W(0X7C, ctx->r24) = ctx->r25;
    // 0x80207F04: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x80207F08: lbu         $t7, 0x9B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X9B);
    // 0x80207F0C: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x80207F10: mflo        $t6
    ctx->r14 = lo;
    // 0x80207F14: addu        $v0, $s5, $t6
    ctx->r2 = ADD32(ctx->r21, ctx->r14);
    // 0x80207F18: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80207F1C: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x80207F20: addiu       $t1, $t7, 0x1
    ctx->r9 = ADD32(ctx->r15, 0X1);
    // 0x80207F24: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x80207F28: or          $s4, $v1, $zero
    ctx->r20 = ctx->r3 | 0;
    // 0x80207F2C: swc1        $f16, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f16.u32l;
    // 0x80207F30: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80207F34: sw          $t4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r12;
    // 0x80207F38: swc1        $f22, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f22.u32l;
    // 0x80207F3C: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x80207F40: sb          $t1, 0x9B($sp)
    MEM_B(0X9B, ctx->r29) = ctx->r9;
    // 0x80207F44: bne         $t4, $t2, L_80207E20
    if (ctx->r12 != ctx->r10) {
        // 0x80207F48: swc1        $f4, 0xB8($sp)
        MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
            goto L_80207E20;
    }
    // 0x80207F48: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
L_80207F4C:
    // 0x80207F4C: lbu         $a3, 0x9B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X9B);
L_80207F50:
    // 0x80207F50: blez        $a3, L_80207FE8
    if (SIGNED(ctx->r7) <= 0) {
        // 0x80207F54: andi        $t0, $a3, 0x3
        ctx->r8 = ctx->r7 & 0X3;
            goto L_80207FE8;
    }
    // 0x80207F54: andi        $t0, $a3, 0x3
    ctx->r8 = ctx->r7 & 0X3;
    // 0x80207F58: beq         $t0, $zero, L_80207F9C
    if (ctx->r8 == 0) {
        // 0x80207F5C: sw          $zero, 0xA4($sp)
        MEM_W(0XA4, ctx->r29) = 0;
            goto L_80207F9C;
    }
    // 0x80207F5C: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x80207F60: lw          $t3, 0x118($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X118);
    // 0x80207F64: sll         $a2, $zero, 2
    ctx->r6 = S32(0 << 2);
    // 0x80207F68: addiu       $t9, $sp, 0x104
    ctx->r25 = ADD32(ctx->r29, 0X104);
    // 0x80207F6C: addu        $v0, $a2, $t9
    ctx->r2 = ADD32(ctx->r6, ctx->r25);
    // 0x80207F70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80207F74: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80207F78: addu        $v1, $t3, $a2
    ctx->r3 = ADD32(ctx->r11, ctx->r6);
L_80207F7C:
    // 0x80207F7C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80207F80: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80207F84: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80207F88: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80207F8C: bne         $a0, $a1, L_80207F7C
    if (ctx->r4 != ctx->r5) {
        // 0x80207F90: sw          $t8, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r24;
            goto L_80207F7C;
    }
    // 0x80207F90: sw          $t8, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r24;
    // 0x80207F94: beq         $a1, $a3, L_80207FE8
    if (ctx->r5 == ctx->r7) {
        // 0x80207F98: sw          $a1, 0xA4($sp)
        MEM_W(0XA4, ctx->r29) = ctx->r5;
            goto L_80207FE8;
    }
    // 0x80207F98: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
L_80207F9C:
    // 0x80207F9C: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x80207FA0: lw          $t6, 0x118($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X118);
    // 0x80207FA4: addiu       $t7, $sp, 0x104
    ctx->r15 = ADD32(ctx->r29, 0X104);
    // 0x80207FA8: sll         $a2, $a1, 2
    ctx->r6 = S32(ctx->r5 << 2);
    // 0x80207FAC: sll         $t1, $a3, 2
    ctx->r9 = S32(ctx->r7 << 2);
    // 0x80207FB0: addu        $a0, $t1, $t7
    ctx->r4 = ADD32(ctx->r9, ctx->r15);
    // 0x80207FB4: addu        $v0, $a2, $t7
    ctx->r2 = ADD32(ctx->r6, ctx->r15);
    // 0x80207FB8: addu        $v1, $t6, $a2
    ctx->r3 = ADD32(ctx->r14, ctx->r6);
L_80207FBC:
    // 0x80207FBC: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x80207FC0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80207FC4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80207FC8: sw          $t5, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = ctx->r13;
    // 0x80207FCC: lw          $t4, -0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, -0XC);
    // 0x80207FD0: sw          $t4, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->r12;
    // 0x80207FD4: lw          $t2, -0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, -0X8);
    // 0x80207FD8: sw          $t2, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->r10;
    // 0x80207FDC: lw          $t3, -0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, -0X4);
    // 0x80207FE0: bne         $v0, $a0, L_80207FBC
    if (ctx->r2 != ctx->r4) {
        // 0x80207FE4: sw          $t3, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r11;
            goto L_80207FBC;
    }
    // 0x80207FE4: sw          $t3, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r11;
L_80207FE8:
    // 0x80207FE8: lbu         $t9, 0x9B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X9B);
    // 0x80207FEC: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x80207FF0: sb          $t9, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r25;
    // 0x80207FF4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80207FF8: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80207FFC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80208000: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80208004: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80208008: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8020800C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80208010: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80208014: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80208018: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8020801C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80208020: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80208024: jr          $ra
    // 0x80208028: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    return;
    // 0x80208028: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
;}
RECOMP_FUNC void func_802279FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802279FC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80227A00: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80227A04: lw          $t6, 0x5210($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5210);
    // 0x80227A08: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80227A0C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80227A10: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80227A14: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80227A18: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80227A1C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80227A20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80227A24: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80227A28: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80227A2C: jal         0x80223840
    // 0x80227A30: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227A30: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_0:
    // 0x80227A34: addiu       $s3, $sp, 0x3C
    ctx->r19 = ADD32(ctx->r29, 0X3C);
    // 0x80227A38: addiu       $s4, $sp, 0x38
    ctx->r20 = ADD32(ctx->r29, 0X38);
    // 0x80227A3C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80227A40: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80227A44: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80227A48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227A4C: jal         0x8022393C
    // 0x80227A50: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_1;
    // 0x80227A50: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80227A54: beq         $v0, $zero, L_80227A90
    if (ctx->r2 == 0) {
        // 0x80227A58: lui         $s0, 0x434F
        ctx->r16 = S32(0X434F << 16);
            goto L_80227A90;
    }
    // 0x80227A58: lui         $s0, 0x434F
    ctx->r16 = S32(0X434F << 16);
    // 0x80227A5C: ori         $s0, $s0, 0x4D4D
    ctx->r16 = ctx->r16 | 0X4D4D;
L_80227A60:
    // 0x80227A60: bnel        $v0, $s0, L_80227A78
    if (ctx->r2 != ctx->r16) {
        // 0x80227A64: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80227A78;
    }
    goto skip_0;
    // 0x80227A64: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
    // 0x80227A68: jal         0x80225EFC
    // 0x80227A6C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_80225EFC(rdram, ctx);
        goto after_2;
    // 0x80227A6C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_2:
    // 0x80227A70: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80227A74: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80227A78:
    // 0x80227A78: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80227A7C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80227A80: jal         0x8022393C
    // 0x80227A84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_3;
    // 0x80227A84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x80227A88: bne         $v0, $zero, L_80227A60
    if (ctx->r2 != 0) {
        // 0x80227A8C: nop
    
            goto L_80227A60;
    }
    // 0x80227A8C: nop

L_80227A90:
    // 0x80227A90: jal         0x802238F0
    // 0x80227A94: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_802238F0(rdram, ctx);
        goto after_4;
    // 0x80227A94: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x80227A98: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80227A9C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80227AA0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80227AA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80227AA8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80227AAC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80227AB0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80227AB4: jr          $ra
    // 0x80227AB8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80227AB8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80233748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80233748: lui         $t4, 0x8025
    ctx->r12 = S32(0X8025 << 16);
    // 0x8023374C: addiu       $t4, $t4, -0x18F0
    ctx->r12 = ADD32(ctx->r12, -0X18F0);
    // 0x80233750: lw          $t6, 0x0($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X0);
    // 0x80233754: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023375C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80233760: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x80233764: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x80233768: or          $t8, $a0, $zero
    ctx->r24 = ctx->r4 | 0;
    // 0x8023376C: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80233770: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80233774: lui         $t3, 0x8027
    ctx->r11 = S32(0X8027 << 16);
    // 0x80233778: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8023377C: bne         $a2, $zero, L_80233798
    if (ctx->r6 != 0) {
        // 0x80233780: addiu       $t3, $t3, 0x3B90
        ctx->r11 = ADD32(ctx->r11, 0X3B90);
            goto L_80233798;
    }
    // 0x80233780: addiu       $t3, $t3, 0x3B90
    ctx->r11 = ADD32(ctx->r11, 0X3B90);
    // 0x80233784: addiu       $a0, $a0, 0x51A0
    ctx->r4 = ADD32(ctx->r4, 0X51A0);
    // 0x80233788: jal         0x80231A24
    // 0x8023378C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8023378C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_0:
    // 0x80233790: b           L_80233AAC
    // 0x80233794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80233AAC;
    // 0x80233794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80233798:
    // 0x80233798: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x8023379C: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x802337A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802337A4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802337A8: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x802337AC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802337B0: lw          $t6, 0x4($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X4);
    // 0x802337B4: addu        $t8, $t6, $at
    ctx->r24 = ADD32(ctx->r14, ctx->r1);
    // 0x802337B8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x802337BC: lw          $a0, 0x18($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X18);
    // 0x802337C0: beql        $a0, $zero, L_802338B8
    if (ctx->r4 == 0) {
        // 0x802337C4: lw          $v0, 0x1C($a2)
        ctx->r2 = MEM_W(ctx->r6, 0X1C);
            goto L_802338B8;
    }
    goto skip_0;
    // 0x802337C4: lw          $v0, 0x1C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1C);
    skip_0:
    // 0x802337C8: lbu         $t7, 0x1A($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1A);
    // 0x802337CC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802337D0: lui         $t5, 0xF200
    ctx->r13 = S32(0XF200 << 16);
    // 0x802337D4: beql        $t7, $zero, L_802338B8
    if (ctx->r15 == 0) {
        // 0x802337D8: lw          $v0, 0x1C($a2)
        ctx->r2 = MEM_W(ctx->r6, 0X1C);
            goto L_802338B8;
    }
    goto skip_1;
    // 0x802337D8: lw          $v0, 0x1C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1C);
    skip_1:
    // 0x802337DC: lhu         $t9, 0xA($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0XA);
    // 0x802337E0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802337E4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802337E8: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x802337EC: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x802337F0: bgez        $t9, L_80233808
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802337F4: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80233808;
    }
    // 0x802337F4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802337F8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802337FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80233800: nop

    // 0x80233804: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80233808:
    // 0x80233808: mul.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8023380C: lhu         $t8, 0xC($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0XC);
    // 0x80233810: lwc1        $f10, 0x14($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X14);
    // 0x80233814: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80233818: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8023381C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80233820: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80233824: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80233828: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x8023382C: bgez        $t8, L_80233840
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80233830: nop
    
            goto L_80233840;
    }
    // 0x80233830: nop

    // 0x80233834: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80233838: nop

    // 0x8023383C: add.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f16.fl;
L_80233840:
    // 0x80233840: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80233844: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80233848: andi        $t6, $v1, 0xFFF
    ctx->r14 = ctx->r3 & 0XFFF;
    // 0x8023384C: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x80233850: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80233854: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x80233858: or          $t7, $t8, $t5
    ctx->r15 = ctx->r24 | ctx->r13;
    // 0x8023385C: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80233860: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x80233864: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80233868: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x8023386C: nop

    // 0x80233870: andi        $t9, $a0, 0xFFF
    ctx->r25 = ctx->r4 & 0XFFF;
    // 0x80233874: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x80233878: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8023387C: lhu         $t8, 0xA($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0XA);
    // 0x80233880: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80233884: addu        $t9, $t7, $v1
    ctx->r25 = ADD32(ctx->r15, ctx->r3);
    // 0x80233888: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8023388C: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x80233890: lhu         $t6, 0xC($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0XC);
    // 0x80233894: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x80233898: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x8023389C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x802338A0: addu        $t7, $t8, $a0
    ctx->r15 = ADD32(ctx->r24, ctx->r4);
    // 0x802338A4: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x802338A8: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x802338AC: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x802338B0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x802338B4: lw          $v0, 0x1C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1C);
L_802338B8:
    // 0x802338B8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802338BC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802338C0: beq         $v0, $zero, L_80233994
    if (ctx->r2 == 0) {
        // 0x802338C4: lui         $t5, 0xF200
        ctx->r13 = S32(0XF200 << 16);
            goto L_80233994;
    }
    // 0x802338C4: lui         $t5, 0xF200
    ctx->r13 = S32(0XF200 << 16);
    // 0x802338C8: lbu         $t6, 0x1A($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1A);
    // 0x802338CC: beql        $t6, $zero, L_80233998
    if (ctx->r14 == 0) {
        // 0x802338D0: lw          $t8, 0x18($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X18);
            goto L_80233998;
    }
    goto skip_2;
    // 0x802338D0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    skip_2:
    // 0x802338D4: lw          $t9, 0x0($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X0);
    // 0x802338D8: lhu         $t7, 0x14($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X14);
    // 0x802338DC: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802338E0: lw          $t8, 0x2C($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X2C);
    // 0x802338E4: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x802338E8: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x802338EC: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x802338F0: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x802338F4: lhu         $a3, 0xA($t0)
    ctx->r7 = MEM_HU(ctx->r8, 0XA);
    // 0x802338F8: lhu         $t1, 0xC($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0XC);
    // 0x802338FC: mtc1        $a3, $f10
    ctx->f10.u32l = ctx->r7;
    // 0x80233900: nop

    // 0x80233904: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80233908: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8023390C: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80233910: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80233914: mul.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x80233918: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x8023391C: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x80233920: cvt.s.w     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80233924: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80233928: nop

    // 0x8023392C: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80233930: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80233934: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80233938: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x8023393C: nop

    // 0x80233940: andi        $t9, $v1, 0xFFF
    ctx->r25 = ctx->r3 & 0XFFF;
    // 0x80233944: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80233948: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x8023394C: or          $t8, $t7, $t5
    ctx->r24 = ctx->r15 | ctx->r13;
    // 0x80233950: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x80233954: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x80233958: nop

    // 0x8023395C: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x80233960: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x80233964: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x80233968: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x8023396C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80233970: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x80233974: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x80233978: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x8023397C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80233980: addu        $t9, $t6, $a0
    ctx->r25 = ADD32(ctx->r14, ctx->r4);
    // 0x80233984: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x80233988: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x8023398C: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x80233990: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
L_80233994:
    // 0x80233994: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
L_80233998:
    // 0x80233998: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8023399C: lw          $t7, 0x3944($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3944);
    // 0x802339A0: sll         $t6, $t8, 1
    ctx->r14 = S32(ctx->r24 << 1);
    // 0x802339A4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802339A8: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x802339AC: lhu         $v0, 0x0($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X0);
    // 0x802339B0: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x802339B4: beq         $v0, $at, L_80233AA8
    if (ctx->r2 == ctx->r1) {
        // 0x802339B8: sll         $t8, $v0, 3
        ctx->r24 = S32(ctx->r2 << 3);
            goto L_80233AA8;
    }
    // 0x802339B8: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x802339BC: lw          $t7, 0x3940($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3940);
    // 0x802339C0: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x802339C4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802339C8: addu        $a1, $t8, $t7
    ctx->r5 = ADD32(ctx->r24, ctx->r15);
    // 0x802339CC: lbu         $t6, 0x1A($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X1A);
    // 0x802339D0: beql        $t6, $zero, L_80233AAC
    if (ctx->r14 == 0) {
        // 0x802339D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80233AAC;
    }
    goto skip_3;
    // 0x802339D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x802339D8: lhu         $t9, 0xA($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0XA);
    // 0x802339DC: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x802339E0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802339E4: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x802339E8: bgez        $t9, L_802339FC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802339EC: cvt.s.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
            goto L_802339FC;
    }
    // 0x802339EC: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802339F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802339F4: nop

    // 0x802339F8: add.s       $f8, $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f18.fl;
L_802339FC:
    // 0x802339FC: mul.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x80233A00: lhu         $t7, 0xC($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0XC);
    // 0x80233A04: lwc1        $f18, 0x14($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X14);
    // 0x80233A08: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80233A0C: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80233A10: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80233A14: cvt.s.w     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80233A18: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80233A1C: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x80233A20: bgez        $t7, L_80233A34
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80233A24: nop
    
            goto L_80233A34;
    }
    // 0x80233A24: nop

    // 0x80233A28: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80233A2C: nop

    // 0x80233A30: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_80233A34:
    // 0x80233A34: mul.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x80233A38: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80233A3C: andi        $t8, $v1, 0xFFF
    ctx->r24 = ctx->r3 & 0XFFF;
    // 0x80233A40: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x80233A44: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80233A48: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x80233A4C: or          $t6, $t7, $t5
    ctx->r14 = ctx->r15 | ctx->r13;
    // 0x80233A50: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80233A54: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x80233A58: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80233A5C: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x80233A60: nop

    // 0x80233A64: andi        $t9, $a0, 0xFFF
    ctx->r25 = ctx->r4 & 0XFFF;
    // 0x80233A68: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x80233A6C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80233A70: lhu         $t7, 0xA($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0XA);
    // 0x80233A74: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80233A78: addu        $t9, $t6, $v1
    ctx->r25 = ADD32(ctx->r14, ctx->r3);
    // 0x80233A7C: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x80233A80: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x80233A84: lhu         $t8, 0xC($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0XC);
    // 0x80233A88: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x80233A8C: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x80233A90: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80233A94: addu        $t6, $t7, $a0
    ctx->r14 = ADD32(ctx->r15, ctx->r4);
    // 0x80233A98: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x80233A9C: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x80233AA0: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x80233AA4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_80233AA8:
    // 0x80233AA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80233AAC:
    // 0x80233AAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80233AB0: jr          $ra
    // 0x80233AB4: nop

    return;
    // 0x80233AB4: nop

;}
RECOMP_FUNC void func_80205E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205E0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80205E10: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80205E14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80205E18: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80205E1C: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80205E20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80205E24: addiu       $a2, $a2, 0xBEE
    ctx->r6 = ADD32(ctx->r6, 0XBEE);
    // 0x80205E28: addiu       $a1, $a1, 0x29CC
    ctx->r5 = ADD32(ctx->r5, 0X29CC);
    // 0x80205E2C: jal         0x80231C58
    // 0x80205E30: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80231C58(rdram, ctx);
        goto after_0;
    // 0x80205E30: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80205E34: bne         $v0, $zero, L_80205EAC
    if (ctx->r2 != 0) {
        // 0x80205E38: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_80205EAC;
    }
    // 0x80205E38: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80205E3C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80205E40: beq         $a3, $at, L_80205E7C
    if (ctx->r7 == ctx->r1) {
        // 0x80205E44: lui         $t6, 0x8025
        ctx->r14 = S32(0X8025 << 16);
            goto L_80205E7C;
    }
    // 0x80205E44: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80205E48: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x80205E4C: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x80205E50: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80205E54: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x80205E58: addiu       $a0, $a0, 0x29D8
    ctx->r4 = ADD32(ctx->r4, 0X29D8);
    // 0x80205E5C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80205E60: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80205E64: bnel        $t0, $zero, L_80205E80
    if (ctx->r8 != 0) {
        // 0x80205E68: lw          $t2, 0x18($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X18);
            goto L_80205E80;
    }
    goto skip_0;
    // 0x80205E68: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x80205E6C: jal         0x80231A24
    // 0x80205E70: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x80205E70: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x80205E74: b           L_80205EB0
    // 0x80205E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80205EB0;
    // 0x80205E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80205E7C:
    // 0x80205E7C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
L_80205E80:
    // 0x80205E80: lui         $t1, 0x8026
    ctx->r9 = S32(0X8026 << 16);
    // 0x80205E84: lw          $t1, -0x4160($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4160);
    // 0x80205E88: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80205E8C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80205E90: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80205E94: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80205E98: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80205E9C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80205EA0: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80205EA4: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80205EA8: sh          $a3, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r7;
L_80205EAC:
    // 0x80205EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80205EB0:
    // 0x80205EB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80205EB4: jr          $ra
    // 0x80205EB8: nop

    return;
    // 0x80205EB8: nop

;}
RECOMP_FUNC void func_80237878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237878: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x8023787C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80237880: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80237884: lw          $s1, 0x910($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X910);
    // 0x80237888: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8023788C: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x80237890: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x80237894: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x80237898: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x8023789C: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x802378A0: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x802378A4: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x802378A8: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802378AC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802378B0: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x802378B4: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x802378B8: sh          $zero, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = 0;
    // 0x802378BC: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x802378C0: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x802378C4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802378C8: bne         $t7, $zero, L_802378DC
    if (ctx->r15 != 0) {
        // 0x802378CC: or          $s5, $a2, $zero
        ctx->r21 = ctx->r6 | 0;
            goto L_802378DC;
    }
    // 0x802378CC: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x802378D0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x802378D4: b           L_80237ADC
    // 0x802378D8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_80237ADC;
    // 0x802378D8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_802378DC:
    // 0x802378DC: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x802378E0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802378E4: lui         $v1, 0x7FFF
    ctx->r3 = S32(0X7FFF << 16);
    // 0x802378E8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x802378EC: beq         $v0, $zero, L_80237928
    if (ctx->r2 == 0) {
        // 0x802378F0: addiu       $s2, $zero, -0x10
        ctx->r18 = ADD32(0, -0X10);
            goto L_80237928;
    }
    // 0x802378F0: addiu       $s2, $zero, -0x10
    ctx->r18 = ADD32(0, -0X10);
    // 0x802378F4: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802378F8: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
L_802378FC:
    // 0x802378FC: subu        $t0, $t9, $a0
    ctx->r8 = SUB32(ctx->r25, ctx->r4);
    // 0x80237900: slt         $at, $t0, $v1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80237904: beql        $at, $zero, L_80237920
    if (ctx->r1 == 0) {
        // 0x80237908: lw          $v0, 0x0($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X0);
            goto L_80237920;
    }
    goto skip_0;
    // 0x80237908: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    skip_0:
    // 0x8023790C: sw          $v0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r2;
    // 0x80237910: lw          $t1, 0x10($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X10);
    // 0x80237914: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80237918: subu        $v1, $t1, $a0
    ctx->r3 = SUB32(ctx->r9, ctx->r4);
    // 0x8023791C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_80237920:
    // 0x80237920: bnel        $v0, $zero, L_802378FC
    if (ctx->r2 != 0) {
        // 0x80237924: lw          $t9, 0x10($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X10);
            goto L_802378FC;
    }
    goto skip_1;
    // 0x80237924: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    skip_1:
L_80237928:
    // 0x80237928: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x8023792C: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80237930: lw          $v0, 0x10($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X10);
    // 0x80237934: subu        $t3, $v0, $a0
    ctx->r11 = SUB32(ctx->r2, ctx->r4);
    // 0x80237938: slt         $at, $t3, $s3
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8023793C: beq         $at, $zero, L_80237A20
    if (ctx->r1 == 0) {
        // 0x80237940: sw          $v0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r2;
            goto L_80237A20;
    }
    // 0x80237940: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80237944: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80237948: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x8023794C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80237950: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80237954: ldc1        $f20, 0x5648($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, 0X5648);
L_80237958:
    // 0x80237958: lw          $t4, 0x1C($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X1C);
    // 0x8023795C: lui         $s0, 0x7FFF
    ctx->r16 = S32(0X7FFF << 16);
    // 0x80237960: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x80237964: and         $t5, $t4, $s2
    ctx->r13 = ctx->r12 & ctx->r18;
    // 0x80237968: sw          $t5, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r13;
    // 0x8023796C: lw          $a0, 0xB4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB4);
    // 0x80237970: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80237974: jalr        $t9
    // 0x80237978: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80237978: nop

    after_0:
    // 0x8023797C: lw          $t8, 0x44($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X44);
    // 0x80237980: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80237984: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    // 0x80237988: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8023798C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80237990: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x80237994: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80237998: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8023799C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x802379A0: div.d       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f20.d);
    // 0x802379A4: add.d       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = ctx->f4.d + ctx->f22.d;
    // 0x802379A8: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x802379AC: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x802379B0: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x802379B4: nop

    // 0x802379B8: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x802379BC: sw          $t2, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r10;
    // 0x802379C0: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x802379C4: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x802379C8: beql        $v1, $zero, L_80237A08
    if (ctx->r3 == 0) {
        // 0x802379CC: lw          $t7, 0xB4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XB4);
            goto L_80237A08;
    }
    goto skip_2;
    // 0x802379CC: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    skip_2:
    // 0x802379D0: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802379D4: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
L_802379D8:
    // 0x802379D8: subu        $t4, $t3, $a0
    ctx->r12 = SUB32(ctx->r11, ctx->r4);
    // 0x802379DC: slt         $at, $t4, $s0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x802379E0: beql        $at, $zero, L_802379FC
    if (ctx->r1 == 0) {
        // 0x802379E4: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_802379FC;
    }
    goto skip_3;
    // 0x802379E4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_3:
    // 0x802379E8: sw          $v1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r3;
    // 0x802379EC: lw          $t5, 0x10($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X10);
    // 0x802379F0: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802379F4: subu        $s0, $t5, $a0
    ctx->r16 = SUB32(ctx->r13, ctx->r4);
    // 0x802379F8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_802379FC:
    // 0x802379FC: bnel        $v1, $zero, L_802379D8
    if (ctx->r3 != 0) {
        // 0x80237A00: lw          $t3, 0x10($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X10);
            goto L_802379D8;
    }
    goto skip_4;
    // 0x80237A00: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
    skip_4:
    // 0x80237A04: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
L_80237A08:
    // 0x80237A08: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80237A0C: lw          $v0, 0x10($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X10);
    // 0x80237A10: subu        $t9, $v0, $a0
    ctx->r25 = SUB32(ctx->r2, ctx->r4);
    // 0x80237A14: slt         $at, $t9, $s3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80237A18: bne         $at, $zero, L_80237958
    if (ctx->r1 != 0) {
        // 0x80237A1C: sw          $v0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r2;
            goto L_80237958;
    }
    // 0x80237A1C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
L_80237A20:
    // 0x80237A20: lw          $t8, 0x1C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X1C);
    // 0x80237A24: addiu       $s2, $zero, -0x10
    ctx->r18 = ADD32(0, -0X10);
    // 0x80237A28: addiu       $s7, $sp, 0xAA
    ctx->r23 = ADD32(ctx->r29, 0XAA);
    // 0x80237A2C: and         $t6, $t8, $s2
    ctx->r14 = ctx->r24 & ctx->r18;
    // 0x80237A30: blez        $s3, L_80237ABC
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80237A34: sw          $t6, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r14;
            goto L_80237ABC;
    }
    // 0x80237A34: sw          $t6, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r14;
    // 0x80237A38: lui         $s6, 0x700
    ctx->r22 = S32(0X700 << 16);
L_80237A3C:
    // 0x80237A3C: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x80237A40: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x80237A44: slt         $at, $v0, $s3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80237A48: beq         $at, $zero, L_80237A58
    if (ctx->r1 == 0) {
        // 0x80237A4C: nop
    
            goto L_80237A58;
    }
    // 0x80237A4C: nop

    // 0x80237A50: b           L_80237A58
    // 0x80237A54: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_80237A58;
    // 0x80237A54: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80237A58:
    // 0x80237A58: sw          $s6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r22;
    // 0x80237A5C: sw          $zero, 0x4($s4)
    MEM_W(0X4, ctx->r20) = 0;
    // 0x80237A60: lw          $s2, 0x38($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X38);
    // 0x80237A64: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80237A68: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80237A6C: lw          $t9, 0x8($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X8);
    // 0x80237A70: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80237A74: jalr        $t9
    // 0x80237A78: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80237A78: nop

    after_1:
    // 0x80237A7C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x80237A80: addiu       $t1, $s4, 0x8
    ctx->r9 = ADD32(ctx->r20, 0X8);
    // 0x80237A84: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80237A88: lw          $t9, 0x4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X4);
    // 0x80237A8C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80237A90: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80237A94: jalr        $t9
    // 0x80237A98: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80237A98: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x80237A9C: lw          $t3, 0x20($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X20);
    // 0x80237AA0: subu        $s3, $s3, $s0
    ctx->r19 = SUB32(ctx->r19, ctx->r16);
    // 0x80237AA4: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x80237AA8: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x80237AAC: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80237AB0: addu        $s5, $s5, $t0
    ctx->r21 = ADD32(ctx->r21, ctx->r8);
    // 0x80237AB4: bgtz        $s3, L_80237A3C
    if (SIGNED(ctx->r19) > 0) {
        // 0x80237AB8: sw          $t4, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r12;
            goto L_80237A3C;
    }
    // 0x80237AB8: sw          $t4, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r12;
L_80237ABC:
    // 0x80237ABC: lw          $t5, 0xB8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB8);
    // 0x80237AC0: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x80237AC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80237AC8: subu        $t7, $s4, $t5
    ctx->r15 = SUB32(ctx->r20, ctx->r13);
    // 0x80237ACC: sra         $t8, $t7, 3
    ctx->r24 = S32(SIGNED(ctx->r15) >> 3);
    // 0x80237AD0: jal         0x802377C8
    // 0x80237AD4: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    func_802377C8(rdram, ctx);
        goto after_3;
    // 0x80237AD4: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    after_3:
    // 0x80237AD8: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
L_80237ADC:
    // 0x80237ADC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80237AE0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80237AE4: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80237AE8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80237AEC: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80237AF0: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80237AF4: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80237AF8: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80237AFC: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80237B00: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x80237B04: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x80237B08: jr          $ra
    // 0x80237B0C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80237B0C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_80247D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247D10: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80247D14: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80247D18: lbu         $t7, 0x3F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3F);
    // 0x80247D1C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80247D20: addiu       $t6, $t6, 0x5F80
    ctx->r14 = ADD32(ctx->r14, 0X5F80);
    // 0x80247D24: slti        $at, $t7, 0x41
    ctx->r1 = SIGNED(ctx->r15) < 0X41 ? 1 : 0;
    // 0x80247D28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80247D2C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80247D30: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80247D34: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80247D38: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x80247D3C: bne         $at, $zero, L_80247D4C
    if (ctx->r1 != 0) {
        // 0x80247D40: sw          $t6, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r14;
            goto L_80247D4C;
    }
    // 0x80247D40: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80247D44: b           L_80247EF0
    // 0x80247D48: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80247EF0;
    // 0x80247D48: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80247D4C:
    // 0x80247D4C: jal         0x80245AD0
    // 0x80247D50: nop

    func_80245AD0(rdram, ctx);
        goto after_0;
    // 0x80247D50: nop

    after_0:
    // 0x80247D54: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80247D58: jal         0x80247AEC
    // 0x80247D5C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_80247AEC(rdram, ctx);
        goto after_1;
    // 0x80247D5C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x80247D60: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80247D64: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80247D68: bne         $t8, $zero, L_80247D80
    if (ctx->r24 != 0) {
        // 0x80247D6C: nop
    
            goto L_80247D80;
    }
    // 0x80247D6C: nop

    // 0x80247D70: lhu         $t9, 0x28($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X28);
    // 0x80247D74: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80247D78: beq         $t9, $at, L_80247D88
    if (ctx->r25 == ctx->r1) {
        // 0x80247D7C: nop
    
            goto L_80247D88;
    }
    // 0x80247D7C: nop

L_80247D80:
    // 0x80247D80: b           L_80247EF0
    // 0x80247D84: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80247EF0;
    // 0x80247D84: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80247D88:
    // 0x80247D88: lbu         $t0, 0x2A($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2A);
    // 0x80247D8C: andi        $t1, $t0, 0x80
    ctx->r9 = ctx->r8 & 0X80;
    // 0x80247D90: beq         $t1, $zero, L_80247DB4
    if (ctx->r9 == 0) {
        // 0x80247D94: nop
    
            goto L_80247DB4;
    }
    // 0x80247D94: nop

L_80247D98:
    // 0x80247D98: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80247D9C: jal         0x80247AEC
    // 0x80247DA0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_80247AEC(rdram, ctx);
        goto after_2;
    // 0x80247DA0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x80247DA4: lbu         $t2, 0x2A($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X2A);
    // 0x80247DA8: andi        $t3, $t2, 0x80
    ctx->r11 = ctx->r10 & 0X80;
    // 0x80247DAC: bne         $t3, $zero, L_80247D98
    if (ctx->r11 != 0) {
        // 0x80247DB0: nop
    
            goto L_80247D98;
    }
    // 0x80247DB0: nop

L_80247DB4:
    // 0x80247DB4: jal         0x80247F00
    // 0x80247DB8: lbu         $a0, 0x3F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3F);
    func_80247F00(rdram, ctx);
        goto after_3;
    // 0x80247DB8: lbu         $a0, 0x3F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3F);
    after_3:
    // 0x80247DBC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80247DC0: addiu       $a1, $a1, 0x5F80
    ctx->r5 = ADD32(ctx->r5, 0X5F80);
    // 0x80247DC4: jal         0x802465B0
    // 0x80247DC8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802465B0(rdram, ctx);
        goto after_4;
    // 0x80247DC8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80247DCC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80247DD0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80247DD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80247DD8: jal         0x802374B0
    // 0x80247DDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_5;
    // 0x80247DDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80247DE0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_80247DE4:
    // 0x80247DE4: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80247DE8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80247DEC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80247DF0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80247DF4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80247DF8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80247DFC: sw          $t4, 0x5F80($at)
    MEM_W(0X5F80, ctx->r1) = ctx->r12;
    // 0x80247E00: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80247E04: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x80247E08: bne         $at, $zero, L_80247DE4
    if (ctx->r1 != 0) {
        // 0x80247E0C: sw          $t8, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r24;
            goto L_80247DE4;
    }
    // 0x80247E0C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80247E10: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80247E14: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80247E18: sw          $zero, 0x5FBC($at)
    MEM_W(0X5FBC, ctx->r1) = 0;
    // 0x80247E1C: addiu       $a1, $a1, 0x5F80
    ctx->r5 = ADD32(ctx->r5, 0X5F80);
    // 0x80247E20: jal         0x802465B0
    // 0x80247E24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802465B0(rdram, ctx);
        goto after_6;
    // 0x80247E24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x80247E28: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80247E2C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80247E30: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80247E34: sb          $t9, 0x5EB0($at)
    MEM_B(0X5EB0, ctx->r1) = ctx->r25;
    // 0x80247E38: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80247E3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80247E40: jal         0x802374B0
    // 0x80247E44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_7;
    // 0x80247E44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80247E48: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_80247E4C:
    // 0x80247E4C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80247E50: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80247E54: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80247E58: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x80247E5C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80247E60: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x80247E64: bne         $at, $zero, L_80247E4C
    if (ctx->r1 != 0) {
        // 0x80247E68: sw          $t1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r9;
            goto L_80247E4C;
    }
    // 0x80247E68: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80247E6C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80247E70: addiu       $t5, $sp, 0x1C
    ctx->r13 = ADD32(ctx->r29, 0X1C);
    // 0x80247E74: lwl         $at, 0x0($t4)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r12, 0X0);
    // 0x80247E78: lwr         $at, 0x3($t4)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r12, 0X3);
    // 0x80247E7C: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x80247E80: lwl         $t7, 0x4($t4)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r12, 0X4);
    // 0x80247E84: lwr         $t7, 0x7($t4)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r12, 0X7);
    // 0x80247E88: sw          $t7, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r15;
    // 0x80247E8C: lwl         $at, 0x8($t4)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r12, 0X8);
    // 0x80247E90: lwr         $at, 0xB($t4)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r12, 0XB);
    // 0x80247E94: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x80247E98: lbu         $t8, 0x1D($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1D);
    // 0x80247E9C: andi        $t9, $t8, 0xC0
    ctx->r25 = ctx->r24 & 0XC0;
    // 0x80247EA0: sra         $t0, $t9, 4
    ctx->r8 = S32(SIGNED(ctx->r25) >> 4);
    // 0x80247EA4: bne         $t0, $zero, L_80247EE4
    if (ctx->r8 != 0) {
        // 0x80247EA8: sw          $t0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r8;
            goto L_80247EE4;
    }
    // 0x80247EA8: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x80247EAC: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_80247EB0:
    // 0x80247EB0: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80247EB4: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80247EB8: addu        $t2, $sp, $t1
    ctx->r10 = ADD32(ctx->r29, ctx->r9);
    // 0x80247EBC: lbu         $t2, 0x20($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X20);
    // 0x80247EC0: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
    // 0x80247EC4: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80247EC8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80247ECC: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x80247ED0: slti        $at, $t7, 0x8
    ctx->r1 = SIGNED(ctx->r15) < 0X8 ? 1 : 0;
    // 0x80247ED4: addiu       $t5, $t6, 0x1
    ctx->r13 = ADD32(ctx->r14, 0X1);
    // 0x80247ED8: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80247EDC: bne         $at, $zero, L_80247EB0
    if (ctx->r1 != 0) {
        // 0x80247EE0: sw          $t5, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r13;
            goto L_80247EB0;
    }
    // 0x80247EE0: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
L_80247EE4:
    // 0x80247EE4: jal         0x80245B14
    // 0x80247EE8: nop

    func_80245B14(rdram, ctx);
        goto after_8;
    // 0x80247EE8: nop

    after_8:
    // 0x80247EEC: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
L_80247EF0:
    // 0x80247EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80247EF4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80247EF8: jr          $ra
    // 0x80247EFC: nop

    return;
    // 0x80247EFC: nop

;}
RECOMP_FUNC void func_8020B500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020B500: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x8020B504: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8020B508: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x8020B50C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020B510: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8020B514: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x8020B518: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8020B51C: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8020B520: beq         $a0, $at, L_8020C198
    if (ctx->r4 == ctx->r1) {
        // 0x8020B524: sdc1        $f20, 0x18($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
            goto L_8020C198;
    }
    // 0x8020B524: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8020B528: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8020B52C: beq         $a0, $at, L_8020B6DC
    if (ctx->r4 == ctx->r1) {
        // 0x8020B530: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8020B6DC;
    }
    // 0x8020B530: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020B534: bne         $a0, $at, L_8020CE74
    if (ctx->r4 != ctx->r1) {
        // 0x8020B538: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8020CE74;
    }
    // 0x8020B538: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020B53C: bgez        $s0, L_8020B54C
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8020B540: sra         $a0, $s0, 1
        ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
            goto L_8020B54C;
    }
    // 0x8020B540: sra         $a0, $s0, 1
    ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
    // 0x8020B544: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x8020B548: sra         $a0, $at, 1
    ctx->r4 = S32(SIGNED(ctx->r1) >> 1);
L_8020B54C:
    // 0x8020B54C: blez        $a0, L_8020CE74
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8020B550: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020CE74;
    }
    // 0x8020B550: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020B554: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020B558: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8020B55C: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x8020B560: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020B564: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8020B568: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8020B56C: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020B570: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8020B574: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8020B578: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8020B57C: lwc1        $f8, 0xCC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x8020B580: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020B584: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8020B588: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x8020B58C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020B590: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
    // 0x8020B594: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8020B598: sub.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x8020B59C: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x8020B5A0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8020B5A4: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
L_8020B5A8:
    // 0x8020B5A8: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8020B5AC: addiu       $t3, $sp, 0xAC
    ctx->r11 = ADD32(ctx->r29, 0XAC);
    // 0x8020B5B0: addiu       $t4, $sp, 0xA8
    ctx->r12 = ADD32(ctx->r29, 0XA8);
    // 0x8020B5B4: andi        $t1, $v0, 0x3E
    ctx->r9 = ctx->r2 & 0X3E;
    // 0x8020B5B8: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8020B5BC: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8020B5C0: andi        $t6, $v0, 0xF800
    ctx->r14 = ctx->r2 & 0XF800;
    // 0x8020B5C4: sra         $t7, $t6, 11
    ctx->r15 = S32(SIGNED(ctx->r14) >> 11);
    // 0x8020B5C8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020B5CC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8020B5D0: andi        $t8, $v0, 0x7C0
    ctx->r24 = ctx->r2 & 0X7C0;
    // 0x8020B5D4: sra         $t9, $t8, 6
    ctx->r25 = S32(SIGNED(ctx->r24) >> 6);
    // 0x8020B5D8: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8020B5DC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020B5E0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8020B5E4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8020B5E8: sw          $t0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r8;
    // 0x8020B5EC: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x8020B5F0: div.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
    // 0x8020B5F4: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x8020B5F8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020B5FC: div.s       $f14, $f18, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = DIV_S(ctx->f18.fl, ctx->f22.fl);
    // 0x8020B600: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8020B604: jal         0x80209914
    // 0x8020B608: div.s       $f12, $f10, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f22.fl);
    func_80209914(rdram, ctx);
        goto after_0;
    // 0x8020B608: div.s       $f12, $f10, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f22.fl);
    after_0:
    // 0x8020B60C: lwc1        $f18, 0xA8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8020B610: lwc1        $f16, 0xD4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8020B614: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8020B618: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020B61C: lwc1        $f8, 0xD8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8020B620: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x8020B624: mul.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8020B628: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8020B62C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8020B630: mul.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8020B634: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8020B638: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x8020B63C: addiu       $t5, $sp, 0x7C
    ctx->r13 = ADD32(ctx->r29, 0X7C);
    // 0x8020B640: addiu       $t6, $sp, 0x78
    ctx->r14 = ADD32(ctx->r29, 0X78);
    // 0x8020B644: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8020B648: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8020B64C: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    // 0x8020B650: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8020B654: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8020B658: jal         0x802096F4
    // 0x8020B65C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_802096F4(rdram, ctx);
        goto after_1;
    // 0x8020B65C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_1:
    // 0x8020B660: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8020B664: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8020B668: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8020B66C: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x8020B670: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    // 0x8020B674: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8020B678: mul.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x8020B67C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020B680: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8020B684: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x8020B688: swc1        $f16, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f16.u32l;
    // 0x8020B68C: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    // 0x8020B690: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020B694: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x8020B698: lhu         $t7, -0x2($s0)
    ctx->r15 = MEM_HU(ctx->r16, -0X2);
    // 0x8020B69C: trunc.w.s   $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8020B6A0: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8020B6A4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8020B6A8: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8020B6AC: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x8020B6B0: sll         $t2, $t1, 11
    ctx->r10 = S32(ctx->r9 << 11);
    // 0x8020B6B4: or          $t3, $t8, $t2
    ctx->r11 = ctx->r24 | ctx->r10;
    // 0x8020B6B8: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x8020B6BC: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x8020B6C0: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x8020B6C4: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x8020B6C8: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x8020B6CC: bne         $t0, $a0, L_8020B5A8
    if (ctx->r8 != ctx->r4) {
        // 0x8020B6D0: sh          $t2, -0x2($s0)
        MEM_H(-0X2, ctx->r16) = ctx->r10;
            goto L_8020B5A8;
    }
    // 0x8020B6D0: sh          $t2, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r10;
    // 0x8020B6D4: b           L_8020CE78
    // 0x8020B6D8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8020CE78;
    // 0x8020B6D8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020B6DC:
    // 0x8020B6DC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020B6E0: beq         $a1, $at, L_8020B700
    if (ctx->r5 == ctx->r1) {
        // 0x8020B6E4: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8020B700;
    }
    // 0x8020B6E4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8020B6E8: beq         $a1, $at, L_8020BBEC
    if (ctx->r5 == ctx->r1) {
        // 0x8020B6EC: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8020BBEC;
    }
    // 0x8020B6EC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8020B6F0: beq         $a1, $at, L_8020BEBC
    if (ctx->r5 == ctx->r1) {
        // 0x8020B6F4: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8020BEBC;
    }
    // 0x8020B6F4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020B6F8: b           L_8020CE78
    // 0x8020B6FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8020CE78;
    // 0x8020B6FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020B700:
    // 0x8020B700: blez        $s0, L_8020CE74
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8020B704: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8020CE74;
    }
    // 0x8020B704: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020B708: andi        $a1, $s0, 0x3
    ctx->r5 = ctx->r16 & 0X3;
    // 0x8020B70C: beq         $a1, $zero, L_8020B844
    if (ctx->r5 == 0) {
        // 0x8020B710: lwc1        $f20, 0xDC($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
            goto L_8020B844;
    }
    // 0x8020B710: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020B714: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020B718: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020B71C: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020B720: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x8020B724: sub.s       $f10, $f16, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x8020B728: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020B72C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8020B730: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8020B734: mul.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8020B738: lwc1        $f12, 0x84($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8020B73C: mul.s       $f2, $f18, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x8020B740: nop

    // 0x8020B744: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020B748: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020B74C: andi        $t4, $v1, 0xE
    ctx->r12 = ctx->r3 & 0XE;
    // 0x8020B750: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020B754: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8020B758: nop

    // 0x8020B75C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020B760: mul.s       $f22, $f20, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020B764: beql        $a0, $t0, L_8020B7EC
    if (ctx->r4 == ctx->r8) {
        // 0x8020B768: add.s       $f18, $f22, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
            goto L_8020B7EC;
    }
    goto skip_0;
    // 0x8020B768: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
    skip_0:
    // 0x8020B76C: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
L_8020B770:
    // 0x8020B770: andi        $t3, $v1, 0xF1
    ctx->r11 = ctx->r3 & 0XF1;
    // 0x8020B774: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020B778: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020B77C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020B780: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020B784: nop

    // 0x8020B788: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x8020B78C: or          $v1, $t3, $t1
    ctx->r3 = ctx->r11 | ctx->r9;
    // 0x8020B790: andi        $t8, $v1, 0xE0
    ctx->r24 = ctx->r3 & 0XE0;
    // 0x8020B794: sra         $t2, $t8, 5
    ctx->r10 = S32(SIGNED(ctx->r24) >> 5);
    // 0x8020B798: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x8020B79C: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x8020B7A0: andi        $t4, $v1, 0x1F
    ctx->r12 = ctx->r3 & 0X1F;
    // 0x8020B7A4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020B7A8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020B7AC: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020B7B0: add.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x8020B7B4: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020B7B8: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x8020B7BC: nop

    // 0x8020B7C0: sll         $t9, $t6, 5
    ctx->r25 = S32(ctx->r14 << 5);
    // 0x8020B7C4: or          $t3, $t4, $t9
    ctx->r11 = ctx->r12 | ctx->r25;
    // 0x8020B7C8: andi        $t4, $v1, 0xE
    ctx->r12 = ctx->r3 & 0XE;
    // 0x8020B7CC: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020B7D0: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8020B7D4: sb          $t3, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r11;
    // 0x8020B7D8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020B7DC: mul.s       $f22, $f20, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020B7E0: bnel        $a0, $t0, L_8020B770
    if (ctx->r4 != ctx->r8) {
        // 0x8020B7E4: add.s       $f18, $f22, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
            goto L_8020B770;
    }
    goto skip_1;
    // 0x8020B7E4: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
    skip_1:
    // 0x8020B7E8: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
L_8020B7EC:
    // 0x8020B7EC: andi        $t3, $v1, 0xF1
    ctx->r11 = ctx->r3 & 0XF1;
    // 0x8020B7F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020B7F4: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020B7F8: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020B7FC: nop

    // 0x8020B800: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x8020B804: or          $v1, $t3, $t1
    ctx->r3 = ctx->r11 | ctx->r9;
    // 0x8020B808: andi        $t8, $v1, 0xE0
    ctx->r24 = ctx->r3 & 0XE0;
    // 0x8020B80C: sra         $t2, $t8, 5
    ctx->r10 = S32(SIGNED(ctx->r24) >> 5);
    // 0x8020B810: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x8020B814: andi        $t4, $v1, 0x1F
    ctx->r12 = ctx->r3 & 0X1F;
    // 0x8020B818: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x8020B81C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020B820: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020B824: add.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x8020B828: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020B82C: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x8020B830: nop

    // 0x8020B834: sll         $t9, $t6, 5
    ctx->r25 = S32(ctx->r14 << 5);
    // 0x8020B838: or          $t3, $t4, $t9
    ctx->r11 = ctx->r12 | ctx->r25;
    // 0x8020B83C: sb          $t3, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r11;
    // 0x8020B840: beq         $t0, $s0, L_8020CE74
    if (ctx->r8 == ctx->r16) {
        // 0x8020B844: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020CE74;
    }
L_8020B844:
    // 0x8020B844: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020B848: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020B84C: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020B850: lwc1        $f18, 0xD0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020B854: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x8020B858: sub.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x8020B85C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020B860: lwc1        $f12, 0x84($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8020B864: addu        $v0, $s1, $t0
    ctx->r2 = ADD32(ctx->r17, ctx->r8);
    // 0x8020B868: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8020B86C: nop

    // 0x8020B870: mul.s       $f2, $f8, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8020B874: nop

    // 0x8020B878: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020B87C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020B880: andi        $t1, $v1, 0xE
    ctx->r9 = ctx->r3 & 0XE;
    // 0x8020B884: beq         $t0, $s0, L_8020BA3C
    if (ctx->r8 == ctx->r16) {
        // 0x8020B888: sra         $t7, $t1, 1
        ctx->r15 = S32(SIGNED(ctx->r9) >> 1);
            goto L_8020BA3C;
    }
    // 0x8020B888: sra         $t7, $t1, 1
    ctx->r15 = S32(SIGNED(ctx->r9) >> 1);
L_8020B88C:
    // 0x8020B88C: mtc1        $t7, $f22
    ctx->f22.u32l = ctx->r15;
    // 0x8020B890: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020B894: andi        $t8, $v1, 0xF1
    ctx->r24 = ctx->r3 & 0XF1;
    // 0x8020B898: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020B89C: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020B8A0: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020B8A4: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020B8A8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020B8AC: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020B8B0: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020B8B4: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020B8B8: mfc1        $t5, $f22
    ctx->r13 = (int32_t)ctx->f22.u32l;
    // 0x8020B8BC: nop

    // 0x8020B8C0: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8020B8C4: or          $v1, $t8, $t6
    ctx->r3 = ctx->r24 | ctx->r14;
    // 0x8020B8C8: andi        $t9, $v1, 0xE0
    ctx->r25 = ctx->r3 & 0XE0;
    // 0x8020B8CC: sra         $t3, $t9, 5
    ctx->r11 = S32(SIGNED(ctx->r25) >> 5);
    // 0x8020B8D0: mtc1        $t3, $f22
    ctx->f22.u32l = ctx->r11;
    // 0x8020B8D4: sb          $v1, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r3;
    // 0x8020B8D8: andi        $t1, $v1, 0x1F
    ctx->r9 = ctx->r3 & 0X1F;
    // 0x8020B8DC: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020B8E0: andi        $t6, $a0, 0xE
    ctx->r14 = ctx->r4 & 0XE;
    // 0x8020B8E4: sra         $t4, $t6, 1
    ctx->r12 = S32(SIGNED(ctx->r14) >> 1);
    // 0x8020B8E8: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8020B8EC: andi        $t9, $a0, 0xF1
    ctx->r25 = ctx->r4 & 0XF1;
    // 0x8020B8F0: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020B8F4: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020B8F8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020B8FC: add.s       $f22, $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f12.fl;
    // 0x8020B900: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020B904: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020B908: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020B90C: mfc1        $t2, $f22
    ctx->r10 = (int32_t)ctx->f22.u32l;
    // 0x8020B910: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020B914: sll         $t5, $t2, 5
    ctx->r13 = S32(ctx->r10 << 5);
    // 0x8020B918: or          $t8, $t1, $t5
    ctx->r24 = ctx->r9 | ctx->r13;
    // 0x8020B91C: sb          $t8, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r24;
    // 0x8020B920: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8020B924: nop

    // 0x8020B928: sll         $t2, $t7, 1
    ctx->r10 = S32(ctx->r15 << 1);
    // 0x8020B92C: or          $a0, $t9, $t2
    ctx->r4 = ctx->r25 | ctx->r10;
    // 0x8020B930: andi        $t5, $a0, 0xE0
    ctx->r13 = ctx->r4 & 0XE0;
    // 0x8020B934: sra         $t8, $t5, 5
    ctx->r24 = S32(SIGNED(ctx->r13) >> 5);
    // 0x8020B938: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x8020B93C: sb          $a0, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r4;
    // 0x8020B940: andi        $t2, $a1, 0xE
    ctx->r10 = ctx->r5 & 0XE;
    // 0x8020B944: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020B948: sra         $t1, $t2, 1
    ctx->r9 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8020B94C: mtc1        $t1, $f22
    ctx->f22.u32l = ctx->r9;
    // 0x8020B950: andi        $t6, $a0, 0x1F
    ctx->r14 = ctx->r4 & 0X1F;
    // 0x8020B954: andi        $t5, $a1, 0xF1
    ctx->r13 = ctx->r5 & 0XF1;
    // 0x8020B958: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020B95C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020B960: add.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x8020B964: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020B968: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020B96C: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020B970: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x8020B974: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020B978: sll         $t7, $t3, 5
    ctx->r15 = S32(ctx->r11 << 5);
    // 0x8020B97C: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x8020B980: sb          $t9, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r25;
    // 0x8020B984: mfc1        $t4, $f22
    ctx->r12 = (int32_t)ctx->f22.u32l;
    // 0x8020B988: nop

    // 0x8020B98C: sll         $t3, $t4, 1
    ctx->r11 = S32(ctx->r12 << 1);
    // 0x8020B990: or          $a1, $t5, $t3
    ctx->r5 = ctx->r13 | ctx->r11;
    // 0x8020B994: andi        $t7, $a1, 0xE0
    ctx->r15 = ctx->r5 & 0XE0;
    // 0x8020B998: sra         $t9, $t7, 5
    ctx->r25 = S32(SIGNED(ctx->r15) >> 5);
    // 0x8020B99C: mtc1        $t9, $f22
    ctx->f22.u32l = ctx->r25;
    // 0x8020B9A0: andi        $t3, $a2, 0xE
    ctx->r11 = ctx->r6 & 0XE;
    // 0x8020B9A4: sra         $t6, $t3, 1
    ctx->r14 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8020B9A8: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020B9AC: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x8020B9B0: sb          $a1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r5;
    // 0x8020B9B4: andi        $t2, $a1, 0x1F
    ctx->r10 = ctx->r5 & 0X1F;
    // 0x8020B9B8: andi        $t7, $a2, 0xF1
    ctx->r15 = ctx->r6 & 0XF1;
    // 0x8020B9BC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020B9C0: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020B9C4: add.s       $f22, $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f12.fl;
    // 0x8020B9C8: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020B9CC: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020B9D0: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020B9D4: mfc1        $t8, $f22
    ctx->r24 = (int32_t)ctx->f22.u32l;
    // 0x8020B9D8: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020B9DC: sll         $t4, $t8, 5
    ctx->r12 = S32(ctx->r24 << 5);
    // 0x8020B9E0: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8020B9E4: sb          $t5, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r13;
    // 0x8020B9E8: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020B9EC: nop

    // 0x8020B9F0: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x8020B9F4: or          $a2, $t7, $t8
    ctx->r6 = ctx->r15 | ctx->r24;
    // 0x8020B9F8: andi        $t4, $a2, 0xE0
    ctx->r12 = ctx->r6 & 0XE0;
    // 0x8020B9FC: sra         $t5, $t4, 5
    ctx->r13 = S32(SIGNED(ctx->r12) >> 5);
    // 0x8020BA00: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8020BA04: andi        $t3, $a2, 0x1F
    ctx->r11 = ctx->r6 & 0X1F;
    // 0x8020BA08: sb          $a2, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r6;
    // 0x8020BA0C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020BA10: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020BA14: add.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x8020BA18: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BA1C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020BA20: nop

    // 0x8020BA24: sll         $t1, $t9, 5
    ctx->r9 = S32(ctx->r25 << 5);
    // 0x8020BA28: or          $t7, $t3, $t1
    ctx->r15 = ctx->r11 | ctx->r9;
    // 0x8020BA2C: sb          $t7, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r15;
    // 0x8020BA30: andi        $t1, $v1, 0xE
    ctx->r9 = ctx->r3 & 0XE;
    // 0x8020BA34: bne         $t0, $s0, L_8020B88C
    if (ctx->r8 != ctx->r16) {
        // 0x8020BA38: sra         $t7, $t1, 1
        ctx->r15 = S32(SIGNED(ctx->r9) >> 1);
            goto L_8020B88C;
    }
    // 0x8020BA38: sra         $t7, $t1, 1
    ctx->r15 = S32(SIGNED(ctx->r9) >> 1);
L_8020BA3C:
    // 0x8020BA3C: mtc1        $t7, $f22
    ctx->f22.u32l = ctx->r15;
    // 0x8020BA40: andi        $t8, $v1, 0xF1
    ctx->r24 = ctx->r3 & 0XF1;
    // 0x8020BA44: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020BA48: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020BA4C: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020BA50: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020BA54: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020BA58: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020BA5C: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020BA60: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020BA64: mfc1        $t5, $f22
    ctx->r13 = (int32_t)ctx->f22.u32l;
    // 0x8020BA68: nop

    // 0x8020BA6C: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8020BA70: or          $v1, $t8, $t6
    ctx->r3 = ctx->r24 | ctx->r14;
    // 0x8020BA74: andi        $t9, $v1, 0xE0
    ctx->r25 = ctx->r3 & 0XE0;
    // 0x8020BA78: sra         $t3, $t9, 5
    ctx->r11 = S32(SIGNED(ctx->r25) >> 5);
    // 0x8020BA7C: mtc1        $t3, $f22
    ctx->f22.u32l = ctx->r11;
    // 0x8020BA80: andi        $t6, $a0, 0xE
    ctx->r14 = ctx->r4 & 0XE;
    // 0x8020BA84: sra         $t4, $t6, 1
    ctx->r12 = S32(SIGNED(ctx->r14) >> 1);
    // 0x8020BA88: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020BA8C: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8020BA90: andi        $t1, $v1, 0x1F
    ctx->r9 = ctx->r3 & 0X1F;
    // 0x8020BA94: andi        $t9, $a0, 0xF1
    ctx->r25 = ctx->r4 & 0XF1;
    // 0x8020BA98: sb          $v1, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r3;
    // 0x8020BA9C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020BAA0: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020BAA4: nop

    // 0x8020BAA8: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020BAAC: add.s       $f22, $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f12.fl;
    // 0x8020BAB0: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020BAB4: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020BAB8: mfc1        $t2, $f22
    ctx->r10 = (int32_t)ctx->f22.u32l;
    // 0x8020BABC: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BAC0: sll         $t5, $t2, 5
    ctx->r13 = S32(ctx->r10 << 5);
    // 0x8020BAC4: or          $t8, $t1, $t5
    ctx->r24 = ctx->r9 | ctx->r13;
    // 0x8020BAC8: sb          $t8, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r24;
    // 0x8020BACC: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8020BAD0: nop

    // 0x8020BAD4: sll         $t2, $t7, 1
    ctx->r10 = S32(ctx->r15 << 1);
    // 0x8020BAD8: or          $a0, $t9, $t2
    ctx->r4 = ctx->r25 | ctx->r10;
    // 0x8020BADC: andi        $t5, $a0, 0xE0
    ctx->r13 = ctx->r4 & 0XE0;
    // 0x8020BAE0: sra         $t8, $t5, 5
    ctx->r24 = S32(SIGNED(ctx->r13) >> 5);
    // 0x8020BAE4: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x8020BAE8: andi        $t2, $a1, 0xE
    ctx->r10 = ctx->r5 & 0XE;
    // 0x8020BAEC: sra         $t1, $t2, 1
    ctx->r9 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8020BAF0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020BAF4: mtc1        $t1, $f22
    ctx->f22.u32l = ctx->r9;
    // 0x8020BAF8: andi        $t6, $a0, 0x1F
    ctx->r14 = ctx->r4 & 0X1F;
    // 0x8020BAFC: andi        $t5, $a1, 0xF1
    ctx->r13 = ctx->r5 & 0XF1;
    // 0x8020BB00: sb          $a0, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r4;
    // 0x8020BB04: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020BB08: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020BB0C: nop

    // 0x8020BB10: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020BB14: add.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x8020BB18: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BB1C: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020BB20: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x8020BB24: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020BB28: sll         $t7, $t3, 5
    ctx->r15 = S32(ctx->r11 << 5);
    // 0x8020BB2C: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x8020BB30: sb          $t9, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r25;
    // 0x8020BB34: mfc1        $t4, $f22
    ctx->r12 = (int32_t)ctx->f22.u32l;
    // 0x8020BB38: nop

    // 0x8020BB3C: sll         $t3, $t4, 1
    ctx->r11 = S32(ctx->r12 << 1);
    // 0x8020BB40: or          $a1, $t5, $t3
    ctx->r5 = ctx->r13 | ctx->r11;
    // 0x8020BB44: andi        $t7, $a1, 0xE0
    ctx->r15 = ctx->r5 & 0XE0;
    // 0x8020BB48: sra         $t9, $t7, 5
    ctx->r25 = S32(SIGNED(ctx->r15) >> 5);
    // 0x8020BB4C: mtc1        $t9, $f22
    ctx->f22.u32l = ctx->r25;
    // 0x8020BB50: andi        $t3, $a2, 0xE
    ctx->r11 = ctx->r6 & 0XE;
    // 0x8020BB54: sra         $t6, $t3, 1
    ctx->r14 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8020BB58: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020BB5C: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x8020BB60: andi        $t2, $a1, 0x1F
    ctx->r10 = ctx->r5 & 0X1F;
    // 0x8020BB64: andi        $t7, $a2, 0xF1
    ctx->r15 = ctx->r6 & 0XF1;
    // 0x8020BB68: sb          $a1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r5;
    // 0x8020BB6C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020BB70: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020BB74: nop

    // 0x8020BB78: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020BB7C: add.s       $f22, $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f12.fl;
    // 0x8020BB80: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020BB84: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020BB88: mfc1        $t8, $f22
    ctx->r24 = (int32_t)ctx->f22.u32l;
    // 0x8020BB8C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BB90: sll         $t4, $t8, 5
    ctx->r12 = S32(ctx->r24 << 5);
    // 0x8020BB94: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8020BB98: sb          $t5, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r13;
    // 0x8020BB9C: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020BBA0: nop

    // 0x8020BBA4: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x8020BBA8: or          $a2, $t7, $t8
    ctx->r6 = ctx->r15 | ctx->r24;
    // 0x8020BBAC: andi        $t4, $a2, 0xE0
    ctx->r12 = ctx->r6 & 0XE0;
    // 0x8020BBB0: sra         $t5, $t4, 5
    ctx->r13 = S32(SIGNED(ctx->r12) >> 5);
    // 0x8020BBB4: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8020BBB8: andi        $t3, $a2, 0x1F
    ctx->r11 = ctx->r6 & 0X1F;
    // 0x8020BBBC: sb          $a2, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r6;
    // 0x8020BBC0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020BBC4: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020BBC8: add.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x8020BBCC: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BBD0: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020BBD4: nop

    // 0x8020BBD8: sll         $t1, $t9, 5
    ctx->r9 = S32(ctx->r25 << 5);
    // 0x8020BBDC: or          $t7, $t3, $t1
    ctx->r15 = ctx->r11 | ctx->r9;
    // 0x8020BBE0: sb          $t7, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r15;
    // 0x8020BBE4: b           L_8020CE78
    // 0x8020BBE8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8020CE78;
    // 0x8020BBE8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020BBEC:
    // 0x8020BBEC: blez        $s0, L_8020CE74
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8020BBF0: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8020CE74;
    }
    // 0x8020BBF0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020BBF4: andi        $a1, $s0, 0x3
    ctx->r5 = ctx->r16 & 0X3;
    // 0x8020BBF8: beq         $a1, $zero, L_8020BCC4
    if (ctx->r5 == 0) {
        // 0x8020BBFC: lwc1        $f20, 0xDC($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
            goto L_8020BCC4;
    }
    // 0x8020BBFC: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020BC00: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020BC04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020BC08: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020BC0C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8020BC10: sub.s       $f18, $f4, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x8020BC14: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020BC18: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8020BC1C: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8020BC20: mul.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x8020BC24: nop

    // 0x8020BC28: mul.s       $f2, $f6, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8020BC2C: nop

    // 0x8020BC30: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020BC34: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020BC38: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020BC3C: sra         $t2, $t8, 4
    ctx->r10 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020BC40: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8020BC44: nop

    // 0x8020BC48: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020BC4C: mul.s       $f22, $f20, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020BC50: beql        $a0, $t0, L_8020BCA0
    if (ctx->r4 == ctx->r8) {
        // 0x8020BC54: add.s       $f18, $f22, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
            goto L_8020BCA0;
    }
    goto skip_2;
    // 0x8020BC54: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
    skip_2:
    // 0x8020BC58: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
L_8020BC5C:
    // 0x8020BC5C: andi        $t4, $v1, 0xF
    ctx->r12 = ctx->r3 & 0XF;
    // 0x8020BC60: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x8020BC64: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020BC68: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BC6C: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020BC70: sra         $t2, $t8, 4
    ctx->r10 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020BC74: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8020BC78: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020BC7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020BC80: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020BC84: sll         $t3, $t9, 4
    ctx->r11 = S32(ctx->r25 << 4);
    // 0x8020BC88: or          $t1, $t4, $t3
    ctx->r9 = ctx->r12 | ctx->r11;
    // 0x8020BC8C: sb          $t1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r9;
    // 0x8020BC90: mul.s       $f22, $f20, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020BC94: bnel        $a0, $t0, L_8020BC5C
    if (ctx->r4 != ctx->r8) {
        // 0x8020BC98: add.s       $f18, $f22, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
            goto L_8020BC5C;
    }
    goto skip_3;
    // 0x8020BC98: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
    skip_3:
    // 0x8020BC9C: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
L_8020BCA0:
    // 0x8020BCA0: andi        $t4, $v1, 0xF
    ctx->r12 = ctx->r3 & 0XF;
    // 0x8020BCA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020BCA8: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BCAC: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020BCB0: nop

    // 0x8020BCB4: sll         $t3, $t9, 4
    ctx->r11 = S32(ctx->r25 << 4);
    // 0x8020BCB8: or          $t1, $t4, $t3
    ctx->r9 = ctx->r12 | ctx->r11;
    // 0x8020BCBC: sb          $t1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r9;
    // 0x8020BCC0: beq         $t0, $s0, L_8020CE74
    if (ctx->r8 == ctx->r16) {
        // 0x8020BCC4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020CE74;
    }
L_8020BCC4:
    // 0x8020BCC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020BCC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020BCCC: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020BCD0: lwc1        $f10, 0xD0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020BCD4: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8020BCD8: sub.s       $f16, $f6, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x8020BCDC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020BCE0: addu        $v0, $s1, $t0
    ctx->r2 = ADD32(ctx->r17, ctx->r8);
    // 0x8020BCE4: mul.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8020BCE8: nop

    // 0x8020BCEC: mul.s       $f2, $f4, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8020BCF0: nop

    // 0x8020BCF4: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020BCF8: beq         $t0, $s0, L_8020BDE0
    if (ctx->r8 == ctx->r16) {
        // 0x8020BCFC: lbu         $v1, 0x0($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X0);
            goto L_8020BDE0;
    }
    // 0x8020BCFC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
L_8020BD00:
    // 0x8020BD00: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020BD04: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020BD08: andi        $t7, $v1, 0xF0
    ctx->r15 = ctx->r3 & 0XF0;
    // 0x8020BD0C: sra         $t8, $t7, 4
    ctx->r24 = S32(SIGNED(ctx->r15) >> 4);
    // 0x8020BD10: mtc1        $t8, $f22
    ctx->f22.u32l = ctx->r24;
    // 0x8020BD14: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020BD18: andi        $t1, $a0, 0xF0
    ctx->r9 = ctx->r4 & 0XF0;
    // 0x8020BD1C: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020BD20: sra         $t7, $t1, 4
    ctx->r15 = S32(SIGNED(ctx->r9) >> 4);
    // 0x8020BD24: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x8020BD28: andi        $t2, $v1, 0xF
    ctx->r10 = ctx->r3 & 0XF;
    // 0x8020BD2C: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x8020BD30: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020BD34: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020BD38: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x8020BD3C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020BD40: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020BD44: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020BD48: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020BD4C: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020BD50: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020BD54: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020BD58: mfc1        $t9, $f22
    ctx->r25 = (int32_t)ctx->f22.u32l;
    // 0x8020BD5C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BD60: sll         $t4, $t9, 4
    ctx->r12 = S32(ctx->r25 << 4);
    // 0x8020BD64: or          $t3, $t2, $t4
    ctx->r11 = ctx->r10 | ctx->r12;
    // 0x8020BD68: sb          $t3, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r11;
    // 0x8020BD6C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020BD70: andi        $t3, $a1, 0xF0
    ctx->r11 = ctx->r5 & 0XF0;
    // 0x8020BD74: sra         $t1, $t3, 4
    ctx->r9 = S32(SIGNED(ctx->r11) >> 4);
    // 0x8020BD78: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8020BD7C: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x8020BD80: or          $t4, $t8, $t2
    ctx->r12 = ctx->r24 | ctx->r10;
    // 0x8020BD84: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020BD88: sb          $t4, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r12;
    // 0x8020BD8C: andi        $t4, $a2, 0xF0
    ctx->r12 = ctx->r6 & 0XF0;
    // 0x8020BD90: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020BD94: mtc1        $t3, $f22
    ctx->f22.u32l = ctx->r11;
    // 0x8020BD98: andi        $t1, $a2, 0xF
    ctx->r9 = ctx->r6 & 0XF;
    // 0x8020BD9C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020BDA0: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020BDA4: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020BDA8: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020BDAC: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BDB0: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020BDB4: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020BDB8: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020BDBC: sll         $t8, $t9, 4
    ctx->r24 = S32(ctx->r25 << 4);
    // 0x8020BDC0: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x8020BDC4: sb          $t2, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r10;
    // 0x8020BDC8: mfc1        $t9, $f22
    ctx->r25 = (int32_t)ctx->f22.u32l;
    // 0x8020BDCC: nop

    // 0x8020BDD0: sll         $t7, $t9, 4
    ctx->r15 = S32(ctx->r25 << 4);
    // 0x8020BDD4: or          $t8, $t1, $t7
    ctx->r24 = ctx->r9 | ctx->r15;
    // 0x8020BDD8: bne         $t0, $s0, L_8020BD00
    if (ctx->r8 != ctx->r16) {
        // 0x8020BDDC: sb          $t8, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r24;
            goto L_8020BD00;
    }
    // 0x8020BDDC: sb          $t8, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r24;
L_8020BDE0:
    // 0x8020BDE0: andi        $t7, $v1, 0xF0
    ctx->r15 = ctx->r3 & 0XF0;
    // 0x8020BDE4: sra         $t8, $t7, 4
    ctx->r24 = S32(SIGNED(ctx->r15) >> 4);
    // 0x8020BDE8: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020BDEC: mtc1        $t8, $f22
    ctx->f22.u32l = ctx->r24;
    // 0x8020BDF0: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020BDF4: andi        $t1, $a0, 0xF0
    ctx->r9 = ctx->r4 & 0XF0;
    // 0x8020BDF8: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020BDFC: sra         $t7, $t1, 4
    ctx->r15 = S32(SIGNED(ctx->r9) >> 4);
    // 0x8020BE00: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x8020BE04: andi        $t2, $v1, 0xF
    ctx->r10 = ctx->r3 & 0XF;
    // 0x8020BE08: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020BE0C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020BE10: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020BE14: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x8020BE18: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x8020BE1C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020BE20: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020BE24: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020BE28: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020BE2C: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020BE30: mfc1        $t9, $f22
    ctx->r25 = (int32_t)ctx->f22.u32l;
    // 0x8020BE34: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BE38: sll         $t4, $t9, 4
    ctx->r12 = S32(ctx->r25 << 4);
    // 0x8020BE3C: or          $t3, $t2, $t4
    ctx->r11 = ctx->r10 | ctx->r12;
    // 0x8020BE40: sb          $t3, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r11;
    // 0x8020BE44: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020BE48: andi        $t3, $a1, 0xF0
    ctx->r11 = ctx->r5 & 0XF0;
    // 0x8020BE4C: sra         $t1, $t3, 4
    ctx->r9 = S32(SIGNED(ctx->r11) >> 4);
    // 0x8020BE50: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x8020BE54: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8020BE58: or          $t4, $t8, $t2
    ctx->r12 = ctx->r24 | ctx->r10;
    // 0x8020BE5C: sb          $t4, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r12;
    // 0x8020BE60: andi        $t4, $a2, 0xF0
    ctx->r12 = ctx->r6 & 0XF0;
    // 0x8020BE64: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020BE68: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020BE6C: mtc1        $t3, $f22
    ctx->f22.u32l = ctx->r11;
    // 0x8020BE70: andi        $t1, $a2, 0xF
    ctx->r9 = ctx->r6 & 0XF;
    // 0x8020BE74: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020BE78: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020BE7C: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020BE80: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020BE84: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BE88: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020BE8C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020BE90: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020BE94: sll         $t8, $t9, 4
    ctx->r24 = S32(ctx->r25 << 4);
    // 0x8020BE98: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x8020BE9C: sb          $t2, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r10;
    // 0x8020BEA0: mfc1        $t9, $f22
    ctx->r25 = (int32_t)ctx->f22.u32l;
    // 0x8020BEA4: nop

    // 0x8020BEA8: sll         $t7, $t9, 4
    ctx->r15 = S32(ctx->r25 << 4);
    // 0x8020BEAC: or          $t8, $t1, $t7
    ctx->r24 = ctx->r9 | ctx->r15;
    // 0x8020BEB0: sb          $t8, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r24;
    // 0x8020BEB4: b           L_8020CE78
    // 0x8020BEB8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8020CE78;
    // 0x8020BEB8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020BEBC:
    // 0x8020BEBC: bgez        $s0, L_8020BECC
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8020BEC0: sra         $a0, $s0, 1
        ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
            goto L_8020BECC;
    }
    // 0x8020BEC0: sra         $a0, $s0, 1
    ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
    // 0x8020BEC4: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x8020BEC8: sra         $a0, $at, 1
    ctx->r4 = S32(SIGNED(ctx->r1) >> 1);
L_8020BECC:
    // 0x8020BECC: blez        $a0, L_8020CE74
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8020BED0: andi        $a1, $a0, 0x3
        ctx->r5 = ctx->r4 & 0X3;
            goto L_8020CE74;
    }
    // 0x8020BED0: andi        $a1, $a0, 0x3
    ctx->r5 = ctx->r4 & 0X3;
    // 0x8020BED4: beq         $a1, $zero, L_8020BFA0
    if (ctx->r5 == 0) {
        // 0x8020BED8: lwc1        $f20, 0xDC($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
            goto L_8020BFA0;
    }
    // 0x8020BED8: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020BEDC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020BEE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020BEE4: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020BEE8: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8020BEEC: sub.s       $f18, $f4, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x8020BEF0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020BEF4: sll         $t2, $t0, 1
    ctx->r10 = S32(ctx->r8 << 1);
    // 0x8020BEF8: addu        $s0, $s1, $t2
    ctx->r16 = ADD32(ctx->r17, ctx->r10);
    // 0x8020BEFC: mul.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x8020BF00: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020BF04: mul.s       $f2, $f6, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8020BF08: nop

    // 0x8020BF0C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8020BF10: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020BF14: andi        $t4, $v0, 0xFF00
    ctx->r12 = ctx->r2 & 0XFF00;
    // 0x8020BF18: sra         $t3, $t4, 8
    ctx->r11 = S32(SIGNED(ctx->r12) >> 8);
    // 0x8020BF1C: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8020BF20: nop

    // 0x8020BF24: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020BF28: mul.s       $f22, $f20, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020BF2C: beql        $v1, $t0, L_8020BF7C
    if (ctx->r3 == ctx->r8) {
        // 0x8020BF30: add.s       $f18, $f22, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
            goto L_8020BF7C;
    }
    goto skip_4;
    // 0x8020BF30: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
    skip_4:
    // 0x8020BF34: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
L_8020BF38:
    // 0x8020BF38: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x8020BF3C: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x8020BF40: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020BF44: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BF48: andi        $t4, $v0, 0xFF00
    ctx->r12 = ctx->r2 & 0XFF00;
    // 0x8020BF4C: sra         $t3, $t4, 8
    ctx->r11 = S32(SIGNED(ctx->r12) >> 8);
    // 0x8020BF50: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8020BF54: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020BF58: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8020BF5C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020BF60: sll         $t7, $t1, 8
    ctx->r15 = S32(ctx->r9 << 8);
    // 0x8020BF64: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x8020BF68: sh          $t8, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r24;
    // 0x8020BF6C: mul.s       $f22, $f20, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020BF70: bnel        $v1, $t0, L_8020BF38
    if (ctx->r3 != ctx->r8) {
        // 0x8020BF74: add.s       $f18, $f22, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
            goto L_8020BF38;
    }
    goto skip_5;
    // 0x8020BF74: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
    skip_5:
    // 0x8020BF78: add.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f22.fl + ctx->f2.fl;
L_8020BF7C:
    // 0x8020BF7C: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x8020BF80: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8020BF84: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020BF88: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020BF8C: nop

    // 0x8020BF90: sll         $t7, $t1, 8
    ctx->r15 = S32(ctx->r9 << 8);
    // 0x8020BF94: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x8020BF98: sh          $t8, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r24;
    // 0x8020BF9C: beq         $t0, $a0, L_8020CE74
    if (ctx->r8 == ctx->r4) {
        // 0x8020BFA0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020CE74;
    }
L_8020BFA0:
    // 0x8020BFA0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020BFA4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020BFA8: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020BFAC: lwc1        $f10, 0xD0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020BFB0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8020BFB4: sub.s       $f16, $f6, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x8020BFB8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020BFBC: sll         $t2, $a0, 1
    ctx->r10 = S32(ctx->r4 << 1);
    // 0x8020BFC0: sll         $t4, $t0, 1
    ctx->r12 = S32(ctx->r8 << 1);
    // 0x8020BFC4: mul.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8020BFC8: addu        $s0, $s1, $t4
    ctx->r16 = ADD32(ctx->r17, ctx->r12);
    // 0x8020BFCC: addu        $a2, $t2, $s1
    ctx->r6 = ADD32(ctx->r10, ctx->r17);
    // 0x8020BFD0: mul.s       $f2, $f4, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8020BFD4: nop

    // 0x8020BFD8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8020BFDC: beq         $s0, $a2, L_8020C0C0
    if (ctx->r16 == ctx->r6) {
        // 0x8020BFE0: lhu         $v0, -0x8($s0)
        ctx->r2 = MEM_HU(ctx->r16, -0X8);
            goto L_8020C0C0;
    }
    // 0x8020BFE0: lhu         $v0, -0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X8);
L_8020BFE4:
    // 0x8020BFE4: lhu         $v1, -0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, -0X6);
    // 0x8020BFE8: lhu         $a0, -0x4($s0)
    ctx->r4 = MEM_HU(ctx->r16, -0X4);
    // 0x8020BFEC: andi        $t3, $v0, 0xFF00
    ctx->r11 = ctx->r2 & 0XFF00;
    // 0x8020BFF0: sra         $t6, $t3, 8
    ctx->r14 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020BFF4: mtc1        $t6, $f22
    ctx->f22.u32l = ctx->r14;
    // 0x8020BFF8: lhu         $a1, -0x2($s0)
    ctx->r5 = MEM_HU(ctx->r16, -0X2);
    // 0x8020BFFC: andi        $t4, $v1, 0xFF00
    ctx->r12 = ctx->r3 & 0XFF00;
    // 0x8020C000: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020C004: sra         $t3, $t4, 8
    ctx->r11 = S32(SIGNED(ctx->r12) >> 8);
    // 0x8020C008: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8020C00C: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8020C010: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x8020C014: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C018: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020C01C: andi        $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 & 0XFF;
    // 0x8020C020: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8020C024: lhu         $v0, -0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X8);
    // 0x8020C028: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C02C: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020C030: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020C034: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C038: mfc1        $t7, $f22
    ctx->r15 = (int32_t)ctx->f22.u32l;
    // 0x8020C03C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C040: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8020C044: or          $t2, $t9, $t8
    ctx->r10 = ctx->r25 | ctx->r24;
    // 0x8020C048: sh          $t2, -0x10($s0)
    MEM_H(-0X10, ctx->r16) = ctx->r10;
    // 0x8020C04C: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8020C050: andi        $t2, $a0, 0xFF00
    ctx->r10 = ctx->r4 & 0XFF00;
    // 0x8020C054: sra         $t4, $t2, 8
    ctx->r12 = S32(SIGNED(ctx->r10) >> 8);
    // 0x8020C058: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8020C05C: sll         $t9, $t7, 8
    ctx->r25 = S32(ctx->r15 << 8);
    // 0x8020C060: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8020C064: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C068: sh          $t8, -0xE($s0)
    MEM_H(-0XE, ctx->r16) = ctx->r24;
    // 0x8020C06C: andi        $t8, $a1, 0xFF00
    ctx->r24 = ctx->r5 & 0XFF00;
    // 0x8020C070: sra         $t2, $t8, 8
    ctx->r10 = S32(SIGNED(ctx->r24) >> 8);
    // 0x8020C074: mtc1        $t2, $f22
    ctx->f22.u32l = ctx->r10;
    // 0x8020C078: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x8020C07C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C080: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020C084: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C088: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020C08C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C090: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020C094: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8020C098: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020C09C: sll         $t6, $t7, 8
    ctx->r14 = S32(ctx->r15 << 8);
    // 0x8020C0A0: or          $t9, $t3, $t6
    ctx->r25 = ctx->r11 | ctx->r14;
    // 0x8020C0A4: sh          $t9, -0xC($s0)
    MEM_H(-0XC, ctx->r16) = ctx->r25;
    // 0x8020C0A8: mfc1        $t7, $f22
    ctx->r15 = (int32_t)ctx->f22.u32l;
    // 0x8020C0AC: nop

    // 0x8020C0B0: sll         $t3, $t7, 8
    ctx->r11 = S32(ctx->r15 << 8);
    // 0x8020C0B4: or          $t6, $t4, $t3
    ctx->r14 = ctx->r12 | ctx->r11;
    // 0x8020C0B8: bne         $s0, $a2, L_8020BFE4
    if (ctx->r16 != ctx->r6) {
        // 0x8020C0BC: sh          $t6, -0xA($s0)
        MEM_H(-0XA, ctx->r16) = ctx->r14;
            goto L_8020BFE4;
    }
    // 0x8020C0BC: sh          $t6, -0xA($s0)
    MEM_H(-0XA, ctx->r16) = ctx->r14;
L_8020C0C0:
    // 0x8020C0C0: andi        $t3, $v0, 0xFF00
    ctx->r11 = ctx->r2 & 0XFF00;
    // 0x8020C0C4: sra         $t6, $t3, 8
    ctx->r14 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020C0C8: lhu         $v1, -0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, -0X6);
    // 0x8020C0CC: mtc1        $t6, $f22
    ctx->f22.u32l = ctx->r14;
    // 0x8020C0D0: lhu         $a0, -0x4($s0)
    ctx->r4 = MEM_HU(ctx->r16, -0X4);
    // 0x8020C0D4: andi        $t4, $v1, 0xFF00
    ctx->r12 = ctx->r3 & 0XFF00;
    // 0x8020C0D8: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020C0DC: sra         $t3, $t4, 8
    ctx->r11 = S32(SIGNED(ctx->r12) >> 8);
    // 0x8020C0E0: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8020C0E4: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8020C0E8: lhu         $a1, -0x2($s0)
    ctx->r5 = MEM_HU(ctx->r16, -0X2);
    // 0x8020C0EC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C0F0: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020C0F4: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x8020C0F8: andi        $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 & 0XFF;
    // 0x8020C0FC: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C100: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020C104: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020C108: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C10C: mfc1        $t7, $f22
    ctx->r15 = (int32_t)ctx->f22.u32l;
    // 0x8020C110: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C114: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8020C118: or          $t2, $t9, $t8
    ctx->r10 = ctx->r25 | ctx->r24;
    // 0x8020C11C: sh          $t2, -0x8($s0)
    MEM_H(-0X8, ctx->r16) = ctx->r10;
    // 0x8020C120: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8020C124: andi        $t2, $a0, 0xFF00
    ctx->r10 = ctx->r4 & 0XFF00;
    // 0x8020C128: sra         $t4, $t2, 8
    ctx->r12 = S32(SIGNED(ctx->r10) >> 8);
    // 0x8020C12C: sll         $t9, $t7, 8
    ctx->r25 = S32(ctx->r15 << 8);
    // 0x8020C130: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8020C134: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8020C138: sh          $t8, -0x6($s0)
    MEM_H(-0X6, ctx->r16) = ctx->r24;
    // 0x8020C13C: andi        $t8, $a1, 0xFF00
    ctx->r24 = ctx->r5 & 0XFF00;
    // 0x8020C140: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C144: sra         $t2, $t8, 8
    ctx->r10 = S32(SIGNED(ctx->r24) >> 8);
    // 0x8020C148: mtc1        $t2, $f22
    ctx->f22.u32l = ctx->r10;
    // 0x8020C14C: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x8020C150: cvt.s.w     $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.fl = CVT_S_W(ctx->f22.u32l);
    // 0x8020C154: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C158: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C15C: mul.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020C160: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C164: add.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f2.fl;
    // 0x8020C168: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8020C16C: trunc.w.s   $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    ctx->f22.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020C170: sll         $t6, $t7, 8
    ctx->r14 = S32(ctx->r15 << 8);
    // 0x8020C174: or          $t9, $t3, $t6
    ctx->r25 = ctx->r11 | ctx->r14;
    // 0x8020C178: sh          $t9, -0x4($s0)
    MEM_H(-0X4, ctx->r16) = ctx->r25;
    // 0x8020C17C: mfc1        $t7, $f22
    ctx->r15 = (int32_t)ctx->f22.u32l;
    // 0x8020C180: nop

    // 0x8020C184: sll         $t3, $t7, 8
    ctx->r11 = S32(ctx->r15 << 8);
    // 0x8020C188: or          $t6, $t4, $t3
    ctx->r14 = ctx->r12 | ctx->r11;
    // 0x8020C18C: sh          $t6, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r14;
    // 0x8020C190: b           L_8020CE78
    // 0x8020C194: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8020CE78;
    // 0x8020C194: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020C198:
    // 0x8020C198: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020C19C: beq         $a1, $at, L_8020C1BC
    if (ctx->r5 == ctx->r1) {
        // 0x8020C1A0: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8020C1BC;
    }
    // 0x8020C1A0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8020C1A4: beq         $a1, $at, L_8020C65C
    if (ctx->r5 == ctx->r1) {
        // 0x8020C1A8: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8020C65C;
    }
    // 0x8020C1A8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8020C1AC: beq         $a1, $at, L_8020CA64
    if (ctx->r5 == ctx->r1) {
        // 0x8020C1B0: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8020CA64;
    }
    // 0x8020C1B0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020C1B4: b           L_8020CE78
    // 0x8020C1B8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8020CE78;
    // 0x8020C1B8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020C1BC:
    // 0x8020C1BC: blez        $s0, L_8020CE74
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8020C1C0: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8020CE74;
    }
    // 0x8020C1C0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020C1C4: andi        $a1, $s0, 0x3
    ctx->r5 = ctx->r16 & 0X3;
    // 0x8020C1C8: beq         $a1, $zero, L_8020C2F0
    if (ctx->r5 == 0) {
        // 0x8020C1CC: lwc1        $f20, 0xDC($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
            goto L_8020C2F0;
    }
    // 0x8020C1CC: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020C1D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020C1D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020C1D8: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020C1DC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8020C1E0: sub.s       $f18, $f4, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x8020C1E4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020C1E8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8020C1EC: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8020C1F0: mul.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x8020C1F4: nop

    // 0x8020C1F8: mul.s       $f2, $f6, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8020C1FC: nop

    // 0x8020C200: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020C204: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020C208: andi        $t9, $v1, 0xF
    ctx->r25 = ctx->r3 & 0XF;
    // 0x8020C20C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8020C210: nop

    // 0x8020C214: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020C218: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020C21C: beq         $a0, $t0, L_8020C298
    if (ctx->r4 == ctx->r8) {
        // 0x8020C220: add.s       $f22, $f16, $f2
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f16.fl + ctx->f2.fl;
            goto L_8020C298;
    }
    // 0x8020C220: add.s       $f22, $f16, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f16.fl + ctx->f2.fl;
L_8020C224:
    // 0x8020C224: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020C228: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020C22C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020C230: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020C234: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020C238: nop

    // 0x8020C23C: andi        $t5, $t1, 0xF
    ctx->r13 = ctx->r9 & 0XF;
    // 0x8020C240: or          $v1, $t8, $t5
    ctx->r3 = ctx->r24 | ctx->r13;
    // 0x8020C244: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020C248: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020C24C: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8020C250: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x8020C254: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020C258: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C25C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020C260: andi        $t9, $v1, 0xF
    ctx->r25 = ctx->r3 & 0XF;
    // 0x8020C264: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8020C268: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C26C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020C270: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C274: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C278: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020C27C: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020C280: nop

    // 0x8020C284: sll         $t8, $t1, 4
    ctx->r24 = S32(ctx->r9 << 4);
    // 0x8020C288: add.s       $f22, $f16, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8020C28C: or          $t5, $t6, $t8
    ctx->r13 = ctx->r14 | ctx->r24;
    // 0x8020C290: bne         $a0, $t0, L_8020C224
    if (ctx->r4 != ctx->r8) {
        // 0x8020C294: sb          $t5, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r13;
            goto L_8020C224;
    }
    // 0x8020C294: sb          $t5, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r13;
L_8020C298:
    // 0x8020C298: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020C29C: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020C2A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020C2A4: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020C2A8: nop

    // 0x8020C2AC: andi        $t5, $t1, 0xF
    ctx->r13 = ctx->r9 & 0XF;
    // 0x8020C2B0: or          $v1, $t8, $t5
    ctx->r3 = ctx->r24 | ctx->r13;
    // 0x8020C2B4: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020C2B8: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020C2BC: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8020C2C0: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020C2C4: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x8020C2C8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C2CC: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C2D0: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C2D4: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C2D8: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020C2DC: nop

    // 0x8020C2E0: sll         $t8, $t1, 4
    ctx->r24 = S32(ctx->r9 << 4);
    // 0x8020C2E4: or          $t5, $t6, $t8
    ctx->r13 = ctx->r14 | ctx->r24;
    // 0x8020C2E8: sb          $t5, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r13;
    // 0x8020C2EC: beq         $t0, $s0, L_8020CE74
    if (ctx->r8 == ctx->r16) {
        // 0x8020C2F0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020CE74;
    }
L_8020C2F0:
    // 0x8020C2F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020C2F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020C2F8: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020C2FC: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020C300: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8020C304: sub.s       $f8, $f18, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f20.fl;
    // 0x8020C308: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020C30C: addu        $v0, $s1, $t0
    ctx->r2 = ADD32(ctx->r17, ctx->r8);
    // 0x8020C310: mul.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8020C314: nop

    // 0x8020C318: mul.s       $f2, $f16, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8020C31C: nop

    // 0x8020C320: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020C324: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020C328: andi        $t7, $v1, 0xF
    ctx->r15 = ctx->r3 & 0XF;
    // 0x8020C32C: mtc1        $t7, $f14
    ctx->f14.u32l = ctx->r15;
    // 0x8020C330: nop

    // 0x8020C334: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020C338: mul.s       $f14, $f20, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020C33C: beq         $t0, $s0, L_8020C4D8
    if (ctx->r8 == ctx->r16) {
        // 0x8020C340: add.s       $f22, $f14, $f2
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f14.fl + ctx->f2.fl;
            goto L_8020C4D8;
    }
    // 0x8020C340: add.s       $f22, $f14, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f14.fl + ctx->f2.fl;
L_8020C344:
    // 0x8020C344: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020C348: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020C34C: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020C350: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020C354: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020C358: andi        $t1, $a0, 0xF
    ctx->r9 = ctx->r4 & 0XF;
    // 0x8020C35C: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8020C360: andi        $t2, $t9, 0xF
    ctx->r10 = ctx->r25 & 0XF;
    // 0x8020C364: or          $v1, $t4, $t2
    ctx->r3 = ctx->r12 | ctx->r10;
    // 0x8020C368: andi        $t6, $v1, 0xF0
    ctx->r14 = ctx->r3 & 0XF0;
    // 0x8020C36C: sra         $t8, $t6, 4
    ctx->r24 = S32(SIGNED(ctx->r14) >> 4);
    // 0x8020C370: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8020C374: andi        $t5, $v1, 0xF
    ctx->r13 = ctx->r3 & 0XF;
    // 0x8020C378: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x8020C37C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020C380: andi        $t6, $a0, 0xF0
    ctx->r14 = ctx->r4 & 0XF0;
    // 0x8020C384: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020C388: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
    // 0x8020C38C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020C390: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C394: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020C398: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020C39C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C3A0: add.s       $f16, $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8020C3A4: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020C3A8: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C3AC: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020C3B0: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C3B4: sll         $t4, $t9, 4
    ctx->r12 = S32(ctx->r25 << 4);
    // 0x8020C3B8: or          $t2, $t5, $t4
    ctx->r10 = ctx->r13 | ctx->r12;
    // 0x8020C3BC: sb          $t2, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r10;
    // 0x8020C3C0: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8020C3C4: andi        $t9, $a1, 0xF
    ctx->r25 = ctx->r5 & 0XF;
    // 0x8020C3C8: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8020C3CC: andi        $t3, $t7, 0xF
    ctx->r11 = ctx->r15 & 0XF;
    // 0x8020C3D0: or          $a0, $t6, $t3
    ctx->r4 = ctx->r14 | ctx->r11;
    // 0x8020C3D4: andi        $t5, $a0, 0xF0
    ctx->r13 = ctx->r4 & 0XF0;
    // 0x8020C3D8: sra         $t4, $t5, 4
    ctx->r12 = S32(SIGNED(ctx->r13) >> 4);
    // 0x8020C3DC: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020C3E0: andi        $t2, $a0, 0xF
    ctx->r10 = ctx->r4 & 0XF;
    // 0x8020C3E4: andi        $t5, $a1, 0xF0
    ctx->r13 = ctx->r5 & 0XF0;
    // 0x8020C3E8: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020C3EC: sb          $a0, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r4;
    // 0x8020C3F0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C3F4: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020C3F8: add.s       $f16, $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8020C3FC: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C400: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020C404: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C408: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020C40C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C410: sll         $t6, $t7, 4
    ctx->r14 = S32(ctx->r15 << 4);
    // 0x8020C414: or          $t3, $t2, $t6
    ctx->r11 = ctx->r10 | ctx->r14;
    // 0x8020C418: sb          $t3, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r11;
    // 0x8020C41C: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020C420: andi        $t7, $a2, 0xF
    ctx->r15 = ctx->r6 & 0XF;
    // 0x8020C424: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x8020C428: andi        $t8, $t1, 0xF
    ctx->r24 = ctx->r9 & 0XF;
    // 0x8020C42C: or          $a1, $t5, $t8
    ctx->r5 = ctx->r13 | ctx->r24;
    // 0x8020C430: andi        $t2, $a1, 0xF0
    ctx->r10 = ctx->r5 & 0XF0;
    // 0x8020C434: sra         $t6, $t2, 4
    ctx->r14 = S32(SIGNED(ctx->r10) >> 4);
    // 0x8020C438: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8020C43C: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020C440: andi        $t2, $a2, 0xF0
    ctx->r10 = ctx->r6 & 0XF0;
    // 0x8020C444: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020C448: sb          $a1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r5;
    // 0x8020C44C: andi        $t7, $v1, 0xF
    ctx->r15 = ctx->r3 & 0XF;
    // 0x8020C450: mtc1        $t7, $f14
    ctx->f14.u32l = ctx->r15;
    // 0x8020C454: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C458: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020C45C: add.s       $f16, $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8020C460: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C464: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020C468: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C46C: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8020C470: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C474: sll         $t5, $t1, 4
    ctx->r13 = S32(ctx->r9 << 4);
    // 0x8020C478: or          $t8, $t3, $t5
    ctx->r24 = ctx->r11 | ctx->r13;
    // 0x8020C47C: sb          $t8, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r24;
    // 0x8020C480: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020C484: nop

    // 0x8020C488: andi        $t4, $t9, 0xF
    ctx->r12 = ctx->r25 & 0XF;
    // 0x8020C48C: or          $a2, $t2, $t4
    ctx->r6 = ctx->r10 | ctx->r12;
    // 0x8020C490: andi        $t3, $a2, 0xF0
    ctx->r11 = ctx->r6 & 0XF0;
    // 0x8020C494: sra         $t5, $t3, 4
    ctx->r13 = S32(SIGNED(ctx->r11) >> 4);
    // 0x8020C498: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8020C49C: andi        $t8, $a2, 0xF
    ctx->r24 = ctx->r6 & 0XF;
    // 0x8020C4A0: sb          $a2, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r6;
    // 0x8020C4A4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C4A8: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020C4AC: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C4B0: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C4B4: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C4B8: mul.s       $f14, $f20, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020C4BC: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020C4C0: nop

    // 0x8020C4C4: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x8020C4C8: add.s       $f22, $f14, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x8020C4CC: or          $t4, $t8, $t2
    ctx->r12 = ctx->r24 | ctx->r10;
    // 0x8020C4D0: bne         $t0, $s0, L_8020C344
    if (ctx->r8 != ctx->r16) {
        // 0x8020C4D4: sb          $t4, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r12;
            goto L_8020C344;
    }
    // 0x8020C4D4: sb          $t4, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r12;
L_8020C4D8:
    // 0x8020C4D8: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x8020C4DC: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020C4E0: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020C4E4: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020C4E8: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020C4EC: andi        $t1, $a0, 0xF
    ctx->r9 = ctx->r4 & 0XF;
    // 0x8020C4F0: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8020C4F4: andi        $t2, $t9, 0xF
    ctx->r10 = ctx->r25 & 0XF;
    // 0x8020C4F8: or          $v1, $t4, $t2
    ctx->r3 = ctx->r12 | ctx->r10;
    // 0x8020C4FC: andi        $t6, $v1, 0xF0
    ctx->r14 = ctx->r3 & 0XF0;
    // 0x8020C500: sra         $t8, $t6, 4
    ctx->r24 = S32(SIGNED(ctx->r14) >> 4);
    // 0x8020C504: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8020C508: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C50C: andi        $t5, $v1, 0xF
    ctx->r13 = ctx->r3 & 0XF;
    // 0x8020C510: andi        $t6, $a0, 0xF0
    ctx->r14 = ctx->r4 & 0XF0;
    // 0x8020C514: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x8020C518: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020C51C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020C520: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020C524: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020C528: nop

    // 0x8020C52C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C530: add.s       $f16, $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8020C534: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C538: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020C53C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C540: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020C544: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8020C548: sll         $t4, $t9, 4
    ctx->r12 = S32(ctx->r25 << 4);
    // 0x8020C54C: or          $t2, $t5, $t4
    ctx->r10 = ctx->r13 | ctx->r12;
    // 0x8020C550: andi        $t3, $t7, 0xF
    ctx->r11 = ctx->r15 & 0XF;
    // 0x8020C554: or          $a0, $t6, $t3
    ctx->r4 = ctx->r14 | ctx->r11;
    // 0x8020C558: andi        $t5, $a0, 0xF0
    ctx->r13 = ctx->r4 & 0XF0;
    // 0x8020C55C: sra         $t4, $t5, 4
    ctx->r12 = S32(SIGNED(ctx->r13) >> 4);
    // 0x8020C560: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020C564: andi        $t9, $a1, 0xF
    ctx->r25 = ctx->r5 & 0XF;
    // 0x8020C568: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8020C56C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020C570: sb          $t2, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r10;
    // 0x8020C574: andi        $t2, $a0, 0xF
    ctx->r10 = ctx->r4 & 0XF;
    // 0x8020C578: andi        $t5, $a1, 0xF0
    ctx->r13 = ctx->r5 & 0XF0;
    // 0x8020C57C: sb          $a0, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r4;
    // 0x8020C580: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C584: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020C588: nop

    // 0x8020C58C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C590: add.s       $f16, $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8020C594: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020C598: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C59C: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020C5A0: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C5A4: sll         $t6, $t7, 4
    ctx->r14 = S32(ctx->r15 << 4);
    // 0x8020C5A8: or          $t3, $t2, $t6
    ctx->r11 = ctx->r10 | ctx->r14;
    // 0x8020C5AC: andi        $t7, $a2, 0xF
    ctx->r15 = ctx->r6 & 0XF;
    // 0x8020C5B0: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020C5B4: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x8020C5B8: sb          $t3, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r11;
    // 0x8020C5BC: andi        $t8, $t1, 0xF
    ctx->r24 = ctx->r9 & 0XF;
    // 0x8020C5C0: or          $a1, $t5, $t8
    ctx->r5 = ctx->r13 | ctx->r24;
    // 0x8020C5C4: andi        $t2, $a1, 0xF0
    ctx->r10 = ctx->r5 & 0XF0;
    // 0x8020C5C8: sra         $t6, $t2, 4
    ctx->r14 = S32(SIGNED(ctx->r10) >> 4);
    // 0x8020C5CC: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8020C5D0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C5D4: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020C5D8: andi        $t2, $a2, 0xF0
    ctx->r10 = ctx->r6 & 0XF0;
    // 0x8020C5DC: sb          $a1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r5;
    // 0x8020C5E0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020C5E4: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020C5E8: nop

    // 0x8020C5EC: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C5F0: add.s       $f16, $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8020C5F4: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C5F8: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020C5FC: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C600: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8020C604: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020C608: sll         $t5, $t1, 4
    ctx->r13 = S32(ctx->r9 << 4);
    // 0x8020C60C: or          $t8, $t3, $t5
    ctx->r24 = ctx->r11 | ctx->r13;
    // 0x8020C610: andi        $t4, $t9, 0xF
    ctx->r12 = ctx->r25 & 0XF;
    // 0x8020C614: or          $a2, $t2, $t4
    ctx->r6 = ctx->r10 | ctx->r12;
    // 0x8020C618: andi        $t3, $a2, 0xF0
    ctx->r11 = ctx->r6 & 0XF0;
    // 0x8020C61C: sra         $t5, $t3, 4
    ctx->r13 = S32(SIGNED(ctx->r11) >> 4);
    // 0x8020C620: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8020C624: sb          $t8, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r24;
    // 0x8020C628: andi        $t8, $a2, 0xF
    ctx->r24 = ctx->r6 & 0XF;
    // 0x8020C62C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C630: sb          $a2, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r6;
    // 0x8020C634: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020C638: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C63C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020C640: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020C644: nop

    // 0x8020C648: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x8020C64C: or          $t4, $t8, $t2
    ctx->r12 = ctx->r24 | ctx->r10;
    // 0x8020C650: sb          $t4, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r12;
    // 0x8020C654: b           L_8020CE78
    // 0x8020C658: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8020CE78;
    // 0x8020C658: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020C65C:
    // 0x8020C65C: blez        $s0, L_8020CE74
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8020C660: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8020CE74;
    }
    // 0x8020C660: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020C664: andi        $a1, $s0, 0x3
    ctx->r5 = ctx->r16 & 0X3;
    // 0x8020C668: beq         $a1, $zero, L_8020C760
    if (ctx->r5 == 0) {
        // 0x8020C66C: lwc1        $f20, 0xDC($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
            goto L_8020C760;
    }
    // 0x8020C66C: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020C670: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020C674: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020C678: lwc1        $f16, 0xD0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020C67C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8020C680: sub.s       $f6, $f8, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x8020C684: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020C688: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020C68C: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8020C690: mul.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8020C694: nop

    // 0x8020C698: mul.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8020C69C: nop

L_8020C6A0:
    // 0x8020C6A0: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x8020C6A4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020C6A8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020C6AC: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8020C6B0: bgez        $t1, L_8020C6C4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8020C6B4: cvt.s.w     $f0, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
            goto L_8020C6C4;
    }
    // 0x8020C6B4: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020C6B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020C6BC: nop

    // 0x8020C6C0: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
L_8020C6C4:
    // 0x8020C6C4: mul.s       $f6, $f20, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020C6C8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020C6CC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020C6D0: add.s       $f16, $f6, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x8020C6D4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020C6D8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020C6DC: nop

    // 0x8020C6E0: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8020C6E4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020C6E8: nop

    // 0x8020C6EC: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020C6F0: beql        $t5, $zero, L_8020C740
    if (ctx->r13 == 0) {
        // 0x8020C6F4: mfc1        $t5, $f10
        ctx->r13 = (int32_t)ctx->f10.u32l;
            goto L_8020C740;
    }
    goto skip_6;
    // 0x8020C6F4: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    skip_6:
    // 0x8020C6F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020C6FC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020C700: sub.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x8020C704: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020C708: nop

    // 0x8020C70C: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020C710: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020C714: nop

    // 0x8020C718: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020C71C: bne         $t5, $zero, L_8020C734
    if (ctx->r13 != 0) {
        // 0x8020C720: nop
    
            goto L_8020C734;
    }
    // 0x8020C720: nop

    // 0x8020C724: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x8020C728: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020C72C: b           L_8020C74C
    // 0x8020C730: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8020C74C;
    // 0x8020C730: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8020C734:
    // 0x8020C734: b           L_8020C74C
    // 0x8020C738: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8020C74C;
    // 0x8020C738: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8020C73C: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
L_8020C740:
    // 0x8020C740: nop

    // 0x8020C744: bltz        $t5, L_8020C734
    if (SIGNED(ctx->r13) < 0) {
        // 0x8020C748: nop
    
            goto L_8020C734;
    }
    // 0x8020C748: nop

L_8020C74C:
    // 0x8020C74C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020C750: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    // 0x8020C754: bne         $v1, $t0, L_8020C6A0
    if (ctx->r3 != ctx->r8) {
        // 0x8020C758: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8020C6A0;
    }
    // 0x8020C758: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020C75C: beq         $t0, $s0, L_8020CE74
    if (ctx->r8 == ctx->r16) {
        // 0x8020C760: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020CE74;
    }
L_8020C760:
    // 0x8020C760: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020C764: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020C768: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020C76C: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020C770: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8020C774: sub.s       $f18, $f4, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x8020C778: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020C77C: addu        $v0, $s1, $t0
    ctx->r2 = ADD32(ctx->r17, ctx->r8);
    // 0x8020C780: mul.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x8020C784: nop

    // 0x8020C788: mul.s       $f2, $f6, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8020C78C: nop

L_8020C790:
    // 0x8020C790: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x8020C794: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020C798: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020C79C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8020C7A0: bgez        $t7, L_8020C7B4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8020C7A4: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020C7B4;
    }
    // 0x8020C7A4: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020C7A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020C7AC: nop

    // 0x8020C7B0: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020C7B4:
    // 0x8020C7B4: mul.s       $f18, $f20, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020C7B8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020C7BC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020C7C0: add.s       $f8, $f18, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8020C7C4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020C7C8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020C7CC: nop

    // 0x8020C7D0: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020C7D4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020C7D8: nop

    // 0x8020C7DC: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020C7E0: beql        $t9, $zero, L_8020C830
    if (ctx->r25 == 0) {
        // 0x8020C7E4: mfc1        $t9, $f6
        ctx->r25 = (int32_t)ctx->f6.u32l;
            goto L_8020C830;
    }
    goto skip_7;
    // 0x8020C7E4: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    skip_7:
    // 0x8020C7E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020C7EC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020C7F0: sub.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8020C7F4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020C7F8: nop

    // 0x8020C7FC: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020C800: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020C804: nop

    // 0x8020C808: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020C80C: bne         $t9, $zero, L_8020C824
    if (ctx->r25 != 0) {
        // 0x8020C810: nop
    
            goto L_8020C824;
    }
    // 0x8020C810: nop

    // 0x8020C814: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x8020C818: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020C81C: b           L_8020C83C
    // 0x8020C820: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8020C83C;
    // 0x8020C820: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8020C824:
    // 0x8020C824: b           L_8020C83C
    // 0x8020C828: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8020C83C;
    // 0x8020C828: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8020C82C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
L_8020C830:
    // 0x8020C830: nop

    // 0x8020C834: bltz        $t9, L_8020C824
    if (SIGNED(ctx->r25) < 0) {
        // 0x8020C838: nop
    
            goto L_8020C824;
    }
    // 0x8020C838: nop

L_8020C83C:
    // 0x8020C83C: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x8020C840: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020C844: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020C848: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8020C84C: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x8020C850: bgez        $t8, L_8020C864
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8020C854: cvt.s.w     $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8020C864;
    }
    // 0x8020C854: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020C858: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020C85C: nop

    // 0x8020C860: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
L_8020C864:
    // 0x8020C864: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020C868: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020C86C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020C870: add.s       $f18, $f4, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x8020C874: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020C878: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020C87C: nop

    // 0x8020C880: cvt.w.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8020C884: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020C888: nop

    // 0x8020C88C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020C890: beql        $t4, $zero, L_8020C8E0
    if (ctx->r12 == 0) {
        // 0x8020C894: mfc1        $t4, $f8
        ctx->r12 = (int32_t)ctx->f8.u32l;
            goto L_8020C8E0;
    }
    goto skip_8;
    // 0x8020C894: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    skip_8:
    // 0x8020C898: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020C89C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020C8A0: sub.s       $f8, $f18, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x8020C8A4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020C8A8: nop

    // 0x8020C8AC: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020C8B0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020C8B4: nop

    // 0x8020C8B8: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020C8BC: bne         $t4, $zero, L_8020C8D4
    if (ctx->r12 != 0) {
        // 0x8020C8C0: nop
    
            goto L_8020C8D4;
    }
    // 0x8020C8C0: nop

    // 0x8020C8C4: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x8020C8C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020C8CC: b           L_8020C8EC
    // 0x8020C8D0: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_8020C8EC;
    // 0x8020C8D0: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_8020C8D4:
    // 0x8020C8D4: b           L_8020C8EC
    // 0x8020C8D8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_8020C8EC;
    // 0x8020C8D8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8020C8DC: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
L_8020C8E0:
    // 0x8020C8E0: nop

    // 0x8020C8E4: bltz        $t4, L_8020C8D4
    if (SIGNED(ctx->r12) < 0) {
        // 0x8020C8E8: nop
    
            goto L_8020C8D4;
    }
    // 0x8020C8E8: nop

L_8020C8EC:
    // 0x8020C8EC: lbu         $t1, 0x2($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X2);
    // 0x8020C8F0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020C8F4: sb          $t4, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r12;
    // 0x8020C8F8: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8020C8FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020C900: bgez        $t1, L_8020C914
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8020C904: cvt.s.w     $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8020C914;
    }
    // 0x8020C904: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020C908: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020C90C: nop

    // 0x8020C910: add.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f16.fl;
L_8020C914:
    // 0x8020C914: mul.s       $f10, $f20, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020C918: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020C91C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020C920: add.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8020C924: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020C928: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020C92C: nop

    // 0x8020C930: cvt.w.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8020C934: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020C938: nop

    // 0x8020C93C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020C940: beql        $t5, $zero, L_8020C990
    if (ctx->r13 == 0) {
        // 0x8020C944: mfc1        $t5, $f18
        ctx->r13 = (int32_t)ctx->f18.u32l;
            goto L_8020C990;
    }
    goto skip_9;
    // 0x8020C944: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    skip_9:
    // 0x8020C948: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020C94C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020C950: sub.s       $f18, $f4, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x8020C954: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020C958: nop

    // 0x8020C95C: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8020C960: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020C964: nop

    // 0x8020C968: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020C96C: bne         $t5, $zero, L_8020C984
    if (ctx->r13 != 0) {
        // 0x8020C970: nop
    
            goto L_8020C984;
    }
    // 0x8020C970: nop

    // 0x8020C974: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x8020C978: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020C97C: b           L_8020C99C
    // 0x8020C980: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8020C99C;
    // 0x8020C980: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8020C984:
    // 0x8020C984: b           L_8020C99C
    // 0x8020C988: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8020C99C;
    // 0x8020C988: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8020C98C: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
L_8020C990:
    // 0x8020C990: nop

    // 0x8020C994: bltz        $t5, L_8020C984
    if (SIGNED(ctx->r13) < 0) {
        // 0x8020C998: nop
    
            goto L_8020C984;
    }
    // 0x8020C998: nop

L_8020C99C:
    // 0x8020C99C: lbu         $t7, 0x3($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3);
    // 0x8020C9A0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020C9A4: sb          $t5, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r13;
    // 0x8020C9A8: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8020C9AC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020C9B0: bgez        $t7, L_8020C9C4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8020C9B4: cvt.s.w     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020C9C4;
    }
    // 0x8020C9B4: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020C9B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020C9BC: nop

    // 0x8020C9C0: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_8020C9C4:
    // 0x8020C9C4: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020C9C8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020C9CC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020C9D0: add.s       $f10, $f16, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8020C9D4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020C9D8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020C9DC: nop

    // 0x8020C9E0: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020C9E4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020C9E8: nop

    // 0x8020C9EC: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020C9F0: beql        $t9, $zero, L_8020CA40
    if (ctx->r25 == 0) {
        // 0x8020C9F4: mfc1        $t9, $f4
        ctx->r25 = (int32_t)ctx->f4.u32l;
            goto L_8020CA40;
    }
    goto skip_10;
    // 0x8020C9F4: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    skip_10:
    // 0x8020C9F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020C9FC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020CA00: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8020CA04: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020CA08: nop

    // 0x8020CA0C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8020CA10: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020CA14: nop

    // 0x8020CA18: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020CA1C: bne         $t9, $zero, L_8020CA34
    if (ctx->r25 != 0) {
        // 0x8020CA20: nop
    
            goto L_8020CA34;
    }
    // 0x8020CA20: nop

    // 0x8020CA24: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x8020CA28: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020CA2C: b           L_8020CA4C
    // 0x8020CA30: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8020CA4C;
    // 0x8020CA30: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8020CA34:
    // 0x8020CA34: b           L_8020CA4C
    // 0x8020CA38: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8020CA4C;
    // 0x8020CA38: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8020CA3C: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
L_8020CA40:
    // 0x8020CA40: nop

    // 0x8020CA44: bltz        $t9, L_8020CA34
    if (SIGNED(ctx->r25) < 0) {
        // 0x8020CA48: nop
    
            goto L_8020CA34;
    }
    // 0x8020CA48: nop

L_8020CA4C:
    // 0x8020CA4C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020CA50: sb          $t9, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r25;
    // 0x8020CA54: bne         $t0, $s0, L_8020C790
    if (ctx->r8 != ctx->r16) {
        // 0x8020CA58: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8020C790;
    }
    // 0x8020CA58: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020CA5C: b           L_8020CE78
    // 0x8020CA60: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8020CE78;
    // 0x8020CA60: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020CA64:
    // 0x8020CA64: bgez        $s0, L_8020CA74
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8020CA68: sra         $a0, $s0, 1
        ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
            goto L_8020CA74;
    }
    // 0x8020CA68: sra         $a0, $s0, 1
    ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
    // 0x8020CA6C: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x8020CA70: sra         $a0, $at, 1
    ctx->r4 = S32(SIGNED(ctx->r1) >> 1);
L_8020CA74:
    // 0x8020CA74: blez        $a0, L_8020CE74
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8020CA78: andi        $a1, $a0, 0x3
        ctx->r5 = ctx->r4 & 0X3;
            goto L_8020CE74;
    }
    // 0x8020CA78: andi        $a1, $a0, 0x3
    ctx->r5 = ctx->r4 & 0X3;
    // 0x8020CA7C: beq         $a1, $zero, L_8020CB74
    if (ctx->r5 == 0) {
        // 0x8020CA80: lwc1        $f20, 0xDC($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
            goto L_8020CB74;
    }
    // 0x8020CA80: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020CA84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020CA88: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020CA8C: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020CA90: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8020CA94: sub.s       $f8, $f18, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f20.fl;
    // 0x8020CA98: lwc1        $f10, 0x30C0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X30C0);
    // 0x8020CA9C: sll         $t8, $t0, 1
    ctx->r24 = S32(ctx->r8 << 1);
    // 0x8020CAA0: addu        $s0, $s1, $t8
    ctx->r16 = ADD32(ctx->r17, ctx->r24);
    // 0x8020CAA4: mul.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8020CAA8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8020CAAC: mul.s       $f2, $f16, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8020CAB0: nop

L_8020CAB4:
    // 0x8020CAB4: lhu         $t2, 0x0($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X0);
    // 0x8020CAB8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020CABC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020CAC0: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8020CAC4: bgez        $t2, L_8020CAD8
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8020CAC8: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020CAD8;
    }
    // 0x8020CAC8: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020CACC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020CAD0: nop

    // 0x8020CAD4: add.s       $f0, $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f18.fl;
L_8020CAD8:
    // 0x8020CAD8: mul.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020CADC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8020CAE0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020CAE4: add.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x8020CAE8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020CAEC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8020CAF0: nop

    // 0x8020CAF4: cvt.w.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020CAF8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8020CAFC: nop

    // 0x8020CB00: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8020CB04: beql        $t1, $zero, L_8020CB54
    if (ctx->r9 == 0) {
        // 0x8020CB08: mfc1        $t1, $f16
        ctx->r9 = (int32_t)ctx->f16.u32l;
            goto L_8020CB54;
    }
    goto skip_11;
    // 0x8020CB08: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    skip_11:
    // 0x8020CB0C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020CB10: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8020CB14: sub.s       $f16, $f6, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x8020CB18: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8020CB1C: nop

    // 0x8020CB20: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8020CB24: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8020CB28: nop

    // 0x8020CB2C: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8020CB30: bne         $t1, $zero, L_8020CB48
    if (ctx->r9 != 0) {
        // 0x8020CB34: nop
    
            goto L_8020CB48;
    }
    // 0x8020CB34: nop

    // 0x8020CB38: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8020CB3C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020CB40: b           L_8020CB60
    // 0x8020CB44: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_8020CB60;
    // 0x8020CB44: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_8020CB48:
    // 0x8020CB48: b           L_8020CB60
    // 0x8020CB4C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_8020CB60;
    // 0x8020CB4C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8020CB50: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
L_8020CB54:
    // 0x8020CB54: nop

    // 0x8020CB58: bltz        $t1, L_8020CB48
    if (SIGNED(ctx->r9) < 0) {
        // 0x8020CB5C: nop
    
            goto L_8020CB48;
    }
    // 0x8020CB5C: nop

L_8020CB60:
    // 0x8020CB60: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020CB64: sh          $t1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r9;
    // 0x8020CB68: bne         $v0, $t0, L_8020CAB4
    if (ctx->r2 != ctx->r8) {
        // 0x8020CB6C: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_8020CAB4;
    }
    // 0x8020CB6C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8020CB70: beq         $t0, $a0, L_8020CE74
    if (ctx->r8 == ctx->r4) {
        // 0x8020CB74: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020CE74;
    }
L_8020CB74:
    // 0x8020CB74: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020CB78: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020CB7C: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8020CB80: lwc1        $f18, 0xD0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8020CB84: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8020CB88: sub.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x8020CB8C: lwc1        $f6, 0x30C4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X30C4);
    // 0x8020CB90: sll         $t3, $a0, 1
    ctx->r11 = S32(ctx->r4 << 1);
    // 0x8020CB94: sll         $t5, $t0, 1
    ctx->r13 = S32(ctx->r8 << 1);
    // 0x8020CB98: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8020CB9C: addu        $s0, $s1, $t5
    ctx->r16 = ADD32(ctx->r17, ctx->r13);
    // 0x8020CBA0: addu        $v0, $t3, $s1
    ctx->r2 = ADD32(ctx->r11, ctx->r17);
    // 0x8020CBA4: mul.s       $f2, $f8, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8020CBA8: nop

L_8020CBAC:
    // 0x8020CBAC: lhu         $t7, 0x0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X0);
    // 0x8020CBB0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020CBB4: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8020CBB8: bgez        $t7, L_8020CBCC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8020CBBC: cvt.s.w     $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8020CBCC;
    }
    // 0x8020CBBC: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020CBC0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020CBC4: nop

    // 0x8020CBC8: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
L_8020CBCC:
    // 0x8020CBCC: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020CBD0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020CBD4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020CBD8: add.s       $f18, $f4, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x8020CBDC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020CBE0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020CBE4: nop

    // 0x8020CBE8: cvt.w.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8020CBEC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020CBF0: nop

    // 0x8020CBF4: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020CBF8: beql        $t9, $zero, L_8020CC48
    if (ctx->r25 == 0) {
        // 0x8020CBFC: mfc1        $t9, $f8
        ctx->r25 = (int32_t)ctx->f8.u32l;
            goto L_8020CC48;
    }
    goto skip_12;
    // 0x8020CBFC: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    skip_12:
    // 0x8020CC00: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020CC04: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020CC08: sub.s       $f8, $f18, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x8020CC0C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020CC10: nop

    // 0x8020CC14: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020CC18: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020CC1C: nop

    // 0x8020CC20: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020CC24: bne         $t9, $zero, L_8020CC3C
    if (ctx->r25 != 0) {
        // 0x8020CC28: nop
    
            goto L_8020CC3C;
    }
    // 0x8020CC28: nop

    // 0x8020CC2C: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x8020CC30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020CC34: b           L_8020CC54
    // 0x8020CC38: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8020CC54;
    // 0x8020CC38: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8020CC3C:
    // 0x8020CC3C: b           L_8020CC54
    // 0x8020CC40: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8020CC54;
    // 0x8020CC40: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8020CC44: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
L_8020CC48:
    // 0x8020CC48: nop

    // 0x8020CC4C: bltz        $t9, L_8020CC3C
    if (SIGNED(ctx->r25) < 0) {
        // 0x8020CC50: nop
    
            goto L_8020CC3C;
    }
    // 0x8020CC50: nop

L_8020CC54:
    // 0x8020CC54: lhu         $t8, 0x2($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2);
    // 0x8020CC58: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020CC5C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020CC60: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8020CC64: sh          $t9, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r25;
    // 0x8020CC68: bgez        $t8, L_8020CC7C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8020CC6C: cvt.s.w     $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8020CC7C;
    }
    // 0x8020CC6C: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020CC70: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020CC74: nop

    // 0x8020CC78: add.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f16.fl;
L_8020CC7C:
    // 0x8020CC7C: mul.s       $f10, $f20, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020CC80: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020CC84: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020CC88: add.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8020CC8C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020CC90: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020CC94: nop

    // 0x8020CC98: cvt.w.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8020CC9C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020CCA0: nop

    // 0x8020CCA4: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020CCA8: beql        $t4, $zero, L_8020CCF8
    if (ctx->r12 == 0) {
        // 0x8020CCAC: mfc1        $t4, $f18
        ctx->r12 = (int32_t)ctx->f18.u32l;
            goto L_8020CCF8;
    }
    goto skip_13;
    // 0x8020CCAC: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    skip_13:
    // 0x8020CCB0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020CCB4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020CCB8: sub.s       $f18, $f4, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x8020CCBC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020CCC0: nop

    // 0x8020CCC4: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8020CCC8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020CCCC: nop

    // 0x8020CCD0: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020CCD4: bne         $t4, $zero, L_8020CCEC
    if (ctx->r12 != 0) {
        // 0x8020CCD8: nop
    
            goto L_8020CCEC;
    }
    // 0x8020CCD8: nop

    // 0x8020CCDC: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x8020CCE0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020CCE4: b           L_8020CD04
    // 0x8020CCE8: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_8020CD04;
    // 0x8020CCE8: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_8020CCEC:
    // 0x8020CCEC: b           L_8020CD04
    // 0x8020CCF0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_8020CD04;
    // 0x8020CCF0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8020CCF4: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
L_8020CCF8:
    // 0x8020CCF8: nop

    // 0x8020CCFC: bltz        $t4, L_8020CCEC
    if (SIGNED(ctx->r12) < 0) {
        // 0x8020CD00: nop
    
            goto L_8020CCEC;
    }
    // 0x8020CD00: nop

L_8020CD04:
    // 0x8020CD04: lhu         $t1, 0x4($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X4);
    // 0x8020CD08: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020CD0C: sh          $t4, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r12;
    // 0x8020CD10: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8020CD14: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020CD18: bgez        $t1, L_8020CD2C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8020CD1C: cvt.s.w     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020CD2C;
    }
    // 0x8020CD1C: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020CD20: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020CD24: nop

    // 0x8020CD28: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_8020CD2C:
    // 0x8020CD2C: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020CD30: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020CD34: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020CD38: add.s       $f10, $f16, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x8020CD3C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020CD40: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020CD44: nop

    // 0x8020CD48: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020CD4C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020CD50: nop

    // 0x8020CD54: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020CD58: beql        $t5, $zero, L_8020CDA8
    if (ctx->r13 == 0) {
        // 0x8020CD5C: mfc1        $t5, $f4
        ctx->r13 = (int32_t)ctx->f4.u32l;
            goto L_8020CDA8;
    }
    goto skip_14;
    // 0x8020CD5C: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    skip_14:
    // 0x8020CD60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020CD64: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020CD68: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8020CD6C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020CD70: nop

    // 0x8020CD74: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8020CD78: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020CD7C: nop

    // 0x8020CD80: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020CD84: bne         $t5, $zero, L_8020CD9C
    if (ctx->r13 != 0) {
        // 0x8020CD88: nop
    
            goto L_8020CD9C;
    }
    // 0x8020CD88: nop

    // 0x8020CD8C: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x8020CD90: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020CD94: b           L_8020CDB4
    // 0x8020CD98: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8020CDB4;
    // 0x8020CD98: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8020CD9C:
    // 0x8020CD9C: b           L_8020CDB4
    // 0x8020CDA0: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8020CDB4;
    // 0x8020CDA0: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8020CDA4: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
L_8020CDA8:
    // 0x8020CDA8: nop

    // 0x8020CDAC: bltz        $t5, L_8020CD9C
    if (SIGNED(ctx->r13) < 0) {
        // 0x8020CDB0: nop
    
            goto L_8020CD9C;
    }
    // 0x8020CDB0: nop

L_8020CDB4:
    // 0x8020CDB4: lhu         $t7, 0x6($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X6);
    // 0x8020CDB8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020CDBC: sh          $t5, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r13;
    // 0x8020CDC0: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x8020CDC4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020CDC8: bgez        $t7, L_8020CDDC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8020CDCC: cvt.s.w     $f0, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
            goto L_8020CDDC;
    }
    // 0x8020CDCC: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020CDD0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020CDD4: nop

    // 0x8020CDD8: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
L_8020CDDC:
    // 0x8020CDDC: mul.s       $f6, $f20, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8020CDE0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020CDE4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020CDE8: add.s       $f16, $f6, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x8020CDEC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020CDF0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020CDF4: nop

    // 0x8020CDF8: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8020CDFC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020CE00: nop

    // 0x8020CE04: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020CE08: beql        $t9, $zero, L_8020CE58
    if (ctx->r25 == 0) {
        // 0x8020CE0C: mfc1        $t9, $f10
        ctx->r25 = (int32_t)ctx->f10.u32l;
            goto L_8020CE58;
    }
    goto skip_15;
    // 0x8020CE0C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    skip_15:
    // 0x8020CE10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020CE14: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020CE18: sub.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x8020CE1C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020CE20: nop

    // 0x8020CE24: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020CE28: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020CE2C: nop

    // 0x8020CE30: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020CE34: bne         $t9, $zero, L_8020CE4C
    if (ctx->r25 != 0) {
        // 0x8020CE38: nop
    
            goto L_8020CE4C;
    }
    // 0x8020CE38: nop

    // 0x8020CE3C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8020CE40: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020CE44: b           L_8020CE64
    // 0x8020CE48: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8020CE64;
    // 0x8020CE48: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8020CE4C:
    // 0x8020CE4C: b           L_8020CE64
    // 0x8020CE50: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8020CE64;
    // 0x8020CE50: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8020CE54: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
L_8020CE58:
    // 0x8020CE58: nop

    // 0x8020CE5C: bltz        $t9, L_8020CE4C
    if (SIGNED(ctx->r25) < 0) {
        // 0x8020CE60: nop
    
            goto L_8020CE4C;
    }
    // 0x8020CE60: nop

L_8020CE64:
    // 0x8020CE64: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020CE68: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8020CE6C: bne         $s0, $v0, L_8020CBAC
    if (ctx->r16 != ctx->r2) {
        // 0x8020CE70: sh          $t9, -0x2($s0)
        MEM_H(-0X2, ctx->r16) = ctx->r25;
            goto L_8020CBAC;
    }
    // 0x8020CE70: sh          $t9, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r25;
L_8020CE74:
    // 0x8020CE74: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020CE78:
    // 0x8020CE78: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8020CE7C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x8020CE80: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x8020CE84: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x8020CE88: jr          $ra
    // 0x8020CE8C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x8020CE8C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_8023FB90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FB90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023FB94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023FB98: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x8023FB9C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8023FBA0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8023FBA4: beql        $a2, $zero, L_8023FC34
    if (ctx->r6 == 0) {
        // 0x8023FBA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8023FC34;
    }
    goto skip_0;
    // 0x8023FBA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023FBAC: lw          $t6, 0xD8($a2)
    ctx->r14 = MEM_W(ctx->r6, 0XD8);
    // 0x8023FBB0: beql        $t6, $zero, L_8023FC1C
    if (ctx->r14 == 0) {
        // 0x8023FBB4: or          $a0, $t0, $zero
        ctx->r4 = ctx->r8 | 0;
            goto L_8023FC1C;
    }
    goto skip_1;
    // 0x8023FBB4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    skip_1:
    // 0x8023FBB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8023FBBC: jal         0x80237840
    // 0x8023FBC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80237840(rdram, ctx);
        goto after_0;
    // 0x8023FBC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8023FBC4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8023FBC8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8023FBCC: beq         $v0, $zero, L_8023FC30
    if (ctx->r2 == 0) {
        // 0x8023FBD0: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8023FC30;
    }
    // 0x8023FBD0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023FBD4: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
    // 0x8023FBD8: lw          $t7, 0x1C($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X1C);
    // 0x8023FBDC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023FBE0: lw          $t9, 0xD8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XD8);
    // 0x8023FBE4: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x8023FBE8: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x8023FBEC: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8023FBF0: lw          $t2, 0x8($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X8);
    // 0x8023FBF4: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x8023FBF8: lw          $t3, 0x8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X8);
    // 0x8023FBFC: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x8023FC00: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x8023FC04: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8023FC08: jalr        $t9
    // 0x8023FC0C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8023FC0C: nop

    after_1:
    // 0x8023FC10: b           L_8023FC2C
    // 0x8023FC14: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
        goto L_8023FC2C;
    // 0x8023FC14: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8023FC18: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
L_8023FC1C:
    // 0x8023FC1C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8023FC20: jal         0x80237790
    // 0x8023FC24: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80237790(rdram, ctx);
        goto after_2;
    // 0x8023FC24: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_2:
    // 0x8023FC28: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
L_8023FC2C:
    // 0x8023FC2C: sw          $zero, 0x8($a3)
    MEM_W(0X8, ctx->r7) = 0;
L_8023FC30:
    // 0x8023FC30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023FC34:
    // 0x8023FC34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023FC38: jr          $ra
    // 0x8023FC3C: nop

    return;
    // 0x8023FC3C: nop

;}
RECOMP_FUNC void func_80245924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80245924: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80245928: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8024592C: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x80245930: addiu       $t0, $t0, 0x3970
    ctx->r8 = ADD32(ctx->r8, 0X3970);
    // 0x80245934: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80245938: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8024593C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80245940: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80245944: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x80245948: addiu       $v0, $v0, 0x3970
    ctx->r2 = ADD32(ctx->r2, 0X3970);
    // 0x8024594C: addiu       $a0, $a0, 0x39B0
    ctx->r4 = ADD32(ctx->r4, 0X39B0);
L_80245950:
    // 0x80245950: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80245954: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80245958: bne         $at, $zero, L_80245950
    if (ctx->r1 != 0) {
        // 0x8024595C: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_80245950;
    }
    // 0x8024595C: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x80245960: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80245964: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80245968: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8024596C: addiu       $t9, $zero, 0x21
    ctx->r25 = ADD32(0, 0X21);
    // 0x80245970: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80245974: lhu         $a0, 0x56($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X56);
    // 0x80245978: sw          $t6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->r14;
    // 0x8024597C: sb          $t7, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r15;
    // 0x80245980: sb          $t8, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r24;
    // 0x80245984: sb          $t9, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r25;
    // 0x80245988: sb          $t1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r9;
    // 0x8024598C: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x80245990: jal         0x8024A590
    // 0x80245994: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    func_8024A590(rdram, ctx);
        goto after_0;
    // 0x80245994: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    after_0:
    // 0x80245998: lhu         $t2, 0x56($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X56);
    // 0x8024599C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x802459A0: sll         $t3, $t2, 5
    ctx->r11 = S32(ctx->r10 << 5);
    // 0x802459A4: or          $t4, $v0, $t3
    ctx->r12 = ctx->r2 | ctx->r11;
    // 0x802459A8: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x802459AC: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x802459B0: sh          $t4, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r12;
    // 0x802459B4: sb          $t5, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = ctx->r13;
    // 0x802459B8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802459BC: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x802459C0: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
L_802459C4:
    // 0x802459C4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802459C8: sltu        $at, $a0, $a1
    ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x802459CC: bne         $at, $zero, L_802459C4
    if (ctx->r1 != 0) {
        // 0x802459D0: sb          $v0, 0x5($a0)
        MEM_B(0X5, ctx->r4) = ctx->r2;
            goto L_802459C4;
    }
    // 0x802459D0: sb          $v0, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r2;
    // 0x802459D4: beq         $a3, $zero, L_80245A20
    if (ctx->r7 == 0) {
        // 0x802459D8: addiu       $t6, $sp, 0x24
        ctx->r14 = ADD32(ctx->r29, 0X24);
            goto L_80245A20;
    }
    // 0x802459D8: addiu       $t6, $sp, 0x24
    ctx->r14 = ADD32(ctx->r29, 0X24);
    // 0x802459DC: blez        $a3, L_80245A20
    if (SIGNED(ctx->r7) <= 0) {
        // 0x802459E0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80245A20;
    }
    // 0x802459E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802459E4: andi        $a0, $a3, 0x3
    ctx->r4 = ctx->r7 & 0X3;
    // 0x802459E8: beq         $a0, $zero, L_80245A04
    if (ctx->r4 == 0) {
        // 0x802459EC: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80245A04;
    }
    // 0x802459EC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_802459F0:
    // 0x802459F0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x802459F4: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x802459F8: bne         $v0, $a2, L_802459F0
    if (ctx->r2 != ctx->r6) {
        // 0x802459FC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_802459F0;
    }
    // 0x802459FC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80245A00: beq         $a2, $a3, L_80245A20
    if (ctx->r6 == ctx->r7) {
        // 0x80245A04: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_80245A20;
    }
L_80245A04:
    // 0x80245A04: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80245A08: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x80245A0C: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x80245A10: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x80245A14: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80245A18: bne         $a2, $a3, L_80245A04
    if (ctx->r6 != ctx->r7) {
        // 0x80245A1C: sb          $zero, -0x4($v1)
        MEM_B(-0X4, ctx->r3) = 0;
            goto L_80245A04;
    }
    // 0x80245A1C: sb          $zero, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = 0;
L_80245A20:
    // 0x80245A20: or          $t9, $v1, $zero
    ctx->r25 = ctx->r3 | 0;
    // 0x80245A24: addiu       $t8, $t6, 0x24
    ctx->r24 = ADD32(ctx->r14, 0X24);
L_80245A28:
    // 0x80245A28: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80245A2C: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80245A30: swl         $at, 0x0($t9)
    do_swl(rdram, 0X0, ctx->r25, ctx->r1);
    // 0x80245A34: swr         $at, 0x3($t9)
    do_swr(rdram, 0X3, ctx->r25, ctx->r1);
    // 0x80245A38: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x80245A3C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80245A40: swl         $at, -0x8($t9)
    do_swl(rdram, -0X8, ctx->r25, ctx->r1);
    // 0x80245A44: swr         $at, -0x5($t9)
    do_swr(rdram, -0X5, ctx->r25, ctx->r1);
    // 0x80245A48: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x80245A4C: nop

    // 0x80245A50: swl         $at, -0x4($t9)
    do_swl(rdram, -0X4, ctx->r25, ctx->r1);
    // 0x80245A54: bne         $t6, $t8, L_80245A28
    if (ctx->r14 != ctx->r24) {
        // 0x80245A58: swr         $at, -0x1($t9)
        do_swr(rdram, -0X1, ctx->r25, ctx->r1);
            goto L_80245A28;
    }
    // 0x80245A58: swr         $at, -0x1($t9)
    do_swr(rdram, -0X1, ctx->r25, ctx->r1);
    // 0x80245A5C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80245A60: addiu       $t1, $zero, 0xFE
    ctx->r9 = ADD32(0, 0XFE);
    // 0x80245A64: swl         $at, 0x0($t9)
    do_swl(rdram, 0X0, ctx->r25, ctx->r1);
    // 0x80245A68: swr         $at, 0x3($t9)
    do_swr(rdram, 0X3, ctx->r25, ctx->r1);
    // 0x80245A6C: sb          $t1, 0x28($v1)
    MEM_B(0X28, ctx->r3) = ctx->r9;
    // 0x80245A70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80245A74: addiu       $v1, $v1, 0x28
    ctx->r3 = ADD32(ctx->r3, 0X28);
    // 0x80245A78: jr          $ra
    // 0x80245A7C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80245A7C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8022A848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A848: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A84C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8022A850: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8022A854: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8022A858: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8022A85C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8022A860: sub.s       $f2, $f14, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x8022A864: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A868: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8022A86C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8022A870: div.s       $f6, $f16, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f16.fl, ctx->f2.fl);
    // 0x8022A874: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8022A878: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8022A87C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022A880: lui         $a1, 0x3FC9
    ctx->r5 = S32(0X3FC9 << 16);
    // 0x8022A884: ori         $a1, $a1, 0xFDA
    ctx->r5 = ctx->r5 | 0XFDA;
    // 0x8022A888: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x8022A88C: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x8022A890: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8022A894: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8022A898: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x8022A89C: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8022A8A0: div.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8022A8A4: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
    // 0x8022A8A8: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8022A8AC: add.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x8022A8B0: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8022A8B4: div.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8022A8B8: swc1        $f18, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f18.u32l;
    // 0x8022A8BC: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8022A8C0: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8022A8C4: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x8022A8C8: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x8022A8CC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022A8D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8022A8D4: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x8022A8D8: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x8022A8DC: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8022A8E0: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x8022A8E4: div.s       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8022A8E8: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x8022A8EC: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x8022A8F0: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x8022A8F4: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x8022A8F8: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
    // 0x8022A8FC: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x8022A900: jal         0x80229CD4
    // 0x8022A904: swc1        $f18, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f18.u32l;
    func_80229CD4(rdram, ctx);
        goto after_0;
    // 0x8022A904: swc1        $f18, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f18.u32l;
    after_0:
    // 0x8022A908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A90C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022A910: jr          $ra
    // 0x8022A914: nop

    return;
    // 0x8022A914: nop

;}
RECOMP_FUNC void func_80247820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247820: lui         $t6, 0xA404
    ctx->r14 = S32(0XA404 << 16);
    // 0x80247824: jr          $ra
    // 0x80247828: lw          $v0, 0x10($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X10);
    return;
    // 0x80247828: lw          $v0, 0x10($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X10);
;}
RECOMP_FUNC void func_80201880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80201880: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80201884: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x80201888: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x8020188C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201890: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201898: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8020189C: bne         $at, $zero, L_802018D4
    if (ctx->r1 != 0) {
        // 0x802018A0: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_802018D4;
    }
    // 0x802018A0: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x802018A4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802018A8: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802018AC: addiu       $a1, $a1, 0x1DDC
    ctx->r5 = ADD32(ctx->r5, 0X1DDC);
    // 0x802018B0: addiu       $a0, $a0, 0x1DC4
    ctx->r4 = ADD32(ctx->r4, 0X1DC4);
    // 0x802018B4: addiu       $a2, $zero, 0x184
    ctx->r6 = ADD32(0, 0X184);
    // 0x802018B8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x802018BC: jal         0x80231C9C
    // 0x802018C0: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    func_80231C9C(rdram, ctx);
        goto after_0;
    // 0x802018C0: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    after_0:
    // 0x802018C4: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x802018C8: lhu         $v0, 0xBFA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBFA);
    // 0x802018CC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802018D0: lbu         $a3, 0x23($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X23);
L_802018D4:
    // 0x802018D4: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802018D8: bne         $at, $zero, L_802018EC
    if (ctx->r1 != 0) {
        // 0x802018DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802018EC;
    }
    // 0x802018DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802018E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802018E4: b           L_80201918
    // 0x802018E8: nop

        goto L_80201918;
    // 0x802018E8: nop

L_802018EC:
    // 0x802018EC: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x802018F0: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x802018F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802018F8: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x802018FC: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80201900: lw          $t6, 0x6DE4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6DE4);
    // 0x80201904: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80201908: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x8020190C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80201910: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80201914: lwc1        $f0, 0x70($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X70);
L_80201918:
    // 0x80201918: jr          $ra
    // 0x8020191C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8020191C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802388BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802388BC: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x802388C0: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x802388C4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x802388C8: bne         $t6, $zero, L_802388D8
    if (ctx->r14 != 0) {
        // 0x802388CC: lw          $v0, 0x10($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X10);
            goto L_802388D8;
    }
    // 0x802388CC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802388D0: jr          $ra
    // 0x802388D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802388D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802388D8:
    // 0x802388D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802388DC: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x802388E0: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
L_802388E4:
    // 0x802388E4: addiu       $t6, $a2, 0x1
    ctx->r14 = ADD32(ctx->r6, 0X1);
    // 0x802388E8: srlv        $t7, $a1, $a2
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r6 & 31));
    // 0x802388EC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802388F0: beql        $t8, $zero, L_80238934
    if (ctx->r24 == 0) {
        // 0x802388F4: srlv        $t7, $a1, $t6
        ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
            goto L_80238934;
    }
    goto skip_0;
    // 0x802388F4: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
    skip_0:
    // 0x802388F8: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x802388FC: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x80238900: addu        $a3, $a0, $t9
    ctx->r7 = ADD32(ctx->r4, ctx->r25);
    // 0x80238904: beql        $t3, $zero, L_80238920
    if (ctx->r11 == 0) {
        // 0x80238908: lw          $t0, 0xB8($a3)
        ctx->r8 = MEM_W(ctx->r7, 0XB8);
            goto L_80238920;
    }
    goto skip_1;
    // 0x80238908: lw          $t0, 0xB8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XB8);
    skip_1:
    // 0x8023890C: lw          $t4, 0xB8($a3)
    ctx->r12 = MEM_W(ctx->r7, 0XB8);
    // 0x80238910: subu        $t5, $t4, $v0
    ctx->r13 = SUB32(ctx->r12, ctx->r2);
    // 0x80238914: sw          $t5, 0xB8($a3)
    MEM_W(0XB8, ctx->r7) = ctx->r13;
    // 0x80238918: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x8023891C: lw          $t0, 0xB8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XB8);
L_80238920:
    // 0x80238920: sltu        $at, $t0, $v1
    ctx->r1 = ctx->r8 < ctx->r3 ? 1 : 0;
    // 0x80238924: beql        $at, $zero, L_80238934
    if (ctx->r1 == 0) {
        // 0x80238928: srlv        $t7, $a1, $t6
        ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
            goto L_80238934;
    }
    goto skip_2;
    // 0x80238928: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
    skip_2:
    // 0x8023892C: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x80238930: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
L_80238934:
    // 0x80238934: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80238938: beq         $t8, $zero, L_80238978
    if (ctx->r24 == 0) {
        // 0x8023893C: addiu       $t6, $a2, 0x2
        ctx->r14 = ADD32(ctx->r6, 0X2);
            goto L_80238978;
    }
    // 0x8023893C: addiu       $t6, $a2, 0x2
    ctx->r14 = ADD32(ctx->r6, 0X2);
    // 0x80238940: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x80238944: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x80238948: addu        $a3, $a0, $t9
    ctx->r7 = ADD32(ctx->r4, ctx->r25);
    // 0x8023894C: beql        $t3, $zero, L_80238968
    if (ctx->r11 == 0) {
        // 0x80238950: lw          $t0, 0xBC($a3)
        ctx->r8 = MEM_W(ctx->r7, 0XBC);
            goto L_80238968;
    }
    goto skip_3;
    // 0x80238950: lw          $t0, 0xBC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XBC);
    skip_3:
    // 0x80238954: lw          $t4, 0xBC($a3)
    ctx->r12 = MEM_W(ctx->r7, 0XBC);
    // 0x80238958: subu        $t5, $t4, $v0
    ctx->r13 = SUB32(ctx->r12, ctx->r2);
    // 0x8023895C: sw          $t5, 0xBC($a3)
    MEM_W(0XBC, ctx->r7) = ctx->r13;
    // 0x80238960: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x80238964: lw          $t0, 0xBC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XBC);
L_80238968:
    // 0x80238968: sltu        $at, $t0, $v1
    ctx->r1 = ctx->r8 < ctx->r3 ? 1 : 0;
    // 0x8023896C: beql        $at, $zero, L_8023897C
    if (ctx->r1 == 0) {
        // 0x80238970: srlv        $t7, $a1, $t6
        ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
            goto L_8023897C;
    }
    goto skip_4;
    // 0x80238970: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
    skip_4:
    // 0x80238974: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_80238978:
    // 0x80238978: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
L_8023897C:
    // 0x8023897C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80238980: beq         $t8, $zero, L_802389C0
    if (ctx->r24 == 0) {
        // 0x80238984: addiu       $t6, $a2, 0x3
        ctx->r14 = ADD32(ctx->r6, 0X3);
            goto L_802389C0;
    }
    // 0x80238984: addiu       $t6, $a2, 0x3
    ctx->r14 = ADD32(ctx->r6, 0X3);
    // 0x80238988: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x8023898C: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x80238990: addu        $a3, $a0, $t9
    ctx->r7 = ADD32(ctx->r4, ctx->r25);
    // 0x80238994: beql        $t3, $zero, L_802389B0
    if (ctx->r11 == 0) {
        // 0x80238998: lw          $t0, 0xC0($a3)
        ctx->r8 = MEM_W(ctx->r7, 0XC0);
            goto L_802389B0;
    }
    goto skip_5;
    // 0x80238998: lw          $t0, 0xC0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC0);
    skip_5:
    // 0x8023899C: lw          $t4, 0xC0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0XC0);
    // 0x802389A0: subu        $t5, $t4, $v0
    ctx->r13 = SUB32(ctx->r12, ctx->r2);
    // 0x802389A4: sw          $t5, 0xC0($a3)
    MEM_W(0XC0, ctx->r7) = ctx->r13;
    // 0x802389A8: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x802389AC: lw          $t0, 0xC0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC0);
L_802389B0:
    // 0x802389B0: sltu        $at, $t0, $v1
    ctx->r1 = ctx->r8 < ctx->r3 ? 1 : 0;
    // 0x802389B4: beql        $at, $zero, L_802389C4
    if (ctx->r1 == 0) {
        // 0x802389B8: srlv        $t7, $a1, $t6
        ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
            goto L_802389C4;
    }
    goto skip_6;
    // 0x802389B8: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
    skip_6:
    // 0x802389BC: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_802389C0:
    // 0x802389C0: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
L_802389C4:
    // 0x802389C4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802389C8: beql        $t8, $zero, L_80238A08
    if (ctx->r24 == 0) {
        // 0x802389CC: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_80238A08;
    }
    goto skip_7;
    // 0x802389CC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    skip_7:
    // 0x802389D0: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x802389D4: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x802389D8: addu        $a3, $a0, $t9
    ctx->r7 = ADD32(ctx->r4, ctx->r25);
    // 0x802389DC: beql        $t3, $zero, L_802389F4
    if (ctx->r11 == 0) {
        // 0x802389E0: lw          $a1, 0xC4($a3)
        ctx->r5 = MEM_W(ctx->r7, 0XC4);
            goto L_802389F4;
    }
    goto skip_8;
    // 0x802389E0: lw          $a1, 0xC4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC4);
    skip_8:
    // 0x802389E4: lw          $t4, 0xC4($a3)
    ctx->r12 = MEM_W(ctx->r7, 0XC4);
    // 0x802389E8: subu        $t5, $t4, $v0
    ctx->r13 = SUB32(ctx->r12, ctx->r2);
    // 0x802389EC: sw          $t5, 0xC4($a3)
    MEM_W(0XC4, ctx->r7) = ctx->r13;
    // 0x802389F0: lw          $a1, 0xC4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC4);
L_802389F4:
    // 0x802389F4: sltu        $at, $a1, $v1
    ctx->r1 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x802389F8: beql        $at, $zero, L_80238A08
    if (ctx->r1 == 0) {
        // 0x802389FC: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_80238A08;
    }
    goto skip_9;
    // 0x802389FC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    skip_9:
    // 0x80238A00: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80238A04: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_80238A08:
    // 0x80238A08: bnel        $a2, $t2, L_802388E4
    if (ctx->r6 != ctx->r10) {
        // 0x80238A0C: lw          $a1, 0x4($a0)
        ctx->r5 = MEM_W(ctx->r4, 0X4);
            goto L_802388E4;
    }
    goto skip_10;
    // 0x80238A0C: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    skip_10:
    // 0x80238A10: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x80238A14: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
    // 0x80238A18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238A1C: jr          $ra
    // 0x80238A20: nop

    return;
    // 0x80238A20: nop

;}
RECOMP_FUNC void func_8022A47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A47C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8022A480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A484: bne         $a1, $a0, L_8022A490
    if (ctx->r5 != ctx->r4) {
        // 0x8022A488: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8022A490;
    }
    // 0x8022A488: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8022A48C: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
L_8022A490:
    // 0x8022A490: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8022A494: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x8022A498: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8022A49C: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x8022A4A0: lwc1        $f8, 0x20($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X20);
    // 0x8022A4A4: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x8022A4A8: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8022A4AC: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x8022A4B0: lwc1        $f16, 0x14($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X14);
    // 0x8022A4B4: swc1        $f16, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f16.u32l;
    // 0x8022A4B8: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x8022A4BC: swc1        $f18, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
    // 0x8022A4C0: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8022A4C4: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    // 0x8022A4C8: lwc1        $f6, 0x18($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X18);
    // 0x8022A4CC: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x8022A4D0: lwc1        $f8, 0x28($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8022A4D4: bne         $a1, $v0, L_8022A4E4
    if (ctx->r5 != ctx->r2) {
        // 0x8022A4D8: swc1        $f8, 0x28($v0)
        MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
            goto L_8022A4E4;
    }
    // 0x8022A4D8: swc1        $f8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
    // 0x8022A4DC: jal         0x80228DE0
    // 0x8022A4E0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x8022A4E0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
L_8022A4E4:
    // 0x8022A4E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A4E8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8022A4EC: jr          $ra
    // 0x8022A4F0: nop

    return;
    // 0x8022A4F0: nop

;}
RECOMP_FUNC void func_80212C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80212C84: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80212C88: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80212C8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80212C90: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80212C94: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80212C98: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80212C9C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80212CA0: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x80212CA4: sll         $t2, $a2, 4
    ctx->r10 = S32(ctx->r6 << 4);
    // 0x80212CA8: addu        $v1, $a0, $t7
    ctx->r3 = ADD32(ctx->r4, ctx->r15);
    // 0x80212CAC: addu        $s0, $a0, $t2
    ctx->r16 = ADD32(ctx->r4, ctx->r10);
    // 0x80212CB0: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x80212CB4: lh          $t3, 0x0($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X0);
    // 0x80212CB8: lh          $t9, 0x2($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2);
    // 0x80212CBC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80212CC0: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80212CC4: lh          $t0, 0x4($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X4);
    // 0x80212CC8: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80212CCC: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80212CD0: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80212CD4: sll         $t7, $a3, 4
    ctx->r15 = S32(ctx->r7 << 4);
    // 0x80212CD8: addu        $s1, $a0, $t7
    ctx->r17 = ADD32(ctx->r4, ctx->r15);
    // 0x80212CDC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80212CE0: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80212CE4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x80212CE8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x80212CEC: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80212CF0: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x80212CF4: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80212CF8: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x80212CFC: lh          $t4, 0x2($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2);
    // 0x80212D00: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80212D04: nop

    // 0x80212D08: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80212D0C: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x80212D10: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x80212D14: lh          $t5, 0x4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X4);
    // 0x80212D18: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80212D1C: nop

    // 0x80212D20: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80212D24: sub.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x80212D28: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x80212D2C: lh          $t8, 0x0($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X0);
    // 0x80212D30: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80212D34: nop

    // 0x80212D38: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80212D3C: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x80212D40: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x80212D44: lh          $t9, 0x2($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X2);
    // 0x80212D48: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80212D4C: nop

    // 0x80212D50: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80212D54: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x80212D58: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x80212D5C: lh          $t0, 0x4($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X4);
    // 0x80212D60: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x80212D64: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80212D68: nop

    // 0x80212D6C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80212D70: sub.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x80212D74: jal         0x80234C78
    // 0x80212D78: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    func_80234C78(rdram, ctx);
        goto after_0;
    // 0x80212D78: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80212D7C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80212D80: jal         0x80234D30
    // 0x80212D84: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_80234D30(rdram, ctx);
        goto after_1;
    // 0x80212D84: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_1:
    // 0x80212D88: bne         $v0, $zero, L_80212E0C
    if (ctx->r2 != 0) {
        // 0x80212D8C: lw          $v1, 0x28($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X28);
            goto L_80212E0C;
    }
    // 0x80212D8C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80212D90: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80212D94: addiu       $a0, $a0, 0x2EA8
    ctx->r4 = ADD32(ctx->r4, 0X2EA8);
    // 0x80212D98: jal         0x80231A24
    // 0x80212D9C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x80212D9C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_2:
    // 0x80212DA0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80212DA4: addiu       $a0, $a0, 0x2ED0
    ctx->r4 = ADD32(ctx->r4, 0X2ED0);
    // 0x80212DA8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x80212DAC: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x80212DB0: jal         0x80231A24
    // 0x80212DB4: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x80212DB4: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    after_3:
    // 0x80212DB8: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80212DBC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80212DC0: addiu       $a0, $a0, 0x2EE4
    ctx->r4 = ADD32(ctx->r4, 0X2EE4);
    // 0x80212DC4: lh          $a1, 0x0($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X0);
    // 0x80212DC8: lh          $a2, 0x2($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X2);
    // 0x80212DCC: jal         0x80231A24
    // 0x80212DD0: lh          $a3, 0x4($v1)
    ctx->r7 = MEM_H(ctx->r3, 0X4);
    func_80231A24(rdram, ctx);
        goto after_4;
    // 0x80212DD0: lh          $a3, 0x4($v1)
    ctx->r7 = MEM_H(ctx->r3, 0X4);
    after_4:
    // 0x80212DD4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80212DD8: addiu       $a0, $a0, 0x2EF8
    ctx->r4 = ADD32(ctx->r4, 0X2EF8);
    // 0x80212DDC: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x80212DE0: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x80212DE4: jal         0x80231A24
    // 0x80212DE8: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    func_80231A24(rdram, ctx);
        goto after_5;
    // 0x80212DE8: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    after_5:
    // 0x80212DEC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80212DF0: addiu       $a0, $a0, 0x2F0C
    ctx->r4 = ADD32(ctx->r4, 0X2F0C);
    // 0x80212DF4: lh          $a1, 0x0($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X0);
    // 0x80212DF8: lh          $a2, 0x2($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X2);
    // 0x80212DFC: jal         0x80231A24
    // 0x80212E00: lh          $a3, 0x4($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X4);
    func_80231A24(rdram, ctx);
        goto after_6;
    // 0x80212E00: lh          $a3, 0x4($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X4);
    after_6:
    // 0x80212E04: b           L_80212E10
    // 0x80212E08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80212E10;
    // 0x80212E08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80212E0C:
    // 0x80212E0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80212E10:
    // 0x80212E10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80212E14: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80212E18: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80212E1C: jr          $ra
    // 0x80212E20: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80212E20: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80208260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80208260: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80208264: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80208268: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x8020826C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80208270: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80208274: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80208278: bne         $a3, $zero, L_80208284
    if (ctx->r7 != 0) {
        // 0x8020827C: sw          $zero, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = 0;
            goto L_80208284;
    }
    // 0x8020827C: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x80208280: addiu       $s0, $sp, 0x4C
    ctx->r16 = ADD32(ctx->r29, 0X4C);
L_80208284:
    // 0x80208284: jal         0x80208230
    // 0x80208288: nop

    func_80208230(rdram, ctx);
        goto after_0;
    // 0x80208288: nop

    after_0:
    // 0x8020828C: beq         $v0, $zero, L_8020829C
    if (ctx->r2 == 0) {
        // 0x80208290: lui         $a0, 0x8026
        ctx->r4 = S32(0X8026 << 16);
            goto L_8020829C;
    }
    // 0x80208290: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80208294: b           L_80208328
    // 0x80208298: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
        goto L_80208328;
    // 0x80208298: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_8020829C:
    // 0x8020829C: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802082A0: addiu       $t6, $t6, -0x1900
    ctx->r14 = ADD32(ctx->r14, -0X1900);
    // 0x802082A4: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x802082A8: lui         $a3, 0x8025
    ctx->r7 = S32(0X8025 << 16);
    // 0x802082AC: addiu       $t7, $sp, 0x28
    ctx->r15 = ADD32(ctx->r29, 0X28);
    // 0x802082B0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802082B4: addiu       $a3, $a3, -0x1910
    ctx->r7 = ADD32(ctx->r7, -0X1910);
    // 0x802082B8: lw          $a2, -0x18FC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X18FC);
    // 0x802082BC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802082C0: addiu       $a0, $a0, -0x3CE0
    ctx->r4 = ADD32(ctx->r4, -0X3CE0);
    // 0x802082C4: jal         0x80239120
    // 0x802082C8: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    func_80239120(rdram, ctx);
        goto after_1;
    // 0x802082C8: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_1:
    // 0x802082CC: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x802082D0: addiu       $a0, $a0, -0x3CE0
    ctx->r4 = ADD32(ctx->r4, -0X3CE0);
    // 0x802082D4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802082D8: jal         0x802392C0
    // 0x802082DC: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_802392C0(rdram, ctx);
        goto after_2;
    // 0x802082DC: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x802082E0: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x802082E4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x802082E8: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x802082EC: addiu       $a0, $a0, -0x3CE0
    ctx->r4 = ADD32(ctx->r4, -0X3CE0);
    // 0x802082F0: sltu        $at, $v1, $t8
    ctx->r1 = ctx->r3 < ctx->r24 ? 1 : 0;
    // 0x802082F4: beq         $at, $zero, L_80208304
    if (ctx->r1 == 0) {
        // 0x802082F8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80208304;
    }
    // 0x802082F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802082FC: b           L_8020830C
    // 0x80208300: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
        goto L_8020830C;
    // 0x80208300: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
L_80208304:
    // 0x80208304: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80208308: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
L_8020830C:
    // 0x8020830C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80208310: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80208314: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80208318: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8020831C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80208320: jal         0x80239650
    // 0x80208324: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_80239650(rdram, ctx);
        goto after_3;
    // 0x80208324: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_3:
L_80208328:
    // 0x80208328: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8020832C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80208330: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80208334: jr          $ra
    // 0x80208338: nop

    return;
    // 0x80208338: nop

;}
RECOMP_FUNC void func_802490E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802490E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802490E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802490E8: jal         0x80241760
    // 0x802490EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x802490EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x802490F0: jal         0x80238B80
    // 0x802490F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_80238B80(rdram, ctx);
        goto after_1;
    // 0x802490F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_1:
    // 0x802490F8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x802490FC: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80249100: lw          $t7, 0x5F68($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5F68);
    // 0x80249104: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80249108: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8024910C: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x80249110: lw          $t1, 0x5F64($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5F64);
    // 0x80249114: lw          $t0, 0x5F60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5F60);
    // 0x80249118: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x8024911C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80249120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80249124: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80249128: jal         0x80241780
    // 0x8024912C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_80241780(rdram, ctx);
        goto after_2;
    // 0x8024912C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_2:
    // 0x80249130: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80249134: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80249138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024913C: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
    // 0x80249140: addu        $v1, $t3, $t5
    ctx->r3 = ADD32(ctx->r11, ctx->r13);
    // 0x80249144: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80249148: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x8024914C: sltu        $at, $v1, $t5
    ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
    // 0x80249150: addu        $v0, $at, $t2
    ctx->r2 = ADD32(ctx->r1, ctx->r10);
    // 0x80249154: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80249158: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8024915C: jr          $ra
    // 0x80249160: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    return;
    // 0x80249160: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
;}
RECOMP_FUNC void func_802381D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802381D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802381D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802381DC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x802381E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802381E4: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
    // 0x802381E8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x802381EC: lw          $a2, 0x10($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X10);
    // 0x802381F0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802381F4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x802381F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802381FC: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
L_80238200:
    // 0x80238200: srlv        $t7, $t6, $v0
    ctx->r15 = S32(U32(ctx->r14) >> (ctx->r2 & 31));
    // 0x80238204: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80238208: beql        $t8, $zero, L_8023824C
    if (ctx->r24 == 0) {
        // 0x8023820C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8023824C;
    }
    goto skip_0;
    // 0x8023820C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x80238210: lw          $t6, 0x14($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X14);
    // 0x80238214: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80238218: addu        $v1, $t4, $t9
    ctx->r3 = ADD32(ctx->r12, ctx->r25);
    // 0x8023821C: beql        $t6, $zero, L_80238234
    if (ctx->r14 == 0) {
        // 0x80238220: lw          $a0, 0xB8($v1)
        ctx->r4 = MEM_W(ctx->r3, 0XB8);
            goto L_80238234;
    }
    goto skip_1;
    // 0x80238220: lw          $a0, 0xB8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XB8);
    skip_1:
    // 0x80238224: lw          $t7, 0xB8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XB8);
    // 0x80238228: subu        $t8, $t7, $a2
    ctx->r24 = SUB32(ctx->r15, ctx->r6);
    // 0x8023822C: sw          $t8, 0xB8($v1)
    MEM_W(0XB8, ctx->r3) = ctx->r24;
    // 0x80238230: lw          $a0, 0xB8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XB8);
L_80238234:
    // 0x80238234: sltu        $at, $a0, $t1
    ctx->r1 = ctx->r4 < ctx->r9 ? 1 : 0;
    // 0x80238238: beql        $at, $zero, L_8023824C
    if (ctx->r1 == 0) {
        // 0x8023823C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8023824C;
    }
    goto skip_2;
    // 0x8023823C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_2:
    // 0x80238240: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x80238244: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x80238248: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023824C:
    // 0x8023824C: bnel        $v0, $a1, L_80238200
    if (ctx->r2 != ctx->r5) {
        // 0x80238250: lw          $t6, 0x4($t4)
        ctx->r14 = MEM_W(ctx->r12, 0X4);
            goto L_80238200;
    }
    goto skip_3;
    // 0x80238250: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
    skip_3:
    // 0x80238254: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80238258: jal         0x802380B0
    // 0x8023825C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_802380B0(rdram, ctx);
        goto after_0;
    // 0x8023825C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_0:
    // 0x80238260: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80238264: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x80238268: bne         $v0, $at, L_802383D4
    if (ctx->r2 != ctx->r1) {
        // 0x8023826C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_802383D4;
    }
    // 0x8023826C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80238270: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80238274: jal         0x802380B0
    // 0x80238278: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_802380B0(rdram, ctx);
        goto after_1;
    // 0x80238278: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_1:
    // 0x8023827C: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x80238280: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x80238284: bne         $v0, $at, L_802382D8
    if (ctx->r2 != ctx->r1) {
        // 0x80238288: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_802382D8;
    }
    // 0x80238288: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8023828C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80238290: sh          $t9, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r25;
    // 0x80238294: sb          $t2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r10;
    // 0x80238298: sb          $a2, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r6;
    // 0x8023829C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x802382A0: jal         0x802380B0
    // 0x802382A4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_802380B0(rdram, ctx);
        goto after_2;
    // 0x802382A4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_2:
    // 0x802382A8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802382AC: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x802382B0: jal         0x802380B0
    // 0x802382B4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_802380B0(rdram, ctx);
        goto after_3;
    // 0x802382B4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_3:
    // 0x802382B8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802382BC: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x802382C0: jal         0x802380B0
    // 0x802382C4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_802380B0(rdram, ctx);
        goto after_4;
    // 0x802382C4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_4:
    // 0x802382C8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x802382CC: addu        $t6, $t4, $t3
    ctx->r14 = ADD32(ctx->r12, ctx->r11);
    // 0x802382D0: b           L_80238470
    // 0x802382D4: sb          $zero, 0xA8($t6)
    MEM_B(0XA8, ctx->r14) = 0;
        goto L_80238470;
    // 0x802382D4: sb          $zero, 0xA8($t6)
    MEM_B(0XA8, ctx->r14) = 0;
L_802382D8:
    // 0x802382D8: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x802382DC: bnel        $v1, $at, L_80238318
    if (ctx->r3 != ctx->r1) {
        // 0x802382E0: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_80238318;
    }
    goto skip_4;
    // 0x802382E0: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    skip_4:
    // 0x802382E4: lw          $t7, 0x4($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X4);
    // 0x802382E8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802382EC: sllv        $t9, $t8, $t3
    ctx->r25 = S32(ctx->r24 << (ctx->r11 & 31));
    // 0x802382F0: xor         $t6, $t7, $t9
    ctx->r14 = ctx->r15 ^ ctx->r25;
    // 0x802382F4: beq         $t6, $zero, L_80238308
    if (ctx->r14 == 0) {
        // 0x802382F8: sw          $t6, 0x4($t4)
        MEM_W(0X4, ctx->r12) = ctx->r14;
            goto L_80238308;
    }
    // 0x802382F8: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x802382FC: addiu       $t7, $zero, 0x12
    ctx->r15 = ADD32(0, 0X12);
    // 0x80238300: b           L_80238470
    // 0x80238304: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
        goto L_80238470;
    // 0x80238304: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
L_80238308:
    // 0x80238308: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x8023830C: b           L_80238470
    // 0x80238310: sh          $t9, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r25;
        goto L_80238470;
    // 0x80238310: sh          $t9, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r25;
    // 0x80238314: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
L_80238318:
    // 0x80238318: bne         $v1, $at, L_80238348
    if (ctx->r3 != ctx->r1) {
        // 0x8023831C: or          $a0, $t4, $zero
        ctx->r4 = ctx->r12 | 0;
            goto L_80238348;
    }
    // 0x8023831C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80238320: jal         0x802380B0
    // 0x80238324: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_802380B0(rdram, ctx);
        goto after_5;
    // 0x80238324: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_5:
    // 0x80238328: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x8023832C: jal         0x802380B0
    // 0x80238330: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_802380B0(rdram, ctx);
        goto after_6;
    // 0x80238330: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_6:
    // 0x80238334: addu        $t6, $t4, $t3
    ctx->r14 = ADD32(ctx->r12, ctx->r11);
    // 0x80238338: sb          $zero, 0xA8($t6)
    MEM_B(0XA8, ctx->r14) = 0;
    // 0x8023833C: addiu       $t8, $zero, 0x13
    ctx->r24 = ADD32(0, 0X13);
    // 0x80238340: b           L_80238470
    // 0x80238344: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
        goto L_80238470;
    // 0x80238344: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
L_80238348:
    // 0x80238348: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x8023834C: bne         $v1, $at, L_80238470
    if (ctx->r3 != ctx->r1) {
        // 0x80238350: sll         $t7, $t3, 2
        ctx->r15 = S32(ctx->r11 << 2);
            goto L_80238470;
    }
    // 0x80238350: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80238354: addu        $t5, $t4, $t7
    ctx->r13 = ADD32(ctx->r12, ctx->r15);
    // 0x80238358: lw          $v0, 0x18($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X18);
    // 0x8023835C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80238360: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x80238364: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238368: addiu       $t9, $v0, 0x5
    ctx->r25 = ADD32(ctx->r2, 0X5);
    // 0x8023836C: bne         $a0, $zero, L_80238380
    if (ctx->r4 != 0) {
        // 0x80238370: lbu         $a1, -0x1($v0)
        ctx->r5 = MEM_BU(ctx->r2, -0X1);
            goto L_80238380;
    }
    // 0x80238370: lbu         $a1, -0x1($v0)
    ctx->r5 = MEM_BU(ctx->r2, -0X1);
    // 0x80238374: sb          $a1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r5;
    // 0x80238378: b           L_802383C0
    // 0x8023837C: sw          $t9, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->r25;
        goto L_802383C0;
    // 0x8023837C: sw          $t9, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->r25;
L_80238380:
    // 0x80238380: beq         $a0, $at, L_8023838C
    if (ctx->r4 == ctx->r1) {
        // 0x80238384: addiu       $t6, $a0, -0x1
        ctx->r14 = ADD32(ctx->r4, -0X1);
            goto L_8023838C;
    }
    // 0x80238384: addiu       $t6, $a0, -0x1
    ctx->r14 = ADD32(ctx->r4, -0X1);
    // 0x80238388: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
L_8023838C:
    // 0x8023838C: lbu         $t7, 0x2($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2);
    // 0x80238390: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x80238394: lbu         $t6, 0x3($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X3);
    // 0x80238398: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x8023839C: sll         $t8, $v1, 24
    ctx->r24 = S32(ctx->r3 << 24);
    // 0x802383A0: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x802383A4: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x802383A8: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x802383AC: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x802383B0: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x802383B4: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x802383B8: subu        $t9, $v0, $v1
    ctx->r25 = SUB32(ctx->r2, ctx->r3);
    // 0x802383BC: sw          $t9, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->r25;
L_802383C0:
    // 0x802383C0: addu        $t6, $t4, $t3
    ctx->r14 = ADD32(ctx->r12, ctx->r11);
    // 0x802383C4: sb          $zero, 0xA8($t6)
    MEM_B(0XA8, ctx->r14) = 0;
    // 0x802383C8: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x802383CC: b           L_80238470
    // 0x802383D0: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
        goto L_80238470;
    // 0x802383D0: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
L_802383D4:
    // 0x802383D4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802383D8: andi        $t9, $v1, 0x80
    ctx->r25 = ctx->r3 & 0X80;
    // 0x802383DC: beq         $t9, $zero, L_80238404
    if (ctx->r25 == 0) {
        // 0x802383E0: sh          $t7, 0x0($s0)
        MEM_H(0X0, ctx->r16) = ctx->r15;
            goto L_80238404;
    }
    // 0x802383E0: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
    // 0x802383E4: sb          $t2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r10;
    // 0x802383E8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x802383EC: jal         0x802380B0
    // 0x802383F0: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_802380B0(rdram, ctx);
        goto after_7;
    // 0x802383F0: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_7:
    // 0x802383F4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802383F8: addu        $t6, $t4, $t3
    ctx->r14 = ADD32(ctx->r12, ctx->r11);
    // 0x802383FC: b           L_80238414
    // 0x80238400: sb          $t2, 0xA8($t6)
    MEM_B(0XA8, ctx->r14) = ctx->r10;
        goto L_80238414;
    // 0x80238400: sb          $t2, 0xA8($t6)
    MEM_B(0XA8, ctx->r14) = ctx->r10;
L_80238404:
    // 0x80238404: addu        $t8, $t4, $t3
    ctx->r24 = ADD32(ctx->r12, ctx->r11);
    // 0x80238408: lbu         $t7, 0xA8($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0XA8);
    // 0x8023840C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80238410: sb          $t7, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r15;
L_80238414:
    // 0x80238414: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80238418: addiu       $at, $zero, 0xC0
    ctx->r1 = ADD32(0, 0XC0);
    // 0x8023841C: andi        $t9, $v0, 0xF0
    ctx->r25 = ctx->r2 & 0XF0;
    // 0x80238420: beq         $t9, $at, L_8023846C
    if (ctx->r25 == ctx->r1) {
        // 0x80238424: addiu       $at, $zero, 0xD0
        ctx->r1 = ADD32(0, 0XD0);
            goto L_8023846C;
    }
    // 0x80238424: addiu       $at, $zero, 0xD0
    ctx->r1 = ADD32(0, 0XD0);
    // 0x80238428: beq         $t9, $at, L_8023846C
    if (ctx->r25 == ctx->r1) {
        // 0x8023842C: or          $a0, $t4, $zero
        ctx->r4 = ctx->r12 | 0;
            goto L_8023846C;
    }
    // 0x8023842C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80238430: jal         0x802380B0
    // 0x80238434: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_802380B0(rdram, ctx);
        goto after_8;
    // 0x80238434: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_8:
    // 0x80238438: lbu         $t6, 0x8($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X8);
    // 0x8023843C: addiu       $at, $zero, 0x90
    ctx->r1 = ADD32(0, 0X90);
    // 0x80238440: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80238444: andi        $t8, $t6, 0xF0
    ctx->r24 = ctx->r14 & 0XF0;
    // 0x80238448: bne         $t8, $at, L_80238470
    if (ctx->r24 != ctx->r1) {
        // 0x8023844C: or          $t2, $t4, $zero
        ctx->r10 = ctx->r12 | 0;
            goto L_80238470;
    }
    // 0x8023844C: or          $t2, $t4, $zero
    ctx->r10 = ctx->r12 | 0;
    // 0x80238450: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80238454: jal         0x80238174
    // 0x80238458: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    func_80238174(rdram, ctx);
        goto after_9;
    // 0x80238458: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_9:
    // 0x8023845C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80238460: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80238464: b           L_80238470
    // 0x80238468: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
        goto L_80238470;
    // 0x80238468: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_8023846C:
    // 0x8023846C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80238470:
    // 0x80238470: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x80238474: lw          $t7, 0xC($t4)
    ctx->r15 = MEM_W(ctx->r12, 0XC);
    // 0x80238478: sw          $t1, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r9;
    // 0x8023847C: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x80238480: addu        $t9, $t7, $t1
    ctx->r25 = ADD32(ctx->r15, ctx->r9);
    // 0x80238484: sw          $t9, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r25;
    // 0x80238488: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    // 0x8023848C: or          $t2, $t4, $zero
    ctx->r10 = ctx->r12 | 0;
    // 0x80238490: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x80238494: beql        $t6, $at, L_802384B4
    if (ctx->r14 == ctx->r1) {
        // 0x80238498: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_802384B4;
    }
    goto skip_5;
    // 0x80238498: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    skip_5:
    // 0x8023849C: jal         0x80238174
    // 0x802384A0: addu        $t5, $t4, $t8
    ctx->r13 = ADD32(ctx->r12, ctx->r24);
    func_80238174(rdram, ctx);
        goto after_10;
    // 0x802384A0: addu        $t5, $t4, $t8
    ctx->r13 = ADD32(ctx->r12, ctx->r24);
    after_10:
    // 0x802384A4: lw          $t7, 0xB8($t5)
    ctx->r15 = MEM_W(ctx->r13, 0XB8);
    // 0x802384A8: addu        $t9, $t7, $v0
    ctx->r25 = ADD32(ctx->r15, ctx->r2);
    // 0x802384AC: sw          $t9, 0xB8($t5)
    MEM_W(0XB8, ctx->r13) = ctx->r25;
    // 0x802384B0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_802384B4:
    // 0x802384B4: sw          $t6, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->r14;
    // 0x802384B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802384BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802384C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802384C4: jr          $ra
    // 0x802384C8: nop

    return;
    // 0x802384C8: nop

;}
