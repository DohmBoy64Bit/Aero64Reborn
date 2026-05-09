#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8022C584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C584: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8022C588: lw          $t6, -0x78E8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X78E8);
    // 0x8022C58C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C590: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C594: bne         $t6, $zero, L_8022C5B0
    if (ctx->r14 != 0) {
        // 0x8022C598: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8022C5B0;
    }
    // 0x8022C598: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022C59C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022C5A0: jal         0x80231A24
    // 0x8022C5A4: addiu       $a0, $a0, 0x4408
    ctx->r4 = ADD32(ctx->r4, 0X4408);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022C5A4: addiu       $a0, $a0, 0x4408
    ctx->r4 = ADD32(ctx->r4, 0X4408);
    after_0:
    // 0x8022C5A8: b           L_8022C614
    // 0x8022C5AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022C614;
    // 0x8022C5AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022C5B0:
    // 0x8022C5B0: jal         0x8022D560
    // 0x8022C5B4: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    func_8022D560(rdram, ctx);
        goto after_1;
    // 0x8022C5B4: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_1:
    // 0x8022C5B8: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8022C5BC: lw          $t7, -0x78C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X78C0);
    // 0x8022C5C0: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8022C5C4: bne         $t7, $zero, L_8022C5E0
    if (ctx->r15 != 0) {
        // 0x8022C5C8: nop
    
            goto L_8022C5E0;
    }
    // 0x8022C5C8: nop

    // 0x8022C5CC: lw          $v0, -0x78E8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X78E8);
    // 0x8022C5D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022C5D4: lw          $a0, 0x50($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X50);
    // 0x8022C5D8: jal         0x80236B80
    // 0x8022C5DC: lw          $a1, 0x54($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X54);
    func_80236B80(rdram, ctx);
        goto after_2;
    // 0x8022C5DC: lw          $a1, 0x54($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X54);
    after_2:
L_8022C5E0:
    // 0x8022C5E0: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8022C5E4: lbu         $t8, -0x78D2($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X78D2);
    // 0x8022C5E8: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8022C5EC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C5F0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8022C5F4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8022C5F8: lw          $t0, -0x78E0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X78E0);
    // 0x8022C5FC: sw          $zero, -0x78E8($at)
    MEM_W(-0X78E8, ctx->r1) = 0;
    // 0x8022C600: beql        $t0, $zero, L_8022C614
    if (ctx->r8 == 0) {
        // 0x8022C604: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022C614;
    }
    goto skip_0;
    // 0x8022C604: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8022C608: jal         0x8022C6A4
    // 0x8022C60C: nop

    func_8022C6A4(rdram, ctx);
        goto after_3;
    // 0x8022C60C: nop

    after_3:
    // 0x8022C610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022C614:
    // 0x8022C614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022C618: jr          $ra
    // 0x8022C61C: nop

    return;
    // 0x8022C61C: nop

;}
RECOMP_FUNC void func_8023D3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D3C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023D3C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023D3C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8023D3CC: jal         0x80245AD0
    // 0x8023D3D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80245AD0(rdram, ctx);
        goto after_0;
    // 0x8023D3D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x8023D3D4: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8023D3D8: lbu         $t6, 0x5EB0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5EB0);
    // 0x8023D3DC: beq         $t6, $zero, L_8023D410
    if (ctx->r14 == 0) {
        // 0x8023D3E0: nop
    
            goto L_8023D410;
    }
    // 0x8023D3E0: nop

    // 0x8023D3E4: jal         0x8023ECC8
    // 0x8023D3E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8023ECC8(rdram, ctx);
        goto after_1;
    // 0x8023D3E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8023D3EC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8023D3F0: addiu       $a1, $a1, 0x5E70
    ctx->r5 = ADD32(ctx->r5, 0X5E70);
    // 0x8023D3F4: jal         0x802465B0
    // 0x8023D3F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802465B0(rdram, ctx);
        goto after_2;
    // 0x8023D3F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8023D3FC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023D400: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8023D404: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8023D408: jal         0x802374B0
    // 0x8023D40C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_3;
    // 0x8023D40C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_8023D410:
    // 0x8023D410: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8023D414: addiu       $a1, $a1, 0x5E70
    ctx->r5 = ADD32(ctx->r5, 0X5E70);
    // 0x8023D418: jal         0x802465B0
    // 0x8023D41C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802465B0(rdram, ctx);
        goto after_4;
    // 0x8023D41C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x8023D420: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023D424: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023D428: jal         0x80245B14
    // 0x8023D42C: sb          $zero, 0x5EB0($at)
    MEM_B(0X5EB0, ctx->r1) = 0;
    func_80245B14(rdram, ctx);
        goto after_5;
    // 0x8023D42C: sb          $zero, 0x5EB0($at)
    MEM_B(0X5EB0, ctx->r1) = 0;
    after_5:
    // 0x8023D430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023D434: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8023D438: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023D43C: jr          $ra
    // 0x8023D440: nop

    return;
    // 0x8023D440: nop

;}
RECOMP_FUNC void func_80249820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249820: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80249824: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80249828: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8024982C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80249830: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80249834: jal         0x80241760
    // 0x80249838: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x80249838: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8024983C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80249840: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80249844: bne         $t6, $zero, L_8024985C
    if (ctx->r14 != 0) {
        // 0x80249848: nop
    
            goto L_8024985C;
    }
    // 0x80249848: nop

    // 0x8024984C: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80249850: lw          $t7, 0x16E0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X16E0);
    // 0x80249854: b           L_8024987C
    // 0x80249858: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
        goto L_8024987C;
    // 0x80249858: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
L_8024985C:
    // 0x8024985C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80249860: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80249864: lhu         $t9, 0x10($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X10);
    // 0x80249868: beq         $t9, $at, L_8024987C
    if (ctx->r25 == ctx->r1) {
        // 0x8024986C: nop
    
            goto L_8024987C;
    }
    // 0x8024986C: nop

    // 0x80249870: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    // 0x80249874: jal         0x802417A0
    // 0x80249878: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_802417A0(rdram, ctx);
        goto after_1;
    // 0x80249878: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_1:
L_8024987C:
    // 0x8024987C: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x80249880: lw          $t0, 0x16DC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X16DC);
    // 0x80249884: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80249888: bne         $t0, $t1, L_802498A0
    if (ctx->r8 != ctx->r9) {
        // 0x8024988C: nop
    
            goto L_802498A0;
    }
    // 0x8024988C: nop

    // 0x80249890: lw          $t2, 0xC($t0)
    ctx->r10 = MEM_W(ctx->r8, 0XC);
    // 0x80249894: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80249898: b           L_802498DC
    // 0x8024989C: sw          $t2, 0x16DC($at)
    MEM_W(0X16DC, ctx->r1) = ctx->r10;
        goto L_802498DC;
    // 0x8024989C: sw          $t2, 0x16DC($at)
    MEM_W(0X16DC, ctx->r1) = ctx->r10;
L_802498A0:
    // 0x802498A0: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x802498A4: lw          $s1, 0x16DC($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X16DC);
    // 0x802498A8: lw          $s2, 0xC($s1)
    ctx->r18 = MEM_W(ctx->r17, 0XC);
    // 0x802498AC: beq         $s2, $zero, L_802498DC
    if (ctx->r18 == 0) {
        // 0x802498B0: nop
    
            goto L_802498DC;
    }
    // 0x802498B0: nop

L_802498B4:
    // 0x802498B4: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x802498B8: bne         $s2, $t3, L_802498CC
    if (ctx->r18 != ctx->r11) {
        // 0x802498BC: nop
    
            goto L_802498CC;
    }
    // 0x802498BC: nop

    // 0x802498C0: lw          $t4, 0xC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC);
    // 0x802498C4: b           L_802498DC
    // 0x802498C8: sw          $t4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r12;
        goto L_802498DC;
    // 0x802498C8: sw          $t4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r12;
L_802498CC:
    // 0x802498CC: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x802498D0: lw          $s2, 0xC($s1)
    ctx->r18 = MEM_W(ctx->r17, 0XC);
    // 0x802498D4: bne         $s2, $zero, L_802498B4
    if (ctx->r18 != 0) {
        // 0x802498D8: nop
    
            goto L_802498B4;
    }
    // 0x802498D8: nop

L_802498DC:
    // 0x802498DC: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802498E0: lw          $t6, 0x16E0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X16E0);
    // 0x802498E4: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x802498E8: bne         $t5, $t6, L_802498F8
    if (ctx->r13 != ctx->r14) {
        // 0x802498EC: nop
    
            goto L_802498F8;
    }
    // 0x802498EC: nop

    // 0x802498F0: jal         0x80241F54
    // 0x802498F4: nop

    func_80241F54(rdram, ctx);
        goto after_2;
    // 0x802498F4: nop

    after_2:
L_802498F8:
    // 0x802498F8: jal         0x80241780
    // 0x802498FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80241780(rdram, ctx);
        goto after_3;
    // 0x802498FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80249900: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80249904: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80249908: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8024990C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80249910: jr          $ra
    // 0x80249914: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80249914: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80218EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80218EAC: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80218EB0: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x80218EB4: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80218EB8: lwc1        $f22, 0xA0($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80218EBC: lwc1        $f24, 0xA8($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80218EC0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80218EC4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80218EC8: c.lt.s      $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f22.fl < ctx->f24.fl;
    // 0x80218ECC: swc1        $f12, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f12.u32l;
    // 0x80218ED0: swc1        $f14, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f14.u32l;
    // 0x80218ED4: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x80218ED8: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x80218EDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80218EE0: bc1f        L_80218EF4
    if (!c1cs) {
        // 0x80218EE4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80218EF4;
    }
    // 0x80218EE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80218EE8: mov.s       $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.fl = ctx->f22.fl;
    // 0x80218EEC: b           L_80218EFC
    // 0x80218EF0: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
        goto L_80218EFC;
    // 0x80218EF0: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
L_80218EF4:
    // 0x80218EF4: mov.s       $f18, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    ctx->f18.fl = ctx->f24.fl;
    // 0x80218EF8: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
L_80218EFC:
    // 0x80218EFC: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80218F00: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80218F04: lwc1        $f0, 0xA4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x80218F08: lwc1        $f2, 0xAC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80218F0C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80218F10: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80218F14: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80218F18: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80218F1C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80218F20: mul.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80218F24: bc1fl       L_80218F3C
    if (!c1cs) {
        // 0x80218F28: mov.s       $f22, $f2
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    ctx->f22.fl = ctx->f2.fl;
            goto L_80218F3C;
    }
    goto skip_0;
    // 0x80218F28: mov.s       $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    ctx->f22.fl = ctx->f2.fl;
    skip_0:
    // 0x80218F2C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80218F30: b           L_80218F40
    // 0x80218F34: mov.s       $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    ctx->f24.fl = ctx->f2.fl;
        goto L_80218F40;
    // 0x80218F34: mov.s       $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    ctx->f24.fl = ctx->f2.fl;
    // 0x80218F38: mov.s       $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    ctx->f22.fl = ctx->f2.fl;
L_80218F3C:
    // 0x80218F3C: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
L_80218F40:
    // 0x80218F40: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x80218F44: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80218F48: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80218F4C: neg.s       $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = -ctx->f12.fl;
    // 0x80218F50: add.s       $f16, $f12, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f12.fl;
    // 0x80218F54: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x80218F58: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80218F5C: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80218F60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80218F64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80218F68: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x80218F6C: mul.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80218F70: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x80218F74: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80218F78: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80218F7C: lw          $a2, 0xC0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XC0);
    // 0x80218F80: neg.s       $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = -ctx->f14.fl;
    // 0x80218F84: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x80218F88: bc1f        L_80218FE8
    if (!c1cs) {
        // 0x80218F8C: lwc1        $f2, 0x40($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
            goto L_80218FE8;
    }
    // 0x80218F8C: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80218F90: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
L_80218F94:
    // 0x80218F94: nop

    // 0x80218F98: bc1fl       L_80218FCC
    if (!c1cs) {
        // 0x80218F9C: add.s       $f0, $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_80218FCC;
    }
    goto skip_1;
    // 0x80218F9C: add.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
    skip_1:
    // 0x80218FA0: sub.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x80218FA4: ori         $t6, $zero, 0x8888
    ctx->r14 = 0 | 0X8888;
    // 0x80218FA8: srav        $t7, $t6, $v0
    ctx->r15 = S32(SIGNED(ctx->r14) >> (ctx->r2 & 31));
    // 0x80218FAC: c.le.s      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.fl <= ctx->f20.fl;
    // 0x80218FB0: nop

    // 0x80218FB4: bc1fl       L_80218FCC
    if (!c1cs) {
        // 0x80218FB8: add.s       $f0, $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_80218FCC;
    }
    goto skip_2;
    // 0x80218FB8: add.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
    skip_2:
    // 0x80218FBC: or          $a1, $a1, $t7
    ctx->r5 = ctx->r5 | ctx->r15;
    // 0x80218FC0: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x80218FC4: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80218FC8: add.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
L_80218FCC:
    // 0x80218FCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80218FD0: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x80218FD4: nop

    // 0x80218FD8: bc1fl       L_80218FEC
    if (!c1cs) {
        // 0x80218FDC: add.s       $f0, $f14, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f14.fl;
            goto L_80218FEC;
    }
    goto skip_3;
    // 0x80218FDC: add.s       $f0, $f14, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f14.fl;
    skip_3:
    // 0x80218FE0: bnel        $v0, $v1, L_80218F94
    if (ctx->r2 != ctx->r3) {
        // 0x80218FE4: c.le.s      $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
            goto L_80218F94;
    }
    goto skip_4;
    // 0x80218FE4: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    skip_4:
L_80218FE8:
    // 0x80218FE8: add.s       $f0, $f14, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f14.fl;
L_80218FEC:
    // 0x80218FEC: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80218FF0: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80218FF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80218FF8: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x80218FFC: lwc1        $f12, 0x98($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80219000: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80219004: bc1fl       L_8021906C
    if (!c1cs) {
        // 0x80219008: lwc1        $f14, 0x90($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
            goto L_8021906C;
    }
    goto skip_5;
    // 0x80219008: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
    skip_5:
    // 0x8021900C: c.le.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl <= ctx->f2.fl;
L_80219010:
    // 0x80219010: nop

    // 0x80219014: bc1fl       L_8021904C
    if (!c1cs) {
        // 0x80219018: add.s       $f2, $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8021904C;
    }
    goto skip_6;
    // 0x80219018: add.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f14.fl;
    skip_6:
    // 0x8021901C: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80219020: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80219024: ori         $t0, $zero, 0xF000
    ctx->r8 = 0 | 0XF000;
    // 0x80219028: srav        $t1, $t0, $t9
    ctx->r9 = S32(SIGNED(ctx->r8) >> (ctx->r25 & 31));
    // 0x8021902C: c.le.s      $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f8.fl <= ctx->f24.fl;
    // 0x80219030: nop

    // 0x80219034: bc1fl       L_8021904C
    if (!c1cs) {
        // 0x80219038: add.s       $f2, $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8021904C;
    }
    goto skip_7;
    // 0x80219038: add.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f14.fl;
    skip_7:
    // 0x8021903C: or          $a0, $a0, $t1
    ctx->r4 = ctx->r4 | ctx->r9;
    // 0x80219040: andi        $t2, $a0, 0xFFFF
    ctx->r10 = ctx->r4 & 0XFFFF;
    // 0x80219044: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80219048: add.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f14.fl;
L_8021904C:
    // 0x8021904C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80219050: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x80219054: nop

    // 0x80219058: bc1fl       L_8021906C
    if (!c1cs) {
        // 0x8021905C: lwc1        $f14, 0x90($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
            goto L_8021906C;
    }
    goto skip_8;
    // 0x8021905C: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
    skip_8:
    // 0x80219060: bnel        $v0, $v1, L_80219010
    if (ctx->r2 != ctx->r3) {
        // 0x80219064: c.le.s      $f22, $f2
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl <= ctx->f2.fl;
            goto L_80219010;
    }
    goto skip_9;
    // 0x80219064: c.le.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl <= ctx->f2.fl;
    skip_9:
    // 0x80219068: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
L_8021906C:
    // 0x8021906C: c.eq.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl == ctx->f14.fl;
    // 0x80219070: nop

    // 0x80219074: bc1t        L_80219094
    if (c1cs) {
        // 0x80219078: nop
    
            goto L_80219094;
    }
    // 0x80219078: nop

    // 0x8021907C: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80219080: sub.s       $f8, $f12, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x80219084: div.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80219088: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8021908C: b           L_8021909C
    // 0x80219090: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
        goto L_8021909C;
    // 0x80219090: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
L_80219094:
    // 0x80219094: lwc1        $f2, 0x3110($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3110);
    // 0x80219098: mov.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.fl = ctx->f12.fl;
L_8021909C:
    // 0x8021909C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x802190A0: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802190A4: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802190A8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x802190AC: sh          $a0, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r4;
    // 0x802190B0: jal         0x802190E8
    // 0x802190B4: sh          $a1, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r5;
    func_802190E8(rdram, ctx);
        goto after_0;
    // 0x802190B4: sh          $a1, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r5;
    after_0:
    // 0x802190B8: lhu         $a0, 0x5A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X5A);
    // 0x802190BC: lhu         $a1, 0x58($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X58);
    // 0x802190C0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802190C4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802190C8: and         $t4, $a0, $a1
    ctx->r12 = ctx->r4 & ctx->r5;
    // 0x802190CC: and         $v0, $t4, $v0
    ctx->r2 = ctx->r12 & ctx->r2;
    // 0x802190D0: andi        $t5, $v0, 0xFFFF
    ctx->r13 = ctx->r2 & 0XFFFF;
    // 0x802190D4: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802190D8: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x802190DC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x802190E0: jr          $ra
    // 0x802190E4: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    return;
    // 0x802190E4: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
;}
RECOMP_FUNC void func_80249C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249C28: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80249C2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80249C30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80249C34: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80249C38: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80249C3C: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x80249C40: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x80249C44: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80249C48: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x80249C4C: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x80249C50: or          $t3, $a3, $zero
    ctx->r11 = ctx->r7 | 0;
    // 0x80249C54: beq         $at, $zero, L_80249C60
    if (ctx->r1 == 0) {
        // 0x80249C58: addu        $t1, $v0, $t6
        ctx->r9 = ADD32(ctx->r2, ctx->r14);
            goto L_80249C60;
    }
    // 0x80249C58: addu        $t1, $v0, $t6
    ctx->r9 = ADD32(ctx->r2, ctx->r14);
    // 0x80249C5C: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
L_80249C60:
    // 0x80249C60: sll         $a2, $t3, 1
    ctx->r6 = S32(ctx->r11 << 1);
    // 0x80249C64: addu        $a3, $a2, $a1
    ctx->r7 = ADD32(ctx->r6, ctx->r5);
    // 0x80249C68: sltu        $at, $t1, $a3
    ctx->r1 = ctx->r9 < ctx->r7 ? 1 : 0;
    // 0x80249C6C: beq         $at, $zero, L_80249D4C
    if (ctx->r1 == 0) {
        // 0x80249C70: addiu       $s0, $t0, 0x8
        ctx->r16 = ADD32(ctx->r8, 0X8);
            goto L_80249D4C;
    }
    // 0x80249C70: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x80249C74: andi        $t7, $t5, 0xFFFF
    ctx->r15 = ctx->r13 & 0XFFFF;
    // 0x80249C78: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80249C7C: subu        $t3, $t1, $a1
    ctx->r11 = SUB32(ctx->r9, ctx->r5);
    // 0x80249C80: sra         $t9, $t3, 1
    ctx->r25 = S32(SIGNED(ctx->r11) >> 1);
    // 0x80249C84: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80249C88: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x80249C8C: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80249C90: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80249C94: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x80249C98: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x80249C9C: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x80249CA0: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x80249CA4: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x80249CA8: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x80249CAC: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x80249CB0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80249CB4: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x80249CB8: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x80249CBC: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x80249CC0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x80249CC4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80249CC8: jal         0x802375F0
    // 0x80249CCC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_802375F0(rdram, ctx);
        goto after_0;
    // 0x80249CCC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80249CD0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80249CD4: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x80249CD8: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80249CDC: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80249CE0: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80249CE4: addu        $t9, $t3, $t5
    ctx->r25 = ADD32(ctx->r11, ctx->r13);
    // 0x80249CE8: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x80249CEC: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80249CF0: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x80249CF4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80249CF8: subu        $t8, $a3, $t1
    ctx->r24 = SUB32(ctx->r7, ctx->r9);
    // 0x80249CFC: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x80249D00: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80249D04: sw          $v0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r2;
    // 0x80249D08: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80249D0C: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x80249D10: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80249D14: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80249D18: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80249D1C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80249D20: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x80249D24: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80249D28: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    // 0x80249D2C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80249D30: jal         0x802375F0
    // 0x80249D34: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    func_802375F0(rdram, ctx);
        goto after_1;
    // 0x80249D34: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    after_1:
    // 0x80249D38: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80249D3C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80249D40: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80249D44: b           L_80249D90
    // 0x80249D48: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
        goto L_80249D90;
    // 0x80249D48: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
L_80249D4C:
    // 0x80249D4C: andi        $t9, $t5, 0xFFFF
    ctx->r25 = ctx->r13 & 0XFFFF;
    // 0x80249D50: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80249D54: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x80249D58: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
    // 0x80249D5C: sw          $a3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r7;
    // 0x80249D60: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80249D64: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80249D68: lui         $t7, 0x400
    ctx->r15 = S32(0X400 << 16);
    // 0x80249D6C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80249D70: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x80249D74: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x80249D78: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80249D7C: jal         0x802375F0
    // 0x80249D80: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_802375F0(rdram, ctx);
        goto after_2;
    // 0x80249D80: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x80249D84: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80249D88: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80249D8C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_80249D90:
    // 0x80249D90: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80249D94: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x80249D98: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80249D9C: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    // 0x80249DA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80249DA4: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x80249DA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80249DAC: jr          $ra
    // 0x80249DB0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80249DB0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80233EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80233EA0: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80233EA4: lhu         $t6, -0x178C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X178C);
    // 0x80233EA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233EAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80233EB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80233EB4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80233EB8: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80233EBC: lw          $t9, 0x5C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X5C);
    // 0x80233EC0: lhu         $v1, 0xC($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XC);
    // 0x80233EC4: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80233EC8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80233ECC: sw          $t9, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r25;
    // 0x80233ED0: beq         $v1, $at, L_80233F74
    if (ctx->r3 == ctx->r1) {
        // 0x80233ED4: sw          $t9, 0x54($a0)
        MEM_W(0X54, ctx->r4) = ctx->r25;
            goto L_80233F74;
    }
    // 0x80233ED4: sw          $t9, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r25;
    // 0x80233ED8: lui         $t1, 0x8025
    ctx->r9 = S32(0X8025 << 16);
    // 0x80233EDC: lw          $t1, -0x18F0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X18F0);
    // 0x80233EE0: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x80233EE4: lh          $t5, 0x4($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X4);
    // 0x80233EE8: lw          $t2, 0x2C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X2C);
    // 0x80233EEC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80233EF0: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x80233EF4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80233EF8: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x80233EFC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80233F00: lhu         $t6, 0xA($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XA);
    // 0x80233F04: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80233F08: bgez        $t6, L_80233F1C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80233F0C: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80233F1C;
    }
    // 0x80233F0C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80233F10: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80233F14: nop

    // 0x80233F18: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_80233F1C:
    // 0x80233F1C: lh          $t7, 0x6($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X6);
    // 0x80233F20: lhu         $t8, 0xC($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XC);
    // 0x80233F24: div.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80233F28: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80233F2C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80233F30: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80233F34: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80233F38: bgez        $t8, L_80233F4C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80233F3C: cvt.s.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80233F4C;
    }
    // 0x80233F3C: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80233F40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80233F44: nop

    // 0x80233F48: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_80233F4C:
    // 0x80233F4C: div.s       $f2, $f4, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x80233F50: addiu       $s0, $a3, 0x18
    ctx->r16 = ADD32(ctx->r7, 0X18);
    // 0x80233F54: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80233F58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80233F5C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x80233F60: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80233F64: jal         0x8023CD90
    // 0x80233F68: nop

    func_8023CD90(rdram, ctx);
        goto after_0;
    // 0x80233F68: nop

    after_0:
    // 0x80233F6C: b           L_80233F98
    // 0x80233F70: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
        goto L_80233F98;
    // 0x80233F70: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
L_80233F74:
    // 0x80233F74: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80233F78: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80233F7C: addiu       $s0, $a3, 0x18
    ctx->r16 = ADD32(ctx->r7, 0X18);
    // 0x80233F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80233F84: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80233F88: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80233F8C: jal         0x8023CD90
    // 0x80233F90: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_8023CD90(rdram, ctx);
        goto after_1;
    // 0x80233F90: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x80233F94: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
L_80233F98:
    // 0x80233F98: lbu         $t9, 0xE($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0XE);
    // 0x80233F9C: addiu       $t4, $zero, 0xF0
    ctx->r12 = ADD32(0, 0XF0);
    // 0x80233FA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80233FA4: sb          $t9, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r25;
    // 0x80233FA8: lbu         $t0, 0xF($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0XF);
    // 0x80233FAC: sb          $t0, 0x19($s0)
    MEM_B(0X19, ctx->r16) = ctx->r8;
    // 0x80233FB0: lbu         $t1, 0x10($a3)
    ctx->r9 = MEM_BU(ctx->r7, 0X10);
    // 0x80233FB4: sb          $t1, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = ctx->r9;
    // 0x80233FB8: lbu         $t2, 0x11($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X11);
    // 0x80233FBC: sb          $t2, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = ctx->r10;
    // 0x80233FC0: lh          $t3, 0xA($a3)
    ctx->r11 = MEM_H(ctx->r7, 0XA);
    // 0x80233FC4: lh          $a1, 0x8($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X8);
    // 0x80233FC8: subu        $a2, $t4, $t3
    ctx->r6 = SUB32(ctx->r12, ctx->r11);
    // 0x80233FCC: sll         $t5, $a2, 16
    ctx->r13 = S32(ctx->r6 << 16);
    // 0x80233FD0: jal         0x8023CD40
    // 0x80233FD4: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
    func_8023CD40(rdram, ctx);
        goto after_2;
    // 0x80233FD4: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
    after_2:
    // 0x80233FD8: jal         0x8023BE84
    // 0x80233FDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8023BE84(rdram, ctx);
        goto after_3;
    // 0x80233FDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80233FE0: beq         $v0, $zero, L_80234008
    if (ctx->r2 == 0) {
        // 0x80233FE4: addiu       $at, $zero, -0x1000
        ctx->r1 = ADD32(0, -0X1000);
            goto L_80234008;
    }
    // 0x80233FE4: addiu       $at, $zero, -0x1000
    ctx->r1 = ADD32(0, -0X1000);
    // 0x80233FE8: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80233FEC: addiu       $a1, $a1, 0x3B90
    ctx->r5 = ADD32(ctx->r5, 0X3B90);
    // 0x80233FF0: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x80233FF4: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x80233FF8: addiu       $t7, $a0, 0x8
    ctx->r15 = ADD32(ctx->r4, 0X8);
    // 0x80233FFC: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80234000: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80234004: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
L_80234008:
    // 0x80234008: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8023400C: addiu       $v0, $v0, 0x4348
    ctx->r2 = ADD32(ctx->r2, 0X4348);
    // 0x80234010: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80234014: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80234018: addiu       $t2, $zero, 0xFFE
    ctx->r10 = ADD32(0, 0XFFE);
    // 0x8023401C: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x80234020: ori         $t1, $t0, 0xFFE
    ctx->r9 = ctx->r8 | 0XFFE;
    // 0x80234024: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x80234028: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8023402C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80234030: sw          $t2, 0x434C($at)
    MEM_W(0X434C, ctx->r1) = ctx->r10;
    // 0x80234034: jr          $ra
    // 0x80234038: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80234038: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80208E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80208E78: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80208E7C: sll         $t6, $a0, 0
    ctx->r14 = S32(ctx->r4 << 0);
    // 0x80208E80: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x80208E84: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80208E88: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x80208E8C: bgez        $t6, L_80208ECC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80208E90: addiu       $v0, $sp, 0x10
        ctx->r2 = ADD32(ctx->r29, 0X10);
            goto L_80208ECC;
    }
    // 0x80208E90: addiu       $v0, $sp, 0x10
    ctx->r2 = ADD32(ctx->r29, 0X10);
    // 0x80208E94: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80208E98: lw          $t7, -0x18F0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X18F0);
    // 0x80208E9C: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x80208EA0: and         $t9, $a0, $at
    ctx->r25 = ctx->r4 & ctx->r1;
    // 0x80208EA4: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x80208EA8: srl         $t0, $t9, 16
    ctx->r8 = S32(U32(ctx->r25) >> 16);
    // 0x80208EAC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80208EB0: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x80208EB4: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80208EB8: andi        $t5, $a0, 0xFFFF
    ctx->r13 = ctx->r4 & 0XFFFF;
    // 0x80208EBC: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x80208EC0: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80208EC4: b           L_80208F00
    // 0x80208EC8: addu        $v1, $t4, $t6
    ctx->r3 = ADD32(ctx->r12, ctx->r14);
        goto L_80208F00;
    // 0x80208EC8: addu        $v1, $t4, $t6
    ctx->r3 = ADD32(ctx->r12, ctx->r14);
L_80208ECC:
    // 0x80208ECC: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80208ED0: lw          $t7, -0x18F0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X18F0);
    // 0x80208ED4: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x80208ED8: and         $t0, $a0, $at
    ctx->r8 = ctx->r4 & ctx->r1;
    // 0x80208EDC: lw          $t9, 0x1C($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X1C);
    // 0x80208EE0: srl         $t8, $t0, 16
    ctx->r24 = S32(U32(ctx->r8) >> 16);
    // 0x80208EE4: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80208EE8: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80208EEC: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80208EF0: andi        $t4, $a0, 0xFFFF
    ctx->r12 = ctx->r4 & 0XFFFF;
    // 0x80208EF4: sll         $t6, $t4, 4
    ctx->r14 = S32(ctx->r12 << 4);
    // 0x80208EF8: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x80208EFC: addu        $v1, $t5, $t6
    ctx->r3 = ADD32(ctx->r13, ctx->r14);
L_80208F00:
    // 0x80208F00: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x80208F04: addiu       $a0, $zero, -0x4
    ctx->r4 = ADD32(0, -0X4);
    // 0x80208F08: addiu       $t8, $sp, 0x13
    ctx->r24 = ADD32(ctx->r29, 0X13);
    // 0x80208F0C: andi        $t0, $t7, 0x1
    ctx->r8 = ctx->r15 & 0X1;
    // 0x80208F10: beql        $t0, $zero, L_80208F30
    if (ctx->r8 == 0) {
        // 0x80208F14: lw          $t2, 0xC($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XC);
            goto L_80208F30;
    }
    goto skip_0;
    // 0x80208F14: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    skip_0:
    // 0x80208F18: and         $v0, $t8, $a0
    ctx->r2 = ctx->r24 & ctx->r4;
    // 0x80208F1C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80208F20: lh          $t9, 0x0($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X0);
    // 0x80208F24: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80208F28: sh          $t9, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r25;
    // 0x80208F2C: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
L_80208F30:
    // 0x80208F30: addiu       $a0, $zero, -0x4
    ctx->r4 = ADD32(0, -0X4);
    // 0x80208F34: addiu       $t4, $v0, 0x3
    ctx->r12 = ADD32(ctx->r2, 0X3);
    // 0x80208F38: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x80208F3C: beql        $t3, $zero, L_80208F5C
    if (ctx->r11 == 0) {
        // 0x80208F40: lw          $t7, 0xC($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XC);
            goto L_80208F5C;
    }
    goto skip_1;
    // 0x80208F40: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    skip_1:
    // 0x80208F44: and         $v0, $t4, $a0
    ctx->r2 = ctx->r12 & ctx->r4;
    // 0x80208F48: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80208F4C: lh          $t5, 0x2($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X2);
    // 0x80208F50: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80208F54: sh          $t5, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r13;
    // 0x80208F58: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
L_80208F5C:
    // 0x80208F5C: addiu       $t8, $v0, 0x3
    ctx->r24 = ADD32(ctx->r2, 0X3);
    // 0x80208F60: andi        $t0, $t7, 0x4
    ctx->r8 = ctx->r15 & 0X4;
    // 0x80208F64: beql        $t0, $zero, L_80208F84
    if (ctx->r8 == 0) {
        // 0x80208F68: lw          $t2, 0xC($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XC);
            goto L_80208F84;
    }
    goto skip_2;
    // 0x80208F68: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    skip_2:
    // 0x80208F6C: and         $v0, $t8, $a0
    ctx->r2 = ctx->r24 & ctx->r4;
    // 0x80208F70: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80208F74: lh          $t9, 0x4($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X4);
    // 0x80208F78: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80208F7C: sh          $t9, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r25;
    // 0x80208F80: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
L_80208F84:
    // 0x80208F84: addiu       $t4, $v0, 0x3
    ctx->r12 = ADD32(ctx->r2, 0X3);
    // 0x80208F88: andi        $t3, $t2, 0x8
    ctx->r11 = ctx->r10 & 0X8;
    // 0x80208F8C: beql        $t3, $zero, L_80208FAC
    if (ctx->r11 == 0) {
        // 0x80208F90: lw          $t7, 0xC($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XC);
            goto L_80208FAC;
    }
    goto skip_3;
    // 0x80208F90: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    skip_3:
    // 0x80208F94: and         $v0, $t4, $a0
    ctx->r2 = ctx->r12 & ctx->r4;
    // 0x80208F98: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80208F9C: lh          $t5, 0x8($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X8);
    // 0x80208FA0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80208FA4: sh          $t5, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r13;
    // 0x80208FA8: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
L_80208FAC:
    // 0x80208FAC: addiu       $t8, $v0, 0x3
    ctx->r24 = ADD32(ctx->r2, 0X3);
    // 0x80208FB0: andi        $t0, $t7, 0x10
    ctx->r8 = ctx->r15 & 0X10;
    // 0x80208FB4: beql        $t0, $zero, L_80208FD4
    if (ctx->r8 == 0) {
        // 0x80208FB8: lw          $t2, 0xC($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XC);
            goto L_80208FD4;
    }
    goto skip_4;
    // 0x80208FB8: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    skip_4:
    // 0x80208FBC: and         $v0, $t8, $a0
    ctx->r2 = ctx->r24 & ctx->r4;
    // 0x80208FC0: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80208FC4: lh          $t9, 0xA($v1)
    ctx->r25 = MEM_H(ctx->r3, 0XA);
    // 0x80208FC8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80208FCC: sh          $t9, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r25;
    // 0x80208FD0: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
L_80208FD4:
    // 0x80208FD4: addiu       $t4, $v0, 0x3
    ctx->r12 = ADD32(ctx->r2, 0X3);
    // 0x80208FD8: andi        $t3, $t2, 0x20
    ctx->r11 = ctx->r10 & 0X20;
    // 0x80208FDC: beql        $t3, $zero, L_80208FFC
    if (ctx->r11 == 0) {
        // 0x80208FE0: lw          $t7, 0xC($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XC);
            goto L_80208FFC;
    }
    goto skip_5;
    // 0x80208FE0: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    skip_5:
    // 0x80208FE4: and         $v0, $t4, $a0
    ctx->r2 = ctx->r12 & ctx->r4;
    // 0x80208FE8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80208FEC: lbu         $t5, 0xC($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XC);
    // 0x80208FF0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80208FF4: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x80208FF8: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
L_80208FFC:
    // 0x80208FFC: addiu       $t8, $v0, 0x3
    ctx->r24 = ADD32(ctx->r2, 0X3);
    // 0x80209000: andi        $t0, $t7, 0x40
    ctx->r8 = ctx->r15 & 0X40;
    // 0x80209004: beql        $t0, $zero, L_80209024
    if (ctx->r8 == 0) {
        // 0x80209008: lw          $t2, 0xC($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XC);
            goto L_80209024;
    }
    goto skip_6;
    // 0x80209008: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    skip_6:
    // 0x8020900C: and         $v0, $t8, $a0
    ctx->r2 = ctx->r24 & ctx->r4;
    // 0x80209010: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80209014: lbu         $t9, 0xD($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0XD);
    // 0x80209018: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020901C: sb          $t9, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r25;
    // 0x80209020: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
L_80209024:
    // 0x80209024: addiu       $t4, $v0, 0x3
    ctx->r12 = ADD32(ctx->r2, 0X3);
    // 0x80209028: andi        $t3, $t2, 0x80
    ctx->r11 = ctx->r10 & 0X80;
    // 0x8020902C: beql        $t3, $zero, L_8020904C
    if (ctx->r11 == 0) {
        // 0x80209030: lw          $t7, 0xC($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XC);
            goto L_8020904C;
    }
    goto skip_7;
    // 0x80209030: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    skip_7:
    // 0x80209034: and         $v0, $t4, $a0
    ctx->r2 = ctx->r12 & ctx->r4;
    // 0x80209038: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8020903C: lbu         $t5, 0xE($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XE);
    // 0x80209040: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80209044: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x80209048: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
L_8020904C:
    // 0x8020904C: addiu       $t8, $v0, 0x3
    ctx->r24 = ADD32(ctx->r2, 0X3);
    // 0x80209050: and         $v0, $t8, $a0
    ctx->r2 = ctx->r24 & ctx->r4;
    // 0x80209054: andi        $t0, $t7, 0x100
    ctx->r8 = ctx->r15 & 0X100;
    // 0x80209058: beq         $t0, $zero, L_80209070
    if (ctx->r8 == 0) {
        // 0x8020905C: nop
    
            goto L_80209070;
    }
    // 0x8020905C: nop

    // 0x80209060: lbu         $t9, 0xF($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0XF);
    // 0x80209064: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80209068: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020906C: sb          $t9, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r25;
L_80209070:
    // 0x80209070: jr          $ra
    // 0x80209074: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80209074: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8022B374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B374: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022B378: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022B37C: lui         $s2, 0x8027
    ctx->r18 = S32(0X8027 << 16);
    // 0x8022B380: addiu       $s2, $s2, 0x5E70
    ctx->r18 = ADD32(ctx->r18, 0X5E70);
    // 0x8022B384: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8022B388: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022B38C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022B390: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B394: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8022B398: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022B39C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022B3A0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022B3A4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022B3A8: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x8022B3AC: blez        $t6, L_8022B434
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8022B3B0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8022B434;
    }
    // 0x8022B3B0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022B3B4: lui         $s5, 0x8025
    ctx->r21 = S32(0X8025 << 16);
    // 0x8022B3B8: lui         $s4, 0x8027
    ctx->r20 = S32(0X8027 << 16);
    // 0x8022B3BC: lui         $s3, 0x8027
    ctx->r19 = S32(0X8027 << 16);
    // 0x8022B3C0: addiu       $s3, $s3, 0x5E80
    ctx->r19 = ADD32(ctx->r19, 0X5E80);
    // 0x8022B3C4: addiu       $s4, $s4, 0x5F88
    ctx->r20 = ADD32(ctx->r20, 0X5F88);
    // 0x8022B3C8: addiu       $s5, $s5, 0x3FD4
    ctx->r21 = ADD32(ctx->r21, 0X3FD4);
    // 0x8022B3CC: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
L_8022B3D0:
    // 0x8022B3D0: addu        $v0, $s3, $t7
    ctx->r2 = ADD32(ctx->r19, ctx->r15);
    // 0x8022B3D4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8022B3D8: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8022B3DC: sltu        $at, $v1, $t8
    ctx->r1 = ctx->r3 < ctx->r24 ? 1 : 0;
    // 0x8022B3E0: bnel        $at, $zero, L_8022B424
    if (ctx->r1 != 0) {
        // 0x8022B3E4: lw          $t2, 0x0($s2)
        ctx->r10 = MEM_W(ctx->r18, 0X0);
            goto L_8022B424;
    }
    goto skip_0;
    // 0x8022B3E4: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    skip_0:
    // 0x8022B3E8: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x8022B3EC: sltu        $at, $v1, $t9
    ctx->r1 = ctx->r3 < ctx->r25 ? 1 : 0;
    // 0x8022B3F0: beql        $at, $zero, L_8022B424
    if (ctx->r1 == 0) {
        // 0x8022B3F4: lw          $t2, 0x0($s2)
        ctx->r10 = MEM_W(ctx->r18, 0X0);
            goto L_8022B424;
    }
    goto skip_1;
    // 0x8022B3F4: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    skip_1:
    // 0x8022B3F8: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x8022B3FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022B400: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8022B404: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x8022B408: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x8022B40C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8022B410: beql        $t1, $zero, L_8022B424
    if (ctx->r9 == 0) {
        // 0x8022B414: lw          $t2, 0x0($s2)
        ctx->r10 = MEM_W(ctx->r18, 0X0);
            goto L_8022B424;
    }
    goto skip_2;
    // 0x8022B414: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    skip_2:
    // 0x8022B418: jal         0x80231A24
    // 0x8022B41C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022B41C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_0:
    // 0x8022B420: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
L_8022B424:
    // 0x8022B424: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022B428: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8022B42C: bnel        $at, $zero, L_8022B3D0
    if (ctx->r1 != 0) {
        // 0x8022B430: sll         $t7, $s0, 3
        ctx->r15 = S32(ctx->r16 << 3);
            goto L_8022B3D0;
    }
    goto skip_3;
    // 0x8022B430: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
    skip_3:
L_8022B434:
    // 0x8022B434: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022B438: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
    // 0x8022B43C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022B440: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B444: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B448: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022B44C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022B450: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022B454: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B458: jr          $ra
    // 0x8022B45C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8022B45C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80248260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248260: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80248264: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80248268: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8024826C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80248270: jal         0x80241760
    // 0x80248274: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x80248274: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80248278: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8024827C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80248280: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80248284: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80248288: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8024828C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80248290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80248294: jal         0x80241780
    // 0x80248298: sw          $t6, 0x16F0($at)
    MEM_W(0X16F0, ctx->r1) = ctx->r14;
    func_80241780(rdram, ctx);
        goto after_1;
    // 0x80248298: sw          $t6, 0x16F0($at)
    MEM_W(0X16F0, ctx->r1) = ctx->r14;
    after_1:
    // 0x8024829C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802482A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802482A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802482A8: jr          $ra
    // 0x802482AC: nop

    return;
    // 0x802482AC: nop

;}
RECOMP_FUNC void func_8021EB98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021EB98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8021EB9C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8021EBA0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8021EBA4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8021EBA8: lw          $t6, 0x48($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X48);
    // 0x8021EBAC: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x8021EBB0: addiu       $s1, $s1, -0x18E0
    ctx->r17 = ADD32(ctx->r17, -0X18E0);
    // 0x8021EBB4: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x8021EBB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8021EBBC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8021EBC0: lh          $t8, 0x1C($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X1C);
    // 0x8021EBC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021EBC8: sh          $t8, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r24;
    // 0x8021EBCC: jal         0x8021EAB4
    // 0x8021EBD0: lw          $a2, 0x48($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X48);
    func_8021EAB4(rdram, ctx);
        goto after_0;
    // 0x8021EBD0: lw          $a2, 0x48($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X48);
    after_0:
    // 0x8021EBD4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021EBD8: sh          $v0, -0x18DC($at)
    MEM_H(-0X18DC, ctx->r1) = ctx->r2;
    // 0x8021EBDC: lw          $t9, 0x48($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X48);
    // 0x8021EBE0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021EBE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021EBE8: lbu         $t0, 0x8($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X8);
    // 0x8021EBEC: sb          $t0, -0x18B0($at)
    MEM_B(-0X18B0, ctx->r1) = ctx->r8;
    // 0x8021EBF0: lw          $t1, 0x48($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X48);
    // 0x8021EBF4: lbu         $t2, 0x9($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X9);
    // 0x8021EBF8: sb          $t2, -0x18AF($at)
    MEM_B(-0X18AF, ctx->r1) = ctx->r10;
    // 0x8021EBFC: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x8021EC00: jal         0x8023CD40
    // 0x8021EC04: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    func_8023CD40(rdram, ctx);
        goto after_1;
    // 0x8021EC04: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    after_1:
    // 0x8021EC08: lbu         $t3, 0x13($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X13);
    // 0x8021EC0C: lbu         $a1, 0x10($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X10);
    // 0x8021EC10: lbu         $a2, 0x11($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X11);
    // 0x8021EC14: lbu         $a3, 0x12($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X12);
    // 0x8021EC18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021EC1C: jal         0x8023CD60
    // 0x8021EC20: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_8023CD60(rdram, ctx);
        goto after_2;
    // 0x8021EC20: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_2:
    // 0x8021EC24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021EC28: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x8021EC2C: jal         0x8023CD90
    // 0x8021EC30: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    func_8023CD90(rdram, ctx);
        goto after_3;
    // 0x8021EC30: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    after_3:
    // 0x8021EC34: jal         0x8023BE84
    // 0x8021EC38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8023BE84(rdram, ctx);
        goto after_4;
    // 0x8021EC38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x8021EC3C: beq         $v0, $zero, L_8021EC64
    if (ctx->r2 == 0) {
        // 0x8021EC40: addiu       $at, $zero, -0x1000
        ctx->r1 = ADD32(0, -0X1000);
            goto L_8021EC64;
    }
    // 0x8021EC40: addiu       $at, $zero, -0x1000
    ctx->r1 = ADD32(0, -0X1000);
    // 0x8021EC44: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8021EC48: addiu       $a1, $a1, 0x3B90
    ctx->r5 = ADD32(ctx->r5, 0X3B90);
    // 0x8021EC4C: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x8021EC50: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8021EC54: addiu       $t4, $a0, 0x8
    ctx->r12 = ADD32(ctx->r4, 0X8);
    // 0x8021EC58: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x8021EC5C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x8021EC60: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
L_8021EC64:
    // 0x8021EC64: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8021EC68: addiu       $v0, $v0, 0x4348
    ctx->r2 = ADD32(ctx->r2, 0X4348);
    // 0x8021EC6C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8021EC70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8021EC74: addiu       $t9, $zero, 0xFFE
    ctx->r25 = ADD32(0, 0XFFE);
    // 0x8021EC78: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8021EC7C: ori         $t8, $t7, 0xFFE
    ctx->r24 = ctx->r15 | 0XFFE;
    // 0x8021EC80: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021EC84: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8021EC88: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8021EC8C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8021EC90: sw          $t9, 0x434C($at)
    MEM_W(0X434C, ctx->r1) = ctx->r25;
    // 0x8021EC94: jr          $ra
    // 0x8021EC98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8021EC98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8021F440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021F440: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8021F444: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8021F448: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8021F44C: beq         $t6, $zero, L_8021F484
    if (ctx->r14 == 0) {
        // 0x8021F450: sh          $zero, 0x1B5E($at)
        MEM_H(0X1B5E, ctx->r1) = 0;
            goto L_8021F484;
    }
    // 0x8021F450: sh          $zero, 0x1B5E($at)
    MEM_H(0X1B5E, ctx->r1) = 0;
    // 0x8021F454: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8021F458: addiu       $v0, $v0, 0x1B5C
    ctx->r2 = ADD32(ctx->r2, 0X1B5C);
    // 0x8021F45C: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x8021F460: lui         $t1, 0x8027
    ctx->r9 = S32(0X8027 << 16);
    // 0x8021F464: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8021F468: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x8021F46C: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x8021F470: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x8021F474: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8021F478: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8021F47C: lw          $t1, 0x1B50($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1B50);
    // 0x8021F480: sw          $t1, 0x1B58($at)
    MEM_W(0X1B58, ctx->r1) = ctx->r9;
L_8021F484:
    // 0x8021F484: jr          $ra
    // 0x8021F488: nop

    return;
    // 0x8021F488: nop

;}
RECOMP_FUNC void func_8022C480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C480: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8022C484: lbu         $t6, -0x78D2($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X78D2);
    // 0x8022C488: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8022C48C: lw          $t8, -0x78C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X78C0);
    // 0x8022C490: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8022C494: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8022C498: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C49C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x8022C4A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C4A4: bne         $t8, $zero, L_8022C574
    if (ctx->r24 != 0) {
        // 0x8022C4A8: lw          $v0, -0x78E0($v0)
        ctx->r2 = MEM_W(ctx->r2, -0X78E0);
            goto L_8022C574;
    }
    // 0x8022C4A8: lw          $v0, -0x78E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X78E0);
    // 0x8022C4AC: bne         $v0, $zero, L_8022C4D0
    if (ctx->r2 != 0) {
        // 0x8022C4B0: lui         $t9, 0x8028
        ctx->r25 = S32(0X8028 << 16);
            goto L_8022C4D0;
    }
    // 0x8022C4B0: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x8022C4B4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022C4B8: jal         0x80231A24
    // 0x8022C4BC: addiu       $a0, $a0, 0x43C0
    ctx->r4 = ADD32(ctx->r4, 0X43C0);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022C4BC: addiu       $a0, $a0, 0x43C0
    ctx->r4 = ADD32(ctx->r4, 0X43C0);
    after_0:
    // 0x8022C4C0: jal         0x8022D3F0
    // 0x8022C4C4: nop

    func_8022D3F0(rdram, ctx);
        goto after_1;
    // 0x8022C4C4: nop

    after_1:
    // 0x8022C4C8: b           L_8022C578
    // 0x8022C4CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022C578;
    // 0x8022C4CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022C4D0:
    // 0x8022C4D0: lbu         $t9, -0x78D4($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X78D4);
    // 0x8022C4D4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8022C4D8: bnel        $t9, $zero, L_8022C578
    if (ctx->r25 != 0) {
        // 0x8022C4DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022C578;
    }
    goto skip_0;
    // 0x8022C4DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8022C4E0: lbu         $a1, -0x78D7($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X78D7);
    // 0x8022C4E4: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
    // 0x8022C4E8: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8022C4EC: beq         $a1, $at, L_8022C4FC
    if (ctx->r5 == ctx->r1) {
        // 0x8022C4F0: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_8022C4FC;
    }
    // 0x8022C4F0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022C4F4: lbu         $t0, -0x78D6($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X78D6);
    // 0x8022C4F8: beq         $t0, $zero, L_8022C514
    if (ctx->r8 == 0) {
        // 0x8022C4FC: lui         $a2, 0x8028
        ctx->r6 = S32(0X8028 << 16);
            goto L_8022C514;
    }
L_8022C4FC:
    // 0x8022C4FC: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8022C500: lbu         $a2, -0x78D6($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X78D6);
    // 0x8022C504: jal         0x80231A24
    // 0x8022C508: addiu       $a0, $a0, 0x43E0
    ctx->r4 = ADD32(ctx->r4, 0X43E0);
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x8022C508: addiu       $a0, $a0, 0x43E0
    ctx->r4 = ADD32(ctx->r4, 0X43E0);
    after_2:
    // 0x8022C50C: b           L_8022C578
    // 0x8022C510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022C578;
    // 0x8022C510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022C514:
    // 0x8022C514: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8022C518: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x8022C51C: jal         0x8022D560
    // 0x8022C520: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8022D560(rdram, ctx);
        goto after_3;
    // 0x8022C520: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022C524: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C528: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022C52C: lw          $a0, 0x50($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X50);
    // 0x8022C530: jal         0x80236B80
    // 0x8022C534: lw          $a1, 0x54($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X54);
    func_80236B80(rdram, ctx);
        goto after_4;
    // 0x8022C534: lw          $a1, 0x54($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X54);
    after_4:
    // 0x8022C538: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x8022C53C: lw          $t2, -0x1760($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1760);
    // 0x8022C540: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8022C544: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C548: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C54C: bne         $t2, $zero, L_8022C55C
    if (ctx->r10 != 0) {
        // 0x8022C550: sb          $t1, -0x78D8($at)
        MEM_B(-0X78D8, ctx->r1) = ctx->r9;
            goto L_8022C55C;
    }
    // 0x8022C550: sb          $t1, -0x78D8($at)
    MEM_B(-0X78D8, ctx->r1) = ctx->r9;
    // 0x8022C554: jal         0x8023D7A0
    // 0x8022C558: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    func_8023D7A0(rdram, ctx);
        goto after_5;
    // 0x8022C558: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    after_5:
L_8022C55C:
    // 0x8022C55C: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x8022C560: lbu         $t3, -0x78D2($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X78D2);
    // 0x8022C564: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022C568: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8022C56C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8022C570: sw          $zero, -0x78E0($at)
    MEM_W(-0X78E0, ctx->r1) = 0;
L_8022C574:
    // 0x8022C574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022C578:
    // 0x8022C578: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022C57C: jr          $ra
    // 0x8022C580: nop

    return;
    // 0x8022C580: nop

;}
RECOMP_FUNC void func_80234800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234800: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80234804: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80234808: addiu       $v1, $v1, 0x3948
    ctx->r3 = ADD32(ctx->r3, 0X3948);
    // 0x8023480C: beq         $v0, $zero, L_80234834
    if (ctx->r2 == 0) {
        // 0x80234810: lui         $t6, 0x8028
        ctx->r14 = S32(0X8028 << 16);
            goto L_80234834;
    }
    // 0x80234810: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80234814: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80234818: lw          $t6, 0x394C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X394C);
    // 0x8023481C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80234820: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80234824: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
    // 0x80234828: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8023482C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80234830: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_80234834:
    // 0x80234834: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x80234838: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8023483C: addiu       $v1, $v1, 0x3948
    ctx->r3 = ADD32(ctx->r3, 0X3948);
    // 0x80234840: beq         $v0, $zero, L_80234868
    if (ctx->r2 == 0) {
        // 0x80234844: lui         $t2, 0x8028
        ctx->r10 = S32(0X8028 << 16);
            goto L_80234868;
    }
    // 0x80234844: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x80234848: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x8023484C: lw          $t2, 0x394C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X394C);
    // 0x80234850: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80234854: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x80234858: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
    // 0x8023485C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80234860: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x80234864: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_80234868:
    // 0x80234868: jr          $ra
    // 0x8023486C: nop

    return;
    // 0x8023486C: nop

;}
RECOMP_FUNC void func_8022E304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022E304: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022E308: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8022E30C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8022E310: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022E314: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x8022E318: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x8022E31C: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x8022E320: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x8022E324: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x8022E328: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x8022E32C: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x8022E330: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8022E334: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8022E338: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8022E33C: bltz        $a0, L_8022E360
    if (SIGNED(ctx->r4) < 0) {
        // 0x8022E340: sw          $a3, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r7;
            goto L_8022E360;
    }
    // 0x8022E340: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8022E344: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8022E348: lhu         $t6, 0xC06($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XC06);
    // 0x8022E34C: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x8022E350: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x8022E354: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8022E358: bne         $at, $zero, L_8022E378
    if (ctx->r1 != 0) {
        // 0x8022E35C: sll         $t7, $t7, 3
        ctx->r15 = S32(ctx->r15 << 3);
            goto L_8022E378;
    }
    // 0x8022E35C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
L_8022E360:
    // 0x8022E360: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022E364: addiu       $a0, $a0, 0x489C
    ctx->r4 = ADD32(ctx->r4, 0X489C);
    // 0x8022E368: jal         0x80231A24
    // 0x8022E36C: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022E36C: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    after_0:
    // 0x8022E370: b           L_8022EC90
    // 0x8022E374: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_8022EC90;
    // 0x8022E374: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_8022E378:
    // 0x8022E378: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x8022E37C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8022E380: lw          $t8, 0x8D0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X8D0);
    // 0x8022E384: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8022E388: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022E38C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8022E390: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8022E394: addiu       $s0, $sp, 0x54
    ctx->r16 = ADD32(ctx->r29, 0X54);
    // 0x8022E398: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    // 0x8022E39C: addiu       $s3, $zero, -0x4
    ctx->r19 = ADD32(0, -0X4);
    // 0x8022E3A0: addiu       $s2, $zero, -0x8
    ctx->r18 = ADD32(0, -0X8);
    // 0x8022E3A4: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
L_8022E3A8:
    // 0x8022E3A8: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8022E3AC:
    // 0x8022E3AC: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x8022E3B0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022E3B4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8022E3B8: sltiu       $at, $a1, 0x10
    ctx->r1 = ctx->r5 < 0X10 ? 1 : 0;
    // 0x8022E3BC: beq         $at, $zero, L_8022EC80
    if (ctx->r1 == 0) {
        // 0x8022E3C0: sll         $t0, $a1, 2
        ctx->r8 = S32(ctx->r5 << 2);
            goto L_8022EC80;
    }
    // 0x8022E3C0: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    // 0x8022E3C4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022E3C8: addu        $at, $at, $t0
    gpr jr_addend_8022E3D0 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8022E3CC: lw          $t0, 0x49F4($at)
    ctx->r8 = ADD32(ctx->r1, 0X49F4);
    // 0x8022E3D0: jr          $t0
    // 0x8022E3D4: nop

    switch (jr_addend_8022E3D0 >> 2) {
        case 0: goto L_8022EC8C; break;
        case 1: goto L_8022E3D8; break;
        case 2: goto L_8022E4B4; break;
        case 3: goto L_8022E4CC; break;
        case 4: goto L_8022E508; break;
        case 5: goto L_8022E520; break;
        case 6: goto L_8022E538; break;
        case 7: goto L_8022E584; break;
        case 8: goto L_8022E6AC; break;
        case 9: goto L_8022E694; break;
        case 10: goto L_8022EAA0; break;
        case 11: goto L_8022EAEC; break;
        case 12: goto L_8022EB38; break;
        case 13: goto L_8022EC38; break;
        case 14: goto L_8022EC50; break;
        case 15: goto L_8022EC68; break;
        default: switch_error(__func__, 0x8022E3D0, 0x802549F4);
    }
    // 0x8022E3D4: nop

L_8022E3D8:
    // 0x8022E3D8: andi        $t1, $s0, 0x1
    ctx->r9 = ctx->r16 & 0X1;
    // 0x8022E3DC: beq         $t1, $zero, L_8022E3F0
    if (ctx->r9 == 0) {
        // 0x8022E3E0: andi        $t2, $s0, 0x2
        ctx->r10 = ctx->r16 & 0X2;
            goto L_8022E3F0;
    }
    // 0x8022E3E0: andi        $t2, $s0, 0x2
    ctx->r10 = ctx->r16 & 0X2;
    // 0x8022E3E4: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8022E3E8: b           L_8022E414
    // 0x8022E3EC: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8022E414;
    // 0x8022E3EC: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8022E3F0:
    // 0x8022E3F0: beq         $t2, $zero, L_8022E404
    if (ctx->r10 == 0) {
        // 0x8022E3F4: addiu       $t3, $s0, 0x7
        ctx->r11 = ADD32(ctx->r16, 0X7);
            goto L_8022E404;
    }
    // 0x8022E3F4: addiu       $t3, $s0, 0x7
    ctx->r11 = ADD32(ctx->r16, 0X7);
    // 0x8022E3F8: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8022E3FC: b           L_8022E410
    // 0x8022E400: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8022E410;
    // 0x8022E400: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8022E404:
    // 0x8022E404: and         $s0, $t3, $s2
    ctx->r16 = ctx->r11 & ctx->r18;
    // 0x8022E408: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8022E40C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8022E410:
    // 0x8022E410: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8022E414:
    // 0x8022E414: ldc1        $f4, -0x8($v0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r2, -0X8);
    // 0x8022E418: andi        $t4, $s0, 0x1
    ctx->r12 = ctx->r16 & 0X1;
    // 0x8022E41C: andi        $t5, $s0, 0x2
    ctx->r13 = ctx->r16 & 0X2;
    // 0x8022E420: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8022E424: beq         $t4, $zero, L_8022E438
    if (ctx->r12 == 0) {
        // 0x8022E428: swc1        $f6, 0x60($s1)
        MEM_W(0X60, ctx->r17) = ctx->f6.u32l;
            goto L_8022E438;
    }
    // 0x8022E428: swc1        $f6, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->f6.u32l;
    // 0x8022E42C: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8022E430: b           L_8022E45C
    // 0x8022E434: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8022E45C;
    // 0x8022E434: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8022E438:
    // 0x8022E438: beq         $t5, $zero, L_8022E44C
    if (ctx->r13 == 0) {
        // 0x8022E43C: addiu       $t6, $s0, 0x7
        ctx->r14 = ADD32(ctx->r16, 0X7);
            goto L_8022E44C;
    }
    // 0x8022E43C: addiu       $t6, $s0, 0x7
    ctx->r14 = ADD32(ctx->r16, 0X7);
    // 0x8022E440: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8022E444: b           L_8022E458
    // 0x8022E448: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8022E458;
    // 0x8022E448: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8022E44C:
    // 0x8022E44C: and         $s0, $t6, $s2
    ctx->r16 = ctx->r14 & ctx->r18;
    // 0x8022E450: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8022E454: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8022E458:
    // 0x8022E458: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8022E45C:
    // 0x8022E45C: ldc1        $f8, -0x8($v0)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r2, -0X8);
    // 0x8022E460: andi        $t7, $s0, 0x1
    ctx->r15 = ctx->r16 & 0X1;
    // 0x8022E464: andi        $t8, $s0, 0x2
    ctx->r24 = ctx->r16 & 0X2;
    // 0x8022E468: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8022E46C: beq         $t7, $zero, L_8022E480
    if (ctx->r15 == 0) {
        // 0x8022E470: swc1        $f10, 0x64($s1)
        MEM_W(0X64, ctx->r17) = ctx->f10.u32l;
            goto L_8022E480;
    }
    // 0x8022E470: swc1        $f10, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f10.u32l;
    // 0x8022E474: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8022E478: b           L_8022E4A4
    // 0x8022E47C: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8022E4A4;
    // 0x8022E47C: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8022E480:
    // 0x8022E480: beq         $t8, $zero, L_8022E494
    if (ctx->r24 == 0) {
        // 0x8022E484: addiu       $t9, $s0, 0x7
        ctx->r25 = ADD32(ctx->r16, 0X7);
            goto L_8022E494;
    }
    // 0x8022E484: addiu       $t9, $s0, 0x7
    ctx->r25 = ADD32(ctx->r16, 0X7);
    // 0x8022E488: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8022E48C: b           L_8022E4A0
    // 0x8022E490: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8022E4A0;
    // 0x8022E490: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8022E494:
    // 0x8022E494: and         $s0, $t9, $s2
    ctx->r16 = ctx->r25 & ctx->r18;
    // 0x8022E498: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8022E49C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8022E4A0:
    // 0x8022E4A0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8022E4A4:
    // 0x8022E4A4: ldc1        $f16, -0x8($v0)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r2, -0X8);
    // 0x8022E4A8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8022E4AC: b           L_8022E3A8
    // 0x8022E4B0: swc1        $f18, 0x68($s1)
    MEM_W(0X68, ctx->r17) = ctx->f18.u32l;
        goto L_8022E3A8;
    // 0x8022E4B0: swc1        $f18, 0x68($s1)
    MEM_W(0X68, ctx->r17) = ctx->f18.u32l;
L_8022E4B4:
    // 0x8022E4B4: addiu       $t0, $s0, 0x3
    ctx->r8 = ADD32(ctx->r16, 0X3);
    // 0x8022E4B8: and         $s0, $t0, $s3
    ctx->r16 = ctx->r8 & ctx->r19;
    // 0x8022E4BC: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x8022E4C0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8022E4C4: b           L_8022E3A8
    // 0x8022E4C8: sb          $t1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r9;
        goto L_8022E3A8;
    // 0x8022E4C8: sb          $t1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r9;
L_8022E4CC:
    // 0x8022E4CC: addiu       $t2, $s0, 0x3
    ctx->r10 = ADD32(ctx->r16, 0X3);
    // 0x8022E4D0: and         $s0, $t2, $s3
    ctx->r16 = ctx->r10 & ctx->r19;
    // 0x8022E4D4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8022E4D8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8022E4DC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022E4E0: blez        $v0, L_8022E4F0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022E4E4: slti        $at, $v0, 0x4
        ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
            goto L_8022E4F0;
    }
    // 0x8022E4E4: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8022E4E8: bne         $at, $zero, L_8022E500
    if (ctx->r1 != 0) {
        // 0x8022E4EC: nop
    
            goto L_8022E500;
    }
    // 0x8022E4EC: nop

L_8022E4F0:
    // 0x8022E4F0: jal         0x80231A24
    // 0x8022E4F4: addiu       $a0, $a0, 0x48B8
    ctx->r4 = ADD32(ctx->r4, 0X48B8);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022E4F4: addiu       $a0, $a0, 0x48B8
    ctx->r4 = ADD32(ctx->r4, 0X48B8);
    after_1:
    // 0x8022E4F8: b           L_8022E3AC
    // 0x8022E4FC: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8022E3AC;
    // 0x8022E4FC: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8022E500:
    // 0x8022E500: b           L_8022E3A8
    // 0x8022E504: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
        goto L_8022E3A8;
    // 0x8022E504: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_8022E508:
    // 0x8022E508: addiu       $t3, $s0, 0x3
    ctx->r11 = ADD32(ctx->r16, 0X3);
    // 0x8022E50C: and         $s0, $t3, $s3
    ctx->r16 = ctx->r11 & ctx->r19;
    // 0x8022E510: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x8022E514: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8022E518: b           L_8022E3A8
    // 0x8022E51C: sh          $t4, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r12;
        goto L_8022E3A8;
    // 0x8022E51C: sh          $t4, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r12;
L_8022E520:
    // 0x8022E520: addiu       $t5, $s0, 0x3
    ctx->r13 = ADD32(ctx->r16, 0X3);
    // 0x8022E524: and         $s0, $t5, $s3
    ctx->r16 = ctx->r13 & ctx->r19;
    // 0x8022E528: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8022E52C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8022E530: b           L_8022E3A8
    // 0x8022E534: sh          $t6, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r14;
        goto L_8022E3A8;
    // 0x8022E534: sh          $t6, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r14;
L_8022E538:
    // 0x8022E538: addiu       $t7, $s0, 0x3
    ctx->r15 = ADD32(ctx->r16, 0X3);
    // 0x8022E53C: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8022E540: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8022E544: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8022E548: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x8022E54C: beq         $t9, $zero, L_8022E55C
    if (ctx->r25 == 0) {
        // 0x8022E550: sb          $t8, 0x4($s1)
        MEM_B(0X4, ctx->r17) = ctx->r24;
            goto L_8022E55C;
    }
    // 0x8022E550: sb          $t8, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r24;
    // 0x8022E554: b           L_8022E564
    // 0x8022E558: lwc1        $f20, 0x1C($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X1C);
        goto L_8022E564;
    // 0x8022E558: lwc1        $f20, 0x1C($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X1C);
L_8022E55C:
    // 0x8022E55C: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x8022E560: add.s       $f20, $f0, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f0.fl + ctx->f0.fl;
L_8022E564:
    // 0x8022E564: lwc1        $f0, 0x14($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X14);
    // 0x8022E568: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8022E56C: nop

    // 0x8022E570: mul.s       $f6, $f20, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8022E574: jal         0x8022AA40
    // 0x8022E578: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_8022AA40(rdram, ctx);
        goto after_2;
    // 0x8022E578: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_2:
    // 0x8022E57C: b           L_8022E3A8
    // 0x8022E580: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
        goto L_8022E3A8;
    // 0x8022E580: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
L_8022E584:
    // 0x8022E584: andi        $t0, $s0, 0x1
    ctx->r8 = ctx->r16 & 0X1;
    // 0x8022E588: beq         $t0, $zero, L_8022E59C
    if (ctx->r8 == 0) {
        // 0x8022E58C: andi        $t1, $s0, 0x2
        ctx->r9 = ctx->r16 & 0X2;
            goto L_8022E59C;
    }
    // 0x8022E58C: andi        $t1, $s0, 0x2
    ctx->r9 = ctx->r16 & 0X2;
    // 0x8022E590: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8022E594: b           L_8022E5C0
    // 0x8022E598: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8022E5C0;
    // 0x8022E598: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8022E59C:
    // 0x8022E59C: beq         $t1, $zero, L_8022E5B0
    if (ctx->r9 == 0) {
        // 0x8022E5A0: addiu       $t2, $s0, 0x7
        ctx->r10 = ADD32(ctx->r16, 0X7);
            goto L_8022E5B0;
    }
    // 0x8022E5A0: addiu       $t2, $s0, 0x7
    ctx->r10 = ADD32(ctx->r16, 0X7);
    // 0x8022E5A4: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8022E5A8: b           L_8022E5BC
    // 0x8022E5AC: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8022E5BC;
    // 0x8022E5AC: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8022E5B0:
    // 0x8022E5B0: and         $s0, $t2, $s2
    ctx->r16 = ctx->r10 & ctx->r18;
    // 0x8022E5B4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8022E5B8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8022E5BC:
    // 0x8022E5BC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8022E5C0:
    // 0x8022E5C0: ldc1        $f8, -0x8($v0)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r2, -0X8);
    // 0x8022E5C4: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x8022E5C8: andi        $t4, $s0, 0x2
    ctx->r12 = ctx->r16 & 0X2;
    // 0x8022E5CC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8022E5D0: beq         $t3, $zero, L_8022E5E4
    if (ctx->r11 == 0) {
        // 0x8022E5D4: swc1        $f10, 0x14($s1)
        MEM_W(0X14, ctx->r17) = ctx->f10.u32l;
            goto L_8022E5E4;
    }
    // 0x8022E5D4: swc1        $f10, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f10.u32l;
    // 0x8022E5D8: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8022E5DC: b           L_8022E608
    // 0x8022E5E0: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8022E608;
    // 0x8022E5E0: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8022E5E4:
    // 0x8022E5E4: beq         $t4, $zero, L_8022E5F8
    if (ctx->r12 == 0) {
        // 0x8022E5E8: addiu       $t5, $s0, 0x7
        ctx->r13 = ADD32(ctx->r16, 0X7);
            goto L_8022E5F8;
    }
    // 0x8022E5E8: addiu       $t5, $s0, 0x7
    ctx->r13 = ADD32(ctx->r16, 0X7);
    // 0x8022E5EC: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8022E5F0: b           L_8022E604
    // 0x8022E5F4: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8022E604;
    // 0x8022E5F4: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8022E5F8:
    // 0x8022E5F8: and         $s0, $t5, $s2
    ctx->r16 = ctx->r13 & ctx->r18;
    // 0x8022E5FC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8022E600: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8022E604:
    // 0x8022E604: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8022E608:
    // 0x8022E608: ldc1        $f16, -0x8($v0)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r2, -0X8);
    // 0x8022E60C: andi        $t6, $s0, 0x1
    ctx->r14 = ctx->r16 & 0X1;
    // 0x8022E610: andi        $t7, $s0, 0x2
    ctx->r15 = ctx->r16 & 0X2;
    // 0x8022E614: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8022E618: beq         $t6, $zero, L_8022E62C
    if (ctx->r14 == 0) {
        // 0x8022E61C: swc1        $f18, 0x18($s1)
        MEM_W(0X18, ctx->r17) = ctx->f18.u32l;
            goto L_8022E62C;
    }
    // 0x8022E61C: swc1        $f18, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f18.u32l;
    // 0x8022E620: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8022E624: b           L_8022E650
    // 0x8022E628: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8022E650;
    // 0x8022E628: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8022E62C:
    // 0x8022E62C: beq         $t7, $zero, L_8022E640
    if (ctx->r15 == 0) {
        // 0x8022E630: addiu       $t8, $s0, 0x7
        ctx->r24 = ADD32(ctx->r16, 0X7);
            goto L_8022E640;
    }
    // 0x8022E630: addiu       $t8, $s0, 0x7
    ctx->r24 = ADD32(ctx->r16, 0X7);
    // 0x8022E634: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8022E638: b           L_8022E64C
    // 0x8022E63C: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8022E64C;
    // 0x8022E63C: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8022E640:
    // 0x8022E640: and         $s0, $t8, $s2
    ctx->r16 = ctx->r24 & ctx->r18;
    // 0x8022E644: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8022E648: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8022E64C:
    // 0x8022E64C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8022E650:
    // 0x8022E650: ldc1        $f4, -0x8($v0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r2, -0X8);
    // 0x8022E654: lbu         $t9, 0x4($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X4);
    // 0x8022E658: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8022E65C: beq         $t9, $zero, L_8022E66C
    if (ctx->r25 == 0) {
        // 0x8022E660: swc1        $f6, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->f6.u32l;
            goto L_8022E66C;
    }
    // 0x8022E660: swc1        $f6, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f6.u32l;
    // 0x8022E664: b           L_8022E674
    // 0x8022E668: lwc1        $f20, 0x1C($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X1C);
        goto L_8022E674;
    // 0x8022E668: lwc1        $f20, 0x1C($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X1C);
L_8022E66C:
    // 0x8022E66C: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x8022E670: add.s       $f20, $f0, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f0.fl + ctx->f0.fl;
L_8022E674:
    // 0x8022E674: lwc1        $f0, 0x14($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X14);
    // 0x8022E678: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8022E67C: nop

    // 0x8022E680: mul.s       $f10, $f20, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8022E684: jal         0x8022AA40
    // 0x8022E688: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    func_8022AA40(rdram, ctx);
        goto after_3;
    // 0x8022E688: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_3:
    // 0x8022E68C: b           L_8022E3A8
    // 0x8022E690: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
        goto L_8022E3A8;
    // 0x8022E690: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
L_8022E694:
    // 0x8022E694: addiu       $t0, $s0, 0x3
    ctx->r8 = ADD32(ctx->r16, 0X3);
    // 0x8022E698: and         $s0, $t0, $s3
    ctx->r16 = ctx->r8 & ctx->r19;
    // 0x8022E69C: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x8022E6A0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8022E6A4: b           L_8022E3A8
    // 0x8022E6A8: sw          $t1, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r9;
        goto L_8022E3A8;
    // 0x8022E6A8: sw          $t1, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r9;
L_8022E6AC:
    // 0x8022E6AC: andi        $t2, $s0, 0x1
    ctx->r10 = ctx->r16 & 0X1;
    // 0x8022E6B0: beq         $t2, $zero, L_8022E6C4
    if (ctx->r10 == 0) {
        // 0x8022E6B4: andi        $t3, $s0, 0x2
        ctx->r11 = ctx->r16 & 0X2;
            goto L_8022E6C4;
    }
    // 0x8022E6B4: andi        $t3, $s0, 0x2
    ctx->r11 = ctx->r16 & 0X2;
    // 0x8022E6B8: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8022E6BC: b           L_8022E6E8
    // 0x8022E6C0: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8022E6E8;
    // 0x8022E6C0: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8022E6C4:
    // 0x8022E6C4: beq         $t3, $zero, L_8022E6D8
    if (ctx->r11 == 0) {
        // 0x8022E6C8: addiu       $t4, $s0, 0x7
        ctx->r12 = ADD32(ctx->r16, 0X7);
            goto L_8022E6D8;
    }
    // 0x8022E6C8: addiu       $t4, $s0, 0x7
    ctx->r12 = ADD32(ctx->r16, 0X7);
    // 0x8022E6CC: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8022E6D0: b           L_8022E6E4
    // 0x8022E6D4: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8022E6E4;
    // 0x8022E6D4: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8022E6D8:
    // 0x8022E6D8: and         $s0, $t4, $s2
    ctx->r16 = ctx->r12 & ctx->r18;
    // 0x8022E6DC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8022E6E0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8022E6E4:
    // 0x8022E6E4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8022E6E8:
    // 0x8022E6E8: ldc1        $f16, -0x8($v0)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r2, -0X8);
    // 0x8022E6EC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022E6F0: cvt.s.d     $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f20.fl = CVT_S_D(ctx->f16.d);
    // 0x8022E6F4: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x8022E6F8: nop

    // 0x8022E6FC: bc1t        L_8022E714
    if (c1cs) {
        // 0x8022E700: nop
    
            goto L_8022E714;
    }
    // 0x8022E700: nop

    // 0x8022E704: c.lt.s      $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f24.fl < ctx->f20.fl;
    // 0x8022E708: nop

    // 0x8022E70C: bc1f        L_8022E71C
    if (!c1cs) {
        // 0x8022E710: nop
    
            goto L_8022E71C;
    }
    // 0x8022E710: nop

L_8022E714:
    // 0x8022E714: jal         0x80231A24
    // 0x8022E718: addiu       $a0, $a0, 0x48D8
    ctx->r4 = ADD32(ctx->r4, 0X48D8);
    func_80231A24(rdram, ctx);
        goto after_4;
    // 0x8022E718: addiu       $a0, $a0, 0x48D8
    ctx->r4 = ADD32(ctx->r4, 0X48D8);
    after_4:
L_8022E71C:
    // 0x8022E71C: mul.s       $f18, $f20, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x8022E720: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8022E724: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022E728: andi        $t7, $s0, 0x1
    ctx->r15 = ctx->r16 & 0X1;
    // 0x8022E72C: andi        $t8, $s0, 0x2
    ctx->r24 = ctx->r16 & 0X2;
    // 0x8022E730: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022E734: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8022E738: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8022E73C: nop

    // 0x8022E740: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8022E744: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8022E748: nop

    // 0x8022E74C: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8022E750: beql        $t6, $zero, L_8022E7A0
    if (ctx->r14 == 0) {
        // 0x8022E754: mfc1        $t6, $f4
        ctx->r14 = (int32_t)ctx->f4.u32l;
            goto L_8022E7A0;
    }
    goto skip_0;
    // 0x8022E754: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    skip_0:
    // 0x8022E758: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8022E75C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8022E760: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8022E764: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8022E768: nop

    // 0x8022E76C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8022E770: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8022E774: nop

    // 0x8022E778: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8022E77C: bne         $t6, $zero, L_8022E794
    if (ctx->r14 != 0) {
        // 0x8022E780: nop
    
            goto L_8022E794;
    }
    // 0x8022E780: nop

    // 0x8022E784: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x8022E788: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022E78C: b           L_8022E7AC
    // 0x8022E790: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8022E7AC;
    // 0x8022E790: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8022E794:
    // 0x8022E794: b           L_8022E7AC
    // 0x8022E798: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8022E7AC;
    // 0x8022E798: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8022E79C: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
L_8022E7A0:
    // 0x8022E7A0: nop

    // 0x8022E7A4: bltz        $t6, L_8022E794
    if (SIGNED(ctx->r14) < 0) {
        // 0x8022E7A8: nop
    
            goto L_8022E794;
    }
    // 0x8022E7A8: nop

L_8022E7AC:
    // 0x8022E7AC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8022E7B0: beq         $t7, $zero, L_8022E7C4
    if (ctx->r15 == 0) {
        // 0x8022E7B4: sb          $t6, 0x24($s1)
        MEM_B(0X24, ctx->r17) = ctx->r14;
            goto L_8022E7C4;
    }
    // 0x8022E7B4: sb          $t6, 0x24($s1)
    MEM_B(0X24, ctx->r17) = ctx->r14;
    // 0x8022E7B8: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8022E7BC: b           L_8022E7E8
    // 0x8022E7C0: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8022E7E8;
    // 0x8022E7C0: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8022E7C4:
    // 0x8022E7C4: beq         $t8, $zero, L_8022E7D8
    if (ctx->r24 == 0) {
        // 0x8022E7C8: addiu       $t9, $s0, 0x7
        ctx->r25 = ADD32(ctx->r16, 0X7);
            goto L_8022E7D8;
    }
    // 0x8022E7C8: addiu       $t9, $s0, 0x7
    ctx->r25 = ADD32(ctx->r16, 0X7);
    // 0x8022E7CC: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8022E7D0: b           L_8022E7E4
    // 0x8022E7D4: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8022E7E4;
    // 0x8022E7D4: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8022E7D8:
    // 0x8022E7D8: and         $s0, $t9, $s2
    ctx->r16 = ctx->r25 & ctx->r18;
    // 0x8022E7DC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8022E7E0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8022E7E4:
    // 0x8022E7E4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8022E7E8:
    // 0x8022E7E8: ldc1        $f6, -0x8($v0)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r2, -0X8);
    // 0x8022E7EC: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
    // 0x8022E7F0: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x8022E7F4: nop

    // 0x8022E7F8: bc1t        L_8022E810
    if (c1cs) {
        // 0x8022E7FC: nop
    
            goto L_8022E810;
    }
    // 0x8022E7FC: nop

    // 0x8022E800: c.lt.s      $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f24.fl < ctx->f20.fl;
    // 0x8022E804: nop

    // 0x8022E808: bc1f        L_8022E818
    if (!c1cs) {
        // 0x8022E80C: nop
    
            goto L_8022E818;
    }
    // 0x8022E80C: nop

L_8022E810:
    // 0x8022E810: jal         0x80231A24
    // 0x8022E814: addiu       $a0, $a0, 0x48F8
    ctx->r4 = ADD32(ctx->r4, 0X48F8);
    func_80231A24(rdram, ctx);
        goto after_5;
    // 0x8022E814: addiu       $a0, $a0, 0x48F8
    ctx->r4 = ADD32(ctx->r4, 0X48F8);
    after_5:
L_8022E818:
    // 0x8022E818: mul.s       $f8, $f20, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x8022E81C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8022E820: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022E824: andi        $t2, $s0, 0x1
    ctx->r10 = ctx->r16 & 0X1;
    // 0x8022E828: andi        $t3, $s0, 0x2
    ctx->r11 = ctx->r16 & 0X2;
    // 0x8022E82C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022E830: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8022E834: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8022E838: nop

    // 0x8022E83C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8022E840: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8022E844: nop

    // 0x8022E848: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8022E84C: beql        $t1, $zero, L_8022E89C
    if (ctx->r9 == 0) {
        // 0x8022E850: mfc1        $t1, $f10
        ctx->r9 = (int32_t)ctx->f10.u32l;
            goto L_8022E89C;
    }
    goto skip_1;
    // 0x8022E850: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x8022E854: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8022E858: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8022E85C: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8022E860: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8022E864: nop

    // 0x8022E868: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8022E86C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8022E870: nop

    // 0x8022E874: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8022E878: bne         $t1, $zero, L_8022E890
    if (ctx->r9 != 0) {
        // 0x8022E87C: nop
    
            goto L_8022E890;
    }
    // 0x8022E87C: nop

    // 0x8022E880: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8022E884: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022E888: b           L_8022E8A8
    // 0x8022E88C: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_8022E8A8;
    // 0x8022E88C: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_8022E890:
    // 0x8022E890: b           L_8022E8A8
    // 0x8022E894: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_8022E8A8;
    // 0x8022E894: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8022E898: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
L_8022E89C:
    // 0x8022E89C: nop

    // 0x8022E8A0: bltz        $t1, L_8022E890
    if (SIGNED(ctx->r9) < 0) {
        // 0x8022E8A4: nop
    
            goto L_8022E890;
    }
    // 0x8022E8A4: nop

L_8022E8A8:
    // 0x8022E8A8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8022E8AC: beq         $t2, $zero, L_8022E8C0
    if (ctx->r10 == 0) {
        // 0x8022E8B0: sb          $t1, 0x25($s1)
        MEM_B(0X25, ctx->r17) = ctx->r9;
            goto L_8022E8C0;
    }
    // 0x8022E8B0: sb          $t1, 0x25($s1)
    MEM_B(0X25, ctx->r17) = ctx->r9;
    // 0x8022E8B4: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8022E8B8: b           L_8022E8E4
    // 0x8022E8BC: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8022E8E4;
    // 0x8022E8BC: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8022E8C0:
    // 0x8022E8C0: beq         $t3, $zero, L_8022E8D4
    if (ctx->r11 == 0) {
        // 0x8022E8C4: addiu       $t4, $s0, 0x7
        ctx->r12 = ADD32(ctx->r16, 0X7);
            goto L_8022E8D4;
    }
    // 0x8022E8C4: addiu       $t4, $s0, 0x7
    ctx->r12 = ADD32(ctx->r16, 0X7);
    // 0x8022E8C8: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8022E8CC: b           L_8022E8E0
    // 0x8022E8D0: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8022E8E0;
    // 0x8022E8D0: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8022E8D4:
    // 0x8022E8D4: and         $s0, $t4, $s2
    ctx->r16 = ctx->r12 & ctx->r18;
    // 0x8022E8D8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8022E8DC: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8022E8E0:
    // 0x8022E8E0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8022E8E4:
    // 0x8022E8E4: ldc1        $f16, -0x8($v0)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r2, -0X8);
    // 0x8022E8E8: cvt.s.d     $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f20.fl = CVT_S_D(ctx->f16.d);
    // 0x8022E8EC: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x8022E8F0: nop

    // 0x8022E8F4: bc1t        L_8022E90C
    if (c1cs) {
        // 0x8022E8F8: nop
    
            goto L_8022E90C;
    }
    // 0x8022E8F8: nop

    // 0x8022E8FC: c.lt.s      $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f24.fl < ctx->f20.fl;
    // 0x8022E900: nop

    // 0x8022E904: bc1f        L_8022E914
    if (!c1cs) {
        // 0x8022E908: nop
    
            goto L_8022E914;
    }
    // 0x8022E908: nop

L_8022E90C:
    // 0x8022E90C: jal         0x80231A24
    // 0x8022E910: addiu       $a0, $a0, 0x4918
    ctx->r4 = ADD32(ctx->r4, 0X4918);
    func_80231A24(rdram, ctx);
        goto after_6;
    // 0x8022E910: addiu       $a0, $a0, 0x4918
    ctx->r4 = ADD32(ctx->r4, 0X4918);
    after_6:
L_8022E914:
    // 0x8022E914: mul.s       $f18, $f20, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x8022E918: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8022E91C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022E920: andi        $t7, $s0, 0x1
    ctx->r15 = ctx->r16 & 0X1;
    // 0x8022E924: andi        $t8, $s0, 0x2
    ctx->r24 = ctx->r16 & 0X2;
    // 0x8022E928: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022E92C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8022E930: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8022E934: nop

    // 0x8022E938: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8022E93C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8022E940: nop

    // 0x8022E944: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8022E948: beql        $t6, $zero, L_8022E998
    if (ctx->r14 == 0) {
        // 0x8022E94C: mfc1        $t6, $f4
        ctx->r14 = (int32_t)ctx->f4.u32l;
            goto L_8022E998;
    }
    goto skip_2;
    // 0x8022E94C: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    skip_2:
    // 0x8022E950: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8022E954: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8022E958: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8022E95C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8022E960: nop

    // 0x8022E964: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8022E968: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8022E96C: nop

    // 0x8022E970: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8022E974: bne         $t6, $zero, L_8022E98C
    if (ctx->r14 != 0) {
        // 0x8022E978: nop
    
            goto L_8022E98C;
    }
    // 0x8022E978: nop

    // 0x8022E97C: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x8022E980: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022E984: b           L_8022E9A4
    // 0x8022E988: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8022E9A4;
    // 0x8022E988: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8022E98C:
    // 0x8022E98C: b           L_8022E9A4
    // 0x8022E990: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8022E9A4;
    // 0x8022E990: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8022E994: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
L_8022E998:
    // 0x8022E998: nop

    // 0x8022E99C: bltz        $t6, L_8022E98C
    if (SIGNED(ctx->r14) < 0) {
        // 0x8022E9A0: nop
    
            goto L_8022E98C;
    }
    // 0x8022E9A0: nop

L_8022E9A4:
    // 0x8022E9A4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8022E9A8: beq         $t7, $zero, L_8022E9BC
    if (ctx->r15 == 0) {
        // 0x8022E9AC: sb          $t6, 0x26($s1)
        MEM_B(0X26, ctx->r17) = ctx->r14;
            goto L_8022E9BC;
    }
    // 0x8022E9AC: sb          $t6, 0x26($s1)
    MEM_B(0X26, ctx->r17) = ctx->r14;
    // 0x8022E9B0: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8022E9B4: b           L_8022E9E0
    // 0x8022E9B8: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8022E9E0;
    // 0x8022E9B8: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8022E9BC:
    // 0x8022E9BC: beq         $t8, $zero, L_8022E9D0
    if (ctx->r24 == 0) {
        // 0x8022E9C0: addiu       $t9, $s0, 0x7
        ctx->r25 = ADD32(ctx->r16, 0X7);
            goto L_8022E9D0;
    }
    // 0x8022E9C0: addiu       $t9, $s0, 0x7
    ctx->r25 = ADD32(ctx->r16, 0X7);
    // 0x8022E9C4: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8022E9C8: b           L_8022E9DC
    // 0x8022E9CC: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8022E9DC;
    // 0x8022E9CC: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8022E9D0:
    // 0x8022E9D0: and         $s0, $t9, $s2
    ctx->r16 = ctx->r25 & ctx->r18;
    // 0x8022E9D4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8022E9D8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8022E9DC:
    // 0x8022E9DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8022E9E0:
    // 0x8022E9E0: ldc1        $f6, -0x8($v0)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r2, -0X8);
    // 0x8022E9E4: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
    // 0x8022E9E8: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x8022E9EC: nop

    // 0x8022E9F0: bc1t        L_8022EA08
    if (c1cs) {
        // 0x8022E9F4: nop
    
            goto L_8022EA08;
    }
    // 0x8022E9F4: nop

    // 0x8022E9F8: c.lt.s      $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f24.fl < ctx->f20.fl;
    // 0x8022E9FC: nop

    // 0x8022EA00: bc1f        L_8022EA10
    if (!c1cs) {
        // 0x8022EA04: nop
    
            goto L_8022EA10;
    }
    // 0x8022EA04: nop

L_8022EA08:
    // 0x8022EA08: jal         0x80231A24
    // 0x8022EA0C: addiu       $a0, $a0, 0x4938
    ctx->r4 = ADD32(ctx->r4, 0X4938);
    func_80231A24(rdram, ctx);
        goto after_7;
    // 0x8022EA0C: addiu       $a0, $a0, 0x4938
    ctx->r4 = ADD32(ctx->r4, 0X4938);
    after_7:
L_8022EA10:
    // 0x8022EA10: mul.s       $f8, $f20, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x8022EA14: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8022EA18: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022EA1C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8022EA20: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8022EA24: nop

    // 0x8022EA28: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8022EA2C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8022EA30: nop

    // 0x8022EA34: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8022EA38: beql        $t1, $zero, L_8022EA88
    if (ctx->r9 == 0) {
        // 0x8022EA3C: mfc1        $t1, $f10
        ctx->r9 = (int32_t)ctx->f10.u32l;
            goto L_8022EA88;
    }
    goto skip_3;
    // 0x8022EA3C: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    skip_3:
    // 0x8022EA40: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8022EA44: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8022EA48: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8022EA4C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8022EA50: nop

    // 0x8022EA54: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8022EA58: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8022EA5C: nop

    // 0x8022EA60: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8022EA64: bne         $t1, $zero, L_8022EA7C
    if (ctx->r9 != 0) {
        // 0x8022EA68: nop
    
            goto L_8022EA7C;
    }
    // 0x8022EA68: nop

    // 0x8022EA6C: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8022EA70: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022EA74: b           L_8022EA94
    // 0x8022EA78: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_8022EA94;
    // 0x8022EA78: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_8022EA7C:
    // 0x8022EA7C: b           L_8022EA94
    // 0x8022EA80: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_8022EA94;
    // 0x8022EA80: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8022EA84: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
L_8022EA88:
    // 0x8022EA88: nop

    // 0x8022EA8C: bltz        $t1, L_8022EA7C
    if (SIGNED(ctx->r9) < 0) {
        // 0x8022EA90: nop
    
            goto L_8022EA7C;
    }
    // 0x8022EA90: nop

L_8022EA94:
    // 0x8022EA94: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8022EA98: b           L_8022E3A8
    // 0x8022EA9C: sb          $t1, 0x27($s1)
    MEM_B(0X27, ctx->r17) = ctx->r9;
        goto L_8022E3A8;
    // 0x8022EA9C: sb          $t1, 0x27($s1)
    MEM_B(0X27, ctx->r17) = ctx->r9;
L_8022EAA0:
    // 0x8022EAA0: andi        $t2, $s0, 0x1
    ctx->r10 = ctx->r16 & 0X1;
    // 0x8022EAA4: beq         $t2, $zero, L_8022EAB8
    if (ctx->r10 == 0) {
        // 0x8022EAA8: andi        $t3, $s0, 0x2
        ctx->r11 = ctx->r16 & 0X2;
            goto L_8022EAB8;
    }
    // 0x8022EAA8: andi        $t3, $s0, 0x2
    ctx->r11 = ctx->r16 & 0X2;
    // 0x8022EAAC: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8022EAB0: b           L_8022EADC
    // 0x8022EAB4: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8022EADC;
    // 0x8022EAB4: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8022EAB8:
    // 0x8022EAB8: beq         $t3, $zero, L_8022EACC
    if (ctx->r11 == 0) {
        // 0x8022EABC: addiu       $t4, $s0, 0x7
        ctx->r12 = ADD32(ctx->r16, 0X7);
            goto L_8022EACC;
    }
    // 0x8022EABC: addiu       $t4, $s0, 0x7
    ctx->r12 = ADD32(ctx->r16, 0X7);
    // 0x8022EAC0: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8022EAC4: b           L_8022EAD8
    // 0x8022EAC8: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8022EAD8;
    // 0x8022EAC8: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8022EACC:
    // 0x8022EACC: and         $s0, $t4, $s2
    ctx->r16 = ctx->r12 & ctx->r18;
    // 0x8022EAD0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8022EAD4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8022EAD8:
    // 0x8022EAD8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8022EADC:
    // 0x8022EADC: ldc1        $f16, -0x8($v0)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r2, -0X8);
    // 0x8022EAE0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8022EAE4: b           L_8022E3A8
    // 0x8022EAE8: swc1        $f18, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f18.u32l;
        goto L_8022E3A8;
    // 0x8022EAE8: swc1        $f18, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f18.u32l;
L_8022EAEC:
    // 0x8022EAEC: andi        $t5, $s0, 0x1
    ctx->r13 = ctx->r16 & 0X1;
    // 0x8022EAF0: beq         $t5, $zero, L_8022EB04
    if (ctx->r13 == 0) {
        // 0x8022EAF4: andi        $t6, $s0, 0x2
        ctx->r14 = ctx->r16 & 0X2;
            goto L_8022EB04;
    }
    // 0x8022EAF4: andi        $t6, $s0, 0x2
    ctx->r14 = ctx->r16 & 0X2;
    // 0x8022EAF8: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8022EAFC: b           L_8022EB28
    // 0x8022EB00: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8022EB28;
    // 0x8022EB00: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8022EB04:
    // 0x8022EB04: beq         $t6, $zero, L_8022EB18
    if (ctx->r14 == 0) {
        // 0x8022EB08: addiu       $t7, $s0, 0x7
        ctx->r15 = ADD32(ctx->r16, 0X7);
            goto L_8022EB18;
    }
    // 0x8022EB08: addiu       $t7, $s0, 0x7
    ctx->r15 = ADD32(ctx->r16, 0X7);
    // 0x8022EB0C: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8022EB10: b           L_8022EB24
    // 0x8022EB14: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8022EB24;
    // 0x8022EB14: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8022EB18:
    // 0x8022EB18: and         $s0, $t7, $s2
    ctx->r16 = ctx->r15 & ctx->r18;
    // 0x8022EB1C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8022EB20: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8022EB24:
    // 0x8022EB24: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8022EB28:
    // 0x8022EB28: ldc1        $f4, -0x8($v0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r2, -0X8);
    // 0x8022EB2C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8022EB30: b           L_8022E3A8
    // 0x8022EB34: swc1        $f6, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f6.u32l;
        goto L_8022E3A8;
    // 0x8022EB34: swc1        $f6, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f6.u32l;
L_8022EB38:
    // 0x8022EB38: andi        $t8, $s0, 0x1
    ctx->r24 = ctx->r16 & 0X1;
    // 0x8022EB3C: beq         $t8, $zero, L_8022EB50
    if (ctx->r24 == 0) {
        // 0x8022EB40: andi        $t9, $s0, 0x2
        ctx->r25 = ctx->r16 & 0X2;
            goto L_8022EB50;
    }
    // 0x8022EB40: andi        $t9, $s0, 0x2
    ctx->r25 = ctx->r16 & 0X2;
    // 0x8022EB44: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8022EB48: b           L_8022EB74
    // 0x8022EB4C: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8022EB74;
    // 0x8022EB4C: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8022EB50:
    // 0x8022EB50: beq         $t9, $zero, L_8022EB64
    if (ctx->r25 == 0) {
        // 0x8022EB54: addiu       $t0, $s0, 0x7
        ctx->r8 = ADD32(ctx->r16, 0X7);
            goto L_8022EB64;
    }
    // 0x8022EB54: addiu       $t0, $s0, 0x7
    ctx->r8 = ADD32(ctx->r16, 0X7);
    // 0x8022EB58: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8022EB5C: b           L_8022EB70
    // 0x8022EB60: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8022EB70;
    // 0x8022EB60: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8022EB64:
    // 0x8022EB64: and         $s0, $t0, $s2
    ctx->r16 = ctx->r8 & ctx->r18;
    // 0x8022EB68: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8022EB6C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8022EB70:
    // 0x8022EB70: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8022EB74:
    // 0x8022EB74: ldc1        $f8, -0x8($v0)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r2, -0X8);
    // 0x8022EB78: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022EB7C: cvt.s.d     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f20.fl = CVT_S_D(ctx->f8.d);
    // 0x8022EB80: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x8022EB84: nop

    // 0x8022EB88: bc1t        L_8022EBA0
    if (c1cs) {
        // 0x8022EB8C: nop
    
            goto L_8022EBA0;
    }
    // 0x8022EB8C: nop

    // 0x8022EB90: c.lt.s      $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f24.fl < ctx->f20.fl;
    // 0x8022EB94: nop

    // 0x8022EB98: bc1f        L_8022EBA8
    if (!c1cs) {
        // 0x8022EB9C: nop
    
            goto L_8022EBA8;
    }
    // 0x8022EB9C: nop

L_8022EBA0:
    // 0x8022EBA0: jal         0x80231A24
    // 0x8022EBA4: addiu       $a0, $a0, 0x495C
    ctx->r4 = ADD32(ctx->r4, 0X495C);
    func_80231A24(rdram, ctx);
        goto after_8;
    // 0x8022EBA4: addiu       $a0, $a0, 0x495C
    ctx->r4 = ADD32(ctx->r4, 0X495C);
    after_8:
L_8022EBA8:
    // 0x8022EBA8: mul.s       $f10, $f20, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x8022EBAC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8022EBB0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022EBB4: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8022EBB8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8022EBBC: nop

    // 0x8022EBC0: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8022EBC4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8022EBC8: nop

    // 0x8022EBCC: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8022EBD0: beql        $t2, $zero, L_8022EC20
    if (ctx->r10 == 0) {
        // 0x8022EBD4: mfc1        $t2, $f16
        ctx->r10 = (int32_t)ctx->f16.u32l;
            goto L_8022EC20;
    }
    goto skip_4;
    // 0x8022EBD4: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    skip_4:
    // 0x8022EBD8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8022EBDC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8022EBE0: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8022EBE4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8022EBE8: nop

    // 0x8022EBEC: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8022EBF0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8022EBF4: nop

    // 0x8022EBF8: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8022EBFC: bne         $t2, $zero, L_8022EC14
    if (ctx->r10 != 0) {
        // 0x8022EC00: nop
    
            goto L_8022EC14;
    }
    // 0x8022EC00: nop

    // 0x8022EC04: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8022EC08: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022EC0C: b           L_8022EC2C
    // 0x8022EC10: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_8022EC2C;
    // 0x8022EC10: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_8022EC14:
    // 0x8022EC14: b           L_8022EC2C
    // 0x8022EC18: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_8022EC2C;
    // 0x8022EC18: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8022EC1C: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
L_8022EC20:
    // 0x8022EC20: nop

    // 0x8022EC24: bltz        $t2, L_8022EC14
    if (SIGNED(ctx->r10) < 0) {
        // 0x8022EC28: nop
    
            goto L_8022EC14;
    }
    // 0x8022EC28: nop

L_8022EC2C:
    // 0x8022EC2C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8022EC30: b           L_8022E3A8
    // 0x8022EC34: sb          $t2, 0x27($s1)
    MEM_B(0X27, ctx->r17) = ctx->r10;
        goto L_8022E3A8;
    // 0x8022EC34: sb          $t2, 0x27($s1)
    MEM_B(0X27, ctx->r17) = ctx->r10;
L_8022EC38:
    // 0x8022EC38: addiu       $t3, $s0, 0x3
    ctx->r11 = ADD32(ctx->r16, 0X3);
    // 0x8022EC3C: and         $s0, $t3, $s3
    ctx->r16 = ctx->r11 & ctx->r19;
    // 0x8022EC40: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x8022EC44: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8022EC48: b           L_8022E3A8
    // 0x8022EC4C: sb          $t4, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r12;
        goto L_8022E3A8;
    // 0x8022EC4C: sb          $t4, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r12;
L_8022EC50:
    // 0x8022EC50: addiu       $t5, $s0, 0x3
    ctx->r13 = ADD32(ctx->r16, 0X3);
    // 0x8022EC54: and         $s0, $t5, $s3
    ctx->r16 = ctx->r13 & ctx->r19;
    // 0x8022EC58: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8022EC5C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8022EC60: b           L_8022E3A8
    // 0x8022EC64: sb          $t6, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r14;
        goto L_8022E3A8;
    // 0x8022EC64: sb          $t6, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r14;
L_8022EC68:
    // 0x8022EC68: addiu       $t7, $s0, 0x3
    ctx->r15 = ADD32(ctx->r16, 0X3);
    // 0x8022EC6C: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8022EC70: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8022EC74: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8022EC78: b           L_8022E3A8
    // 0x8022EC7C: sb          $t8, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r24;
        goto L_8022E3A8;
    // 0x8022EC7C: sb          $t8, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r24;
L_8022EC80:
    // 0x8022EC80: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022EC84: jal         0x80231A24
    // 0x8022EC88: addiu       $a0, $a0, 0x4980
    ctx->r4 = ADD32(ctx->r4, 0X4980);
    func_80231A24(rdram, ctx);
        goto after_9;
    // 0x8022EC88: addiu       $a0, $a0, 0x4980
    ctx->r4 = ADD32(ctx->r4, 0X4980);
    after_9:
L_8022EC8C:
    // 0x8022EC8C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_8022EC90:
    // 0x8022EC90: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8022EC94: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x8022EC98: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x8022EC9C: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x8022ECA0: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x8022ECA4: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x8022ECA8: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x8022ECAC: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x8022ECB0: jr          $ra
    // 0x8022ECB4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8022ECB4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80225534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80225534: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80225538: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8022553C: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x80225540: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80225544: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80225548: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8022554C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80225550: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80225554: addiu       $a0, $sp, 0x3B
    ctx->r4 = ADD32(ctx->r29, 0X3B);
    // 0x80225558: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8022555C: jal         0x80225424
    // 0x80225560: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_0;
    // 0x80225560: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80225564: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x80225568: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022556C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80225570: jal         0x8022B948
    // 0x80225574: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022B948(rdram, ctx);
        goto after_1;
    // 0x80225574: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x80225578: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    // 0x8022557C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80225580: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80225584: blez        $t7, L_802255C4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80225588: sll         $t8, $s0, 2
        ctx->r24 = S32(ctx->r16 << 2);
            goto L_802255C4;
    }
    // 0x80225588: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
L_8022558C:
    // 0x8022558C: addu        $s1, $t8, $s3
    ctx->r17 = ADD32(ctx->r24, ctx->r19);
    // 0x80225590: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80225594: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80225598: jal         0x80225424
    // 0x8022559C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_2;
    // 0x8022559C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x802255A0: addiu       $a0, $s1, 0x2
    ctx->r4 = ADD32(ctx->r17, 0X2);
    // 0x802255A4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802255A8: jal         0x80225424
    // 0x802255AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_3;
    // 0x802255AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x802255B0: lbu         $t9, 0x3B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3B);
    // 0x802255B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802255B8: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x802255BC: bnel        $at, $zero, L_8022558C
    if (ctx->r1 != 0) {
        // 0x802255C0: sll         $t8, $s0, 2
        ctx->r24 = S32(ctx->r16 << 2);
            goto L_8022558C;
    }
    goto skip_0;
    // 0x802255C0: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    skip_0:
L_802255C4:
    // 0x802255C4: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    // 0x802255C8: jal         0x8022B948
    // 0x802255CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_4;
    // 0x802255CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x802255D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802255D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802255D8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802255DC: jal         0x80225424
    // 0x802255E0: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    func_80225424(rdram, ctx);
        goto after_5;
    // 0x802255E0: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    after_5:
    // 0x802255E4: lbu         $t0, 0x3B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X3B);
    // 0x802255E8: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
    // 0x802255EC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802255F0: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x802255F4: beq         $t1, $zero, L_80225604
    if (ctx->r9 == 0) {
        // 0x802255F8: sb          $t0, 0x34($s0)
        MEM_B(0X34, ctx->r16) = ctx->r8;
            goto L_80225604;
    }
    // 0x802255F8: sb          $t0, 0x34($s0)
    MEM_B(0X34, ctx->r16) = ctx->r8;
    // 0x802255FC: b           L_80225608
    // 0x80225600: sw          $s3, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r19;
        goto L_80225608;
    // 0x80225600: sw          $s3, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r19;
L_80225604:
    // 0x80225604: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
L_80225608:
    // 0x80225608: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022560C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80225610: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80225614: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80225618: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8022561C: jr          $ra
    // 0x80225620: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80225620: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022C0A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C0A8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8022C0AC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022C0B0: lui         $s4, 0x8028
    ctx->r20 = S32(0X8028 << 16);
    // 0x8022C0B4: addiu       $s4, $s4, 0xC58
    ctx->r20 = ADD32(ctx->r20, 0XC58);
    // 0x8022C0B8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022C0BC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8022C0C0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8022C0C4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022C0C8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022C0CC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022C0D0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022C0D4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022C0D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C0DC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8022C0E0: jal         0x8023D470
    // 0x8022C0E4: addiu       $a1, $sp, 0x5B
    ctx->r5 = ADD32(ctx->r29, 0X5B);
    func_8023D470(rdram, ctx);
        goto after_0;
    // 0x8022C0E4: addiu       $a1, $sp, 0x5B
    ctx->r5 = ADD32(ctx->r29, 0X5B);
    after_0:
    // 0x8022C0E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022C0EC: beq         $v0, $at, L_8022C224
    if (ctx->r2 == ctx->r1) {
        // 0x8022C0F0: lui         $v1, 0x8027
        ctx->r3 = S32(0X8027 << 16);
            goto L_8022C224;
    }
    // 0x8022C0F0: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x8022C0F4: addiu       $v1, $v1, 0x6138
    ctx->r3 = ADD32(ctx->r3, 0X6138);
    // 0x8022C0F8: lbu         $v0, 0x5B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X5B);
    // 0x8022C0FC: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x8022C100: lui         $s3, 0x8027
    ctx->r19 = S32(0X8027 << 16);
    // 0x8022C104: addiu       $s3, $s3, 0x5F90
    ctx->r19 = ADD32(ctx->r19, 0X5F90);
    // 0x8022C108: beq         $t6, $v0, L_8022C224
    if (ctx->r14 == ctx->r2) {
        // 0x8022C10C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8022C224;
    }
    // 0x8022C10C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8022C110: lui         $s2, 0x8027
    ctx->r18 = S32(0X8027 << 16);
    // 0x8022C114: lui         $s7, 0x8027
    ctx->r23 = S32(0X8027 << 16);
    // 0x8022C118: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022C11C: addiu       $s7, $s7, 0x613C
    ctx->r23 = ADD32(ctx->r23, 0X613C);
    // 0x8022C120: addiu       $s2, $s2, 0x6130
    ctx->r18 = ADD32(ctx->r18, 0X6130);
    // 0x8022C124: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x8022C128: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x8022C12C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_8022C130:
    // 0x8022C130: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8022C134: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022C138: jal         0x80238F10
    // 0x8022C13C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_80238F10(rdram, ctx);
        goto after_1;
    // 0x8022C13C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x8022C140: sltiu       $at, $v0, 0xC
    ctx->r1 = ctx->r2 < 0XC ? 1 : 0;
    // 0x8022C144: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8022C148: beq         $at, $zero, L_8022C204
    if (ctx->r1 == 0) {
        // 0x8022C14C: sh          $zero, 0x0($s2)
        MEM_H(0X0, ctx->r18) = 0;
            goto L_8022C204;
    }
    // 0x8022C14C: sh          $zero, 0x0($s2)
    MEM_H(0X0, ctx->r18) = 0;
    // 0x8022C150: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8022C154: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022C158: addu        $at, $at, $t7
    gpr jr_addend_8022C160 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8022C15C: lw          $t7, 0x4384($at)
    ctx->r15 = ADD32(ctx->r1, 0X4384);
    // 0x8022C160: jr          $t7
    // 0x8022C164: nop

    switch (jr_addend_8022C160 >> 2) {
        case 0: goto L_8022C168; break;
        case 1: goto L_8022C210; break;
        case 2: goto L_8022C204; break;
        case 3: goto L_8022C204; break;
        case 4: goto L_8022C210; break;
        case 5: goto L_8022C204; break;
        case 6: goto L_8022C204; break;
        case 7: goto L_8022C204; break;
        case 8: goto L_8022C204; break;
        case 9: goto L_8022C204; break;
        case 10: goto L_8022C170; break;
        case 11: goto L_8022C1E0; break;
        default: switch_error(__func__, 0x8022C160, 0x80254384);
    }
    // 0x8022C164: nop

L_8022C168:
    // 0x8022C168: b           L_8022C210
    // 0x8022C16C: sh          $s5, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r21;
        goto L_8022C210;
    // 0x8022C16C: sh          $s5, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r21;
L_8022C170:
    // 0x8022C170: jal         0x80238B90
    // 0x8022C174: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80238B90(rdram, ctx);
        goto after_2;
    // 0x8022C174: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_2:
    // 0x8022C178: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022C17C: addiu       $a0, $a0, 0x42B8
    ctx->r4 = ADD32(ctx->r4, 0X42B8);
    // 0x8022C180: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022C184: jal         0x80231A24
    // 0x8022C188: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x8022C188: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_3:
    // 0x8022C18C: jal         0x80238B90
    // 0x8022C190: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80238B90(rdram, ctx);
        goto after_4;
    // 0x8022C190: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_4:
    // 0x8022C194: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8022C198: bne         $v0, $at, L_8022C1A8
    if (ctx->r2 != ctx->r1) {
        // 0x8022C19C: addu        $s0, $s7, $s1
        ctx->r16 = ADD32(ctx->r23, ctx->r17);
            goto L_8022C1A8;
    }
    // 0x8022C19C: addu        $s0, $s7, $s1
    ctx->r16 = ADD32(ctx->r23, ctx->r17);
    // 0x8022C1A0: b           L_8022C1B0
    // 0x8022C1A4: sb          $fp, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r30;
        goto L_8022C1B0;
    // 0x8022C1A4: sb          $fp, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r30;
L_8022C1A8:
    // 0x8022C1A8: b           L_8022C210
    // 0x8022C1AC: sh          $s5, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r21;
        goto L_8022C210;
    // 0x8022C1AC: sh          $s5, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r21;
L_8022C1B0:
    // 0x8022C1B0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8022C1B4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022C1B8: jal         0x8024AA84
    // 0x8022C1BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8024AA84(rdram, ctx);
        goto after_5;
    // 0x8022C1BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x8022C1C0: bnel        $v0, $zero, L_8022C1D8
    if (ctx->r2 != 0) {
        // 0x8022C1C4: addiu       $t8, $zero, 0x3
        ctx->r24 = ADD32(0, 0X3);
            goto L_8022C1D8;
    }
    goto skip_0;
    // 0x8022C1C4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    skip_0:
    // 0x8022C1C8: sh          $s6, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r22;
    // 0x8022C1CC: b           L_8022C210
    // 0x8022C1D0: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_8022C210;
    // 0x8022C1D0: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x8022C1D4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
L_8022C1D8:
    // 0x8022C1D8: b           L_8022C210
    // 0x8022C1DC: sh          $t8, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r24;
        goto L_8022C210;
    // 0x8022C1DC: sh          $t8, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r24;
L_8022C1E0:
    // 0x8022C1E0: sh          $s6, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r22;
    // 0x8022C1E4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8022C1E8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022C1EC: jal         0x8024AA84
    // 0x8022C1F0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8024AA84(rdram, ctx);
        goto after_6;
    // 0x8022C1F0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
    // 0x8022C1F4: beq         $v0, $zero, L_8022C210
    if (ctx->r2 == 0) {
        // 0x8022C1F8: addu        $t9, $s7, $s1
        ctx->r25 = ADD32(ctx->r23, ctx->r17);
            goto L_8022C210;
    }
    // 0x8022C1F8: addu        $t9, $s7, $s1
    ctx->r25 = ADD32(ctx->r23, ctx->r17);
    // 0x8022C1FC: b           L_8022C210
    // 0x8022C200: sb          $fp, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r30;
        goto L_8022C210;
    // 0x8022C200: sb          $fp, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r30;
L_8022C204:
    // 0x8022C204: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022C208: jal         0x80231A24
    // 0x8022C20C: addiu       $a0, $a0, 0x42E0
    ctx->r4 = ADD32(ctx->r4, 0X42E0);
    func_80231A24(rdram, ctx);
        goto after_7;
    // 0x8022C20C: addiu       $a0, $a0, 0x42E0
    ctx->r4 = ADD32(ctx->r4, 0X42E0);
    after_7:
L_8022C210:
    // 0x8022C210: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022C214: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8022C218: addiu       $s3, $s3, 0x68
    ctx->r19 = ADD32(ctx->r19, 0X68);
    // 0x8022C21C: bne         $s1, $at, L_8022C130
    if (ctx->r17 != ctx->r1) {
        // 0x8022C220: addiu       $s2, $s2, 0x2
        ctx->r18 = ADD32(ctx->r18, 0X2);
            goto L_8022C130;
    }
    // 0x8022C220: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
L_8022C224:
    // 0x8022C224: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022C228: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022C22C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C230: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022C234: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022C238: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022C23C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C240: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022C244: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8022C248: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8022C24C: jr          $ra
    // 0x8022C250: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8022C250: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8023E0B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E0B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8023E0B4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8023E0B8: lbu         $t6, 0x47($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X47);
    // 0x8023E0BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023E0C0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8023E0C4: slti        $at, $t6, 0x41
    ctx->r1 = SIGNED(ctx->r14) < 0X41 ? 1 : 0;
    // 0x8023E0C8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8023E0CC: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8023E0D0: bne         $at, $zero, L_8023E0E0
    if (ctx->r1 != 0) {
        // 0x8023E0D4: sw          $zero, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = 0;
            goto L_8023E0E0;
    }
    // 0x8023E0D4: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8023E0D8: b           L_8023E1DC
    // 0x8023E0DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8023E1DC;
    // 0x8023E0DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8023E0E0:
    // 0x8023E0E0: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x8023E0E4: blez        $t7, L_8023E1D8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8023E0E8: nop
    
            goto L_8023E1D8;
    }
    // 0x8023E0E8: nop

L_8023E0EC:
    // 0x8023E0EC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8023E0F0: lbu         $a1, 0x47($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X47);
    // 0x8023E0F4: jal         0x80247830
    // 0x8023E0F8: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    func_80247830(rdram, ctx);
        goto after_0;
    // 0x8023E0F8: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    after_0:
    // 0x8023E0FC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8023E100: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8023E104: beq         $t8, $zero, L_8023E114
    if (ctx->r24 == 0) {
        // 0x8023E108: nop
    
            goto L_8023E114;
    }
    // 0x8023E108: nop

    // 0x8023E10C: b           L_8023E1DC
    // 0x8023E110: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_8023E1DC;
    // 0x8023E110: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8023E114:
    // 0x8023E114: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8023E118: lbu         $t1, 0x47($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X47);
    // 0x8023E11C: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x8023E120: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x8023E124: lui         $a3, 0x8025
    ctx->r7 = S32(0X8025 << 16);
    // 0x8023E128: addiu       $t0, $t9, -0x8
    ctx->r8 = ADD32(ctx->r25, -0X8);
    // 0x8023E12C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8023E130: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8023E134: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x8023E138: sb          $t2, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r10;
    // 0x8023E13C: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    // 0x8023E140: lw          $a3, 0x1684($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X1684);
    // 0x8023E144: lw          $a2, 0x1680($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1680);
    // 0x8023E148: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x8023E14C: jal         0x8023D228
    // 0x8023E150: addiu       $a1, $zero, 0x2EE0
    ctx->r5 = ADD32(0, 0X2EE0);
    func_8023D228(rdram, ctx);
        goto after_1;
    // 0x8023E150: addiu       $a1, $zero, 0x2EE0
    ctx->r5 = ADD32(0, 0X2EE0);
    after_1:
    // 0x8023E154: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8023E158: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x8023E15C: lui         $a3, 0xF
    ctx->r7 = S32(0XF << 16);
    // 0x8023E160: ori         $a3, $a3, 0x4240
    ctx->r7 = ctx->r7 | 0X4240;
    // 0x8023E164: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8023E168: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8023E16C: jal         0x8023D128
    // 0x8023E170: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8023D128(rdram, ctx);
        goto after_2;
    // 0x8023E170: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_2:
    // 0x8023E174: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x8023E178: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8023E17C: addiu       $t8, $t8, 0x5EF0
    ctx->r24 = ADD32(ctx->r24, 0X5EF0);
    // 0x8023E180: addiu       $t5, $t5, 0x5ED8
    ctx->r13 = ADD32(ctx->r13, 0X5ED8);
    // 0x8023E184: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8023E188: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x8023E18C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023E190: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x8023E194: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x8023E198: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8023E19C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8023E1A0: addiu       $a0, $a0, 0x5EB8
    ctx->r4 = ADD32(ctx->r4, 0X5EB8);
    // 0x8023E1A4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8023E1A8: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8023E1AC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8023E1B0: jal         0x8023E920
    // 0x8023E1B4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_8023E920(rdram, ctx);
        goto after_3;
    // 0x8023E1B4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_3:
    // 0x8023E1B8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023E1BC: addiu       $a0, $a0, 0x5ED8
    ctx->r4 = ADD32(ctx->r4, 0X5ED8);
    // 0x8023E1C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8023E1C4: jal         0x802374B0
    // 0x8023E1C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_4;
    // 0x8023E1C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8023E1CC: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8023E1D0: bgtz        $t9, L_8023E0EC
    if (SIGNED(ctx->r25) > 0) {
        // 0x8023E1D4: nop
    
            goto L_8023E0EC;
    }
    // 0x8023E1D4: nop

L_8023E1D8:
    // 0x8023E1D8: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
L_8023E1DC:
    // 0x8023E1DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023E1E0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8023E1E4: jr          $ra
    // 0x8023E1E8: nop

    return;
    // 0x8023E1E8: nop

;}
RECOMP_FUNC void func_80204190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80204190: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x80204194: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80204198: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8020419C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802041A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802041A4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x802041A8: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x802041AC: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x802041B0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802041B4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802041B8: beq         $a0, $at, L_802041D8
    if (ctx->r4 == ctx->r1) {
        // 0x802041BC: sw          $s1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r17;
            goto L_802041D8;
    }
    // 0x802041BC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802041C0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802041C4: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802041C8: addiu       $a1, $a1, 0x27C8
    ctx->r5 = ADD32(ctx->r5, 0X27C8);
    // 0x802041CC: addiu       $a0, $a0, 0x27B0
    ctx->r4 = ADD32(ctx->r4, 0X27B0);
    // 0x802041D0: jal         0x80231C9C
    // 0x802041D4: addiu       $a2, $zero, 0x11E
    ctx->r6 = ADD32(0, 0X11E);
    func_80231C9C(rdram, ctx);
        goto after_0;
    // 0x802041D4: addiu       $a2, $zero, 0x11E
    ctx->r6 = ADD32(0, 0X11E);
    after_0:
L_802041D8:
    // 0x802041D8: beq         $s0, $zero, L_802041F4
    if (ctx->r16 == 0) {
        // 0x802041DC: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_802041F4;
    }
    // 0x802041DC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802041E0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802041E4: addiu       $a1, $a1, 0x27E0
    ctx->r5 = ADD32(ctx->r5, 0X27E0);
    // 0x802041E8: addiu       $a0, $a0, 0x27D4
    ctx->r4 = ADD32(ctx->r4, 0X27D4);
    // 0x802041EC: jal         0x80231C9C
    // 0x802041F0: addiu       $a2, $zero, 0x11F
    ctx->r6 = ADD32(0, 0X11F);
    func_80231C9C(rdram, ctx);
        goto after_1;
    // 0x802041F0: addiu       $a2, $zero, 0x11F
    ctx->r6 = ADD32(0, 0X11F);
    after_1:
L_802041F4:
    // 0x802041F4: beq         $s4, $zero, L_80204210
    if (ctx->r20 == 0) {
        // 0x802041F8: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80204210;
    }
    // 0x802041F8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802041FC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80204200: addiu       $a1, $a1, 0x27FC
    ctx->r5 = ADD32(ctx->r5, 0X27FC);
    // 0x80204204: addiu       $a0, $a0, 0x27EC
    ctx->r4 = ADD32(ctx->r4, 0X27EC);
    // 0x80204208: jal         0x80231C9C
    // 0x8020420C: addiu       $a2, $zero, 0x120
    ctx->r6 = ADD32(0, 0X120);
    func_80231C9C(rdram, ctx);
        goto after_2;
    // 0x8020420C: addiu       $a2, $zero, 0x120
    ctx->r6 = ADD32(0, 0X120);
    after_2:
L_80204210:
    // 0x80204210: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x80204214: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x80204218: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8020421C: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x80204220: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80204224: addiu       $t7, $t7, 0x7390
    ctx->r15 = ADD32(ctx->r15, 0X7390);
    // 0x80204228: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8020422C: addu        $t3, $t6, $t7
    ctx->r11 = ADD32(ctx->r14, ctx->r15);
    // 0x80204230: lw          $s2, 0x50($t3)
    ctx->r18 = MEM_W(ctx->r11, 0X50);
    // 0x80204234: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80204238: blez        $s2, L_80204318
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8020423C: andi        $a0, $s2, 0x3
        ctx->r4 = ctx->r18 & 0X3;
            goto L_80204318;
    }
    // 0x8020423C: andi        $a0, $s2, 0x3
    ctx->r4 = ctx->r18 & 0X3;
    // 0x80204240: beq         $a0, $zero, L_8020427C
    if (ctx->r4 == 0) {
        // 0x80204244: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_8020427C;
    }
    // 0x80204244: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80204248: sll         $t2, $zero, 3
    ctx->r10 = S32(0 << 3);
    // 0x8020424C: addiu       $t8, $sp, 0x64
    ctx->r24 = ADD32(ctx->r29, 0X64);
    // 0x80204250: addu        $s0, $t2, $t8
    ctx->r16 = ADD32(ctx->r10, ctx->r24);
    // 0x80204254: addu        $v0, $t3, $t2
    ctx->r2 = ADD32(ctx->r11, ctx->r10);
L_80204258:
    // 0x80204258: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x8020425C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80204260: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80204264: sw          $at, -0x8($s0)
    MEM_W(-0X8, ctx->r16) = ctx->r1;
    // 0x80204268: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x8020426C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80204270: bne         $v1, $s1, L_80204258
    if (ctx->r3 != ctx->r17) {
        // 0x80204274: sw          $t4, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r12;
            goto L_80204258;
    }
    // 0x80204274: sw          $t4, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r12;
    // 0x80204278: beq         $s1, $s2, L_80204314
    if (ctx->r17 == ctx->r18) {
        // 0x8020427C: sll         $t2, $s1, 3
        ctx->r10 = S32(ctx->r17 << 3);
            goto L_80204314;
    }
L_8020427C:
    // 0x8020427C: sll         $t2, $s1, 3
    ctx->r10 = S32(ctx->r17 << 3);
    // 0x80204280: addiu       $t5, $sp, 0x64
    ctx->r13 = ADD32(ctx->r29, 0X64);
    // 0x80204284: addu        $s0, $t2, $t5
    ctx->r16 = ADD32(ctx->r10, ctx->r13);
    // 0x80204288: addu        $v0, $t3, $t2
    ctx->r2 = ADD32(ctx->r11, ctx->r10);
    // 0x8020428C: sll         $t6, $s2, 3
    ctx->r14 = S32(ctx->r18 << 3);
    // 0x80204290: addiu       $t7, $sp, 0x7C
    ctx->r15 = ADD32(ctx->r29, 0X7C);
    // 0x80204294: addu        $t1, $t6, $t7
    ctx->r9 = ADD32(ctx->r14, ctx->r15);
    // 0x80204298: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x8020429C: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    // 0x802042A0: addiu       $t0, $v0, 0x18
    ctx->r8 = ADD32(ctx->r2, 0X18);
    // 0x802042A4: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x802042A8: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x802042AC: addiu       $v1, $s0, 0x18
    ctx->r3 = ADD32(ctx->r16, 0X18);
L_802042B0:
    // 0x802042B0: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x802042B4: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x802042B8: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x802042BC: sw          $at, -0x20($s0)
    MEM_W(-0X20, ctx->r16) = ctx->r1;
    // 0x802042C0: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x802042C4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x802042C8: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x802042CC: sw          $t9, -0x1C($s0)
    MEM_W(-0X1C, ctx->r16) = ctx->r25;
    // 0x802042D0: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x802042D4: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x802042D8: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    // 0x802042DC: sw          $at, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = ctx->r1;
    // 0x802042E0: lw          $t5, -0x1C($a2)
    ctx->r13 = MEM_W(ctx->r6, -0X1C);
    // 0x802042E4: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x802042E8: addiu       $t0, $t0, 0x20
    ctx->r8 = ADD32(ctx->r8, 0X20);
    // 0x802042EC: sw          $t5, -0x1C($a0)
    MEM_W(-0X1C, ctx->r4) = ctx->r13;
    // 0x802042F0: lw          $at, -0x20($a3)
    ctx->r1 = MEM_W(ctx->r7, -0X20);
    // 0x802042F4: sw          $at, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->r1;
    // 0x802042F8: lw          $t7, -0x1C($a3)
    ctx->r15 = MEM_W(ctx->r7, -0X1C);
    // 0x802042FC: sw          $t7, -0x1C($a1)
    MEM_W(-0X1C, ctx->r5) = ctx->r15;
    // 0x80204300: lw          $at, -0x20($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X20);
    // 0x80204304: sw          $at, -0x20($v1)
    MEM_W(-0X20, ctx->r3) = ctx->r1;
    // 0x80204308: lw          $t9, -0x1C($t0)
    ctx->r25 = MEM_W(ctx->r8, -0X1C);
    // 0x8020430C: bne         $v1, $t1, L_802042B0
    if (ctx->r3 != ctx->r9) {
        // 0x80204310: sw          $t9, -0x1C($v1)
        MEM_W(-0X1C, ctx->r3) = ctx->r25;
            goto L_802042B0;
    }
    // 0x80204310: sw          $t9, -0x1C($v1)
    MEM_W(-0X1C, ctx->r3) = ctx->r25;
L_80204314:
    // 0x80204314: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80204318:
    // 0x80204318: blez        $s2, L_80204340
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8020431C: addiu       $s0, $sp, 0x64
        ctx->r16 = ADD32(ctx->r29, 0X64);
            goto L_80204340;
    }
    // 0x8020431C: addiu       $s0, $sp, 0x64
    ctx->r16 = ADD32(ctx->r29, 0X64);
L_80204320:
    // 0x80204320: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80204324: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80204328: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x8020432C: jalr        $t9
    // 0x80204330: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80204330: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_3:
    // 0x80204334: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80204338: bne         $s1, $s2, L_80204320
    if (ctx->r17 != ctx->r18) {
        // 0x8020433C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_80204320;
    }
    // 0x8020433C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80204340:
    // 0x80204340: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80204344: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80204348: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8020434C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80204350: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80204354: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80204358: jr          $ra
    // 0x8020435C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x8020435C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_8021B9AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021B9AC: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8021B9B0: lhu         $t6, 0xBE6($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XBE6);
    // 0x8021B9B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021B9B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021B9BC: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021B9C0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8021B9C4: beq         $at, $zero, L_8021B9E4
    if (ctx->r1 == 0) {
        // 0x8021B9C8: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_8021B9E4;
    }
    // 0x8021B9C8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8021B9CC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021B9D0: addiu       $a0, $a0, 0x33BC
    ctx->r4 = ADD32(ctx->r4, 0X33BC);
    // 0x8021B9D4: jal         0x80231A24
    // 0x8021B9D8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021B9D8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x8021B9DC: b           L_8021BA10
    // 0x8021B9E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021BA10;
    // 0x8021B9E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021B9E4:
    // 0x8021B9E4: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x8021B9E8: lw          $t7, -0x3C20($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3C20);
    // 0x8021B9EC: sll         $t8, $a2, 3
    ctx->r24 = S32(ctx->r6 << 3);
    // 0x8021B9F0: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x8021B9F4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8021B9F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8021B9FC: lbu         $t0, 0x8($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X8);
    // 0x8021BA00: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8021BA04: jal         0x8021B838
    // 0x8021BA08: or          $a1, $t0, $a3
    ctx->r5 = ctx->r8 | ctx->r7;
    func_8021B838(rdram, ctx);
        goto after_1;
    // 0x8021BA08: or          $a1, $t0, $a3
    ctx->r5 = ctx->r8 | ctx->r7;
    after_1:
    // 0x8021BA0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021BA10:
    // 0x8021BA10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021BA14: jr          $ra
    // 0x8021BA18: nop

    return;
    // 0x8021BA18: nop

;}
RECOMP_FUNC void func_8023D1CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D1CC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8023D1D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8023D1D4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023D1D8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023D1DC: ld          $t7, 0x8($sp)
    ctx->r15 = LD(ctx->r29, 0X8);
    // 0x8023D1E0: ld          $t6, 0x0($sp)
    ctx->r14 = LD(ctx->r29, 0X0);
    // 0x8023D1E4: ddiv        $zero, $t6, $t7
    DDIV(S64(ctx->r14), S64(ctx->r15), &lo, &hi);
    // 0x8023D1E8: nop

    // 0x8023D1EC: bne         $t7, $zero, L_8023D1F8
    if (ctx->r15 != 0) {
        // 0x8023D1F0: nop
    
            goto L_8023D1F8;
    }
    // 0x8023D1F0: nop

    // 0x8023D1F4: break       7
    do_break(2149831156);
L_8023D1F8:
    // 0x8023D1F8: daddiu      $at, $zero, -0x1
    ctx->r1 = 0 + -0X1;
    // 0x8023D1FC: bne         $t7, $at, L_8023D214
    if (ctx->r15 != ctx->r1) {
        // 0x8023D200: daddiu      $at, $zero, 0x1
        ctx->r1 = 0 + 0X1;
            goto L_8023D214;
    }
    // 0x8023D200: daddiu      $at, $zero, 0x1
    ctx->r1 = 0 + 0X1;
    // 0x8023D204: dsll32      $at, $at, 31
    ctx->r1 = ctx->r1 << (31 + 32);
    // 0x8023D208: bne         $t6, $at, L_8023D214
    if (ctx->r14 != ctx->r1) {
        // 0x8023D20C: nop
    
            goto L_8023D214;
    }
    // 0x8023D20C: nop

    // 0x8023D210: break       6
    do_break(2149831184);
L_8023D214:
    // 0x8023D214: mflo        $v0
    ctx->r2 = lo;
    // 0x8023D218: dsll32      $v1, $v0, 0
    ctx->r3 = ctx->r2 << (0 + 32);
    // 0x8023D21C: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x8023D220: jr          $ra
    // 0x8023D224: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x8023D224: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void func_8023DB60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023DB60: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8023DB64: lw          $t6, 0x940($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X940);
    // 0x8023DB68: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023DB6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023DB70: bne         $t6, $zero, L_8023DCD8
    if (ctx->r14 != 0) {
        // 0x8023DB74: sw          $a0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r4;
            goto L_8023DCD8;
    }
    // 0x8023DB74: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8023DB78: jal         0x80247090
    // 0x8023DB7C: nop

    func_80247090(rdram, ctx);
        goto after_0;
    // 0x8023DB7C: nop

    after_0:
    // 0x8023DB80: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023DB84: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8023DB88: addiu       $a1, $a1, 0x4BB8
    ctx->r5 = ADD32(ctx->r5, 0X4BB8);
    // 0x8023DB8C: addiu       $a0, $a0, 0x4BA0
    ctx->r4 = ADD32(ctx->r4, 0X4BA0);
    // 0x8023DB90: jal         0x802371E0
    // 0x8023DB94: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_802371E0(rdram, ctx);
        goto after_1;
    // 0x8023DB94: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x8023DB98: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023DB9C: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x8023DBA0: sh          $t7, 0x4BD0($at)
    MEM_H(0X4BD0, ctx->r1) = ctx->r15;
    // 0x8023DBA4: sb          $zero, 0x4BD2($at)
    MEM_B(0X4BD2, ctx->r1) = 0;
    // 0x8023DBA8: sw          $zero, 0x4BD4($at)
    MEM_W(0X4BD4, ctx->r1) = 0;
    // 0x8023DBAC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023DBB0: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x8023DBB4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8023DBB8: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8023DBBC: sh          $t8, 0x4BE8($at)
    MEM_H(0X4BE8, ctx->r1) = ctx->r24;
    // 0x8023DBC0: sb          $zero, 0x4BEA($at)
    MEM_B(0X4BEA, ctx->r1) = 0;
    // 0x8023DBC4: sw          $zero, 0x4BEC($at)
    MEM_W(0X4BEC, ctx->r1) = 0;
    // 0x8023DBC8: addiu       $a2, $a2, 0x4BD0
    ctx->r6 = ADD32(ctx->r6, 0X4BD0);
    // 0x8023DBCC: addiu       $a1, $a1, 0x4BA0
    ctx->r5 = ADD32(ctx->r5, 0X4BA0);
    // 0x8023DBD0: jal         0x8023DF30
    // 0x8023DBD4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8023DF30(rdram, ctx);
        goto after_2;
    // 0x8023DBD4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
    // 0x8023DBD8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8023DBDC: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8023DBE0: addiu       $a2, $a2, 0x4BE8
    ctx->r6 = ADD32(ctx->r6, 0X4BE8);
    // 0x8023DBE4: addiu       $a1, $a1, 0x4BA0
    ctx->r5 = ADD32(ctx->r5, 0X4BA0);
    // 0x8023DBE8: jal         0x8023DF30
    // 0x8023DBEC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8023DF30(rdram, ctx);
        goto after_3;
    // 0x8023DBEC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
    // 0x8023DBF0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8023DBF4: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x8023DBF8: jal         0x80247490
    // 0x8023DBFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80247490(rdram, ctx);
        goto after_4;
    // 0x8023DBFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x8023DC00: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8023DC04: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8023DC08: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8023DC0C: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8023DC10: beq         $at, $zero, L_8023DC28
    if (ctx->r1 == 0) {
        // 0x8023DC14: nop
    
            goto L_8023DC28;
    }
    // 0x8023DC14: nop

    // 0x8023DC18: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8023DC1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8023DC20: jal         0x8023E840
    // 0x8023DC24: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_8023E840(rdram, ctx);
        goto after_5;
    // 0x8023DC24: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_5:
L_8023DC28:
    // 0x8023DC28: jal         0x80241760
    // 0x8023DC2C: nop

    func_80241760(rdram, ctx);
        goto after_6;
    // 0x8023DC2C: nop

    after_6:
    // 0x8023DC30: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023DC34: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x8023DC38: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x8023DC3C: addiu       $t4, $t4, 0x4BA0
    ctx->r12 = ADD32(ctx->r12, 0X4BA0);
    // 0x8023DC40: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8023DC44: addiu       $t3, $t3, 0x39F0
    ctx->r11 = ADD32(ctx->r11, 0X39F0);
    // 0x8023DC48: sw          $t2, 0x940($at)
    MEM_W(0X940, ctx->r1) = ctx->r10;
    // 0x8023DC4C: sw          $t3, 0x944($at)
    MEM_W(0X944, ctx->r1) = ctx->r11;
    // 0x8023DC50: sw          $t4, 0x948($at)
    MEM_W(0X948, ctx->r1) = ctx->r12;
    // 0x8023DC54: sw          $t4, 0x94C($at)
    MEM_W(0X94C, ctx->r1) = ctx->r12;
    // 0x8023DC58: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x8023DC5C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8023DC60: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023DC64: addiu       $t5, $t5, 0x3BA0
    ctx->r13 = ADD32(ctx->r13, 0X3BA0);
    // 0x8023DC68: addiu       $t6, $t5, 0x1000
    ctx->r14 = ADD32(ctx->r13, 0X1000);
    // 0x8023DC6C: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x8023DC70: lui         $a3, 0x8025
    ctx->r7 = S32(0X8025 << 16);
    // 0x8023DC74: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8023DC78: sw          $zero, 0x950($at)
    MEM_W(0X950, ctx->r1) = 0;
    // 0x8023DC7C: sw          $zero, 0x954($at)
    MEM_W(0X954, ctx->r1) = 0;
    // 0x8023DC80: sw          $zero, 0x958($at)
    MEM_W(0X958, ctx->r1) = 0;
    // 0x8023DC84: addiu       $a3, $a3, 0x940
    ctx->r7 = ADD32(ctx->r7, 0X940);
    // 0x8023DC88: addiu       $a2, $a2, -0x2318
    ctx->r6 = ADD32(ctx->r6, -0X2318);
    // 0x8023DC8C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8023DC90: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8023DC94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8023DC98: jal         0x80237210
    // 0x8023DC9C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_80237210(rdram, ctx);
        goto after_7;
    // 0x8023DC9C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_7:
    // 0x8023DCA0: jal         0x802420E0
    // 0x8023DCA4: nop

    func_802420E0(rdram, ctx);
        goto after_8;
    // 0x8023DCA4: nop

    after_8:
    // 0x8023DCA8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023DCAC: jal         0x80237360
    // 0x8023DCB0: addiu       $a0, $a0, 0x39F0
    ctx->r4 = ADD32(ctx->r4, 0X39F0);
    func_80237360(rdram, ctx);
        goto after_9;
    // 0x8023DCB0: addiu       $a0, $a0, 0x39F0
    ctx->r4 = ADD32(ctx->r4, 0X39F0);
    after_9:
    // 0x8023DCB4: jal         0x80241780
    // 0x8023DCB8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_80241780(rdram, ctx);
        goto after_10;
    // 0x8023DCB8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_10:
    // 0x8023DCBC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8023DCC0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023DCC4: beq         $t8, $at, L_8023DCD8
    if (ctx->r24 == ctx->r1) {
        // 0x8023DCC8: nop
    
            goto L_8023DCD8;
    }
    // 0x8023DCC8: nop

    // 0x8023DCCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8023DCD0: jal         0x8023E840
    // 0x8023DCD4: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8023E840(rdram, ctx);
        goto after_11;
    // 0x8023DCD4: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_11:
L_8023DCD8:
    // 0x8023DCD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023DCDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8023DCE0: jr          $ra
    // 0x8023DCE4: nop

    return;
    // 0x8023DCE4: nop

;}
RECOMP_FUNC void func_8023EE84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023EE84: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8023EE88: lbu         $t7, 0x5EB1($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X5EB1);
    // 0x8023EE8C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8023EE90: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8023EE94: addiu       $t6, $t6, 0x5E70
    ctx->r14 = ADD32(ctx->r14, 0X5E70);
    // 0x8023EE98: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x8023EE9C: blez        $t7, L_8023EF24
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8023EEA0: sw          $zero, 0x0($sp)
        MEM_W(0X0, ctx->r29) = 0;
            goto L_8023EF24;
    }
    // 0x8023EEA0: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_8023EEA4:
    // 0x8023EEA4: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x8023EEA8: addiu       $t8, $sp, 0x4
    ctx->r24 = ADD32(ctx->r29, 0X4);
    // 0x8023EEAC: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x8023EEB0: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x8023EEB4: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x8023EEB8: lwl         $t1, 0x4($t9)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r25, 0X4);
    // 0x8023EEBC: lwr         $t1, 0x7($t9)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r25, 0X7);
    // 0x8023EEC0: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x8023EEC4: lbu         $t2, 0x6($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X6);
    // 0x8023EEC8: andi        $t3, $t2, 0xC0
    ctx->r11 = ctx->r10 & 0XC0;
    // 0x8023EECC: sra         $t4, $t3, 4
    ctx->r12 = S32(SIGNED(ctx->r11) >> 4);
    // 0x8023EED0: sb          $t4, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r12;
    // 0x8023EED4: lbu         $t5, 0x4($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X4);
    // 0x8023EED8: bne         $t5, $zero, L_8023EEF8
    if (ctx->r13 != 0) {
        // 0x8023EEDC: nop
    
            goto L_8023EEF8;
    }
    // 0x8023EEDC: nop

    // 0x8023EEE0: lhu         $t6, 0x8($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X8);
    // 0x8023EEE4: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x8023EEE8: lb          $t7, 0xA($sp)
    ctx->r15 = MEM_B(ctx->r29, 0XA);
    // 0x8023EEEC: sb          $t7, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r15;
    // 0x8023EEF0: lb          $t0, 0xB($sp)
    ctx->r8 = MEM_B(ctx->r29, 0XB);
    // 0x8023EEF4: sb          $t0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r8;
L_8023EEF8:
    // 0x8023EEF8: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x8023EEFC: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x8023EF00: lbu         $t3, 0x5EB1($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X5EB1);
    // 0x8023EF04: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x8023EF08: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8023EF0C: slt         $at, $t9, $t3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8023EF10: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8023EF14: sw          $t2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r10;
    // 0x8023EF18: sw          $t9, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r25;
    // 0x8023EF1C: bne         $at, $zero, L_8023EEA4
    if (ctx->r1 != 0) {
        // 0x8023EF20: addiu       $a0, $a0, 0x6
        ctx->r4 = ADD32(ctx->r4, 0X6);
            goto L_8023EEA4;
    }
    // 0x8023EF20: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
L_8023EF24:
    // 0x8023EF24: jr          $ra
    // 0x8023EF28: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8023EF28: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80222E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222E50: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80222E54: lwc1        $f2, -0x1778($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X1778);
    // 0x80222E58: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80222E5C: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80222E60: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x80222E64: nop

    // 0x80222E68: bc1f        L_80222E78
    if (!c1cs) {
        // 0x80222E6C: nop
    
            goto L_80222E78;
    }
    // 0x80222E6C: nop

    // 0x80222E70: jr          $ra
    // 0x80222E74: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x80222E74: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80222E78:
    // 0x80222E78: lhu         $t6, -0x178C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X178C);
    // 0x80222E7C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80222E80: xori        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 ^ 0X1;
    // 0x80222E84: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80222E88: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80222E8C: lwc1        $f0, -0x17C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X17C0);
    // 0x80222E90: jr          $ra
    // 0x80222E94: nop

    return;
    // 0x80222E94: nop

;}
RECOMP_FUNC void func_8022FF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022FF40: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8022FF44: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022FF48: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8022FF4C: beq         $v0, $zero, L_8022FF74
    if (ctx->r2 == 0) {
        // 0x8022FF50: nop
    
            goto L_8022FF74;
    }
    // 0x8022FF50: nop

    // 0x8022FF54: beq         $t6, $v0, L_8022FF74
    if (ctx->r14 == ctx->r2) {
        // 0x8022FF58: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_8022FF74;
    }
    // 0x8022FF58: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x8022FF5C: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
L_8022FF60:
    // 0x8022FF60: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022FF64: beq         $v0, $zero, L_8022FF74
    if (ctx->r2 == 0) {
        // 0x8022FF68: nop
    
            goto L_8022FF74;
    }
    // 0x8022FF68: nop

    // 0x8022FF6C: bnel        $v1, $v0, L_8022FF60
    if (ctx->r3 != ctx->r2) {
        // 0x8022FF70: lbu         $v0, 0x1($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X1);
            goto L_8022FF60;
    }
    goto skip_0;
    // 0x8022FF70: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    skip_0:
L_8022FF74:
    // 0x8022FF74: beql        $v0, $zero, L_8022FF88
    if (ctx->r2 == 0) {
        // 0x8022FF78: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8022FF88;
    }
    goto skip_1;
    // 0x8022FF78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x8022FF7C: jr          $ra
    // 0x8022FF80: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8022FF80: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8022FF84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022FF88:
    // 0x8022FF88: jr          $ra
    // 0x8022FF8C: nop

    return;
    // 0x8022FF8C: nop

;}
RECOMP_FUNC void func_80204530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80204530: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80204534: addiu       $v1, $v1, 0xBC0
    ctx->r3 = ADD32(ctx->r3, 0XBC0);
    // 0x80204538: lhu         $t7, 0x38($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X38);
    // 0x8020453C: lhu         $t9, 0x3C($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X3C);
    // 0x80204540: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80204544: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80204548: sll         $t0, $t9, 11
    ctx->r8 = S32(ctx->r25 << 11);
    // 0x8020454C: addu        $v0, $t8, $t0
    ctx->r2 = ADD32(ctx->r24, ctx->r8);
    // 0x80204550: ori         $at, $at, 0xFDDC
    ctx->r1 = ctx->r1 | 0XFDDC;
    // 0x80204554: jr          $ra
    // 0x80204558: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    return;
    // 0x80204558: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
;}
RECOMP_FUNC void func_802011EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802011EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802011F0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802011F4: lui         $s2, 0x8025
    ctx->r18 = S32(0X8025 << 16);
    // 0x802011F8: addiu       $s2, $s2, 0x6DE4
    ctx->r18 = ADD32(ctx->r18, 0X6DE4);
    // 0x802011FC: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x80201200: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80201204: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80201208: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8020120C: bne         $t6, $zero, L_80201254
    if (ctx->r14 != 0) {
        // 0x80201210: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_80201254;
    }
    // 0x80201210: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80201214: lui         $s3, 0x8028
    ctx->r19 = S32(0X8028 << 16);
    // 0x80201218: addiu       $s3, $s3, 0xBC0
    ctx->r19 = ADD32(ctx->r19, 0XBC0);
    // 0x8020121C: lhu         $t7, 0x3A($s3)
    ctx->r15 = MEM_HU(ctx->r19, 0X3A);
    // 0x80201220: addiu       $s0, $zero, 0xB4
    ctx->r16 = ADD32(0, 0XB4);
    // 0x80201224: multu       $t7, $s0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80201228: mflo        $a0
    ctx->r4 = lo;
    // 0x8020122C: jal         0x8022BA58
    // 0x80201230: nop

    func_8022BA58(rdram, ctx);
        goto after_0;
    // 0x80201230: nop

    after_0:
    // 0x80201234: lhu         $t8, 0x3A($s3)
    ctx->r24 = MEM_HU(ctx->r19, 0X3A);
    // 0x80201238: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x8020123C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80201240: multu       $t8, $s0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80201244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80201248: mflo        $a2
    ctx->r6 = lo;
    // 0x8020124C: jal         0x8022B780
    // 0x80201250: nop

    func_8022B780(rdram, ctx);
        goto after_1;
    // 0x80201250: nop

    after_1:
L_80201254:
    // 0x80201254: lui         $s3, 0x8028
    ctx->r19 = S32(0X8028 << 16);
    // 0x80201258: addiu       $s3, $s3, 0xBC0
    ctx->r19 = ADD32(ctx->r19, 0XBC0);
    // 0x8020125C: lhu         $t9, 0x3A($s3)
    ctx->r25 = MEM_HU(ctx->r19, 0X3A);
    // 0x80201260: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80201264: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80201268: blez        $t9, L_80201294
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8020126C: nop
    
            goto L_80201294;
    }
    // 0x8020126C: nop

    // 0x80201270: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
L_80201274:
    // 0x80201274: jal         0x802012BC
    // 0x80201278: addu        $a0, $s1, $t0
    ctx->r4 = ADD32(ctx->r17, ctx->r8);
    func_802012BC(rdram, ctx);
        goto after_2;
    // 0x80201278: addu        $a0, $s1, $t0
    ctx->r4 = ADD32(ctx->r17, ctx->r8);
    after_2:
    // 0x8020127C: lhu         $t1, 0x3A($s3)
    ctx->r9 = MEM_HU(ctx->r19, 0X3A);
    // 0x80201280: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80201284: addiu       $s1, $s1, 0xB4
    ctx->r17 = ADD32(ctx->r17, 0XB4);
    // 0x80201288: slt         $at, $s0, $t1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8020128C: bnel        $at, $zero, L_80201274
    if (ctx->r1 != 0) {
        // 0x80201290: lw          $t0, 0x0($s2)
        ctx->r8 = MEM_W(ctx->r18, 0X0);
            goto L_80201274;
    }
    goto skip_0;
    // 0x80201290: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    skip_0:
L_80201294:
    // 0x80201294: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80201298: jal         0x802012BC
    // 0x8020129C: addiu       $a0, $a0, 0x6DE8
    ctx->r4 = ADD32(ctx->r4, 0X6DE8);
    func_802012BC(rdram, ctx);
        goto after_3;
    // 0x8020129C: addiu       $a0, $a0, 0x6DE8
    ctx->r4 = ADD32(ctx->r4, 0X6DE8);
    after_3:
    // 0x802012A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802012A4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802012A8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802012AC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802012B0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802012B4: jr          $ra
    // 0x802012B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802012B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80238754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238754: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80238758: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8023875C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80238760: lw          $t7, 0x40($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X40);
    // 0x80238764: ldc1        $f6, 0x5650($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X5650);
    // 0x80238768: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x8023876C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80238770: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80238774: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80238778: bgez        $t7, L_80238790
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8023877C: cvt.d.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
            goto L_80238790;
    }
    // 0x8023877C: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x80238780: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80238784: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80238788: nop

    // 0x8023878C: add.d       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f16.d + ctx->f18.d;
L_80238790:
    // 0x80238790: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x80238794: mul.d       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x80238798: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8023879C: bgez        $a2, L_802387B4
    if (SIGNED(ctx->r6) >= 0) {
        // 0x802387A0: cvt.d.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
            goto L_802387B4;
    }
    // 0x802387A0: cvt.d.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
    // 0x802387A4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802387A8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802387AC: nop

    // 0x802387B0: add.d       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f10.d + ctx->f18.d;
L_802387B4:
    // 0x802387B4: div.d       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f10.d);
    // 0x802387B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802387BC: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x802387C0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802387C4: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x802387C8: nop

    // 0x802387CC: cvt.w.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_D(ctx->f8.d);
    // 0x802387D0: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x802387D4: nop

    // 0x802387D8: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x802387DC: beql        $v0, $zero, L_80238838
    if (ctx->r2 == 0) {
        // 0x802387E0: mfc1        $v0, $f16
        ctx->r2 = (int32_t)ctx->f16.u32l;
            goto L_80238838;
    }
    goto skip_0;
    // 0x802387E0: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x802387E4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802387E8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802387EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802387F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802387F4: sub.d       $f16, $f8, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f16.d = ctx->f8.d - ctx->f16.d;
    // 0x802387F8: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x802387FC: nop

    // 0x80238800: cvt.w.d     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_D(ctx->f16.d);
    // 0x80238804: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80238808: nop

    // 0x8023880C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80238810: bnel        $v0, $zero, L_8023882C
    if (ctx->r2 != 0) {
        // 0x80238814: ctc1        $t8, $FpcCsr
        set_cop1_cs(ctx->r24);
            goto L_8023882C;
    }
    goto skip_1;
    // 0x80238814: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    skip_1:
    // 0x80238818: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x8023881C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80238820: jr          $ra
    // 0x80238824: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    return;
    // 0x80238824: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    // 0x80238828: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
L_8023882C:
    // 0x8023882C: jr          $ra
    // 0x80238830: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x80238830: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80238834: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
L_80238838:
    // 0x80238838: nop

    // 0x8023883C: bltzl       $v0, L_8023882C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80238840: ctc1        $t8, $FpcCsr
        set_cop1_cs(ctx->r24);
            goto L_8023882C;
    }
    goto skip_2;
    // 0x80238840: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    skip_2:
    // 0x80238844: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80238848: jr          $ra
    // 0x8023884C: nop

    return;
    // 0x8023884C: nop

;}
RECOMP_FUNC void func_80224CA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80224CA8: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x80224CAC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80224CB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80224CB4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80224CB8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80224CBC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80224CC0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80224CC4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80224CC8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80224CCC: jal         0x802235C8
    // 0x80224CD0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_802235C8(rdram, ctx);
        goto after_0;
    // 0x80224CD0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80224CD4: jal         0x80207210
    // 0x80224CD8: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    func_80207210(rdram, ctx);
        goto after_1;
    // 0x80224CD8: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    after_1:
    // 0x80224CDC: jal         0x8022D040
    // 0x80224CE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8022D040(rdram, ctx);
        goto after_2;
    // 0x80224CE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80224CE4: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80224CE8: addiu       $t6, $t6, 0x5250
    ctx->r14 = ADD32(ctx->r14, 0X5250);
    // 0x80224CEC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80224CF0: sw          $t6, 0x5A20($at)
    MEM_W(0X5A20, ctx->r1) = ctx->r14;
    // 0x80224CF4: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80224CF8: addiu       $t7, $sp, 0x58
    ctx->r15 = ADD32(ctx->r29, 0X58);
    // 0x80224CFC: lui         $a0, 0x5556
    ctx->r4 = S32(0X5556 << 16);
    // 0x80224D00: sw          $t7, 0x5A24($at)
    MEM_W(0X5A24, ctx->r1) = ctx->r15;
    // 0x80224D04: ori         $a0, $a0, 0x4C56
    ctx->r4 = ctx->r4 | 0X4C56;
    // 0x80224D08: jal         0x80224ABC
    // 0x80224D0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80224ABC(rdram, ctx);
        goto after_3;
    // 0x80224D0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x80224D10: lui         $s6, 0x8028
    ctx->r22 = S32(0X8028 << 16);
    // 0x80224D14: addiu       $s6, $s6, 0xB68
    ctx->r22 = ADD32(ctx->r22, 0XB68);
    // 0x80224D18: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    // 0x80224D1C: bne         $v0, $zero, L_80224D3C
    if (ctx->r2 != 0) {
        // 0x80224D20: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_80224D3C;
    }
    // 0x80224D20: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80224D24: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80224D28: addiu       $a0, $a0, 0x3A20
    ctx->r4 = ADD32(ctx->r4, 0X3A20);
    // 0x80224D2C: jal         0x80231A24
    // 0x80224D30: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80231A24(rdram, ctx);
        goto after_4;
    // 0x80224D30: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x80224D34: b           L_80225400
    // 0x80224D38: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80225400;
    // 0x80224D38: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80224D3C:
    // 0x80224D3C: lui         $s0, 0x8028
    ctx->r16 = S32(0X8028 << 16);
    // 0x80224D40: addiu       $s0, $s0, 0xBC0
    ctx->r16 = ADD32(ctx->r16, 0XBC0);
    // 0x80224D44: lhu         $t8, 0xC($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XC);
    // 0x80224D48: lhu         $a1, 0xC($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0XC);
    // 0x80224D4C: slt         $at, $t8, $a1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80224D50: beq         $at, $zero, L_80224D60
    if (ctx->r1 == 0) {
        // 0x80224D54: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80224D60;
    }
    // 0x80224D54: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80224D58: jal         0x80231A24
    // 0x80224D5C: addiu       $a0, $a0, 0x3A48
    ctx->r4 = ADD32(ctx->r4, 0X3A48);
    func_80231A24(rdram, ctx);
        goto after_5;
    // 0x80224D5C: addiu       $a0, $a0, 0x3A48
    ctx->r4 = ADD32(ctx->r4, 0X3A48);
    after_5:
L_80224D60:
    // 0x80224D60: lhu         $a2, 0x14($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X14);
    // 0x80224D64: lhu         $t9, 0xE($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XE);
    // 0x80224D68: slt         $at, $t9, $a2
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80224D6C: beq         $at, $zero, L_80224D80
    if (ctx->r1 == 0) {
        // 0x80224D70: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80224D80;
    }
    // 0x80224D70: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80224D74: addiu       $a0, $a0, 0x3A6C
    ctx->r4 = ADD32(ctx->r4, 0X3A6C);
    // 0x80224D78: jal         0x80231A24
    // 0x80224D7C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80231A24(rdram, ctx);
        goto after_6;
    // 0x80224D7C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_6:
L_80224D80:
    // 0x80224D80: lhu         $a1, 0x1C($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X1C);
    // 0x80224D84: lhu         $t1, 0x10($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X10);
    // 0x80224D88: slt         $at, $t1, $a1
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80224D8C: beq         $at, $zero, L_80224D9C
    if (ctx->r1 == 0) {
        // 0x80224D90: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80224D9C;
    }
    // 0x80224D90: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80224D94: jal         0x80231A24
    // 0x80224D98: addiu       $a0, $a0, 0x3A94
    ctx->r4 = ADD32(ctx->r4, 0X3A94);
    func_80231A24(rdram, ctx);
        goto after_7;
    // 0x80224D98: addiu       $a0, $a0, 0x3A94
    ctx->r4 = ADD32(ctx->r4, 0X3A94);
    after_7:
L_80224D9C:
    // 0x80224D9C: lhu         $a2, 0x24($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X24);
    // 0x80224DA0: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x80224DA4: slt         $at, $t2, $a2
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80224DA8: beq         $at, $zero, L_80224DBC
    if (ctx->r1 == 0) {
        // 0x80224DAC: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80224DBC;
    }
    // 0x80224DAC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80224DB0: addiu       $a0, $a0, 0x3AB8
    ctx->r4 = ADD32(ctx->r4, 0X3AB8);
    // 0x80224DB4: jal         0x80231A24
    // 0x80224DB8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80231A24(rdram, ctx);
        goto after_8;
    // 0x80224DB8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_8:
L_80224DBC:
    // 0x80224DBC: lhu         $s5, 0x2C($s4)
    ctx->r21 = MEM_HU(ctx->r20, 0X2C);
    // 0x80224DC0: lhu         $t3, 0x16($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X16);
    // 0x80224DC4: slt         $at, $t3, $s5
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x80224DC8: beq         $at, $zero, L_80224DDC
    if (ctx->r1 == 0) {
        // 0x80224DCC: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80224DDC;
    }
    // 0x80224DCC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80224DD0: addiu       $a0, $a0, 0x3ADC
    ctx->r4 = ADD32(ctx->r4, 0X3ADC);
    // 0x80224DD4: jal         0x80231A24
    // 0x80224DD8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80231A24(rdram, ctx);
        goto after_9;
    // 0x80224DD8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_9:
L_80224DDC:
    // 0x80224DDC: lhu         $a1, 0x4($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X4);
    // 0x80224DE0: lhu         $t4, 0xA($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XA);
    // 0x80224DE4: slt         $at, $t4, $a1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80224DE8: beq         $at, $zero, L_80224DF8
    if (ctx->r1 == 0) {
        // 0x80224DEC: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80224DF8;
    }
    // 0x80224DEC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80224DF0: jal         0x80231A24
    // 0x80224DF4: addiu       $a0, $a0, 0x3B00
    ctx->r4 = ADD32(ctx->r4, 0X3B00);
    func_80231A24(rdram, ctx);
        goto after_10;
    // 0x80224DF4: addiu       $a0, $a0, 0x3B00
    ctx->r4 = ADD32(ctx->r4, 0X3B00);
    after_10:
L_80224DF8:
    // 0x80224DF8: lhu         $a1, 0x3C($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X3C);
    // 0x80224DFC: lhu         $t5, 0x1C($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X1C);
    // 0x80224E00: slt         $at, $t5, $a1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80224E04: beq         $at, $zero, L_80224E14
    if (ctx->r1 == 0) {
        // 0x80224E08: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80224E14;
    }
    // 0x80224E08: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80224E0C: jal         0x80231A24
    // 0x80224E10: addiu       $a0, $a0, 0x3B24
    ctx->r4 = ADD32(ctx->r4, 0X3B24);
    func_80231A24(rdram, ctx);
        goto after_11;
    // 0x80224E10: addiu       $a0, $a0, 0x3B24
    ctx->r4 = ADD32(ctx->r4, 0X3B24);
    after_11:
L_80224E14:
    // 0x80224E14: lhu         $a1, 0x4C($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X4C);
    // 0x80224E18: lhu         $t6, 0x2($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X2);
    // 0x80224E1C: slt         $at, $t6, $a1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80224E20: beq         $at, $zero, L_80224E30
    if (ctx->r1 == 0) {
        // 0x80224E24: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80224E30;
    }
    // 0x80224E24: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80224E28: jal         0x80231A24
    // 0x80224E2C: addiu       $a0, $a0, 0x3B48
    ctx->r4 = ADD32(ctx->r4, 0X3B48);
    func_80231A24(rdram, ctx);
        goto after_12;
    // 0x80224E2C: addiu       $a0, $a0, 0x3B48
    ctx->r4 = ADD32(ctx->r4, 0X3B48);
    after_12:
L_80224E30:
    // 0x80224E30: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80224E34: lw          $a1, 0x5F7C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5F7C);
    // 0x80224E38: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80224E3C: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x80224E40: lhu         $s5, 0x2C($s4)
    ctx->r21 = MEM_HU(ctx->r20, 0X2C);
    // 0x80224E44: blez        $s5, L_80224F28
    if (SIGNED(ctx->r21) <= 0) {
        // 0x80224E48: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80224F28;
    }
    // 0x80224E48: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80224E4C:
    // 0x80224E4C: lw          $t7, 0x28($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X28);
    // 0x80224E50: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80224E54: lw          $a2, 0x51E0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X51E0);
    // 0x80224E58: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x80224E5C: lhu         $a3, 0x0($t8)
    ctx->r7 = MEM_HU(ctx->r24, 0X0);
    // 0x80224E60: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80224E64: lw          $t0, 0x524C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X524C);
    // 0x80224E68: beq         $a2, $zero, L_80224EB4
    if (ctx->r6 == 0) {
        // 0x80224E6C: or          $s3, $a3, $zero
        ctx->r19 = ctx->r7 | 0;
            goto L_80224EB4;
    }
    // 0x80224E6C: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x80224E70: lhu         $a1, 0x0($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X0);
    // 0x80224E74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80224E78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80224E7C: blezl       $a1, L_80224EB8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80224E80: sll         $s0, $a3, 2
        ctx->r16 = S32(ctx->r7 << 2);
            goto L_80224EB8;
    }
    goto skip_0;
    // 0x80224E80: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    skip_0:
    // 0x80224E84: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
L_80224E88:
    // 0x80224E88: lhu         $t9, 0x0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X0);
    // 0x80224E8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80224E90: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80224E94: bne         $a3, $t9, L_80224EAC
    if (ctx->r7 != ctx->r25) {
        // 0x80224E98: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_80224EAC;
    }
    // 0x80224E98: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80224E9C: lw          $t1, 0x8($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X8);
    // 0x80224EA0: addu        $t2, $t1, $a0
    ctx->r10 = ADD32(ctx->r9, ctx->r4);
    // 0x80224EA4: b           L_80224EB4
    // 0x80224EA8: lhu         $s3, 0x0($t2)
    ctx->r19 = MEM_HU(ctx->r10, 0X0);
        goto L_80224EB4;
    // 0x80224EA8: lhu         $s3, 0x0($t2)
    ctx->r19 = MEM_HU(ctx->r10, 0X0);
L_80224EAC:
    // 0x80224EAC: bne         $at, $zero, L_80224E88
    if (ctx->r1 != 0) {
        // 0x80224EB0: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_80224E88;
    }
    // 0x80224EB0: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_80224EB4:
    // 0x80224EB4: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
L_80224EB8:
    // 0x80224EB8: addu        $v0, $t0, $s0
    ctx->r2 = ADD32(ctx->r8, ctx->r16);
    // 0x80224EBC: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80224EC0: sll         $t4, $s3, 2
    ctx->r12 = S32(ctx->r19 << 2);
    // 0x80224EC4: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x80224EC8: bnel        $t3, $zero, L_80224F10
    if (ctx->r11 != 0) {
        // 0x80224ECC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80224F10;
    }
    goto skip_1;
    // 0x80224ECC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x80224ED0: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x80224ED4: lui         $a0, 0x5556
    ctx->r4 = S32(0X5556 << 16);
    // 0x80224ED8: ori         $a0, $a0, 0x5449
    ctx->r4 = ctx->r4 | 0X5449;
    // 0x80224EDC: beq         $v1, $zero, L_80224EF0
    if (ctx->r3 == 0) {
        // 0x80224EE0: nop
    
            goto L_80224EF0;
    }
    // 0x80224EE0: nop

    // 0x80224EE4: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80224EE8: b           L_80224F0C
    // 0x80224EEC: lhu         $s5, 0x2C($s4)
    ctx->r21 = MEM_HU(ctx->r20, 0X2C);
        goto L_80224F0C;
    // 0x80224EEC: lhu         $s5, 0x2C($s4)
    ctx->r21 = MEM_HU(ctx->r20, 0X2C);
L_80224EF0:
    // 0x80224EF0: jal         0x80224ABC
    // 0x80224EF4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80224ABC(rdram, ctx);
        goto after_13;
    // 0x80224EF4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_13:
    // 0x80224EF8: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80224EFC: lw          $t6, 0x524C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X524C);
    // 0x80224F00: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x80224F04: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x80224F08: lhu         $s5, 0x2C($s4)
    ctx->r21 = MEM_HU(ctx->r20, 0X2C);
L_80224F0C:
    // 0x80224F0C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80224F10:
    // 0x80224F10: slt         $at, $s2, $s5
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x80224F14: bne         $at, $zero, L_80224E4C
    if (ctx->r1 != 0) {
        // 0x80224F18: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80224E4C;
    }
    // 0x80224F18: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80224F1C: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80224F20: lw          $a1, 0x5F7C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5F7C);
    // 0x80224F24: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80224F28:
    // 0x80224F28: jal         0x8022BBAC
    // 0x80224F2C: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    func_8022BBAC(rdram, ctx);
        goto after_14;
    // 0x80224F2C: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    after_14:
    // 0x80224F30: lhu         $a1, 0xC($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0XC);
    // 0x80224F34: blez        $a1, L_80224F98
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80224F38: lui         $s3, 0x5556
        ctx->r19 = S32(0X5556 << 16);
            goto L_80224F98;
    }
    // 0x80224F38: lui         $s3, 0x5556
    ctx->r19 = S32(0X5556 << 16);
    // 0x80224F3C: ori         $s3, $s3, 0x4C54
    ctx->r19 = ctx->r19 | 0X4C54;
    // 0x80224F40: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80224F44:
    // 0x80224F44: lw          $t8, 0x8($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X8);
    // 0x80224F48: lw          $t1, 0xC($s6)
    ctx->r9 = MEM_W(ctx->r22, 0XC);
    // 0x80224F4C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80224F50: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x80224F54: lhu         $a3, 0x0($t9)
    ctx->r7 = MEM_HU(ctx->r25, 0X0);
    // 0x80224F58: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    // 0x80224F5C: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x80224F60: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80224F64: bnel        $t3, $zero, L_80224F88
    if (ctx->r11 != 0) {
        // 0x80224F68: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80224F88;
    }
    goto skip_2;
    // 0x80224F68: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x80224F6C: jal         0x80224ABC
    // 0x80224F70: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80224ABC(rdram, ctx);
        goto after_15;
    // 0x80224F70: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_15:
    // 0x80224F74: lw          $t4, 0xC($s6)
    ctx->r12 = MEM_W(ctx->r22, 0XC);
    // 0x80224F78: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x80224F7C: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
    // 0x80224F80: lhu         $a1, 0xC($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0XC);
    // 0x80224F84: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80224F88:
    // 0x80224F88: slt         $at, $s2, $a1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80224F8C: bne         $at, $zero, L_80224F44
    if (ctx->r1 != 0) {
        // 0x80224F90: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80224F44;
    }
    // 0x80224F90: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80224F94: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80224F98:
    // 0x80224F98: sw          $a1, 0x10($s6)
    MEM_W(0X10, ctx->r22) = ctx->r5;
    // 0x80224F9C: lhu         $a2, 0x14($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X14);
    // 0x80224FA0: lui         $s5, 0x8025
    ctx->r21 = S32(0X8025 << 16);
    // 0x80224FA4: addiu       $s5, $s5, 0x3B68
    ctx->r21 = ADD32(ctx->r21, 0X3B68);
    // 0x80224FA8: blez        $a2, L_80225020
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80224FAC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80225020;
    }
    // 0x80224FAC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80224FB0: lui         $s3, 0x5556
    ctx->r19 = S32(0X5556 << 16);
    // 0x80224FB4: ori         $s3, $s3, 0x454E
    ctx->r19 = ctx->r19 | 0X454E;
    // 0x80224FB8: lw          $t6, 0x10($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X10);
L_80224FBC:
    // 0x80224FBC: lw          $t8, 0x14($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X14);
    // 0x80224FC0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80224FC4: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x80224FC8: lhu         $a3, 0x0($t7)
    ctx->r7 = MEM_HU(ctx->r15, 0X0);
    // 0x80224FCC: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    // 0x80224FD0: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x80224FD4: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x80224FD8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80224FDC: bne         $a2, $zero, L_80224FFC
    if (ctx->r6 != 0) {
        // 0x80224FE0: nop
    
            goto L_80224FFC;
    }
    // 0x80224FE0: nop

    // 0x80224FE4: jal         0x80224ABC
    // 0x80224FE8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80224ABC(rdram, ctx);
        goto after_16;
    // 0x80224FE8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_16:
    // 0x80224FEC: lw          $t1, 0x14($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X14);
    // 0x80224FF0: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x80224FF4: b           L_80225004
    // 0x80224FF8: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
        goto L_80225004;
    // 0x80224FF8: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
L_80224FFC:
    // 0x80224FFC: jal         0x80231A24
    // 0x80225000: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80231A24(rdram, ctx);
        goto after_17;
    // 0x80225000: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_17:
L_80225004:
    // 0x80225004: lhu         $a2, 0x14($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X14);
    // 0x80225008: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8022500C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80225010: slt         $at, $s2, $a2
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80225014: bnel        $at, $zero, L_80224FBC
    if (ctx->r1 != 0) {
        // 0x80225018: lw          $t6, 0x10($s4)
        ctx->r14 = MEM_W(ctx->r20, 0X10);
            goto L_80224FBC;
    }
    goto skip_3;
    // 0x80225018: lw          $t6, 0x10($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X10);
    skip_3:
    // 0x8022501C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80225020:
    // 0x80225020: sw          $a2, 0x18($s6)
    MEM_W(0X18, ctx->r22) = ctx->r6;
    // 0x80225024: lhu         $a1, 0x1C($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X1C);
    // 0x80225028: lui         $s3, 0x5556
    ctx->r19 = S32(0X5556 << 16);
    // 0x8022502C: ori         $s3, $s3, 0x4D44
    ctx->r19 = ctx->r19 | 0X4D44;
    // 0x80225030: blez        $a1, L_8022508C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80225034: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8022508C;
    }
    // 0x80225034: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80225038:
    // 0x80225038: lw          $t3, 0x18($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X18);
    // 0x8022503C: lw          $t5, 0x1C($s6)
    ctx->r13 = MEM_W(ctx->r22, 0X1C);
    // 0x80225040: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80225044: addu        $t4, $t3, $s1
    ctx->r12 = ADD32(ctx->r11, ctx->r17);
    // 0x80225048: lhu         $a3, 0x0($t4)
    ctx->r7 = MEM_HU(ctx->r12, 0X0);
    // 0x8022504C: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    // 0x80225050: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x80225054: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80225058: bnel        $t7, $zero, L_8022507C
    if (ctx->r15 != 0) {
        // 0x8022505C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8022507C;
    }
    goto skip_4;
    // 0x8022505C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_4:
    // 0x80225060: jal         0x80224ABC
    // 0x80225064: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80224ABC(rdram, ctx);
        goto after_18;
    // 0x80225064: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_18:
    // 0x80225068: lw          $t8, 0x1C($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X1C);
    // 0x8022506C: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x80225070: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
    // 0x80225074: lhu         $a1, 0x1C($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X1C);
    // 0x80225078: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8022507C:
    // 0x8022507C: slt         $at, $s2, $a1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80225080: bne         $at, $zero, L_80225038
    if (ctx->r1 != 0) {
        // 0x80225084: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80225038;
    }
    // 0x80225084: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80225088: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8022508C:
    // 0x8022508C: sw          $a1, 0x20($s6)
    MEM_W(0X20, ctx->r22) = ctx->r5;
    // 0x80225090: lhu         $a2, 0x24($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X24);
    // 0x80225094: lui         $s3, 0x5556
    ctx->r19 = S32(0X5556 << 16);
    // 0x80225098: ori         $s3, $s3, 0x4354
    ctx->r19 = ctx->r19 | 0X4354;
    // 0x8022509C: blez        $a2, L_802250F8
    if (SIGNED(ctx->r6) <= 0) {
        // 0x802250A0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_802250F8;
    }
    // 0x802250A0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802250A4:
    // 0x802250A4: lw          $t1, 0x20($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X20);
    // 0x802250A8: lw          $t3, 0x24($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X24);
    // 0x802250AC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802250B0: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x802250B4: lhu         $a3, 0x0($t2)
    ctx->r7 = MEM_HU(ctx->r10, 0X0);
    // 0x802250B8: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    // 0x802250BC: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x802250C0: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x802250C4: bnel        $t5, $zero, L_802250E8
    if (ctx->r13 != 0) {
        // 0x802250C8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802250E8;
    }
    goto skip_5;
    // 0x802250C8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_5:
    // 0x802250CC: jal         0x80224ABC
    // 0x802250D0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80224ABC(rdram, ctx);
        goto after_19;
    // 0x802250D0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_19:
    // 0x802250D4: lw          $t6, 0x24($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X24);
    // 0x802250D8: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x802250DC: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x802250E0: lhu         $a2, 0x24($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X24);
    // 0x802250E4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_802250E8:
    // 0x802250E8: slt         $at, $s2, $a2
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x802250EC: bne         $at, $zero, L_802250A4
    if (ctx->r1 != 0) {
        // 0x802250F0: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_802250A4;
    }
    // 0x802250F0: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x802250F4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802250F8:
    // 0x802250F8: sw          $a2, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r6;
    // 0x802250FC: lhu         $s5, 0x2C($s4)
    ctx->r21 = MEM_HU(ctx->r20, 0X2C);
    // 0x80225100: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80225104: blezl       $s5, L_802251CC
    if (SIGNED(ctx->r21) <= 0) {
        // 0x80225108: sw          $s5, 0x30($s6)
        MEM_W(0X30, ctx->r22) = ctx->r21;
            goto L_802251CC;
    }
    goto skip_6;
    // 0x80225108: sw          $s5, 0x30($s6)
    MEM_W(0X30, ctx->r22) = ctx->r21;
    skip_6:
L_8022510C:
    // 0x8022510C: lw          $t8, 0x28($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X28);
    // 0x80225110: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80225114: lw          $a2, 0x51E0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X51E0);
    // 0x80225118: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x8022511C: lhu         $a3, 0x0($t9)
    ctx->r7 = MEM_HU(ctx->r25, 0X0);
    // 0x80225120: lw          $t0, 0x2C($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X2C);
    // 0x80225124: beq         $a2, $zero, L_80225170
    if (ctx->r6 == 0) {
        // 0x80225128: or          $s3, $a3, $zero
        ctx->r19 = ctx->r7 | 0;
            goto L_80225170;
    }
    // 0x80225128: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x8022512C: lhu         $a1, 0x0($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X0);
    // 0x80225130: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80225134: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80225138: blezl       $a1, L_80225174
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8022513C: sll         $s0, $a3, 2
        ctx->r16 = S32(ctx->r7 << 2);
            goto L_80225174;
    }
    goto skip_7;
    // 0x8022513C: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    skip_7:
    // 0x80225140: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
L_80225144:
    // 0x80225144: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x80225148: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022514C: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80225150: bne         $a3, $t1, L_80225168
    if (ctx->r7 != ctx->r9) {
        // 0x80225154: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_80225168;
    }
    // 0x80225154: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80225158: lw          $t2, 0x8($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X8);
    // 0x8022515C: addu        $t3, $t2, $a0
    ctx->r11 = ADD32(ctx->r10, ctx->r4);
    // 0x80225160: b           L_80225170
    // 0x80225164: lhu         $s3, 0x0($t3)
    ctx->r19 = MEM_HU(ctx->r11, 0X0);
        goto L_80225170;
    // 0x80225164: lhu         $s3, 0x0($t3)
    ctx->r19 = MEM_HU(ctx->r11, 0X0);
L_80225168:
    // 0x80225168: bne         $at, $zero, L_80225144
    if (ctx->r1 != 0) {
        // 0x8022516C: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_80225144;
    }
    // 0x8022516C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_80225170:
    // 0x80225170: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
L_80225174:
    // 0x80225174: addu        $t4, $t0, $s0
    ctx->r12 = ADD32(ctx->r8, ctx->r16);
    // 0x80225178: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8022517C: lui         $a0, 0x5556
    ctx->r4 = S32(0X5556 << 16);
    // 0x80225180: ori         $a0, $a0, 0x5458
    ctx->r4 = ctx->r4 | 0X5458;
    // 0x80225184: bnel        $t5, $zero, L_802251B8
    if (ctx->r13 != 0) {
        // 0x80225188: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802251B8;
    }
    goto skip_8;
    // 0x80225188: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_8:
    // 0x8022518C: jal         0x80224ABC
    // 0x80225190: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80224ABC(rdram, ctx);
        goto after_20;
    // 0x80225190: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_20:
    // 0x80225194: lw          $t6, 0x2C($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X2C);
    // 0x80225198: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8022519C: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x802251A0: lw          $t8, 0x2C($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X2C);
    // 0x802251A4: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x802251A8: jal         0x80234800
    // 0x802251AC: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    func_80234800(rdram, ctx);
        goto after_21;
    // 0x802251AC: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_21:
    // 0x802251B0: lhu         $s5, 0x2C($s4)
    ctx->r21 = MEM_HU(ctx->r20, 0X2C);
    // 0x802251B4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_802251B8:
    // 0x802251B8: slt         $at, $s2, $s5
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x802251BC: bne         $at, $zero, L_8022510C
    if (ctx->r1 != 0) {
        // 0x802251C0: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_8022510C;
    }
    // 0x802251C0: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x802251C4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802251C8: sw          $s5, 0x30($s6)
    MEM_W(0X30, ctx->r22) = ctx->r21;
L_802251CC:
    // 0x802251CC: lhu         $a1, 0x4($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X4);
    // 0x802251D0: lui         $s3, 0x5556
    ctx->r19 = S32(0X5556 << 16);
    // 0x802251D4: ori         $s3, $s3, 0x5452
    ctx->r19 = ctx->r19 | 0X5452;
    // 0x802251D8: blez        $a1, L_80225234
    if (SIGNED(ctx->r5) <= 0) {
        // 0x802251DC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80225234;
    }
    // 0x802251DC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802251E0:
    // 0x802251E0: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x802251E4: lw          $t3, 0x4($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X4);
    // 0x802251E8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802251EC: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x802251F0: lhu         $a3, 0x0($t2)
    ctx->r7 = MEM_HU(ctx->r10, 0X0);
    // 0x802251F4: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    // 0x802251F8: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x802251FC: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80225200: bnel        $t5, $zero, L_80225224
    if (ctx->r13 != 0) {
        // 0x80225204: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80225224;
    }
    goto skip_9;
    // 0x80225204: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_9:
    // 0x80225208: jal         0x80224ABC
    // 0x8022520C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80224ABC(rdram, ctx);
        goto after_22;
    // 0x8022520C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_22:
    // 0x80225210: lw          $t6, 0x4($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X4);
    // 0x80225214: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x80225218: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x8022521C: lhu         $a1, 0x4($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X4);
    // 0x80225220: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80225224:
    // 0x80225224: slt         $at, $s2, $a1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80225228: bne         $at, $zero, L_802251E0
    if (ctx->r1 != 0) {
        // 0x8022522C: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_802251E0;
    }
    // 0x8022522C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80225230: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80225234:
    // 0x80225234: sw          $a1, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r5;
    // 0x80225238: lhu         $v1, 0x34($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X34);
    // 0x8022523C: lui         $s3, 0x5556
    ctx->r19 = S32(0X5556 << 16);
    // 0x80225240: ori         $s3, $s3, 0x5351
    ctx->r19 = ctx->r19 | 0X5351;
    // 0x80225244: blez        $v1, L_802252A0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80225248: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_802252A0;
    }
    // 0x80225248: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8022524C:
    // 0x8022524C: lw          $t8, 0x30($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X30);
    // 0x80225250: lw          $t1, 0x34($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X34);
    // 0x80225254: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80225258: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x8022525C: lhu         $a3, 0x0($t9)
    ctx->r7 = MEM_HU(ctx->r25, 0X0);
    // 0x80225260: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    // 0x80225264: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x80225268: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8022526C: bnel        $t3, $zero, L_80225290
    if (ctx->r11 != 0) {
        // 0x80225270: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80225290;
    }
    goto skip_10;
    // 0x80225270: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_10:
    // 0x80225274: jal         0x80224ABC
    // 0x80225278: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80224ABC(rdram, ctx);
        goto after_23;
    // 0x80225278: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_23:
    // 0x8022527C: lw          $t4, 0x34($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X34);
    // 0x80225280: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x80225284: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
    // 0x80225288: lhu         $v1, 0x34($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X34);
    // 0x8022528C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80225290:
    // 0x80225290: slt         $at, $s2, $v1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80225294: bne         $at, $zero, L_8022524C
    if (ctx->r1 != 0) {
        // 0x80225298: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_8022524C;
    }
    // 0x80225298: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x8022529C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802252A0:
    // 0x802252A0: sw          $v1, 0x38($s6)
    MEM_W(0X38, ctx->r22) = ctx->r3;
    // 0x802252A4: lhu         $a1, 0x3C($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X3C);
    // 0x802252A8: lui         $s3, 0x5556
    ctx->r19 = S32(0X5556 << 16);
    // 0x802252AC: ori         $s3, $s3, 0x414E
    ctx->r19 = ctx->r19 | 0X414E;
    // 0x802252B0: blez        $a1, L_8022530C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x802252B4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8022530C;
    }
    // 0x802252B4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802252B8:
    // 0x802252B8: lw          $t6, 0x38($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X38);
    // 0x802252BC: lw          $t8, 0x3C($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X3C);
    // 0x802252C0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802252C4: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x802252C8: lhu         $a3, 0x0($t7)
    ctx->r7 = MEM_HU(ctx->r15, 0X0);
    // 0x802252CC: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    // 0x802252D0: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x802252D4: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x802252D8: bnel        $t1, $zero, L_802252FC
    if (ctx->r9 != 0) {
        // 0x802252DC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802252FC;
    }
    goto skip_11;
    // 0x802252DC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_11:
    // 0x802252E0: jal         0x80224ABC
    // 0x802252E4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80224ABC(rdram, ctx);
        goto after_24;
    // 0x802252E4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_24:
    // 0x802252E8: lw          $t2, 0x3C($s6)
    ctx->r10 = MEM_W(ctx->r22, 0X3C);
    // 0x802252EC: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x802252F0: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
    // 0x802252F4: lhu         $a1, 0x3C($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X3C);
    // 0x802252F8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_802252FC:
    // 0x802252FC: slt         $at, $s2, $a1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80225300: bne         $at, $zero, L_802252B8
    if (ctx->r1 != 0) {
        // 0x80225304: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_802252B8;
    }
    // 0x80225304: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80225308: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8022530C:
    // 0x8022530C: lhu         $v1, 0x44($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X44);
    // 0x80225310: lui         $s3, 0x5556
    ctx->r19 = S32(0X5556 << 16);
    // 0x80225314: ori         $s3, $s3, 0x4654
    ctx->r19 = ctx->r19 | 0X4654;
    // 0x80225318: blez        $v1, L_80225374
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8022531C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80225374;
    }
    // 0x8022531C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80225320:
    // 0x80225320: lw          $t4, 0x40($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X40);
    // 0x80225324: lw          $t6, 0x44($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X44);
    // 0x80225328: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8022532C: addu        $t5, $t4, $s1
    ctx->r13 = ADD32(ctx->r12, ctx->r17);
    // 0x80225330: lhu         $a3, 0x0($t5)
    ctx->r7 = MEM_HU(ctx->r13, 0X0);
    // 0x80225334: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    // 0x80225338: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8022533C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80225340: bnel        $t8, $zero, L_80225364
    if (ctx->r24 != 0) {
        // 0x80225344: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80225364;
    }
    goto skip_12;
    // 0x80225344: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_12:
    // 0x80225348: jal         0x80224ABC
    // 0x8022534C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80224ABC(rdram, ctx);
        goto after_25;
    // 0x8022534C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_25:
    // 0x80225350: lw          $t9, 0x44($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X44);
    // 0x80225354: addu        $t1, $t9, $s0
    ctx->r9 = ADD32(ctx->r25, ctx->r16);
    // 0x80225358: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x8022535C: lhu         $v1, 0x44($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X44);
    // 0x80225360: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80225364:
    // 0x80225364: slt         $at, $s2, $v1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80225368: bne         $at, $zero, L_80225320
    if (ctx->r1 != 0) {
        // 0x8022536C: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80225320;
    }
    // 0x8022536C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80225370: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80225374:
    // 0x80225374: lhu         $a1, 0x4C($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X4C);
    // 0x80225378: lui         $s3, 0x5556
    ctx->r19 = S32(0X5556 << 16);
    // 0x8022537C: ori         $s3, $s3, 0x4254
    ctx->r19 = ctx->r19 | 0X4254;
    // 0x80225380: blez        $a1, L_802253D8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80225384: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_802253D8;
    }
    // 0x80225384: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80225388:
    // 0x80225388: lw          $t2, 0x48($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X48);
    // 0x8022538C: lw          $t4, 0x4C($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X4C);
    // 0x80225390: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80225394: addu        $t3, $t2, $s1
    ctx->r11 = ADD32(ctx->r10, ctx->r17);
    // 0x80225398: lhu         $a3, 0x0($t3)
    ctx->r7 = MEM_HU(ctx->r11, 0X0);
    // 0x8022539C: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    // 0x802253A0: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x802253A4: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x802253A8: bnel        $t6, $zero, L_802253CC
    if (ctx->r14 != 0) {
        // 0x802253AC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802253CC;
    }
    goto skip_13;
    // 0x802253AC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_13:
    // 0x802253B0: jal         0x80224ABC
    // 0x802253B4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80224ABC(rdram, ctx);
        goto after_26;
    // 0x802253B4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_26:
    // 0x802253B8: lw          $t7, 0x4C($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X4C);
    // 0x802253BC: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x802253C0: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
    // 0x802253C4: lhu         $a1, 0x4C($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X4C);
    // 0x802253C8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_802253CC:
    // 0x802253CC: slt         $at, $s2, $a1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802253D0: bne         $at, $zero, L_80225388
    if (ctx->r1 != 0) {
        // 0x802253D4: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80225388;
    }
    // 0x802253D4: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_802253D8:
    // 0x802253D8: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802253DC: lw          $a1, 0x5F88($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5F88);
    // 0x802253E0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802253E4: beq         $a1, $zero, L_802253F4
    if (ctx->r5 == 0) {
        // 0x802253E8: nop
    
            goto L_802253F4;
    }
    // 0x802253E8: nop

    // 0x802253EC: jal         0x80231A24
    // 0x802253F0: addiu       $a0, $a0, 0x3B94
    ctx->r4 = ADD32(ctx->r4, 0X3B94);
    func_80231A24(rdram, ctx);
        goto after_27;
    // 0x802253F0: addiu       $a0, $a0, 0x3B94
    ctx->r4 = ADD32(ctx->r4, 0X3B94);
    after_27:
L_802253F4:
    // 0x802253F4: jal         0x8022D040
    // 0x802253F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8022D040(rdram, ctx);
        goto after_28;
    // 0x802253F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_28:
    // 0x802253FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80225400:
    // 0x80225400: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80225404: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80225408: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022540C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80225410: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80225414: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80225418: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022541C: jr          $ra
    // 0x80225420: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x80225420: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_8021B6D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021B6D4: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8021B6D8: addiu       $v0, $v0, 0xBC0
    ctx->r2 = ADD32(ctx->r2, 0XBC0);
    // 0x8021B6DC: lhu         $t6, 0x26($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X26);
    // 0x8021B6E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8021B6E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021B6E8: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021B6EC: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8021B6F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021B6F4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8021B6F8: beq         $at, $zero, L_8021B718
    if (ctx->r1 == 0) {
        // 0x8021B6FC: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8021B718;
    }
    // 0x8021B6FC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8021B700: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021B704: addiu       $a0, $a0, 0x333C
    ctx->r4 = ADD32(ctx->r4, 0X333C);
    // 0x8021B708: jal         0x80231A24
    // 0x8021B70C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021B70C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_0:
    // 0x8021B710: b           L_8021B828
    // 0x8021B714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8021B828;
    // 0x8021B714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021B718:
    // 0x8021B718: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x8021B71C: lw          $t8, -0x3C20($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C20);
    // 0x8021B720: sll         $t7, $a3, 3
    ctx->r15 = S32(ctx->r7 << 3);
    // 0x8021B724: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x8021B728: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8021B72C: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8021B730: lhu         $t9, 0x0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X0);
    // 0x8021B734: lhu         $t0, 0x10($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X10);
    // 0x8021B738: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x8021B73C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021B740: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8021B744: bne         $at, $zero, L_8021B764
    if (ctx->r1 != 0) {
        // 0x8021B748: sll         $t1, $a2, 1
        ctx->r9 = S32(ctx->r6 << 1);
            goto L_8021B764;
    }
    // 0x8021B748: sll         $t1, $a2, 1
    ctx->r9 = S32(ctx->r6 << 1);
    // 0x8021B74C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021B750: addiu       $a0, $a0, 0x3368
    ctx->r4 = ADD32(ctx->r4, 0X3368);
    // 0x8021B754: jal         0x80231A24
    // 0x8021B758: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8021B758: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x8021B75C: b           L_8021B828
    // 0x8021B760: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8021B828;
    // 0x8021B760: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021B764:
    // 0x8021B764: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x8021B768: lui         $t2, 0x8026
    ctx->r10 = S32(0X8026 << 16);
    // 0x8021B76C: lw          $t2, -0x3C1C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3C1C);
    // 0x8021B770: addu        $t4, $t3, $t1
    ctx->r12 = ADD32(ctx->r11, ctx->r9);
    // 0x8021B774: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x8021B778: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8021B77C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x8021B780: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x8021B784: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8021B788: jal         0x80228DE0
    // 0x8021B78C: addu        $a1, $t2, $t6
    ctx->r5 = ADD32(ctx->r10, ctx->r14);
    func_80228DE0(rdram, ctx);
        goto after_2;
    // 0x8021B78C: addu        $a1, $t2, $t6
    ctx->r5 = ADD32(ctx->r10, ctx->r14);
    after_2:
    // 0x8021B790: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x8021B794: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8021B798: lw          $t7, -0x18F0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X18F0);
    // 0x8021B79C: lhu         $t9, 0x0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X0);
    // 0x8021B7A0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8021B7A4: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8021B7A8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8021B7AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021B7B0: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8021B7B4: bne         $a2, $zero, L_8021B7F4
    if (ctx->r6 != 0) {
        // 0x8021B7B8: lw          $v0, 0x0($t1)
        ctx->r2 = MEM_W(ctx->r9, 0X0);
            goto L_8021B7F4;
    }
    // 0x8021B7B8: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x8021B7BC: lwc1        $f0, 0x20($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8021B7C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021B7C4: nop

    // 0x8021B7C8: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x8021B7CC: nop

    // 0x8021B7D0: bc1tl       L_8021B828
    if (c1cs) {
        // 0x8021B7D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8021B828;
    }
    goto skip_0;
    // 0x8021B7D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8021B7D8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8021B7DC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8021B7E0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8021B7E4: jal         0x8022A210
    // 0x8021B7E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022A210(rdram, ctx);
        goto after_3;
    // 0x8021B7E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8021B7EC: b           L_8021B828
    // 0x8021B7F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8021B828;
    // 0x8021B7F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021B7F4:
    // 0x8021B7F4: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x8021B7F8: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8021B7FC: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8021B800: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021B804: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x8021B808: swc1        $f10, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f10.u32l;
    // 0x8021B80C: lwc1        $f18, 0x20($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8021B810: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8021B814: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    // 0x8021B818: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8021B81C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021B820: swc1        $f10, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f10.u32l;
    // 0x8021B824: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021B828:
    // 0x8021B828: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021B82C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8021B830: jr          $ra
    // 0x8021B834: nop

    return;
    // 0x8021B834: nop

;}
RECOMP_FUNC void func_80234DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234DEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8023A700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023A700: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8023A704: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x8023A708: ori         $t7, $t7, 0x8000
    ctx->r15 = ctx->r15 | 0X8000;
    // 0x8023A70C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8023A710: lui         $t6, 0xBB00
    ctx->r14 = S32(0XBB00 << 16);
    // 0x8023A714: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8023A718: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8023A71C: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8023A720: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8023A724: lui         $t8, 0xFCFF
    ctx->r24 = S32(0XFCFF << 16);
    // 0x8023A728: lui         $t9, 0xFFFE
    ctx->r25 = S32(0XFFFE << 16);
    // 0x8023A72C: ori         $t9, $t9, 0x793C
    ctx->r25 = ctx->r25 | 0X793C;
    // 0x8023A730: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x8023A734: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8023A738: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x8023A73C: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x8023A740: lhu         $a2, 0x934($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X934);
    // 0x8023A744: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8023A748: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8023A74C: andi        $t0, $a2, 0x1
    ctx->r8 = ctx->r6 & 0X1;
    // 0x8023A750: beq         $t0, $zero, L_8023A77C
    if (ctx->r8 == 0) {
        // 0x8023A754: lui         $t5, 0xB800
        ctx->r13 = S32(0XB800 << 16);
            goto L_8023A77C;
    }
    // 0x8023A754: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x8023A758: lui         $t1, 0xB900
    ctx->r9 = S32(0XB900 << 16);
    // 0x8023A75C: lui         $t2, 0xF0A
    ctx->r10 = S32(0XF0A << 16);
    // 0x8023A760: ori         $t2, $t2, 0x4000
    ctx->r10 = ctx->r10 | 0X4000;
    // 0x8023A764: ori         $t1, $t1, 0x31D
    ctx->r9 = ctx->r9 | 0X31D;
    // 0x8023A768: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x8023A76C: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x8023A770: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x8023A774: lhu         $a2, 0x934($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X934);
    // 0x8023A778: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_8023A77C:
    // 0x8023A77C: andi        $t3, $a2, 0x2
    ctx->r11 = ctx->r6 & 0X2;
    // 0x8023A780: beq         $t3, $zero, L_8023A79C
    if (ctx->r11 == 0) {
        // 0x8023A784: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8023A79C;
    }
    // 0x8023A784: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8023A788: lui         $t4, 0xB900
    ctx->r12 = S32(0XB900 << 16);
    // 0x8023A78C: ori         $t4, $t4, 0x2
    ctx->r12 = ctx->r12 | 0X2;
    // 0x8023A790: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8023A794: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8023A798: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_8023A79C:
    // 0x8023A79C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8023A7A0: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x8023A7A4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8023A7A8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8023A7AC: jr          $ra
    // 0x8023A7B0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x8023A7B0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void recomp_entrypoint(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023169C: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x802316A0: lui         $t1, 0x3
    ctx->r9 = S32(0X3 << 16);
    // 0x802316A4: addiu       $t0, $t0, 0x6D70
    ctx->r8 = ADD32(ctx->r8, 0X6D70);
    // 0x802316A8: ori         $t1, $t1, 0x6C0
    ctx->r9 = ctx->r9 | 0X6C0;
L_802316AC:
    // 0x802316AC: addi        $t1, $t1, -0x8
    ctx->r9 = ADD32(ctx->r9, -0X8);
    // 0x802316B0: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x802316B4: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x802316B8: bne         $t1, $zero, L_802316AC
    if (ctx->r9 != 0) {
        // 0x802316BC: addi        $t0, $t0, 0x8
        ctx->r8 = ADD32(ctx->r8, 0X8);
            goto L_802316AC;
    }
    // 0x802316BC: addi        $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x802316C0: lui         $t2, 0x8023
    ctx->r10 = S32(0X8023 << 16);
    // 0x802316C4: lui         $sp, 0x8028
    ctx->r29 = S32(0X8028 << 16);
    // 0x802316C8: addiu       $t2, $t2, 0x1150
    ctx->r10 = ADD32(ctx->r10, 0X1150);
    // 0x802316CC: jr          $t2
    // 0x802316D0: addiu       $sp, $sp, 0x2B60
    ctx->r29 = ADD32(ctx->r29, 0X2B60);
    LOOKUP_FUNC(ctx->r10)(rdram, ctx);
    return;
    // 0x802316D0: addiu       $sp, $sp, 0x2B60
    ctx->r29 = ADD32(ctx->r29, 0X2B60);
;}
RECOMP_FUNC void func_8022466C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022466C: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x80224670: addiu       $v1, $v1, 0x51E8
    ctx->r3 = ADD32(ctx->r3, 0X51E8);
    // 0x80224674: lhu         $v0, 0x10($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X10);
    // 0x80224678: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022467C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80224680: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80224684: bne         $at, $zero, L_802246A0
    if (ctx->r1 != 0) {
        // 0x80224688: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_802246A0;
    }
    // 0x80224688: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022468C: lui         $s0, 0x8028
    ctx->r16 = S32(0X8028 << 16);
    // 0x80224690: addiu       $s0, $s0, 0xBC0
    ctx->r16 = ADD32(ctx->r16, 0XBC0);
    // 0x80224694: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80224698: b           L_802246B0
    // 0x8022469C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_802246B0;
    // 0x8022469C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_802246A0:
    // 0x802246A0: lui         $s0, 0x8028
    ctx->r16 = S32(0X8028 << 16);
    // 0x802246A4: addiu       $s0, $s0, 0xBC0
    ctx->r16 = ADD32(ctx->r16, 0XBC0);
    // 0x802246A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802246AC: sh          $a0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r4;
L_802246B0:
    // 0x802246B0: lhu         $v0, 0x1E($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1E);
    // 0x802246B4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802246B8: bnel        $at, $zero, L_802246CC
    if (ctx->r1 != 0) {
        // 0x802246BC: sh          $a0, 0x1E($s0)
        MEM_H(0X1E, ctx->r16) = ctx->r4;
            goto L_802246CC;
    }
    goto skip_0;
    // 0x802246BC: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    skip_0:
    // 0x802246C0: b           L_802246CC
    // 0x802246C4: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
        goto L_802246CC;
    // 0x802246C4: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x802246C8: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
L_802246CC:
    // 0x802246CC: lhu         $v0, 0x16($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X16);
    // 0x802246D0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802246D4: bnel        $at, $zero, L_802246E8
    if (ctx->r1 != 0) {
        // 0x802246D8: sh          $a0, 0x2($s0)
        MEM_H(0X2, ctx->r16) = ctx->r4;
            goto L_802246E8;
    }
    goto skip_1;
    // 0x802246D8: sh          $a0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r4;
    skip_1:
    // 0x802246DC: b           L_802246E8
    // 0x802246E0: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
        goto L_802246E8;
    // 0x802246E0: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x802246E4: sh          $a0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r4;
L_802246E8:
    // 0x802246E8: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x802246EC: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802246F0: bnel        $at, $zero, L_80224704
    if (ctx->r1 != 0) {
        // 0x802246F4: sh          $a0, 0x12($s0)
        MEM_H(0X12, ctx->r16) = ctx->r4;
            goto L_80224704;
    }
    goto skip_2;
    // 0x802246F4: sh          $a0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r4;
    skip_2:
    // 0x802246F8: b           L_80224704
    // 0x802246FC: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
        goto L_80224704;
    // 0x802246FC: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x80224700: sh          $a0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r4;
L_80224704:
    // 0x80224704: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x80224708: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022470C: bnel        $at, $zero, L_80224720
    if (ctx->r1 != 0) {
        // 0x80224710: sh          $a0, 0x10($s0)
        MEM_H(0X10, ctx->r16) = ctx->r4;
            goto L_80224720;
    }
    goto skip_3;
    // 0x80224710: sh          $a0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r4;
    skip_3:
    // 0x80224714: b           L_80224720
    // 0x80224718: sh          $v0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r2;
        goto L_80224720;
    // 0x80224718: sh          $v0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r2;
    // 0x8022471C: sh          $a0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r4;
L_80224720:
    // 0x80224720: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    // 0x80224724: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80224728: bnel        $at, $zero, L_8022473C
    if (ctx->r1 != 0) {
        // 0x8022472C: sh          $a0, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r4;
            goto L_8022473C;
    }
    goto skip_4;
    // 0x8022472C: sh          $a0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r4;
    skip_4:
    // 0x80224730: b           L_8022473C
    // 0x80224734: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
        goto L_8022473C;
    // 0x80224734: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80224738: sh          $a0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r4;
L_8022473C:
    // 0x8022473C: lhu         $v0, 0xA($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XA);
    // 0x80224740: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80224744: bnel        $at, $zero, L_80224758
    if (ctx->r1 != 0) {
        // 0x80224748: sh          $a0, 0xC($s0)
        MEM_H(0XC, ctx->r16) = ctx->r4;
            goto L_80224758;
    }
    goto skip_5;
    // 0x80224748: sh          $a0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r4;
    skip_5:
    // 0x8022474C: b           L_80224758
    // 0x80224750: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
        goto L_80224758;
    // 0x80224750: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80224754: sh          $a0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r4;
L_80224758:
    // 0x80224758: lhu         $v0, 0x8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X8);
    // 0x8022475C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80224760: bnel        $at, $zero, L_80224774
    if (ctx->r1 != 0) {
        // 0x80224764: sh          $a0, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r4;
            goto L_80224774;
    }
    goto skip_6;
    // 0x80224764: sh          $a0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r4;
    skip_6:
    // 0x80224768: b           L_80224774
    // 0x8022476C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_80224774;
    // 0x8022476C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80224770: sh          $a0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r4;
L_80224774:
    // 0x80224774: lhu         $v0, 0x12($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X12);
    // 0x80224778: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022477C: bnel        $at, $zero, L_80224790
    if (ctx->r1 != 0) {
        // 0x80224780: sh          $a0, 0x1C($s0)
        MEM_H(0X1C, ctx->r16) = ctx->r4;
            goto L_80224790;
    }
    goto skip_7;
    // 0x80224780: sh          $a0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r4;
    skip_7:
    // 0x80224784: b           L_80224790
    // 0x80224788: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
        goto L_80224790;
    // 0x80224788: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x8022478C: sh          $a0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r4;
L_80224790:
    // 0x80224790: lhu         $v0, 0xE($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XE);
    // 0x80224794: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80224798: bnel        $at, $zero, L_802247AC
    if (ctx->r1 != 0) {
        // 0x8022479C: sh          $a0, 0x14($s0)
        MEM_H(0X14, ctx->r16) = ctx->r4;
            goto L_802247AC;
    }
    goto skip_8;
    // 0x8022479C: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
    skip_8:
    // 0x802247A0: b           L_802247AC
    // 0x802247A4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
        goto L_802247AC;
    // 0x802247A4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802247A8: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
L_802247AC:
    // 0x802247AC: lhu         $v0, 0x1A($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1A);
    // 0x802247B0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802247B4: bnel        $at, $zero, L_802247C8
    if (ctx->r1 != 0) {
        // 0x802247B8: sh          $a0, 0x6($s0)
        MEM_H(0X6, ctx->r16) = ctx->r4;
            goto L_802247C8;
    }
    goto skip_9;
    // 0x802247B8: sh          $a0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r4;
    skip_9:
    // 0x802247BC: b           L_802247C8
    // 0x802247C0: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
        goto L_802247C8;
    // 0x802247C0: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x802247C4: sh          $a0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r4;
L_802247C8:
    // 0x802247C8: lhu         $v0, 0x1C($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1C);
    // 0x802247CC: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802247D0: bnel        $at, $zero, L_802247E4
    if (ctx->r1 != 0) {
        // 0x802247D4: sh          $a0, 0x8($s0)
        MEM_H(0X8, ctx->r16) = ctx->r4;
            goto L_802247E4;
    }
    goto skip_10;
    // 0x802247D4: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    skip_10:
    // 0x802247D8: b           L_802247E4
    // 0x802247DC: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
        goto L_802247E4;
    // 0x802247DC: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x802247E0: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
L_802247E4:
    // 0x802247E4: lhu         $v0, 0xC($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XC);
    // 0x802247E8: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802247EC: bnel        $at, $zero, L_80224800
    if (ctx->r1 != 0) {
        // 0x802247F0: sh          $a0, 0xA($s0)
        MEM_H(0XA, ctx->r16) = ctx->r4;
            goto L_80224800;
    }
    goto skip_11;
    // 0x802247F0: sh          $a0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r4;
    skip_11:
    // 0x802247F4: b           L_80224800
    // 0x802247F8: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
        goto L_80224800;
    // 0x802247F8: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x802247FC: sh          $a0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r4;
L_80224800:
    // 0x80224800: lhu         $v0, 0x14($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X14);
    // 0x80224804: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80224808: bnel        $at, $zero, L_8022481C
    if (ctx->r1 != 0) {
        // 0x8022480C: sh          $a0, 0x1A($s0)
        MEM_H(0X1A, ctx->r16) = ctx->r4;
            goto L_8022481C;
    }
    goto skip_12;
    // 0x8022480C: sh          $a0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r4;
    skip_12:
    // 0x80224810: b           L_8022481C
    // 0x80224814: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
        goto L_8022481C;
    // 0x80224814: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x80224818: sh          $a0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r4;
L_8022481C:
    // 0x8022481C: lhu         $v0, 0x18($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X18);
    // 0x80224820: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80224824: bnel        $at, $zero, L_80224838
    if (ctx->r1 != 0) {
        // 0x80224828: sh          $a0, 0x4($s0)
        MEM_H(0X4, ctx->r16) = ctx->r4;
            goto L_80224838;
    }
    goto skip_13;
    // 0x80224828: sh          $a0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r4;
    skip_13:
    // 0x8022482C: b           L_80224838
    // 0x80224830: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_80224838;
    // 0x80224830: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80224834: sh          $a0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r4;
L_80224838:
    // 0x80224838: lhu         $a0, 0xA($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XA);
    // 0x8022483C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80224840: jal         0x8022BA58
    // 0x80224844: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022BA58(rdram, ctx);
        goto after_0;
    // 0x80224844: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x80224848: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022484C: sw          $v0, 0xB6C($at)
    MEM_W(0XB6C, ctx->r1) = ctx->r2;
    // 0x80224850: lhu         $a0, 0xC($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XC);
    // 0x80224854: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80224858: jal         0x8022BA58
    // 0x8022485C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8022BA58(rdram, ctx);
        goto after_1;
    // 0x8022485C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x80224860: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80224864: sw          $v0, 0xB74($at)
    MEM_W(0XB74, ctx->r1) = ctx->r2;
    // 0x80224868: lhu         $a0, 0xE($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE);
    // 0x8022486C: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80224870: jal         0x8022BA58
    // 0x80224874: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8022BA58(rdram, ctx);
        goto after_2;
    // 0x80224874: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_2:
    // 0x80224878: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022487C: sw          $v0, 0xB7C($at)
    MEM_W(0XB7C, ctx->r1) = ctx->r2;
    // 0x80224880: lhu         $a0, 0x10($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X10);
    // 0x80224884: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x80224888: jal         0x8022BA58
    // 0x8022488C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_8022BA58(rdram, ctx);
        goto after_3;
    // 0x8022488C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_3:
    // 0x80224890: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80224894: sw          $v0, 0xB84($at)
    MEM_W(0XB84, ctx->r1) = ctx->r2;
    // 0x80224898: lhu         $a0, 0x12($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12);
    // 0x8022489C: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x802248A0: jal         0x8022BA58
    // 0x802248A4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8022BA58(rdram, ctx);
        goto after_4;
    // 0x802248A4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_4:
    // 0x802248A8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802248AC: sw          $v0, 0xB8C($at)
    MEM_W(0XB8C, ctx->r1) = ctx->r2;
    // 0x802248B0: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x802248B4: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x802248B8: jal         0x8022BA58
    // 0x802248BC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_8022BA58(rdram, ctx);
        goto after_5;
    // 0x802248BC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_5:
    // 0x802248C0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802248C4: sw          $v0, 0xB94($at)
    MEM_W(0XB94, ctx->r1) = ctx->r2;
    // 0x802248C8: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x802248CC: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x802248D0: jal         0x8022BA58
    // 0x802248D4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_8022BA58(rdram, ctx);
        goto after_6;
    // 0x802248D4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_6:
    // 0x802248D8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802248DC: sw          $v0, 0xB9C($at)
    MEM_W(0XB9C, ctx->r1) = ctx->r2;
    // 0x802248E0: lhu         $a0, 0x1C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1C);
    // 0x802248E4: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x802248E8: jal         0x8022BA58
    // 0x802248EC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_8022BA58(rdram, ctx);
        goto after_7;
    // 0x802248EC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_7:
    // 0x802248F0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802248F4: sw          $v0, 0xBA4($at)
    MEM_W(0XBA4, ctx->r1) = ctx->r2;
    // 0x802248F8: lhu         $a0, 0x1A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1A);
    // 0x802248FC: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x80224900: jal         0x8022BA58
    // 0x80224904: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_8022BA58(rdram, ctx);
        goto after_8;
    // 0x80224904: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_8:
    // 0x80224908: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022490C: sw          $v0, 0xBAC($at)
    MEM_W(0XBAC, ctx->r1) = ctx->r2;
    // 0x80224910: lhu         $a0, 0x2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2);
    // 0x80224914: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x80224918: jal         0x8022BA58
    // 0x8022491C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_8022BA58(rdram, ctx);
        goto after_9;
    // 0x8022491C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_9:
    // 0x80224920: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80224924: sw          $v0, 0xBB4($at)
    MEM_W(0XBB4, ctx->r1) = ctx->r2;
    // 0x80224928: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x8022492C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80224930: jal         0x8022BA58
    // 0x80224934: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022BA58(rdram, ctx);
        goto after_10;
    // 0x80224934: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_10:
    // 0x80224938: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022493C: jal         0x8022BC40
    // 0x80224940: sw          $v0, 0x524C($at)
    MEM_W(0X524C, ctx->r1) = ctx->r2;
    func_8022BC40(rdram, ctx);
        goto after_11;
    // 0x80224940: sw          $v0, 0x524C($at)
    MEM_W(0X524C, ctx->r1) = ctx->r2;
    after_11:
    // 0x80224944: lhu         $a0, 0x1C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1C);
    // 0x80224948: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8022494C: jal         0x8022BA58
    // 0x80224950: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8022BA58(rdram, ctx);
        goto after_12;
    // 0x80224950: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_12:
    // 0x80224954: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80224958: sw          $v0, 0x522C($at)
    MEM_W(0X522C, ctx->r1) = ctx->r2;
    // 0x8022495C: lhu         $a0, 0xA($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XA);
    // 0x80224960: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80224964: jal         0x8022BA58
    // 0x80224968: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8022BA58(rdram, ctx);
        goto after_13;
    // 0x80224968: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_13:
    // 0x8022496C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80224970: sw          $v0, 0x5220($at)
    MEM_W(0X5220, ctx->r1) = ctx->r2;
    // 0x80224974: lhu         $a0, 0xC($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XC);
    // 0x80224978: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8022497C: jal         0x8022BA58
    // 0x80224980: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_8022BA58(rdram, ctx);
        goto after_14;
    // 0x80224980: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_14:
    // 0x80224984: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80224988: sw          $v0, 0x521C($at)
    MEM_W(0X521C, ctx->r1) = ctx->r2;
    // 0x8022498C: lhu         $a0, 0xE($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE);
    // 0x80224990: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x80224994: jal         0x8022BA58
    // 0x80224998: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8022BA58(rdram, ctx);
        goto after_15;
    // 0x80224998: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_15:
    // 0x8022499C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802249A0: sw          $v0, 0x5218($at)
    MEM_W(0X5218, ctx->r1) = ctx->r2;
    // 0x802249A4: lhu         $a0, 0x10($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X10);
    // 0x802249A8: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x802249AC: jal         0x8022BA58
    // 0x802249B0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_8022BA58(rdram, ctx);
        goto after_16;
    // 0x802249B0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_16:
    // 0x802249B4: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802249B8: sw          $v0, 0x520C($at)
    MEM_W(0X520C, ctx->r1) = ctx->r2;
    // 0x802249BC: lhu         $a0, 0x12($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12);
    // 0x802249C0: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x802249C4: jal         0x8022BA58
    // 0x802249C8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_8022BA58(rdram, ctx);
        goto after_17;
    // 0x802249C8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_17:
    // 0x802249CC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802249D0: sw          $v0, 0x5210($at)
    MEM_W(0X5210, ctx->r1) = ctx->r2;
    // 0x802249D4: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x802249D8: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x802249DC: jal         0x8022BA58
    // 0x802249E0: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_8022BA58(rdram, ctx);
        goto after_18;
    // 0x802249E0: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_18:
    // 0x802249E4: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802249E8: sw          $v0, 0x5214($at)
    MEM_W(0X5214, ctx->r1) = ctx->r2;
    // 0x802249EC: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x802249F0: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x802249F4: jal         0x8022BA58
    // 0x802249F8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_8022BA58(rdram, ctx);
        goto after_19;
    // 0x802249F8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_19:
    // 0x802249FC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80224A00: sw          $v0, 0x5224($at)
    MEM_W(0X5224, ctx->r1) = ctx->r2;
    // 0x80224A04: lhu         $a0, 0x6($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X6);
    // 0x80224A08: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x80224A0C: jal         0x8022BA58
    // 0x80224A10: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_8022BA58(rdram, ctx);
        goto after_20;
    // 0x80224A10: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_20:
    // 0x80224A14: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80224A18: sw          $v0, 0x523C($at)
    MEM_W(0X523C, ctx->r1) = ctx->r2;
    // 0x80224A1C: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x80224A20: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80224A24: jal         0x8022BA58
    // 0x80224A28: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022BA58(rdram, ctx);
        goto after_21;
    // 0x80224A28: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_21:
    // 0x80224A2C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80224A30: sw          $v0, 0x5240($at)
    MEM_W(0X5240, ctx->r1) = ctx->r2;
    // 0x80224A34: lhu         $a0, 0x1A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1A);
    // 0x80224A38: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80224A3C: jal         0x8022BA58
    // 0x80224A40: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8022BA58(rdram, ctx);
        goto after_22;
    // 0x80224A40: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_22:
    // 0x80224A44: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80224A48: sw          $v0, 0x5230($at)
    MEM_W(0X5230, ctx->r1) = ctx->r2;
    // 0x80224A4C: lhu         $a0, 0x2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2);
    // 0x80224A50: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80224A54: jal         0x8022BA58
    // 0x80224A58: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8022BA58(rdram, ctx);
        goto after_23;
    // 0x80224A58: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_23:
    // 0x80224A5C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80224A60: sw          $v0, 0x5234($at)
    MEM_W(0X5234, ctx->r1) = ctx->r2;
    // 0x80224A64: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x80224A68: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x80224A6C: jal         0x8022BA58
    // 0x80224A70: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_8022BA58(rdram, ctx);
        goto after_24;
    // 0x80224A70: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_24:
    // 0x80224A74: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80224A78: sw          $v0, 0x5248($at)
    MEM_W(0X5248, ctx->r1) = ctx->r2;
    // 0x80224A7C: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x80224A80: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x80224A84: jal         0x8022BA58
    // 0x80224A88: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8022BA58(rdram, ctx);
        goto after_25;
    // 0x80224A88: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_25:
    // 0x80224A8C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80224A90: sw          $v0, 0x5228($at)
    MEM_W(0X5228, ctx->r1) = ctx->r2;
    // 0x80224A94: lhu         $a0, 0x4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4);
    // 0x80224A98: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x80224A9C: jal         0x8022BA58
    // 0x80224AA0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_8022BA58(rdram, ctx);
        goto after_26;
    // 0x80224AA0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_26:
    // 0x80224AA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80224AA8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80224AAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80224AB0: sw          $v0, 0x5238($at)
    MEM_W(0X5238, ctx->r1) = ctx->r2;
    // 0x80224AB4: jr          $ra
    // 0x80224AB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80224AB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802482B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802482B0: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802482B4: lw          $t6, 0x1690($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1690);
    // 0x802482B8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802482BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802482C0: bne         $t6, $zero, L_802482D0
    if (ctx->r14 != 0) {
        // 0x802482C4: nop
    
            goto L_802482D0;
    }
    // 0x802482C4: nop

    // 0x802482C8: b           L_80248984
    // 0x802482CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80248984;
    // 0x802482CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802482D0:
    // 0x802482D0: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x802482D4: lw          $t7, 0x71E4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X71E4);
    // 0x802482D8: lui         $t3, 0xA460
    ctx->r11 = S32(0XA460 << 16);
    // 0x802482DC: addiu       $t8, $t7, 0x14
    ctx->r24 = ADD32(ctx->r15, 0X14);
    // 0x802482E0: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x802482E4: lhu         $t9, 0x1A($t7)
    ctx->r25 = MEM_HU(ctx->r15, 0X1A);
    // 0x802482E8: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x802482EC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x802482F0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x802482F4: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x802482F8: addiu       $t2, $t1, 0x18
    ctx->r10 = ADD32(ctx->r9, 0X18);
    // 0x802482FC: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x80248300: lw          $t4, 0x10($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X10);
    // 0x80248304: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x80248308: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8024830C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80248310: beq         $t6, $zero, L_802483E4
    if (ctx->r14 == 0) {
        // 0x80248314: nop
    
            goto L_802483E4;
    }
    // 0x80248314: nop

    // 0x80248318: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8024831C: lui         $t9, 0xA460
    ctx->r25 = S32(0XA460 << 16);
    // 0x80248320: sw          $t7, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r15;
    // 0x80248324: lui         $t8, 0xA460
    ctx->r24 = S32(0XA460 << 16);
    // 0x80248328: lw          $t0, 0x10($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X10);
    // 0x8024832C: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x80248330: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80248334: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x80248338: beq         $t2, $zero, L_8024835C
    if (ctx->r10 == 0) {
        // 0x8024833C: nop
    
            goto L_8024835C;
    }
    // 0x8024833C: nop

L_80248340:
    // 0x80248340: lui         $t3, 0xA460
    ctx->r11 = S32(0XA460 << 16);
    // 0x80248344: lw          $t4, 0x10($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X10);
    // 0x80248348: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x8024834C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80248350: andi        $t6, $t5, 0x2
    ctx->r14 = ctx->r13 & 0X2;
    // 0x80248354: bne         $t6, $zero, L_80248340
    if (ctx->r14 != 0) {
        // 0x80248358: nop
    
            goto L_80248340;
    }
    // 0x80248358: nop

L_8024835C:
    // 0x8024835C: lui         $t7, 0xA500
    ctx->r15 = S32(0XA500 << 16);
    // 0x80248360: lw          $t9, 0x508($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X508);
    // 0x80248364: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x80248368: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8024836C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80248370: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x80248374: beq         $t0, $zero, L_802483CC
    if (ctx->r8 == 0) {
        // 0x80248378: nop
    
            goto L_802483CC;
    }
    // 0x80248378: nop

    // 0x8024837C: lui         $t1, 0xA460
    ctx->r9 = S32(0XA460 << 16);
    // 0x80248380: lw          $t2, 0x10($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X10);
    // 0x80248384: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x80248388: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8024838C: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x80248390: beq         $t4, $zero, L_802483B4
    if (ctx->r12 == 0) {
        // 0x80248394: nop
    
            goto L_802483B4;
    }
    // 0x80248394: nop

L_80248398:
    // 0x80248398: lui         $t5, 0xA460
    ctx->r13 = S32(0XA460 << 16);
    // 0x8024839C: lw          $t6, 0x10($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X10);
    // 0x802483A0: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x802483A4: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x802483A8: andi        $t9, $t7, 0x2
    ctx->r25 = ctx->r15 & 0X2;
    // 0x802483AC: bne         $t9, $zero, L_80248398
    if (ctx->r25 != 0) {
        // 0x802483B0: nop
    
            goto L_80248398;
    }
    // 0x802483B0: nop

L_802483B4:
    // 0x802483B4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x802483B8: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x802483BC: lui         $t2, 0xA500
    ctx->r10 = S32(0XA500 << 16);
    // 0x802483C0: lw          $t0, 0x10($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X10);
    // 0x802483C4: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x802483C8: sw          $t1, 0x510($t2)
    MEM_W(0X510, ctx->r10) = ctx->r9;
L_802483CC:
    // 0x802483CC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x802483D0: addiu       $t3, $zero, 0x4B
    ctx->r11 = ADD32(0, 0X4B);
    // 0x802483D4: jal         0x80248994
    // 0x802483D8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    func_80248994(rdram, ctx);
        goto after_0;
    // 0x802483D8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    after_0:
    // 0x802483DC: b           L_80248984
    // 0x802483E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248984;
    // 0x802483E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802483E4:
    // 0x802483E4: lui         $t5, 0xA460
    ctx->r13 = S32(0XA460 << 16);
    // 0x802483E8: lw          $t6, 0x10($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X10);
    // 0x802483EC: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x802483F0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x802483F4: andi        $t9, $t7, 0x2
    ctx->r25 = ctx->r15 & 0X2;
    // 0x802483F8: beq         $t9, $zero, L_8024841C
    if (ctx->r25 == 0) {
        // 0x802483FC: nop
    
            goto L_8024841C;
    }
    // 0x802483FC: nop

L_80248400:
    // 0x80248400: lui         $t8, 0xA460
    ctx->r24 = S32(0XA460 << 16);
    // 0x80248404: lw          $t0, 0x10($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X10);
    // 0x80248408: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x8024840C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80248410: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x80248414: bne         $t2, $zero, L_80248400
    if (ctx->r10 != 0) {
        // 0x80248418: nop
    
            goto L_80248400;
    }
    // 0x80248418: nop

L_8024841C:
    // 0x8024841C: lui         $t3, 0xA500
    ctx->r11 = S32(0XA500 << 16);
    // 0x80248420: lw          $t4, 0x508($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X508);
    // 0x80248424: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x80248428: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x8024842C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80248430: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x80248434: beq         $t6, $zero, L_8024849C
    if (ctx->r14 == 0) {
        // 0x80248438: nop
    
            goto L_8024849C;
    }
    // 0x80248438: nop

    // 0x8024843C: lui         $t7, 0xA460
    ctx->r15 = S32(0XA460 << 16);
    // 0x80248440: lw          $t9, 0x10($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X10);
    // 0x80248444: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x80248448: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8024844C: andi        $t0, $t8, 0x2
    ctx->r8 = ctx->r24 & 0X2;
    // 0x80248450: beq         $t0, $zero, L_80248474
    if (ctx->r8 == 0) {
        // 0x80248454: nop
    
            goto L_80248474;
    }
    // 0x80248454: nop

L_80248458:
    // 0x80248458: lui         $t1, 0xA460
    ctx->r9 = S32(0XA460 << 16);
    // 0x8024845C: lw          $t2, 0x10($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X10);
    // 0x80248460: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x80248464: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80248468: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x8024846C: bne         $t4, $zero, L_80248458
    if (ctx->r12 != 0) {
        // 0x80248470: nop
    
            goto L_80248458;
    }
    // 0x80248470: nop

L_80248474:
    // 0x80248474: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80248478: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x8024847C: lui         $t9, 0xA500
    ctx->r25 = S32(0XA500 << 16);
    // 0x80248480: lw          $t6, 0x10($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X10);
    // 0x80248484: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80248488: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8024848C: sw          $t7, 0x510($t9)
    MEM_W(0X510, ctx->r25) = ctx->r15;
    // 0x80248490: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80248494: b           L_80248984
    // 0x80248498: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
        goto L_80248984;
    // 0x80248498: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
L_8024849C:
    // 0x8024849C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x802484A0: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x802484A4: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x802484A8: beq         $t1, $zero, L_802484F0
    if (ctx->r9 == 0) {
        // 0x802484AC: nop
    
            goto L_802484F0;
    }
    // 0x802484AC: nop

    // 0x802484B0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x802484B4: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x802484B8: jal         0x80248A7C
    // 0x802484BC: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    func_80248A7C(rdram, ctx);
        goto after_1;
    // 0x802484BC: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    after_1:
    // 0x802484C0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x802484C4: lui         $t5, 0xA460
    ctx->r13 = S32(0XA460 << 16);
    // 0x802484C8: sw          $t4, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->r12;
    // 0x802484CC: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802484D0: lw          $t6, 0x168C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X168C);
    // 0x802484D4: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x802484D8: ori         $at, $at, 0x401
    ctx->r1 = ctx->r1 | 0X401;
    // 0x802484DC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x802484E0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802484E4: sw          $t7, 0x168C($at)
    MEM_W(0X168C, ctx->r1) = ctx->r15;
    // 0x802484E8: b           L_80248984
    // 0x802484EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248984;
    // 0x802484EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802484F0:
    // 0x802484F0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x802484F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802484F8: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x802484FC: bne         $t8, $at, L_802485EC
    if (ctx->r24 != ctx->r1) {
        // 0x80248500: nop
    
            goto L_802485EC;
    }
    // 0x80248500: nop

    // 0x80248504: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80248508: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8024850C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80248510: bne         $t1, $zero, L_80248598
    if (ctx->r9 != 0) {
        // 0x80248514: nop
    
            goto L_80248598;
    }
    // 0x80248514: nop

    // 0x80248518: lhu         $t4, 0x4($t9)
    ctx->r12 = MEM_HU(ctx->r25, 0X4);
    // 0x8024851C: lw          $t2, 0x8($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X8);
    // 0x80248520: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80248524: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80248528: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8024852C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80248530: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80248534: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80248538: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8024853C: beq         $t3, $t5, L_8024855C
    if (ctx->r11 == ctx->r13) {
        // 0x80248540: nop
    
            goto L_8024855C;
    }
    // 0x80248540: nop

    // 0x80248544: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80248548: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8024854C: jal         0x80248994
    // 0x80248550: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    func_80248994(rdram, ctx);
        goto after_2;
    // 0x80248550: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    after_2:
    // 0x80248554: b           L_80248984
    // 0x80248558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248984;
    // 0x80248558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8024855C:
    // 0x8024855C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80248560: lui         $t0, 0xA460
    ctx->r8 = S32(0XA460 << 16);
    // 0x80248564: sw          $t8, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r24;
    // 0x80248568: lui         $t1, 0x8025
    ctx->r9 = S32(0X8025 << 16);
    // 0x8024856C: lw          $t1, 0x168C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X168C);
    // 0x80248570: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x80248574: ori         $at, $at, 0x401
    ctx->r1 = ctx->r1 | 0X401;
    // 0x80248578: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x8024857C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80248580: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80248584: sw          $t2, 0x168C($at)
    MEM_W(0X168C, ctx->r1) = ctx->r10;
    // 0x80248588: jal         0x80248A7C
    // 0x8024858C: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    func_80248A7C(rdram, ctx);
        goto after_3;
    // 0x8024858C: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    after_3:
    // 0x80248590: b           L_80248984
    // 0x80248594: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248984;
    // 0x80248594: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80248598:
    // 0x80248598: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8024859C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802485A0: lui         $a2, 0x500
    ctx->r6 = S32(0X500 << 16);
    // 0x802485A4: lw          $t3, 0x4($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X4);
    // 0x802485A8: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x802485AC: ori         $a2, $a2, 0x400
    ctx->r6 = ctx->r6 | 0X400;
    // 0x802485B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802485B4: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x802485B8: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x802485BC: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x802485C0: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x802485C4: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x802485C8: sw          $t0, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r8;
    // 0x802485CC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x802485D0: lw          $a0, 0x71E4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X71E4);
    // 0x802485D4: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x802485D8: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x802485DC: jal         0x80248C50
    // 0x802485E0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80248C50(rdram, ctx);
        goto after_4;
    // 0x802485E0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_4:
    // 0x802485E4: b           L_80248984
    // 0x802485E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248984;
    // 0x802485E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802485EC:
    // 0x802485EC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x802485F0: lw          $t3, 0x0($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X0);
    // 0x802485F4: bne         $t3, $zero, L_80248970
    if (ctx->r11 != 0) {
        // 0x802485F8: nop
    
            goto L_80248970;
    }
    // 0x802485F8: nop

    // 0x802485FC: lhu         $t5, 0x4($t9)
    ctx->r13 = MEM_HU(ctx->r25, 0X4);
    // 0x80248600: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80248604: bne         $t5, $at, L_80248664
    if (ctx->r13 != ctx->r1) {
        // 0x80248608: nop
    
            goto L_80248664;
    }
    // 0x80248608: nop

    // 0x8024860C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80248610: lw          $t6, 0x8($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X8);
    // 0x80248614: lw          $t8, 0x10($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X10);
    // 0x80248618: addiu       $t0, $t8, 0x11
    ctx->r8 = ADD32(ctx->r24, 0X11);
    // 0x8024861C: slt         $at, $t0, $t6
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80248620: beq         $at, $zero, L_80248638
    if (ctx->r1 == 0) {
        // 0x80248624: nop
    
            goto L_80248638;
    }
    // 0x80248624: nop

    // 0x80248628: jal         0x80248994
    // 0x8024862C: sw          $zero, 0x0($t4)
    MEM_W(0X0, ctx->r12) = 0;
    func_80248994(rdram, ctx);
        goto after_5;
    // 0x8024862C: sw          $zero, 0x0($t4)
    MEM_W(0X0, ctx->r12) = 0;
    after_5:
    // 0x80248630: b           L_80248984
    // 0x80248634: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248984;
    // 0x80248634: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80248638:
    // 0x80248638: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8024863C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80248640: and         $t1, $t7, $at
    ctx->r9 = ctx->r15 & ctx->r1;
    // 0x80248644: bne         $t1, $zero, L_80248678
    if (ctx->r9 != 0) {
        // 0x80248648: nop
    
            goto L_80248678;
    }
    // 0x80248648: nop

    // 0x8024864C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80248650: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x80248654: jal         0x80248994
    // 0x80248658: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    func_80248994(rdram, ctx);
        goto after_6;
    // 0x80248658: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    after_6:
    // 0x8024865C: b           L_80248984
    // 0x80248660: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248984;
    // 0x80248660: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80248664:
    // 0x80248664: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80248668: lw          $t9, 0x4($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X4);
    // 0x8024866C: lw          $t8, 0xC($t5)
    ctx->r24 = MEM_W(ctx->r13, 0XC);
    // 0x80248670: addu        $t6, $t9, $t8
    ctx->r14 = ADD32(ctx->r25, ctx->r24);
    // 0x80248674: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
L_80248678:
    // 0x80248678: lui         $t0, 0xA500
    ctx->r8 = S32(0XA500 << 16);
    // 0x8024867C: lw          $t4, 0x510($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X510);
    // 0x80248680: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x80248684: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x80248688: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8024868C: and         $t1, $t7, $at
    ctx->r9 = ctx->r15 & ctx->r1;
    // 0x80248690: beq         $t1, $zero, L_802486A4
    if (ctx->r9 == 0) {
        // 0x80248694: lui         $at, 0x40
        ctx->r1 = S32(0X40 << 16);
            goto L_802486A4;
    }
    // 0x80248694: lui         $at, 0x40
    ctx->r1 = S32(0X40 << 16);
    // 0x80248698: and         $t2, $t7, $at
    ctx->r10 = ctx->r15 & ctx->r1;
    // 0x8024869C: bne         $t2, $zero, L_802486B8
    if (ctx->r10 != 0) {
        // 0x802486A0: nop
    
            goto L_802486B8;
    }
    // 0x802486A0: nop

L_802486A4:
    // 0x802486A4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x802486A8: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x802486AC: and         $t9, $t3, $at
    ctx->r25 = ctx->r11 & ctx->r1;
    // 0x802486B0: beq         $t9, $zero, L_8024873C
    if (ctx->r25 == 0) {
        // 0x802486B4: nop
    
            goto L_8024873C;
    }
    // 0x802486B4: nop

L_802486B8:
    // 0x802486B8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x802486BC: lw          $t6, 0x10($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X10);
    // 0x802486C0: sltiu       $at, $t6, 0x4
    ctx->r1 = ctx->r14 < 0X4 ? 1 : 0;
    // 0x802486C4: bne         $at, $zero, L_80248708
    if (ctx->r1 != 0) {
        // 0x802486C8: nop
    
            goto L_80248708;
    }
    // 0x802486C8: nop

    // 0x802486CC: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x802486D0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802486D4: lhu         $t0, 0x4($t5)
    ctx->r8 = MEM_HU(ctx->r13, 0X4);
    // 0x802486D8: bne         $t0, $at, L_802486F0
    if (ctx->r8 != ctx->r1) {
        // 0x802486DC: nop
    
            goto L_802486F0;
    }
    // 0x802486DC: nop

    // 0x802486E0: lw          $t4, 0x8($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X8);
    // 0x802486E4: slti        $at, $t4, 0x53
    ctx->r1 = SIGNED(ctx->r12) < 0X53 ? 1 : 0;
    // 0x802486E8: bne         $at, $zero, L_8024872C
    if (ctx->r1 != 0) {
        // 0x802486EC: nop
    
            goto L_8024872C;
    }
    // 0x802486EC: nop

L_802486F0:
    // 0x802486F0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x802486F4: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x802486F8: jal         0x80248994
    // 0x802486FC: sw          $t1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r9;
    func_80248994(rdram, ctx);
        goto after_7;
    // 0x802486FC: sw          $t1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r9;
    after_7:
    // 0x80248700: b           L_80248984
    // 0x80248704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248984;
    // 0x80248704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80248708:
    // 0x80248708: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8024870C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80248710: lw          $t3, 0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X10);
    // 0x80248714: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80248718: lw          $t8, 0x8($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X8);
    // 0x8024871C: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x80248720: addu        $t5, $t2, $t0
    ctx->r13 = ADD32(ctx->r10, ctx->r8);
    // 0x80248724: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x80248728: sw          $t6, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->r14;
L_8024872C:
    // 0x8024872C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80248730: lw          $t1, 0x10($t4)
    ctx->r9 = MEM_W(ctx->r12, 0X10);
    // 0x80248734: addiu       $t7, $t1, 0x1
    ctx->r15 = ADD32(ctx->r9, 0X1);
    // 0x80248738: sw          $t7, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r15;
L_8024873C:
    // 0x8024873C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80248740: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80248744: and         $t8, $t9, $at
    ctx->r24 = ctx->r25 & ctx->r1;
    // 0x80248748: beq         $t8, $zero, L_80248820
    if (ctx->r24 == 0) {
        // 0x8024874C: nop
    
            goto L_80248820;
    }
    // 0x8024874C: nop

    // 0x80248750: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80248754: addiu       $at, $zero, 0x57
    ctx->r1 = ADD32(0, 0X57);
    // 0x80248758: lw          $t2, 0x8($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X8);
    // 0x8024875C: beq         $t2, $at, L_80248774
    if (ctx->r10 == ctx->r1) {
        // 0x80248760: nop
    
            goto L_80248774;
    }
    // 0x80248760: nop

    // 0x80248764: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80248768: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x8024876C: jal         0x80248994
    // 0x80248770: sw          $t0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r8;
    func_80248994(rdram, ctx);
        goto after_8;
    // 0x80248770: sw          $t0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r8;
    after_8:
L_80248774:
    // 0x80248774: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80248778: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8024877C: lhu         $t1, 0x4($t5)
    ctx->r9 = MEM_HU(ctx->r13, 0X4);
    // 0x80248780: bne         $t1, $at, L_802487C0
    if (ctx->r9 != ctx->r1) {
        // 0x80248784: nop
    
            goto L_802487C0;
    }
    // 0x80248784: nop

    // 0x80248788: lhu         $t7, 0x6($t5)
    ctx->r15 = MEM_HU(ctx->r13, 0X6);
    // 0x8024878C: bne         $t7, $zero, L_802487C0
    if (ctx->r15 != 0) {
        // 0x80248790: nop
    
            goto L_802487C0;
    }
    // 0x80248790: nop

    // 0x80248794: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80248798: sh          $t4, 0x6($t5)
    MEM_H(0X6, ctx->r13) = ctx->r12;
    // 0x8024879C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x802487A0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x802487A4: sw          $t9, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r25;
    // 0x802487A8: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x802487AC: lw          $t2, 0x40($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X40);
    // 0x802487B0: lw          $t0, 0x48($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X48);
    // 0x802487B4: subu        $t6, $t2, $t0
    ctx->r14 = SUB32(ctx->r10, ctx->r8);
    // 0x802487B8: b           L_802487E8
    // 0x802487BC: sw          $t6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r14;
        goto L_802487E8;
    // 0x802487BC: sw          $t6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r14;
L_802487C0:
    // 0x802487C0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x802487C4: lui         $t7, 0xA460
    ctx->r15 = S32(0XA460 << 16);
    // 0x802487C8: sw          $t1, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r9;
    // 0x802487CC: lui         $t4, 0x8025
    ctx->r12 = S32(0X8025 << 16);
    // 0x802487D0: lw          $t4, 0x168C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X168C);
    // 0x802487D4: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x802487D8: ori         $at, $at, 0x401
    ctx->r1 = ctx->r1 | 0X401;
    // 0x802487DC: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x802487E0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802487E4: sw          $t5, 0x168C($at)
    MEM_W(0X168C, ctx->r1) = ctx->r13;
L_802487E8:
    // 0x802487E8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x802487EC: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802487F0: lw          $a0, 0x71E4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X71E4);
    // 0x802487F4: lw          $t8, 0xC($t9)
    ctx->r24 = MEM_W(ctx->r25, 0XC);
    // 0x802487F8: lw          $a3, 0x8($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X8);
    // 0x802487FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80248800: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x80248804: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80248808: jal         0x80248C50
    // 0x8024880C: lui         $a2, 0x500
    ctx->r6 = S32(0X500 << 16);
    func_80248C50(rdram, ctx);
        goto after_9;
    // 0x8024880C: lui         $a2, 0x500
    ctx->r6 = S32(0X500 << 16);
    after_9:
    // 0x80248810: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80248814: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248818: b           L_80248984
    // 0x8024881C: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
        goto L_80248984;
    // 0x8024881C: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
L_80248820:
    // 0x80248820: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80248824: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80248828: lw          $t3, 0x8($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X8);
    // 0x8024882C: bne         $t3, $at, L_802488B4
    if (ctx->r11 != ctx->r1) {
        // 0x80248830: nop
    
            goto L_802488B4;
    }
    // 0x80248830: nop

    // 0x80248834: lhu         $t1, 0x4($t6)
    ctx->r9 = MEM_HU(ctx->r14, 0X4);
    // 0x80248838: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8024883C: bne         $t1, $at, L_802488B4
    if (ctx->r9 != ctx->r1) {
        // 0x80248840: nop
    
            goto L_802488B4;
    }
    // 0x80248840: nop

    // 0x80248844: lhu         $t7, 0x6($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X6);
    // 0x80248848: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8024884C: bne         $t7, $at, L_802488B4
    if (ctx->r15 != ctx->r1) {
        // 0x80248850: nop
    
            goto L_802488B4;
    }
    // 0x80248850: nop

    // 0x80248854: addiu       $t4, $t6, 0x18
    ctx->r12 = ADD32(ctx->r14, 0X18);
    // 0x80248858: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x8024885C: lw          $t5, 0x28($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X28);
    // 0x80248860: bne         $t5, $zero, L_802488A8
    if (ctx->r13 != 0) {
        // 0x80248864: nop
    
            goto L_802488A8;
    }
    // 0x80248864: nop

    // 0x80248868: lw          $t9, 0x20($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X20);
    // 0x8024886C: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x80248870: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x80248874: lw          $t3, 0x8($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X8);
    // 0x80248878: lw          $t7, 0xC($t9)
    ctx->r15 = MEM_W(ctx->r25, 0XC);
    // 0x8024887C: or          $t0, $t8, $t2
    ctx->r8 = ctx->r24 | ctx->r10;
    // 0x80248880: or          $t1, $t0, $t3
    ctx->r9 = ctx->r8 | ctx->r11;
    // 0x80248884: or          $t4, $t7, $t1
    ctx->r12 = ctx->r15 | ctx->r9;
    // 0x80248888: beq         $t4, $zero, L_802488A8
    if (ctx->r12 == 0) {
        // 0x8024888C: nop
    
            goto L_802488A8;
    }
    // 0x8024888C: nop

    // 0x80248890: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80248894: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x80248898: jal         0x80248994
    // 0x8024889C: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    func_80248994(rdram, ctx);
        goto after_10;
    // 0x8024889C: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    after_10:
    // 0x802488A0: b           L_80248984
    // 0x802488A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248984;
    // 0x802488A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802488A8:
    // 0x802488A8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x802488AC: jal         0x80248A7C
    // 0x802488B0: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    func_80248A7C(rdram, ctx);
        goto after_11;
    // 0x802488B0: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    after_11:
L_802488B4:
    // 0x802488B4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x802488B8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802488BC: lw          $t0, 0x8($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X8);
    // 0x802488C0: addiu       $t3, $t0, 0x1
    ctx->r11 = ADD32(ctx->r8, 0X1);
    // 0x802488C4: sw          $t3, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r11;
    // 0x802488C8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x802488CC: and         $t7, $t9, $at
    ctx->r15 = ctx->r25 & ctx->r1;
    // 0x802488D0: beq         $t7, $zero, L_8024893C
    if (ctx->r15 == 0) {
        // 0x802488D4: nop
    
            goto L_8024893C;
    }
    // 0x802488D4: nop

    // 0x802488D8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x802488DC: lw          $t4, 0x8($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X8);
    // 0x802488E0: slti        $at, $t4, 0x55
    ctx->r1 = SIGNED(ctx->r12) < 0X55 ? 1 : 0;
    // 0x802488E4: bne         $at, $zero, L_80248904
    if (ctx->r1 != 0) {
        // 0x802488E8: nop
    
            goto L_80248904;
    }
    // 0x802488E8: nop

    // 0x802488EC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x802488F0: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x802488F4: jal         0x80248994
    // 0x802488F8: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    func_80248994(rdram, ctx);
        goto after_12;
    // 0x802488F8: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    after_12:
    // 0x802488FC: b           L_80248984
    // 0x80248900: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248984;
    // 0x80248900: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80248904:
    // 0x80248904: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80248908: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8024890C: lui         $a2, 0x500
    ctx->r6 = S32(0X500 << 16);
    // 0x80248910: lw          $t0, 0xC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XC);
    // 0x80248914: lw          $a3, 0x4($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X4);
    // 0x80248918: ori         $a2, $a2, 0x400
    ctx->r6 = ctx->r6 | 0X400;
    // 0x8024891C: lw          $a0, 0x71E4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X71E4);
    // 0x80248920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80248924: jal         0x80248C50
    // 0x80248928: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80248C50(rdram, ctx);
        goto after_13;
    // 0x80248928: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_13:
    // 0x8024892C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80248930: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248934: b           L_80248984
    // 0x80248938: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
        goto L_80248984;
    // 0x80248938: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
L_8024893C:
    // 0x8024893C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80248940: lw          $t9, 0x8($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X8);
    // 0x80248944: slti        $at, $t9, 0x55
    ctx->r1 = SIGNED(ctx->r25) < 0X55 ? 1 : 0;
    // 0x80248948: beq         $at, $zero, L_80248968
    if (ctx->r1 == 0) {
        // 0x8024894C: nop
    
            goto L_80248968;
    }
    // 0x8024894C: nop

    // 0x80248950: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80248954: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80248958: jal         0x80248994
    // 0x8024895C: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    func_80248994(rdram, ctx);
        goto after_14;
    // 0x8024895C: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    after_14:
    // 0x80248960: b           L_80248984
    // 0x80248964: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248984;
    // 0x80248964: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80248968:
    // 0x80248968: b           L_80248984
    // 0x8024896C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80248984;
    // 0x8024896C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80248970:
    // 0x80248970: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80248974: addiu       $t4, $zero, 0x4B
    ctx->r12 = ADD32(0, 0X4B);
    // 0x80248978: jal         0x80248994
    // 0x8024897C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    func_80248994(rdram, ctx);
        goto after_15;
    // 0x8024897C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    after_15:
    // 0x80248980: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80248984:
    // 0x80248984: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80248988: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8024898C: jr          $ra
    // 0x80248990: nop

    return;
    // 0x80248990: nop

;}
RECOMP_FUNC void func_8023DB20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023DB20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023DB24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023DB28: jal         0x80241760
    // 0x8023DB2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x8023DB2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023DB30: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8023DB34: lw          $t6, 0x1774($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1774);
    // 0x8023DB38: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023DB3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023DB40: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8023DB44: jal         0x80241780
    // 0x8023DB48: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_80241780(rdram, ctx);
        goto after_1;
    // 0x8023DB48: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_1:
    // 0x8023DB4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023DB50: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8023DB54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023DB58: jr          $ra
    // 0x8023DB5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8023DB5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802141C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802141C8: addiu       $sp, $sp, -0x170
    ctx->r29 = ADD32(ctx->r29, -0X170);
    // 0x802141CC: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x802141D0: lui         $s4, 0x8026
    ctx->r20 = S32(0X8026 << 16);
    // 0x802141D4: addiu       $s4, $s4, -0x3C68
    ctx->r20 = ADD32(ctx->r20, -0X3C68);
    // 0x802141D8: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x802141DC: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802141E0: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x802141E4: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x802141E8: sw          $fp, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r30;
    // 0x802141EC: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x802141F0: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x802141F4: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x802141F8: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x802141FC: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x80214200: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x80214204: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x80214208: sdc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X68, ctx->r29);
    // 0x8021420C: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x80214210: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x80214214: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x80214218: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x8021421C: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x80214220: sw          $a1, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r5;
    // 0x80214224: sw          $a2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r6;
    // 0x80214228: sw          $a3, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r7;
    // 0x8021422C: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80214230: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80214234: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80214238: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8021423C: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x80214240: lwc1        $f0, 0x174($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X174);
    // 0x80214244: lwc1        $f4, 0x180($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X180);
    // 0x80214248: bne         $v0, $zero, L_80214268
    if (ctx->r2 != 0) {
        // 0x8021424C: addiu       $a0, $sp, 0x174
        ctx->r4 = ADD32(ctx->r29, 0X174);
            goto L_80214268;
    }
    // 0x8021424C: addiu       $a0, $sp, 0x174
    ctx->r4 = ADD32(ctx->r29, 0X174);
    // 0x80214250: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80214254: addiu       $a0, $a0, 0x2FC8
    ctx->r4 = ADD32(ctx->r4, 0X2FC8);
    // 0x80214258: jal         0x80231A24
    // 0x8021425C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021425C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x80214260: b           L_80214C98
    // 0x80214264: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80214C98;
    // 0x80214264: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80214268:
    // 0x80214268: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8021426C: lwc1        $f2, 0x178($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X178);
    // 0x80214270: addiu       $a1, $sp, 0x178
    ctx->r5 = ADD32(ctx->r29, 0X178);
    // 0x80214274: addiu       $a2, $sp, 0x180
    ctx->r6 = ADD32(ctx->r29, 0X180);
    // 0x80214278: bc1f        L_802142E8
    if (!c1cs) {
        // 0x8021427C: addiu       $a3, $sp, 0x184
        ctx->r7 = ADD32(ctx->r29, 0X184);
            goto L_802142E8;
    }
    // 0x8021427C: addiu       $a3, $sp, 0x184
    ctx->r7 = ADD32(ctx->r29, 0X184);
    // 0x80214280: lwc1        $f6, 0x184($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X184);
    // 0x80214284: lwc1        $f8, 0x17C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x80214288: lwc1        $f10, 0x188($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X188);
    // 0x8021428C: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x80214290: nop

    // 0x80214294: bc1fl       L_802142EC
    if (!c1cs) {
        // 0x80214298: lwc1        $f4, 0x1C($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
            goto L_802142EC;
    }
    goto skip_0;
    // 0x80214298: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    skip_0:
    // 0x8021429C: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x802142A0: nop

    // 0x802142A4: bc1fl       L_802142EC
    if (!c1cs) {
        // 0x802142A8: lwc1        $f4, 0x1C($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
            goto L_802142EC;
    }
    goto skip_1;
    // 0x802142A8: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    skip_1:
    // 0x802142AC: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x802142B0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802142B4: lwc1        $f8, 0x188($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X188);
    // 0x802142B8: c.eq.s      $f10, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f10.fl == ctx->f30.fl;
    // 0x802142BC: nop

    // 0x802142C0: bc1t        L_802142DC
    if (c1cs) {
        // 0x802142C4: nop
    
            goto L_802142DC;
    }
    // 0x802142C4: nop

    // 0x802142C8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802142CC: lwc1        $f4, 0x3100($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3100);
    // 0x802142D0: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802142D4: b           L_802142E8
    // 0x802142D8: swc1        $f6, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f6.u32l;
        goto L_802142E8;
    // 0x802142D8: swc1        $f6, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f6.u32l;
L_802142DC:
    // 0x802142DC: lwc1        $f28, 0x3104($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X3104);
    // 0x802142E0: add.s       $f10, $f8, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f28.fl;
    // 0x802142E4: swc1        $f10, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f10.u32l;
L_802142E8:
    // 0x802142E8: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
L_802142EC:
    // 0x802142EC: lwc1        $f8, 0x17C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x802142F0: lwc1        $f12, 0x178($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X178);
    // 0x802142F4: swc1        $f4, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f4.u32l;
    // 0x802142F8: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x802142FC: lwc1        $f4, 0x188($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X188);
    // 0x80214300: lwc1        $f14, 0x180($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X180);
    // 0x80214304: swc1        $f6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f6.u32l;
    // 0x80214308: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8021430C: sub.s       $f24, $f4, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80214310: lwc1        $f16, 0x184($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X184);
    // 0x80214314: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80214318: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021431C: lwc1        $f26, 0x174($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X174);
    // 0x80214320: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80214324: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80214328: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8021432C: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x80214330: lwc1        $f28, 0x3108($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X3108);
    // 0x80214334: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80214338: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021433C: sw          $v0, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r2;
    // 0x80214340: swc1        $f12, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f12.u32l;
    // 0x80214344: swc1        $f14, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f14.u32l;
    // 0x80214348: sub.s       $f22, $f16, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x8021434C: swc1        $f16, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f16.u32l;
    // 0x80214350: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x80214354: jal         0x80218600
    // 0x80214358: sub.s       $f20, $f14, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f14.fl - ctx->f26.fl;
    func_80218600(rdram, ctx);
        goto after_1;
    // 0x80214358: sub.s       $f20, $f14, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f14.fl - ctx->f26.fl;
    after_1:
    // 0x8021435C: lw          $s0, 0x164($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X164);
    // 0x80214360: lwc1        $f6, 0x174($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X174);
    // 0x80214364: lwc1        $f12, 0xC8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80214368: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8021436C: lwc1        $f14, 0xC4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80214370: lwc1        $f16, 0xC0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80214374: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x80214378: lwc1        $f10, 0x110($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X110);
    // 0x8021437C: bc1fl       L_80214398
    if (!c1cs) {
        // 0x80214380: lwc1        $f10, 0x180($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X180);
            goto L_80214398;
    }
    goto skip_2;
    // 0x80214380: lwc1        $f10, 0x180($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X180);
    skip_2:
    // 0x80214384: mul.s       $f4, $f28, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f28.fl, ctx->f10.fl);
    // 0x80214388: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8021438C: swc1        $f8, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f8.u32l;
    // 0x80214390: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80214394: lwc1        $f10, 0x180($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X180);
L_80214398:
    // 0x80214398: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x8021439C: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x802143A0: nop

    // 0x802143A4: bc1fl       L_802143BC
    if (!c1cs) {
        // 0x802143A8: lwc1        $f0, 0x10($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
            goto L_802143BC;
    }
    goto skip_3;
    // 0x802143A8: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    skip_3:
    // 0x802143AC: mul.s       $f4, $f28, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f28.fl, ctx->f6.fl);
    // 0x802143B0: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x802143B4: swc1        $f8, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f8.u32l;
    // 0x802143B8: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
L_802143BC:
    // 0x802143BC: lwc1        $f6, 0x178($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X178);
    // 0x802143C0: lwc1        $f10, 0x10C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802143C4: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x802143C8: nop

    // 0x802143CC: bc1fl       L_802143E8
    if (!c1cs) {
        // 0x802143D0: lwc1        $f10, 0x184($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X184);
            goto L_802143E8;
    }
    goto skip_4;
    // 0x802143D0: lwc1        $f10, 0x184($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X184);
    skip_4:
    // 0x802143D4: mul.s       $f4, $f28, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f28.fl, ctx->f10.fl);
    // 0x802143D8: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x802143DC: swc1        $f8, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f8.u32l;
    // 0x802143E0: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802143E4: lwc1        $f10, 0x184($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X184);
L_802143E8:
    // 0x802143E8: lwc1        $f6, 0x10C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802143EC: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x802143F0: nop

    // 0x802143F4: bc1fl       L_8021440C
    if (!c1cs) {
        // 0x802143F8: lwc1        $f0, 0x174($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X174);
            goto L_8021440C;
    }
    goto skip_5;
    // 0x802143F8: lwc1        $f0, 0x174($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X174);
    skip_5:
    // 0x802143FC: mul.s       $f4, $f28, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f28.fl, ctx->f6.fl);
    // 0x80214400: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80214404: swc1        $f8, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f8.u32l;
    // 0x80214408: lwc1        $f0, 0x174($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X174);
L_8021440C:
    // 0x8021440C: lwc1        $f2, 0x178($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X178);
    // 0x80214410: c.eq.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl == ctx->f0.fl;
    // 0x80214414: nop

    // 0x80214418: bc1tl       L_80214454
    if (c1cs) {
        // 0x8021441C: c.eq.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
            goto L_80214454;
    }
    goto skip_6;
    // 0x8021441C: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
    skip_6:
    // 0x80214420: c.eq.s      $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f20.fl == ctx->f30.fl;
    // 0x80214424: nop

    // 0x80214428: bc1tl       L_80214454
    if (c1cs) {
        // 0x8021442C: c.eq.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
            goto L_80214454;
    }
    goto skip_7;
    // 0x8021442C: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
    skip_7:
    // 0x80214430: sub.s       $f10, $f0, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f26.fl;
    // 0x80214434: lwc1        $f6, 0x17C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x80214438: lwc1        $f2, 0x178($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X178);
    // 0x8021443C: div.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80214440: mul.s       $f8, $f24, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f24.fl, ctx->f4.fl);
    // 0x80214444: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80214448: b           L_80214488
    // 0x8021444C: swc1        $f10, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f10.u32l;
        goto L_80214488;
    // 0x8021444C: swc1        $f10, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f10.u32l;
    // 0x80214450: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
L_80214454:
    // 0x80214454: nop

    // 0x80214458: bc1tl       L_8021448C
    if (c1cs) {
        // 0x8021445C: lwc1        $f8, 0x180($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X180);
            goto L_8021448C;
    }
    goto skip_8;
    // 0x8021445C: lwc1        $f8, 0x180($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X180);
    skip_8:
    // 0x80214460: c.eq.s      $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f22.fl == ctx->f30.fl;
    // 0x80214464: nop

    // 0x80214468: bc1tl       L_8021448C
    if (c1cs) {
        // 0x8021446C: lwc1        $f8, 0x180($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X180);
            goto L_8021448C;
    }
    goto skip_9;
    // 0x8021446C: lwc1        $f8, 0x180($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X180);
    skip_9:
    // 0x80214470: sub.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80214474: lwc1        $f4, 0x17C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x80214478: div.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
    // 0x8021447C: mul.s       $f10, $f24, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f24.fl, ctx->f8.fl);
    // 0x80214480: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80214484: swc1        $f6, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f6.u32l;
L_80214488:
    // 0x80214488: lwc1        $f8, 0x180($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X180);
L_8021448C:
    // 0x8021448C: lwc1        $f6, 0x184($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X184);
    // 0x80214490: c.eq.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl == ctx->f8.fl;
    // 0x80214494: nop

    // 0x80214498: bc1tl       L_802144D0
    if (c1cs) {
        // 0x8021449C: c.eq.s      $f16, $f6
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl == ctx->f6.fl;
            goto L_802144D0;
    }
    goto skip_10;
    // 0x8021449C: c.eq.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl == ctx->f6.fl;
    skip_10:
    // 0x802144A0: c.eq.s      $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f20.fl == ctx->f30.fl;
    // 0x802144A4: nop

    // 0x802144A8: bc1tl       L_802144D0
    if (c1cs) {
        // 0x802144AC: c.eq.s      $f16, $f6
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl == ctx->f6.fl;
            goto L_802144D0;
    }
    goto skip_11;
    // 0x802144AC: c.eq.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl == ctx->f6.fl;
    skip_11:
    // 0x802144B0: sub.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x802144B4: lwc1        $f4, 0x188($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X188);
    // 0x802144B8: div.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x802144BC: mul.s       $f8, $f24, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f24.fl, ctx->f6.fl);
    // 0x802144C0: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802144C4: b           L_80214504
    // 0x802144C8: swc1        $f10, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f10.u32l;
        goto L_80214504;
    // 0x802144C8: swc1        $f10, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f10.u32l;
    // 0x802144CC: c.eq.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl == ctx->f6.fl;
L_802144D0:
    // 0x802144D0: nop

    // 0x802144D4: bc1tl       L_80214508
    if (c1cs) {
        // 0x802144D8: lwc1        $f10, 0x180($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X180);
            goto L_80214508;
    }
    goto skip_12;
    // 0x802144D8: lwc1        $f10, 0x180($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X180);
    skip_12:
    // 0x802144DC: c.eq.s      $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f22.fl == ctx->f30.fl;
    // 0x802144E0: nop

    // 0x802144E4: bc1tl       L_80214508
    if (c1cs) {
        // 0x802144E8: lwc1        $f10, 0x180($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X180);
            goto L_80214508;
    }
    goto skip_13;
    // 0x802144E8: lwc1        $f10, 0x180($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X180);
    skip_13:
    // 0x802144EC: sub.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x802144F0: lwc1        $f4, 0x188($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X188);
    // 0x802144F4: div.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f22.fl);
    // 0x802144F8: mul.s       $f6, $f24, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f10.fl);
    // 0x802144FC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80214500: swc1        $f8, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f8.u32l;
L_80214504:
    // 0x80214504: lwc1        $f10, 0x180($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X180);
L_80214508:
    // 0x80214508: lwc1        $f4, 0x184($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X184);
    // 0x8021450C: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x80214510: nop

    // 0x80214514: bc1fl       L_802145F8
    if (!c1cs) {
        // 0x80214518: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_802145F8;
    }
    goto skip_14;
    // 0x80214518: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_14:
    // 0x8021451C: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x80214520: lwc1        $f6, 0x17C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x80214524: lwc1        $f8, 0x188($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X188);
    // 0x80214528: bc1fl       L_802145F8
    if (!c1cs) {
        // 0x8021452C: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_802145F8;
    }
    goto skip_15;
    // 0x8021452C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_15:
    // 0x80214530: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x80214534: nop

    // 0x80214538: bc1fl       L_802145F8
    if (!c1cs) {
        // 0x8021453C: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_802145F8;
    }
    goto skip_16;
    // 0x8021453C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_16:
    // 0x80214540: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80214544: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80214548: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8021454C: jal         0x80212E24
    // 0x80214550: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80212E24(rdram, ctx);
        goto after_2;
    // 0x80214550: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80214554: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80214558: bne         $v0, $at, L_80214580
    if (ctx->r2 != ctx->r1) {
        // 0x8021455C: lui         $t3, 0x8026
        ctx->r11 = S32(0X8026 << 16);
            goto L_80214580;
    }
    // 0x8021455C: lui         $t3, 0x8026
    ctx->r11 = S32(0X8026 << 16);
    // 0x80214560: lw          $t0, 0x18C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18C);
    // 0x80214564: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80214568: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x8021456C: lw          $t1, 0x190($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X190);
    // 0x80214570: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x80214574: lw          $t2, 0x194($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X194);
    // 0x80214578: b           L_80214C98
    // 0x8021457C: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
        goto L_80214C98;
    // 0x8021457C: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
L_80214580:
    // 0x80214580: lw          $t3, -0x3C64($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3C64);
    // 0x80214584: lui         $t4, 0x8026
    ctx->r12 = S32(0X8026 << 16);
    // 0x80214588: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x8021458C: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
    // 0x80214590: lw          $t4, -0x3C60($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3C60);
    // 0x80214594: addiu       $v1, $v1, -0x3C5C
    ctx->r3 = ADD32(ctx->r3, -0X3C5C);
    // 0x80214598: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021459C: swc1        $f30, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f30.u32l;
    // 0x802145A0: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x802145A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802145A8: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x802145AC: swc1        $f30, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f30.u32l;
    // 0x802145B0: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x802145B4: lui         $t0, 0x8026
    ctx->r8 = S32(0X8026 << 16);
    // 0x802145B8: swc1        $f30, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f30.u32l;
    // 0x802145BC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x802145C0: swc1        $f10, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f10.u32l;
    // 0x802145C4: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x802145C8: lw          $t8, -0x3C64($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C64);
    // 0x802145CC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x802145D0: lw          $t1, 0x190($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X190);
    // 0x802145D4: lw          $t0, -0x3C60($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3C60);
    // 0x802145D8: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x802145DC: lw          $t3, 0x194($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X194);
    // 0x802145E0: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x802145E4: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x802145E8: lw          $s0, 0x164($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X164);
    // 0x802145EC: lwc1        $f0, 0x174($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X174);
    // 0x802145F0: lwc1        $f2, 0x178($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X178);
    // 0x802145F4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_802145F8:
    // 0x802145F8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x802145FC: addiu       $t4, $sp, 0x154
    ctx->r12 = ADD32(ctx->r29, 0X154);
    // 0x80214600: addiu       $t5, $sp, 0x150
    ctx->r13 = ADD32(ctx->r29, 0X150);
    // 0x80214604: addiu       $t6, $sp, 0x14C
    ctx->r14 = ADD32(ctx->r29, 0X14C);
    // 0x80214608: addiu       $t7, $sp, 0x13E
    ctx->r15 = ADD32(ctx->r29, 0X13E);
    // 0x8021460C: addiu       $t8, $sp, 0x13A
    ctx->r24 = ADD32(ctx->r29, 0X13A);
    // 0x80214610: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80214614: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80214618: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8021461C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80214620: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80214624: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214628: lw          $a3, 0x17C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X17C);
    // 0x8021462C: jal         0x802160EC
    // 0x80214630: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_802160EC(rdram, ctx);
        goto after_3;
    // 0x80214630: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_3:
    // 0x80214634: addiu       $t9, $sp, 0x148
    ctx->r25 = ADD32(ctx->r29, 0X148);
    // 0x80214638: addiu       $t0, $sp, 0x144
    ctx->r8 = ADD32(ctx->r29, 0X144);
    // 0x8021463C: addiu       $t1, $sp, 0x140
    ctx->r9 = ADD32(ctx->r29, 0X140);
    // 0x80214640: addiu       $t2, $sp, 0x13C
    ctx->r10 = ADD32(ctx->r29, 0X13C);
    // 0x80214644: addiu       $t3, $sp, 0x138
    ctx->r11 = ADD32(ctx->r29, 0X138);
    // 0x80214648: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x8021464C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80214650: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80214654: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80214658: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8021465C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80214660: lw          $a0, 0x164($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X164);
    // 0x80214664: lw          $a1, 0x180($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X180);
    // 0x80214668: lw          $a2, 0x184($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X184);
    // 0x8021466C: lw          $a3, 0x188($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X188);
    // 0x80214670: jal         0x802160EC
    // 0x80214674: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_802160EC(rdram, ctx);
        goto after_4;
    // 0x80214674: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_4:
    // 0x80214678: bne         $s0, $zero, L_8021469C
    if (ctx->r16 != 0) {
        // 0x8021467C: andi        $t4, $v0, 0xFF
        ctx->r12 = ctx->r2 & 0XFF;
            goto L_8021469C;
    }
    // 0x8021467C: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x80214680: bne         $t4, $zero, L_8021469C
    if (ctx->r12 != 0) {
        // 0x80214684: lw          $t5, 0x18C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X18C);
            goto L_8021469C;
    }
    // 0x80214684: lw          $t5, 0x18C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18C);
    // 0x80214688: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x8021468C: lw          $t6, 0x190($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X190);
    // 0x80214690: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80214694: b           L_80214C98
    // 0x80214698: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
        goto L_80214C98;
    // 0x80214698: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
L_8021469C:
    // 0x8021469C: lhu         $t7, 0x13C($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X13C);
    // 0x802146A0: lhu         $t8, 0x13E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X13E);
    // 0x802146A4: bnel        $t7, $t8, L_802146D8
    if (ctx->r15 != ctx->r24) {
        // 0x802146A8: sb          $zero, 0xB3($sp)
        MEM_B(0XB3, ctx->r29) = 0;
            goto L_802146D8;
    }
    goto skip_17;
    // 0x802146A8: sb          $zero, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = 0;
    skip_17:
    // 0x802146AC: lhu         $t0, 0x138($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X138);
    // 0x802146B0: lhu         $t1, 0x13A($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X13A);
    // 0x802146B4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802146B8: sb          $t9, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = ctx->r25;
    // 0x802146BC: bne         $t0, $t1, L_802146CC
    if (ctx->r8 != ctx->r9) {
        // 0x802146C0: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_802146CC;
    }
    // 0x802146C0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802146C4: b           L_802146DC
    // 0x802146C8: sb          $t2, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = ctx->r10;
        goto L_802146DC;
    // 0x802146C8: sb          $t2, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = ctx->r10;
L_802146CC:
    // 0x802146CC: b           L_802146DC
    // 0x802146D0: sb          $zero, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = 0;
        goto L_802146DC;
    // 0x802146D0: sb          $zero, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = 0;
    // 0x802146D4: sb          $zero, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = 0;
L_802146D8:
    // 0x802146D8: sb          $zero, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = 0;
L_802146DC:
    // 0x802146DC: lbu         $t3, 0xB3($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XB3);
    // 0x802146E0: lwc1        $f14, 0x174($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X174);
    // 0x802146E4: lwc1        $f4, 0x180($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X180);
    // 0x802146E8: beq         $t3, $zero, L_80214740
    if (ctx->r11 == 0) {
        // 0x802146EC: lwc1        $f8, 0x184($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X184);
            goto L_80214740;
    }
    // 0x802146EC: lwc1        $f8, 0x184($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X184);
    // 0x802146F0: lw          $t4, 0x164($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X164);
    // 0x802146F4: lwc1        $f4, 0x174($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X174);
    // 0x802146F8: lwc1        $f10, 0x110($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X110);
    // 0x802146FC: lwc1        $f8, 0x0($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80214700: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80214704: div.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80214708: lwc1        $f6, 0x178($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X178);
    // 0x8021470C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80214710: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x80214714: lwc1        $f8, 0x10C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x80214718: sw          $v0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r2;
    // 0x8021471C: lwc1        $f10, 0x4($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80214720: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80214724: div.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80214728: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8021472C: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x80214730: nop

    // 0x80214734: sw          $t8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r24;
    // 0x80214738: b           L_80214840
    // 0x8021473C: sw          $t8, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r24;
        goto L_80214840;
    // 0x8021473C: sw          $t8, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r24;
L_80214740:
    // 0x80214740: c.lt.s      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.fl < ctx->f14.fl;
    // 0x80214744: lwc1        $f2, 0x178($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X178);
    // 0x80214748: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x8021474C: lw          $t9, 0x164($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X164);
    // 0x80214750: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x80214754: bc1f        L_80214764
    if (!c1cs) {
        // 0x80214758: mov.s       $f18, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.fl = ctx->f2.fl;
            goto L_80214764;
    }
    // 0x80214758: mov.s       $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.fl = ctx->f2.fl;
    // 0x8021475C: b           L_80214768
    // 0x80214760: mov.s       $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = ctx->f4.fl;
        goto L_80214768;
    // 0x80214760: mov.s       $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = ctx->f4.fl;
L_80214764:
    // 0x80214764: lwc1        $f12, 0x180($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X180);
L_80214768:
    // 0x80214768: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x8021476C: nop

    // 0x80214770: bc1fl       L_80214784
    if (!c1cs) {
        // 0x80214774: lwc1        $f16, 0x184($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X184);
            goto L_80214784;
    }
    goto skip_18;
    // 0x80214774: lwc1        $f16, 0x184($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X184);
    skip_18:
    // 0x80214778: b           L_80214784
    // 0x8021477C: mov.s       $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = ctx->f8.fl;
        goto L_80214784;
    // 0x8021477C: mov.s       $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = ctx->f8.fl;
    // 0x80214780: lwc1        $f16, 0x184($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X184);
L_80214784:
    // 0x80214784: lwc1        $f0, 0x0($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80214788: lwc1        $f10, 0x110($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X110);
    // 0x8021478C: lw          $t7, 0x164($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X164);
    // 0x80214790: sub.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x80214794: div.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80214798: sub.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8021479C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802147A0: div.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802147A4: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x802147A8: lwc1        $f10, 0x10C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802147AC: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802147B0: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x802147B4: nop

    // 0x802147B8: sw          $t2, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r10;
    // 0x802147BC: lwc1        $f2, 0x4($t9)
    ctx->f2.u32l = MEM_W(ctx->r25, 0X4);
    // 0x802147C0: sub.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x802147C4: div.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802147C8: sub.s       $f6, $f16, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x802147CC: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802147D0: div.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802147D4: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x802147D8: nop

    // 0x802147DC: sw          $t5, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r13;
    // 0x802147E0: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802147E4: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x802147E8: bgez        $v0, L_802147F4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802147EC: sw          $t4, 0x124($sp)
        MEM_W(0X124, ctx->r29) = ctx->r12;
            goto L_802147F4;
    }
    // 0x802147EC: sw          $t4, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r12;
    // 0x802147F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802147F4:
    // 0x802147F4: lbu         $v1, 0x18($t7)
    ctx->r3 = MEM_BU(ctx->r15, 0X18);
    // 0x802147F8: lw          $t8, 0x12C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X12C);
    // 0x802147FC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80214800: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80214804: beql        $at, $zero, L_80214814
    if (ctx->r1 == 0) {
        // 0x80214808: lw          $t0, 0x128($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X128);
            goto L_80214814;
    }
    goto skip_19;
    // 0x80214808: lw          $t0, 0x128($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X128);
    skip_19:
    // 0x8021480C: sw          $v1, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r3;
    // 0x80214810: lw          $t0, 0x128($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X128);
L_80214814:
    // 0x80214814: bgezl       $t0, L_80214824
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80214818: lw          $t1, 0x164($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X164);
            goto L_80214824;
    }
    goto skip_20;
    // 0x80214818: lw          $t1, 0x164($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X164);
    skip_20:
    // 0x8021481C: sw          $zero, 0x128($sp)
    MEM_W(0X128, ctx->r29) = 0;
    // 0x80214820: lw          $t1, 0x164($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X164);
L_80214824:
    // 0x80214824: lw          $t2, 0x124($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X124);
    // 0x80214828: lbu         $v1, 0x19($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X19);
    // 0x8021482C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80214830: slt         $at, $v1, $t2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80214834: beql        $at, $zero, L_80214844
    if (ctx->r1 == 0) {
        // 0x80214838: lw          $t9, 0x12C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X12C);
            goto L_80214844;
    }
    goto skip_21;
    // 0x80214838: lw          $t9, 0x12C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X12C);
    skip_21:
    // 0x8021483C: sw          $v1, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r3;
L_80214840:
    // 0x80214840: lw          $t9, 0x12C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X12C);
L_80214844:
    // 0x80214844: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x80214848: sh          $v0, 0x16E($sp)
    MEM_H(0X16E, ctx->r29) = ctx->r2;
    // 0x8021484C: slt         $at, $t9, $t3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80214850: bne         $at, $zero, L_80214C60
    if (ctx->r1 != 0) {
        // 0x80214854: lhu         $t5, 0x12A($sp)
        ctx->r13 = MEM_HU(ctx->r29, 0X12A);
            goto L_80214C60;
    }
    // 0x80214854: lhu         $t5, 0x12A($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X12A);
    // 0x80214858: lui         $fp, 0x8028
    ctx->r30 = S32(0X8028 << 16);
    // 0x8021485C: lui         $s5, 0x8026
    ctx->r21 = S32(0X8026 << 16);
    // 0x80214860: addiu       $s5, $s5, -0x3C6C
    ctx->r21 = ADD32(ctx->r21, -0X3C6C);
    // 0x80214864: addiu       $fp, $fp, 0xBC0
    ctx->r30 = ADD32(ctx->r30, 0XBC0);
    // 0x80214868: sw          $t5, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r13;
    // 0x8021486C: addiu       $s7, $zero, 0xC
    ctx->r23 = ADD32(0, 0XC);
    // 0x80214870: addiu       $s6, $sp, 0x108
    ctx->r22 = ADD32(ctx->r29, 0X108);
L_80214874:
    // 0x80214874: lw          $t4, 0x124($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X124);
    // 0x80214878: lw          $t7, 0xA8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA8);
    // 0x8021487C: lw          $t6, 0x128($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X128);
    // 0x80214880: lhu         $t8, 0x16E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X16E);
    // 0x80214884: slt         $at, $t4, $t7
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80214888: bne         $at, $zero, L_80214C44
    if (ctx->r1 != 0) {
        // 0x8021488C: sh          $t6, 0x16C($sp)
        MEM_H(0X16C, ctx->r29) = ctx->r14;
            goto L_80214C44;
    }
    // 0x8021488C: sh          $t6, 0x16C($sp)
    MEM_H(0X16C, ctx->r29) = ctx->r14;
    // 0x80214890: andi        $v1, $t6, 0xFFFF
    ctx->r3 = ctx->r14 & 0XFFFF;
    // 0x80214894: sw          $t8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r24;
L_80214898:
    // 0x80214898: lw          $t0, 0x164($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X164);
    // 0x8021489C: lw          $t9, 0xA0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA0);
    // 0x802148A0: lbu         $t1, 0x18($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X18);
    // 0x802148A4: lw          $t5, 0x28($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X28);
    // 0x802148A8: multu       $v1, $t1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802148AC: mflo        $t2
    ctx->r10 = lo;
    // 0x802148B0: addu        $v0, $t2, $t9
    ctx->r2 = ADD32(ctx->r10, ctx->r25);
    // 0x802148B4: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x802148B8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x802148BC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x802148C0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x802148C4: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x802148C8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x802148CC: addu        $s2, $t5, $t4
    ctx->r18 = ADD32(ctx->r13, ctx->r12);
    // 0x802148D0: beql        $s2, $zero, L_80214C2C
    if (ctx->r18 == 0) {
        // 0x802148D4: lhu         $t6, 0x16C($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0X16C);
            goto L_80214C2C;
    }
    goto skip_22;
    // 0x802148D4: lhu         $t6, 0x16C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X16C);
    skip_22:
    // 0x802148D8: lw          $t7, 0x40($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X40);
    // 0x802148DC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802148E0: lwc1        $f6, 0x174($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X174);
    // 0x802148E4: beql        $t7, $zero, L_80214C2C
    if (ctx->r15 == 0) {
        // 0x802148E8: lhu         $t6, 0x16C($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0X16C);
            goto L_80214C2C;
    }
    goto skip_23;
    // 0x802148E8: lhu         $t6, 0x16C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X16C);
    skip_23:
    // 0x802148EC: lwc1        $f4, 0x17C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x802148F0: lwc1        $f8, 0x180($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X180);
    // 0x802148F4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802148F8: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    // 0x802148FC: lwc1        $f4, 0x110($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80214900: lwc1        $f10, 0x178($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X178);
    // 0x80214904: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    // 0x80214908: mul.s       $f2, $f20, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x8021490C: lwc1        $f8, 0x10C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x80214910: swc1        $f6, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f6.u32l;
    // 0x80214914: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    // 0x80214918: lwc1        $f10, 0x188($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X188);
    // 0x8021491C: lwc1        $f6, 0x184($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X184);
    // 0x80214920: mul.s       $f14, $f20, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x80214924: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x80214928: swc1        $f6, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f6.u32l;
    // 0x8021492C: lwc1        $f0, 0x30($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X30);
    // 0x80214930: lwc1        $f12, 0x34($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X34);
    // 0x80214934: lbu         $t6, 0xB3($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XB3);
    // 0x80214938: sub.s       $f28, $f0, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f28.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8021493C: add.s       $f30, $f0, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x80214940: add.s       $f16, $f12, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x80214944: bne         $t6, $zero, L_80214998
    if (ctx->r14 != 0) {
        // 0x80214948: sub.s       $f18, $f12, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f14.fl;
            goto L_80214998;
    }
    // 0x80214948: sub.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x8021494C: addiu       $t8, $sp, 0xE8
    ctx->r24 = ADD32(ctx->r29, 0XE8);
    // 0x80214950: addiu       $t1, $sp, 0xE0
    ctx->r9 = ADD32(ctx->r29, 0XE0);
    // 0x80214954: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80214958: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8021495C: addiu       $a0, $sp, 0xF4
    ctx->r4 = ADD32(ctx->r29, 0XF4);
    // 0x80214960: addiu       $a1, $sp, 0xEC
    ctx->r5 = ADD32(ctx->r29, 0XEC);
    // 0x80214964: addiu       $a2, $sp, 0xE4
    ctx->r6 = ADD32(ctx->r29, 0XE4);
    // 0x80214968: addiu       $a3, $sp, 0xF0
    ctx->r7 = ADD32(ctx->r29, 0XF0);
    // 0x8021496C: swc1        $f28, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f28.u32l;
    // 0x80214970: swc1        $f30, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f30.u32l;
    // 0x80214974: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x80214978: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x8021497C: swc1        $f16, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f16.u32l;
    // 0x80214980: jal         0x80218884
    // 0x80214984: swc1        $f18, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f18.u32l;
    func_80218884(rdram, ctx);
        goto after_5;
    // 0x80214984: swc1        $f18, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x80214988: lwc1        $f16, 0xF8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x8021498C: lwc1        $f18, 0xFC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x80214990: lwc1        $f0, 0x30($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X30);
    // 0x80214994: lwc1        $f12, 0x34($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X34);
L_80214998:
    // 0x80214998: lwc1        $f6, 0xF4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x8021499C: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x802149A0: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x802149A4: lwc1        $f8, 0xE8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x802149A8: c.eq.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl == ctx->f10.fl;
    // 0x802149AC: lbu         $t2, 0xB2($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XB2);
    // 0x802149B0: sub.s       $f20, $f6, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x802149B4: sub.s       $f22, $f10, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x802149B8: sub.s       $f24, $f4, $f12
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f24.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x802149BC: bc1f        L_802149E8
    if (!c1cs) {
        // 0x802149C0: sub.s       $f26, $f8, $f12
        CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f26.fl = ctx->f8.fl - ctx->f12.fl;
            goto L_802149E8;
    }
    // 0x802149C0: sub.s       $f26, $f8, $f12
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f26.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x802149C4: c.eq.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl == ctx->f8.fl;
    // 0x802149C8: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x802149CC: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802149D0: bc1f        L_802149E8
    if (!c1cs) {
        // 0x802149D4: nop
    
            goto L_802149E8;
    }
    // 0x802149D4: nop

    // 0x802149D8: c.eq.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl == ctx->f10.fl;
    // 0x802149DC: nop

    // 0x802149E0: bc1tl       L_80214C2C
    if (c1cs) {
        // 0x802149E4: lhu         $t6, 0x16C($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0X16C);
            goto L_80214C2C;
    }
    goto skip_24;
    // 0x802149E4: lhu         $t6, 0x16C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X16C);
    skip_24:
L_802149E8:
    // 0x802149E8: bne         $t2, $zero, L_80214A3C
    if (ctx->r10 != 0) {
        // 0x802149EC: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80214A3C;
    }
    // 0x802149EC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802149F0: lwc1        $f4, 0x154($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X154);
    // 0x802149F4: lwc1        $f8, 0x150($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X150);
    // 0x802149F8: lwc1        $f6, 0x148($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X148);
    // 0x802149FC: lwc1        $f10, 0x144($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X144);
    // 0x80214A00: lwc1        $f12, 0xF4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x80214A04: lwc1        $f14, 0xEC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80214A08: lw          $a2, 0xF0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XF0);
    // 0x80214A0C: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x80214A10: swc1        $f28, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f28.u32l;
    // 0x80214A14: swc1        $f30, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f30.u32l;
    // 0x80214A18: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x80214A1C: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80214A20: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80214A24: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80214A28: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80214A2C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x80214A30: jal         0x80218EAC
    // 0x80214A34: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_80218EAC(rdram, ctx);
        goto after_6;
    // 0x80214A34: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x80214A38: sh          $v0, 0x138($sp)
    MEM_H(0X138, ctx->r29) = ctx->r2;
L_80214A3C:
    // 0x80214A3C: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
    // 0x80214A40: lhu         $v1, 0x14($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X14);
    // 0x80214A44: blezl       $v1, L_80214C2C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80214A48: lhu         $t6, 0x16C($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0X16C);
            goto L_80214C2C;
    }
    goto skip_25;
    // 0x80214A48: lhu         $t6, 0x16C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X16C);
    skip_25:
L_80214A4C:
    // 0x80214A4C: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x80214A50: sll         $t3, $s3, 5
    ctx->r11 = S32(ctx->r19 << 5);
    // 0x80214A54: lhu         $t0, 0x138($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X138);
    // 0x80214A58: addu        $s0, $t9, $t3
    ctx->r16 = ADD32(ctx->r25, ctx->r11);
    // 0x80214A5C: lhu         $t5, 0x18($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X18);
    // 0x80214A60: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80214A64: and         $t4, $t0, $t5
    ctx->r12 = ctx->r8 & ctx->r13;
    // 0x80214A68: beql        $t4, $zero, L_80214C18
    if (ctx->r12 == 0) {
        // 0x80214A6C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80214C18;
    }
    goto skip_26;
    // 0x80214A6C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_26:
    // 0x80214A70: lw          $t7, -0x18F0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X18F0);
    // 0x80214A74: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
    // 0x80214A78: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80214A7C: lw          $t6, 0x1C($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X1C);
    // 0x80214A80: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80214A84: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x80214A88: addu        $t2, $t6, $t1
    ctx->r10 = ADD32(ctx->r14, ctx->r9);
    // 0x80214A8C: lw          $s1, 0x0($t2)
    ctx->r17 = MEM_W(ctx->r10, 0X0);
    // 0x80214A90: swc1        $f26, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f26.u32l;
    // 0x80214A94: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80214A98: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80214A9C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80214AA0: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    // 0x80214AA4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80214AA8: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80214AAC: lw          $a2, 0xE4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE4);
    // 0x80214AB0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80214AB4: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80214AB8: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x80214ABC: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x80214AC0: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80214AC4: jal         0x80219210
    // 0x80214AC8: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    func_80219210(rdram, ctx);
        goto after_7;
    // 0x80214AC8: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x80214ACC: beql        $v0, $zero, L_80214C10
    if (ctx->r2 == 0) {
        // 0x80214AD0: lw          $v0, 0x40($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X40);
            goto L_80214C10;
    }
    goto skip_27;
    // 0x80214AD0: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
    skip_27:
    // 0x80214AD4: lhu         $t9, 0x4A($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X4A);
    // 0x80214AD8: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x80214ADC: sll         $t3, $t9, 12
    ctx->r11 = S32(ctx->r25 << 12);
    // 0x80214AE0: or          $t0, $t3, $s3
    ctx->r8 = ctx->r11 | ctx->r19;
    // 0x80214AE4: sw          $t0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r8;
    // 0x80214AE8: lbu         $t5, 0x11($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X11);
    // 0x80214AEC: lw          $a2, 0xE4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE4);
    // 0x80214AF0: andi        $t4, $t5, 0x6
    ctx->r12 = ctx->r13 & 0X6;
    // 0x80214AF4: bnel        $t4, $zero, L_80214BE4
    if (ctx->r12 != 0) {
        // 0x80214AF8: lwc1        $f6, 0xE0($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
            goto L_80214BE4;
    }
    goto skip_28;
    // 0x80214AF8: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    skip_28:
    // 0x80214AFC: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x80214B00: lw          $t8, -0x3C64($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C64);
    // 0x80214B04: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x80214B08: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80214B0C: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x80214B10: sw          $t0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r8;
    // 0x80214B14: lw          $t3, 0x0($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X0);
    // 0x80214B18: lw          $t9, -0x3C60($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C60);
    // 0x80214B1C: lwc1        $f8, 0x108($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80214B20: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x80214B24: addu        $t5, $t9, $t0
    ctx->r13 = ADD32(ctx->r25, ctx->r8);
    // 0x80214B28: swc1        $f8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f8.u32l;
    // 0x80214B2C: lwc1        $f4, 0x108($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80214B30: lwc1        $f10, 0x188($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X188);
    // 0x80214B34: lwc1        $f6, 0x184($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X184);
    // 0x80214B38: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80214B3C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80214B40: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80214B44: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80214B48: lwc1        $f8, 0x30($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X30);
    // 0x80214B4C: lw          $t4, 0x0($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X0);
    // 0x80214B50: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x80214B54: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80214B58: multu       $t4, $s7
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80214B5C: lw          $t8, -0x3C5C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C5C);
    // 0x80214B60: lw          $a3, 0x180($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X180);
    // 0x80214B64: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80214B68: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80214B6C: lwc1        $f4, 0x34($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X34);
    // 0x80214B70: lw          $a2, 0x17C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X17C);
    // 0x80214B74: lwc1        $f14, 0x178($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X178);
    // 0x80214B78: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80214B7C: lwc1        $f12, 0x174($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X174);
    // 0x80214B80: mflo        $t6
    ctx->r14 = lo;
    // 0x80214B84: addu        $t1, $t6, $t8
    ctx->r9 = ADD32(ctx->r14, ctx->r24);
    // 0x80214B88: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80214B8C: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80214B90: lwc1        $f10, 0x38($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X38);
    // 0x80214B94: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80214B98: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80214B9C: jal         0x8021A370
    // 0x80214BA0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_8021A370(rdram, ctx);
        goto after_8;
    // 0x80214BA0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x80214BA4: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x80214BA8: lhu         $t3, 0x18($fp)
    ctx->r11 = MEM_HU(ctx->r30, 0X18);
    // 0x80214BAC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80214BB0: addiu       $a0, $t7, 0x1
    ctx->r4 = ADD32(ctx->r15, 0X1);
    // 0x80214BB4: slt         $at, $a0, $t3
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80214BB8: bne         $at, $zero, L_80214C0C
    if (ctx->r1 != 0) {
        // 0x80214BBC: sw          $a0, 0x0($s4)
        MEM_W(0X0, ctx->r20) = ctx->r4;
            goto L_80214C0C;
    }
    // 0x80214BBC: sw          $a0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r4;
    // 0x80214BC0: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80214BC4: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    // 0x80214BC8: jal         0x80231C58
    // 0x80214BCC: addiu       $a1, $a1, 0x2FF8
    ctx->r5 = ADD32(ctx->r5, 0X2FF8);
    func_80231C58(rdram, ctx);
        goto after_9;
    // 0x80214BCC: addiu       $a1, $a1, 0x2FF8
    ctx->r5 = ADD32(ctx->r5, 0X2FF8);
    after_9:
    // 0x80214BD0: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x80214BD4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80214BD8: b           L_80214C0C
    // 0x80214BDC: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
        goto L_80214C0C;
    // 0x80214BDC: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x80214BE0: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
L_80214BE4:
    // 0x80214BE4: swc1        $f26, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f26.u32l;
    // 0x80214BE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80214BEC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80214BF0: lw          $t5, 0x40($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X40);
    // 0x80214BF4: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x80214BF8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80214BFC: lwc1        $f10, 0x2C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x80214C00: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    // 0x80214C04: jal         0x802175F4
    // 0x80214C08: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_802175F4(rdram, ctx);
        goto after_10;
    // 0x80214C08: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_10:
L_80214C0C:
    // 0x80214C0C: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
L_80214C10:
    // 0x80214C10: lhu         $v1, 0x14($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X14);
    // 0x80214C14: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_80214C18:
    // 0x80214C18: andi        $t4, $s3, 0xFFFF
    ctx->r12 = ctx->r19 & 0XFFFF;
    // 0x80214C1C: slt         $at, $t4, $v1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80214C20: bne         $at, $zero, L_80214A4C
    if (ctx->r1 != 0) {
        // 0x80214C24: or          $s3, $t4, $zero
        ctx->r19 = ctx->r12 | 0;
            goto L_80214A4C;
    }
    // 0x80214C24: or          $s3, $t4, $zero
    ctx->r19 = ctx->r12 | 0;
    // 0x80214C28: lhu         $t6, 0x16C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X16C);
L_80214C2C:
    // 0x80214C2C: lw          $t1, 0x124($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X124);
    // 0x80214C30: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80214C34: andi        $v1, $t8, 0xFFFF
    ctx->r3 = ctx->r24 & 0XFFFF;
    // 0x80214C38: slt         $at, $t1, $v1
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80214C3C: beq         $at, $zero, L_80214898
    if (ctx->r1 == 0) {
        // 0x80214C40: sh          $t8, 0x16C($sp)
        MEM_H(0X16C, ctx->r29) = ctx->r24;
            goto L_80214898;
    }
    // 0x80214C40: sh          $t8, 0x16C($sp)
    MEM_H(0X16C, ctx->r29) = ctx->r24;
L_80214C44:
    // 0x80214C44: lhu         $t7, 0x16E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X16E);
    // 0x80214C48: lw          $t3, 0x12C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X12C);
    // 0x80214C4C: addiu       $t2, $t7, 0x1
    ctx->r10 = ADD32(ctx->r15, 0X1);
    // 0x80214C50: andi        $t9, $t2, 0xFFFF
    ctx->r25 = ctx->r10 & 0XFFFF;
    // 0x80214C54: slt         $at, $t3, $t9
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80214C58: beq         $at, $zero, L_80214874
    if (ctx->r1 == 0) {
        // 0x80214C5C: sh          $t2, 0x16E($sp)
        MEM_H(0X16E, ctx->r29) = ctx->r10;
            goto L_80214874;
    }
    // 0x80214C5C: sh          $t2, 0x16E($sp)
    MEM_H(0X16E, ctx->r29) = ctx->r10;
L_80214C60:
    // 0x80214C60: lui         $t0, 0x8026
    ctx->r8 = S32(0X8026 << 16);
    // 0x80214C64: lw          $t0, -0x3C64($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3C64);
    // 0x80214C68: lw          $t5, 0x18C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18C);
    // 0x80214C6C: lui         $t4, 0x8026
    ctx->r12 = S32(0X8026 << 16);
    // 0x80214C70: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x80214C74: sw          $t0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r8;
    // 0x80214C78: lw          $t6, 0x190($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X190);
    // 0x80214C7C: lw          $t4, -0x3C60($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3C60);
    // 0x80214C80: sw          $t4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r12;
    // 0x80214C84: lw          $t1, 0x194($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X194);
    // 0x80214C88: lw          $t8, -0x3C5C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C5C);
    // 0x80214C8C: jal         0x80209508
    // 0x80214C90: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    func_80209508(rdram, ctx);
        goto after_11;
    // 0x80214C90: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    after_11:
    // 0x80214C94: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
L_80214C98:
    // 0x80214C98: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    // 0x80214C9C: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x80214CA0: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x80214CA4: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x80214CA8: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x80214CAC: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x80214CB0: ldc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X68);
    // 0x80214CB4: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x80214CB8: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x80214CBC: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x80214CC0: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x80214CC4: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x80214CC8: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x80214CCC: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x80214CD0: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x80214CD4: lw          $fp, 0x90($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X90);
    // 0x80214CD8: jr          $ra
    // 0x80214CDC: addiu       $sp, $sp, 0x170
    ctx->r29 = ADD32(ctx->r29, 0X170);
    return;
    // 0x80214CDC: addiu       $sp, $sp, 0x170
    ctx->r29 = ADD32(ctx->r29, 0X170);
;}
RECOMP_FUNC void func_8020292C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020292C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80202930: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80202934: lbu         $t6, 0x63($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X63);
    // 0x80202938: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8020293C: lui         $s4, 0x8025
    ctx->r20 = S32(0X8025 << 16);
    // 0x80202940: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80202944: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80202948: addiu       $s4, $s4, 0x6DE0
    ctx->r20 = ADD32(ctx->r20, 0X6DE0);
    // 0x8020294C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80202950: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80202954: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x80202958: lui         $s5, 0x8025
    ctx->r21 = S32(0X8025 << 16);
    // 0x8020295C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80202960: addiu       $s5, $s5, 0x6DE4
    ctx->r21 = ADD32(ctx->r21, 0X6DE4);
    // 0x80202964: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80202968: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x8020296C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80202970: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80202974: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80202978: slti        $at, $t9, 0x11
    ctx->r1 = SIGNED(ctx->r25) < 0X11 ? 1 : 0;
    // 0x8020297C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80202980: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80202984: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80202988: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8020298C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80202990: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80202994: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80202998: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    // 0x8020299C: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x802029A0: bne         $at, $zero, L_802029C0
    if (ctx->r1 != 0) {
        // 0x802029A4: addu        $s0, $t7, $t8
        ctx->r16 = ADD32(ctx->r15, ctx->r24);
            goto L_802029C0;
    }
    // 0x802029A4: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x802029A8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802029AC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802029B0: addiu       $a1, $a1, 0x20A0
    ctx->r5 = ADD32(ctx->r5, 0X20A0);
    // 0x802029B4: addiu       $a0, $a0, 0x2080
    ctx->r4 = ADD32(ctx->r4, 0X2080);
    // 0x802029B8: jal         0x80231C9C
    // 0x802029BC: addiu       $a2, $zero, 0x353
    ctx->r6 = ADD32(0, 0X353);
    func_80231C9C(rdram, ctx);
        goto after_0;
    // 0x802029BC: addiu       $a2, $zero, 0x353
    ctx->r6 = ADD32(0, 0X353);
    after_0:
L_802029C0:
    // 0x802029C0: lbu         $fp, 0x63($sp)
    ctx->r30 = MEM_BU(ctx->r29, 0X63);
    // 0x802029C4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802029C8: addiu       $a0, $a0, 0x20A8
    ctx->r4 = ADD32(ctx->r4, 0X20A8);
    // 0x802029CC: jal         0x802011D0
    // 0x802029D0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_802011D0(rdram, ctx);
        goto after_1;
    // 0x802029D0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_1:
    // 0x802029D4: lw          $t0, 0x98($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X98);
    // 0x802029D8: andi        $t1, $t0, 0x10
    ctx->r9 = ctx->r8 & 0X10;
    // 0x802029DC: beql        $t1, $zero, L_80202ABC
    if (ctx->r9 == 0) {
        // 0x802029E0: lw          $t4, 0x0($s4)
        ctx->r12 = MEM_W(ctx->r20, 0X0);
            goto L_80202ABC;
    }
    goto skip_0;
    // 0x802029E0: lw          $t4, 0x0($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X0);
    skip_0:
    // 0x802029E4: lw          $t2, 0xA0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XA0);
    // 0x802029E8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802029EC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802029F0: bne         $t2, $at, L_80202AB8
    if (ctx->r10 != ctx->r1) {
        // 0x802029F4: addiu       $a0, $a0, 0x20CC
        ctx->r4 = ADD32(ctx->r4, 0X20CC);
            goto L_80202AB8;
    }
    // 0x802029F4: addiu       $a0, $a0, 0x20CC
    ctx->r4 = ADD32(ctx->r4, 0X20CC);
    // 0x802029F8: jal         0x802011D0
    // 0x802029FC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_802011D0(rdram, ctx);
        goto after_2;
    // 0x802029FC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_2:
    // 0x80202A00: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80202A04: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80202A08: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x80202A0C: lw          $t8, -0x4678($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4678);
    // 0x80202A10: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80202A14: lbu         $t6, 0xAD($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0XAD);
    // 0x80202A18: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80202A1C: addiu       $s1, $s1, -0x1A4C
    ctx->r17 = ADD32(ctx->r17, -0X1A4C);
    // 0x80202A20: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80202A24: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x80202A28: lh          $a1, 0x0($t9)
    ctx->r5 = MEM_H(ctx->r25, 0X0);
    // 0x80202A2C: jal         0x80234E90
    // 0x80202A30: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_80234E90(rdram, ctx);
        goto after_3;
    // 0x80202A30: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_3:
    // 0x80202A34: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80202A38: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80202A3C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80202A40: lw          $t0, 0x3C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X3C);
    // 0x80202A44: addiu       $a1, $a1, 0x2110
    ctx->r5 = ADD32(ctx->r5, 0X2110);
    // 0x80202A48: addiu       $a2, $zero, 0x361
    ctx->r6 = ADD32(0, 0X361);
    // 0x80202A4C: bne         $t0, $at, L_80202A68
    if (ctx->r8 != ctx->r1) {
        // 0x80202A50: nop
    
            goto L_80202A68;
    }
    // 0x80202A50: nop

    // 0x80202A54: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202A58: jal         0x80231C9C
    // 0x80202A5C: addiu       $a0, $a0, 0x20F8
    ctx->r4 = ADD32(ctx->r4, 0X20F8);
    func_80231C9C(rdram, ctx);
        goto after_4;
    // 0x80202A5C: addiu       $a0, $a0, 0x20F8
    ctx->r4 = ADD32(ctx->r4, 0X20F8);
    after_4:
    // 0x80202A60: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202A64: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
L_80202A68:
    // 0x80202A68: jal         0x80234EB0
    // 0x80202A6C: nop

    func_80234EB0(rdram, ctx);
        goto after_5;
    // 0x80202A6C: nop

    after_5:
    // 0x80202A70: bnel        $v0, $zero, L_80202ABC
    if (ctx->r2 != 0) {
        // 0x80202A74: lw          $t4, 0x0($s4)
        ctx->r12 = MEM_W(ctx->r20, 0X0);
            goto L_80202ABC;
    }
    goto skip_1;
    // 0x80202A74: lw          $t4, 0x0($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X0);
    skip_1:
    // 0x80202A78: jal         0x80203654
    // 0x80202A7C: lbu         $a0, 0xAD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAD);
    func_80203654(rdram, ctx);
        goto after_6;
    // 0x80202A7C: lbu         $a0, 0xAD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAD);
    after_6:
    // 0x80202A80: lw          $t2, 0x98($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X98);
    // 0x80202A84: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x80202A88: sb          $t1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r9;
    // 0x80202A8C: andi        $t3, $t2, 0x20
    ctx->r11 = ctx->r10 & 0X20;
    // 0x80202A90: beq         $t3, $zero, L_80202E48
    if (ctx->r11 == 0) {
        // 0x80202A94: sw          $zero, 0xA0($s0)
        MEM_W(0XA0, ctx->r16) = 0;
            goto L_80202E48;
    }
    // 0x80202A94: sw          $zero, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = 0;
    // 0x80202A98: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202A9C: addiu       $a0, $a0, 0x2118
    ctx->r4 = ADD32(ctx->r4, 0X2118);
    // 0x80202AA0: jal         0x802011D0
    // 0x80202AA4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_802011D0(rdram, ctx);
        goto after_7;
    // 0x80202AA4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_7:
    // 0x80202AA8: jal         0x802012BC
    // 0x80202AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802012BC(rdram, ctx);
        goto after_8;
    // 0x80202AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80202AB0: b           L_80202E4C
    // 0x80202AB4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80202E4C;
    // 0x80202AB4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80202AB8:
    // 0x80202AB8: lw          $t4, 0x0($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X0);
L_80202ABC:
    // 0x80202ABC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x80202AC0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202AC4: bnel        $t4, $zero, L_80202B5C
    if (ctx->r12 != 0) {
        // 0x80202AC8: lw          $t7, 0xA4($s0)
        ctx->r15 = MEM_W(ctx->r16, 0XA4);
            goto L_80202B5C;
    }
    goto skip_2;
    // 0x80202AC8: lw          $t7, 0xA4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XA4);
    skip_2:
    // 0x80202ACC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202AD0: jal         0x802011D0
    // 0x80202AD4: addiu       $a0, $a0, 0x213C
    ctx->r4 = ADD32(ctx->r4, 0X213C);
    func_802011D0(rdram, ctx);
        goto after_9;
    // 0x80202AD4: addiu       $a0, $a0, 0x213C
    ctx->r4 = ADD32(ctx->r4, 0X213C);
    after_9:
    // 0x80202AD8: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x80202ADC: lbu         $t5, 0x63($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X63);
    // 0x80202AE0: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80202AE4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80202AE8: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x80202AEC: addiu       $s3, $s3, 0x6DC0
    ctx->r19 = ADD32(ctx->r19, 0X6DC0);
    // 0x80202AF0: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80202AF4: sw          $t8, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r24;
    // 0x80202AF8: sb          $t5, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r13;
    // 0x80202AFC: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80202B00: lbu         $t1, 0xAD($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XAD);
    // 0x80202B04: addiu       $s6, $zero, 0x11
    ctx->r22 = ADD32(0, 0X11);
    // 0x80202B08: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202B0C: beq         $s6, $t1, L_80202B40
    if (ctx->r22 == ctx->r9) {
        // 0x80202B10: addiu       $a0, $a0, 0x2158
        ctx->r4 = ADD32(ctx->r4, 0X2158);
            goto L_80202B40;
    }
    // 0x80202B10: addiu       $a0, $a0, 0x2158
    ctx->r4 = ADD32(ctx->r4, 0X2158);
    // 0x80202B14: jal         0x802011D0
    // 0x80202B18: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_802011D0(rdram, ctx);
        goto after_10;
    // 0x80202B18: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_10:
    // 0x80202B1C: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80202B20: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80202B24: lbu         $t2, 0x63($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X63);
    // 0x80202B28: lui         $s7, 0x8025
    ctx->r23 = S32(0X8025 << 16);
    // 0x80202B2C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80202B30: lbu         $t6, 0xAD($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0XAD);
    // 0x80202B34: addiu       $s7, $s7, 0x6DD0
    ctx->r23 = ADD32(ctx->r23, 0X6DD0);
    // 0x80202B38: addu        $t8, $s7, $t6
    ctx->r24 = ADD32(ctx->r23, ctx->r14);
    // 0x80202B3C: sb          $t2, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r10;
L_80202B40:
    // 0x80202B40: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202B44: addiu       $a0, $a0, 0x2188
    ctx->r4 = ADD32(ctx->r4, 0X2188);
    // 0x80202B48: jal         0x802011D0
    // 0x80202B4C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_802011D0(rdram, ctx);
        goto after_11;
    // 0x80202B4C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_11:
    // 0x80202B50: b           L_80202E4C
    // 0x80202B54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80202E4C;
    // 0x80202B54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80202B58: lw          $t7, 0xA4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XA4);
L_80202B5C:
    // 0x80202B5C: lw          $t9, 0x88($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X88);
    // 0x80202B60: addiu       $a0, $a0, 0x21B4
    ctx->r4 = ADD32(ctx->r4, 0X21B4);
    // 0x80202B64: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x80202B68: addu        $a1, $t7, $t9
    ctx->r5 = ADD32(ctx->r15, ctx->r25);
    // 0x80202B6C: jal         0x802011D0
    // 0x80202B70: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    func_802011D0(rdram, ctx);
        goto after_12;
    // 0x80202B70: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    after_12:
    // 0x80202B74: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    // 0x80202B78: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x80202B7C: addiu       $t0, $t0, 0x6DC0
    ctx->r8 = ADD32(ctx->r8, 0X6DC0);
    // 0x80202B80: blez        $a2, L_80202D24
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80202B84: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80202D24;
    }
    // 0x80202B84: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80202B88: lui         $s7, 0x8025
    ctx->r23 = S32(0X8025 << 16);
    // 0x80202B8C: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x80202B90: addiu       $s3, $s3, 0x6DC0
    ctx->r19 = ADD32(ctx->r19, 0X6DC0);
    // 0x80202B94: addiu       $s7, $s7, 0x6DD0
    ctx->r23 = ADD32(ctx->r23, 0X6DD0);
    // 0x80202B98: addu        $s2, $zero, $t0
    ctx->r18 = ADD32(0, ctx->r8);
    // 0x80202B9C: addiu       $s6, $zero, 0x11
    ctx->r22 = ADD32(0, 0X11);
L_80202BA0:
    // 0x80202BA0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202BA4: addiu       $a0, $a0, 0x21D4
    ctx->r4 = ADD32(ctx->r4, 0X21D4);
    // 0x80202BA8: jal         0x802011D0
    // 0x80202BAC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_802011D0(rdram, ctx);
        goto after_13;
    // 0x80202BAC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_13:
    // 0x80202BB0: lbu         $t3, 0x0($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X0);
    // 0x80202BB4: lw          $t1, 0x0($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X0);
    // 0x80202BB8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202BBC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80202BC0: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80202BC4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80202BC8: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80202BCC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80202BD0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80202BD4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80202BD8: addu        $v0, $t1, $t4
    ctx->r2 = ADD32(ctx->r9, ctx->r12);
    // 0x80202BDC: lw          $t5, 0x88($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X88);
    // 0x80202BE0: lw          $t6, 0xA4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XA4);
    // 0x80202BE4: addiu       $a0, $a0, 0x21DC
    ctx->r4 = ADD32(ctx->r4, 0X21DC);
    // 0x80202BE8: addu        $s1, $t5, $t6
    ctx->r17 = ADD32(ctx->r13, ctx->r14);
    // 0x80202BEC: jal         0x802011D0
    // 0x80202BF0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_802011D0(rdram, ctx);
        goto after_14;
    // 0x80202BF0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_14:
    // 0x80202BF4: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80202BF8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202BFC: addiu       $a0, $a0, 0x21F0
    ctx->r4 = ADD32(ctx->r4, 0X21F0);
    // 0x80202C00: slt         $at, $t2, $s1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80202C04: bne         $at, $zero, L_80202D04
    if (ctx->r1 != 0) {
        // 0x80202C08: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80202D04;
    }
    // 0x80202C08: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80202C0C: jal         0x802011D0
    // 0x80202C10: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    func_802011D0(rdram, ctx);
        goto after_15;
    // 0x80202C10: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    after_15:
    // 0x80202C14: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    // 0x80202C18: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80202C1C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202C20: bne         $a2, $at, L_80202CA0
    if (ctx->r6 != ctx->r1) {
        // 0x80202C24: addiu       $a0, $a0, 0x2208
        ctx->r4 = ADD32(ctx->r4, 0X2208);
            goto L_80202CA0;
    }
    // 0x80202C24: addiu       $a0, $a0, 0x2208
    ctx->r4 = ADD32(ctx->r4, 0X2208);
    // 0x80202C28: addu        $t7, $s3, $a2
    ctx->r15 = ADD32(ctx->r19, ctx->r6);
    // 0x80202C2C: jal         0x802011D0
    // 0x80202C30: lbu         $a1, -0x1($t7)
    ctx->r5 = MEM_BU(ctx->r15, -0X1);
    func_802011D0(rdram, ctx);
        goto after_16;
    // 0x80202C30: lbu         $a1, -0x1($t7)
    ctx->r5 = MEM_BU(ctx->r15, -0X1);
    after_16:
    // 0x80202C34: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x80202C38: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80202C3C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80202C40: addu        $t0, $s3, $t9
    ctx->r8 = ADD32(ctx->r19, ctx->r25);
    // 0x80202C44: lbu         $a0, -0x1($t0)
    ctx->r4 = MEM_BU(ctx->r8, -0X1);
    // 0x80202C48: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x80202C4C: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x80202C50: subu        $t1, $t1, $a0
    ctx->r9 = SUB32(ctx->r9, ctx->r4);
    // 0x80202C54: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80202C58: subu        $t1, $t1, $a0
    ctx->r9 = SUB32(ctx->r9, ctx->r4);
    // 0x80202C5C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80202C60: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x80202C64: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80202C68: addu        $t4, $t3, $t1
    ctx->r12 = ADD32(ctx->r11, ctx->r9);
    // 0x80202C6C: lbu         $v0, 0xAD($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0XAD);
    // 0x80202C70: beq         $s6, $v0, L_80202C94
    if (ctx->r22 == ctx->r2) {
        // 0x80202C74: addu        $t6, $s7, $v0
        ctx->r14 = ADD32(ctx->r23, ctx->r2);
            goto L_80202C94;
    }
    // 0x80202C74: addu        $t6, $s7, $v0
    ctx->r14 = ADD32(ctx->r23, ctx->r2);
    // 0x80202C78: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202C7C: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x80202C80: jal         0x802011D0
    // 0x80202C84: addiu       $a0, $a0, 0x2230
    ctx->r4 = ADD32(ctx->r4, 0X2230);
    func_802011D0(rdram, ctx);
        goto after_17;
    // 0x80202C84: addiu       $a0, $a0, 0x2230
    ctx->r4 = ADD32(ctx->r4, 0X2230);
    after_17:
    // 0x80202C88: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    // 0x80202C8C: addu        $t8, $s3, $t2
    ctx->r24 = ADD32(ctx->r19, ctx->r10);
    // 0x80202C90: lbu         $a0, -0x1($t8)
    ctx->r4 = MEM_BU(ctx->r24, -0X1);
L_80202C94:
    // 0x80202C94: jal         0x80202E78
    // 0x80202C98: nop

    func_80202E78(rdram, ctx);
        goto after_18;
    // 0x80202C98: nop

    after_18:
    // 0x80202C9C: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
L_80202CA0:
    // 0x80202CA0: slt         $at, $s0, $a2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80202CA4: beq         $at, $zero, L_80202CCC
    if (ctx->r1 == 0) {
        // 0x80202CA8: addu        $v0, $s3, $a2
        ctx->r2 = ADD32(ctx->r19, ctx->r6);
            goto L_80202CCC;
    }
    // 0x80202CA8: addu        $v0, $s3, $a2
    ctx->r2 = ADD32(ctx->r19, ctx->r6);
    // 0x80202CAC: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80202CB0: addiu       $t7, $t7, 0x6DC0
    ctx->r15 = ADD32(ctx->r15, 0X6DC0);
    // 0x80202CB4: addu        $v1, $s0, $t7
    ctx->r3 = ADD32(ctx->r16, ctx->r15);
L_80202CB8:
    // 0x80202CB8: lbu         $t9, -0x1($v0)
    ctx->r25 = MEM_BU(ctx->r2, -0X1);
    // 0x80202CBC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80202CC0: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80202CC4: bne         $at, $zero, L_80202CB8
    if (ctx->r1 != 0) {
        // 0x80202CC8: sb          $t9, 0x1($v0)
        MEM_B(0X1, ctx->r2) = ctx->r25;
            goto L_80202CB8;
    }
    // 0x80202CC8: sb          $t9, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r25;
L_80202CCC:
    // 0x80202CCC: lbu         $t0, 0x63($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X63);
    // 0x80202CD0: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80202CD4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80202CD8: sb          $t0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r8;
    // 0x80202CDC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202CE0: addu        $t4, $t3, $t1
    ctx->r12 = ADD32(ctx->r11, ctx->r9);
    // 0x80202CE4: lbu         $v0, 0xAD($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0XAD);
    // 0x80202CE8: lbu         $t5, 0x63($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X63);
    // 0x80202CEC: addiu       $a0, $a0, 0x2250
    ctx->r4 = ADD32(ctx->r4, 0X2250);
    // 0x80202CF0: beq         $s6, $v0, L_80202D04
    if (ctx->r22 == ctx->r2) {
        // 0x80202CF4: addu        $t6, $s7, $v0
        ctx->r14 = ADD32(ctx->r23, ctx->r2);
            goto L_80202D04;
    }
    // 0x80202CF4: addu        $t6, $s7, $v0
    ctx->r14 = ADD32(ctx->r23, ctx->r2);
    // 0x80202CF8: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x80202CFC: jal         0x802011D0
    // 0x80202D00: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_802011D0(rdram, ctx);
        goto after_19;
    // 0x80202D00: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_19:
L_80202D04:
    // 0x80202D04: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    // 0x80202D08: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80202D0C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80202D10: slt         $at, $s0, $a2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80202D14: beq         $at, $zero, L_80202D24
    if (ctx->r1 == 0) {
        // 0x80202D18: lw          $t2, 0x50($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X50);
            goto L_80202D24;
    }
    // 0x80202D18: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80202D1C: beq         $t2, $zero, L_80202BA0
    if (ctx->r10 == 0) {
        // 0x80202D20: nop
    
            goto L_80202BA0;
    }
    // 0x80202D20: nop

L_80202D24:
    // 0x80202D24: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80202D28: lui         $s7, 0x8025
    ctx->r23 = S32(0X8025 << 16);
    // 0x80202D2C: addiu       $s7, $s7, 0x6DD0
    ctx->r23 = ADD32(ctx->r23, 0X6DD0);
    // 0x80202D30: bne         $t8, $zero, L_80202D80
    if (ctx->r24 != 0) {
        // 0x80202D34: addiu       $s6, $zero, 0x11
        ctx->r22 = ADD32(0, 0X11);
            goto L_80202D80;
    }
    // 0x80202D34: addiu       $s6, $zero, 0x11
    ctx->r22 = ADD32(0, 0X11);
    // 0x80202D38: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80202D3C: bne         $s0, $at, L_80202D80
    if (ctx->r16 != ctx->r1) {
        // 0x80202D40: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80202D80;
    }
    // 0x80202D40: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202D44: addiu       $a0, $a0, 0x2270
    ctx->r4 = ADD32(ctx->r4, 0X2270);
    // 0x80202D48: jal         0x802011D0
    // 0x80202D4C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_802011D0(rdram, ctx);
        goto after_20;
    // 0x80202D4C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_20:
    // 0x80202D50: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80202D54: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80202D58: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80202D5C: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80202D60: lbu         $v0, 0xAD($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XAD);
    // 0x80202D64: beq         $s6, $v0, L_80202D70
    if (ctx->r22 == ctx->r2) {
        // 0x80202D68: addu        $t1, $s7, $v0
        ctx->r9 = ADD32(ctx->r23, ctx->r2);
            goto L_80202D70;
    }
    // 0x80202D68: addu        $t1, $s7, $v0
    ctx->r9 = ADD32(ctx->r23, ctx->r2);
    // 0x80202D6C: sb          $t3, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r11;
L_80202D70:
    // 0x80202D70: jal         0x80202E78
    // 0x80202D74: lbu         $a0, 0x63($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X63);
    func_80202E78(rdram, ctx);
        goto after_21;
    // 0x80202D74: lbu         $a0, 0x63($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X63);
    after_21:
    // 0x80202D78: b           L_80202E4C
    // 0x80202D7C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80202E4C;
    // 0x80202D7C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80202D80:
    // 0x80202D80: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80202D84: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202D88: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x80202D8C: bne         $t4, $zero, L_80202E24
    if (ctx->r12 != 0) {
        // 0x80202D90: addiu       $a0, $a0, 0x22F8
        ctx->r4 = ADD32(ctx->r4, 0X22F8);
            goto L_80202E24;
    }
    // 0x80202D90: addiu       $a0, $a0, 0x22F8
    ctx->r4 = ADD32(ctx->r4, 0X22F8);
    // 0x80202D94: bne         $s0, $a2, L_80202E24
    if (ctx->r16 != ctx->r6) {
        // 0x80202D98: or          $a1, $fp, $zero
        ctx->r5 = ctx->r30 | 0;
            goto L_80202E24;
    }
    // 0x80202D98: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x80202D9C: lui         $t5, 0x8025
    ctx->r13 = S32(0X8025 << 16);
    // 0x80202DA0: addiu       $t5, $t5, 0x6DC0
    ctx->r13 = ADD32(ctx->r13, 0X6DC0);
    // 0x80202DA4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202DA8: addiu       $a0, $a0, 0x2284
    ctx->r4 = ADD32(ctx->r4, 0X2284);
    // 0x80202DAC: jal         0x802011D0
    // 0x80202DB0: addu        $s2, $s0, $t5
    ctx->r18 = ADD32(ctx->r16, ctx->r13);
    func_802011D0(rdram, ctx);
        goto after_22;
    // 0x80202DB0: addu        $s2, $s0, $t5
    ctx->r18 = ADD32(ctx->r16, ctx->r13);
    after_22:
    // 0x80202DB4: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    // 0x80202DB8: lbu         $t6, 0x63($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X63);
    // 0x80202DBC: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80202DC0: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80202DC4: addiu       $t8, $t2, 0x1
    ctx->r24 = ADD32(ctx->r10, 0X1);
    // 0x80202DC8: sw          $t8, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r24;
    // 0x80202DCC: sb          $t6, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r14;
    // 0x80202DD0: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80202DD4: lbu         $t3, 0xAD($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0XAD);
    // 0x80202DD8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202DDC: addiu       $a0, $a0, 0x229C
    ctx->r4 = ADD32(ctx->r4, 0X229C);
    // 0x80202DE0: beq         $s6, $t3, L_80202E0C
    if (ctx->r22 == ctx->r11) {
        // 0x80202DE4: nop
    
            goto L_80202E0C;
    }
    // 0x80202DE4: nop

    // 0x80202DE8: jal         0x802011D0
    // 0x80202DEC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_802011D0(rdram, ctx);
        goto after_23;
    // 0x80202DEC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_23:
    // 0x80202DF0: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80202DF4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80202DF8: lbu         $t1, 0x63($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X63);
    // 0x80202DFC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80202E00: lbu         $t2, 0xAD($t6)
    ctx->r10 = MEM_BU(ctx->r14, 0XAD);
    // 0x80202E04: addu        $t8, $s7, $t2
    ctx->r24 = ADD32(ctx->r23, ctx->r10);
    // 0x80202E08: sb          $t1, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r9;
L_80202E0C:
    // 0x80202E0C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202E10: addiu       $a0, $a0, 0x22CC
    ctx->r4 = ADD32(ctx->r4, 0X22CC);
    // 0x80202E14: jal         0x802011D0
    // 0x80202E18: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_802011D0(rdram, ctx);
        goto after_24;
    // 0x80202E18: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_24:
    // 0x80202E1C: b           L_80202E4C
    // 0x80202E20: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80202E4C;
    // 0x80202E20: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80202E24:
    // 0x80202E24: beq         $at, $zero, L_80202E34
    if (ctx->r1 == 0) {
        // 0x80202E28: addiu       $t7, $a2, 0x1
        ctx->r15 = ADD32(ctx->r6, 0X1);
            goto L_80202E34;
    }
    // 0x80202E28: addiu       $t7, $a2, 0x1
    ctx->r15 = ADD32(ctx->r6, 0X1);
    // 0x80202E2C: sw          $t7, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r15;
    // 0x80202E30: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
L_80202E34:
    // 0x80202E34: jal         0x802011D0
    // 0x80202E38: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_802011D0(rdram, ctx);
        goto after_25;
    // 0x80202E38: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_25:
    // 0x80202E3C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202E40: jal         0x802011D0
    // 0x80202E44: addiu       $a0, $a0, 0x2308
    ctx->r4 = ADD32(ctx->r4, 0X2308);
    func_802011D0(rdram, ctx);
        goto after_26;
    // 0x80202E44: addiu       $a0, $a0, 0x2308
    ctx->r4 = ADD32(ctx->r4, 0X2308);
    after_26:
L_80202E48:
    // 0x80202E48: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80202E4C:
    // 0x80202E4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80202E50: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80202E54: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80202E58: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80202E5C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80202E60: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80202E64: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80202E68: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80202E6C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80202E70: jr          $ra
    // 0x80202E74: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80202E74: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80234AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234AF0: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80234AF4: addiu       $v1, $v1, 0x900
    ctx->r3 = ADD32(ctx->r3, 0X900);
    // 0x80234AF8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80234AFC: lui         $at, 0x41C6
    ctx->r1 = S32(0X41C6 << 16);
    // 0x80234B00: ori         $at, $at, 0x4E6D
    ctx->r1 = ctx->r1 | 0X4E6D;
    // 0x80234B04: multu       $t6, $at
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234B08: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80234B0C: mflo        $t7
    ctx->r15 = lo;
    // 0x80234B10: addiu       $t8, $t7, 0x3039
    ctx->r24 = ADD32(ctx->r15, 0X3039);
    // 0x80234B14: srl         $t9, $t8, 16
    ctx->r25 = S32(U32(ctx->r24) >> 16);
    // 0x80234B18: andi        $v0, $t9, 0x7FFF
    ctx->r2 = ctx->r25 & 0X7FFF;
    // 0x80234B1C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80234B20: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80234B24: bgez        $v0, L_80234B38
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80234B28: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80234B38;
    }
    // 0x80234B28: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80234B2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80234B30: nop

    // 0x80234B34: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80234B38:
    // 0x80234B38: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80234B3C: lwc1        $f10, 0x53B4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X53B4);
    // 0x80234B40: jr          $ra
    // 0x80234B44: div.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    return;
    // 0x80234B44: div.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
;}
RECOMP_FUNC void func_80207260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80207260: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80207264: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80207268: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8020726C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80207270: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80207274: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80207278: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8020727C: lwc1        $f4, 0x120($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X120);
    // 0x80207280: lwc1        $f0, 0x130($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X130);
    // 0x80207284: lwc1        $f8, 0x124($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X124);
    // 0x80207288: lwc1        $f2, 0x134($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X134);
    // 0x8020728C: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80207290: lwc1        $f4, 0x128($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X128);
    // 0x80207294: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80207298: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8020729C: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
    // 0x802072A0: addiu       $s4, $zero, 0xC
    ctx->r20 = ADD32(0, 0XC);
    // 0x802072A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802072A8: swc1        $f2, 0x144($a0)
    MEM_W(0X144, ctx->r4) = ctx->f2.u32l;
    // 0x802072AC: swc1        $f2, 0x150($a0)
    MEM_W(0X150, ctx->r4) = ctx->f2.u32l;
    // 0x802072B0: swc1        $f2, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = ctx->f2.u32l;
    // 0x802072B4: swc1        $f2, 0x168($a0)
    MEM_W(0X168, ctx->r4) = ctx->f2.u32l;
    // 0x802072B8: swc1        $f2, 0x174($a0)
    MEM_W(0X174, ctx->r4) = ctx->f2.u32l;
    // 0x802072BC: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802072C0: lwc1        $f8, 0x12C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X12C);
    // 0x802072C4: mul.s       $f14, $f6, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x802072C8: swc1        $f14, 0x158($a0)
    MEM_W(0X158, ctx->r4) = ctx->f14.u32l;
    // 0x802072CC: swc1        $f14, 0x164($a0)
    MEM_W(0X164, ctx->r4) = ctx->f14.u32l;
    // 0x802072D0: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802072D4: mul.s       $f12, $f10, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802072D8: swc1        $f12, 0x140($a0)
    MEM_W(0X140, ctx->r4) = ctx->f12.u32l;
    // 0x802072DC: swc1        $f12, 0x14C($a0)
    MEM_W(0X14C, ctx->r4) = ctx->f12.u32l;
    // 0x802072E0: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802072E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802072E8: mul.s       $f16, $f6, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x802072EC: swc1        $f0, 0x170($a0)
    MEM_W(0X170, ctx->r4) = ctx->f0.u32l;
    // 0x802072F0: swc1        $f0, 0x178($a0)
    MEM_W(0X178, ctx->r4) = ctx->f0.u32l;
    // 0x802072F4: swc1        $f0, 0x17C($a0)
    MEM_W(0X17C, ctx->r4) = ctx->f0.u32l;
    // 0x802072F8: swc1        $f0, 0x180($a0)
    MEM_W(0X180, ctx->r4) = ctx->f0.u32l;
    // 0x802072FC: swc1        $f0, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->f0.u32l;
    // 0x80207300: swc1        $f16, 0x148($a0)
    MEM_W(0X148, ctx->r4) = ctx->f16.u32l;
    // 0x80207304: swc1        $f16, 0x16C($a0)
    MEM_W(0X16C, ctx->r4) = ctx->f16.u32l;
    // 0x80207308: mul.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8020730C: swc1        $f18, 0x154($a0)
    MEM_W(0X154, ctx->r4) = ctx->f18.u32l;
    // 0x80207310: swc1        $f18, 0x160($a0)
    MEM_W(0X160, ctx->r4) = ctx->f18.u32l;
L_80207314:
    // 0x80207314: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80207318: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x8020731C: mflo        $t6
    ctx->r14 = lo;
    // 0x80207320: addu        $v0, $s2, $t6
    ctx->r2 = ADD32(ctx->r18, ctx->r14);
    // 0x80207324: addiu       $s1, $v0, 0x1D0
    ctx->r17 = ADD32(ctx->r2, 0X1D0);
    // 0x80207328: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8020732C: bgez        $t7, L_80207340
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80207330: andi        $t8, $t7, 0x3
        ctx->r24 = ctx->r15 & 0X3;
            goto L_80207340;
    }
    // 0x80207330: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x80207334: beq         $t8, $zero, L_80207340
    if (ctx->r24 == 0) {
        // 0x80207338: nop
    
            goto L_80207340;
    }
    // 0x80207338: nop

    // 0x8020733C: addiu       $t8, $t8, -0x4
    ctx->r24 = ADD32(ctx->r24, -0X4);
L_80207340:
    // 0x80207340: multu       $t8, $s4
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80207344: addiu       $a2, $v0, 0x140
    ctx->r6 = ADD32(ctx->r2, 0X140);
    // 0x80207348: mflo        $t9
    ctx->r25 = lo;
    // 0x8020734C: addu        $a1, $s2, $t9
    ctx->r5 = ADD32(ctx->r18, ctx->r25);
    // 0x80207350: jal         0x80234C78
    // 0x80207354: addiu       $a1, $a1, 0x140
    ctx->r5 = ADD32(ctx->r5, 0X140);
    func_80234C78(rdram, ctx);
        goto after_0;
    // 0x80207354: addiu       $a1, $a1, 0x140
    ctx->r5 = ADD32(ctx->r5, 0X140);
    after_0:
    // 0x80207358: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8020735C: jal         0x80234D30
    // 0x80207360: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80234D30(rdram, ctx);
        goto after_1;
    // 0x80207360: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x80207364: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80207368: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x8020736C: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80207370: bne         $at, $zero, L_80207314
    if (ctx->r1 != 0) {
        // 0x80207374: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_80207314;
    }
    // 0x80207374: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x80207378: addiu       $s0, $s2, 0x200
    ctx->r16 = ADD32(ctx->r18, 0X200);
    // 0x8020737C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80207380: jal         0x80234C14
    // 0x80207384: addiu       $a1, $s2, 0x170
    ctx->r5 = ADD32(ctx->r18, 0X170);
    func_80234C14(rdram, ctx);
        goto after_2;
    // 0x80207384: addiu       $a1, $s2, 0x170
    ctx->r5 = ADD32(ctx->r18, 0X170);
    after_2:
    // 0x80207388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020738C: jal         0x80234D30
    // 0x80207390: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80234D30(rdram, ctx);
        goto after_3;
    // 0x80207390: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x80207394: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80207398: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x8020739C: swc1        $f6, 0x20C($s2)
    MEM_W(0X20C, ctx->r18) = ctx->f6.u32l;
    // 0x802073A0: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x802073A4: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x802073A8: swc1        $f10, 0x210($s2)
    MEM_W(0X210, ctx->r18) = ctx->f10.u32l;
    // 0x802073AC: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x802073B0: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x802073B4: swc1        $f6, 0x214($s2)
    MEM_W(0X214, ctx->r18) = ctx->f6.u32l;
    // 0x802073B8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802073BC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802073C0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802073C4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802073C8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802073CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802073D0: jr          $ra
    // 0x802073D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802073D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80228E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228E64: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80228E68: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x80228E6C: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80228E70: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x80228E74: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80228E78: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x80228E7C: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80228E80: swc1        $f10, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f10.u32l;
    // 0x80228E84: lwc1        $f16, 0x14($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X14);
    // 0x80228E88: swc1        $f16, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f16.u32l;
    // 0x80228E8C: lwc1        $f18, 0x18($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X18);
    // 0x80228E90: swc1        $f18, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f18.u32l;
    // 0x80228E94: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x80228E98: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
    // 0x80228E9C: lwc1        $f6, 0x24($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X24);
    // 0x80228EA0: swc1        $f6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f6.u32l;
    // 0x80228EA4: lwc1        $f8, 0x28($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80228EA8: jr          $ra
    // 0x80228EAC: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x80228EAC: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_802420E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802420E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802420E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802420E8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802420EC: addiu       $a0, $a0, 0x1710
    ctx->r4 = ADD32(ctx->r4, 0X1710);
    // 0x802420F0: jal         0x802481C0
    // 0x802420F4: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    func_802481C0(rdram, ctx);
        goto after_0;
    // 0x802420F4: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_0:
    // 0x802420F8: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802420FC: addiu       $t6, $t6, 0x1710
    ctx->r14 = ADD32(ctx->r14, 0X1710);
    // 0x80242100: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80242104: sw          $t6, 0x1770($at)
    MEM_W(0X1770, ctx->r1) = ctx->r14;
    // 0x80242108: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024210C: addiu       $t7, $t6, 0x30
    ctx->r15 = ADD32(ctx->r14, 0X30);
    // 0x80242110: sw          $t7, 0x1774($at)
    MEM_W(0X1774, ctx->r1) = ctx->r15;
    // 0x80242114: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80242118: sh          $t8, 0x32($t6)
    MEM_H(0X32, ctx->r14) = ctx->r24;
    // 0x8024211C: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x80242120: lw          $t0, 0x1770($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1770);
    // 0x80242124: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80242128: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x8024212C: sh          $t9, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r25;
    // 0x80242130: lw          $t1, 0x300($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X300);
    // 0x80242134: bne         $t1, $zero, L_80242164
    if (ctx->r9 != 0) {
        // 0x80242138: nop
    
            goto L_80242164;
    }
    // 0x80242138: nop

    // 0x8024213C: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x80242140: lw          $t3, 0x1774($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1774);
    // 0x80242144: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x80242148: addiu       $t2, $t2, 0x1A80
    ctx->r10 = ADD32(ctx->r10, 0X1A80);
    // 0x8024214C: lui         $t4, 0x2F5
    ctx->r12 = S32(0X2F5 << 16);
    // 0x80242150: ori         $t4, $t4, 0xB2D2
    ctx->r12 = ctx->r12 | 0XB2D2;
    // 0x80242154: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80242158: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
    // 0x8024215C: b           L_802421C4
    // 0x80242160: sw          $t4, 0x1778($at)
    MEM_W(0X1778, ctx->r1) = ctx->r12;
        goto L_802421C4;
    // 0x80242160: sw          $t4, 0x1778($at)
    MEM_W(0X1778, ctx->r1) = ctx->r12;
L_80242164:
    // 0x80242164: lui         $t5, 0x8000
    ctx->r13 = S32(0X8000 << 16);
    // 0x80242168: lw          $t5, 0x300($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X300);
    // 0x8024216C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80242170: bne         $t5, $at, L_802421A0
    if (ctx->r13 != ctx->r1) {
        // 0x80242174: nop
    
            goto L_802421A0;
    }
    // 0x80242174: nop

    // 0x80242178: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x8024217C: lw          $t8, 0x1774($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1774);
    // 0x80242180: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80242184: addiu       $t7, $t7, 0x1AD0
    ctx->r15 = ADD32(ctx->r15, 0X1AD0);
    // 0x80242188: lui         $t6, 0x2E6
    ctx->r14 = S32(0X2E6 << 16);
    // 0x8024218C: ori         $t6, $t6, 0x25C
    ctx->r14 = ctx->r14 | 0X25C;
    // 0x80242190: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80242194: sw          $t7, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r15;
    // 0x80242198: b           L_802421C4
    // 0x8024219C: sw          $t6, 0x1778($at)
    MEM_W(0X1778, ctx->r1) = ctx->r14;
        goto L_802421C4;
    // 0x8024219C: sw          $t6, 0x1778($at)
    MEM_W(0X1778, ctx->r1) = ctx->r14;
L_802421A0:
    // 0x802421A0: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x802421A4: lw          $t0, 0x1774($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1774);
    // 0x802421A8: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x802421AC: addiu       $t9, $t9, 0x1B20
    ctx->r25 = ADD32(ctx->r25, 0X1B20);
    // 0x802421B0: lui         $t1, 0x2E6
    ctx->r9 = S32(0X2E6 << 16);
    // 0x802421B4: ori         $t1, $t1, 0xD354
    ctx->r9 = ctx->r9 | 0XD354;
    // 0x802421B8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802421BC: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
    // 0x802421C0: sw          $t1, 0x1778($at)
    MEM_W(0X1778, ctx->r1) = ctx->r9;
L_802421C4:
    // 0x802421C4: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x802421C8: lw          $t3, 0x1774($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1774);
    // 0x802421CC: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x802421D0: lui         $t4, 0x8025
    ctx->r12 = S32(0X8025 << 16);
    // 0x802421D4: sh          $t2, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r10;
    // 0x802421D8: lw          $t4, 0x1774($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1774);
    // 0x802421DC: lui         $t8, 0xA440
    ctx->r24 = S32(0XA440 << 16);
    // 0x802421E0: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x802421E4: lw          $t7, 0x4($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X4);
    // 0x802421E8: sw          $t7, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r15;
    // 0x802421EC: lw          $t6, 0x10($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X10);
    // 0x802421F0: sltiu       $at, $t6, 0xB
    ctx->r1 = ctx->r14 < 0XB ? 1 : 0;
    // 0x802421F4: bne         $at, $zero, L_80242210
    if (ctx->r1 != 0) {
        // 0x802421F8: nop
    
            goto L_80242210;
    }
    // 0x802421F8: nop

L_802421FC:
    // 0x802421FC: lui         $t9, 0xA440
    ctx->r25 = S32(0XA440 << 16);
    // 0x80242200: lw          $t0, 0x10($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X10);
    // 0x80242204: sltiu       $at, $t0, 0xB
    ctx->r1 = ctx->r8 < 0XB ? 1 : 0;
    // 0x80242208: beq         $at, $zero, L_802421FC
    if (ctx->r1 == 0) {
        // 0x8024220C: nop
    
            goto L_802421FC;
    }
    // 0x8024220C: nop

L_80242210:
    // 0x80242210: lui         $t1, 0xA440
    ctx->r9 = S32(0XA440 << 16);
    // 0x80242214: jal         0x802474C0
    // 0x80242218: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    func_802474C0(rdram, ctx);
        goto after_1;
    // 0x80242218: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    after_1:
    // 0x8024221C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80242220: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80242224: jr          $ra
    // 0x80242228: nop

    return;
    // 0x80242228: nop

;}
RECOMP_FUNC void func_80227D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227D6C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80227D70: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80227D74: lw          $t6, 0x5220($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5220);
    // 0x80227D78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227D7C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80227D80: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80227D84: jal         0x80223840
    // 0x80227D88: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227D88: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80227D8C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80227D90: lui         $a3, 0x434F
    ctx->r7 = S32(0X434F << 16);
    // 0x80227D94: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80227D98: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80227D9C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80227DA0: ori         $a3, $a3, 0x4D4D
    ctx->r7 = ctx->r7 | 0X4D4D;
    // 0x80227DA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227DA8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80227DAC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80227DB0: jal         0x80223B30
    // 0x80227DB4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80223B30(rdram, ctx);
        goto after_1;
    // 0x80227DB4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x80227DB8: beq         $v0, $zero, L_80227DCC
    if (ctx->r2 == 0) {
        // 0x80227DBC: nop
    
            goto L_80227DCC;
    }
    // 0x80227DBC: nop

    // 0x80227DC0: jal         0x802272B0
    // 0x80227DC4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_802272B0(rdram, ctx);
        goto after_2;
    // 0x80227DC4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80227DC8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_80227DCC:
    // 0x80227DCC: jal         0x802238F0
    // 0x80227DD0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_802238F0(rdram, ctx);
        goto after_3;
    // 0x80227DD0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x80227DD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227DD8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80227DDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80227DE0: jr          $ra
    // 0x80227DE4: nop

    return;
    // 0x80227DE4: nop

;}
RECOMP_FUNC void func_802399C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802399C0: addiu       $sp, $sp, -0x180
    ctx->r29 = ADD32(ctx->r29, -0X180);
    // 0x802399C4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802399C8: andi        $s0, $a1, 0xFFFF
    ctx->r16 = ctx->r5 & 0XFFFF;
    // 0x802399CC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802399D0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802399D4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802399D8: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x802399DC: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x802399E0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x802399E4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802399E8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x802399EC: sw          $a1, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r5;
    // 0x802399F0: beq         $s0, $zero, L_80239A00
    if (ctx->r16 == 0) {
        // 0x802399F4: sh          $zero, 0x52($sp)
        MEM_H(0X52, ctx->r29) = 0;
            goto L_80239A00;
    }
    // 0x802399F4: sh          $zero, 0x52($sp)
    MEM_H(0X52, ctx->r29) = 0;
    // 0x802399F8: bne         $a2, $zero, L_80239A08
    if (ctx->r6 != 0) {
        // 0x802399FC: nop
    
            goto L_80239A08;
    }
    // 0x802399FC: nop

L_80239A00:
    // 0x80239A00: b           L_80239C20
    // 0x80239A04: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80239C20;
    // 0x80239A04: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80239A08:
    // 0x80239A08: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80239A0C: nop

    // 0x80239A10: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80239A14: bne         $t7, $zero, L_80239A24
    if (ctx->r15 != 0) {
        // 0x80239A18: nop
    
            goto L_80239A24;
    }
    // 0x80239A18: nop

    // 0x80239A1C: b           L_80239C20
    // 0x80239A20: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80239C20;
    // 0x80239A20: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80239A24:
    // 0x80239A24: jal         0x802452EC
    // 0x80239A28: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_802452EC(rdram, ctx);
        goto after_0;
    // 0x80239A28: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x80239A2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80239A30: bne         $v0, $at, L_80239A40
    if (ctx->r2 != ctx->r1) {
        // 0x80239A34: nop
    
            goto L_80239A40;
    }
    // 0x80239A34: nop

    // 0x80239A38: b           L_80239C20
    // 0x80239A3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80239C20;
    // 0x80239A3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80239A40:
    // 0x80239A40: lbu         $t8, 0x65($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X65);
    // 0x80239A44: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80239A48: beq         $t8, $zero, L_80239A6C
    if (ctx->r24 == 0) {
        // 0x80239A4C: lw          $t9, 0x190($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X190);
            goto L_80239A6C;
    }
    // 0x80239A4C: lw          $t9, 0x190($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X190);
    // 0x80239A50: jal         0x802456A0
    // 0x80239A54: sb          $zero, 0x65($s3)
    MEM_B(0X65, ctx->r19) = 0;
    func_802456A0(rdram, ctx);
        goto after_1;
    // 0x80239A54: sb          $zero, 0x65($s3)
    MEM_B(0X65, ctx->r19) = 0;
    after_1:
    // 0x80239A58: beq         $v0, $zero, L_80239A6C
    if (ctx->r2 == 0) {
        // 0x80239A5C: lw          $t9, 0x190($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X190);
            goto L_80239A6C;
    }
    // 0x80239A5C: lw          $t9, 0x190($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X190);
    // 0x80239A60: b           L_80239C24
    // 0x80239A64: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80239C24;
    // 0x80239A64: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80239A68: lw          $t9, 0x190($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X190);
L_80239A6C:
    // 0x80239A6C: addiu       $t0, $sp, 0x17C
    ctx->r8 = ADD32(ctx->r29, 0X17C);
    // 0x80239A70: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80239A74: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80239A78: andi        $a1, $s0, 0xFFFF
    ctx->r5 = ctx->r16 & 0XFFFF;
    // 0x80239A7C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80239A80: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x80239A84: jal         0x80239120
    // 0x80239A88: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80239120(rdram, ctx);
        goto after_2;
    // 0x80239A88: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_2:
    // 0x80239A8C: beq         $v0, $zero, L_80239AA0
    if (ctx->r2 == 0) {
        // 0x80239A90: lw          $t1, 0x17C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X17C);
            goto L_80239AA0;
    }
    // 0x80239A90: lw          $t1, 0x17C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X17C);
    // 0x80239A94: b           L_80239C24
    // 0x80239A98: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80239C24;
    // 0x80239A98: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80239A9C: lw          $t1, 0x17C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X17C);
L_80239AA0:
    // 0x80239AA0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80239AA4: bne         $t1, $at, L_80239AB4
    if (ctx->r9 != ctx->r1) {
        // 0x80239AA8: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_80239AB4;
    }
    // 0x80239AA8: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80239AAC: b           L_80239C20
    // 0x80239AB0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80239C20;
    // 0x80239AB0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80239AB4:
    // 0x80239AB4: lw          $t2, 0x5C($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X5C);
    // 0x80239AB8: lw          $t3, 0x17C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X17C);
    // 0x80239ABC: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x80239AC0: addu        $a2, $t2, $t3
    ctx->r6 = ADD32(ctx->r10, ctx->r11);
    // 0x80239AC4: andi        $t4, $a2, 0xFFFF
    ctx->r12 = ctx->r6 & 0XFFFF;
    // 0x80239AC8: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x80239ACC: jal         0x80245710
    // 0x80239AD0: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    func_80245710(rdram, ctx);
        goto after_3;
    // 0x80239AD0: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_3:
    // 0x80239AD4: beq         $v0, $zero, L_80239AE8
    if (ctx->r2 == 0) {
        // 0x80239AD8: lbu         $s0, 0x5A($sp)
        ctx->r16 = MEM_BU(ctx->r29, 0X5A);
            goto L_80239AE8;
    }
    // 0x80239AD8: lbu         $s0, 0x5A($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X5A);
    // 0x80239ADC: b           L_80239C24
    // 0x80239AE0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80239C24;
    // 0x80239AE0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80239AE4: lbu         $s0, 0x5A($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X5A);
L_80239AE8:
    // 0x80239AE8: lbu         $v0, 0x64($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X64);
    // 0x80239AEC: lbu         $s2, 0x5B($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X5B);
    // 0x80239AF0: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80239AF4: beq         $at, $zero, L_80239BAC
    if (ctx->r1 == 0) {
        // 0x80239AF8: or          $s4, $s0, $zero
        ctx->r20 = ctx->r16 | 0;
            goto L_80239BAC;
    }
    // 0x80239AF8: or          $s4, $s0, $zero
    ctx->r20 = ctx->r16 | 0;
    // 0x80239AFC: addiu       $s1, $sp, 0x74
    ctx->r17 = ADD32(ctx->r29, 0X74);
L_80239B00:
    // 0x80239B00: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80239B04: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80239B08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80239B0C: jal         0x80245404
    // 0x80239B10: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    func_80245404(rdram, ctx);
        goto after_4;
    // 0x80239B10: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    after_4:
    // 0x80239B14: beq         $v0, $zero, L_80239B24
    if (ctx->r2 == 0) {
        // 0x80239B18: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80239B24;
    }
    // 0x80239B18: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80239B1C: b           L_80239C24
    // 0x80239B20: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80239C24;
    // 0x80239B20: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80239B24:
    // 0x80239B24: addiu       $t5, $sp, 0x50
    ctx->r13 = ADD32(ctx->r29, 0X50);
    // 0x80239B28: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80239B2C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80239B30: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80239B34: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80239B38: andi        $a2, $s2, 0xFF
    ctx->r6 = ctx->r18 & 0XFF;
    // 0x80239B3C: addiu       $a3, $sp, 0x52
    ctx->r7 = ADD32(ctx->r29, 0X52);
    // 0x80239B40: jal         0x80239C40
    // 0x80239B44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80239C40(rdram, ctx);
        goto after_5;
    // 0x80239B44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_5:
    // 0x80239B48: beq         $v0, $zero, L_80239B58
    if (ctx->r2 == 0) {
        // 0x80239B4C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80239B58;
    }
    // 0x80239B4C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80239B50: b           L_80239C24
    // 0x80239B54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80239C24;
    // 0x80239B54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80239B58:
    // 0x80239B58: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80239B5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80239B60: jal         0x80245404
    // 0x80239B64: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    func_80245404(rdram, ctx);
        goto after_6;
    // 0x80239B64: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    after_6:
    // 0x80239B68: beq         $v0, $zero, L_80239B7C
    if (ctx->r2 == 0) {
        // 0x80239B6C: lhu         $t7, 0x50($sp)
        ctx->r15 = MEM_HU(ctx->r29, 0X50);
            goto L_80239B7C;
    }
    // 0x80239B6C: lhu         $t7, 0x50($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X50);
    // 0x80239B70: b           L_80239C24
    // 0x80239B74: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80239C24;
    // 0x80239B74: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80239B78: lhu         $t7, 0x50($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X50);
L_80239B7C:
    // 0x80239B7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80239B80: bne         $t7, $at, L_80239B94
    if (ctx->r15 != ctx->r1) {
        // 0x80239B84: nop
    
            goto L_80239B94;
    }
    // 0x80239B84: nop

    // 0x80239B88: lbu         $v0, 0x64($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X64);
    // 0x80239B8C: b           L_80239BB0
    // 0x80239B90: slt         $at, $s4, $v0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
        goto L_80239BB0;
    // 0x80239B90: slt         $at, $s4, $v0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
L_80239B94:
    // 0x80239B94: lbu         $v0, 0x64($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X64);
    // 0x80239B98: lbu         $s0, 0x50($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X50);
    // 0x80239B9C: lbu         $s2, 0x51($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X51);
    // 0x80239BA0: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80239BA4: bne         $at, $zero, L_80239B00
    if (ctx->r1 != 0) {
        // 0x80239BA8: or          $s4, $s0, $zero
        ctx->r20 = ctx->r16 | 0;
            goto L_80239B00;
    }
    // 0x80239BA8: or          $s4, $s0, $zero
    ctx->r20 = ctx->r16 | 0;
L_80239BAC:
    // 0x80239BAC: slt         $at, $s4, $v0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
L_80239BB0:
    // 0x80239BB0: bne         $at, $zero, L_80239BC0
    if (ctx->r1 != 0) {
        // 0x80239BB4: addiu       $v0, $sp, 0x54
        ctx->r2 = ADD32(ctx->r29, 0X54);
            goto L_80239BC0;
    }
    // 0x80239BB4: addiu       $v0, $sp, 0x54
    ctx->r2 = ADD32(ctx->r29, 0X54);
    // 0x80239BB8: b           L_80239C20
    // 0x80239BBC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80239C20;
    // 0x80239BBC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80239BC0:
    // 0x80239BC0: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x80239BC4: sh          $zero, 0x58($sp)
    MEM_H(0X58, ctx->r29) = 0;
    // 0x80239BC8: sh          $zero, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = 0;
    // 0x80239BCC: sh          $zero, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = 0;
    // 0x80239BD0: addiu       $v1, $sp, 0x64
    ctx->r3 = ADD32(ctx->r29, 0X64);
L_80239BD4:
    // 0x80239BD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239BD8: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80239BDC: bne         $at, $zero, L_80239BD4
    if (ctx->r1 != 0) {
        // 0x80239BE0: sb          $zero, 0xF($v0)
        MEM_B(0XF, ctx->r2) = 0;
            goto L_80239BD4;
    }
    // 0x80239BE0: sb          $zero, 0xF($v0)
    MEM_B(0XF, ctx->r2) = 0;
    // 0x80239BE4: sb          $zero, 0x61($sp)
    MEM_B(0X61, ctx->r29) = 0;
    // 0x80239BE8: sb          $zero, 0x62($sp)
    MEM_B(0X62, ctx->r29) = 0;
    // 0x80239BEC: sb          $zero, 0x63($sp)
    MEM_B(0X63, ctx->r29) = 0;
    // 0x80239BF0: sb          $zero, 0x60($sp)
    MEM_B(0X60, ctx->r29) = 0;
    // 0x80239BF4: sb          $zero, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = 0;
    // 0x80239BF8: lw          $t8, 0x5C($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X5C);
    // 0x80239BFC: lw          $t9, 0x17C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X17C);
    // 0x80239C00: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x80239C04: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x80239C08: andi        $t0, $a2, 0xFFFF
    ctx->r8 = ctx->r6 & 0XFFFF;
    // 0x80239C0C: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x80239C10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80239C14: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x80239C18: jal         0x80246660
    // 0x80239C1C: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    func_80246660(rdram, ctx);
        goto after_7;
    // 0x80239C1C: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    after_7:
L_80239C20:
    // 0x80239C20: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80239C24:
    // 0x80239C24: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80239C28: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80239C2C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80239C30: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80239C34: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80239C38: jr          $ra
    // 0x80239C3C: addiu       $sp, $sp, 0x180
    ctx->r29 = ADD32(ctx->r29, 0X180);
    return;
    // 0x80239C3C: addiu       $sp, $sp, 0x180
    ctx->r29 = ADD32(ctx->r29, 0X180);
;}
RECOMP_FUNC void func_8023BE84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023BE84: addiu       $sp, $sp, -0x1A8
    ctx->r29 = ADD32(ctx->r29, -0X1A8);
    // 0x8023BE88: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8023BE8C: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x8023BE90: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x8023BE94: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8023BE98: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8023BE9C: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8023BEA0: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8023BEA4: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8023BEA8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8023BEAC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8023BEB0: lhu         $t6, 0x14($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X14);
    // 0x8023BEB4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8023BEB8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023BEBC: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8023BEC0: beq         $t7, $zero, L_8023BED0
    if (ctx->r15 == 0) {
        // 0x8023BEC4: lui         $a1, 0x8025
        ctx->r5 = S32(0X8025 << 16);
            goto L_8023BED0;
    }
    // 0x8023BEC4: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8023BEC8: b           L_8023CBC0
    // 0x8023BECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8023CBC0;
    // 0x8023BECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8023BED0:
    // 0x8023BED0: sw          $zero, 0x930($at)
    MEM_W(0X930, ctx->r1) = 0;
    // 0x8023BED4: lw          $t8, 0x3C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X3C);
    // 0x8023BED8: addiu       $a1, $a1, 0x934
    ctx->r5 = ADD32(ctx->r5, 0X934);
    // 0x8023BEDC: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8023BEE0: bne         $t8, $zero, L_8023BEF0
    if (ctx->r24 != 0) {
        // 0x8023BEE4: sw          $t8, 0x18C($sp)
        MEM_W(0X18C, ctx->r29) = ctx->r24;
            goto L_8023BEF0;
    }
    // 0x8023BEE4: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023BEE8: lw          $t6, 0x38($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X38);
    // 0x8023BEEC: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
L_8023BEF0:
    // 0x8023BEF0: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023BEF4: lhu         $t8, 0x0($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X0);
    // 0x8023BEF8: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x8023BEFC: sw          $t7, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r15;
    // 0x8023BF00: andi        $t9, $t8, 0x400
    ctx->r25 = ctx->r24 & 0X400;
    // 0x8023BF04: beq         $t9, $zero, L_8023BF18
    if (ctx->r25 == 0) {
        // 0x8023BF08: lw          $s5, 0x34($s0)
        ctx->r21 = MEM_W(ctx->r16, 0X34);
            goto L_8023BF18;
    }
    // 0x8023BF08: lw          $s5, 0x34($s0)
    ctx->r21 = MEM_W(ctx->r16, 0X34);
    // 0x8023BF0C: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x8023BF10: nor         $t7, $t6, $zero
    ctx->r15 = ~(ctx->r14 | 0);
    // 0x8023BF14: sh          $t7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r15;
L_8023BF18:
    // 0x8023BF18: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x8023BF1C: andi        $t8, $a0, 0x400
    ctx->r24 = ctx->r4 & 0X400;
    // 0x8023BF20: beq         $t8, $zero, L_8023BF34
    if (ctx->r24 == 0) {
        // 0x8023BF24: or          $s4, $a0, $zero
        ctx->r20 = ctx->r4 | 0;
            goto L_8023BF34;
    }
    // 0x8023BF24: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8023BF28: sh          $a0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r4;
    // 0x8023BF2C: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x8023BF30: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
L_8023BF34:
    // 0x8023BF34: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8023BF38: andi        $v1, $s4, 0x1
    ctx->r3 = ctx->r20 & 0X1;
    // 0x8023BF3C: beql        $v0, $s4, L_8023C0CC
    if (ctx->r2 == ctx->r20) {
        // 0x8023BF40: andi        $t7, $a0, 0x8
        ctx->r15 = ctx->r4 & 0X8;
            goto L_8023C0CC;
    }
    goto skip_0;
    // 0x8023BF40: andi        $t7, $a0, 0x8
    ctx->r15 = ctx->r4 & 0X8;
    skip_0:
    // 0x8023BF44: beq         $v1, $zero, L_8023BF80
    if (ctx->r3 == 0) {
        // 0x8023BF48: andi        $t9, $v0, 0x1
        ctx->r25 = ctx->r2 & 0X1;
            goto L_8023BF80;
    }
    // 0x8023BF48: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x8023BF4C: bne         $t9, $zero, L_8023BF80
    if (ctx->r25 != 0) {
        // 0x8023BF50: lw          $t6, 0x18C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18C);
            goto L_8023BF80;
    }
    // 0x8023BF50: lw          $t6, 0x18C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18C);
    // 0x8023BF54: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8023BF58: sw          $t7, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r15;
    // 0x8023BF5C: lui         $t8, 0xB900
    ctx->r24 = S32(0XB900 << 16);
    // 0x8023BF60: lui         $t9, 0x50
    ctx->r25 = S32(0X50 << 16);
    // 0x8023BF64: ori         $t9, $t9, 0x4240
    ctx->r25 = ctx->r25 | 0X4240;
    // 0x8023BF68: ori         $t8, $t8, 0x31D
    ctx->r24 = ctx->r24 | 0X31D;
    // 0x8023BF6C: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x8023BF70: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x8023BF74: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x8023BF78: b           L_8023BFB8
    // 0x8023BF7C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
        goto L_8023BFB8;
    // 0x8023BF7C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
L_8023BF80:
    // 0x8023BF80: bne         $v1, $zero, L_8023BFB8
    if (ctx->r3 != 0) {
        // 0x8023BF84: andi        $t6, $v0, 0x1
        ctx->r14 = ctx->r2 & 0X1;
            goto L_8023BFB8;
    }
    // 0x8023BF84: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x8023BF88: beq         $t6, $zero, L_8023BFB8
    if (ctx->r14 == 0) {
        // 0x8023BF8C: lw          $t7, 0x18C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18C);
            goto L_8023BFB8;
    }
    // 0x8023BF8C: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023BF90: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8023BF94: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023BF98: lui         $t9, 0xB900
    ctx->r25 = S32(0XB900 << 16);
    // 0x8023BF9C: lui         $t6, 0xF0A
    ctx->r14 = S32(0XF0A << 16);
    // 0x8023BFA0: ori         $t6, $t6, 0x7008
    ctx->r14 = ctx->r14 | 0X7008;
    // 0x8023BFA4: ori         $t9, $t9, 0x31D
    ctx->r25 = ctx->r25 | 0X31D;
    // 0x8023BFA8: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x8023BFAC: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8023BFB0: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x8023BFB4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
L_8023BFB8:
    // 0x8023BFB8: andi        $v0, $s4, 0x2
    ctx->r2 = ctx->r20 & 0X2;
    // 0x8023BFBC: beq         $v0, $zero, L_8023C018
    if (ctx->r2 == 0) {
        // 0x8023BFC0: nop
    
            goto L_8023C018;
    }
    // 0x8023BFC0: nop

    // 0x8023BFC4: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x8023BFC8: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x8023BFCC: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x8023BFD0: bne         $t8, $zero, L_8023C018
    if (ctx->r24 != 0) {
        // 0x8023BFD4: addiu       $t6, $t9, 0x8
        ctx->r14 = ADD32(ctx->r25, 0X8);
            goto L_8023C018;
    }
    // 0x8023BFD4: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x8023BFD8: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023BFDC: lui         $t7, 0xF900
    ctx->r15 = S32(0XF900 << 16);
    // 0x8023BFE0: addiu       $t8, $zero, -0xFF
    ctx->r24 = ADD32(0, -0XFF);
    // 0x8023BFE4: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8023BFE8: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x8023BFEC: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x8023BFF0: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x8023BFF4: ori         $t7, $t7, 0x2
    ctx->r15 = ctx->r15 | 0X2;
    // 0x8023BFF8: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x8023BFFC: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C000: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8023C004: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8023C008: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x8023C00C: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x8023C010: b           L_8023C050
    // 0x8023C014: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
        goto L_8023C050;
    // 0x8023C014: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
L_8023C018:
    // 0x8023C018: bnel        $v0, $zero, L_8023C054
    if (ctx->r2 != 0) {
        // 0x8023C01C: andi        $a3, $s4, 0x80
        ctx->r7 = ctx->r20 & 0X80;
            goto L_8023C054;
    }
    goto skip_1;
    // 0x8023C01C: andi        $a3, $s4, 0x80
    ctx->r7 = ctx->r20 & 0X80;
    skip_1:
    // 0x8023C020: lhu         $t9, 0x0($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X0);
    // 0x8023C024: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C028: andi        $t6, $t9, 0x2
    ctx->r14 = ctx->r25 & 0X2;
    // 0x8023C02C: beq         $t6, $zero, L_8023C050
    if (ctx->r14 == 0) {
        // 0x8023C030: addiu       $t8, $t7, 0x8
        ctx->r24 = ADD32(ctx->r15, 0X8);
            goto L_8023C050;
    }
    // 0x8023C030: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8023C034: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023C038: lui         $t9, 0xB900
    ctx->r25 = S32(0XB900 << 16);
    // 0x8023C03C: ori         $t9, $t9, 0x2
    ctx->r25 = ctx->r25 | 0X2;
    // 0x8023C040: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x8023C044: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8023C048: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x8023C04C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
L_8023C050:
    // 0x8023C050: andi        $a3, $s4, 0x80
    ctx->r7 = ctx->r20 & 0X80;
L_8023C054:
    // 0x8023C054: beq         $a3, $zero, L_8023C090
    if (ctx->r7 == 0) {
        // 0x8023C058: nop
    
            goto L_8023C090;
    }
    // 0x8023C058: nop

    // 0x8023C05C: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x8023C060: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C064: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x8023C068: bne         $t7, $zero, L_8023C090
    if (ctx->r15 != 0) {
        // 0x8023C06C: addiu       $t9, $t8, 0x8
        ctx->r25 = ADD32(ctx->r24, 0X8);
            goto L_8023C090;
    }
    // 0x8023C06C: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8023C070: sw          $t9, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r25;
    // 0x8023C074: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x8023C078: ori         $t6, $t6, 0xC02
    ctx->r14 = ctx->r14 | 0XC02;
    // 0x8023C07C: addiu       $t7, $zero, 0x3000
    ctx->r15 = ADD32(0, 0X3000);
    // 0x8023C080: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8023C084: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
    // 0x8023C088: b           L_8023C0C8
    // 0x8023C08C: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
        goto L_8023C0C8;
    // 0x8023C08C: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
L_8023C090:
    // 0x8023C090: bnel        $a3, $zero, L_8023C0CC
    if (ctx->r7 != 0) {
        // 0x8023C094: andi        $t7, $a0, 0x8
        ctx->r15 = ctx->r4 & 0X8;
            goto L_8023C0CC;
    }
    goto skip_2;
    // 0x8023C094: andi        $t7, $a0, 0x8
    ctx->r15 = ctx->r4 & 0X8;
    skip_2:
    // 0x8023C098: lhu         $t8, 0x0($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X0);
    // 0x8023C09C: lw          $t6, 0x18C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C0A0: andi        $t9, $t8, 0x80
    ctx->r25 = ctx->r24 & 0X80;
    // 0x8023C0A4: beq         $t9, $zero, L_8023C0C8
    if (ctx->r25 == 0) {
        // 0x8023C0A8: addiu       $t7, $t6, 0x8
        ctx->r15 = ADD32(ctx->r14, 0X8);
            goto L_8023C0C8;
    }
    // 0x8023C0A8: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8023C0AC: sw          $t7, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r15;
    // 0x8023C0B0: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8023C0B4: ori         $t8, $t8, 0xC02
    ctx->r24 = ctx->r24 | 0XC02;
    // 0x8023C0B8: addiu       $t9, $zero, 0x2000
    ctx->r25 = ADD32(0, 0X2000);
    // 0x8023C0BC: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x8023C0C0: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x8023C0C4: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
L_8023C0C8:
    // 0x8023C0C8: andi        $t7, $a0, 0x8
    ctx->r15 = ctx->r4 & 0X8;
L_8023C0CC:
    // 0x8023C0CC: beq         $t7, $zero, L_8023C0F4
    if (ctx->r15 == 0) {
        // 0x8023C0D0: sh          $a0, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r4;
            goto L_8023C0F4;
    }
    // 0x8023C0D0: sh          $a0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r4;
    // 0x8023C0D4: lw          $v0, 0x18C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C0D8: lui         $t6, 0xEE00
    ctx->r14 = S32(0XEE00 << 16);
    // 0x8023C0DC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8023C0E0: sw          $t9, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r25;
    // 0x8023C0E4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8023C0E8: lh          $t8, 0x16($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X16);
    // 0x8023C0EC: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8023C0F0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
L_8023C0F4:
    // 0x8023C0F4: lw          $v0, 0x18C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C0F8: lui         $t8, 0xFA00
    ctx->r24 = S32(0XFA00 << 16);
    // 0x8023C0FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8023C100: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8023C104: sw          $t7, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r15;
    // 0x8023C108: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8023C10C: lbu         $t6, 0x18($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X18);
    // 0x8023C110: lbu         $t9, 0x19($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X19);
    // 0x8023C114: sll         $t7, $t6, 24
    ctx->r15 = S32(ctx->r14 << 24);
    // 0x8023C118: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x8023C11C: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x8023C120: lbu         $t7, 0x1A($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1A);
    // 0x8023C124: sll         $t6, $t7, 8
    ctx->r14 = S32(ctx->r15 << 8);
    // 0x8023C128: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x8023C12C: lbu         $t8, 0x1B($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1B);
    // 0x8023C130: or          $t6, $t9, $t8
    ctx->r14 = ctx->r25 | ctx->r24;
    // 0x8023C134: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8023C138: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x8023C13C: beq         $a0, $at, L_8023C14C
    if (ctx->r4 == ctx->r1) {
        // 0x8023C140: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8023C14C;
    }
    // 0x8023C140: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8023C144: bnel        $a0, $at, L_8023C1A8
    if (ctx->r4 != ctx->r1) {
        // 0x8023C148: lbu         $t9, 0x1B($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X1B);
            goto L_8023C1A8;
    }
    goto skip_3;
    // 0x8023C148: lbu         $t9, 0x1B($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1B);
    skip_3:
L_8023C14C:
    // 0x8023C14C: lbu         $t7, 0x1B($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1B);
    // 0x8023C150: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C154: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8023C158: bne         $t7, $at, L_8023C184
    if (ctx->r15 != ctx->r1) {
        // 0x8023C15C: addiu       $t8, $t9, 0x8
        ctx->r24 = ADD32(ctx->r25, 0X8);
            goto L_8023C184;
    }
    // 0x8023C15C: addiu       $t8, $t9, 0x8
    ctx->r24 = ADD32(ctx->r25, 0X8);
    // 0x8023C160: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C164: lui         $t6, 0xFC11
    ctx->r14 = S32(0XFC11 << 16);
    // 0x8023C168: ori         $t6, $t6, 0xFE23
    ctx->r14 = ctx->r14 | 0XFE23;
    // 0x8023C16C: addiu       $t8, $t9, 0x8
    ctx->r24 = ADD32(ctx->r25, 0X8);
    // 0x8023C170: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023C174: addiu       $t7, $zero, -0xC07
    ctx->r15 = ADD32(0, -0XC07);
    // 0x8023C178: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x8023C17C: b           L_8023C1F8
    // 0x8023C180: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
        goto L_8023C1F8;
    // 0x8023C180: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
L_8023C184:
    // 0x8023C184: lui         $t6, 0xFC11
    ctx->r14 = S32(0XFC11 << 16);
    // 0x8023C188: lui         $t7, 0xFF2F
    ctx->r15 = S32(0XFF2F << 16);
    // 0x8023C18C: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x8023C190: ori         $t6, $t6, 0x9623
    ctx->r14 = ctx->r14 | 0X9623;
    // 0x8023C194: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023C198: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x8023C19C: b           L_8023C1F8
    // 0x8023C1A0: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
        goto L_8023C1F8;
    // 0x8023C1A0: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x8023C1A4: lbu         $t9, 0x1B($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1B);
L_8023C1A8:
    // 0x8023C1A8: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C1AC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8023C1B0: bne         $t9, $at, L_8023C1DC
    if (ctx->r25 != ctx->r1) {
        // 0x8023C1B4: addiu       $t6, $t8, 0x8
        ctx->r14 = ADD32(ctx->r24, 0X8);
            goto L_8023C1DC;
    }
    // 0x8023C1B4: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C1B8: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C1BC: lui         $t7, 0xFC11
    ctx->r15 = S32(0XFC11 << 16);
    // 0x8023C1C0: ori         $t7, $t7, 0xFE23
    ctx->r15 = ctx->r15 | 0XFE23;
    // 0x8023C1C4: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C1C8: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C1CC: addiu       $t9, $zero, -0xC07
    ctx->r25 = ADD32(0, -0XC07);
    // 0x8023C1D0: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x8023C1D4: b           L_8023C1F8
    // 0x8023C1D8: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
        goto L_8023C1F8;
    // 0x8023C1D8: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
L_8023C1DC:
    // 0x8023C1DC: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C1E0: lui         $t7, 0xFC11
    ctx->r15 = S32(0XFC11 << 16);
    // 0x8023C1E4: lui         $t9, 0xFF2F
    ctx->r25 = S32(0XFF2F << 16);
    // 0x8023C1E8: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x8023C1EC: ori         $t7, $t7, 0x9623
    ctx->r15 = ctx->r15 | 0X9623;
    // 0x8023C1F0: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C1F4: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
L_8023C1F8:
    // 0x8023C1F8: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x8023C1FC: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C200: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8023C204: bne         $a0, $at, L_8023C2F8
    if (ctx->r4 != ctx->r1) {
        // 0x8023C208: addiu       $t6, $t8, 0x8
        ctx->r14 = ADD32(ctx->r24, 0X8);
            goto L_8023C2F8;
    }
    // 0x8023C208: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C20C: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C210: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8023C214: ori         $t7, $t7, 0xE02
    ctx->r15 = ctx->r15 | 0XE02;
    // 0x8023C218: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x8023C21C: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x8023C220: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C224: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C228: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x8023C22C: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x8023C230: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C234: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C238: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C23C: lw          $t9, 0x20($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X20);
    // 0x8023C240: lui         $t7, 0xE800
    ctx->r15 = S32(0XE800 << 16);
    // 0x8023C244: lui         $t0, 0x700
    ctx->r8 = S32(0X700 << 16);
    // 0x8023C248: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x8023C24C: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C250: lui         $a3, 0xE600
    ctx->r7 = S32(0XE600 << 16);
    // 0x8023C254: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C258: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C25C: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8023C260: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C264: lw          $a1, 0x18C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C268: addiu       $t8, $a1, 0x8
    ctx->r24 = ADD32(ctx->r5, 0X8);
    // 0x8023C26C: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023C270: lh          $t6, 0x1C($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X1C);
    // 0x8023C274: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x8023C278: addiu       $t7, $t6, 0x100
    ctx->r15 = ADD32(ctx->r14, 0X100);
    // 0x8023C27C: andi        $t9, $t7, 0x1FF
    ctx->r25 = ctx->r15 & 0X1FF;
    // 0x8023C280: or          $t8, $t9, $at
    ctx->r24 = ctx->r25 | ctx->r1;
    // 0x8023C284: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8023C288: lw          $t6, 0x18C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C28C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8023C290: sw          $t7, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r15;
    // 0x8023C294: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8023C298: sw          $a3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r7;
    // 0x8023C29C: lw          $v0, 0x18C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C2A0: lui         $t6, 0xF000
    ctx->r14 = S32(0XF000 << 16);
    // 0x8023C2A4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8023C2A8: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023C2AC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8023C2B0: lh          $t7, 0x1E($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X1E);
    // 0x8023C2B4: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x8023C2B8: andi        $t8, $t9, 0x3FF
    ctx->r24 = ctx->r25 & 0X3FF;
    // 0x8023C2BC: sll         $t6, $t8, 14
    ctx->r14 = S32(ctx->r24 << 14);
    // 0x8023C2C0: or          $t7, $t6, $t0
    ctx->r15 = ctx->r14 | ctx->r8;
    // 0x8023C2C4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8023C2C8: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C2CC: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8023C2D0: addiu       $t8, $t9, 0x8
    ctx->r24 = ADD32(ctx->r25, 0X8);
    // 0x8023C2D4: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023C2D8: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8023C2DC: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x8023C2E0: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C2E4: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x8023C2E8: sw          $t9, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r25;
    // 0x8023C2EC: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8023C2F0: sw          $a3, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r7;
    // 0x8023C2F4: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
L_8023C2F8:
    // 0x8023C2F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8023C2FC: bne         $a3, $a0, L_8023C394
    if (ctx->r7 != ctx->r4) {
        // 0x8023C300: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8023C394;
    }
    // 0x8023C300: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8023C304: lhu         $t8, 0x14($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X14);
    // 0x8023C308: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C30C: andi        $t6, $t8, 0x20
    ctx->r14 = ctx->r24 & 0X20;
    // 0x8023C310: beq         $t6, $zero, L_8023C394
    if (ctx->r14 == 0) {
        // 0x8023C314: addiu       $t9, $t7, 0x8
        ctx->r25 = ADD32(ctx->r15, 0X8);
            goto L_8023C394;
    }
    // 0x8023C314: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x8023C318: sw          $t9, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r25;
    // 0x8023C31C: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8023C320: ori         $t8, $t8, 0x903
    ctx->r24 = ctx->r24 | 0X903;
    // 0x8023C324: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x8023C328: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8023C32C: lw          $t6, 0x18C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C330: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8023C334: ori         $t9, $t9, 0xC02
    ctx->r25 = ctx->r25 | 0XC02;
    // 0x8023C338: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8023C33C: sw          $t7, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r15;
    // 0x8023C340: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8023C344: sw          $t9, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r25;
    // 0x8023C348: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C34C: lui         $t9, 0x77FC
    ctx->r25 = S32(0X77FC << 16);
    // 0x8023C350: lui         $t7, 0xFC17
    ctx->r15 = S32(0XFC17 << 16);
    // 0x8023C354: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C358: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C35C: ori         $t7, $t7, 0xFE2F
    ctx->r15 = ctx->r15 | 0XFE2F;
    // 0x8023C360: ori         $t9, $t9, 0xF87C
    ctx->r25 = ctx->r25 | 0XF87C;
    // 0x8023C364: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x8023C368: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C36C: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C370: lui         $t7, 0xEC15
    ctx->r15 = S32(0XEC15 << 16);
    // 0x8023C374: lui         $t9, 0x3B78
    ctx->r25 = S32(0X3B78 << 16);
    // 0x8023C378: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C37C: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C380: ori         $t9, $t9, 0xE42A
    ctx->r25 = ctx->r25 | 0XE42A;
    // 0x8023C384: ori         $t7, $t7, 0xFD5D
    ctx->r15 = ctx->r15 | 0XFD5D;
    // 0x8023C388: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C38C: b           L_8023C440
    // 0x8023C390: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
        goto L_8023C440;
    // 0x8023C390: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
L_8023C394:
    // 0x8023C394: bne         $a3, $a0, L_8023C440
    if (ctx->r7 != ctx->r4) {
        // 0x8023C398: lw          $t8, 0x18C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X18C);
            goto L_8023C440;
    }
    // 0x8023C398: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C39C: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C3A0: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C3A4: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8023C3A8: ori         $t7, $t7, 0x1402
    ctx->r15 = ctx->r15 | 0X1402;
    // 0x8023C3AC: lui         $t9, 0x10
    ctx->r25 = S32(0X10 << 16);
    // 0x8023C3B0: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x8023C3B4: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C3B8: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C3BC: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8023C3C0: ori         $t7, $t7, 0xC02
    ctx->r15 = ctx->r15 | 0XC02;
    // 0x8023C3C4: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C3C8: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C3CC: addiu       $t9, $zero, 0x2000
    ctx->r25 = ADD32(0, 0X2000);
    // 0x8023C3D0: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x8023C3D4: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C3D8: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C3DC: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8023C3E0: ori         $t7, $t7, 0x903
    ctx->r15 = ctx->r15 | 0X903;
    // 0x8023C3E4: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C3E8: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C3EC: addiu       $t9, $zero, 0xA00
    ctx->r25 = ADD32(0, 0XA00);
    // 0x8023C3F0: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x8023C3F4: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C3F8: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C3FC: lui         $t7, 0xEC15
    ctx->r15 = S32(0XEC15 << 16);
    // 0x8023C400: lui         $t9, 0x3B78
    ctx->r25 = S32(0X3B78 << 16);
    // 0x8023C404: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C408: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C40C: ori         $t9, $t9, 0xE42A
    ctx->r25 = ctx->r25 | 0XE42A;
    // 0x8023C410: ori         $t7, $t7, 0xFD5D
    ctx->r15 = ctx->r15 | 0XFD5D;
    // 0x8023C414: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C418: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x8023C41C: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C420: lui         $t9, 0x7FFD
    ctx->r25 = S32(0X7FFD << 16);
    // 0x8023C424: lui         $t7, 0xFC27
    ctx->r15 = S32(0XFC27 << 16);
    // 0x8023C428: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C42C: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C430: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x8023C434: ori         $t9, $t9, 0x7E38
    ctx->r25 = ctx->r25 | 0X7E38;
    // 0x8023C438: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x8023C43C: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
L_8023C440:
    // 0x8023C440: lhu         $s4, 0x14($s0)
    ctx->r20 = MEM_HU(ctx->r16, 0X14);
    // 0x8023C444: andi        $t8, $s4, 0x10
    ctx->r24 = ctx->r20 & 0X10;
    // 0x8023C448: beq         $t8, $zero, L_8023C45C
    if (ctx->r24 == 0) {
        // 0x8023C44C: andi        $s3, $s4, 0x20
        ctx->r19 = ctx->r20 & 0X20;
            goto L_8023C45C;
    }
    // 0x8023C44C: andi        $s3, $s4, 0x20
    ctx->r19 = ctx->r20 & 0X20;
    // 0x8023C450: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8023C454: b           L_8023C468
    // 0x8023C458: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
        goto L_8023C468;
    // 0x8023C458: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
L_8023C45C:
    // 0x8023C45C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8023C460: nop

    // 0x8023C464: mov.s       $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    ctx->f16.fl = ctx->f14.fl;
L_8023C468:
    // 0x8023C468: beql        $s5, $zero, L_8023C95C
    if (ctx->r21 == 0) {
        // 0x8023C46C: lh          $t7, 0x4($s0)
        ctx->r15 = MEM_H(ctx->r16, 0X4);
            goto L_8023C95C;
    }
    goto skip_4;
    // 0x8023C46C: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
    skip_4:
    // 0x8023C470: beql        $s3, $zero, L_8023C4AC
    if (ctx->r19 == 0) {
        // 0x8023C474: lh          $t7, 0x2($s0)
        ctx->r15 = MEM_H(ctx->r16, 0X2);
            goto L_8023C4AC;
    }
    goto skip_5;
    // 0x8023C474: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
    skip_5:
    // 0x8023C478: lbu         $t6, 0x30($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X30);
    // 0x8023C47C: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C480: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8023C484: beq         $a3, $t6, L_8023C4A8
    if (ctx->r7 == ctx->r14) {
        // 0x8023C488: addiu       $t9, $t7, 0x8
        ctx->r25 = ADD32(ctx->r15, 0X8);
            goto L_8023C4A8;
    }
    // 0x8023C488: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x8023C48C: sw          $t9, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r25;
    // 0x8023C490: ori         $t8, $t8, 0x1402
    ctx->r24 = ctx->r24 | 0X1402;
    // 0x8023C494: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x8023C498: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8023C49C: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x8023C4A0: lhu         $s4, 0x14($s0)
    ctx->r20 = MEM_HU(ctx->r16, 0X14);
    // 0x8023C4A4: andi        $s3, $s4, 0x20
    ctx->r19 = ctx->r20 & 0X20;
L_8023C4A8:
    // 0x8023C4A8: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
L_8023C4AC:
    // 0x8023C4AC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023C4B0: lwc1        $f12, 0x5660($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5660);
    // 0x8023C4B4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8023C4B8: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x8023C4BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8023C4C0: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8023C4C4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8023C4C8: andi        $t9, $s4, 0x80
    ctx->r25 = ctx->r20 & 0X80;
    // 0x8023C4CC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8023C4D0: or          $ra, $zero, $zero
    ctx->r31 = 0 | 0;
    // 0x8023C4D4: div.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8023C4D8: andi        $t8, $s4, 0x100
    ctx->r24 = ctx->r20 & 0X100;
    // 0x8023C4DC: add.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x8023C4E0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8023C4E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8023C4E8: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x8023C4EC: nop

    // 0x8023C4F0: sw          $v0, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r2;
    // 0x8023C4F4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8023C4F8: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x8023C4FC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8023C500: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8023C504: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x8023C508: nop

    // 0x8023C50C: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x8023C510: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x8023C514: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8023C518: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8023C51C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8023C520: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x8023C524: nop

    // 0x8023C528: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8023C52C: sra         $t7, $v1, 5
    ctx->r15 = S32(SIGNED(ctx->r3) >> 5);
    // 0x8023C530: beq         $t9, $zero, L_8023C53C
    if (ctx->r25 == 0) {
        // 0x8023C534: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_8023C53C;
    }
    // 0x8023C534: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x8023C538: addiu       $s1, $t7, 0x10
    ctx->r17 = ADD32(ctx->r15, 0X10);
L_8023C53C:
    // 0x8023C53C: beql        $t8, $zero, L_8023C550
    if (ctx->r24 == 0) {
        // 0x8023C540: lh          $t2, 0x2C($s0)
        ctx->r10 = MEM_H(ctx->r16, 0X2C);
            goto L_8023C550;
    }
    goto skip_6;
    // 0x8023C540: lh          $t2, 0x2C($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2C);
    skip_6:
    // 0x8023C544: lh          $t6, 0x42($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X42);
    // 0x8023C548: addu        $s1, $s1, $t6
    ctx->r17 = ADD32(ctx->r17, ctx->r14);
    // 0x8023C54C: lh          $t2, 0x2C($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2C);
L_8023C550:
    // 0x8023C550: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x8023C554: nop

    // 0x8023C558: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8023C55C: mul.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8023C560: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x8023C564: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x8023C568: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8023C56C: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8023C570: beql        $s3, $zero, L_8023C590
    if (ctx->r19 == 0) {
        // 0x8023C574: sw          $zero, 0x1A4($sp)
        MEM_W(0X1A4, ctx->r29) = 0;
            goto L_8023C590;
    }
    goto skip_7;
    // 0x8023C574: sw          $zero, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = 0;
    skip_7:
    // 0x8023C578: lbu         $t9, 0x30($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X30);
    // 0x8023C57C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023C580: beql        $t9, $at, L_8023C590
    if (ctx->r25 == ctx->r1) {
        // 0x8023C584: sw          $zero, 0x1A4($sp)
        MEM_W(0X1A4, ctx->r29) = 0;
            goto L_8023C590;
    }
    goto skip_8;
    // 0x8023C584: sw          $zero, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = 0;
    skip_8:
    // 0x8023C588: addiu       $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
    // 0x8023C58C: sw          $zero, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = 0;
L_8023C590:
    // 0x8023C590: lh          $v0, 0x28($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X28);
    // 0x8023C594: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x8023C598: blez        $v0, L_8023C8C8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023C59C: nop
    
            goto L_8023C8C8;
    }
    // 0x8023C59C: nop

    // 0x8023C5A0: lh          $a2, 0x0($s5)
    ctx->r6 = MEM_H(ctx->r21, 0X0);
    // 0x8023C5A4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023C5A8: blez        $a2, L_8023C8C8
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8023C5AC: nop
    
            goto L_8023C8C8;
    }
    // 0x8023C5AC: nop

    // 0x8023C5B0: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x8023C5B4: lwc1        $f12, 0x5664($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5664);
    // 0x8023C5B8: lh          $t8, 0x4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X4);
L_8023C5BC:
    // 0x8023C5BC: addu        $t6, $a2, $s2
    ctx->r14 = ADD32(ctx->r6, ctx->r18);
    // 0x8023C5C0: andi        $a3, $s4, 0x80
    ctx->r7 = ctx->r20 & 0X80;
    // 0x8023C5C4: slt         $at, $t8, $t6
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8023C5C8: beq         $at, $zero, L_8023C6C4
    if (ctx->r1 == 0) {
        // 0x8023C5CC: andi        $t4, $s4, 0x100
        ctx->r12 = ctx->r20 & 0X100;
            goto L_8023C6C4;
    }
    // 0x8023C5CC: andi        $t4, $s4, 0x100
    ctx->r12 = ctx->r20 & 0X100;
    // 0x8023C5D0: lh          $a0, 0x2C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2C);
    // 0x8023C5D4: lh          $t9, 0x2($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X2);
    // 0x8023C5D8: lh          $t7, 0x12($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X12);
    // 0x8023C5DC: addu        $ra, $ra, $a0
    ctx->r31 = ADD32(ctx->r31, ctx->r4);
    // 0x8023C5E0: mtc1        $ra, $f6
    ctx->f6.u32l = ctx->r31;
    // 0x8023C5E4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8023C5E8: addu        $t2, $a0, $ra
    ctx->r10 = ADD32(ctx->r4, ctx->r31);
    // 0x8023C5EC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8023C5F0: addu        $s7, $s7, $t7
    ctx->r23 = ADD32(ctx->r23, ctx->r15);
    // 0x8023C5F4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8023C5F8: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8023C5FC: lh          $a1, 0x6($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X6);
    // 0x8023C600: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8023C604: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8023C608: add.s       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x8023C60C: add.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x8023C610: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8023C614: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x8023C618: nop

    // 0x8023C61C: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8023C620: nop

    // 0x8023C624: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8023C628: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8023C62C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8023C630: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8023C634: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8023C638: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8023C63C: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8023C640: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x8023C644: nop

    // 0x8023C648: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8023C64C: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x8023C650: sra         $t7, $v1, 5
    ctx->r15 = S32(SIGNED(ctx->r3) >> 5);
    // 0x8023C654: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x8023C658: beq         $a3, $zero, L_8023C664
    if (ctx->r7 == 0) {
        // 0x8023C65C: add.s       $f10, $f8, $f12
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
            goto L_8023C664;
    }
    // 0x8023C65C: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x8023C660: addiu       $s1, $t7, 0x10
    ctx->r17 = ADD32(ctx->r15, 0X10);
L_8023C664:
    // 0x8023C664: beq         $t4, $zero, L_8023C674
    if (ctx->r12 == 0) {
        // 0x8023C668: trunc.w.s   $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
            goto L_8023C674;
    }
    // 0x8023C668: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8023C66C: lh          $t9, 0x42($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X42);
    // 0x8023C670: addu        $s1, $s1, $t9
    ctx->r17 = ADD32(ctx->r17, ctx->r25);
L_8023C674:
    // 0x8023C674: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x8023C678: addu        $t6, $v0, $s7
    ctx->r14 = ADD32(ctx->r2, ctx->r23);
    // 0x8023C67C: sw          $t6, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r14;
    // 0x8023C680: beq         $s3, $zero, L_8023C69C
    if (ctx->r19 == 0) {
        // 0x8023C684: addu        $t3, $t3, $s7
        ctx->r11 = ADD32(ctx->r11, ctx->r23);
            goto L_8023C69C;
    }
    // 0x8023C684: addu        $t3, $t3, $s7
    ctx->r11 = ADD32(ctx->r11, ctx->r23);
    // 0x8023C688: lbu         $t7, 0x30($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X30);
    // 0x8023C68C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023C690: beql        $t7, $at, L_8023C6A0
    if (ctx->r15 == ctx->r1) {
        // 0x8023C694: lh          $v0, 0xC($s5)
        ctx->r2 = MEM_H(ctx->r21, 0XC);
            goto L_8023C6A0;
    }
    goto skip_9;
    // 0x8023C694: lh          $v0, 0xC($s5)
    ctx->r2 = MEM_H(ctx->r21, 0XC);
    skip_9:
    // 0x8023C698: addiu       $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
L_8023C69C:
    // 0x8023C69C: lh          $v0, 0xC($s5)
    ctx->r2 = MEM_H(ctx->r21, 0XC);
L_8023C6A0:
    // 0x8023C6A0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8023C6A4: beq         $v0, $zero, L_8023C6B4
    if (ctx->r2 == 0) {
        // 0x8023C6A8: nop
    
            goto L_8023C6B4;
    }
    // 0x8023C6A8: nop

    // 0x8023C6AC: b           L_8023C6B4
    // 0x8023C6B0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8023C6B4;
    // 0x8023C6B0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8023C6B4:
    // 0x8023C6B4: addu        $t9, $v1, $ra
    ctx->r25 = ADD32(ctx->r3, ctx->r31);
    // 0x8023C6B8: slt         $at, $a1, $t9
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8023C6BC: bne         $at, $zero, L_8023C8C8
    if (ctx->r1 != 0) {
        // 0x8023C6C0: nop
    
            goto L_8023C8C8;
    }
    // 0x8023C6C0: nop

L_8023C6C4:
    // 0x8023C6C4: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x8023C6C8: mtc1        $s2, $f8
    ctx->f8.u32l = ctx->r18;
    // 0x8023C6CC: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x8023C6D0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8023C6D4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8023C6D8: addu        $t1, $a2, $s2
    ctx->r9 = ADD32(ctx->r6, ctx->r18);
    // 0x8023C6DC: lh          $v0, 0xC($s5)
    ctx->r2 = MEM_H(ctx->r21, 0XC);
    // 0x8023C6E0: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8023C6E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8023C6E8: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8023C6EC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8023C6F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8023C6F4: addu        $t2, $v0, $ra
    ctx->r10 = ADD32(ctx->r2, ctx->r31);
    // 0x8023C6F8: div.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8023C6FC: add.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x8023C700: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8023C704: add.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x8023C708: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8023C70C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8023C710: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x8023C714: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8023C718: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x8023C71C: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x8023C720: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8023C724: addu        $a0, $a1, $s6
    ctx->r4 = ADD32(ctx->r5, ctx->r22);
    // 0x8023C728: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8023C72C: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8023C730: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8023C734: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8023C738: nop

    // 0x8023C73C: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8023C740: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8023C744: mul.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8023C748: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x8023C74C: nop

    // 0x8023C750: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8023C754: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x8023C758: sra         $t8, $v1, 5
    ctx->r24 = S32(SIGNED(ctx->r3) >> 5);
    // 0x8023C75C: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
    // 0x8023C760: beq         $a3, $zero, L_8023C76C
    if (ctx->r7 == 0) {
        // 0x8023C764: add.s       $f6, $f10, $f12
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f12.fl;
            goto L_8023C76C;
    }
    // 0x8023C764: add.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x8023C768: addiu       $t0, $t8, 0x10
    ctx->r8 = ADD32(ctx->r24, 0X10);
L_8023C76C:
    // 0x8023C76C: beq         $t4, $zero, L_8023C77C
    if (ctx->r12 == 0) {
        // 0x8023C770: trunc.w.s   $f4, $f6
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
            goto L_8023C77C;
    }
    // 0x8023C770: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8023C774: lh          $t6, 0x40($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X40);
    // 0x8023C778: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
L_8023C77C:
    // 0x8023C77C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x8023C780: beq         $v0, $zero, L_8023C7D0
    if (ctx->r2 == 0) {
        // 0x8023C784: addiu       $t8, $sp, 0x18C
        ctx->r24 = ADD32(ctx->r29, 0X18C);
            goto L_8023C7D0;
    }
    // 0x8023C784: addiu       $t8, $sp, 0x18C
    ctx->r24 = ADD32(ctx->r29, 0X18C);
    // 0x8023C788: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8023C78C: lh          $t9, 0x2($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X2);
    // 0x8023C790: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8023C794: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8023C798: nop

    // 0x8023C79C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8023C7A0: mul.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8023C7A4: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8023C7A8: add.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x8023C7AC: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8023C7B0: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8023C7B4: beq         $s3, $zero, L_8023C7D0
    if (ctx->r19 == 0) {
        // 0x8023C7B8: addu        $t3, $t3, $s7
        ctx->r11 = ADD32(ctx->r11, ctx->r23);
            goto L_8023C7D0;
    }
    // 0x8023C7B8: addu        $t3, $t3, $s7
    ctx->r11 = ADD32(ctx->r11, ctx->r23);
    // 0x8023C7BC: lbu         $t6, 0x30($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X30);
    // 0x8023C7C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023C7C4: beq         $t6, $at, L_8023C7D0
    if (ctx->r14 == ctx->r1) {
        // 0x8023C7C8: nop
    
            goto L_8023C7D0;
    }
    // 0x8023C7C8: nop

    // 0x8023C7CC: addiu       $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
L_8023C7D0:
    // 0x8023C7D0: beq         $s3, $zero, L_8023C7EC
    if (ctx->r19 == 0) {
        // 0x8023C7D4: addu        $a3, $a3, $s6
        ctx->r7 = ADD32(ctx->r7, ctx->r22);
            goto L_8023C7EC;
    }
    // 0x8023C7D4: addu        $a3, $a3, $s6
    ctx->r7 = ADD32(ctx->r7, ctx->r22);
    // 0x8023C7D8: lbu         $t7, 0x30($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X30);
    // 0x8023C7DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023C7E0: beql        $t7, $at, L_8023C7F0
    if (ctx->r15 == ctx->r1) {
        // 0x8023C7E4: lw          $t9, 0x8($s5)
        ctx->r25 = MEM_W(ctx->r21, 0X8);
            goto L_8023C7F0;
    }
    goto skip_10;
    // 0x8023C7E4: lw          $t9, 0x8($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X8);
    skip_10:
    // 0x8023C7E8: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
L_8023C7EC:
    // 0x8023C7EC: lw          $t9, 0x8($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X8);
L_8023C7F0:
    // 0x8023C7F0: or          $t2, $s5, $zero
    ctx->r10 = ctx->r21 | 0;
    // 0x8023C7F4: or          $t4, $s1, $zero
    ctx->r12 = ctx->r17 | 0;
    // 0x8023C7F8: beql        $t9, $zero, L_8023C898
    if (ctx->r25 == 0) {
        // 0x8023C7FC: lw          $t6, 0x1A4($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1A4);
            goto L_8023C898;
    }
    goto skip_11;
    // 0x8023C7FC: lw          $t6, 0x1A4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1A4);
    skip_11:
    // 0x8023C800: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x8023C804: sw          $ra, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->r31;
    // 0x8023C808: sw          $t8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r24;
    // 0x8023C80C: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x8023C810: lw          $a1, 0x178($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X178);
    // 0x8023C814: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8023C818: sw          $t3, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r11;
    // 0x8023C81C: sw          $s0, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r16;
    // 0x8023C820: sw          $s1, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r17;
    // 0x8023C824: sw          $s2, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->r18;
    // 0x8023C828: sw          $s5, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r21;
    // 0x8023C82C: sw          $s6, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r22;
    // 0x8023C830: sw          $s7, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r23;
    // 0x8023C834: swc1        $f14, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->f14.u32l;
    // 0x8023C838: swc1        $f16, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f16.u32l;
    // 0x8023C83C: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x8023C840: jal         0x8023A7B4
    // 0x8023C844: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    func_8023A7B4(rdram, ctx);
        goto after_0;
    // 0x8023C844: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_0:
    // 0x8023C848: lw          $s0, 0x1A8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1A8);
    // 0x8023C84C: lw          $s5, 0x190($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X190);
    // 0x8023C850: lw          $s2, 0x1A0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1A0);
    // 0x8023C854: lh          $t7, 0x28($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X28);
    // 0x8023C858: lhu         $s4, 0x14($s0)
    ctx->r20 = MEM_HU(ctx->r16, 0X14);
    // 0x8023C85C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023C860: sw          $t7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r15;
    // 0x8023C864: lh          $t9, 0x0($s5)
    ctx->r25 = MEM_H(ctx->r21, 0X0);
    // 0x8023C868: lwc1        $f12, 0x5668($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5668);
    // 0x8023C86C: lw          $t3, 0x170($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X170);
    // 0x8023C870: lw          $ra, 0x19C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X19C);
    // 0x8023C874: lw          $s1, 0x158($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X158);
    // 0x8023C878: lw          $s6, 0x154($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X154);
    // 0x8023C87C: lw          $s7, 0x150($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X150);
    // 0x8023C880: lwc1        $f14, 0x194($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X194);
    // 0x8023C884: lwc1        $f16, 0x198($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X198);
    // 0x8023C888: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8023C88C: andi        $s3, $s4, 0x20
    ctx->r19 = ctx->r20 & 0X20;
    // 0x8023C890: addu        $t1, $t9, $s2
    ctx->r9 = ADD32(ctx->r25, ctx->r18);
    // 0x8023C894: lw          $t6, 0x1A4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1A4);
L_8023C898:
    // 0x8023C898: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8023C89C: lh          $t8, 0x10($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X10);
    // 0x8023C8A0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8023C8A4: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8023C8A8: sw          $t7, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r15;
    // 0x8023C8AC: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
    // 0x8023C8B0: or          $s2, $t1, $zero
    ctx->r18 = ctx->r9 | 0;
    // 0x8023C8B4: beq         $at, $zero, L_8023C8C8
    if (ctx->r1 == 0) {
        // 0x8023C8B8: addu        $s6, $s6, $t8
        ctx->r22 = ADD32(ctx->r22, ctx->r24);
            goto L_8023C8C8;
    }
    // 0x8023C8B8: addu        $s6, $s6, $t8
    ctx->r22 = ADD32(ctx->r22, ctx->r24);
    // 0x8023C8BC: lh          $a2, 0x0($s5)
    ctx->r6 = MEM_H(ctx->r21, 0X0);
    // 0x8023C8C0: bgtzl       $a2, L_8023C5BC
    if (SIGNED(ctx->r6) > 0) {
        // 0x8023C8C4: lh          $t8, 0x4($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X4);
            goto L_8023C5BC;
    }
    goto skip_12;
    // 0x8023C8C4: lh          $t8, 0x4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X4);
    skip_12:
L_8023C8C8:
    // 0x8023C8C8: beq         $s3, $zero, L_8023C8E8
    if (ctx->r19 == 0) {
        // 0x8023C8CC: lw          $t8, 0x18C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X18C);
            goto L_8023C8E8;
    }
    // 0x8023C8CC: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C8D0: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C8D4: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C8D8: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8023C8DC: ori         $t7, $t7, 0x1402
    ctx->r15 = ctx->r15 | 0X1402;
    // 0x8023C8E0: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C8E4: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
L_8023C8E8:
    // 0x8023C8E8: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x8023C8EC: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C8F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023C8F4: bne         $a0, $at, L_8023CB78
    if (ctx->r4 != ctx->r1) {
        // 0x8023C8F8: addiu       $t8, $t9, 0x8
        ctx->r24 = ADD32(ctx->r25, 0X8);
            goto L_8023CB78;
    }
    // 0x8023C8F8: addiu       $t8, $t9, 0x8
    ctx->r24 = ADD32(ctx->r25, 0X8);
    // 0x8023C8FC: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023C900: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x8023C904: ori         $t6, $t6, 0x1402
    ctx->r14 = ctx->r14 | 0X1402;
    // 0x8023C908: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x8023C90C: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8023C910: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C914: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8023C918: ori         $t8, $t8, 0xC02
    ctx->r24 = ctx->r24 | 0XC02;
    // 0x8023C91C: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x8023C920: sw          $t9, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r25;
    // 0x8023C924: addiu       $t6, $zero, 0x2000
    ctx->r14 = ADD32(0, 0X2000);
    // 0x8023C928: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8023C92C: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x8023C930: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C934: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8023C938: ori         $t8, $t8, 0x903
    ctx->r24 = ctx->r24 | 0X903;
    // 0x8023C93C: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x8023C940: sw          $t9, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r25;
    // 0x8023C944: addiu       $t6, $zero, 0xC00
    ctx->r14 = ADD32(0, 0XC00);
    // 0x8023C948: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8023C94C: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x8023C950: b           L_8023CB78
    // 0x8023C954: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
        goto L_8023CB78;
    // 0x8023C954: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x8023C958: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
L_8023C95C:
    // 0x8023C95C: lh          $s2, 0x0($s0)
    ctx->r18 = MEM_H(ctx->r16, 0X0);
    // 0x8023C960: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8023C964: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8023C968: mtc1        $s2, $f8
    ctx->f8.u32l = ctx->r18;
    // 0x8023C96C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8023C970: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8023C974: lh          $t8, 0x6($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X6);
    // 0x8023C978: lh          $a0, 0x2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2);
    // 0x8023C97C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8023C980: lw          $a1, 0x3960($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3960);
    // 0x8023C984: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8023C988: mul.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8023C98C: slt         $at, $s2, $a1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8023C990: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8023C994: or          $ra, $a0, $zero
    ctx->r31 = ctx->r4 | 0;
    // 0x8023C998: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8023C99C: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x8023C9A0: sub.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8023C9A4: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8023C9A8: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8023C9AC: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8023C9B0: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x8023C9B4: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8023C9B8: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8023C9BC: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8023C9C0: sub.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8023C9C4: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8023C9C8: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x8023C9CC: beq         $at, $zero, L_8023C9E8
    if (ctx->r1 == 0) {
        // 0x8023C9D0: nop
    
            goto L_8023C9E8;
    }
    // 0x8023C9D0: nop

    // 0x8023C9D4: lw          $a2, 0x3964($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X3964);
    // 0x8023C9D8: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8023C9DC: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8023C9E0: bne         $at, $zero, L_8023C9F0
    if (ctx->r1 != 0) {
        // 0x8023C9E4: nop
    
            goto L_8023C9F0;
    }
    // 0x8023C9E4: nop

L_8023C9E8:
    // 0x8023C9E8: b           L_8023CB78
    // 0x8023C9EC: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
        goto L_8023CB78;
    // 0x8023C9EC: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
L_8023C9F0:
    // 0x8023C9F0: lw          $v0, 0x3968($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3968);
    // 0x8023C9F4: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023C9F8: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023C9FC: bne         $at, $zero, L_8023CA14
    if (ctx->r1 != 0) {
        // 0x8023CA00: nop
    
            goto L_8023CA14;
    }
    // 0x8023CA00: nop

    // 0x8023CA04: lw          $a0, 0x396C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X396C);
    // 0x8023CA08: slt         $at, $t2, $a0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8023CA0C: beql        $at, $zero, L_8023CA20
    if (ctx->r1 == 0) {
        // 0x8023CA10: slt         $at, $s2, $v0
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_8023CA20;
    }
    goto skip_13;
    // 0x8023CA10: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    skip_13:
L_8023CA14:
    // 0x8023CA14: b           L_8023CB78
    // 0x8023CA18: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
        goto L_8023CB78;
    // 0x8023CA18: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x8023CA1C: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
L_8023CA20:
    // 0x8023CA20: beql        $at, $zero, L_8023CA30
    if (ctx->r1 == 0) {
        // 0x8023CA24: slt         $at, $v1, $a1
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
            goto L_8023CA30;
    }
    goto skip_14;
    // 0x8023CA24: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    skip_14:
    // 0x8023CA28: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8023CA2C: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
L_8023CA30:
    // 0x8023CA30: bnel        $at, $zero, L_8023CA40
    if (ctx->r1 != 0) {
        // 0x8023CA34: slt         $at, $ra, $a0
        ctx->r1 = SIGNED(ctx->r31) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_8023CA40;
    }
    goto skip_15;
    // 0x8023CA34: slt         $at, $ra, $a0
    ctx->r1 = SIGNED(ctx->r31) < SIGNED(ctx->r4) ? 1 : 0;
    skip_15:
    // 0x8023CA38: addiu       $v1, $a1, -0x1
    ctx->r3 = ADD32(ctx->r5, -0X1);
    // 0x8023CA3C: slt         $at, $ra, $a0
    ctx->r1 = SIGNED(ctx->r31) < SIGNED(ctx->r4) ? 1 : 0;
L_8023CA40:
    // 0x8023CA40: beql        $at, $zero, L_8023CA50
    if (ctx->r1 == 0) {
        // 0x8023CA44: slt         $at, $t2, $a2
        ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_8023CA50;
    }
    goto skip_16;
    // 0x8023CA44: slt         $at, $t2, $a2
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
    skip_16:
    // 0x8023CA48: or          $ra, $a0, $zero
    ctx->r31 = ctx->r4 | 0;
    // 0x8023CA4C: slt         $at, $t2, $a2
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
L_8023CA50:
    // 0x8023CA50: bnel        $at, $zero, L_8023CA60
    if (ctx->r1 != 0) {
        // 0x8023CA54: lbu         $t7, 0x18($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X18);
            goto L_8023CA60;
    }
    goto skip_17;
    // 0x8023CA54: lbu         $t7, 0x18($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X18);
    skip_17:
    // 0x8023CA58: addiu       $t2, $a2, -0x1
    ctx->r10 = ADD32(ctx->r6, -0X1);
    // 0x8023CA5C: lbu         $t7, 0x18($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X18);
L_8023CA60:
    // 0x8023CA60: lbu         $t6, 0x19($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X19);
    // 0x8023CA64: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x8023CA68: sll         $t9, $t7, 8
    ctx->r25 = S32(ctx->r15 << 8);
    // 0x8023CA6C: andi        $t8, $t9, 0xF800
    ctx->r24 = ctx->r25 & 0XF800;
    // 0x8023CA70: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8023CA74: andi        $t9, $t7, 0x7C0
    ctx->r25 = ctx->r15 & 0X7C0;
    // 0x8023CA78: lbu         $t7, 0x1A($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1A);
    // 0x8023CA7C: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8023CA80: ori         $t0, $t0, 0x8000
    ctx->r8 = ctx->r8 | 0X8000;
    // 0x8023CA84: sra         $t8, $t7, 2
    ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
    // 0x8023CA88: andi        $t9, $t8, 0x3E
    ctx->r25 = ctx->r24 & 0X3E;
    // 0x8023CA8C: lbu         $t8, 0x1B($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1B);
    // 0x8023CA90: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x8023CA94: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8023CA98: sra         $t6, $t8, 7
    ctx->r14 = S32(SIGNED(ctx->r24) >> 7);
    // 0x8023CA9C: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023CAA0: andi        $t9, $t6, 0x1
    ctx->r25 = ctx->r14 & 0X1;
    // 0x8023CAA4: or          $v0, $t7, $t9
    ctx->r2 = ctx->r15 | ctx->r25;
    // 0x8023CAA8: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023CAAC: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023CAB0: lui         $t7, 0xBB00
    ctx->r15 = S32(0XBB00 << 16);
    // 0x8023CAB4: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023CAB8: sw          $t0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r8;
    // 0x8023CABC: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x8023CAC0: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x8023CAC4: ori         $t6, $t6, 0x1402
    ctx->r14 = ctx->r14 | 0X1402;
    // 0x8023CAC8: addiu       $t8, $t9, 0x8
    ctx->r24 = ADD32(ctx->r25, 0X8);
    // 0x8023CACC: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023CAD0: lui         $t7, 0x30
    ctx->r15 = S32(0X30 << 16);
    // 0x8023CAD4: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x8023CAD8: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x8023CADC: lw          $a2, 0x18C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18C);
    // 0x8023CAE0: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x8023CAE4: or          $t9, $t7, $v0
    ctx->r25 = ctx->r15 | ctx->r2;
    // 0x8023CAE8: addiu       $t8, $a2, 0x8
    ctx->r24 = ADD32(ctx->r6, 0X8);
    // 0x8023CAEC: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023CAF0: lui         $t6, 0xF700
    ctx->r14 = S32(0XF700 << 16);
    // 0x8023CAF4: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x8023CAF8: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x8023CAFC: lw          $a3, 0x18C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18C);
    // 0x8023CB00: andi        $t7, $v1, 0x3FF
    ctx->r15 = ctx->r3 & 0X3FF;
    // 0x8023CB04: sll         $t9, $t7, 14
    ctx->r25 = S32(ctx->r15 << 14);
    // 0x8023CB08: addiu       $t6, $a3, 0x8
    ctx->r14 = ADD32(ctx->r7, 0X8);
    // 0x8023CB0C: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023CB10: andi        $t6, $t2, 0x3FF
    ctx->r14 = ctx->r10 & 0X3FF;
    // 0x8023CB14: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8023CB18: or          $t8, $t9, $at
    ctx->r24 = ctx->r25 | ctx->r1;
    // 0x8023CB1C: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8023CB20: andi        $t7, $ra, 0x3FF
    ctx->r15 = ctx->r31 & 0X3FF;
    // 0x8023CB24: andi        $t6, $s2, 0x3FF
    ctx->r14 = ctx->r18 & 0X3FF;
    // 0x8023CB28: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x8023CB2C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8023CB30: sll         $t8, $t6, 14
    ctx->r24 = S32(ctx->r14 << 14);
    // 0x8023CB34: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8023CB38: sw          $t6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r14;
    // 0x8023CB3C: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023CB40: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8023CB44: ori         $t9, $t9, 0x1402
    ctx->r25 = ctx->r25 | 0X1402;
    // 0x8023CB48: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8023CB4C: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023CB50: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8023CB54: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x8023CB58: lw          $t6, 0x18C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18C);
    // 0x8023CB5C: lui         $t8, 0xBB00
    ctx->r24 = S32(0XBB00 << 16);
    // 0x8023CB60: ori         $t8, $t8, 0x1
    ctx->r24 = ctx->r24 | 0X1;
    // 0x8023CB64: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8023CB68: sw          $t7, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r15;
    // 0x8023CB6C: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x8023CB70: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x8023CB74: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
L_8023CB78:
    // 0x8023CB78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8023CB7C: bne         $a0, $at, L_8023CB9C
    if (ctx->r4 != ctx->r1) {
        // 0x8023CB80: lw          $t9, 0x18C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X18C);
            goto L_8023CB9C;
    }
    // 0x8023CB80: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x8023CB84: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x8023CB88: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023CB8C: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8023CB90: ori         $t7, $t7, 0xE02
    ctx->r15 = ctx->r15 | 0XE02;
    // 0x8023CB94: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x8023CB98: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
L_8023CB9C:
    // 0x8023CB9C: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023CBA0: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x8023CBA4: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8023CBA8: sw          $t9, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r25;
    // 0x8023CBAC: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8023CBB0: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
    // 0x8023CBB4: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023CBB8: sw          $t7, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r15;
    // 0x8023CBBC: lw          $v0, 0x188($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X188);
L_8023CBC0:
    // 0x8023CBC0: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8023CBC4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8023CBC8: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8023CBCC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8023CBD0: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8023CBD4: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8023CBD8: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8023CBDC: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x8023CBE0: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x8023CBE4: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x8023CBE8: jr          $ra
    // 0x8023CBEC: addiu       $sp, $sp, 0x1A8
    ctx->r29 = ADD32(ctx->r29, 0X1A8);
    return;
    // 0x8023CBEC: addiu       $sp, $sp, 0x1A8
    ctx->r29 = ADD32(ctx->r29, 0X1A8);
;}
RECOMP_FUNC void func_802450E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802450E8: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x802450EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802450F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802450F4: lbu         $t6, 0x65($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X65);
    // 0x802450F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802450FC: beq         $t6, $zero, L_8024511C
    if (ctx->r14 == 0) {
        // 0x80245100: nop
    
            goto L_8024511C;
    }
    // 0x80245100: nop

    // 0x80245104: jal         0x802456A0
    // 0x80245108: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    func_802456A0(rdram, ctx);
        goto after_0;
    // 0x80245108: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    after_0:
    // 0x8024510C: beq         $v0, $zero, L_8024511C
    if (ctx->r2 == 0) {
        // 0x80245110: nop
    
            goto L_8024511C;
    }
    // 0x80245110: nop

    // 0x80245114: b           L_802452E0
    // 0x80245118: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802452E0;
    // 0x80245118: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024511C:
    // 0x8024511C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80245120: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x80245124: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80245128: jal         0x80245710
    // 0x8024512C: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    func_80245710(rdram, ctx);
        goto after_1;
    // 0x8024512C: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    after_1:
    // 0x80245130: beq         $v0, $zero, L_80245140
    if (ctx->r2 == 0) {
        // 0x80245134: addiu       $a0, $sp, 0x60
        ctx->r4 = ADD32(ctx->r29, 0X60);
            goto L_80245140;
    }
    // 0x80245134: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80245138: b           L_802452E0
    // 0x8024513C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802452E0;
    // 0x8024513C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80245140:
    // 0x80245140: addiu       $a1, $sp, 0x82
    ctx->r5 = ADD32(ctx->r29, 0X82);
    // 0x80245144: jal         0x80244B3C
    // 0x80245148: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    func_80244B3C(rdram, ctx);
        goto after_2;
    // 0x80245148: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    after_2:
    // 0x8024514C: lhu         $t7, 0x82($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X82);
    // 0x80245150: lhu         $t8, 0x7C($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X7C);
    // 0x80245154: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x80245158: bne         $t7, $t8, L_80245174
    if (ctx->r15 != ctx->r24) {
        // 0x8024515C: sw          $a1, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r5;
            goto L_80245174;
    }
    // 0x8024515C: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x80245160: lhu         $t9, 0x80($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X80);
    // 0x80245164: lhu         $t1, 0x7E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X7E);
    // 0x80245168: nop

    // 0x8024516C: beq         $t9, $t1, L_802451C4
    if (ctx->r25 == ctx->r9) {
        // 0x80245170: lw          $t3, 0x38($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X38);
            goto L_802451C4;
    }
    // 0x80245170: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
L_80245174:
    // 0x80245174: jal         0x80244F84
    // 0x80245178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80244F84(rdram, ctx);
        goto after_3;
    // 0x80245178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8024517C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80245180: bne         $v0, $at, L_802451B0
    if (ctx->r2 != ctx->r1) {
        // 0x80245184: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_802451B0;
    }
    // 0x80245184: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80245188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024518C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x80245190: jal         0x80244C38
    // 0x80245194: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_80244C38(rdram, ctx);
        goto after_4;
    // 0x80245194: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x80245198: beq         $v0, $zero, L_802451A8
    if (ctx->r2 == 0) {
        // 0x8024519C: addiu       $t2, $sp, 0x40
        ctx->r10 = ADD32(ctx->r29, 0X40);
            goto L_802451A8;
    }
    // 0x8024519C: addiu       $t2, $sp, 0x40
    ctx->r10 = ADD32(ctx->r29, 0X40);
    // 0x802451A0: b           L_802452E0
    // 0x802451A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802452E0;
    // 0x802451A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802451A8:
    // 0x802451A8: b           L_802451C0
    // 0x802451AC: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
        goto L_802451C0;
    // 0x802451AC: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
L_802451B0:
    // 0x802451B0: beq         $v0, $zero, L_802451C4
    if (ctx->r2 == 0) {
        // 0x802451B4: lw          $t3, 0x38($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X38);
            goto L_802451C4;
    }
    // 0x802451B4: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x802451B8: b           L_802452DC
    // 0x802451BC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_802452DC;
    // 0x802451BC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_802451C0:
    // 0x802451C0: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
L_802451C4:
    // 0x802451C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802451C8: lhu         $t4, 0x18($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X18);
    // 0x802451CC: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x802451D0: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x802451D4: bne         $t5, $zero, L_80245214
    if (ctx->r13 != 0) {
        // 0x802451D8: lw          $v1, 0x38($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X38);
            goto L_80245214;
    }
    // 0x802451D8: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x802451DC: jal         0x80244C38
    // 0x802451E0: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_80244C38(rdram, ctx);
        goto after_5;
    // 0x802451E0: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_5:
    // 0x802451E4: beq         $v0, $zero, L_802451F8
    if (ctx->r2 == 0) {
        // 0x802451E8: lhu         $t7, 0x58($sp)
        ctx->r15 = MEM_HU(ctx->r29, 0X58);
            goto L_802451F8;
    }
    // 0x802451E8: lhu         $t7, 0x58($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X58);
    // 0x802451EC: b           L_802452E0
    // 0x802451F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802452E0;
    // 0x802451F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802451F4: lhu         $t7, 0x58($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X58);
L_802451F8:
    // 0x802451F8: addiu       $t6, $sp, 0x40
    ctx->r14 = ADD32(ctx->r29, 0X40);
    // 0x802451FC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80245200: bne         $t8, $zero, L_80245210
    if (ctx->r24 != 0) {
        // 0x80245204: sw          $t6, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r14;
            goto L_80245210;
    }
    // 0x80245204: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x80245208: b           L_802452DC
    // 0x8024520C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_802452DC;
    // 0x8024520C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_80245210:
    // 0x80245210: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
L_80245214:
    // 0x80245214: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80245218: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8024521C: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x80245220: addiu       $a1, $v1, 0x1
    ctx->r5 = ADD32(ctx->r3, 0X1);
    // 0x80245224: addiu       $a2, $v1, 0x2
    ctx->r6 = ADD32(ctx->r3, 0X2);
    // 0x80245228: addiu       $a3, $v1, 0x3
    ctx->r7 = ADD32(ctx->r3, 0X3);
L_8024522C:
    // 0x8024522C: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x80245230: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80245234: sb          $t9, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r25;
    // 0x80245238: lbu         $t1, 0x0($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X0);
    // 0x8024523C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80245240: sb          $t1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r9;
    // 0x80245244: lbu         $t2, 0x0($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X0);
    // 0x80245248: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8024524C: sb          $t2, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r10;
    // 0x80245250: lbu         $t4, 0x0($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0X0);
    // 0x80245254: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80245258: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8024525C: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80245260: bne         $a0, $t0, L_8024522C
    if (ctx->r4 != ctx->r8) {
        // 0x80245264: sb          $t4, 0xB($v0)
        MEM_B(0XB, ctx->r2) = ctx->r12;
            goto L_8024522C;
    }
    // 0x80245264: sb          $t4, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r12;
    // 0x80245268: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8024526C: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80245270: lbu         $t3, 0x1B($t5)
    ctx->r11 = MEM_BU(ctx->r13, 0X1B);
    // 0x80245274: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x80245278: sw          $t3, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r11;
    // 0x8024527C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80245280: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80245284: lbu         $t7, 0x1A($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1A);
    // 0x80245288: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x8024528C: andi        $v0, $t7, 0xFF
    ctx->r2 = ctx->r15 & 0XFF;
    // 0x80245290: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80245294: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x80245298: addiu       $t0, $v1, 0x8
    ctx->r8 = ADD32(ctx->r3, 0X8);
    // 0x8024529C: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x802452A0: addu        $t4, $t0, $v1
    ctx->r12 = ADD32(ctx->r8, ctx->r3);
    // 0x802452A4: sw          $t9, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r25;
    // 0x802452A8: sw          $t1, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r9;
    // 0x802452AC: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
    // 0x802452B0: sw          $t0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r8;
    // 0x802452B4: sw          $t4, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r12;
    // 0x802452B8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802452BC: addiu       $a3, $s0, 0x2C
    ctx->r7 = ADD32(ctx->r16, 0X2C);
    // 0x802452C0: jal         0x80245710
    // 0x802452C4: sb          $t7, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r15;
    func_80245710(rdram, ctx);
        goto after_6;
    // 0x802452C4: sb          $t7, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r15;
    after_6:
    // 0x802452C8: beq         $v0, $zero, L_802452D8
    if (ctx->r2 == 0) {
        // 0x802452CC: nop
    
            goto L_802452D8;
    }
    // 0x802452CC: nop

    // 0x802452D0: b           L_802452E0
    // 0x802452D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802452E0;
    // 0x802452D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802452D8:
    // 0x802452D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802452DC:
    // 0x802452DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802452E0:
    // 0x802452E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802452E4: jr          $ra
    // 0x802452E8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x802452E8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80230F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80230F60: jr          $ra
    // 0x80230F64: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x80230F64: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_80231584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231584: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231588: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8023158C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231590: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80231594: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80231598: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023159C: addiu       $a1, $a1, 0xC88
    ctx->r5 = ADD32(ctx->r5, 0XC88);
    // 0x802315A0: addiu       $a0, $a0, 0xC70
    ctx->r4 = ADD32(ctx->r4, 0XC70);
    // 0x802315A4: jal         0x802371E0
    // 0x802315A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802371E0(rdram, ctx);
        goto after_0;
    // 0x802315A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x802315AC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802315B0: addiu       $a1, $a1, 0xC70
    ctx->r5 = ADD32(ctx->r5, 0XC70);
    // 0x802315B4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x802315B8: jal         0x8023DF30
    // 0x802315BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_8023DF30(rdram, ctx);
        goto after_1;
    // 0x802315BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802315C0: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802315C4: addiu       $a0, $a0, 0xC70
    ctx->r4 = ADD32(ctx->r4, 0XC70);
    // 0x802315C8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x802315CC: jal         0x802374B0
    // 0x802315D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_2;
    // 0x802315D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x802315D4: jal         0x8023E6A0
    // 0x802315D8: nop

    func_8023E6A0(rdram, ctx);
        goto after_3;
    // 0x802315D8: nop

    after_3:
    // 0x802315DC: lw          $t6, 0x11C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X11C);
    // 0x802315E0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802315E4: sw          $t6, 0xC8C($at)
    MEM_W(0XC8C, ctx->r1) = ctx->r14;
L_802315E8:
    // 0x802315E8: jal         0x80220340
    // 0x802315EC: nop

    func_80220340(rdram, ctx);
        goto after_4;
    // 0x802315EC: nop

    after_4:
    // 0x802315F0: jal         0x80231268
    // 0x802315F4: nop

    func_80231268(rdram, ctx);
        goto after_5;
    // 0x802315F4: nop

    after_5:
    // 0x802315F8: jal         0x80221BC4
    // 0x802315FC: nop

    func_80221BC4(rdram, ctx);
        goto after_6;
    // 0x802315FC: nop

    after_6:
    // 0x80231600: b           L_802315E8
    // 0x80231604: nop

        goto L_802315E8;
    // 0x80231604: nop

    // 0x80231608: nop

    // 0x8023160C: nop

    // 0x80231610: nop

    // 0x80231614: nop

    // 0x80231618: nop

    // 0x8023161C: nop

    // 0x80231620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231624: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80231628: jr          $ra
    // 0x8023162C: nop

    return;
    // 0x8023162C: nop

;}
RECOMP_FUNC void func_80228818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022881C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228820: bltz        $a0, L_80228840
    if (SIGNED(ctx->r4) < 0) {
        // 0x80228824: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_80228840;
    }
    // 0x80228824: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80228828: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8022882C: lhu         $t6, 0xBFE($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XBFE);
    // 0x80228830: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x80228834: addiu       $v1, $v1, 0x5A44
    ctx->r3 = ADD32(ctx->r3, 0X5A44);
    // 0x80228838: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022883C: beq         $at, $zero, L_80228854
    if (ctx->r1 == 0) {
        // 0x80228840: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80228854;
    }
L_80228840:
    // 0x80228840: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80228844: jal         0x80231A24
    // 0x80228848: addiu       $a0, $a0, 0x3D70
    ctx->r4 = ADD32(ctx->r4, 0X3D70);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80228848: addiu       $a0, $a0, 0x3D70
    ctx->r4 = ADD32(ctx->r4, 0X3D70);
    after_0:
    // 0x8022884C: b           L_80228888
    // 0x80228850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80228888;
    // 0x80228850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80228854:
    // 0x80228854: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80228858: sll         $v0, $a1, 5
    ctx->r2 = S32(ctx->r5 << 5);
    // 0x8022885C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80228860: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80228864: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x80228868: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8022886C: addiu       $a0, $a0, 0x5A30
    ctx->r4 = ADD32(ctx->r4, 0X5A30);
    // 0x80228870: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x80228874: sb          $zero, 0x1($t0)
    MEM_B(0X1, ctx->r8) = 0;
    // 0x80228878: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8022887C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80228880: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80228884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80228888:
    // 0x80228888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022888C: jr          $ra
    // 0x80228890: nop

    return;
    // 0x80228890: nop

;}
RECOMP_FUNC void func_80248030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248030: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80248034: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x80248038: jr          $ra
    // 0x8024803C: nop

    return;
    // 0x8024803C: nop

;}
RECOMP_FUNC void func_802115D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802115D4: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802115D8: lhu         $a0, 0xBD8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XBD8);
    // 0x802115DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802115E0: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x802115E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802115E8: addiu       $t6, $t6, 0xB68
    ctx->r14 = ADD32(ctx->r14, 0XB68);
    // 0x802115EC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802115F0: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x802115F4: sw          $t6, -0x18F0($at)
    MEM_W(-0X18F0, ctx->r1) = ctx->r14;
    // 0x802115F8: jal         0x8022BA58
    // 0x802115FC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8022BA58(rdram, ctx);
        goto after_0;
    // 0x802115FC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x80211600: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80211604: lhu         $a0, 0xBD8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XBD8);
    // 0x80211608: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x8021160C: sw          $v0, -0x3C64($at)
    MEM_W(-0X3C64, ctx->r1) = ctx->r2;
    // 0x80211610: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80211614: jal         0x8022BA58
    // 0x80211618: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8022BA58(rdram, ctx);
        goto after_1;
    // 0x80211618: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_1:
    // 0x8021161C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80211620: lhu         $a0, 0xBD8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XBD8);
    // 0x80211624: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80211628: sw          $v0, -0x3C60($at)
    MEM_W(-0X3C60, ctx->r1) = ctx->r2;
    // 0x8021162C: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x80211630: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x80211634: jal         0x8022BA58
    // 0x80211638: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    func_8022BA58(rdram, ctx);
        goto after_2;
    // 0x80211638: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    after_2:
    // 0x8021163C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211640: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80211644: sw          $v0, -0x3C5C($at)
    MEM_W(-0X3C5C, ctx->r1) = ctx->r2;
    // 0x80211648: jr          $ra
    // 0x8021164C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8021164C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
